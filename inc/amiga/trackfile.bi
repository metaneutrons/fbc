' FreeBASIC header for trackfile.device
' Auto-generated from NDK 3.2 SFD - 13 functions

#ifndef __AMIGA_TRACKFILE_BI__
#define __AMIGA_TRACKFILE_BI__

Declare Function TFStartUnitTagList(ByVal which_unit As Long, ByVal tags As TagItem Ptr) As Long
Declare Function TFStartUnitTags(ByVal which_unit As Long, ByVal arg As ...) As Long
Declare Function TFStopUnitTagList(ByVal which_unit As Long, ByVal tags As TagItem Ptr) As Long
Declare Function TFStopUnitTags(ByVal which_unit As Long, ByVal arg As ...) As Long
Declare Function TFInsertMediaTagList(ByVal which_unit As Long, ByVal tags As TagItem Ptr) As Long
Declare Function TFInsertMediaTags(ByVal which_unit As Long, ByVal arg As ...) As Long
Declare Function TFEjectMediaTagList(ByVal which_unit As Long, ByVal tags As TagItem Ptr) As Long
Declare Function TFEjectMediaTags(ByVal which_unit As Long, ByVal arg As ...) As Long
Declare Function TFGetUnitData(ByVal which_unit As Long) As TrackFileUnitData Ptr
Declare Sub TFFreeUnitData(ByVal tfud As TrackFileUnitData Ptr)
Declare Function TFChangeUnitTagList(ByVal which_unit As Long, ByVal tags As TagItem Ptr) As Long
Declare Function TFChangeUnitTags(ByVal which_unit As Long, ByVal arg As ...) As Long
Declare Function TFExamineFileSize(ByVal file_size As Long) As Long

#endif
