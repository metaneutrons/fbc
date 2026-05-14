' FreeBASIC header for listbrowser.gadget
' Auto-generated from NDK 3.2 SFD - 17 functions

#ifndef __AMIGA_LISTBROWSER.GADGET_BI__
#define __AMIGA_LISTBROWSER.GADGET_BI__

Declare Sub FreeListBrowserNode(ByVal node As Node Ptr)
Declare Sub SetListBrowserNodeAttrsA(ByVal node As Node Ptr, ByVal tags As TagItem Ptr)
Declare Sub SetListBrowserNodeAttrs(ByVal node As Node Ptr, ByVal arg As ...)
Declare Sub GetListBrowserNodeAttrsA(ByVal node As Node Ptr, ByVal tags As TagItem Ptr)
Declare Sub GetListBrowserNodeAttrs(ByVal node As Node Ptr, ByVal arg As ...)
Declare Sub ListBrowserSelectAll(ByVal list As List Ptr)
Declare Sub ShowListBrowserNodeChildren(ByVal node As Node Ptr, ByVal depth As Long)
Declare Sub HideListBrowserNodeChildren(ByVal node As Node Ptr)
Declare Sub ShowAllListBrowserChildren(ByVal list As List Ptr)
Declare Sub HideAllListBrowserChildren(ByVal list As List Ptr)
Declare Sub FreeListBrowserList(ByVal list As List Ptr)
Declare Function SetLBColumnInfoAttrsA(ByVal columninfo As ColumnInfo Ptr, ByVal tags As TagItem Ptr) As Long
Declare Function SetLBColumnInfoAttrs(ByVal columninfo As ColumnInfo Ptr, ByVal arg As ...) As Long
Declare Function GetLBColumnInfoAttrsA(ByVal columninfo As ColumnInfo Ptr, ByVal tags As TagItem Ptr) As Long
Declare Function GetLBColumnInfoAttrs(ByVal columninfo As ColumnInfo Ptr, ByVal arg As ...) As Long
Declare Sub FreeLBColumnInfo(ByVal columninfo As ColumnInfo Ptr)
Declare Sub ListBrowserClearAll(ByVal list As List Ptr)

#endif
