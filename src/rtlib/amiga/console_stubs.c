#include "../fb.h"

FBCALL void fb_ConsoleGetSize(int *cols, int *rows) { if (cols) *cols = 80; if (rows) *rows = 25; }
FBCALL void fb_ConsoleGetXY(int *col, int *row) { if (col) *col = 1; if (row) *row = 1; }
int fb_ConsoleGetX(void) { return 1; }
int fb_ConsoleGetY(void) { return 1; }
int fb_ConsoleLocate(int row, int col, int cursor) { return 0; }
unsigned int fb_ConsoleColor(unsigned int fc, unsigned int bc, int flags) { return 7; }
unsigned int fb_ConsoleGetColorAtt(void) { return 7; }
void fb_ConsoleClear(int mode) { }
FBCALL unsigned int fb_ConsoleReadXY(int col, int row, int colorflag) { return 32; }
void fb_ConsoleScroll(int nrows) { }
int fb_ConsoleWidth(int cols, int rows) { return 0; }
FBCALL int fb_ConsoleView(int toprow, int botrow) { return 0; }
int fb_ConsoleViewEx(int toprow, int botrow, int set_cursor) { return 0; }
void fb_ConsoleGetView(int *toprow, int *botrow) { if (toprow) *toprow = 1; if (botrow) *botrow = 25; }
int fb_ConsoleGetMaxRow(void) { return 25; }
void fb_ConsoleViewUpdate(void) { }
int fb_ConsoleGetTopRow(void) { return 1; }
int fb_ConsoleGetBotRow(void) { return 25; }
void fb_ConsoleSetTopBotRows(int top, int bot) { }
int fb_ConsoleIsRedirected(int is_input) { return 0; }
int fb_ConsolePageCopy(int src, int dst) { return 0; }
int fb_ConsolePageSet(int active, int visible) { return 0; }
int fb_ConsoleGetkey(void) { return 0; }
FBSTRING *fb_ConsoleInkey(void) { return &__fb_ctx.null_desc; }
int fb_ConsoleKeyHit(void) { return 0; }

char *fb_ConsoleReadStr(char *buffer, ssize_t len) {
    /* Minimal stdin read - just return empty for now */
    if (buffer && len > 0) buffer[0] = '\0';
    return buffer;
}
