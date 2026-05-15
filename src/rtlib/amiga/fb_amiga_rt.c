/* FreeBASIC Amiga Runtime - self-contained, no libnix dependency */
#include <stddef.h>
typedef signed int int32;
typedef unsigned int uint32;
typedef struct { char *data; int32 len; int32 size; } FBSTRING;

extern void *DOSBase;
extern void *SysBase;

/* exec.library AllocMem/FreeMem */
static void *amiga_alloc(unsigned long size) {
    register void *a6 __asm("a6") = SysBase;
    register unsigned long d0 __asm("d0") = size;
    register unsigned long d1 __asm("d1") = 0; /* MEMF_ANY */
    register void *res __asm("d0");
    __asm volatile ("jsr -198(%%a6)" : "=r"(res) : "r"(a6), "0"(d0), "r"(d1) : "a0","a1","memory");
    return res;
}
static void amiga_free(void *ptr, unsigned long size) {
    register void *a6 __asm("a6") = SysBase;
    register void *a1 __asm("a1") = ptr;
    register unsigned long d0 __asm("d0") = size;
    __asm volatile ("jsr -210(%%a6)" : : "r"(a6), "r"(a1), "r"(d0) : "d1","a0","memory");
}

/* dos.library Output/Write */
static long dos_Output(void) {
    register void *a6 __asm("a6") = DOSBase;
    register long res __asm("d0");
    __asm volatile ("jsr -60(%%a6)" : "=r"(res) : "r"(a6) : "a0","a1","d1","memory");
    return res;
}
static void dos_Write_buf(const void *buf, long len) {
    long out = dos_Output();
    if (!out) return;
    register void *a6 __asm("a6") = DOSBase;
    register long d1 __asm("d1") = out;
    register const void *d2 __asm("d2") = buf;
    register long d3 __asm("d3") = len;
    __asm volatile ("jsr -48(%%a6)" : : "r"(a6), "r"(d1), "r"(d2), "r"(d3) : "d0","a0","a1","memory");
}

/* Forward declarations for file I/O */
static long dos_Open(const char *name, long mode);
static void dos_Close(long fh);
static long dos_Read(long fh, void *buf, long len);
static long dos_Write(long fh, const void *buf, long len);
static long dos_Input(void);

/* C stdlib */
void *malloc(size_t size) {
    void *p = amiga_alloc(size + 4);
    if (p) { *(uint32*)p = size + 4; return (char*)p + 4; }
    return 0;
}
void free(void *ptr) {
    if (!ptr) return;
    uint32 *real = (uint32*)ptr - 1;
    amiga_free(real, *real);
}
void *calloc(size_t n, size_t s) { size_t t=n*s; void *p=malloc(t); if(p) memset(p,0,t); return p; }
void *realloc(void *p, size_t s) { if(!p)return malloc(s); void *n=malloc(s); if(n){uint32 o=*((uint32*)p-1)-4;uint32 c=o<s?o:s;memcpy(n,p,c);free(p);} return n; }
void *memset(void *s, int c, size_t n) { char *p=s; while(n--) *p++=c; return s; }
void *memcpy(void *d, const void *s, size_t n) { char *dd=d;const char *ss=s; while(n--) *dd++=*ss++; return d; }
size_t strlen(const char *s) { const char *p=s; while(*p)p++; return p-s; }

/* File handle table (defined below) */
#define FB_MAX_FILES 16
static long file_handles[FB_MAX_FILES];

/* FB Runtime */
void fb_Init(int32 argc, char **argv, int32 lang) { }
void fb_End(int32 code) { }

FBSTRING *fb_StrAllocTempDescZEx(char *str, int32 len) {
    static FBSTRING ring[8];
    static int idx = 0;
    FBSTRING *tmp = &ring[idx];
    idx = (idx + 1) & 7;
    tmp->data = str; tmp->len = len; tmp->size = 0;
    return tmp;
}

void fb_PrintString(int32 fnum, FBSTRING *s, int32 mask) {
    if (fnum > 0 && fnum < FB_MAX_FILES && file_handles[fnum]) {
        /* Write to file */
        if (s && s->data && s->len > 0)
            dos_Write(file_handles[fnum], s->data, s->len);
        if (mask & 1)
            dos_Write(file_handles[fnum], "\n", 1);
    } else {
        /* Write to stdout */
        if (s && s->data && s->len > 0) dos_Write_buf(s->data, s->len);
        if (mask & 1) dos_Write_buf("\n", 1);
    }
}

