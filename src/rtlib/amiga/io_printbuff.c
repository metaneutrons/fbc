#include "../fb.h"
#include <string.h>

/* Write to AmigaOS stdout via dos.library */
extern struct Library *DOSBase;
extern struct ExecBase *SysBase;

static long amiga_Output(void) {
    register struct Library *a6 __asm("a6") = DOSBase;
    register long res __asm("d0");
    __asm volatile ("jsr -60(%%a6)" : "=r"(res) : "r"(a6) : "a0","a1","d1","memory");
    return res;
}

static long amiga_Write(long fh, const void *buf, long len) {
    register struct Library *a6 __asm("a6") = DOSBase;
    register long d1 __asm("d1") = fh;
    register const void *d2 __asm("d2") = buf;
    register long d3 __asm("d3") = len;
    register long res __asm("d0");
    __asm volatile ("jsr -48(%%a6)" : "=r"(res) : "r"(a6), "r"(d1), "r"(d2), "r"(d3) : "a0","a1","memory");
    return res;
}

void fb_ConsolePrintBufferEx(const void *buffer, size_t len, int mask)
{
    long out = amiga_Output();
    if (out) amiga_Write(out, buffer, (long)len);
}

void fb_ConsolePrintBuffer(const char *buffer, int mask)
{
    fb_ConsolePrintBufferEx(buffer, strlen(buffer), mask);
}
