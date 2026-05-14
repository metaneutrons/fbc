' FreeBASIC header for mathieeedoubbas.library
' Auto-generated from NDK 3.2 SFD - 12 functions

#ifndef __AMIGA_MATHIEEEDOUBBAS_BI__
#define __AMIGA_MATHIEEEDOUBBAS_BI__

Declare Function IEEEDPFix(ByVal parm As Double) As Long
Declare Function IEEEDPFlt(ByVal integer As Long) As Double
Declare Function IEEEDPCmp(ByVal leftParm As Double, ByVal rightParm As Double) As Long
Declare Function IEEEDPTst(ByVal parm As Double) As Long
Declare Function IEEEDPAbs(ByVal parm As Double) As Double
Declare Function IEEEDPNeg(ByVal parm As Double) As Double
Declare Function IEEEDPAdd(ByVal leftParm As Double, ByVal rightParm As Double) As Double
Declare Function IEEEDPSub(ByVal leftParm As Double, ByVal rightParm As Double) As Double
Declare Function IEEEDPMul(ByVal factor1 As Double, ByVal factor2 As Double) As Double
Declare Function IEEEDPDiv(ByVal dividend As Double, ByVal divisor As Double) As Double
Declare Function IEEEDPFloor(ByVal parm As Double) As Double
Declare Function IEEEDPCeil(ByVal parm As Double) As Double

#endif