void fb_PrintInt(int32 fnum, int32 val, int32 mask) {
    char buf[12]; int i=0, neg=0;
    uint32 uval;
    if (val >= 0) dos_Write_buf(" ", 1);
    if (val < 0) { neg=1; uval=(uint32)(-(val+1))+1; } else { uval=(uint32)val; }
    if (uval == 0) buf[i++]='0';
    while(uval>0){buf[i++]='0'+(uval%10);uval/=10;}
    if(neg) buf[i++]='-';
    /* reverse */
    char out[12]; int j;
    for(j=0;j<i;j++) out[j]=buf[i-1-j];
    dos_Write_buf(out, i);
    if (mask & 1) dos_Write_buf("\n", 1);
}

void fb_PrintVoid(int32 fnum, int32 mask) {
    if (mask & 1) dos_Write_buf("\n", 1);
}

/* String functions */
FBSTRING *fb_StrAssign(void *dst, int32 dst_size, void *src, int32 src_size, int32 fill_rem) {
    FBSTRING *d = (FBSTRING*)dst;
    char *s_data; int32 s_len;
    if (!src) { s_data = NULL; s_len = 0; }
    else if (src_size == -1) { /* FBSTRING */
        FBSTRING *ss = (FBSTRING*)src;
        s_data = ss->data; s_len = ss->len;
    } else { /* zstring */
        s_data = (char*)src; s_len = src_size > 0 ? src_size : (s_data ? strlen(s_data) : 0);
    }
    if (s_len == 0) {
        /* Assign empty string */
        if (d->data) free(d->data);
        d->data = NULL; d->len = 0; d->size = 0;
    } else {
        /* Allocate new buffer before freeing old (handles self-assignment) */
        char *new_data = malloc(s_len + 1);
        if (new_data) {
            memcpy(new_data, s_data, s_len);
            new_data[s_len] = 0;
            if (d->data) free(d->data);
            d->data = new_data;
            d->len = s_len;
            d->size = s_len + 1;
        }
        /* On malloc failure, keep existing string unchanged */
    }
    return d;
}

void fb_StrDelete(FBSTRING *s) {
    if (s && s->data) { free(s->data); s->data = 0; s->len = 0; s->size = 0; }
}

int32 fb_StrLen(void *s, int32 s_size) {
    if (s_size == -1) return ((FBSTRING*)s)->len;
    return strlen((char*)s);
}


/* === File I/O via dos.library === */

/* file_handles declared above */

static long dos_Open(const char *name, long mode) {
    register void *a6 __asm("a6") = DOSBase;
    register const char *d1 __asm("d1") = name;
    register long d2 __asm("d2") = mode;
    register long res __asm("d0");
    __asm volatile ("jsr -30(%%a6)" : "=r"(res) : "r"(a6), "r"(d1), "r"(d2) : "a0","a1","memory");
    return res;
}

static void dos_Close(long fh) {
    register void *a6 __asm("a6") = DOSBase;
    register long d1 __asm("d1") = fh;
    __asm volatile ("jsr -36(%%a6)" : : "r"(a6), "r"(d1) : "d0","a0","a1","memory");
}

static long dos_Read(long fh, void *buf, long len) {
    register void *a6 __asm("a6") = DOSBase;
    register long d1 __asm("d1") = fh;
    register void *d2 __asm("d2") = buf;
    register long d3 __asm("d3") = len;
    register long res __asm("d0");
    __asm volatile ("jsr -42(%%a6)" : "=r"(res) : "r"(a6), "r"(d1), "r"(d2), "r"(d3) : "a0","a1","memory");
    return res;
}

static long dos_Write(long fh, const void *buf, long len) {
    register void *a6 __asm("a6") = DOSBase;
    register long d1 __asm("d1") = fh;
    register const void *d2 __asm("d2") = buf;
    register long d3 __asm("d3") = len;
    register long res __asm("d0");
    __asm volatile ("jsr -48(%%a6)" : "=r"(res) : "r"(a6), "r"(d1), "r"(d2), "r"(d3) : "a0","a1","memory");
    return res;
}

