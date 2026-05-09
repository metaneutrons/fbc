#include "../fb.h"
#include <string.h>

char *fb_hGetExeName(char *dst, ssize_t maxlen)
{
    dst[0] = '\0';
    /* TODO: use GetProgramName() on AmigaOS */
    strncpy(dst, "fb_program", maxlen - 1);
    dst[maxlen - 1] = '\0';
    return dst;
}
