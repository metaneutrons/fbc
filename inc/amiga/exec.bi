' FreeBASIC header for exec.library
' Auto-generated from NDK 3.2 SFD - 98 functions

#ifndef __AMIGA_EXEC_BI__
#define __AMIGA_EXEC_BI__

Declare Function Supervisor(ByVal proc As Any Ptr) As ULong
Declare Sub InitCode(ByVal startClass As ULong, ByVal version As ULong)
Declare Sub InitStruct(ByVal initTable As Any Ptr, ByVal memory As Any Ptr, ByVal size As ULong)
Declare Function InitResident(ByVal resident As Resident Ptr, ByVal segList As ULong) As Any Ptr
Declare Sub Alert(ByVal alertNum As ULong)
Declare Sub Debug(ByVal flags As ULong)
Declare Sub Disable()
Declare Sub Enable()
Declare Sub Forbid()
Declare Sub Permit()
Declare Function SetSR(ByVal newSR As ULong, ByVal mask As ULong) As ULong
Declare Function SuperState() As Any Ptr
Declare Sub UserState(ByVal sysStack As Any Ptr)
Declare Sub AddIntServer(ByVal intNumber As Long, ByVal interrupt As Interrupt Ptr)
Declare Sub RemIntServer(ByVal intNumber As Long, ByVal interrupt As Interrupt Ptr)
Declare Sub Cause(ByVal interrupt As Interrupt Ptr)
Declare Function Allocate(ByVal freeList As MemHeader Ptr, ByVal byteSize As ULong) As Any Ptr
Declare Function AllocMem(ByVal byteSize As ULong, ByVal requirements As ULong) As Any Ptr
Declare Function AllocAbs(ByVal byteSize As ULong, ByVal location As Any Ptr) As Any Ptr
Declare Sub FreeMem(ByVal memoryBlock As Any Ptr, ByVal byteSize As ULong)
Declare Function AvailMem(ByVal requirements As ULong) As ULong
Declare Sub FreeEntry(ByVal entry As MemList Ptr)
Declare Sub AddHead(ByVal list As List Ptr, ByVal node As Node Ptr)
Declare Sub AddHeadMinList(ByVal minlist As MinList Ptr, ByVal minnode As MinNode Ptr)
Declare Sub AddTail(ByVal list As List Ptr, ByVal node As Node Ptr)
Declare Sub AddTailMinList(ByVal minlist As MinList Ptr, ByVal minnode As MinNode Ptr)
Declare Sub Remove(ByVal node As Node Ptr)
Declare Sub RemoveMinNode(ByVal minnode As MinNode Ptr)
Declare Function RemHeadMinList(ByVal minlist As MinList Ptr) As MinNode Ptr
Declare Function RemTailMinList(ByVal minlist As MinList Ptr) As MinNode Ptr
Declare Sub Enqueue(ByVal list As List Ptr, ByVal node As Node Ptr)
Declare Function AddTask(ByVal task As Task Ptr, ByVal initPC As Any Ptr, ByVal finalPC As Any Ptr) As Any Ptr
Declare Sub RemTask(ByVal task As Task Ptr)
Declare Function SetTaskPri(ByVal task As Task Ptr, ByVal priority As Long) As Byte
Declare Function SetSignal(ByVal newSignals As ULong, ByVal signalSet As ULong) As ULong
Declare Function SetExcept(ByVal newSignals As ULong, ByVal signalSet As ULong) As ULong
Declare Function Wait(ByVal signalSet As ULong) As ULong
Declare Sub Signal(ByVal task As Task Ptr, ByVal signalSet As ULong)
Declare Function AllocSignal(ByVal signalNum As Byte) As Byte
Declare Sub FreeSignal(ByVal signalNum As Byte)
Declare Function AllocTrap(ByVal trapNum As Long) As Long
Declare Sub FreeTrap(ByVal trapNum As Long)
Declare Sub AddPort(ByVal port As MsgPort Ptr)
Declare Sub RemPort(ByVal port As MsgPort Ptr)
Declare Sub PutMsg(ByVal port As MsgPort Ptr, ByVal message As Message Ptr)
Declare Sub ReplyMsg(ByVal message As Message Ptr)
Declare Sub AddLibrary(ByVal library As Library Ptr)
Declare Sub RemLibrary(ByVal library As Library Ptr)
Declare Sub CloseLibrary(ByVal library As Library Ptr)
Declare Sub SumLibrary(ByVal library As Library Ptr)
Declare Sub AddDevice(ByVal device As Device Ptr)
Declare Sub RemDevice(ByVal device As Device Ptr)
Declare Sub CloseDevice(ByVal ioRequest As IORequest Ptr)
Declare Function DoIO(ByVal ioRequest As IORequest Ptr) As Byte
Declare Sub SendIO(ByVal ioRequest As IORequest Ptr)
Declare Function WaitIO(ByVal ioRequest As IORequest Ptr) As Byte
Declare Sub AbortIO(ByVal ioRequest As IORequest Ptr)
Declare Sub AddResource(ByVal resource As Any Ptr)
Declare Sub RemResource(ByVal resource As Any Ptr)
Declare Function OpenResource(ByVal resName As Const ZString Ptr) As Any Ptr
Declare Function RawDoFmt(ByVal formatString As Const ZString Ptr, ByVal dataStream As Any Ptr, ByVal proc As Any Ptr) As Any Ptr
Declare Function GetCC() As ULong
Declare Function TypeOfMem(ByVal address As Any Ptr) As ULong
Declare Function Procure(ByVal sigSem As SignalSemaphore Ptr, ByVal bidMsg As SemaphoreMessage Ptr) As ULong
Declare Sub Vacate(ByVal sigSem As SignalSemaphore Ptr, ByVal bidMsg As SemaphoreMessage Ptr)
Declare Sub InitSemaphore(ByVal sigSem As SignalSemaphore Ptr)
Declare Sub ObtainSemaphore(ByVal sigSem As SignalSemaphore Ptr)
Declare Sub ReleaseSemaphore(ByVal sigSem As SignalSemaphore Ptr)
Declare Function AttemptSemaphore(ByVal sigSem As SignalSemaphore Ptr) As ULong
Declare Sub ObtainSemaphoreList(ByVal sigSem As List Ptr)
Declare Sub ReleaseSemaphoreList(ByVal sigSem As List Ptr)
Declare Sub AddSemaphore(ByVal sigSem As SignalSemaphore Ptr)
Declare Sub RemSemaphore(ByVal sigSem As SignalSemaphore Ptr)
Declare Function SumKickData() As ULong
Declare Sub CopyMem(ByVal source As Any Ptr, ByVal dest As Any Ptr, ByVal size As ULong)
Declare Sub CopyMemQuick(ByVal source As Any Ptr, ByVal dest As Any Ptr, ByVal size As ULong)
Declare Sub CacheClearU()
Declare Sub CacheClearE(ByVal address As Any Ptr, ByVal length As ULong, ByVal caches As ULong)
Declare Function CacheControl(ByVal cacheBits As ULong, ByVal cacheMask As ULong) As ULong
Declare Function CreateIORequest(ByVal port As MsgPort Ptr, ByVal size As ULong) As Any Ptr
Declare Sub DeleteIORequest(ByVal iorequest As Any Ptr)
Declare Sub DeleteMsgPort(ByVal port As MsgPort Ptr)
Declare Sub ObtainSemaphoreShared(ByVal sigSem As SignalSemaphore Ptr)
Declare Function AllocVec(ByVal byteSize As ULong, ByVal requirements As ULong) As Any Ptr
Declare Sub FreeVec(ByVal memoryBlock As Any Ptr)
Declare Function CreatePool(ByVal requirements As ULong, ByVal puddleSize As ULong, ByVal threshSize As ULong) As Any Ptr
Declare Sub DeletePool(ByVal poolHeader As Any Ptr)
Declare Function AllocPooled(ByVal poolHeader As Any Ptr, ByVal memSize As ULong) As Any Ptr
Declare Sub FreePooled(ByVal poolHeader As Any Ptr, ByVal memory As Any Ptr, ByVal memSize As ULong)
Declare Function AttemptSemaphoreShared(ByVal sigSem As SignalSemaphore Ptr) As ULong
Declare Sub ColdReboot()
Declare Sub StackSwap(ByVal newStack As StackSwapStruct Ptr)
Declare Function CachePreDMA(ByVal address As Any Ptr, ByVal length As ULong Ptr, ByVal flags As ULong) As Any Ptr
Declare Sub CachePostDMA(ByVal address As Any Ptr, ByVal length As ULong Ptr, ByVal flags As ULong)
Declare Sub AddMemHandler(ByVal memhand As Interrupt Ptr)
Declare Sub RemMemHandler(ByVal memhand As Interrupt Ptr)
Declare Function ObtainQuickVector(ByVal interruptCode As Any Ptr) As ULong
Declare Sub NewMinList(ByVal minlist As MinList Ptr)

#endif
