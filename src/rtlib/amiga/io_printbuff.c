/* Console output for AmigaOS/AROS/MorphOS */
#include "../fb.h"
#include <string.h>

#if defined(HOST_AMIGAOS)
/* AmigaOS 3.x: use dos.library Write() via inline asm */
extern struct Library *DOSBase;

static long dos_Output(void) {
    register struct Library *a6 __asm("a6") = DOSBase;
    register long res __asm("d0");
    __asm volatile ("jsr -60(%%a6)" : "=r"(res) : "r"(a6) : "a0","a1","d1","memory");
    return res;
}

static void dos_Write_fh(long fh, const void *buf, long len) {
    register struct Library *a6 __asm("a6") = DOSBase;
    register long d1 __asm("d1") = fh;
    register const void *d2 __asm("d2") = buf;
    register long d3 __asm("d3") = len;
    __asm volatile ("jsr -48(%%a6)" : : "r"(a6), "r"(d1), "r"(d2), "r"(d3) : "d0","a0","a1","memory");
}

void fb_ConsolePrintBufferEx(const void *buffer, size_t len, int mask) {
    long out = dos_Output();
    if (out && len > 0) dos_Write_fh(out, buffer, (long)len);
}

#else
/* AROS/MorphOS/AmigaOS4: have working stdio */
#include <stdio.h>

void fb_ConsolePrintBufferEx(const void *buffer, size_t len, int mask) {
    fwrite(buffer, 1, len, stdout);
    fflush(stdout);
}

#endif

void fb_ConsolePrintBuffer(const char *buffer, int mask) {
    fb_ConsolePrintBufferEx(buffer, strlen(buffer), mask);
}

void fb_ConsolePrintBufferWstrEx(const FB_WCHAR *buffer, size_t len, int mask) {
    /* Convert wchar to narrow and print */
    if (!buffer || len == 0) return;
    char tmp[512];
    size_t i;
    for (i = 0; i < len && i < sizeof(tmp)-1; i++)
        tmp[i] = (char)(buffer[i] & 0xFF);
    tmp[i] = 0;
    fb_ConsolePrintBufferEx(tmp, i, mask);
}

void fb_ConsolePrintBufferWstr(const FB_WCHAR *buffer, int mask) {
    size_t len = 0;
    if (buffer) while (buffer[len]) len++;
    fb_ConsolePrintBufferWstrEx(buffer, len, mask);
}
