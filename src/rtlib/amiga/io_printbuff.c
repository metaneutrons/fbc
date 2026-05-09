/* low-level print to console function for AmigaOS/AROS/MorphOS */

#include "../fb.h"
#include <stdio.h>

#ifdef HOST_AMIGAOS
#include <proto/dos.h>
extern struct DosLibrary *DOSBase;
#endif

void fb_ConsolePrintBufferEx(const void *buffer, size_t len, int mask)
{
#ifdef HOST_AMIGAOS
    BPTR out = Output();
    if (out)
        Write(out, (APTR)buffer, len);
#else
    /* AROS/MorphOS have working stdio */
    fwrite(buffer, 1, len, stdout);
    fflush(stdout);
#endif
}

void fb_ConsolePrintBuffer(const char *buffer, int mask)
{
    fb_ConsolePrintBufferEx(buffer, strlen(buffer), mask);
}
