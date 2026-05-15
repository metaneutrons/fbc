#include "../fb.h"
#include <string.h>

char *fb_hGetExePath(char *dst, ssize_t maxlen)
{
    if (maxlen <= 0) return dst;
    dst[0] = '\0';
    /* TODO: use GetProgramDir() + NameFromLock() on AmigaOS */
    strncpy(dst, "PROGDIR:", maxlen - 1);
    dst[maxlen - 1] = '\0';
    return dst;
}