/* MODE_OLDFILE=1005, MODE_NEWFILE=1006, MODE_READWRITE=1004 */
int fb_FileOpen(FBSTRING *str, unsigned int mode, unsigned int access,
                unsigned int lock, int fnum, int len) {
    if (fnum < 1 || fnum >= FB_MAX_FILES || !str || !str->data) return 1;
    long amiga_mode;
    if (mode == 3) amiga_mode = 1006; /* Output -> MODE_NEWFILE */
    else if (mode == 4) amiga_mode = 1004; /* Append -> MODE_READWRITE */
    else amiga_mode = 1005; /* Input -> MODE_OLDFILE */

    long fh = dos_Open(str->data, amiga_mode);
    if (!fh) return 1;
    file_handles[fnum] = fh;
    return 0;
}

int fb_FileClose(int fnum) {
    if (fnum < 1 || fnum >= FB_MAX_FILES) return 1;
    if (file_handles[fnum]) {
        dos_Close(file_handles[fnum]);
        file_handles[fnum] = 0;
    }
    return 0;
}

int fb_FileLineInput(int fnum, void *dst, int32 dst_len, int fillrem) {
    FBSTRING *d = (FBSTRING *)dst;
    int capacity = 256, i = 0;
    char *buf = malloc(capacity);
    long fh = (fnum > 0 && fnum < FB_MAX_FILES) ? file_handles[fnum] : 0;
    if (!fh || !buf) { if(buf) free(buf); return 1; }

    while (1) {
        char c;
        long r = dos_Read(fh, &c, 1);
        if (r <= 0) break;
        if (c == '\n') break;
        if (c == '\r') continue;
        if (i >= capacity - 1) {
            capacity *= 2;
            char *newbuf = realloc(buf, capacity);
            if (!newbuf) break;
            buf = newbuf;
        }
        buf[i++] = c;
    }
    buf[i] = 0;

    char *new_data = malloc(i + 1);
    if (new_data) {
        memcpy(new_data, buf, i + 1);
        if (d->data) free(d->data);
        d->data = new_data;
        d->len = i;
        d->size = i + 1;
    } else {
        if (d->data) free(d->data);
        d->data = NULL; d->len = 0; d->size = 0;
    }
    free(buf);
    return 0;
}

/* === Console Input === */

static long dos_Input(void) {
    register void *a6 __asm("a6") = DOSBase;
    register long res __asm("d0");
    __asm volatile ("jsr -54(%%a6)" : "=r"(res) : "r"(a6) : "a0","a1","d1","memory");
    return res;
}

int fb_ConsoleInput(FBSTRING *text, int addquestion, int addnewline) {
    /* Print prompt */
    if (text && text->data && text->len > 0)
        dos_Write_buf(text->data, text->len);
    if (addquestion) dos_Write_buf("? ", 2);

    /* Read line from stdin */
    char buf[256];
    int i = 0;
    long in = dos_Input();
    if (!in) return 1;

    while (i < 255) {
        char c;
        long r = dos_Read(in, &c, 1);
        if (r <= 0) break;
        if (c == '\n') break;
        if (c == '\r') continue;
        buf[i++] = c;
    }
    buf[i] = 0;
    if (addnewline) dos_Write_buf("\n", 1);
    return 0;
}

int fb_InputString(void *dst, int32 dst_len, int32 fillrem) {
    char buf[256];
    int i = 0;
    long in = dos_Input();
    if (!in) return 1;

    while (i < 255) {
        char c;
        long r = dos_Read(in, &c, 1);
        if (r <= 0) break;
        if (c == '\n') break;
        if (c == '\r') continue;
        buf[i++] = c;
    }
    buf[i] = 0;

    if (dst_len == -1) {
        /* dst is FBSTRING* */
        FBSTRING *d = (FBSTRING *)dst;
        char *new_data = malloc(i + 1);
        if (new_data) {
            memcpy(new_data, buf, i + 1);
            if (d->data) free(d->data);
            d->data = new_data;
            d->len = i; d->size = i + 1;
        } else {
            if (d->data) free(d->data);
            d->data = NULL; d->len = 0; d->size = 0;
        }
    } else {
        /* dst is char* with fixed length */
        int copy = i < dst_len - 1 ? i : dst_len - 1;
        memcpy(dst, buf, copy);
        ((char*)dst)[copy] = 0;
    }
    return 0;
}

/* fb_Inkey defined below with WaitForChar */

/* === Float/Double printing (integer-only implementation) === */

/* We receive the double from the generated code (which uses FPU).
   To print it without soft-float in OUR code, we use a union trick
   to extract the value as a scaled integer. The compiler will use
   FPU for the multiply, which is fine (68020+68881 or vamos). */
