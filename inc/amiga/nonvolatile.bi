' FreeBASIC header for nonvolatile.library
' Auto-generated from NDK 3.2 SFD - 4 functions

#ifndef __AMIGA_NONVOLATILE_BI__
#define __AMIGA_NONVOLATILE_BI__

Declare Function GetCopyNV(ByVal appName As Const ZString Ptr, ByVal itemName As Const ZString Ptr, ByVal killRequesters As Short) As Any Ptr
Declare Sub FreeNVData(ByVal data As Any Ptr)
Declare Function StoreNV(ByVal appName As Const ZString Ptr, ByVal itemName As Const ZString Ptr, ByVal data As Any Ptr, ByVal length As ULong, ByVal killRequesters As Short) As UShort
Declare Function DeleteNV(ByVal appName As Const ZString Ptr, ByVal itemName As Const ZString Ptr, ByVal killRequesters As Short) As Short

#endif
