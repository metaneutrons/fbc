/* libfb init/end for AmigaOS - DOSBase already opened by startup.c */
#include "../fb.h"

void fb_hInit(void) { }
void fb_hEnd(int errlevel) { (void)errlevel; }
