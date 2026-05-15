/* fre() function for AmigaOS */

#include "../fb.h"

#ifdef HOST_AMIGAOS
#include <proto/exec.h>
#endif

FBCALL size_t fb_GetMemAvail(int mode)
{
#ifdef HOST_AMIGAOS
    return (size_t)AvailMem(MEMF_ANY);
#else
    return 0;
#endif
}
