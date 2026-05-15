/* AmigaOS math library bases - opened on demand */
extern void *SysBase;
void *MathIeeeDoubBasBase = 0;
void *MathIeeeDoubTransBase = 0;

static void *open_lib(const char *name, int ver) {
    register void *a6 __asm("a6") = SysBase;
    register const char *a1 __asm("a1") = name;
    register int d0 __asm("d0") = ver;
    register void *res __asm("d0");
    __asm volatile ("jsr -552(%%a6)" : "=r"(res) : "r"(a6), "r"(a1), "0"(d0) : "a0","a1","d1","memory");
    return res;
}

/* Called before main by adding to startup */
void __fb_init_mathlibs(void) {
    MathIeeeDoubBasBase = open_lib("mathieeedoubbas.library", 34);
    MathIeeeDoubTransBase = open_lib("mathieeedoubtrans.library", 34);
}

void __fb_close_mathlibs(void) {
    if (MathIeeeDoubBasBase) {
        register void *a6 __asm("a6") = SysBase;
        register void *a1 __asm("a1") = MathIeeeDoubBasBase;
        __asm volatile ("jsr -414(%%a6)" : : "r"(a6), "r"(a1) : "d0","d1","a0","a1","memory");
        MathIeeeDoubBasBase = 0;
    }
    if (MathIeeeDoubTransBase) {
        register void *a6 __asm("a6") = SysBase;
        register void *a1 __asm("a1") = MathIeeeDoubTransBase;
        __asm volatile ("jsr -414(%%a6)" : : "r"(a6), "r"(a1) : "d0","d1","a0","a1","memory");
        MathIeeeDoubTransBase = 0;
    }
}
