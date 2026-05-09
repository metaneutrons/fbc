/* AmigaOS/AROS/MorphOS platform definitions */

#include <sys/types.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>

#define FBCALL

#define FB_NEWLINE "\n"
#define FB_NEWLINE_WSTR _LC("\n")
#define FB_BINARY_NEWLINE "\r\n"
#define FB_BINARY_NEWLINE_WSTR _LC("\r\n")

#define FB_LL_FMTMOD "ll"

#define FB_CONSOLE_MAXPAGES 1

typedef long fb_off_t;

/* No background locking on Amiga (single-threaded for now) */
#define BG_LOCK()
#define BG_UNLOCK()
