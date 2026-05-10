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
void *calloc(size_t n, size_t s) { size_t t=n*s; void *p=malloc(t); if(p){char *c=p;size_t i;for(i=0;i<t;i++)c[i]=0;} return p; }
void *realloc(void *p, size_t s) { if(!p)return malloc(s); void *n=malloc(s); if(n){uint32 o=*((uint32*)p-1)-4;uint32 c=o<s?o:s;char*d=n;char*ss=p;uint32 i;for(i=0;i<c;i++)d[i]=ss[i];free(p);} return n; }
void *memset(void *s, int c, size_t n) { char *p=s; while(n--) *p++=c; return s; }
void *memcpy(void *d, const void *s, size_t n) { char *dd=d;const char *ss=s; while(n--) *dd++=*ss++; return d; }
size_t strlen(const char *s) { const char *p=s; while(*p)p++; return p-s; }

/* FB Runtime */
void fb_Init(int32 argc, char **argv, int32 lang) { }
void fb_End(int32 code) { }

FBSTRING *fb_StrAllocTempDescZEx(char *str, int32 len) {
    static FBSTRING tmp;
    tmp.data = str; tmp.len = len; tmp.size = 0;
    return &tmp;
}

void fb_PrintString(int32 fnum, FBSTRING *s, int32 mask) {
    if (s && s->data && s->len > 0) dos_Write_buf(s->data, s->len);
    if (mask & 1) dos_Write_buf("\n", 1);
}

void fb_PrintInt(int32 fnum, int32 val, int32 mask) {
    char buf[12]; int i=0, neg=0;
    if (val >= 0) dos_Write_buf(" ", 1);
    if (val < 0) { neg=1; val=-val; }
    if (val == 0) buf[i++]='0';
    while(val>0){buf[i++]='0'+(val%10);val/=10;}
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
    if (src_size == -1) { /* FBSTRING */
        FBSTRING *ss = (FBSTRING*)src;
        s_data = ss->data; s_len = ss->len;
    } else { /* zstring */
        s_data = (char*)src; s_len = src_size > 0 ? src_size : strlen(s_data);
    }
    if (d->data) free(d->data);
    d->data = malloc(s_len + 1);
    if (d->data) { memcpy(d->data, s_data, s_len); d->data[s_len] = 0; }
    d->len = s_len;
    d->size = s_len + 1;
    return d;
}

void fb_StrDelete(FBSTRING *s) {
    if (s && s->data) { free(s->data); s->data = 0; s->len = 0; s->size = 0; }
}

int32 fb_StrLen(void *s, int32 s_size) {
    if (s_size == -1) return ((FBSTRING*)s)->len;
    return strlen((char*)s);
}

