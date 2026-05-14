' FreeBASIC header for mathffp.library
' Auto-generated from NDK 3.2 SFD - 12 functions

#ifndef __AMIGA_MATHFFP_BI__
#define __AMIGA_MATHFFP_BI__

Declare Function SPFix(ByVal parm As Single) As Long
Declare Function SPFlt(ByVal integer As Long) As Single
Declare Function SPCmp(ByVal leftParm As Single, ByVal rightParm As Single) As Long
Declare Function SPTst(ByVal parm As Single) As Long
Declare Function SPAbs(ByVal parm As Single) As Single
Declare Function SPNeg(ByVal parm As Single) As Single
Declare Function SPAdd(ByVal leftParm As Single, ByVal rightParm As Single) As Single
Declare Function SPSub(ByVal leftParm As Single, ByVal rightParm As Single) As Single
Declare Function SPMul(ByVal leftParm As Single, ByVal rightParm As Single) As Single
Declare Function SPDiv(ByVal leftParm As Single, ByVal rightParm As Single) As Single
Declare Function SPFloor(ByVal parm As Single) As Single
Declare Function SPCeil(ByVal parm As Single) As Single

#endif
