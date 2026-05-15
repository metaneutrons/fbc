/* FreeBASIC Graphics for AmigaOS via intuition.library + graphics.library */
#include <proto/exec.h>
#include <proto/intuition.h>
#include <proto/graphics.h>
#include <intuition/screens.h>
#include <stddef.h>

typedef signed int int32;
typedef unsigned int uint32;

extern struct ExecBase *SysBase;

struct IntuitionBase *IntuitionBase = 0;
struct GfxBase *GfxBase = 0;
static struct Screen *screen = 0;
static struct Window *window = 0;
static struct RastPort *rastport = 0;
static int scr_width = 0, scr_height = 0;

int32 fb_GfxScreen(int32 mode, int32 depth, int32 num_pages, int32 flags, int32 refresh_rate) {
    int w, h, d;

    switch (mode) {
        case 1:  w = 320; h = 200; d = 2; break;
        case 7:  w = 320; h = 200; d = 4; break;
        case 13: w = 320; h = 200; d = 8; break;
        case 12: w = 640; h = 480; d = 4; break;
        default: w = 320; h = 200; d = depth > 0 ? depth : 8; break;
    }
    if (depth > 0) d = depth;

    /* Close previous screen if already open */
    if (screen) fb_GfxScreenClose();

    if (!IntuitionBase)
        IntuitionBase = (struct IntuitionBase *)OpenLibrary("intuition.library", 36);
    if (!GfxBase)
        GfxBase = (struct GfxBase *)OpenLibrary("graphics.library", 36);
    if (!IntuitionBase || !GfxBase) {
        if (GfxBase) { CloseLibrary((struct Library *)GfxBase); GfxBase = 0; }
        if (IntuitionBase) { CloseLibrary((struct Library *)IntuitionBase); IntuitionBase = 0; }
        return -1;
    }

    screen = OpenScreenTags(NULL,
        SA_Width, w, SA_Height, h, SA_Depth, d,
        SA_Title, (ULONG)"FreeBASIC", SA_ShowTitle, FALSE,
        SA_Quiet, TRUE, TAG_DONE);
    if (!screen) return -1;

    window = OpenWindowTags(NULL,
        WA_CustomScreen, (ULONG)screen,
        WA_Left, 0, WA_Top, 0,
        WA_Width, w, WA_Height, h,
        WA_Borderless, TRUE,
        WA_Activate, TRUE,
        WA_RMBTrap, TRUE,
        WA_Flags, WFLG_BACKDROP | WFLG_BORDERLESS,
        TAG_DONE);
    if (!window) { CloseScreen(screen); screen = 0; return -1; }

    rastport = window->RPort;
    scr_width = w; scr_height = h;
    return 0;
}

void fb_GfxPset(void *target, float x, float y, uint32 color, int32 coord_type, int32 ispreset) {
    if (!rastport) return;
    int px = (int)x, py = (int)y;
    if (px < 0 || px >= scr_width || py < 0 || py >= scr_height) return;
    SetAPen(rastport, color);
    WritePixel(rastport, px, py);
}

void fb_GfxLine(void *target, float x1, float y1, float x2, float y2,
                uint32 color, int32 type, uint32 style, int32 coord_type) {
    if (!rastport) return;
    int ix1 = (int)x1, iy1 = (int)y1, ix2 = (int)x2, iy2 = (int)y2;
    SetAPen(rastport, color);

    if (type == 1) { /* Box */
        Move(rastport, ix1, iy1); Draw(rastport, ix2, iy1);
        Draw(rastport, ix2, iy2); Draw(rastport, ix1, iy2);
        Draw(rastport, ix1, iy1);
    } else if (type == 2) { /* Filled box */
        RectFill(rastport, ix1, iy1, ix2, iy2);
    } else { /* Line */
        Move(rastport, ix1, iy1); Draw(rastport, ix2, iy2);
    }
}

void fb_GfxScreenClose(void) {
    if (window) { CloseWindow(window); window = 0; }
    if (screen) { CloseScreen(screen); screen = 0; }
    if (GfxBase) { CloseLibrary((struct Library *)GfxBase); GfxBase = 0; }
    if (IntuitionBase) { CloseLibrary((struct Library *)IntuitionBase); IntuitionBase = 0; }
    rastport = 0;
}
