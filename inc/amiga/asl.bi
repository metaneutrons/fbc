' FreeBASIC header for asl.library
' Auto-generated from NDK 3.2 SFD - 9 functions

#ifndef __AMIGA_ASL_BI__
#define __AMIGA_ASL_BI__

Declare Sub FreeFileRequest(ByVal fileReq As FileRequester Ptr)
Declare Function RequestFile(ByVal fileReq As FileRequester Ptr) As Short
Declare Function AllocAslRequest(ByVal reqType As ULong, ByVal tagList As TagItem Ptr) As Any Ptr
Declare Function AllocAslRequestTags(ByVal reqType As ULong, ByVal arg As ...) As Any Ptr
Declare Sub FreeAslRequest(ByVal requester As Any Ptr)
Declare Function AslRequest(ByVal requester As Any Ptr, ByVal tagList As TagItem Ptr) As Short
Declare Function AslRequestTags(ByVal requester As Any Ptr, ByVal arg As ...) As Short
Declare Sub AbortAslRequest(ByVal requester As Any Ptr)
Declare Sub ActivateAslRequest(ByVal requester As Any Ptr)

#endif