void fb_PrintDouble(int32 fnum, double val, int32 mask) {
    char buf[32];
    int i = 0;
    /* Use a simple scaled-integer approach:
       Multiply by 1000000, convert to long, print with decimal point */
    int neg = 0;
    if (val < 0.0) { neg = 1; val = -val; }
    if (!neg) buf[i++] = ' ';
    else buf[i++] = '-';

    /* Scale to get 6 decimal places as integer */
    long long scaled = (long long)(val * 1000000.0 + 0.5);
    long long ipart = scaled / 1000000;
    long long fpart = scaled % 1000000;
    if (fpart < 0) fpart = -fpart;

    /* Print integer part */
    char tmp[24]; int ti = 0;
    if (ipart == 0) tmp[ti++] = '0';
    while (ipart > 0) { tmp[ti++] = '0' + (int)(ipart % 10); ipart /= 10; }
    while (ti > 0) buf[i++] = tmp[--ti];

    /* Print fractional part */
    buf[i++] = '.';
    int d;
    long long div = 100000;
    for (d = 0; d < 6; d++) {
        buf[i++] = '0' + (int)(fpart / div);
        fpart %= div;
        div /= 10;
    }
    /* Remove trailing zeros */
    while (i > 1 && buf[i-1] == '0') i--;
    if (buf[i-1] == '.') i++;

    if (fnum > 0 && fnum < FB_MAX_FILES && file_handles[fnum])
        dos_Write(file_handles[fnum], buf, i);
    else
        dos_Write_buf(buf, i);
    if (mask & 1) {
        if (fnum > 0 && fnum < FB_MAX_FILES && file_handles[fnum])
            dos_Write(file_handles[fnum], "\n", 1);
        else
            dos_Write_buf("\n", 1);
    }
}

void fb_PrintSingle(int32 fnum, float val, int32 mask) {
    fb_PrintDouble(fnum, (double)val, mask);
}

/* === Interactive Console Input === */

static long dos_WaitForChar(long fh, long timeout) {
    register void *a6 __asm("a6") = DOSBase;
    register long d1 __asm("d1") = fh;
    register long d2 __asm("d2") = timeout;
    register long res __asm("d0");
    __asm volatile ("jsr -204(%%a6)" : "=r"(res) : "r"(a6), "r"(d1), "r"(d2) : "a0","a1","memory");
    return res;
}

/* Redefine fb_Inkey to actually read a key non-blocking */
#undef fb_Inkey
FBSTRING *fb_Inkey(void) {
    static FBSTRING result;
    static char keybuf[2];
    long in = dos_Input();
    if (!in) { result.data = 0; result.len = 0; return &result; }

    /* Check if a character is available (0 timeout = non-blocking) */
    if (dos_WaitForChar(in, 0)) {
        char c;
        long r = dos_Read(in, &c, 1);
        if (r == 1) {
            keybuf[0] = c;
            keybuf[1] = 0;
            result.data = keybuf;
            result.len = 1;
            result.size = 0;
            return &result;
        }
    }
    result.data = 0;
    result.len = 0;
    result.size = 0;
    return &result;
}

/* === Sleep / Timer === */

/* dos.library Delay() - ticks are 1/50th second */
static void dos_Delay(long ticks) {
    register void *a6 __asm("a6") = DOSBase;
    register long d1 __asm("d1") = ticks;
    __asm volatile ("jsr -198(%%a6)" : : "r"(a6), "r"(d1) : "d0","a0","a1","memory");
}

/* FB Sleep takes milliseconds */
void fb_Sleep(int32 msecs) {
    if (msecs <= 0) msecs = 1;
    long ticks = msecs / 20; /* 1 tick = 20ms (50Hz) */
    if (ticks < 1) ticks = 1;
    dos_Delay(ticks);
}

void fb_Delay(int32 msecs) { fb_Sleep(msecs); }

/* Timer - returns seconds as double using DateStamp */
double fb_Timer(void) {
    /* DateStamp: days, minutes, ticks (1/50s) */
    long ds[3];
    register void *a6 __asm("a6") = DOSBase;
    register long *d1 __asm("d1") = ds;
    __asm volatile ("jsr -192(%%a6)" : : "r"(a6), "r"(d1) : "d0","a0","a1","memory");
    /* Convert to seconds */
    return (double)ds[1] * 60.0 + (double)ds[2] / 50.0;
}

/* Proper exit - not reachable in normal flow (startup.s handles return).
   If called directly, just loop. The OS will reclaim resources on process end. */
void exit(int code) {
    (void)code;
    for(;;);
}
