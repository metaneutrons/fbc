#include "../fb.h"

int fb_SerialOpen(FB_FILE *handle, int iPort, FB_SERIAL_OPTIONS *options,
                  const char *pszDevice, void **ppvHandle) {
    return fb_ErrorSetNum(FB_RTERROR_ILLEGALFUNCTIONCALL);
}

int fb_SerialGetRemaining(FB_FILE *handle, void *pvHandle, fb_off_t *pLength) {
    return fb_ErrorSetNum(FB_RTERROR_ILLEGALFUNCTIONCALL);
}
