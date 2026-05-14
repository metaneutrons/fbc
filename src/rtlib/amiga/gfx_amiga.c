/* FreeBASIC Graphics for AmigaOS via intuition.library + graphics.library */
#include <stddef.h>
typedef signed int int32;
typedef unsigned int uint32;

extern void *SysBase;

/* Library bases */
static void *IntuitionBase = 0;
static void *GfxBase = 0;
static void *screen = 0;
static void *window = 0;
static void *rastport = 0;
static int scr_width = 0, scr_height = 0, scr_depth = 0;

static void *open_lib(const char *name, int ver) {
    register void *a6 __asm("a6") = SysBase;
    register const char *a1 __asm("a1") = name;
    register int d0 __asm("d0") = ver;
    register void *res __asm("d0");
    __asm volatile ("jsr -552(%%a6)" : "=r"(res) : "r"(a6), "r"(a1), "0"(d0) : "a0","a1","d1","memory");
    return res;
}

static void close_lib(void *lib) {
    register void *a6 __asm("a6") = SysBase;
    register void *a1 __asm("a1") = lib;
    __asm volatile ("jsr -414(%%a6)" : : "r"(a6), "r"(a1) : "d0","d1","a0","a1","memory");
}

/* graphics.library: SetAPen (offset -342) */
static void gfx_SetAPen(void *rp, long pen) {
    register void *a6 __asm("a6") = GfxBase;
    register void *a1 __asm("a1") = rp;
    register long d0 __asm("d0") = pen;
    __asm volatile ("jsr -342(%%a6)" : : "r"(a6), "r"(a1), "r"(d0) : "d1","a0","memory");
}

/* graphics.library: WritePixel (offset -324) */
static long gfx_WritePixel(void *rp, long x, long y) {
    register void *a6 __asm("a6") = GfxBase;
    register void *a1 __asm("a1") = rp;
    register long d0 __asm("d0") = x;
    register long d1 __asm("d1") = y;
    register long res __asm("d0");
    __asm volatile ("jsr -324(%%a6)" : "=r"(res) : "r"(a6), "r"(a1), "0"(d0), "r"(d1) : "a0","memory");
    return res;
}

/* graphics.library: Move (offset -240) */
static void gfx_Move(void *rp, long x, long y) {
    register void *a6 __asm("a6") = GfxBase;
    register void *a1 __asm("a1") = rp;
    register long d0 __asm("d0") = x;
    register long d1 __asm("d1") = y;
    __asm volatile ("jsr -240(%%a6)" : : "r"(a6), "r"(a1), "r"(d0), "r"(d1) : "a0","memory");
}

/* graphics.library: Draw (offset -246) */
static void gfx_Draw(void *rp, long x, long y) {
    register void *a6 __asm("a6") = GfxBase;
    register void *a1 __asm("a1") = rp;
    register long d0 __asm("d0") = x;
    register long d1 __asm("d1") = y;
    __asm volatile ("jsr -246(%%a6)" : : "r"(a6), "r"(a1), "r"(d0), "r"(d1) : "a0","memory");
}

/* graphics.library: RectFill (offset -306) */
static void gfx_RectFill(void *rp, long x1, long y1, long x2, long y2) {
    register void *a6 __asm("a6") = GfxBase;
    register void *a1 __asm("a1") = rp;
    register long d0 __asm("d0") = x1;
    register long d1 __asm("d1") = y1;
    register long d2 __asm("d2") = x2;
    register long d3 __asm("d3") = y2;
    __asm volatile ("jsr -306(%%a6)" : : "r"(a6), "r"(a1), "r"(d0), "r"(d1), "r"(d2), "r"(d3) : "a0","memory");
}

/* intuition.library: OpenScreenTagList (offset -612) - simplified: use OpenScreen */
/* For simplicity, use a low-level approach with OpenScreenTags via TagItems */

struct TagItem { uint32 tag; uint32 data; };

/* intuition.library: OpenScreenTagList (offset -612) */
static void *int_OpenScreenTagList(void *newscr, struct TagItem *tags) {
    register void *a6 __asm("a6") = IntuitionBase;
    register void *a0 __asm("a0") = newscr;
    register struct TagItem *a1 __asm("a1") = tags;
    register void *res __asm("d0");
    __asm volatile ("jsr -612(%%a6)" : "=r"(res) : "r"(a6), "r"(a0), "r"(a1) : "d1","a0","a1","memory");
    return res;
}

/* intuition.library: OpenWindowTagList (offset -606) */
static void *int_OpenWindowTagList(void *newwin, struct TagItem *tags) {
    register void *a6 __asm("a6") = IntuitionBase;
    register void *a0 __asm("a0") = newwin;
    register struct TagItem *a1 __asm("a1") = tags;
    register void *res __asm("d0");
    __asm volatile ("jsr -606(%%a6)" : "=r"(res) : "r"(a6), "r"(a0), "r"(a1) : "d1","a0","a1","memory");
    return res;
}

