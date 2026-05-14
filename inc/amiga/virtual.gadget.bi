' FreeBASIC header for virtual.gadget
' Auto-generated from NDK 3.2 SFD - 2 functions

#ifndef __AMIGA_VIRTUAL.GADGET_BI__
#define __AMIGA_VIRTUAL.GADGET_BI__

Declare Sub RefreshVirtualGadget(ByVal gadget As Gadget Ptr, ByVal obj As Object Ptr, ByVal window As Window Ptr, ByVal requester As Requester Ptr)
Declare Function RethinkVirtualSize(ByVal virt_obj As Object Ptr, ByVal rootlayout As Object Ptr, ByVal font As TextFont Ptr, ByVal screen As Screen Ptr, ByVal layoutlimits As LayoutLimits Ptr) As Short

#endif
