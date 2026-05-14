' FreeBASIC header for mathieeesingbas.library
' Auto-generated from NDK 3.2 SFD - 12 functions

#ifndef __AMIGA_MATHIEEESINGBAS_BI__
#define __AMIGA_MATHIEEESINGBAS_BI__

Declare Function IEEESPFix(ByVal parm As Single) As Long
Declare Function IEEESPFlt(ByVal integer As Long) As Single
Declare Function IEEESPCmp(ByVal leftParm As Single, ByVal rightParm As Single) As Long
Declare Function IEEESPTst(ByVal parm As Single) As Long
Declare Function IEEESPAbs(ByVal parm As Single) As Single
Declare Function IEEESPNeg(ByVal parm As Single) As Single
Declare Function IEEESPAdd(ByVal leftParm As Single, ByVal rightParm As Single) As Single
Declare Function IEEESPSub(ByVal leftParm As Single, ByVal rightParm As Single) As Single
Declare Function IEEESPMul(ByVal leftParm As Single, ByVal rightParm As Single) As Single
Declare Function IEEESPDiv(ByVal dividend As Single, ByVal divisor As Single) As Single
Declare Function IEEESPFloor(ByVal parm As Single) As Single
Declare Function IEEESPCeil(ByVal parm As Single) As Single

#endif
