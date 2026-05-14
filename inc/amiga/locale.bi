' FreeBASIC header for locale.library
' Auto-generated from NDK 3.2 SFD - 22 functions

#ifndef __AMIGA_LOCALE_BI__
#define __AMIGA_LOCALE_BI__

Declare Sub CloseCatalog(ByVal catalog As Catalog Ptr)
Declare Sub CloseLocale(ByVal locale As Locale Ptr)
Declare Function ConvToLower(ByVal locale As Locale Ptr, ByVal character As ULong) As ULong
Declare Function ConvToUpper(ByVal locale As Locale Ptr, ByVal character As ULong) As ULong
Declare Sub FormatDate(ByVal locale As Locale Ptr, ByVal fmtTemplate As Const ZString Ptr, ByVal date As DateStamp Ptr, ByVal putCharFunc As Hook Ptr)
Declare Function FormatString(ByVal locale As Locale Ptr, ByVal fmtTemplate As Const ZString Ptr, ByVal dataStream As Any Ptr, ByVal putCharFunc As Hook Ptr) As Any Ptr
Declare Function GetCatalogStr(ByVal catalog As Catalog Ptr, ByVal stringNum As Long, ByVal defaultString As Const ZString Ptr) As ZString Ptr
Declare Function GetLocaleStr(ByVal locale As Locale Ptr, ByVal stringNum As ULong) As ZString Ptr
Declare Function IsAlNum(ByVal locale As Locale Ptr, ByVal character As ULong) As Short
Declare Function IsAlpha(ByVal locale As Locale Ptr, ByVal character As ULong) As Short
Declare Function IsCntrl(ByVal locale As Locale Ptr, ByVal character As ULong) As Short
Declare Function IsDigit(ByVal locale As Locale Ptr, ByVal character As ULong) As Short
Declare Function IsGraph(ByVal locale As Locale Ptr, ByVal character As ULong) As Short
Declare Function IsLower(ByVal locale As Locale Ptr, ByVal character As ULong) As Short
Declare Function IsPrint(ByVal locale As Locale Ptr, ByVal character As ULong) As Short
Declare Function IsPunct(ByVal locale As Locale Ptr, ByVal character As ULong) As Short
Declare Function IsSpace(ByVal locale As Locale Ptr, ByVal character As ULong) As Short
Declare Function IsUpper(ByVal locale As Locale Ptr, ByVal character As ULong) As Short
Declare Function IsXDigit(ByVal locale As Locale Ptr, ByVal character As ULong) As Short
Declare Function ParseDate(ByVal locale As Locale Ptr, ByVal date As DateStamp Ptr, ByVal fmtTemplate As Const ZString Ptr, ByVal getCharFunc As Hook Ptr) As Short
Declare Function StrConvert(ByVal locale As Locale Ptr, ByVal string As Const ZString Ptr, ByVal buffer As Any Ptr, ByVal bufferSize As ULong, ByVal type As ULong) As ULong
Declare Function StrnCmp(ByVal locale As Locale Ptr, ByVal string1 As Const ZString Ptr, ByVal string2 As Const ZString Ptr, ByVal length As Long, ByVal type As ULong) As Long

#endif