/* intuition.library: CloseWindow (offset -72) */
static void int_CloseWindow(void *win) {
    register void *a6 __asm("a6") = IntuitionBase;
    register void *a0 __asm("a0") = win;
    __asm volatile ("jsr -72(%%a6)" : : "r"(a6), "r"(a0) : "d0","d1","a1","memory");
}

/* intuition.library: CloseScreen (offset -66) */
static void int_CloseScreen(void *scr) {
    register void *a6 __asm("a6") = IntuitionBase;
    register void *a0 __asm("a0") = scr;
    __asm volatile ("jsr -66(%%a6)" : : "r"(a6), "r"(a0) : "d0","d1","a1","memory");
}

/* Tag IDs */
#define TAG_DONE   0
#define SA_Width   0x80000061
#define SA_Height  0x80000062
#define SA_Depth   0x80000063
#define SA_Title   0x80000064
#define SA_ShowTitle 0x80000069
#define WA_CustomScreen 0x8000006D
#define WA_Borderless   0x80000072
#define WA_Activate     0x80000078
#define WA_RMBTrap      0x8000007A
#define WA_IDCMP        0x80000079
#define WA_Width   0x80000064
#define WA_Height  0x80000065

/* Screen mode table (like QB's SCREEN modes) */
int32 fb_GfxScreen(int32 mode, int32 depth, int32 num_pages, int32 flags, int32 refresh_rate) {
    int w, h, d;

    /* Map FB screen modes */
    switch (mode) {
        case 1:  w = 320; h = 200; d = 2; break;
        case 2:  w = 640; h = 200; d = 1; break;
        case 7:  w = 320; h = 200; d = 4; break;
        case 8:  w = 640; h = 200; d = 4; break;
        case 9:  w = 640; h = 350; d = 4; break;
        case 12: w = 640; h = 480; d = 4; break;
        case 13: w = 320; h = 200; d = 8; break;
        default: w = 320; h = 200; d = depth > 0 ? depth : 8; break;
    }
    if (depth > 0) d = depth;

    /* Open libraries */
    if (!IntuitionBase) IntuitionBase = open_lib("intuition.library", 36);
    if (!GfxBase) GfxBase = open_lib("graphics.library", 36);
    if (!IntuitionBase || !GfxBase) return -1;

    /* Open screen */
    struct TagItem scr_tags[] = {
        {SA_Width, w}, {SA_Height, h}, {SA_Depth, d},
        {SA_Title, (uint32)"FreeBASIC"}, {SA_ShowTitle, 0},
        {TAG_DONE, 0}
    };
    screen = int_OpenScreenTagList(0, scr_tags);
    if (!screen) return -1;

    /* Open borderless window on the screen */
    struct TagItem win_tags[] = {
        {WA_CustomScreen, (uint32)screen},
        {WA_Borderless, 1}, {WA_Activate, 1}, {WA_RMBTrap, 1},
        {TAG_DONE, 0}
    };
    window = int_OpenWindowTagList(0, win_tags);
    if (!window) { int_CloseScreen(screen); screen = 0; return -1; }

    /* Get RastPort from window (offset 50 in Window struct) */
    rastport = *(void **)((char *)window + 50);
    scr_width = w; scr_height = h; scr_depth = d;
    return 0;
}

void fb_GfxPset(void *target, float x, float y, uint32 color, int32 coord_type, int32 ispreset) {
    if (!rastport) return;
    int px = (int)x, py = (int)y;
    if (px < 0 || px >= scr_width || py < 0 || py >= scr_height) return;
    gfx_SetAPen(rastport, color);
    gfx_WritePixel(rastport, px, py);
}

void fb_GfxLine(void *target, float x1, float y1, float x2, float y2,
                uint32 color, int32 type, uint32 style, int32 coord_type) {
    if (!rastport) return;
    int ix1 = (int)x1, iy1 = (int)y1, ix2 = (int)x2, iy2 = (int)y2;
    gfx_SetAPen(rastport, color);

    if (type == 1) {
        /* Box (B) */
        gfx_Move(rastport, ix1, iy1);
        gfx_Draw(rastport, ix2, iy1);
        gfx_Draw(rastport, ix2, iy2);
        gfx_Draw(rastport, ix1, iy2);
        gfx_Draw(rastport, ix1, iy1);
    } else if (type == 2) {
        /* Filled box (BF) */
        gfx_RectFill(rastport, ix1, iy1, ix2, iy2);
    } else {
        /* Line */
        gfx_Move(rastport, ix1, iy1);
        gfx_Draw(rastport, ix2, iy2);
    }
}

/* Cleanup (called at exit or screen close) */
void fb_GfxScreenClose(void) {
    if (window) { int_CloseWindow(window); window = 0; }
    if (screen) { int_CloseScreen(screen); screen = 0; }
    if (GfxBase) { close_lib(GfxBase); GfxBase = 0; }
    if (IntuitionBase) { close_lib(IntuitionBase); IntuitionBase = 0; }
    rastport = 0;
}
