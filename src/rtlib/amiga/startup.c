/* Minimal AmigaOS startup for FreeBASIC - no FPU, no libnix */
#include <exec/types.h>
#include <stddef.h>

struct ExecBase *SysBase;
struct Library *DOSBase;
void *LocaleBase = 0;
void *_impure_ptr = 0;

extern int main(int argc, char **argv);

/* Raw entry point */
__attribute__((used, section(".text.startup")))
int _start(void)
{
    int ret;
    SysBase = *(struct ExecBase **)4L;
    
    /* OpenLibrary("dos.library", 36) */
    {
        register struct ExecBase *a6 __asm("a6") = SysBase;
        register const char *a1 __asm("a1") = "dos.library";
        register long d0 __asm("d0") = 36;
        register void *res __asm("d0");
        __asm volatile ("jsr -552(%%a6)" : "=r"(res) : "r"(a6), "r"(a1), "0"(d0) : "a0","a1","d1","memory");
        DOSBase = res;
    }
    if (!DOSBase) return 20;

    ret = main(0, 0);

    /* CloseLibrary(DOSBase) */
    {
        register struct ExecBase *a6 __asm("a6") = SysBase;
        register void *a1 __asm("a1") = DOSBase;
        __asm volatile ("jsr -414(%%a6)" : : "r"(a6), "r"(a1) : "d0","d1","a0","a1","memory");
    }
    return ret;
}

/* Minimal C stdlib */
void *malloc(size_t size) {
    register struct ExecBase *a6 __asm("a6") = SysBase;
    register unsigned long d0 __asm("d0") = (unsigned long)(size + 4);
    register unsigned long d1 __asm("d1") = 0;
    register void *res __asm("d0");
    __asm volatile ("jsr -198(%%a6)" : "=r"(res) : "r"(a6), "0"(d0), "r"(d1) : "a0","a1","memory");
    if (res) { *(unsigned long *)res = size + 4; return (char *)res + 4; }
    return 0;
}

void free(void *ptr) {
    if (!ptr) return;
    unsigned long *real = (unsigned long *)ptr - 1;
    register struct ExecBase *a6 __asm("a6") = SysBase;
    register void *a1 __asm("a1") = (void *)real;
    register unsigned long d0r __asm("d0") = *real;
    __asm volatile ("jsr -210(%%a6)" : : "r"(a6), "r"(a1), "r"(d0r) : "d1","a0","memory");
}

void *calloc(size_t n, size_t size) {
    void *p = malloc(n * size);
    if (p) { char *c = p; size_t i; for(i=0;i<n*size;i++) c[i]=0; }
    return p;
}

void *realloc(void *ptr, size_t size) {
    if (!ptr) return malloc(size);
    void *new_ptr = malloc(size);
    if (new_ptr) {
        unsigned long old_size = *((unsigned long *)ptr - 1) - 4;
        unsigned long copy = old_size < size ? old_size : size;
        char *d = new_ptr, *s = ptr; unsigned long i;
        for (i = 0; i < copy; i++) d[i] = s[i];
        free(ptr);
    }
    return new_ptr;
}

void *memset(void *s, int c, size_t n) { char *p = s; while(n--) *p++ = c; return s; }
void *memcpy(void *d, const void *s, size_t n) { char *dd=d; const char *ss=s; while(n--) *dd++=*ss++; return d; }
size_t strlen(const char *s) { const char *p = s; while(*p) p++; return p - s; }
int setlocale(int c, const char *l) { return 0; }
int fputs(const char *s, void *f) { return 0; }
void exit(int code) { while(1); }
