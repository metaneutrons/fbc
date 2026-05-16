#include "../fb.h"
#include <string.h>

char *fb_hGetExeName(char *dst, ssize_t maxlen) {
    if (maxlen <= 0) return dst;
    dst[0] = '\0';
    return dst;
}
