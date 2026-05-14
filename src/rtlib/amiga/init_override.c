/* Minimal override: just fb_Init/fb_End for AmigaOS hunk compatibility */
typedef signed int int32;
extern void fb_hRtInit(void);

void fb_Init(int32 argc, char **argv, int32 lang) {
    fb_hRtInit();
}

void fb_End(int32 code) {
    /* Skip fb_hRtExit - has pointer issues in hunk format */
    (void)code;
}
