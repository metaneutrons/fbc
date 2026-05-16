#include "../fb.h"
#include <string.h>

char *fb_hGetExePath(char *dst, ssize_t maxlen) {
    if (maxlen <= 0) return dst;
    strncpy(dst, "PROGDIR:", maxlen - 1);
    dst[maxlen - 1] = '\0';
    return dst;
}
