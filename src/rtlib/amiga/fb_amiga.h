#ifndef __FB_AMIGA_H__
#define __FB_AMIGA_H__

/* AmigaOS/AROS/MorphOS platform definitions for the FreeBASIC runtime library */

#include <sys/types.h>
#include <stdlib.h>
#include <string.h>

#define FBCALL

/* Newline sequences */
#define FB_NEWLINE "\n"
#define FB_NEWLINE_WSTR _LC("\n")
#define FB_BINARY_NEWLINE "\r\n"
#define FB_BINARY_NEWLINE_WSTR _LC("\r\n")

/* printf format modifier for long long */
#define FB_LL_FMTMOD "ll"

/* Path separator */
#define FB_HOST_PATHDIV "/"

/* Console pages (no virtual console support) */
#define FB_CONSOLE_MAXPAGES 1

/* File offset type - AmigaOS uses 32-bit file offsets */
typedef long fb_off_t;

/* No background thread locking (no MT support yet) */
#define BG_LOCK()
#define BG_UNLOCK()

#endif
