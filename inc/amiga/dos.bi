' FreeBASIC header for dos.library
' Auto-generated from NDK 3.2 SFD - 141 functions

#ifndef __AMIGA_DOS_BI__
#define __AMIGA_DOS_BI__

Declare Function Open(ByVal name As Const ZString Ptr, ByVal accessMode As Long) As Long
Declare Function Close(ByVal file As Long) As Long
Declare Function Read(ByVal file As Long, ByVal buffer As Any Ptr, ByVal length As Long) As Long
Declare Function Write(ByVal file As Long, ByVal buffer As Any Ptr, ByVal length As Long) As Long
Declare Function Input() As Long
Declare Function Output() As Long
Declare Function Seek(ByVal file As Long, ByVal position As Long, ByVal offset As Long) As Long
Declare Function DeleteFile(ByVal name As Const ZString Ptr) As Long
Declare Function Rename(ByVal oldName As Const ZString Ptr, ByVal newName As Const ZString Ptr) As Long
Declare Function Lock(ByVal name As Const ZString Ptr, ByVal type As Long) As Long
Declare Sub UnLock(ByVal lock As Long)
Declare Function DupLock(ByVal lock As Long) As Long
Declare Function Examine(ByVal lock As Long, ByVal fileInfoBlock As FileInfoBlock Ptr) As Long
Declare Function ExNext(ByVal lock As Long, ByVal fileInfoBlock As FileInfoBlock Ptr) As Long
Declare Function Info(ByVal lock As Long, ByVal parameterBlock As InfoData Ptr) As Long
Declare Function CreateDir(ByVal name As Const ZString Ptr) As Long
Declare Function CurrentDir(ByVal lock As Long) As Long
Declare Function IoErr() As Long
Declare Sub Exit(ByVal returnCode As Long)
Declare Function LoadSeg(ByVal name As Const ZString Ptr) As Long
Declare Sub UnLoadSeg(ByVal seglist As Long)
Declare Function SetComment(ByVal name As Const ZString Ptr, ByVal comment As Const ZString Ptr) As Long
Declare Function SetProtection(ByVal name As Const ZString Ptr, ByVal protect As Long) As Long
Declare Sub Delay(ByVal timeout As Long)
Declare Function WaitForChar(ByVal file As Long, ByVal timeout As Long) As Long
Declare Function ParentDir(ByVal lock As Long) As Long
Declare Function IsInteractive(ByVal file As Long) As Long
Declare Function Execute(ByVal string As Const ZString Ptr, ByVal file As Long, ByVal file2 As Long) As Long
Declare Function AllocDosObject(ByVal type As ULong, ByVal tags As TagItem Ptr) As Any Ptr
Declare Function AllocDosObjectTagList(ByVal type As ULong, ByVal tags As TagItem Ptr) As Any Ptr
Declare Function AllocDosObjectTags(ByVal type As ULong, ByVal tag1type As ULong, ByVal arg As ...) As Any Ptr
Declare Sub FreeDosObject(ByVal type As ULong, ByVal ptr As Any Ptr)
Declare Function DoPkt0(ByVal port As MsgPort Ptr, ByVal action As Long) As Long
Declare Function DoPkt1(ByVal port As MsgPort Ptr, ByVal action As Long, ByVal arg1 As Long) As Long
Declare Sub ReplyPkt(ByVal dp As DosPacket Ptr, ByVal res1 As Long, ByVal res2 As Long)
Declare Sub AbortPkt(ByVal port As MsgPort Ptr, ByVal pkt As DosPacket Ptr)
Declare Function LockRecords(ByVal recArray As RecordLock Ptr, ByVal timeout As ULong) As Short
Declare Function UnLockRecord(ByVal fh As Long, ByVal offset As ULong, ByVal length As ULong) As Short
Declare Function UnLockRecords(ByVal recArray As RecordLock Ptr) As Short
Declare Function SelectInput(ByVal fh As Long) As Long
Declare Function SelectOutput(ByVal fh As Long) As Long
Declare Function FGetC(ByVal fh As Long) As Long
Declare Function FPutC(ByVal fh As Long, ByVal ch As Long) As Long
Declare Function UnGetC(ByVal fh As Long, ByVal character As Long) As Long
Declare Function FRead(ByVal fh As Long, ByVal block As Any Ptr, ByVal blocklen As ULong, ByVal number As ULong) As Long
Declare Function FWrite(ByVal fh As Long, ByVal block As Any Ptr, ByVal blocklen As ULong, ByVal number As ULong) As Long
Declare Function FGets(ByVal fh As Long, ByVal buf As ZString Ptr, ByVal buflen As ULong) As ZString Ptr
Declare Function FPuts(ByVal fh As Long, ByVal str As Const ZString Ptr) As Long
Declare Sub VFWritef(ByVal fh As Long, ByVal format As Const ZString Ptr, ByVal argarray As Long Ptr)
Declare Sub FWritef(ByVal fh As Long, ByVal format As Const ZString Ptr, ByVal arg As ...)
Declare Function VFPrintf(ByVal fh As Long, ByVal format As Const ZString Ptr, ByVal argarray As Any Ptr) As Long
Declare Function FPrintf(ByVal fh As Long, ByVal format As Const ZString Ptr, ByVal arg As ...) As Long
Declare Function SetVBuf(ByVal fh As Long, ByVal buff As ZString Ptr, ByVal type As Long, ByVal size As Long) As Long
Declare Function DupLockFromFH(ByVal fh As Long) As Long
Declare Function OpenFromLock(ByVal lock As Long) As Long
Declare Function ParentOfFH(ByVal fh As Long) As Long
Declare Function ExamineFH(ByVal fh As Long, ByVal fib As FileInfoBlock Ptr) As Short
Declare Function SetFileDate(ByVal name As Const ZString Ptr, ByVal date As DateStamp Ptr) As Long
Declare Function NameFromLock(ByVal lock As Long, ByVal buffer As ZString Ptr, ByVal len As Long) As Long
Declare Function NameFromFH(ByVal fh As Long, ByVal buffer As ZString Ptr, ByVal len As Long) As Long
Declare Function SameLock(ByVal lock1 As Long, ByVal lock2 As Long) As Long
Declare Function SetMode(ByVal fh As Long, ByVal mode As Long) As Long
Declare Function MakeLink(ByVal name As Const ZString Ptr, ByVal dest As Long, ByVal soft As Long) As Long
Declare Function ChangeMode(ByVal type As Long, ByVal fh As Long, ByVal newmode As Long) As Long
Declare Function SetFileSize(ByVal fh As Long, ByVal pos As Long, ByVal mode As Long) As Long
Declare Function SetIoErr(ByVal result As Long) As Long
Declare Function Fault(ByVal code As Long, ByVal header As Const ZString Ptr, ByVal buffer As ZString Ptr, ByVal len As Long) As Short
Declare Function PrintFault(ByVal code As Long, ByVal header As Const ZString Ptr) As Short
Declare Function GetArgStr() As ZString Ptr
Declare Function SetArgStr(ByVal string As ZString Ptr) As ZString Ptr
Declare Function MaxCli() As ULong
Declare Function SetCurrentDirName(ByVal name As Const ZString Ptr) As Short
Declare Function GetCurrentDirName(ByVal buf As ZString Ptr, ByVal len As Long) As Short
Declare Function SetProgramName(ByVal name As Const ZString Ptr) As Short
Declare Function GetProgramName(ByVal buf As ZString Ptr, ByVal len As Long) As Short
Declare Function SetPrompt(ByVal name As Const ZString Ptr) As Short
Declare Function GetPrompt(ByVal buf As ZString Ptr, ByVal len As Long) As Short
Declare Function SetProgramDir(ByVal lock As Long) As Long
Declare Function GetProgramDir() As Long
Declare Function SystemTagList(ByVal command As Const ZString Ptr, ByVal tags As TagItem Ptr) As Long
Declare Function System(ByVal command As Const ZString Ptr, ByVal tags As TagItem Ptr) As Long
Declare Function SystemTags(ByVal command As Const ZString Ptr, ByVal tag1type As ULong, ByVal arg As ...) As Long
Declare Function AssignLock(ByVal name As Const ZString Ptr, ByVal lock As Long) As Long
Declare Function AssignLate(ByVal name As Const ZString Ptr, ByVal path As Const ZString Ptr) As Short
Declare Function AssignPath(ByVal name As Const ZString Ptr, ByVal path As Const ZString Ptr) As Short
Declare Function AssignAdd(ByVal name As Const ZString Ptr, ByVal lock As Long) As Short
Declare Function RemAssignList(ByVal name As Const ZString Ptr, ByVal lock As Long) As Long
Declare Sub FreeDeviceProc(ByVal dp As DevProc Ptr)
Declare Sub UnLockDosList(ByVal flags As ULong)
Declare Function RemDosEntry(ByVal dlist As DosList Ptr) As Short
Declare Function AddDosEntry(ByVal dlist As DosList Ptr) As Long
Declare Sub FreeDosEntry(ByVal dlist As DosList Ptr)
Declare Function IsFileSystem(ByVal name As Const ZString Ptr) As Short
Declare Function Format(ByVal filesystem As Const ZString Ptr, ByVal volumename As Const ZString Ptr, ByVal dostype As ULong) As Short
Declare Function Relabel(ByVal drive As Const ZString Ptr, ByVal newname As Const ZString Ptr) As Long
Declare Function Inhibit(ByVal name As Const ZString Ptr, ByVal onoff As Long) As Long
Declare Function AddBuffers(ByVal name As Const ZString Ptr, ByVal number As Long) As Long
Declare Function CompareDates(ByVal date1 As DateStamp Ptr, ByVal date2 As DateStamp Ptr) As Long
Declare Function DateToStr(ByVal datetime As DateTime Ptr) As Long
Declare Function StrToDate(ByVal datetime As DateTime Ptr) As Long
Declare Function InternalUnLoadSeg(ByVal seglist As Long, ByVal proc As Any Ptr) As Short
Declare Function NewLoadSeg(ByVal file As Const ZString Ptr, ByVal tags As TagItem Ptr) As Long
Declare Function NewLoadSegTagList(ByVal file As Const ZString Ptr, ByVal tags As TagItem Ptr) As Long
Declare Function NewLoadSegTags(ByVal file As Const ZString Ptr, ByVal tag1type As ULong, ByVal arg As ...) As Long
Declare Function AddSegment(ByVal name As Const ZString Ptr, ByVal seg As Long, ByVal system As Long) As Long
Declare Function RemSegment(ByVal seg As Segment Ptr) As Long
Declare Function CheckSignal(ByVal mask As Long) As Long
Declare Function FindArg(ByVal keyword As Const ZString Ptr, ByVal arg_template As Const ZString Ptr) As Long
Declare Function StrToLong(ByVal string As Const ZString Ptr, ByVal value As Long Ptr) As Long
Declare Function MatchFirst(ByVal pat As Const ZString Ptr, ByVal anchor As AnchorPath Ptr) As Long
Declare Function MatchNext(ByVal anchor As AnchorPath Ptr) As Long
Declare Sub MatchEnd(ByVal anchor As AnchorPath Ptr)
Declare Function ParsePattern(ByVal pat As Const ZString Ptr, ByVal patbuf As UByte Ptr, ByVal patbuflen As Long) As Long
Declare Function MatchPattern(ByVal patbuf As UByte Ptr, ByVal str As Const ZString Ptr) As Short
Declare Sub FreeArgs(ByVal args As RDArgs Ptr)
Declare Function FilePart(ByVal path As Const ZString Ptr) As ZString Ptr
Declare Function PathPart(ByVal path As Const ZString Ptr) As ZString Ptr
Declare Function AddPart(ByVal dirname As ZString Ptr, ByVal filename As Const ZString Ptr, ByVal size As ULong) As Short
Declare Function StartNotify(ByVal notify As NotifyRequest Ptr) As Short
Declare Sub EndNotify(ByVal notify As NotifyRequest Ptr)
Declare Function SetVar(ByVal name As Const ZString Ptr, ByVal buffer As Const ZString Ptr, ByVal size As Long, ByVal flags As Long) As Short
Declare Function GetVar(ByVal name As Const ZString Ptr, ByVal buffer As ZString Ptr, ByVal size As Long, ByVal flags As Long) As Long
Declare Function DeleteVar(ByVal name As Const ZString Ptr, ByVal flags As ULong) As Long
Declare Function CliInitNewcli(ByVal dp As DosPacket Ptr) As Long
Declare Function CliInitRun(ByVal dp As DosPacket Ptr) As Long
Declare Function WriteChars(ByVal buf As Const ZString Ptr, ByVal buflen As ULong) As Long
Declare Function PutStr(ByVal str As Const ZString Ptr) As Long
Declare Function VPrintf(ByVal format As Const ZString Ptr, ByVal argarray As Any Ptr) As Long
Declare Function Printf(ByVal format As Const ZString Ptr, ByVal arg As ...) As Long
Declare Function ParsePatternNoCase(ByVal pat As Const ZString Ptr, ByVal patbuf As UByte Ptr, ByVal patbuflen As Long) As Long
Declare Function MatchPatternNoCase(ByVal patbuf As UByte Ptr, ByVal str As Const ZString Ptr) As Short
Declare Function SameDevice(ByVal lock1 As Long, ByVal lock2 As Long) As Short
Declare Function SetOwner(ByVal name As Const ZString Ptr, ByVal owner_info As Long) As Short
Declare Function VolumeRequestHook(ByVal vol As Const ZString Ptr) As Long
Declare Function GetCurrentDir() As Long
Declare Function PutErrStr(ByVal str As Const ZString Ptr) As Long
Declare Function ErrorOutput() As Long
Declare Function SelectError(ByVal fh As Long) As Long
Declare Function DoShellMethodTagList(ByVal method As ULong, ByVal tags As TagItem Ptr) As Any Ptr
Declare Function DoShellMethod(ByVal method As ULong, ByVal tag1type As ULong, ByVal arg As ...) As Any Ptr
Declare Function ScanStackToken(ByVal seg As Long, ByVal defaultstack As Long) As Long

#endif
