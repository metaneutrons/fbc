| FreeBASIC AmigaOS startup - opens libraries, calls _main, cleans up
    .text
    .globl _start
_start:
    move.l  4.w,a6              | SysBase
    move.l  a6,_SysBase

    | OpenLibrary("dos.library", 36)
    lea     dosname(pc),a1
    moveq   #36,d0
    jsr     -552(a6)
    move.l  d0,_DOSBase
    beq.s   .fail

    | Init math libraries (for soft-float)
    jsr     ___fb_init_mathlibs

    | Call main(0, NULL)
    pea     0
    pea     0
    jsr     _main
    addq.l  #8,sp
    move.l  d0,d2               | save return code

    | CloseLibrary(DOSBase)
    move.l  _SysBase,a6
    move.l  _DOSBase,a1
    jsr     -414(a6)

    move.l  d2,d0               | return code
    rts

.fail:
    moveq   #20,d0
    rts

dosname: .asciz "dos.library"
    .align 2

    .globl _SysBase
    .globl _DOSBase
    .globl _LocaleBase
    .bss
_SysBase:    .long 0
_DOSBase:    .long 0
_LocaleBase: .long 0
__impure_ptr: .long 0
    .globl __impure_ptr
