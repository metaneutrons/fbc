#include <stdarg.h>
typedef unsigned long size_t;
extern size_t strlen(const char *);
extern void *memcpy(void *, const void *, size_t);

static int itoa_buf(char *buf, long val, int is_unsigned) {
    char tmp[20]; int i = 0, neg = 0;
    unsigned long uval;
    if (!is_unsigned && val < 0) { neg = 1; uval = (unsigned long)(-(val + 1)) + 1; } else { uval = (unsigned long)val; }
    if (uval == 0) tmp[i++] = '0';
    while (uval > 0) { tmp[i++] = '0' + (uval % 10); uval /= 10; }
    if (neg) tmp[i++] = '-';
    int len = i;
    while (i > 0) *buf++ = tmp[--i];
    return len;
}

int sprintf(char *buf, const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    char *out = buf;
    while (*fmt) {
        if (*fmt != '%') { *out++ = *fmt++; continue; }
        fmt++;
        /* Skip flags/width */
        while (*fmt == '-' || *fmt == '+' || *fmt == ' ' || *fmt == '0' || (*fmt >= '1' && *fmt <= '9')) fmt++;
        /* Length modifier */
        int is_long = 0;
        if (*fmt == 'l') { is_long = 1; fmt++; }
        if (*fmt == 'l') fmt++; /* ll */
        switch (*fmt) {
            case 'd': case 'i':
                out += itoa_buf(out, is_long ? va_arg(ap, long) : va_arg(ap, int), 0);
                break;
            case 'u':
                out += itoa_buf(out, is_long ? va_arg(ap, unsigned long) : va_arg(ap, unsigned int), 1);
                break;
            case 's': {
                char *s = va_arg(ap, char*);
                if (s) { int l = strlen(s); memcpy(out, s, l); out += l; }
                break;
            }
            case 'c': *out++ = (char)va_arg(ap, int); break;
            case '%': *out++ = '%'; break;
            default: *out++ = '%'; *out++ = *fmt; break;
        }
        fmt++;
    }
    *out = 0;
    va_end(ap);
    return out - buf;
}

int snprintf(char *buf, size_t n, const char *fmt, ...) {
    if (n == 0) return 0;
    /* Write to a temp buffer to avoid overflow, then copy up to n-1 */
    char tmp[256];
    va_list ap;
    va_start(ap, fmt);
    int ret = sprintf(tmp, fmt);
    va_end(ap);
    size_t copy = (size_t)ret < n - 1 ? (size_t)ret : n - 1;
    for (size_t i = 0; i < copy; i++) buf[i] = tmp[i];
    buf[copy] = 0;
    return ret;
}
