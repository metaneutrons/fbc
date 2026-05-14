' FreeBASIC header for iffparse.library
' Auto-generated from NDK 3.2 SFD - 31 functions

#ifndef __AMIGA_IFFPARSE_BI__
#define __AMIGA_IFFPARSE_BI__

Declare Function OpenIFF(ByVal iff As IFFHandle Ptr, ByVal rwMode As Long) As Long
Declare Function ParseIFF(ByVal iff As IFFHandle Ptr, ByVal control As Long) As Long
Declare Sub CloseIFF(ByVal iff As IFFHandle Ptr)
Declare Sub FreeIFF(ByVal iff As IFFHandle Ptr)
Declare Function ReadChunkBytes(ByVal iff As IFFHandle Ptr, ByVal buf As Any Ptr, ByVal numBytes As Long) As Long
Declare Function WriteChunkBytes(ByVal iff As IFFHandle Ptr, ByVal buf As Any Ptr, ByVal numBytes As Long) As Long
Declare Function ReadChunkRecords(ByVal iff As IFFHandle Ptr, ByVal buf As Any Ptr, ByVal bytesPerRecord As Long, ByVal numRecords As Long) As Long
Declare Function WriteChunkRecords(ByVal iff As IFFHandle Ptr, ByVal buf As Any Ptr, ByVal bytesPerRecord As Long, ByVal numRecords As Long) As Long
Declare Function PushChunk(ByVal iff As IFFHandle Ptr, ByVal type As Long, ByVal id As Long, ByVal size As Long) As Long
Declare Function PopChunk(ByVal iff As IFFHandle Ptr) As Long
Declare Function EntryHandler(ByVal iff As IFFHandle Ptr, ByVal type As Long, ByVal id As Long, ByVal position As Long, ByVal handler As Hook Ptr, ByVal object As Any Ptr) As Long
Declare Function ExitHandler(ByVal iff As IFFHandle Ptr, ByVal type As Long, ByVal id As Long, ByVal position As Long, ByVal handler As Hook Ptr, ByVal object As Any Ptr) As Long
Declare Function PropChunk(ByVal iff As IFFHandle Ptr, ByVal type As Long, ByVal id As Long) As Long
Declare Function PropChunks(ByVal iff As IFFHandle Ptr, ByVal propArray As Long Ptr, ByVal numPairs As Long) As Long
Declare Function StopChunk(ByVal iff As IFFHandle Ptr, ByVal type As Long, ByVal id As Long) As Long
Declare Function StopChunks(ByVal iff As IFFHandle Ptr, ByVal propArray As Long Ptr, ByVal numPairs As Long) As Long
Declare Function CollectionChunk(ByVal iff As IFFHandle Ptr, ByVal type As Long, ByVal id As Long) As Long
Declare Function CollectionChunks(ByVal iff As IFFHandle Ptr, ByVal propArray As Long Ptr, ByVal numPairs As Long) As Long
Declare Function StopOnExit(ByVal iff As IFFHandle Ptr, ByVal type As Long, ByVal id As Long) As Long
Declare Function LocalItemData(ByVal localItem As LocalContextItem Ptr) As Any Ptr
Declare Sub SetLocalItemPurge(ByVal localItem As LocalContextItem Ptr, ByVal purgeHook As Hook Ptr)
Declare Sub FreeLocalItem(ByVal localItem As LocalContextItem Ptr)
Declare Function StoreLocalItem(ByVal iff As IFFHandle Ptr, ByVal localItem As LocalContextItem Ptr, ByVal position As Long) As Long
Declare Sub StoreItemInContext(ByVal iff As IFFHandle Ptr, ByVal localItem As LocalContextItem Ptr, ByVal contextNode As ContextNode Ptr)
Declare Sub InitIFF(ByVal iff As IFFHandle Ptr, ByVal flags As Long, ByVal streamHook As Hook Ptr)
Declare Sub InitIFFasDOS(ByVal iff As IFFHandle Ptr)
Declare Sub InitIFFasClip(ByVal iff As IFFHandle Ptr)
Declare Sub CloseClipboard(ByVal clipHandle As ClipboardHandle Ptr)
Declare Function GoodID(ByVal id As Long) As Long
Declare Function GoodType(ByVal type As Long) As Long
Declare Function IDtoStr(ByVal id As Long, ByVal buf As ZString Ptr) As ZString Ptr

#endif
