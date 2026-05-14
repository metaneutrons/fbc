' FreeBASIC header for commodities.library
' Auto-generated from NDK 3.2 SFD - 24 functions

#ifndef __AMIGA_COMMODITIES_BI__
#define __AMIGA_COMMODITIES_BI__

Declare Function ActivateCxObj(ByVal co As CxObj Ptr, ByVal flag As Long) As Long
Declare Sub DeleteCxObj(ByVal co As CxObj Ptr)
Declare Sub DeleteCxObjAll(ByVal co As CxObj Ptr)
Declare Function CxObjType(ByVal co As CxObj Ptr) As ULong
Declare Function CxObjError(ByVal co As CxObj Ptr) As Long
Declare Sub ClearCxObjError(ByVal co As CxObj Ptr)
Declare Function SetCxObjPri(ByVal co As CxObj Ptr, ByVal pri As Long) As Long
Declare Sub AttachCxObj(ByVal headObj As CxObj Ptr, ByVal co As CxObj Ptr)
Declare Sub EnqueueCxObj(ByVal headObj As CxObj Ptr, ByVal co As CxObj Ptr)
Declare Sub InsertCxObj(ByVal headObj As CxObj Ptr, ByVal co As CxObj Ptr, ByVal pred As CxObj Ptr)
Declare Sub RemoveCxObj(ByVal co As CxObj Ptr)
Declare Sub SetTranslate(ByVal translator As CxObj Ptr, ByVal events As InputEvent Ptr)
Declare Sub SetFilter(ByVal filter As CxObj Ptr, ByVal text As Const ZString Ptr)
Declare Sub SetFilterIX(ByVal filter As CxObj Ptr, ByVal ix As IX Ptr)
Declare Function ParseIX(ByVal description As Const ZString Ptr, ByVal ix As IX Ptr) As Long
Declare Function CxMsgType(ByVal cxm As CxMsg Ptr) As ULong
Declare Function CxMsgData(ByVal cxm As CxMsg Ptr) As Any Ptr
Declare Function CxMsgID(ByVal cxm As CxMsg Ptr) As Long
Declare Sub DivertCxMsg(ByVal cxm As CxMsg Ptr, ByVal headObj As CxObj Ptr, ByVal returnObj As CxObj Ptr)
Declare Sub RouteCxMsg(ByVal cxm As CxMsg Ptr, ByVal co As CxObj Ptr)
Declare Sub DisposeCxMsg(ByVal cxm As CxMsg Ptr)
Declare Function InvertKeyMap(ByVal ansiCode As ULong, ByVal event As InputEvent Ptr, ByVal km As KeyMap Ptr) As Short
Declare Sub AddIEvents(ByVal events As InputEvent Ptr)
Declare Function MatchIX(ByVal event As InputEvent Ptr, ByVal ix As IX Ptr) As Short

#endif
