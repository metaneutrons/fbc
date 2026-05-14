' FreeBASIC header for utility.library
' Auto-generated from NDK 3.2 SFD - 38 functions

#ifndef __AMIGA_UTILITY_BI__
#define __AMIGA_UTILITY_BI__

Declare Function GetTagData(ByVal tagValue As Tag, ByVal defaultVal As ULong, ByVal tagList As TagItem Ptr) As ULong
Declare Function PackBoolTags(ByVal initialFlags As ULong, ByVal tagList As TagItem Ptr, ByVal boolMap As TagItem Ptr) As ULong
Declare Sub FilterTagChanges(ByVal changeList As TagItem Ptr, ByVal originalList As TagItem Ptr, ByVal apply As ULong)
Declare Sub MapTags(ByVal tagList As TagItem Ptr, ByVal mapList As TagItem Ptr, ByVal mapType As ULong)
Declare Sub FreeTagItems(ByVal tagList As TagItem Ptr)
Declare Sub RefreshTagItemClones(ByVal clone As TagItem Ptr, ByVal original As TagItem Ptr)
Declare Function TagInArray(ByVal tagValue As Tag, ByVal tagArray As Tag Ptr) As Short
Declare Function FilterTagItems(ByVal tagList As TagItem Ptr, ByVal filterArray As Tag Ptr, ByVal logic As ULong) As ULong
Declare Function CallHookPkt(ByVal hook As Hook Ptr, ByVal object As Any Ptr, ByVal paramPacket As Any Ptr) As ULong
Declare Sub Amiga2Date(ByVal seconds As ULong, ByVal result As ClockData Ptr)
Declare Function Date2Amiga(ByVal date As ClockData Ptr) As ULong
Declare Function CheckDate(ByVal date As ClockData Ptr) As ULong
Declare Function SMult32(ByVal arg1 As Long, ByVal arg2 As Long) As Long
Declare Function UMult32(ByVal arg1 As ULong, ByVal arg2 As ULong) As ULong
Declare Function SDivMod32(ByVal dividend As Long, ByVal divisor As Long) As Long
Declare Function UDivMod32(ByVal dividend As ULong, ByVal divisor As ULong) As ULong
Declare Function Stricmp(ByVal string1 As Const ZString Ptr, ByVal string2 As Const ZString Ptr) As Long
Declare Function Strnicmp(ByVal string1 As Const ZString Ptr, ByVal string2 As Const ZString Ptr, ByVal length As Long) As Long
Declare Function ToUpper(ByVal character As UByte) As UByte
Declare Function ToLower(ByVal character As UByte) As UByte
Declare Sub ApplyTagChanges(ByVal list As TagItem Ptr, ByVal changeList As TagItem Ptr)
Declare Function SMult64(ByVal arg1 As Long, ByVal arg2 As Long) As Long
Declare Function UMult64(ByVal arg1 As ULong, ByVal arg2 As ULong) As ULong
Declare Function PackStructureTags(ByVal pack As Any Ptr, ByVal packTable As ULong Ptr, ByVal tagList As TagItem Ptr) As ULong
Declare Function UnpackStructureTags(ByVal pack As Any Ptr, ByVal packTable As ULong Ptr, ByVal tagList As TagItem Ptr) As ULong
Declare Function AddNamedObject(ByVal nameSpace As NamedObject Ptr, ByVal object As NamedObject Ptr) As Short
Declare Function AttemptRemNamedObject(ByVal object As NamedObject Ptr) As Long
Declare Sub FreeNamedObject(ByVal object As NamedObject Ptr)
Declare Function NamedObjectName(ByVal object As NamedObject Ptr) As ZString Ptr
Declare Sub ReleaseNamedObject(ByVal object As NamedObject Ptr)
Declare Sub RemNamedObject(ByVal object As NamedObject Ptr, ByVal message As Message Ptr)
Declare Function GetUniqueID() As ULong
Declare Function VSNPrintf(ByVal buffer As ZString Ptr, ByVal bufsize As ULong, ByVal fmt As Const ZString Ptr, ByVal data As Any Ptr) As Long
Declare Function SNPrintf(ByVal buffer As ZString Ptr, ByVal bufsize As ULong, ByVal fmt As Const ZString Ptr, ByVal arg As ...) As Long
Declare Function Strncpy(ByVal dst As ZString Ptr, ByVal src As Const ZString Ptr, ByVal size As ULong) As ZString Ptr
Declare Function Strncat(ByVal dst As ZString Ptr, ByVal src As Const ZString Ptr, ByVal size As ULong) As ZString Ptr
Declare Function SDivMod64(ByVal hi As Long, ByVal lo As Long, ByVal divisor As Long) As Long
Declare Function UDivMod64(ByVal hi As ULong, ByVal lo As ULong, ByVal divisor As ULong) As ULong

#endif
