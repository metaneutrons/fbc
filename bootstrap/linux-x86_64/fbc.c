typedef   signed char       int8;
typedef unsigned char      uint8;
typedef   signed short      int16;
typedef unsigned short     uint16;
typedef   signed int        int32;
typedef unsigned int       uint32;
typedef   signed long long  int64;
typedef unsigned long long uint64;
typedef struct { char *data; int64 len; int64 size; } FBSTRING;
typedef int8 boolean;
struct $13FBGNUARCHINFO {
	char* GNUID;
	int64 CPUTYPE;
};
#define __FB_STATIC_ASSERT( expr ) extern int __$fb_structsizecheck[(expr) ? 1 : -1]
__FB_STATIC_ASSERT( sizeof( struct $13FBGNUARCHINFO ) == 16 );
struct $7TLISTTB;
struct $7TLISTTB {
	struct $7TLISTTB* NEXT;
	void* NODETB;
	int64 NODES;
};
__FB_STATIC_ASSERT( sizeof( struct $7TLISTTB ) == 24 );
struct $9TLISTNODE;
struct $9TLISTNODE {
	struct $9TLISTNODE* PREV;
	struct $9TLISTNODE* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $9TLISTNODE ) == 16 );
typedef int64 $10LIST_FLAGS;
struct $5TLIST {
	struct $7TLISTTB* TBHEAD;
	struct $7TLISTTB* TBTAIL;
	int64 NODES;
	int64 NODELEN;
	struct $9TLISTNODE* FHEAD;
	void* HEAD;
	void* TAIL;
	$10LIST_FLAGS FLAGS;
};
__FB_STATIC_ASSERT( sizeof( struct $5TLIST ) == 64 );
struct $8HASHITEM;
struct $8HASHITEM {
	char* NAME;
	void* DATA;
	struct $8HASHITEM* PREV;
	struct $8HASHITEM* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $8HASHITEM ) == 32 );
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
	struct $8HASHITEM* HASHITEM;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 40 );
struct $10FBC_EXTOPT {
	FBSTRING GAS;
	FBSTRING LD;
	FBSTRING GCC;
};
__FB_STATIC_ASSERT( sizeof( struct $10FBC_EXTOPT ) == 72 );
struct $9FBCIOFILE {
	FBSTRING SRCFILE;
	FBSTRING* OBJFILE;
	int64 IS_CUSTOM_OBJFILE;
};
__FB_STATIC_ASSERT( sizeof( struct $9FBCIOFILE ) == 40 );
struct $8HASHLIST {
	struct $8HASHITEM* HEAD;
	struct $8HASHITEM* TAIL;
};
__FB_STATIC_ASSERT( sizeof( struct $8HASHLIST ) == 16 );
struct $5THASH {
	struct $8HASHLIST* LIST;
	int64 NODES;
	int64 DELSTR;
};
__FB_STATIC_ASSERT( sizeof( struct $5THASH ) == 24 );
struct $7TSTRSET {
	struct $5TLIST LIST;
	struct $5THASH HASH;
};
__FB_STATIC_ASSERT( sizeof( struct $7TSTRSET ) == 88 );
typedef int64 $7FB_LANG;
struct $10FBC_OBJINF {
	$7FB_LANG LANG;
	int64 MT;
};
__FB_STATIC_ASSERT( sizeof( struct $10FBC_OBJINF ) == 16 );
struct $6FBCCTX {
	int64 OPTID;
	struct $9FBCIOFILE* LASTMODULE;
	FBSTRING OBJFILE;
	int64 BACKEND;
	int64 CPUTYPE;
	int64 CPUTYPE_IS_NATIVE;
	int64 ASMSYNTAX;
	int64 EMITASMONLY;
	int64 KEEPASM;
	int64 EMITFINALASMONLY;
	int64 KEEPFINALASM;
	int64 KEEPOBJ;
	int64 VERBOSE;
	int64 SHOWVERSION;
	int64 SHOWHELP;
	int64 PRINT;
	struct $5TLIST MODULES;
	struct $5TLIST RCS;
	struct $9FBCIOFILE XPM;
	struct $7TSTRSET TEMPS;
	struct $5TLIST OBJLIST;
	struct $5TLIST LIBFILES;
	struct $7TSTRSET LIBS;
	struct $7TSTRSET LIBPATHS;
	struct $7TSTRSET EXCLUDEDLIBS;
	struct $7TSTRSET FINALLIBS;
	struct $7TSTRSET FINALLIBPATHS;
	char OUTNAME[261];
	char MAINNAME[261];
	char ENTRY[129];
	int64 MAINSET;
	char MAPFILE[261];
	char SUBSYSTEM[129];
	struct $10FBC_EXTOPT EXTOPT;
	char TARGET[129];
	char TARGETPREFIX[129];
	char SYSROOT[261];
	char XBE_TITLE[129];
	int64 NODEFLIBS;
	int64 NOFBRT0;
	int64 STATICLINK;
	int64 STRIPSYMBOLS;
	char PREFIX[261];
	char BINPATH[261];
	char INCPATH[261];
	char LIBPATH[261];
	char BUILDPREFIX[261];
	struct $10FBC_OBJINF OBJINF;
};
__FB_STATIC_ASSERT( sizeof( struct $6FBCCTX ) == 4104 );
typedef int64 $11FBCTOOLFLAG;
struct $11FBCTOOLINFO {
	char NAME[16];
	char ENV_VARIABLE[16];
	$11FBCTOOLFLAG FLAGS;
	char PATH[261];
};
__FB_STATIC_ASSERT( sizeof( struct $11FBCTOOLINFO ) == 304 );
struct $16__FB_ARRAYDIMTB$ {
	int64 ELEMENTS;
	int64 LBOUND;
	int64 UBOUND;
};
__FB_STATIC_ASSERT( sizeof( struct $16__FB_ARRAYDIMTB$ ) == 24 );
struct $8FBARRAY1IcE {
	char* DATA;
	char* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	int64 FLAGS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[1];
};
__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1IcE ) == 72 );
typedef int64 $7FBCTOOL;
struct $11FBGNUOSINFO {
	char* GNUID;
	int64 OS;
};
__FB_STATIC_ASSERT( sizeof( struct $11FBGNUOSINFO ) == 16 );
struct $12FBOSARCHINFO {
	char* TARGETID;
	int64 OS;
	int64 CPUTYPE;
};
__FB_STATIC_ASSERT( sizeof( struct $12FBOSARCHINFO ) == 24 );
struct $7FBARRAYI8FBSTRINGE {
	FBSTRING* DATA;
	FBSTRING* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	int64 FLAGS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[8];
};
__FB_STATIC_ASSERT( sizeof( struct $7FBARRAYI8FBSTRINGE ) == 240 );
struct $7FBARRAYIKvE {
	void* DATA;
	void* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	int64 FLAGS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[8];
};
__FB_STATIC_ASSERT( sizeof( struct $7FBARRAYIKvE ) == 240 );
struct $7FBARRAYIvE {
	void* DATA;
	void* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	int64 FLAGS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[8];
};
__FB_STATIC_ASSERT( sizeof( struct $7FBARRAYIvE ) == 240 );
struct $18FBC_CMDLINE_OPTION {
	boolean TAKES_ARGUMENT;
	boolean ALLOWED_IN_SOURCE;
	boolean PARSER_RESTART;
	int64 FBC_RESTART;
};
__FB_STATIC_ASSERT( sizeof( struct $18FBC_CMDLINE_OPTION ) == 16 );
void fb_ArrayStrErase( struct $7FBARRAYIvE* );
int64 fb_ArrayLBound( struct $7FBARRAYIKvE*, int64 );
int64 fb_ArrayUBound( struct $7FBARRAYIKvE*, int64 );
int32 fb_FileOpen( FBSTRING*, uint32, uint32, uint32, int32, int32 );
int32 fb_FileOpenPipe( FBSTRING*, uint32, uint32, uint32, int32, int32, char* );
int32 fb_FileClose( int32 );
int32 fb_FilePutLarge( int32, int64, void*, uint64 );
int32 fb_FileLineInput( int32, void*, int64, int32 );
int32 fb_FileInput( int32 );
int32 fb_InputString( void*, int64, int32 );
int32 rename( char*, char* );
int32 fb_FileFree( void );
int32 fb_FileEof( int32 );
int32 fb_FileKill( FBSTRING* );
void fb_PrintVoid( int32, int32 );
void fb_PrintString( int32, FBSTRING*, int32 );
FBSTRING* fb_StrInit( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
FBSTRING* fb_StrConcatByref( void*, int64, void*, int64, int32 );
int32 fb_StrCompare( void*, int64, void*, int64 );
FBSTRING* fb_StrConcatAssign( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAllocTempResult( FBSTRING* );
FBSTRING* fb_StrAllocTempDescZ( char* );
FBSTRING* fb_StrAllocTempDescZEx( char*, int64 );
FBSTRING* fb_LongintToStr( int64 );
int64 fb_StrLen( void*, int64 );
int64 fb_StrInstr( int64, FBSTRING*, FBSTRING* );
FBSTRING* fb_TRIM( FBSTRING* );
int32 fb_VALINT( FBSTRING* );
FBSTRING* fb_LEFT( FBSTRING*, int64 );
FBSTRING* fb_RIGHT( FBSTRING*, int64 );
FBSTRING* fb_StrLcase2( FBSTRING*, int32 );
FBSTRING* fb_StrUcase2( FBSTRING*, int32 );
void fb_Init( int32, char**, int32 );
void fb_End( int32 );
FBSTRING* fb_ExePath( void );
int32 fb_Shell( FBSTRING* );
int32 fb_Exec( FBSTRING*, FBSTRING* );
FBSTRING* fb_GetEnviron( FBSTRING* );
void LISTINIT( struct $5TLIST*, int64, int64, $10LIST_FLAGS );
void* LISTNEWNODE( struct $5TLIST* );
void* LISTGETHEAD( struct $5TLIST* );
void* LISTGETNEXT( void* );
void STRLISTAPPEND( struct $5TLIST*, FBSTRING* );
void STRLISTINIT( struct $5TLIST*, int64 );
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void STRSETADD( struct $7TSTRSET*, FBSTRING*, int64 );
void STRSETDEL( struct $7TSTRSET*, FBSTRING* );
void STRSETCOPY( struct $7TSTRSET*, struct $7TSTRSET* );
void STRSETINIT( struct $7TSTRSET*, int64 );
void ERRPREINIT( void );
int64 ERRGETCOUNT( void );
typedef int64 $12FB_ERRMSGOPT;
void ERRREPORTEX( int64, char*, int64, $12FB_ERRMSGOPT, char* );
void ERRREPORTWARN( int64, char*, $12FB_ERRMSGOPT, char* );
void ERRREPORTWARNEX( int64, char*, int64, $12FB_ERRMSGOPT, char* );
void FBINIT( int64, char*, int64 );
void FBEND( void );
void FBCOMPILE( char*, char*, FBSTRING*, int64 );
int64 FBSHOULDRESTART( void );
typedef int64 $16FB_RESTART_FLAGS;
void FBRESTARTBEGINREQUEST( $16FB_RESTART_FLAGS );
void FBRESTARTENDREQUEST( $16FB_RESTART_FLAGS );
int64 FBRESTARTGETCOUNT( void );
void FBGLOBALINIT( void );
void FBADDINCLUDEPATH( FBSTRING* );
void FBADDPREDEFINE( FBSTRING* );
void FBADDPREINCLUDE( FBSTRING* );
void FBSETOPTION( int64, int64 );
int64 FBGETOPTION( int64 );
void FBSETLIBS( struct $7TSTRSET*, struct $7TSTRSET* );
void FBGETLIBS( struct $7TSTRSET*, struct $7TSTRSET* );
FBSTRING* FBGETTARGETID( void );
FBSTRING* FBGETHOSTID( void );
int64 FBIDENTIFYOS( FBSTRING* );
int64 FBDEFAULTCPUTYPEFROMCPUFAMILYID( int64, FBSTRING* );
char* FBGETGCCARCH( void );
char* FBGETFBCARCH( void );
int64 FBGETBITS( void );
int64 FBGETHOSTBITS( void );
int64 FBGETCPUFAMILY( void );
int64 FBIDENTIFYFBCARCH( FBSTRING* );
int64 FBTARGETSUPPORTSELF( void );
int64 FBISCROSSCOMP( void );
typedef int64 $10FB_BACKEND;
FBSTRING* FBGETBACKENDNAME( $10FB_BACKEND );
$7FB_LANG FBGETLANGID( char* );
int64 HFILEEXISTS( char* );
FBSTRING* HSTRIPEXT( FBSTRING* );
FBSTRING* HSTRIPPATH( char* );
FBSTRING* HSTRIPFILENAME( char* );
FBSTRING* HGETFILEEXT( char* );
void HREPLACESLASH( char*, int64 );
FBSTRING* PATHSTRIPDIV( FBSTRING* );
FBSTRING* STRUNQUOTE( FBSTRING* );
FBSTRING* HREPLACE( char*, char*, char* );
void HSPLITSTR( FBSTRING*, FBSTRING*, struct $7FBARRAYI8FBSTRINGE* );
void OBJINFOREADOBJ( FBSTRING* );
void OBJINFOREADLIBFILE( FBSTRING* );
void OBJINFOREADLIB( FBSTRING*, struct $5TLIST* );
int64 OBJINFOREADNEXT( FBSTRING* );
char* OBJINFOGETFILENAME( void );
void OBJINFOREADEND( void );
int64 fb_FileLen( char* );
static void _ZN10FBC_EXTOPTC1Ev( struct $10FBC_EXTOPT* );
static void _ZN10FBC_EXTOPTaSERKS_( struct $10FBC_EXTOPT*, struct $10FBC_EXTOPT* );
static void _ZN10FBC_EXTOPTD1Ev( struct $10FBC_EXTOPT* );
static void _ZN9FBCIOFILEC1Ev( struct $9FBCIOFILE* );
static void _ZN9FBCIOFILEaSERKS_( struct $9FBCIOFILE*, struct $9FBCIOFILE* );
static void _ZN9FBCIOFILED1Ev( struct $9FBCIOFILE* );
static void _ZN6FBCCTXC1Ev( struct $6FBCCTX* );
static void _ZN6FBCCTXaSERKS_( struct $6FBCCTX*, struct $6FBCCTX* );
static void _ZN6FBCCTXD1Ev( struct $6FBCCTX* );
static void FBCFINDBIN( int64, FBSTRING* );
static void HPRINTVERSION( int64 );
static void FBCINIT( void );
static void HSETOUTNAME( void );
static void FBCEND( int64 );
static void FBCADDTEMP( FBSTRING* );
static void FBCREMOVETEMP( FBSTRING* );
static FBSTRING* FBCADDOBJ( FBSTRING* );
static FBSTRING* HGET1STOUTPUTLINEFROMCOMMAND( FBSTRING* );
static FBSTRING* FBCQUERYCC( FBSTRING* );
static FBSTRING* FBCBUILDPATHTOLIBFILE( char* );
static FBSTRING* FBCFINDSYSROOT( void );
static FBSTRING* FBCFINDLIBFILE( char* );
static void FBCADDDEFLIBPATH( FBSTRING* );
static void FBCADDLIBPATHFOR( char* );
static int64 FBCRUNBIN( char*, int64, FBSTRING* );
static int64 CLEARDEFLIST( FBSTRING* );
static int64 HGENERATEEMPTYDEFFILE( FBSTRING* );
static int64 MAKEIMPLIB( FBSTRING*, FBSTRING* );
static FBSTRING* HFINDLIB( char* );
static int64 FBCLINKERISGOLD( void );
static int64 FBCISUSINGGOLDLINKER( void );
static int64 HLINKFILES( void );
static void HREADOBJINFO( void );
static void HCOLLECTOBJINFO( void );
static void HFATALINVALIDOPTION( FBSTRING*, int64 );
static void HCHECKWAITINGOBJFILE( void );
static void HSETIOFILE( struct $9FBCIOFILE*, FBSTRING*, int64 );
static void HADDBAS( FBSTRING* );
static void HPARSEGNUTRIPLET( FBSTRING*, int64, int64*, int64* );
static void HPARSETARGETARG( FBSTRING*, int64*, int64*, int64* );
static void HANDLEOPT( int64, FBSTRING*, int64 );
static int64 PARSEOPTION( char* );
static void PARSEARGSFROMFILE( FBSTRING*, int64 );
static void HANDLEARG( FBSTRING*, int64, int64 );
void FBCPARSEARGSFROMSTRING( char*, int64, int64 );
static int64 HTARGETNEEDSPIC( void );
static void HPARSEARGS( int64, char** );
static void HCHECKARGS( void );
static void FBCDETERMINEPREFIX( void );
static void FBCSETUPCOMPILERPATHS( void );
static void FBCPRINTTARGETINFO( void );
static void FBCDETERMINEMAINNAME( void );
static FBSTRING* HGETASMNAME( struct $9FBCIOFILE*, int64 );
static void HCOMPILEBAS( struct $9FBCIOFILE*, int64, int64, int64 );
static void HCOMPILEMODULES( void );
static int64 HPARSEXPM( FBSTRING*, FBSTRING* );
static int64 HCOMPILEXPM( void );
static int64 HCOMPILESTAGE2MODULE( struct $9FBCIOFILE* );
static void HCOMPILESTAGE2MODULES( void );
static int64 HASSEMBLEMODULE( struct $9FBCIOFILE* );
static void HASSEMBLEMODULES( void );
static int64 HASSEMBLERC( struct $9FBCIOFILE* );
static void HASSEMBLERCS( void );
static void HASSEMBLEXPM( void );
static int64 HCOMPILEFBCTINF( void );
static int64 HARCHIVEFILES( void );
static void HSETDEFAULTLIBPATHS( void );
static void FBCADDDEFLIB( char* );
static FBSTRING* HGETFBLIBNAMESUFFIX( void );
static void HADDDEFAULTLIBS( void );
static void HEXCLUDELIBSFROMLINK( void );
static void HPRINTOPTIONS( int64 );
static void _GLOBAL__I( void ) __attribute__(( constructor ));
static void _GLOBAL__D( void ) __attribute__(( destructor ));
static struct $11FBCTOOLINFO FBCTOOLTB$[16] = { { "", "", 0ll }, { "as", "AS", 3ll }, { "ar", "AR", 3ll }, { "ld", "LD", 3ll }, { "gcc", "GCC", 3ll }, { "llc", "LLC", 3ll }, { "clang", "CLANG", 3ll }, { "dlltool", "DLLTOOL", 3ll }, { "GoRC", "GORC", 3ll }, { "windres", "WINDRES", 3ll }, { "cxbe", "CXBE", 3ll }, { "dxe3gen", "DXEGEN", 3ll }, { "emcc", "EMAS", 3ll }, { "emar", "EMAR", 3ll }, { "emcc", "EMLD", 3ll }, { "emcc", "EMCC", 3ll } };
static struct $6FBCCTX FBC$;
static struct $11FBGNUOSINFO GNUOSMAP$[17] = { { (char*)"android", 3ll }, { (char*)"linux", 2ll }, { (char*)"mingw", 0ll }, { (char*)"djgpp", 4ll }, { (char*)"msdosdjgpp", 4ll }, { (char*)"cygwin", 1ll }, { (char*)"darwin", 10ll }, { (char*)"freebsd", 6ll }, { (char*)"dragonfly", 7ll }, { (char*)"solaris", 8ll }, { (char*)"netbsd", 11ll }, { (char*)"openbsd", 9ll }, { (char*)"xbox", 5ll }, { (char*)"amigaos4", 16ll }, { (char*)"amigaos", 13ll }, { (char*)"aros", 14ll }, { (char*)"morphos", 15ll } };
static struct $13FBGNUARCHINFO GNUARCHMAP$[21] = { { (char*)"i386", 0ll }, { (char*)"i486", 1ll }, { (char*)"i586", 2ll }, { (char*)"i686", 3ll }, { (char*)"x86", 3ll }, { (char*)"x86_64", 13ll }, { (char*)"amd64", 13ll }, { (char*)"armv5te", 14ll }, { (char*)"armv6", 15ll }, { (char*)"armv6+fp", 16ll }, { (char*)"armv7a", 17ll }, { (char*)"armv7a+fp", 18ll }, { (char*)"arm", 17ll }, { (char*)"aarch64", 19ll }, { (char*)"ppc", 20ll }, { (char*)"powerpc", 20ll }, { (char*)"ppc64  ", 21ll }, { (char*)"powerpc64", 21ll }, { (char*)"ppc64le  ", 22ll }, { (char*)"powerpc64le", 22ll }, { (char*)"m68k", 24ll } };
static struct $12FBOSARCHINFO FBOSARCHMAP$[17] = { { (char*)"win32", 0ll, 3ll }, { (char*)"win64", 0ll, 13ll }, { (char*)"dragonfly", 7ll, 13ll }, { (char*)"solaris", 8ll, 13ll }, { (char*)"dos", 4ll, 3ll }, { (char*)"xbox", 5ll, 3ll }, { (char*)"cygwin", 1ll, 13ll }, { (char*)"darwin", 10ll, 13ll }, { (char*)"freebsd", 6ll, 13ll }, { (char*)"linux", 2ll, 13ll }, { (char*)"android", 3ll, 17ll }, { (char*)"netbsd", 11ll, 13ll }, { (char*)"openbsd", 9ll, 13ll }, { (char*)"amiga", 13ll, 24ll }, { (char*)"aros", 14ll, 13ll }, { (char*)"morphos", 15ll, 20ll }, { (char*)"amigaos4", 16ll, 20ll } };
static struct $18FBC_CMDLINE_OPTION CMDLINEOPTIONTB$[74] = { { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)1, -1ll }, { (boolean)1, (boolean)1, (boolean)0, -1ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)0, -1ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)0, -1ll }, { (boolean)0, (boolean)1, (boolean)1, -1ll }, { (boolean)0, (boolean)1, (boolean)1, -1ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)1, (boolean)1, (boolean)1, -1ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)1, 0ll }, { (boolean)1, (boolean)1, (boolean)1, -1ll }, { (boolean)1, (boolean)1, (boolean)1, -1ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)1, (boolean)1, (boolean)1, -1ll }, { (boolean)0, (boolean)0, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)1, -1ll }, { (boolean)1, (boolean)1, (boolean)1, -1ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)1, -1ll }, { (boolean)1, (boolean)1, (boolean)1, -1ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)0, 0ll }, { (boolean)0, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)0, (boolean)1, (boolean)0, 0ll }, { (boolean)0, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)1, -1ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)0, (boolean)1, (boolean)0, -1ll }, { (boolean)0, (boolean)1, (boolean)0, -1ll }, { (boolean)1, (boolean)1, (boolean)0, -1ll }, { (boolean)1, (boolean)0, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)1, -1ll }, { (boolean)0, (boolean)1, (boolean)1, -1ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)0, (boolean)1, (boolean)0, -1ll }, { (boolean)0, (boolean)1, (boolean)0, 0ll }, { (boolean)0, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)1, -1ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)0, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)1, -1ll }, { (boolean)0, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)1, -1ll } };

int64 FBCPUTYPEFROMGNUARCHINFO( FBSTRING* ARCH$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$530:;
	{
		int64 I$2;
		I$2 = 0ll;
		label$535:;
		{
			int32 vr$2 = fb_StrCompare( (void*)ARCH$1, -1ll, *(void**)((int64)(struct $13FBGNUARCHINFO*)GNUARCHMAP$ + (I$2 << (4ll & 63ll))), 0ll );
			if( (int64)vr$2 != 0ll ) goto label$537;
			{
				fb$result$1 = *(int64*)(((int64)(struct $13FBGNUARCHINFO*)GNUARCHMAP$ + (I$2 << (4ll & 63ll))) + 8ll);
				goto label$531;
			}
			label$537:;
			label$536:;
		}
		label$533:;
		I$2 = I$2 + 1ll;
		label$532:;
		if( I$2 <= 20ll ) goto label$535;
		label$534:;
	}
	fb$result$1 = -1ll;
	goto label$531;
	label$531:;
	return fb$result$1;
}

void FBCPARSEARGSFROMSTRING( char* ARGS_IN$1, int64 IS_SOURCE$1, int64 IS_FILE$1 )
{
	label$1015:;
	FBSTRING ARGS$1;
	fb_StrInit( (void*)&ARGS$1, -1ll, (void*)ARGS_IN$1, 0ll, 0 );
	FBSTRING ARG$1;
	__builtin_memset( &ARG$1, 0, 24ll );
	label$1017:;
	{
		int64 LENGTH$2;
		int64 vr$3 = fb_StrLen( (void*)&ARGS$1, -1ll );
		LENGTH$2 = vr$3;
		if( LENGTH$2 != 0ll ) goto label$1021;
		{
			goto label$1018;
		}
		label$1021:;
		label$1020:;
		int64 I$2;
		I$2 = 0ll;
		int64 QUOTECH$2;
		QUOTECH$2 = 0ll;
		label$1022:;
		if( I$2 >= LENGTH$2 ) goto label$1023;
		{
			int64 CH$3;
			CH$3 = (int64)*(uint8*)((uint8*)*(char**)&ARGS$1 + I$2);
			{
				uint64 TMP$517$4;
				TMP$517$4 = (uint64)CH$3;
				goto label$1025;
				label$1026:;
				{
					if( QUOTECH$2 != 0ll ) goto label$1028;
					{
						goto label$1023;
					}
					label$1028:;
					label$1027:;
				}
				goto label$1024;
				label$1029:;
				{
					if( QUOTECH$2 != CH$3 ) goto label$1031;
					{
						QUOTECH$2 = 0ll;
					}
					goto label$1030;
					label$1031:;
					if( QUOTECH$2 != 0ll ) goto label$1032;
					{
						QUOTECH$2 = CH$3;
					}
					label$1032:;
					label$1030:;
				}
				goto label$1024;
				label$1025:;
				static const void* tmp$519[8ll] = {
					&&label$1026,
					&&label$1024,
					&&label$1029,
					&&label$1024,
					&&label$1024,
					&&label$1024,
					&&label$1024,
					&&label$1029,
				};
				if( (TMP$517$4 - 32ull) > 7ull ) goto label$1024;
				goto *tmp$519[TMP$517$4 - 32ull];
				label$1024:;
			}
			I$2 = I$2 + 1ll;
		}
		goto label$1022;
		label$1023:;
		if( I$2 != 0ll ) goto label$1034;
		{
			I$2 = 1ll;
		}
		goto label$1033;
		label$1034:;
		{
			FBSTRING* vr$8 = fb_LEFT( (FBSTRING*)&ARGS$1, I$2 );
			fb_StrAssign( (void*)&ARG$1, -1ll, (void*)vr$8, -1ll, 0 );
			FBSTRING* vr$11 = fb_TRIM( (FBSTRING*)&ARG$1 );
			fb_StrAssign( (void*)&ARG$1, -1ll, (void*)vr$11, -1ll, 0 );
			FBSTRING* vr$14 = STRUNQUOTE( &ARG$1 );
			fb_StrAssign( (void*)&ARG$1, -1ll, (void*)vr$14, -1ll, 0 );
			HANDLEARG( &ARG$1, IS_SOURCE$1, IS_FILE$1 );
		}
		label$1033:;
		FBSTRING* vr$19 = fb_RIGHT( (FBSTRING*)&ARGS$1, LENGTH$2 - I$2 );
		fb_StrAssign( (void*)&ARGS$1, -1ll, (void*)vr$19, -1ll, 0 );
	}
	label$1019:;
	goto label$1017;
	label$1018:;
	fb_StrDelete( (FBSTRING*)&ARG$1 );
	fb_StrDelete( (FBSTRING*)&ARGS$1 );
	label$1016:;
}

int32 main( int32 __FB_ARGC__$0, char** __FB_ARGV__$0 )
{
	int32 fb$result$0;
	__builtin_memset( &fb$result$0, 0, 4ll );
	fb_Init( __FB_ARGC__$0, (char**)__FB_ARGV__$0, 0 );
	label$0:;
	FBCINIT(  );
	if( (int64)__FB_ARGC__$0 != 1ll ) goto label$1539;
	{
		HPRINTOPTIONS( 0ll );
		FBCEND( 1ll );
	}
	label$1539:;
	label$1538:;
	HPARSEARGS( (int64)__FB_ARGC__$0, (char**)__FB_ARGV__$0 );
	HCHECKARGS(  );
	if( *(int64*)((uint8*)&FBC$ + 120ll) == 0ll ) goto label$1541;
	{
		HPRINTVERSION( *(int64*)((uint8*)&FBC$ + 112ll) );
		FBCEND( 0ll );
	}
	label$1541:;
	label$1540:;
	if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$1543;
	{
		*(int64*)((uint8*)&FBC$ + 120ll) = -1ll;
		HPRINTVERSION( 0ll );
	}
	label$1543:;
	label$1542:;
	if( *(int64*)((uint8*)&FBC$ + 128ll) == 0ll ) goto label$1545;
	{
		HPRINTOPTIONS( *(int64*)((uint8*)&FBC$ + 112ll) );
		FBCEND( 1ll );
	}
	label$1545:;
	label$1544:;
	label$1546:;
	{
		FBSTRING TMP$868$1;
		FBCDETERMINEPREFIX(  );
		FBCSETUPCOMPILERPATHS(  );
		if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$1550;
		{
			FBCPRINTTARGETINFO(  );
		}
		label$1550:;
		label$1549:;
		__builtin_memset( &TMP$868$1, 0, 24ll );
		fb_StrAssign( (void*)&TMP$868$1, -1ll, (void*)((uint8*)&FBC$ + 3298ll), 261ll, 0 );
		FBADDINCLUDEPATH( &TMP$868$1 );
		fb_StrDelete( (FBSTRING*)&TMP$868$1 );
		int64 HAVE_INPUT_FILES$1;
		void* vr$9 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 144ll) );
		void* vr$12 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 400ll) );
		void* vr$16 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 528ll) );
		void* vr$20 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 464ll) );
		HAVE_INPUT_FILES$1 = (((int64)-(vr$9 != (void*)0ull) | (int64)-(vr$12 != (void*)0ull)) | (int64)-(vr$16 != (void*)0ull)) | (int64)-(vr$20 != (void*)0ull);
		if( *(int64*)((uint8*)&FBC$ + 136ll) < 0ll ) goto label$1552;
		{
			{
				int64 TMP$869$3;
				TMP$869$3 = *(int64*)((uint8*)&FBC$ + 136ll);
				if( TMP$869$3 != 0ll ) goto label$1554;
				label$1555:;
				{
					FBSTRING* vr$23 = FBGETHOSTID(  );
					fb_PrintString( 0, (FBSTRING*)vr$23, 1 );
				}
				goto label$1553;
				label$1554:;
				if( TMP$869$3 != 1ll ) goto label$1556;
				label$1557:;
				{
					FBSTRING* vr$24 = FBGETTARGETID(  );
					fb_PrintString( 0, (FBSTRING*)vr$24, 1 );
				}
				goto label$1553;
				label$1556:;
				if( TMP$869$3 != 2ll ) goto label$1558;
				label$1559:;
				{
					if( HAVE_INPUT_FILES$1 == 0ll ) goto label$1561;
					{
						FBCDETERMINEMAINNAME(  );
					}
					label$1561:;
					label$1560:;
					HSETOUTNAME(  );
					FBSTRING* vr$26 = fb_StrAllocTempDescZ( (char*)((uint8*)&FBC$ + 968ll) );
					fb_PrintString( 0, (FBSTRING*)vr$26, 1 );
				}
				goto label$1553;
				label$1558:;
				if( TMP$869$3 != 3ll ) goto label$1562;
				label$1563:;
				{
					FBSTRING* vr$28 = fb_StrAllocTempDescZ( (char*)((uint8*)&FBC$ + 3559ll) );
					fb_PrintString( 0, (FBSTRING*)vr$28, 1 );
				}
				goto label$1553;
				label$1562:;
				if( TMP$869$3 != 4ll ) goto label$1564;
				label$1565:;
				{
					FBSTRING* vr$29 = fb_StrAllocTempDescZEx( (char*)"", 0ll );
					fb_PrintString( 0, (FBSTRING*)vr$29, 1 );
				}
				goto label$1553;
				label$1564:;
				if( TMP$869$3 != 5ll ) goto label$1566;
				label$1567:;
				{
					FBSTRING* vr$30 = fb_StrAllocTempDescZEx( (char*)"", 0ll );
					fb_PrintString( 0, (FBSTRING*)vr$30, 1 );
				}
				label$1566:;
				label$1553:;
			}
			FBCEND( 0ll );
		}
		label$1552:;
		label$1551:;
		FBCDETERMINEMAINNAME(  );
		if( HAVE_INPUT_FILES$1 != 0ll ) goto label$1569;
		{
			HPRINTOPTIONS( *(int64*)((uint8*)&FBC$ + 112ll) );
			FBCEND( 1ll );
		}
		label$1569:;
		label$1568:;
		HCOMPILEMODULES(  );
		int64 vr$31 = FBSHOULDRESTART(  );
		if( vr$31 != 0ll ) goto label$1571;
		{
			goto label$1547;
		}
		label$1571:;
		label$1570:;
		FBRESTARTENDREQUEST( 8ll );
		ERRPREINIT(  );
		HCHECKARGS(  );
		if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$1573;
		{
			FBSTRING* vr$32 = fb_StrAllocTempDescZEx( (char*)"Restarting fbc ...", 18ll );
			fb_PrintString( 0, (FBSTRING*)vr$32, 1 );
		}
		label$1573:;
		label$1572:;
	}
	label$1548:;
	goto label$1546;
	label$1547:;
	int64 vr$33 = HCOMPILEXPM(  );
	if( vr$33 != 0ll ) goto label$1575;
	{
		FBCEND( 1ll );
	}
	label$1575:;
	label$1574:;
	if( *(int64*)((uint8*)&FBC$ + 72ll) == 0ll ) goto label$1577;
	{
		FBCEND( 0ll );
	}
	label$1577:;
	label$1576:;
	int64 vr$34 = FBGETOPTION( 2ll );
	int64 vr$36 = FBGETOPTION( 2ll );
	if( ((int64)-(vr$34 != 0ll) & (int64)-(vr$36 != 4ll)) == 0ll ) goto label$1579;
	{
		HCOMPILESTAGE2MODULES(  );
	}
	label$1579:;
	label$1578:;
	if( *(int64*)((uint8*)&FBC$ + 88ll) == 0ll ) goto label$1581;
	{
		FBCEND( 0ll );
	}
	label$1581:;
	label$1580:;
	HASSEMBLEMODULES(  );
	HASSEMBLERCS(  );
	HASSEMBLEXPM(  );
	int64 vr$39 = FBGETOPTION( 0ll );
	if( vr$39 != 3ll ) goto label$1583;
	{
		FBCEND( 0ll );
	}
	label$1583:;
	label$1582:;
	HSETDEFAULTLIBPATHS(  );
	int64 vr$40 = FBGETOPTION( 40ll );
	int64 vr$41 = FBISCROSSCOMP(  );
	if( (vr$40 & ~vr$41) == 0ll ) goto label$1585;
	{
		HCOLLECTOBJINFO(  );
	}
	label$1585:;
	label$1584:;
	int64 vr$44 = FBGETOPTION( 0ll );
	if( vr$44 != 1ll ) goto label$1587;
	{
		int64 vr$45 = HARCHIVEFILES(  );
		if( vr$45 != 0ll ) goto label$1589;
		{
			FBCEND( 1ll );
		}
		label$1589:;
		label$1588:;
		FBCEND( 0ll );
	}
	label$1587:;
	label$1586:;
	if( *(int64*)((uint8*)&FBC$ + 2744ll) != 0ll ) goto label$1591;
	{
		HADDDEFAULTLIBS(  );
	}
	label$1591:;
	label$1590:;
	HEXCLUDELIBSFROMLINK(  );
	int64 vr$46 = HLINKFILES(  );
	if( vr$46 != 0ll ) goto label$1593;
	{
		FBCEND( 1ll );
	}
	label$1593:;
	label$1592:;
	FBCEND( 0ll );
	label$1:;
	fb_End( 0 );
	return fb$result$0;
}

static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM* THIS$1, struct $11TSTRSETITEM* __FB_RHS__$1 )
{
	label$4:;
	fb_StrAssign( (void*)THIS$1, -1ll, (void*)__FB_RHS__$1, -1ll, 0 );
	*(int64*)((uint8*)THIS$1 + 24ll) = *(int64*)((uint8*)__FB_RHS__$1 + 24ll);
	*(struct $8HASHITEM**)((uint8*)THIS$1 + 32ll) = *(struct $8HASHITEM**)((uint8*)__FB_RHS__$1 + 32ll);
	label$5:;
}

static void _ZN10FBC_EXTOPTC1Ev( struct $10FBC_EXTOPT* THIS$1 )
{
	__builtin_memset( (FBSTRING*)THIS$1, 0, 24ll );
	__builtin_memset( (FBSTRING*)((uint8*)THIS$1 + 24ll), 0, 24ll );
	__builtin_memset( (FBSTRING*)((uint8*)THIS$1 + 48ll), 0, 24ll );
	label$10:;
	label$11:;
}

static void _ZN10FBC_EXTOPTaSERKS_( struct $10FBC_EXTOPT* THIS$1, struct $10FBC_EXTOPT* __FB_RHS__$1 )
{
	label$12:;
	fb_StrAssign( (void*)THIS$1, -1ll, (void*)__FB_RHS__$1, -1ll, 0 );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 24ll), -1ll, (void*)((uint8*)__FB_RHS__$1 + 24ll), -1ll, 0 );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 48ll), -1ll, (void*)((uint8*)__FB_RHS__$1 + 48ll), -1ll, 0 );
	label$13:;
}

static void _ZN10FBC_EXTOPTD1Ev( struct $10FBC_EXTOPT* THIS$1 )
{
	label$16:;
	label$17:;
	fb_StrDelete( (FBSTRING*)((uint8*)THIS$1 + 48ll) );
	fb_StrDelete( (FBSTRING*)((uint8*)THIS$1 + 24ll) );
	fb_StrDelete( (FBSTRING*)THIS$1 );
}

static void _ZN9FBCIOFILEC1Ev( struct $9FBCIOFILE* THIS$1 )
{
	__builtin_memset( (FBSTRING*)THIS$1, 0, 24ll );
	__builtin_memset( (FBSTRING**)((uint8*)THIS$1 + 24ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 32ll), 0, 8ll );
	label$18:;
	label$19:;
}

static void _ZN9FBCIOFILEaSERKS_( struct $9FBCIOFILE* THIS$1, struct $9FBCIOFILE* __FB_RHS__$1 )
{
	label$20:;
	fb_StrAssign( (void*)THIS$1, -1ll, (void*)__FB_RHS__$1, -1ll, 0 );
	*(FBSTRING**)((uint8*)THIS$1 + 24ll) = *(FBSTRING**)((uint8*)__FB_RHS__$1 + 24ll);
	*(int64*)((uint8*)THIS$1 + 32ll) = *(int64*)((uint8*)__FB_RHS__$1 + 32ll);
	label$21:;
}

static void _ZN9FBCIOFILED1Ev( struct $9FBCIOFILE* THIS$1 )
{
	label$24:;
	label$25:;
	fb_StrDelete( (FBSTRING*)THIS$1 );
}

static void _ZN6FBCCTXC1Ev( struct $6FBCCTX* THIS$1 )
{
	__builtin_memset( (int64*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $9FBCIOFILE**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (FBSTRING*)((uint8*)THIS$1 + 16ll), 0, 24ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 40ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 48ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 56ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 64ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 72ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 80ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 88ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 96ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 104ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 112ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 120ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 128ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 136ll), 0, 8ll );
	__builtin_memset( (struct $5TLIST*)((uint8*)THIS$1 + 144ll), 0, 64ll );
	__builtin_memset( (struct $5TLIST*)((uint8*)THIS$1 + 208ll), 0, 64ll );
	_ZN9FBCIOFILEC1Ev( (struct $9FBCIOFILE*)((uint8*)THIS$1 + 272ll) );
	__builtin_memset( (struct $7TSTRSET*)((uint8*)THIS$1 + 312ll), 0, 88ll );
	__builtin_memset( (struct $5TLIST*)((uint8*)THIS$1 + 400ll), 0, 64ll );
	__builtin_memset( (struct $5TLIST*)((uint8*)THIS$1 + 464ll), 0, 64ll );
	__builtin_memset( (struct $7TSTRSET*)((uint8*)THIS$1 + 528ll), 0, 88ll );
	__builtin_memset( (struct $7TSTRSET*)((uint8*)THIS$1 + 616ll), 0, 88ll );
	__builtin_memset( (struct $7TSTRSET*)((uint8*)THIS$1 + 704ll), 0, 88ll );
	__builtin_memset( (struct $7TSTRSET*)((uint8*)THIS$1 + 792ll), 0, 88ll );
	__builtin_memset( (struct $7TSTRSET*)((uint8*)THIS$1 + 880ll), 0, 88ll );
	__builtin_memset( (char*)((uint8*)THIS$1 + 968ll), 0, 261ll );
	__builtin_memset( (char*)((uint8*)THIS$1 + 1229ll), 0, 261ll );
	__builtin_memset( (char*)((uint8*)THIS$1 + 1490ll), 0, 129ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 1624ll), 0, 8ll );
	__builtin_memset( (char*)((uint8*)THIS$1 + 1632ll), 0, 261ll );
	__builtin_memset( (char*)((uint8*)THIS$1 + 1893ll), 0, 129ll );
	_ZN10FBC_EXTOPTC1Ev( (struct $10FBC_EXTOPT*)((uint8*)THIS$1 + 2024ll) );
	__builtin_memset( (char*)((uint8*)THIS$1 + 2096ll), 0, 129ll );
	__builtin_memset( (char*)((uint8*)THIS$1 + 2225ll), 0, 129ll );
	__builtin_memset( (char*)((uint8*)THIS$1 + 2354ll), 0, 261ll );
	__builtin_memset( (char*)((uint8*)THIS$1 + 2615ll), 0, 129ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 2744ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 2752ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 2760ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 2768ll), 0, 8ll );
	__builtin_memset( (char*)((uint8*)THIS$1 + 2776ll), 0, 261ll );
	__builtin_memset( (char*)((uint8*)THIS$1 + 3037ll), 0, 261ll );
	__builtin_memset( (char*)((uint8*)THIS$1 + 3298ll), 0, 261ll );
	__builtin_memset( (char*)((uint8*)THIS$1 + 3559ll), 0, 261ll );
	__builtin_memset( (char*)((uint8*)THIS$1 + 3820ll), 0, 261ll );
	__builtin_memset( (struct $10FBC_OBJINF*)((uint8*)THIS$1 + 4088ll), 0, 16ll );
	label$26:;
	label$27:;
}

static void _ZN6FBCCTXaSERKS_( struct $6FBCCTX* THIS$1, struct $6FBCCTX* __FB_RHS__$1 )
{
	label$28:;
	*(int64*)THIS$1 = *(int64*)__FB_RHS__$1;
	*(struct $9FBCIOFILE**)((uint8*)THIS$1 + 8ll) = *(struct $9FBCIOFILE**)((uint8*)__FB_RHS__$1 + 8ll);
	fb_StrAssign( (void*)((uint8*)THIS$1 + 16ll), -1ll, (void*)((uint8*)__FB_RHS__$1 + 16ll), -1ll, 0 );
	*(int64*)((uint8*)THIS$1 + 40ll) = *(int64*)((uint8*)__FB_RHS__$1 + 40ll);
	*(int64*)((uint8*)THIS$1 + 48ll) = *(int64*)((uint8*)__FB_RHS__$1 + 48ll);
	*(int64*)((uint8*)THIS$1 + 56ll) = *(int64*)((uint8*)__FB_RHS__$1 + 56ll);
	*(int64*)((uint8*)THIS$1 + 64ll) = *(int64*)((uint8*)__FB_RHS__$1 + 64ll);
	*(int64*)((uint8*)THIS$1 + 72ll) = *(int64*)((uint8*)__FB_RHS__$1 + 72ll);
	*(int64*)((uint8*)THIS$1 + 80ll) = *(int64*)((uint8*)__FB_RHS__$1 + 80ll);
	*(int64*)((uint8*)THIS$1 + 88ll) = *(int64*)((uint8*)__FB_RHS__$1 + 88ll);
	*(int64*)((uint8*)THIS$1 + 96ll) = *(int64*)((uint8*)__FB_RHS__$1 + 96ll);
	*(int64*)((uint8*)THIS$1 + 104ll) = *(int64*)((uint8*)__FB_RHS__$1 + 104ll);
	*(int64*)((uint8*)THIS$1 + 112ll) = *(int64*)((uint8*)__FB_RHS__$1 + 112ll);
	*(int64*)((uint8*)THIS$1 + 120ll) = *(int64*)((uint8*)__FB_RHS__$1 + 120ll);
	*(int64*)((uint8*)THIS$1 + 128ll) = *(int64*)((uint8*)__FB_RHS__$1 + 128ll);
	*(int64*)((uint8*)THIS$1 + 136ll) = *(int64*)((uint8*)__FB_RHS__$1 + 136ll);
	__builtin_memcpy( (struct $5TLIST*)((uint8*)THIS$1 + 144ll), (struct $5TLIST*)((uint8*)__FB_RHS__$1 + 144ll), 64 );
	__builtin_memcpy( (struct $5TLIST*)((uint8*)THIS$1 + 208ll), (struct $5TLIST*)((uint8*)__FB_RHS__$1 + 208ll), 64 );
	_ZN9FBCIOFILEaSERKS_( (struct $9FBCIOFILE*)((uint8*)THIS$1 + 272ll), (struct $9FBCIOFILE*)((uint8*)__FB_RHS__$1 + 272ll) );
	__builtin_memcpy( (struct $7TSTRSET*)((uint8*)THIS$1 + 312ll), (struct $7TSTRSET*)((uint8*)__FB_RHS__$1 + 312ll), 88 );
	__builtin_memcpy( (struct $5TLIST*)((uint8*)THIS$1 + 400ll), (struct $5TLIST*)((uint8*)__FB_RHS__$1 + 400ll), 64 );
	__builtin_memcpy( (struct $5TLIST*)((uint8*)THIS$1 + 464ll), (struct $5TLIST*)((uint8*)__FB_RHS__$1 + 464ll), 64 );
	__builtin_memcpy( (struct $7TSTRSET*)((uint8*)THIS$1 + 528ll), (struct $7TSTRSET*)((uint8*)__FB_RHS__$1 + 528ll), 88 );
	__builtin_memcpy( (struct $7TSTRSET*)((uint8*)THIS$1 + 616ll), (struct $7TSTRSET*)((uint8*)__FB_RHS__$1 + 616ll), 88 );
	__builtin_memcpy( (struct $7TSTRSET*)((uint8*)THIS$1 + 704ll), (struct $7TSTRSET*)((uint8*)__FB_RHS__$1 + 704ll), 88 );
	__builtin_memcpy( (struct $7TSTRSET*)((uint8*)THIS$1 + 792ll), (struct $7TSTRSET*)((uint8*)__FB_RHS__$1 + 792ll), 88 );
	__builtin_memcpy( (struct $7TSTRSET*)((uint8*)THIS$1 + 880ll), (struct $7TSTRSET*)((uint8*)__FB_RHS__$1 + 880ll), 88 );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 968ll), 261ll, (void*)((uint8*)__FB_RHS__$1 + 968ll), 261ll, 0 );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 1229ll), 261ll, (void*)((uint8*)__FB_RHS__$1 + 1229ll), 261ll, 0 );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 1490ll), 129ll, (void*)((uint8*)__FB_RHS__$1 + 1490ll), 129ll, 0 );
	*(int64*)((uint8*)THIS$1 + 1624ll) = *(int64*)((uint8*)__FB_RHS__$1 + 1624ll);
	fb_StrAssign( (void*)((uint8*)THIS$1 + 1632ll), 261ll, (void*)((uint8*)__FB_RHS__$1 + 1632ll), 261ll, 0 );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 1893ll), 129ll, (void*)((uint8*)__FB_RHS__$1 + 1893ll), 129ll, 0 );
	_ZN10FBC_EXTOPTaSERKS_( (struct $10FBC_EXTOPT*)((uint8*)THIS$1 + 2024ll), (struct $10FBC_EXTOPT*)((uint8*)__FB_RHS__$1 + 2024ll) );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 2096ll), 129ll, (void*)((uint8*)__FB_RHS__$1 + 2096ll), 129ll, 0 );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 2225ll), 129ll, (void*)((uint8*)__FB_RHS__$1 + 2225ll), 129ll, 0 );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 2354ll), 261ll, (void*)((uint8*)__FB_RHS__$1 + 2354ll), 261ll, 0 );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 2615ll), 129ll, (void*)((uint8*)__FB_RHS__$1 + 2615ll), 129ll, 0 );
	*(int64*)((uint8*)THIS$1 + 2744ll) = *(int64*)((uint8*)__FB_RHS__$1 + 2744ll);
	*(int64*)((uint8*)THIS$1 + 2752ll) = *(int64*)((uint8*)__FB_RHS__$1 + 2752ll);
	*(int64*)((uint8*)THIS$1 + 2760ll) = *(int64*)((uint8*)__FB_RHS__$1 + 2760ll);
	*(int64*)((uint8*)THIS$1 + 2768ll) = *(int64*)((uint8*)__FB_RHS__$1 + 2768ll);
	fb_StrAssign( (void*)((uint8*)THIS$1 + 2776ll), 261ll, (void*)((uint8*)__FB_RHS__$1 + 2776ll), 261ll, 0 );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 3037ll), 261ll, (void*)((uint8*)__FB_RHS__$1 + 3037ll), 261ll, 0 );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 3298ll), 261ll, (void*)((uint8*)__FB_RHS__$1 + 3298ll), 261ll, 0 );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 3559ll), 261ll, (void*)((uint8*)__FB_RHS__$1 + 3559ll), 261ll, 0 );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 3820ll), 261ll, (void*)((uint8*)__FB_RHS__$1 + 3820ll), 261ll, 0 );
	__builtin_memcpy( (struct $10FBC_OBJINF*)((uint8*)THIS$1 + 4088ll), (struct $10FBC_OBJINF*)((uint8*)__FB_RHS__$1 + 4088ll), 16 );
	label$29:;
}

static void _ZN6FBCCTXD1Ev( struct $6FBCCTX* THIS$1 )
{
	label$32:;
	label$33:;
	_ZN10FBC_EXTOPTD1Ev( (struct $10FBC_EXTOPT*)((uint8*)THIS$1 + 2024ll) );
	_ZN9FBCIOFILED1Ev( (struct $9FBCIOFILE*)((uint8*)THIS$1 + 272ll) );
	fb_StrDelete( (FBSTRING*)((uint8*)THIS$1 + 16ll) );
}

static void FBCINIT( void )
{
	label$34:;
	*(int64*)((uint8*)&FBC$ + 40ll) = -1ll;
	*(int64*)((uint8*)&FBC$ + 48ll) = -1ll;
	*(int64*)((uint8*)&FBC$ + 64ll) = -1ll;
	LISTINIT( (struct $5TLIST*)((uint8*)&FBC$ + 144ll), 64ll, 40ll, 4294967295ll );
	LISTINIT( (struct $5TLIST*)((uint8*)&FBC$ + 208ll), 16ll, 40ll, 4294967295ll );
	STRSETINIT( (struct $7TSTRSET*)((uint8*)&FBC$ + 312ll), 16ll );
	STRLISTINIT( (struct $5TLIST*)((uint8*)&FBC$ + 400ll), 64ll );
	STRLISTINIT( (struct $5TLIST*)((uint8*)&FBC$ + 464ll), 16ll );
	STRSETINIT( (struct $7TSTRSET*)((uint8*)&FBC$ + 528ll), 16ll );
	STRSETINIT( (struct $7TSTRSET*)((uint8*)&FBC$ + 616ll), 16ll );
	STRSETINIT( (struct $7TSTRSET*)((uint8*)&FBC$ + 704ll), 16ll );
	STRSETINIT( (struct $7TSTRSET*)((uint8*)&FBC$ + 792ll), 32ll );
	STRSETINIT( (struct $7TSTRSET*)((uint8*)&FBC$ + 880ll), 32ll );
	FBGLOBALINIT(  );
	int64 vr$10 = FBGETOPTION( 10ll );
	*($7FB_LANG*)((uint8*)&FBC$ + 4088ll) = vr$10;
	*(int64*)((uint8*)&FBC$ + 136ll) = -1ll;
	label$35:;
}

static void HSETOUTNAME( void )
{
	label$36:;
	int64 vr$1 = fb_StrLen( (void*)((uint8*)&FBC$ + 968ll), 261ll );
	if( vr$1 <= 0ll ) goto label$39;
	{
		goto label$37;
	}
	label$39:;
	label$38:;
	int64 vr$2 = FBGETOPTION( 0ll );
	if( vr$2 != 1ll ) goto label$41;
	{
		FBSTRING TMP$56$2;
		FBSTRING TMP$57$2;
		FBSTRING TMP$58$2;
		FBSTRING* vr$4 = HSTRIPPATH( (char*)((uint8*)&FBC$ + 1229ll) );
		FBSTRING* vr$6 = HSTRIPFILENAME( (char*)((uint8*)&FBC$ + 1229ll) );
		__builtin_memset( &TMP$56$2, 0, 24ll );
		FBSTRING* vr$9 = fb_StrConcat( &TMP$56$2, (void*)vr$6, -1ll, (void*)"lib", 4ll );
		__builtin_memset( &TMP$57$2, 0, 24ll );
		FBSTRING* vr$12 = fb_StrConcat( &TMP$57$2, (void*)vr$9, -1ll, (void*)vr$4, -1ll );
		__builtin_memset( &TMP$58$2, 0, 24ll );
		FBSTRING* vr$15 = fb_StrConcat( &TMP$58$2, (void*)vr$12, -1ll, (void*)".a", 3ll );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 968ll), 261ll, (void*)vr$15, -1ll, 0 );
		goto label$37;
	}
	label$41:;
	label$40:;
	fb_StrAssign( (void*)((uint8*)&FBC$ + 968ll), 261ll, (void*)((uint8*)&FBC$ + 1229ll), 261ll, 0 );
	{
		int64 TMP$59$2;
		int64 vr$19 = FBGETOPTION( 0ll );
		TMP$59$2 = vr$19;
		if( TMP$59$2 != 0ll ) goto label$43;
		label$44:;
		{
			{
				int64 TMP$60$4;
				int64 vr$20 = FBGETOPTION( 3ll );
				TMP$60$4 = vr$20;
				if( TMP$60$4 == 4ll ) goto label$47;
				label$48:;
				if( TMP$60$4 == 1ll ) goto label$47;
				label$49:;
				if( TMP$60$4 == 0ll ) goto label$47;
				label$50:;
				if( TMP$60$4 != 5ll ) goto label$46;
				label$47:;
				{
					FBSTRING TMP$62$5;
					__builtin_memset( &TMP$62$5, 0, 24ll );
					FBSTRING* vr$24 = fb_StrConcat( &TMP$62$5, (void*)((uint8*)&FBC$ + 968ll), 261ll, (void*)".exe", 5ll );
					fb_StrAssign( (void*)((uint8*)&FBC$ + 968ll), 261ll, (void*)vr$24, -1ll, 0 );
				}
				goto label$45;
				label$46:;
				if( TMP$60$4 != 12ll ) goto label$51;
				label$52:;
				{
					FBSTRING TMP$64$5;
					__builtin_memset( &TMP$64$5, 0, 24ll );
					FBSTRING* vr$29 = fb_StrConcat( &TMP$64$5, (void*)((uint8*)&FBC$ + 968ll), 261ll, (void*)".html", 6ll );
					fb_StrAssign( (void*)((uint8*)&FBC$ + 968ll), 261ll, (void*)vr$29, -1ll, 0 );
				}
				label$51:;
				label$45:;
			}
		}
		goto label$42;
		label$43:;
		if( TMP$59$2 != 2ll ) goto label$53;
		label$54:;
		{
			{
				int64 TMP$65$4;
				int64 vr$31 = FBGETOPTION( 3ll );
				TMP$65$4 = vr$31;
				if( TMP$65$4 == 1ll ) goto label$57;
				label$58:;
				if( TMP$65$4 != 0ll ) goto label$56;
				label$57:;
				{
					FBSTRING TMP$67$5;
					__builtin_memset( &TMP$67$5, 0, 24ll );
					FBSTRING* vr$35 = fb_StrConcat( &TMP$67$5, (void*)((uint8*)&FBC$ + 968ll), 261ll, (void*)".dll", 5ll );
					fb_StrAssign( (void*)((uint8*)&FBC$ + 968ll), 261ll, (void*)vr$35, -1ll, 0 );
				}
				goto label$55;
				label$56:;
				if( TMP$65$4 == 2ll ) goto label$60;
				label$61:;
				if( TMP$65$4 == 10ll ) goto label$60;
				label$62:;
				if( TMP$65$4 == 6ll ) goto label$60;
				label$63:;
				if( TMP$65$4 == 9ll ) goto label$60;
				label$64:;
				if( TMP$65$4 == 11ll ) goto label$60;
				label$65:;
				if( TMP$65$4 == 7ll ) goto label$60;
				label$66:;
				if( TMP$65$4 == 8ll ) goto label$60;
				label$67:;
				if( TMP$65$4 != 3ll ) goto label$59;
				label$60:;
				{
					FBSTRING TMP$69$5;
					FBSTRING TMP$70$5;
					FBSTRING TMP$71$5;
					FBSTRING* vr$38 = HSTRIPPATH( (char*)((uint8*)&FBC$ + 968ll) );
					FBSTRING* vr$40 = HSTRIPFILENAME( (char*)((uint8*)&FBC$ + 968ll) );
					__builtin_memset( &TMP$69$5, 0, 24ll );
					FBSTRING* vr$43 = fb_StrConcat( &TMP$69$5, (void*)vr$40, -1ll, (void*)"lib", 4ll );
					__builtin_memset( &TMP$70$5, 0, 24ll );
					FBSTRING* vr$46 = fb_StrConcat( &TMP$70$5, (void*)vr$43, -1ll, (void*)vr$38, -1ll );
					__builtin_memset( &TMP$71$5, 0, 24ll );
					FBSTRING* vr$49 = fb_StrConcat( &TMP$71$5, (void*)vr$46, -1ll, (void*)".so", 4ll );
					fb_StrAssign( (void*)((uint8*)&FBC$ + 968ll), 261ll, (void*)vr$49, -1ll, 0 );
				}
				goto label$55;
				label$59:;
				if( TMP$65$4 != 4ll ) goto label$68;
				label$69:;
				{
					FBSTRING TMP$73$5;
					__builtin_memset( &TMP$73$5, 0, 24ll );
					FBSTRING* vr$54 = fb_StrConcat( &TMP$73$5, (void*)((uint8*)&FBC$ + 968ll), 261ll, (void*)".dxe", 5ll );
					fb_StrAssign( (void*)((uint8*)&FBC$ + 968ll), 261ll, (void*)vr$54, -1ll, 0 );
				}
				label$68:;
				label$55:;
			}
		}
		label$53:;
		label$42:;
	}
	label$37:;
}

static void FBCEND( int64 ERRNUM$1 )
{
	label$70:;
	struct $11TSTRSETITEM* FILE$1;
	void* vr$1 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 312ll) );
	FILE$1 = (struct $11TSTRSETITEM*)vr$1;
	label$72:;
	if( FILE$1 == (struct $11TSTRSETITEM*)0ull ) goto label$73;
	{
		int32 vr$4 = fb_FileKill( (FBSTRING*)FILE$1 );
		if( (int64)vr$4 == 0ll ) goto label$75;
		{
		}
		label$75:;
		label$74:;
		void* vr$6 = LISTGETNEXT( (void*)FILE$1 );
		FILE$1 = (struct $11TSTRSETITEM*)vr$6;
	}
	goto label$72;
	label$73:;
	fb_End( (int32)ERRNUM$1 );
	label$71:;
}

static void FBCADDTEMP( FBSTRING* FILE$1 )
{
	label$76:;
	STRSETADD( (struct $7TSTRSET*)((uint8*)&FBC$ + 312ll), FILE$1, 0ll );
	label$77:;
}

static void FBCREMOVETEMP( FBSTRING* FILE$1 )
{
	label$78:;
	STRSETDEL( (struct $7TSTRSET*)((uint8*)&FBC$ + 312ll), (FBSTRING*)FILE$1 );
	label$79:;
}

static FBSTRING* FBCADDOBJ( FBSTRING* FILE$1 )
{
	FBSTRING* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$80:;
	FBSTRING* S$1;
	void* vr$2 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&FBC$ + 400ll) );
	S$1 = (FBSTRING*)vr$2;
	fb_StrAssign( (void*)S$1, -1ll, (void*)FILE$1, -1ll, 0 );
	fb$result$1 = S$1;
	label$81:;
	return fb$result$1;
}

static FBSTRING* HGET1STOUTPUTLINEFROMCOMMAND( FBSTRING* CMD$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$82:;
	int32 F$1;
	int32 vr$1 = fb_FileFree(  );
	F$1 = vr$1;
	int32 vr$2 = fb_FileOpenPipe( (FBSTRING*)CMD$1, 2u, 0u, 0u, F$1, 0, (char*)0ull );
	if( (int64)vr$2 == 0ll ) goto label$85;
	{
		goto label$83;
	}
	label$85:;
	label$84:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	fb_FileInput( F$1 );
	fb_InputString( (void*)&LN$1, -1ll, 0 );
	fb_FileClose( F$1 );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)&LN$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&LN$1 );
	goto label$83;
	fb_StrDelete( (FBSTRING*)&LN$1 );
	label$83:;
	FBSTRING* vr$11 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$11;
}

static FBSTRING* FBCQUERYCC( FBSTRING* OPTIONS$1 )
{
	FBSTRING TMP$78$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$86:;
	FBSTRING PATH$1;
	__builtin_memset( &PATH$1, 0, 24ll );
	{
		int64 TMP$74$2;
		int64 vr$2 = FBGETOPTION( 2ll );
		TMP$74$2 = vr$2;
		if( TMP$74$2 != 2ll ) goto label$89;
		label$90:;
		{
			FBCFINDBIN( 6ll, &PATH$1 );
		}
		goto label$88;
		label$89:;
		{
			FBCFINDBIN( 4ll, &PATH$1 );
		}
		label$91:;
		label$88:;
	}
	{
		int64 TMP$75$2;
		int64 vr$5 = FBGETCPUFAMILY(  );
		TMP$75$2 = vr$5;
		if( TMP$75$2 != 0ll ) goto label$93;
		label$94:;
		{
			fb_StrConcatAssign( (void*)&PATH$1, -1ll, (void*)" -m32", 6ll, 0 );
		}
		goto label$92;
		label$93:;
		if( TMP$75$2 != 1ll ) goto label$95;
		label$96:;
		{
			fb_StrConcatAssign( (void*)&PATH$1, -1ll, (void*)" -m64", 6ll, 0 );
		}
		goto label$92;
		label$95:;
		if( TMP$75$2 != 4ll ) goto label$97;
		label$98:;
		{
			fb_StrConcatAssign( (void*)&PATH$1, -1ll, (void*)" -m32", 6ll, 0 );
		}
		goto label$92;
		label$97:;
		if( TMP$75$2 == 5ll ) goto label$100;
		label$101:;
		if( TMP$75$2 != 6ll ) goto label$99;
		label$100:;
		{
			fb_StrConcatAssign( (void*)&PATH$1, -1ll, (void*)" -m64", 6ll, 0 );
		}
		label$99:;
		label$92:;
	}
	__builtin_memset( &TMP$78$1, 0, 24ll );
	FBSTRING* vr$13 = fb_StrConcat( &TMP$78$1, (void*)&PATH$1, -1ll, (void*)OPTIONS$1, -1ll );
	fb_StrAssign( (void*)&PATH$1, -1ll, (void*)vr$13, -1ll, 0 );
	int64 FF$1;
	int32 vr$15 = fb_FileFree(  );
	FF$1 = (int64)vr$15;
	int32 vr$19 = fb_FileOpenPipe( (FBSTRING*)&PATH$1, 2u, 0u, 0u, (int32)FF$1, 0, (char*)0ull );
	if( (int64)vr$19 == 0ll ) goto label$103;
	{
		fb_StrDelete( (FBSTRING*)&PATH$1 );
		goto label$87;
	}
	label$103:;
	label$102:;
	FBSTRING RET$1;
	__builtin_memset( &RET$1, 0, 24ll );
	fb_FileInput( (int32)FF$1 );
	fb_InputString( (void*)&RET$1, -1ll, 0 );
	fb_FileClose( (int32)FF$1 );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)&RET$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&RET$1 );
	fb_StrDelete( (FBSTRING*)&PATH$1 );
	goto label$87;
	fb_StrDelete( (FBSTRING*)&RET$1 );
	fb_StrDelete( (FBSTRING*)&PATH$1 );
	label$87:;
	FBSTRING* vr$33 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$33;
}

static FBSTRING* FBCBUILDPATHTOLIBFILE( char* FILE$1 )
{
	FBSTRING TMP$79$1;
	FBSTRING TMP$80$1;
	FBSTRING TMP$85$1;
	FBSTRING TMP$86$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$104:;
	FBSTRING FOUND$1;
	__builtin_memset( &FOUND$1, 0, 24ll );
	__builtin_memset( &TMP$79$1, 0, 24ll );
	FBSTRING* vr$5 = fb_StrConcat( &TMP$79$1, (void*)((uint8*)&FBC$ + 3559ll), 261ll, (void*)"/", 2ll );
	__builtin_memset( &TMP$80$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$80$1, (void*)vr$5, -1ll, (void*)FILE$1, 0ll );
	fb_StrAssign( (void*)&FOUND$1, -1ll, (void*)vr$8, -1ll, 0 );
	int64 vr$10 = HFILEEXISTS( (char*)*(char**)&FOUND$1 );
	if( vr$10 == 0ll ) goto label$107;
	{
		fb_StrInit( (void*)&fb$result$1, -1ll, (void*)&FOUND$1, -1ll, 0 );
		fb_StrDelete( (FBSTRING*)&FOUND$1 );
		goto label$105;
	}
	label$107:;
	label$106:;
	FBSTRING PATH$1;
	__builtin_memset( &PATH$1, 0, 24ll );
	{
		int64 TMP$81$2;
		int64 vr$15 = FBGETOPTION( 2ll );
		TMP$81$2 = vr$15;
		if( TMP$81$2 != 2ll ) goto label$109;
		label$110:;
		{
			FBCFINDBIN( 6ll, &PATH$1 );
		}
		goto label$108;
		label$109:;
		{
			FBCFINDBIN( 4ll, &PATH$1 );
		}
		label$111:;
		label$108:;
	}
	{
		int64 TMP$82$2;
		int64 vr$18 = FBGETCPUFAMILY(  );
		TMP$82$2 = vr$18;
		if( TMP$82$2 != 0ll ) goto label$113;
		label$114:;
		{
			fb_StrConcatAssign( (void*)&PATH$1, -1ll, (void*)" -m32", 6ll, 0 );
		}
		goto label$112;
		label$113:;
		if( TMP$82$2 != 1ll ) goto label$115;
		label$116:;
		{
			fb_StrConcatAssign( (void*)&PATH$1, -1ll, (void*)" -m64", 6ll, 0 );
		}
		goto label$112;
		label$115:;
		if( TMP$82$2 != 4ll ) goto label$117;
		label$118:;
		{
			fb_StrConcatAssign( (void*)&PATH$1, -1ll, (void*)" -m32", 6ll, 0 );
		}
		goto label$112;
		label$117:;
		if( TMP$82$2 == 5ll ) goto label$120;
		label$121:;
		if( TMP$82$2 != 6ll ) goto label$119;
		label$120:;
		{
			fb_StrConcatAssign( (void*)&PATH$1, -1ll, (void*)" -m64", 6ll, 0 );
		}
		label$119:;
		label$112:;
	}
	int64 vr$24 = fb_StrLen( (void*)((uint8*)&FBC$ + 2354ll), 261ll );
	if( vr$24 == 0ll ) goto label$123;
	{
		fb_StrConcatAssign( (void*)&PATH$1, -1ll, (void*)" --sysroot=", 12ll, 0 );
		fb_StrConcatAssign( (void*)&PATH$1, -1ll, (void*)((uint8*)&FBC$ + 2354ll), 261ll, 0 );
	}
	label$123:;
	label$122:;
	__builtin_memset( &TMP$85$1, 0, 24ll );
	FBSTRING* vr$30 = fb_StrConcat( &TMP$85$1, (void*)" -print-file-name=", 19ll, (void*)FILE$1, 0ll );
	__builtin_memset( &TMP$86$1, 0, 24ll );
	FBSTRING* vr$34 = fb_StrConcat( &TMP$86$1, (void*)&PATH$1, -1ll, (void*)vr$30, -1ll );
	fb_StrAssign( (void*)&PATH$1, -1ll, (void*)vr$34, -1ll, 0 );
	FBSTRING* vr$37 = HGET1STOUTPUTLINEFROMCOMMAND( &PATH$1 );
	fb_StrAssign( (void*)&FOUND$1, -1ll, (void*)vr$37, -1ll, 0 );
	int64 vr$40 = fb_StrLen( (void*)&FOUND$1, -1ll );
	if( vr$40 != 0ll ) goto label$125;
	{
		fb_StrDelete( (FBSTRING*)&PATH$1 );
		fb_StrDelete( (FBSTRING*)&FOUND$1 );
		goto label$105;
	}
	label$125:;
	label$124:;
	FBSTRING* vr$43 = HSTRIPPATH( (char*)*(char**)&FOUND$1 );
	int32 vr$45 = fb_StrCompare( (void*)&FOUND$1, -1ll, (void*)vr$43, -1ll );
	if( (int64)vr$45 != 0ll ) goto label$127;
	{
		fb_StrDelete( (FBSTRING*)&PATH$1 );
		fb_StrDelete( (FBSTRING*)&FOUND$1 );
		goto label$105;
	}
	label$127:;
	label$126:;
	fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&FOUND$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&PATH$1 );
	fb_StrDelete( (FBSTRING*)&FOUND$1 );
	label$105:;
	FBSTRING* vr$54 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$54;
}

static FBSTRING* FBCFINDSYSROOT( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$128:;
	FBSTRING PATH$1;
	__builtin_memset( &PATH$1, 0, 24ll );
	{
		int64 TMP$87$2;
		int64 vr$2 = FBGETOPTION( 2ll );
		TMP$87$2 = vr$2;
		if( TMP$87$2 != 2ll ) goto label$131;
		label$132:;
		{
			FBCFINDBIN( 6ll, &PATH$1 );
		}
		goto label$130;
		label$131:;
		{
			FBCFINDBIN( 4ll, &PATH$1 );
		}
		label$133:;
		label$130:;
	}
	fb_StrConcatAssign( (void*)&PATH$1, -1ll, (void*)" --print-sysroot", 17ll, 0 );
	FBSTRING* vr$7 = HGET1STOUTPUTLINEFROMCOMMAND( &PATH$1 );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$7, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&PATH$1 );
	goto label$129;
	fb_StrDelete( (FBSTRING*)&PATH$1 );
	label$129:;
	FBSTRING* vr$12 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$12;
}

static FBSTRING* FBCFINDLIBFILE( char* FILE$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$134:;
	FBSTRING FOUND$1;
	__builtin_memset( &FOUND$1, 0, 24ll );
	FBSTRING* vr$2 = FBCBUILDPATHTOLIBFILE( FILE$1 );
	fb_StrAssign( (void*)&FOUND$1, -1ll, (void*)vr$2, -1ll, 0 );
	int64 vr$5 = fb_StrLen( (void*)&FOUND$1, -1ll );
	if( vr$5 <= 0ll ) goto label$137;
	{
		int64 vr$6 = HFILEEXISTS( (char*)*(char**)&FOUND$1 );
		if( vr$6 != 0ll ) goto label$139;
		{
			fb_StrAssign( (void*)&FOUND$1, -1ll, (void*)"", 1ll, 0 );
		}
		label$139:;
		label$138:;
	}
	label$137:;
	label$136:;
	fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&FOUND$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&FOUND$1 );
	label$135:;
	FBSTRING* vr$12 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$12;
}

static void FBCADDDEFLIBPATH( FBSTRING* PATH$1 )
{
	label$140:;
	STRSETADD( (struct $7TSTRSET*)((uint8*)&FBC$ + 880ll), PATH$1, -1ll );
	label$141:;
}

static void FBCADDLIBPATHFOR( char* LIBNAME$1 )
{
	FBSTRING TMP$89$1;
	label$142:;
	FBSTRING PATH$1;
	__builtin_memset( &PATH$1, 0, 24ll );
	__builtin_memset( &TMP$89$1, 0, 24ll );
	FBSTRING* vr$2 = FBCBUILDPATHTOLIBFILE( LIBNAME$1 );
	fb_StrAssign( (void*)&TMP$89$1, -1ll, (void*)vr$2, -1ll, 0 );
	FBSTRING* vr$4 = HSTRIPFILENAME( (char*)*(char**)&TMP$89$1 );
	fb_StrAssign( (void*)&PATH$1, -1ll, (void*)vr$4, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&TMP$89$1 );
	FBSTRING* vr$8 = PATHSTRIPDIV( &PATH$1 );
	fb_StrAssign( (void*)&PATH$1, -1ll, (void*)vr$8, -1ll, 0 );
	int64 vr$11 = fb_StrLen( (void*)&PATH$1, -1ll );
	if( vr$11 <= 0ll ) goto label$145;
	{
		FBCADDDEFLIBPATH( &PATH$1 );
	}
	label$145:;
	label$144:;
	fb_StrDelete( (FBSTRING*)&PATH$1 );
	label$143:;
}

static void FBCFINDBIN( int64 TOOL$1, FBSTRING* PATH$1 )
{
	label$146:;
	if( (*(int64*)(((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 304ll)) + 32ll) & 4ll) == 0ll ) goto label$149;
	{
		fb_StrAssign( (void*)PATH$1, -1ll, (void*)(((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 304ll)) + 40ll), 261ll, 0 );
		goto label$147;
	}
	label$149:;
	label$148:;
	*($11FBCTOOLFLAG*)(((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 304ll)) + 32ll) = *(int64*)(((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 304ll)) + 32ll) & -9ll;
	if( (*(int64*)(((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 304ll)) + 32ll) & 2ll) == 0ll ) goto label$151;
	{
		FBSTRING* vr$11 = fb_StrAllocTempDescZ( (char*)(((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 304ll)) + 16ll) );
		FBSTRING* vr$12 = fb_GetEnviron( (FBSTRING*)vr$11 );
		fb_StrAssign( (void*)PATH$1, -1ll, (void*)vr$12, -1ll, 0 );
	}
	label$151:;
	label$150:;
	int64 vr$13 = fb_StrLen( (void*)PATH$1, -1ll );
	if( vr$13 != 0ll ) goto label$153;
	{
		FBSTRING TMP$90$2;
		FBSTRING TMP$91$2;
		__builtin_memset( &TMP$90$2, 0, 24ll );
		FBSTRING* vr$19 = fb_StrConcat( &TMP$90$2, (void*)((uint8*)&FBC$ + 3037ll), 261ll, (void*)((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 304ll)), 16ll );
		__builtin_memset( &TMP$91$2, 0, 24ll );
		FBSTRING* vr$22 = fb_StrConcat( &TMP$91$2, (void*)vr$19, -1ll, (void*)"", 1ll );
		fb_StrAssign( (void*)PATH$1, -1ll, (void*)vr$22, -1ll, 0 );
		int64 vr$24 = HFILEEXISTS( (char*)*(char**)PATH$1 );
		if( vr$24 != 0ll ) goto label$155;
		{
			{
				int64 TMP$92$4;
				int64 vr$25 = FBGETOPTION( 2ll );
				TMP$92$4 = vr$25;
				if( TMP$92$4 == 1ll ) goto label$158;
				label$159:;
				if( TMP$92$4 != 2ll ) goto label$157;
				label$158:;
				{
					if( TOOL$1 != 1ll ) goto label$161;
					{
						FBSTRING TMP$94$6;
						__builtin_memset( &TMP$94$6, 0, 24ll );
						fb_StrAssign( (void*)&TMP$94$6, -1ll, (void*)" -print-prog-name=as", 21ll, 0 );
						FBSTRING* vr$29 = FBCQUERYCC( &TMP$94$6 );
						fb_StrAssign( (void*)PATH$1, -1ll, (void*)vr$29, -1ll, 0 );
						fb_StrDelete( (FBSTRING*)&TMP$94$6 );
					}
					goto label$160;
					label$161:;
					if( TOOL$1 != 3ll ) goto label$162;
					{
						FBSTRING TMP$96$6;
						__builtin_memset( &TMP$96$6, 0, 24ll );
						fb_StrAssign( (void*)&TMP$96$6, -1ll, (void*)" -print-prog-name=ld", 21ll, 0 );
						FBSTRING* vr$34 = FBCQUERYCC( &TMP$96$6 );
						fb_StrAssign( (void*)PATH$1, -1ll, (void*)vr$34, -1ll, 0 );
						fb_StrDelete( (FBSTRING*)&TMP$96$6 );
					}
					label$162:;
					label$160:;
				}
				goto label$156;
				label$157:;
				if( TMP$92$4 == 0ll ) goto label$164;
				label$165:;
				if( TMP$92$4 != 4ll ) goto label$163;
				label$164:;
				{
				}
				label$163:;
				label$156:;
			}
		}
		label$155:;
		label$154:;
		int64 vr$37 = HFILEEXISTS( (char*)*(char**)PATH$1 );
		if( vr$37 != 0ll ) goto label$167;
		{
			int64 vr$38 = FBGETOPTION( 3ll );
			if( vr$38 == 12ll ) goto label$169;
			{
				int64 vr$40 = fb_StrLen( (void*)((uint8*)&FBC$ + 3820ll), 261ll );
				if( vr$40 <= 0ll ) goto label$171;
				{
					FBSTRING TMP$97$5;
					FBSTRING TMP$98$5;
					__builtin_memset( &TMP$97$5, 0, 24ll );
					FBSTRING* vr$46 = fb_StrConcat( &TMP$97$5, (void*)((uint8*)&FBC$ + 3820ll), 261ll, (void*)((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 304ll)), 16ll );
					__builtin_memset( &TMP$98$5, 0, 24ll );
					FBSTRING* vr$49 = fb_StrConcat( &TMP$98$5, (void*)vr$46, -1ll, (void*)"", 1ll );
					fb_StrAssign( (void*)PATH$1, -1ll, (void*)vr$49, -1ll, 0 );
				}
				goto label$170;
				label$171:;
				{
					FBSTRING TMP$99$5;
					FBSTRING TMP$100$5;
					__builtin_memset( &TMP$99$5, 0, 24ll );
					FBSTRING* vr$55 = fb_StrConcat( &TMP$99$5, (void*)((uint8*)&FBC$ + 2225ll), 129ll, (void*)((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 304ll)), 16ll );
					__builtin_memset( &TMP$100$5, 0, 24ll );
					FBSTRING* vr$58 = fb_StrConcat( &TMP$100$5, (void*)vr$55, -1ll, (void*)"", 1ll );
					fb_StrAssign( (void*)PATH$1, -1ll, (void*)vr$58, -1ll, 0 );
				}
				label$170:;
			}
			goto label$168;
			label$169:;
			{
				fb_StrAssign( (void*)PATH$1, -1ll, (void*)((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 304ll)), 16ll, 0 );
			}
			label$168:;
			*($11FBCTOOLFLAG*)(((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 304ll)) + 32ll) = *(int64*)(((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 304ll)) + 32ll) | 8ll;
		}
		label$167:;
		label$166:;
	}
	label$153:;
	label$152:;
	fb_StrAssign( (void*)(((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 304ll)) + 40ll), 261ll, (void*)PATH$1, -1ll, 0 );
	*($11FBCTOOLFLAG*)(((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 304ll)) + 32ll) = *(int64*)(((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 304ll)) + 32ll) | 4ll;
	label$147:;
}

static int64 FBCRUNBIN( char* ACTION$1, int64 TOOL$1, FBSTRING* LN$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$172:;
	int64 RESULT$1;
	FBSTRING PATH$1;
	__builtin_memset( &PATH$1, 0, 24ll );
	FBCFINDBIN( TOOL$1, &PATH$1 );
	if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$175;
	{
		FBSTRING TMP$102$2;
		FBSTRING TMP$104$2;
		FBSTRING TMP$105$2;
		__builtin_memset( &TMP$102$2, 0, 24ll );
		FBSTRING* vr$5 = fb_StrConcat( &TMP$102$2, (void*)ACTION$1, 0ll, (void*)": ", 3ll );
		fb_PrintString( 0, (FBSTRING*)vr$5, 2 );
		__builtin_memset( &TMP$104$2, 0, 24ll );
		FBSTRING* vr$9 = fb_StrConcat( &TMP$104$2, (void*)&PATH$1, -1ll, (void*)" ", 2ll );
		__builtin_memset( &TMP$105$2, 0, 24ll );
		FBSTRING* vr$12 = fb_StrConcat( &TMP$105$2, (void*)vr$9, -1ll, (void*)LN$1, -1ll );
		fb_PrintString( 0, (FBSTRING*)vr$12, 1 );
	}
	label$175:;
	label$174:;
	int32 vr$14 = fb_Exec( (FBSTRING*)&PATH$1, (FBSTRING*)LN$1 );
	RESULT$1 = (int64)vr$14;
	if( RESULT$1 != 0ll ) goto label$177;
	{
		fb$result$1 = -1ll;
	}
	goto label$176;
	label$177:;
	if( RESULT$1 >= 0ll ) goto label$178;
	{
		ERRREPORTEX( 91ll, (char*)*(char**)&PATH$1, -1ll, 6ll, (char*)0ull );
	}
	goto label$176;
	label$178:;
	{
		if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$180;
		{
			FBSTRING TMP$108$3;
			FBSTRING TMP$109$3;
			FBSTRING TMP$110$3;
			FBSTRING TMP$111$3;
			FBSTRING* vr$16 = fb_LongintToStr( RESULT$1 );
			__builtin_memset( &TMP$108$3, 0, 24ll );
			FBSTRING* vr$20 = fb_StrConcat( &TMP$108$3, (void*)ACTION$1, 0ll, (void*)" failed: '", 11ll );
			__builtin_memset( &TMP$109$3, 0, 24ll );
			FBSTRING* vr$23 = fb_StrConcat( &TMP$109$3, (void*)vr$20, -1ll, (void*)&PATH$1, -1ll );
			__builtin_memset( &TMP$110$3, 0, 24ll );
			FBSTRING* vr$26 = fb_StrConcat( &TMP$110$3, (void*)vr$23, -1ll, (void*)"' terminated with exit code ", 29ll );
			__builtin_memset( &TMP$111$3, 0, 24ll );
			FBSTRING* vr$29 = fb_StrConcat( &TMP$111$3, (void*)vr$26, -1ll, (void*)vr$16, -1ll );
			fb_PrintString( 0, (FBSTRING*)vr$29, 1 );
		}
		label$180:;
		label$179:;
	}
	label$176:;
	fb_StrDelete( (FBSTRING*)&PATH$1 );
	label$173:;
	return fb$result$1;
}

static int64 CLEARDEFLIST( FBSTRING* DEFFILE$1 )
{
	FBSTRING TMP$113$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$181:;
	int64 FI$1;
	int32 vr$1 = fb_FileFree(  );
	FI$1 = (int64)vr$1;
	int32 vr$4 = fb_FileOpen( (FBSTRING*)DEFFILE$1, 2u, 0u, 0u, (int32)FI$1, 0 );
	if( (int64)vr$4 == 0ll ) goto label$184;
	{
		fb$result$1 = 0ll;
		goto label$182;
	}
	label$184:;
	label$183:;
	FBSTRING CLEANED$1;
	FBSTRING* vr$6 = HSTRIPEXT( DEFFILE$1 );
	__builtin_memset( &TMP$113$1, 0, 24ll );
	FBSTRING* vr$9 = fb_StrConcat( &TMP$113$1, (void*)vr$6, -1ll, (void*)".clean.def", 11ll );
	fb_StrInit( (void*)&CLEANED$1, -1ll, (void*)vr$9, -1ll, 0 );
	int64 FO$1;
	int32 vr$11 = fb_FileFree(  );
	FO$1 = (int64)vr$11;
	int32 vr$15 = fb_FileOpen( (FBSTRING*)&CLEANED$1, 3u, 0u, 0u, (int32)FO$1, 0 );
	if( (int64)vr$15 == 0ll ) goto label$186;
	{
		fb_FileClose( (int32)FI$1 );
		fb$result$1 = 0ll;
		fb_StrDelete( (FBSTRING*)&CLEANED$1 );
		goto label$182;
	}
	label$186:;
	label$185:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	label$187:;
	int32 vr$21 = fb_FileEof( (int32)FI$1 );
	if( (int64)vr$21 != 0ll ) goto label$188;
	{
		int64 TMP$115$2;
		fb_FileLineInput( (int32)FI$1, (void*)&LN$1, -1ll, 0 );
		FBSTRING* vr$26 = fb_RIGHT( (FBSTRING*)&LN$1, 4ll );
		int32 vr$27 = fb_StrCompare( (void*)vr$26, -1ll, (void*)"DATA", 5ll );
		if( (int64)vr$27 != 0ll ) goto label$190;
		{
			int64 vr$30 = fb_StrLen( (void*)&LN$1, -1ll );
			FBSTRING* vr$33 = fb_LEFT( (FBSTRING*)&LN$1, vr$30 + -4ll );
			fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$33, -1ll, 0 );
		}
		label$190:;
		label$189:;
		TMP$115$2 = FO$1;
		fb_PrintString( (int32)TMP$115$2, (FBSTRING*)&LN$1, 1 );
	}
	goto label$187;
	label$188:;
	fb_FileClose( (int32)FO$1 );
	fb_FileClose( (int32)FI$1 );
	fb_FileKill( (FBSTRING*)DEFFILE$1 );
	int32 vr$40 = rename( (char*)*(char**)&CLEANED$1, (char*)*(char**)DEFFILE$1 );
	fb$result$1 = (int64)-((int64)vr$40 == 0ll);
	fb_StrDelete( (FBSTRING*)&LN$1 );
	fb_StrDelete( (FBSTRING*)&CLEANED$1 );
	goto label$182;
	fb_StrDelete( (FBSTRING*)&LN$1 );
	fb_StrDelete( (FBSTRING*)&CLEANED$1 );
	label$182:;
	return fb$result$1;
}

static int64 HGENERATEEMPTYDEFFILE( FBSTRING* DEFFILE$1 )
{
	int32 TMP$116$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$191:;
	int32 F$1;
	int32 vr$1 = fb_FileFree(  );
	F$1 = vr$1;
	int32 vr$2 = fb_FileOpen( (FBSTRING*)DEFFILE$1, 3u, 0u, 0u, F$1, 0 );
	if( (int64)vr$2 == 0ll ) goto label$194;
	{
		goto label$192;
	}
	label$194:;
	label$193:;
	TMP$116$1 = F$1;
	FBSTRING* vr$4 = fb_StrAllocTempDescZEx( (char*)"EXPORTS", 7ll );
	fb_PrintString( TMP$116$1, (FBSTRING*)vr$4, 1 );
	fb_FileClose( F$1 );
	fb$result$1 = -1ll;
	label$192:;
	return fb$result$1;
}

static int64 MAKEIMPLIB( FBSTRING* DLLNAME$1, FBSTRING* DEFFILE$1 )
{
	FBSTRING TMP$120$1;
	FBSTRING TMP$121$1;
	FBSTRING TMP$122$1;
	FBSTRING TMP$126$1;
	FBSTRING TMP$127$1;
	FBSTRING TMP$128$1;
	FBSTRING TMP$129$1;
	FBSTRING TMP$130$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$195:;
	int64 vr$1 = CLEARDEFLIST( DEFFILE$1 );
	if( vr$1 != 0ll ) goto label$198;
	{
		goto label$196;
	}
	label$198:;
	label$197:;
	int64 vr$3 = fb_FileLen( (char*)*(char**)DEFFILE$1 );
	if( vr$3 != 0ll ) goto label$200;
	{
		int64 vr$4 = HGENERATEEMPTYDEFFILE( DEFFILE$1 );
		if( vr$4 != 0ll ) goto label$202;
		{
			goto label$196;
		}
		label$202:;
		label$201:;
	}
	label$200:;
	label$199:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	__builtin_memset( &TMP$120$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$120$1, (void*)"--def \x22", 8ll, (void*)DEFFILE$1, -1ll );
	__builtin_memset( &TMP$121$1, 0, 24ll );
	FBSTRING* vr$11 = fb_StrConcat( &TMP$121$1, (void*)vr$8, -1ll, (void*)"\x22", 2ll );
	__builtin_memset( &TMP$122$1, 0, 24ll );
	FBSTRING* vr$15 = fb_StrConcat( &TMP$122$1, (void*)&LN$1, -1ll, (void*)vr$11, -1ll );
	fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$15, -1ll, 0 );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" --dllname \x22", 13ll, 0 );
	FBSTRING* vr$19 = HSTRIPPATH( (char*)((uint8*)&FBC$ + 968ll) );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$19, -1ll, 0 );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22", 2ll, 0 );
	FBSTRING* vr$23 = HSTRIPFILENAME( (char*)((uint8*)&FBC$ + 968ll) );
	__builtin_memset( &TMP$126$1, 0, 24ll );
	FBSTRING* vr$26 = fb_StrConcat( &TMP$126$1, (void*)" --output-lib \x22", 16ll, (void*)vr$23, -1ll );
	__builtin_memset( &TMP$127$1, 0, 24ll );
	FBSTRING* vr$29 = fb_StrConcat( &TMP$127$1, (void*)vr$26, -1ll, (void*)"lib", 4ll );
	__builtin_memset( &TMP$128$1, 0, 24ll );
	FBSTRING* vr$32 = fb_StrConcat( &TMP$128$1, (void*)vr$29, -1ll, (void*)DLLNAME$1, -1ll );
	__builtin_memset( &TMP$129$1, 0, 24ll );
	FBSTRING* vr$35 = fb_StrConcat( &TMP$129$1, (void*)vr$32, -1ll, (void*)".dll.a\x22", 8ll );
	__builtin_memset( &TMP$130$1, 0, 24ll );
	FBSTRING* vr$39 = fb_StrConcat( &TMP$130$1, (void*)&LN$1, -1ll, (void*)vr$35, -1ll );
	fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$39, -1ll, 0 );
	int64 vr$42 = FBCRUNBIN( (char*)"creating import library", 7ll, &LN$1 );
	if( vr$42 != 0ll ) goto label$204;
	{
		fb_StrDelete( (FBSTRING*)&LN$1 );
		goto label$196;
	}
	label$204:;
	label$203:;
	if( *(int64*)((uint8*)&FBC$ + 80ll) != 0ll ) goto label$206;
	{
		FBCADDTEMP( DEFFILE$1 );
	}
	label$206:;
	label$205:;
	fb$result$1 = -1ll;
	fb_StrDelete( (FBSTRING*)&LN$1 );
	label$196:;
	return fb$result$1;
}

static FBSTRING* HFINDLIB( char* FILE$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$207:;
	FBSTRING FOUND$1;
	FBSTRING* vr$1 = FBCBUILDPATHTOLIBFILE( FILE$1 );
	fb_StrInit( (void*)&FOUND$1, -1ll, (void*)vr$1, -1ll, 0 );
	int64 vr$4 = fb_StrLen( (void*)&FOUND$1, -1ll );
	if( vr$4 <= 0ll ) goto label$210;
	{
		fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)" \x22", 3ll, 0 );
		fb_StrConcatAssign( (void*)&fb$result$1, -1ll, (void*)&FOUND$1, -1ll, 0 );
		fb_StrConcatAssign( (void*)&fb$result$1, -1ll, (void*)"\x22", 2ll, 0 );
	}
	goto label$209;
	label$210:;
	{
		ERRREPORTEX( 23ll, (char*)FILE$1, -1ll, 1ll, (char*)0ull );
	}
	label$209:;
	fb_StrDelete( (FBSTRING*)&FOUND$1 );
	label$208:;
	FBSTRING* vr$11 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$11;
}

static int64 FBCLINKERISGOLD( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$211:;
	int64 vr$1 = FBGETOPTION( 3ll );
	if( vr$1 != 8ll ) goto label$214;
	{
		fb$result$1 = 0ll;
		goto label$212;
	}
	goto label$213;
	label$214:;
	{
		FBSTRING LDCMD$2;
		__builtin_memset( &LDCMD$2, 0, 24ll );
		FBCFINDBIN( 3ll, &LDCMD$2 );
		fb_StrConcatAssign( (void*)&LDCMD$2, -1ll, (void*)" --version", 11ll, 0 );
		FBSTRING* vr$5 = fb_StrAllocTempDescZEx( (char*)"GNU gold", 8ll );
		FBSTRING* vr$7 = HGET1STOUTPUTLINEFROMCOMMAND( &LDCMD$2 );
		int64 vr$8 = fb_StrInstr( 1ll, (FBSTRING*)vr$7, (FBSTRING*)vr$5 );
		fb$result$1 = (int64)-(vr$8 > 0ll);
		fb_StrDelete( (FBSTRING*)&LDCMD$2 );
		goto label$212;
		fb_StrDelete( (FBSTRING*)&LDCMD$2 );
	}
	label$213:;
	label$212:;
	return fb$result$1;
}

static int64 FBCISUSINGGOLDLINKER( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$215:;
	int64 vr$1 = FBTARGETSUPPORTSELF(  );
	if( vr$1 == 0ll ) goto label$218;
	{
		int64 vr$2 = FBCLINKERISGOLD(  );
		fb$result$1 = vr$2;
		goto label$216;
	}
	label$218:;
	label$217:;
	fb$result$1 = 0ll;
	goto label$216;
	label$216:;
	return fb$result$1;
}

static int64 HLINKFILES( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$219:;
	FBSTRING LDCLINE$1;
	__builtin_memset( &LDCLINE$1, 0, 24ll );
	FBSTRING DLLNAME$1;
	__builtin_memset( &DLLNAME$1, 0, 24ll );
	FBSTRING DEFFILE$1;
	__builtin_memset( &DEFFILE$1, 0, 24ll );
	fb$result$1 = 0ll;
	HSETOUTNAME(  );
	{
		int64 TMP$135$2;
		int64 vr$4 = FBGETOPTION( 3ll );
		TMP$135$2 = vr$4;
		if( TMP$135$2 != 0ll ) goto label$222;
		label$223:;
		{
			{
				int64 TMP$136$4;
				int64 vr$5 = FBGETCPUFAMILY(  );
				TMP$136$4 = vr$5;
				if( TMP$136$4 != 0ll ) goto label$225;
				label$226:;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"-m i386pe ", 11ll, 0 );
				}
				goto label$224;
				label$225:;
				if( TMP$136$4 != 1ll ) goto label$227;
				label$228:;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"-m i386pep ", 12ll, 0 );
				}
				label$227:;
				label$224:;
			}
		}
		goto label$221;
		label$222:;
		if( TMP$135$2 != 2ll ) goto label$229;
		label$230:;
		{
			{
				int64 TMP$139$4;
				int64 vr$8 = FBGETCPUFAMILY(  );
				TMP$139$4 = vr$8;
				if( TMP$139$4 != 0ll ) goto label$232;
				label$233:;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"-m elf_i386 ", 13ll, 0 );
				}
				goto label$231;
				label$232:;
				if( TMP$139$4 != 1ll ) goto label$234;
				label$235:;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"-m elf_x86_64 ", 15ll, 0 );
				}
				goto label$231;
				label$234:;
				if( TMP$139$4 != 2ll ) goto label$236;
				label$237:;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"-m armelf_linux_eabi ", 22ll, 0 );
				}
				label$236:;
				label$231:;
			}
		}
		goto label$221;
		label$229:;
		if( TMP$135$2 != 3ll ) goto label$238;
		label$239:;
		{
			int64 vr$13 = fb_StrLen( (void*)((uint8*)&FBC$ + 2354ll), 261ll );
			int64 vr$15 = FBGETOPTION( 2ll );
			if( ((int64)-(vr$13 == 0ll) & (int64)-(vr$15 == 1ll)) == 0ll ) goto label$241;
			{
				FBSTRING* vr$18 = FBCFINDSYSROOT(  );
				fb_StrAssign( (void*)((uint8*)&FBC$ + 2354ll), 261ll, (void*)vr$18, -1ll, 0 );
				FBSTRING* vr$21 = fb_StrAllocTempDescZ( (char*)((uint8*)&FBC$ + 2354ll) );
				FBSTRING* vr$22 = fb_LEFT( (FBSTRING*)vr$21, 5ll );
				int32 vr$23 = fb_StrCompare( (void*)vr$22, -1ll, (void*)"/tmp/", 6ll );
				if( (int64)vr$23 != 0ll ) goto label$243;
				{
					ERRREPORTWARNEX( 51ll, (char*)0ull, 0ll, 1ll, (char*)0ull );
				}
				label$243:;
				label$242:;
			}
			label$241:;
			label$240:;
			FBSTRING ARGS$3;
			fb_StrInit( (void*)&ARGS$3, -1ll, (void*)"", 1ll, 0 );
			int64 vr$27 = fb_StrLen( (void*)((uint8*)&FBC$ + 2096ll), 129ll );
			if( vr$27 <= 0ll ) goto label$245;
			{
				fb_StrAssign( (void*)&ARGS$3, -1ll, (void*)" -target ", 10ll, 0 );
				fb_StrConcatAssign( (void*)&ARGS$3, -1ll, (void*)((uint8*)&FBC$ + 2096ll), 129ll, 0 );
			}
			label$245:;
			label$244:;
			fb_StrConcatAssign( (void*)&ARGS$3, -1ll, (void*)" -print-libgcc-file-name", 25ll, 0 );
			FBSTRING PATH$3;
			FBSTRING* vr$33 = FBCQUERYCC( &ARGS$3 );
			fb_StrInit( (void*)&PATH$3, -1ll, (void*)vr$33, -1ll, 0 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)&PATH$3, -1ll, 0 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" ", 2ll, 0 );
			int64 vr$38 = FBGETOPTION( 4ll );
			if( vr$38 != 17ll ) goto label$247;
			{
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"--fix-cortex-a8 ", 17ll, 0 );
			}
			label$247:;
			label$246:;
			fb_StrDelete( (FBSTRING*)&PATH$3 );
			fb_StrDelete( (FBSTRING*)&ARGS$3 );
		}
		goto label$221;
		label$238:;
		if( TMP$135$2 != 10ll ) goto label$248;
		label$249:;
		{
			{
				int64 TMP$147$4;
				int64 vr$42 = FBGETCPUFAMILY(  );
				TMP$147$4 = vr$42;
				if( TMP$147$4 != 0ll ) goto label$251;
				label$252:;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"-arch i386 ", 12ll, 0 );
				}
				goto label$250;
				label$251:;
				if( TMP$147$4 != 1ll ) goto label$253;
				label$254:;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"-arch x86_64 ", 14ll, 0 );
				}
				goto label$250;
				label$253:;
				if( TMP$147$4 != 2ll ) goto label$255;
				label$256:;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"-arch armv6 ", 13ll, 0 );
				}
				label$255:;
				label$250:;
			}
		}
		goto label$221;
		label$248:;
		if( TMP$135$2 == 13ll ) goto label$258;
		label$259:;
		if( TMP$135$2 == 14ll ) goto label$258;
		label$260:;
		if( TMP$135$2 == 15ll ) goto label$258;
		label$261:;
		if( TMP$135$2 != 16ll ) goto label$257;
		label$258:;
		{
		}
		label$257:;
		label$221:;
	}
	fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"-o \x22", 5ll, 0 );
	fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 968ll), 261ll, 0 );
	fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"\x22", 2ll, 0 );
	int64 vr$50 = FBGETOPTION( 3ll );
	int64 vr$52 = FBGETOPTION( 0ll );
	if( ((int64)-(vr$50 == 4ll) & (int64)-(vr$52 == 2ll)) == 0ll ) goto label$263;
	{
		FBSTRING TMP$155$2;
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -I \x22lib", 9ll, 0 );
		__builtin_memset( &TMP$155$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$155$2, -1ll, (void*)((uint8*)&FBC$ + 968ll), 261ll, 0 );
		FBSTRING* vr$60 = HSTRIPEXT( &TMP$155$2 );
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$60, -1ll, 0 );
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"_il.a\x22", 7ll, 0 );
		fb_StrDelete( (FBSTRING*)&TMP$155$2 );
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -U", 4ll, 0 );
		{
			FBSTRING* OBJFILE$3;
			void* vr$66 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 400ll) );
			OBJFILE$3 = (FBSTRING*)vr$66;
			label$264:;
			if( OBJFILE$3 == (FBSTRING*)0ull ) goto label$265;
			{
				FBSTRING TMP$158$4;
				FBSTRING TMP$159$4;
				FBSTRING TMP$160$4;
				__builtin_memset( &TMP$158$4, 0, 24ll );
				FBSTRING* vr$69 = fb_StrConcat( &TMP$158$4, (void*)" \x22", 3ll, (void*)OBJFILE$3, -1ll );
				__builtin_memset( &TMP$159$4, 0, 24ll );
				FBSTRING* vr$72 = fb_StrConcat( &TMP$159$4, (void*)vr$69, -1ll, (void*)"\x22", 2ll );
				__builtin_memset( &TMP$160$4, 0, 24ll );
				FBSTRING* vr$76 = fb_StrConcat( &TMP$160$4, (void*)&LDCLINE$1, -1ll, (void*)vr$72, -1ll );
				fb_StrAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$76, -1ll, 0 );
				void* vr$78 = LISTGETNEXT( (void*)OBJFILE$3 );
				OBJFILE$3 = (FBSTRING*)vr$78;
			}
			goto label$264;
			label$265:;
		}
		{
			FBSTRING* LIBFILE$3;
			void* vr$80 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 464ll) );
			LIBFILE$3 = (FBSTRING*)vr$80;
			if( LIBFILE$3 == (FBSTRING*)0ull ) goto label$267;
			{
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -lc", 5ll, 0 );
			}
			label$267:;
			label$266:;
			label$268:;
			if( LIBFILE$3 == (FBSTRING*)0ull ) goto label$269;
			{
				FBSTRING TMP$162$4;
				FBSTRING TMP$163$4;
				FBSTRING TMP$164$4;
				__builtin_memset( &TMP$162$4, 0, 24ll );
				FBSTRING* vr$84 = fb_StrConcat( &TMP$162$4, (void*)" \x22", 3ll, (void*)LIBFILE$3, -1ll );
				__builtin_memset( &TMP$163$4, 0, 24ll );
				FBSTRING* vr$87 = fb_StrConcat( &TMP$163$4, (void*)vr$84, -1ll, (void*)"\x22", 2ll );
				__builtin_memset( &TMP$164$4, 0, 24ll );
				FBSTRING* vr$91 = fb_StrConcat( &TMP$164$4, (void*)&LDCLINE$1, -1ll, (void*)vr$87, -1ll );
				fb_StrAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$91, -1ll, 0 );
				void* vr$93 = LISTGETNEXT( (void*)LIBFILE$3 );
				LIBFILE$3 = (FBSTRING*)vr$93;
			}
			goto label$268;
			label$269:;
		}
		int64 vr$95 = FBCRUNBIN( (char*)"making DXE", 11ll, &LDCLINE$1 );
		fb$result$1 = vr$95;
		fb_StrDelete( (FBSTRING*)&DEFFILE$1 );
		fb_StrDelete( (FBSTRING*)&DLLNAME$1 );
		fb_StrDelete( (FBSTRING*)&LDCLINE$1 );
		goto label$220;
	}
	label$263:;
	label$262:;
	{
		uint64 TMP$166$2;
		int64 vr$99 = FBGETOPTION( 3ll );
		TMP$166$2 = (uint64)vr$99;
		goto label$271;
		label$272:;
		{
			int64 vr$101 = fb_StrLen( (void*)((uint8*)&FBC$ + 1893ll), 129ll );
			if( vr$101 != 0ll ) goto label$274;
			{
				fb_StrAssign( (void*)((uint8*)&FBC$ + 1893ll), 129ll, (void*)"console", 8ll, 0 );
			}
			goto label$273;
			label$274:;
			{
				int32 vr$104 = fb_StrCompare( (void*)((uint8*)&FBC$ + 1893ll), 129ll, (void*)"gui", 4ll );
				if( (int64)vr$104 != 0ll ) goto label$276;
				{
					fb_StrAssign( (void*)((uint8*)&FBC$ + 1893ll), 129ll, (void*)"windows", 8ll, 0 );
				}
				label$276:;
				label$275:;
			}
			label$273:;
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -subsystem ", 13ll, 0 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 1893ll), 129ll, 0 );
			int64 vr$110 = FBGETOPTION( 0ll );
			if( vr$110 != 2ll ) goto label$278;
			{
				FBSTRING TMP$171$4;
				FBSTRING TMP$172$4;
				__builtin_memset( &TMP$172$4, 0, 24ll );
				__builtin_memset( &TMP$171$4, 0, 24ll );
				fb_StrAssign( (void*)&TMP$171$4, -1ll, (void*)((uint8*)&FBC$ + 968ll), 261ll, 0 );
				FBSTRING* vr$116 = HSTRIPEXT( &TMP$171$4 );
				fb_StrAssign( (void*)&TMP$172$4, -1ll, (void*)vr$116, -1ll, 0 );
				FBSTRING* vr$118 = HSTRIPPATH( (char*)*(char**)&TMP$172$4 );
				fb_StrAssign( (void*)&DLLNAME$1, -1ll, (void*)vr$118, -1ll, 0 );
				fb_StrDelete( (FBSTRING*)&TMP$172$4 );
				fb_StrDelete( (FBSTRING*)&TMP$171$4 );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --dll --enable-stdcall-fixup", 30ll, 0 );
				int64 vr$123 = FBGETCPUFAMILY(  );
				if( vr$123 != 0ll ) goto label$280;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -e _DllMainCRTStartup@12", 26ll, 0 );
				}
				goto label$279;
				label$280:;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -e DllMainCRTStartup", 22ll, 0 );
				}
				label$279:;
			}
			label$278:;
			label$277:;
		}
		goto label$270;
		label$281:;
		{
			int64 vr$126 = FBGETOPTION( 0ll );
			if( vr$126 != 2ll ) goto label$283;
			{
				FBSTRING TMP$176$4;
				FBSTRING TMP$177$4;
				__builtin_memset( &TMP$177$4, 0, 24ll );
				__builtin_memset( &TMP$176$4, 0, 24ll );
				fb_StrAssign( (void*)&TMP$176$4, -1ll, (void*)((uint8*)&FBC$ + 968ll), 261ll, 0 );
				FBSTRING* vr$132 = HSTRIPEXT( &TMP$176$4 );
				fb_StrAssign( (void*)&TMP$177$4, -1ll, (void*)vr$132, -1ll, 0 );
				FBSTRING* vr$134 = HSTRIPPATH( (char*)*(char**)&TMP$177$4 );
				fb_StrAssign( (void*)&DLLNAME$1, -1ll, (void*)vr$134, -1ll, 0 );
				fb_StrDelete( (FBSTRING*)&TMP$177$4 );
				fb_StrDelete( (FBSTRING*)&TMP$176$4 );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -shared -h", 12ll, 0 );
				FBSTRING* vr$140 = HSTRIPPATH( (char*)((uint8*)&FBC$ + 968ll) );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$140, -1ll, 0 );
				FBSTRING* vr$143 = fb_LEFT( (FBSTRING*)&DLLNAME$1, 3ll );
				int32 vr$144 = fb_StrCompare( (void*)vr$143, -1ll, (void*)"lib", 4ll );
				if( (int64)vr$144 != 0ll ) goto label$285;
				{
					int64 vr$147 = fb_StrLen( (void*)&DLLNAME$1, -1ll );
					FBSTRING* vr$150 = fb_RIGHT( (FBSTRING*)&DLLNAME$1, vr$147 + -3ll );
					fb_StrAssign( (void*)&DLLNAME$1, -1ll, (void*)vr$150, -1ll, 0 );
				}
				label$285:;
				label$284:;
			}
			goto label$282;
			label$283:;
			{
				{
					uint64 TMP$179$5;
					int64 vr$152 = FBGETOPTION( 3ll );
					TMP$179$5 = (uint64)vr$152;
					goto label$287;
					label$288:;
					{
						fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /libexec/ld-elf.so.1", 38ll, 0 );
					}
					goto label$286;
					label$289:;
					{
						fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /libexec/ld-elf.so.2", 38ll, 0 );
					}
					goto label$286;
					label$290:;
					{
						fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --dynamic-linker /lib/64/ld.so.1", 34ll, 0 );
					}
					goto label$286;
					label$291:;
					{
						{
							int64 TMP$183$7;
							int64 vr$156 = FBGETCPUFAMILY(  );
							TMP$183$7 = vr$156;
							if( TMP$183$7 != 0ll ) goto label$293;
							label$294:;
							{
								fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /lib/ld-linux.so.2", 36ll, 0 );
							}
							goto label$292;
							label$293:;
							if( TMP$183$7 != 1ll ) goto label$295;
							label$296:;
							{
								fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /lib64/ld-linux-x86-64.so.2", 45ll, 0 );
							}
							goto label$292;
							label$295:;
							if( TMP$183$7 != 2ll ) goto label$297;
							label$298:;
							{
								fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /lib/ld-linux-armhf.so.3", 42ll, 0 );
							}
							goto label$292;
							label$297:;
							if( TMP$183$7 != 3ll ) goto label$299;
							label$300:;
							{
								fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /lib/ld-linux-aarch64.so.1", 44ll, 0 );
							}
							label$299:;
							label$292:;
						}
					}
					goto label$286;
					label$301:;
					{
						fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /usr/libexec/ld.elf_so", 40ll, 0 );
					}
					goto label$286;
					label$302:;
					{
						fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /usr/libexec/ld.so", 36ll, 0 );
					}
					goto label$286;
					label$303:;
					{
						fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /system/bin/linker", 36ll, 0 );
					}
					goto label$286;
					label$287:;
					static const void* tmp$871[10ll] = {
						&&label$291,
						&&label$303,
						&&label$286,
						&&label$286,
						&&label$288,
						&&label$289,
						&&label$290,
						&&label$302,
						&&label$286,
						&&label$301,
					};
					if( (TMP$179$5 - 2ull) > 9ull ) goto label$286;
					goto *tmp$871[TMP$179$5 - 2ull];
					label$286:;
				}
			}
			label$282:;
			int64 vr$164 = FBGETOPTION( 0ll );
			int64 vr$166 = FBGETOPTION( 34ll );
			int64 vr$168 = FBGETOPTION( 3ll );
			if( (((int64)-(vr$164 == 2ll) | vr$166) & (int64)-(vr$168 != 8ll)) == 0ll ) goto label$305;
			{
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --export-dynamic", 18ll, 0 );
			}
			label$305:;
			label$304:;
		}
		goto label$270;
		label$306:;
		{
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -nostdlib --file-alignment 0x20 --section-alignment 0x20 -shared", 66ll, 0 );
		}
		goto label$270;
		label$307:;
		{
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -O", 4ll, 0 );
			int64 vr$174 = FBGETOPTION( 8ll );
			FBSTRING* vr$175 = fb_LongintToStr( vr$174 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$175, -1ll, 0 );
			static char EMSCRIPTEN_OPTIONS$3[5][32] = { "CASE_INSENSITIVE_FS=1", "TOTAL_MEMORY=67108864", "ALLOW_MEMORY_GROWTH=1", "RETAIN_COMPILER_SETTINGS=1", "ASYNCIFY=1" };
			static struct $8FBARRAY1IcE tmp$199$3 = { (char*)EMSCRIPTEN_OPTIONS$3, (char*)EMSCRIPTEN_OPTIONS$3, 160ll, 32ll, 1ll, 49ll, { { 5ll, 0ll, 4ll } } };
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -Wno-warn-absolute-paths", 26ll, 0 );
			{
				int64 I$4;
				I$4 = 0ll;
				label$311:;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -s ", 5ll, 0 );
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((int64)(char*)EMSCRIPTEN_OPTIONS$3 + (I$4 << (5ll & 63ll))), 32ll, 0 );
				}
				label$309:;
				I$4 = I$4 + 1ll;
				label$308:;
				if( I$4 <= 4ll ) goto label$311;
				label$310:;
			}
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --shell-file", 14ll, 0 );
			FBSTRING* vr$184 = HFINDLIB( (char*)"fb_shell.html" );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$184, -1ll, 0 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --post-js", 11ll, 0 );
			FBSTRING* vr$187 = HFINDLIB( (char*)"fb_rtlib.js" );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$187, -1ll, 0 );
			int64 vr$190 = fb_StrLen( (void*)((uint8*)&FBC$ + 1893ll), 129ll );
			if( vr$190 != 0ll ) goto label$313;
			{
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --post-js", 11ll, 0 );
				FBSTRING* vr$192 = HFINDLIB( (char*)"termlib_min.js" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$192, -1ll, 0 );
			}
			label$313:;
			label$312:;
		}
		goto label$270;
		label$271:;
		static const void* tmp$872[13ll] = {
			&&label$272,
			&&label$272,
			&&label$281,
			&&label$281,
			&&label$270,
			&&label$306,
			&&label$281,
			&&label$281,
			&&label$281,
			&&label$281,
			&&label$281,
			&&label$281,
			&&label$307,
		};
		if( TMP$166$2 > 12ull ) goto label$270;
		goto *tmp$872[TMP$166$2 - 0ull];
		label$270:;
	}
	int64 vr$194 = FBGETOPTION( 3ll );
	if( vr$194 != 4ll ) goto label$315;
	{
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -T \x22", 6ll, 0 );
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 3559ll), 261ll, 0 );
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"/i386go32.x\x22", 13ll, 0 );
	}
	goto label$314;
	label$315:;
	{
		int64 vr$199 = FBGETOPTION( 40ll );
		int64 vr$200 = FBGETOPTION( 3ll );
		int64 vr$203 = FBGETOPTION( 3ll );
		int64 vr$206 = FBGETOPTION( 3ll );
		int64 vr$209 = FBCISUSINGGOLDLINKER(  );
		if( ((((vr$199 & (int64)-(vr$200 != 10ll)) & (int64)-(vr$203 != 8ll)) & (int64)-(vr$206 != 12ll)) & ~vr$209) == 0ll ) goto label$317;
		{
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -T \x22", 6ll, 0 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 3559ll), 261ll, 0 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"/fbextra.x\x22", 12ll, 0 );
		}
		label$317:;
		label$316:;
	}
	label$314:;
	{
		uint64 TMP$212$2;
		int64 vr$216 = FBGETOPTION( 3ll );
		TMP$212$2 = (uint64)vr$216;
		goto label$319;
		label$320:;
		{
			int64 STACKSIZE$3;
			int64 vr$217 = FBGETOPTION( 39ll );
			STACKSIZE$3 = vr$217;
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --stack ", 10ll, 0 );
			FBSTRING* vr$219 = fb_LongintToStr( STACKSIZE$3 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$219, -1ll, 0 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)",", 2ll, 0 );
			FBSTRING* vr$222 = fb_LongintToStr( STACKSIZE$3 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$222, -1ll, 0 );
			int64 vr$224 = FBGETOPTION( 0ll );
			if( vr$224 != 2ll ) goto label$322;
			{
				FBSTRING TMP$215$4;
				__builtin_memset( &TMP$215$4, 0, 24ll );
				fb_StrAssign( (void*)&TMP$215$4, -1ll, (void*)((uint8*)&FBC$ + 968ll), 261ll, 0 );
				FBSTRING* vr$229 = HSTRIPEXT( &TMP$215$4 );
				fb_StrAssign( (void*)&DEFFILE$1, -1ll, (void*)vr$229, -1ll, 0 );
				fb_StrConcatAssign( (void*)&DEFFILE$1, -1ll, (void*)".def", 5ll, 0 );
				fb_StrDelete( (FBSTRING*)&TMP$215$4 );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --output-def \x22", 16ll, 0 );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)&DEFFILE$1, -1ll, 0 );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"\x22", 2ll, 0 );
			}
			label$322:;
			label$321:;
		}
		goto label$318;
		label$323:;
		{
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -e _WinMainCRTStartup", 23ll, 0 );
		}
		goto label$318;
		label$319:;
		static const void* tmp$873[6ll] = {
			&&label$320,
			&&label$320,
			&&label$318,
			&&label$318,
			&&label$318,
			&&label$323,
		};
		if( TMP$212$2 > 5ull ) goto label$318;
		goto *tmp$873[TMP$212$2 - 0ull];
		label$318:;
	}
	if( *(int64*)((uint8*)&FBC$ + 2760ll) == 0ll ) goto label$325;
	{
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -Bstatic", 10ll, 0 );
	}
	label$325:;
	label$324:;
	int64 vr$239 = FBGETOPTION( 38ll );
	if( vr$239 == 0ll ) goto label$327;
	{
		int64 vr$240 = FBGETOPTION( 0ll );
		if( vr$240 != 0ll ) goto label$329;
		{
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -pie", 6ll, 0 );
		}
		goto label$328;
		label$329:;
		{
		}
		label$328:;
	}
	label$327:;
	label$326:;
	int64 vr$243 = fb_StrLen( (void*)((uint8*)&FBC$ + 1632ll), 261ll );
	if( vr$243 <= 0ll ) goto label$331;
	{
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -Map ", 7ll, 0 );
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 1632ll), 261ll, 0 );
	}
	label$331:;
	label$330:;
	int64 vr$247 = FBGETOPTION( 14ll );
	if( vr$247 != 0ll ) goto label$333;
	{
		int64 vr$248 = FBGETOPTION( 24ll );
		if( vr$248 == 1ll ) goto label$335;
		{
			int64 vr$249 = FBGETOPTION( 3ll );
			int64 vr$251 = FBGETOPTION( 3ll );
			if( ((int64)-(vr$249 != 10ll) & (int64)-(vr$251 != 12ll)) == 0ll ) goto label$337;
			{
				if( *(int64*)((uint8*)&FBC$ + 2768ll) == 0ll ) goto label$339;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -s", 4ll, 0 );
				}
				label$339:;
				label$338:;
			}
			label$337:;
			label$336:;
		}
		label$335:;
		label$334:;
	}
	label$333:;
	label$332:;
	{
		struct $11TSTRSETITEM* I$2;
		void* vr$256 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 880ll) );
		I$2 = (struct $11TSTRSETITEM*)vr$256;
		FBSTRING L$2;
		__builtin_memset( &L$2, 0, 24ll );
		int64 vr$258 = FBGETOPTION( 3ll );
		if( vr$258 == 12ll ) goto label$341;
		{
			fb_StrAssign( (void*)&L$2, -1ll, (void*)" -L \x22", 6ll, 0 );
		}
		goto label$340;
		label$341:;
		{
			fb_StrAssign( (void*)&L$2, -1ll, (void*)" -L\x22", 5ll, 0 );
		}
		label$340:;
		label$342:;
		if( I$2 == (struct $11TSTRSETITEM*)0ull ) goto label$343;
		{
			FBSTRING TMP$225$3;
			FBSTRING TMP$226$3;
			FBSTRING TMP$227$3;
			__builtin_memset( &TMP$225$3, 0, 24ll );
			FBSTRING* vr$266 = fb_StrConcat( &TMP$225$3, (void*)&L$2, -1ll, (void*)I$2, -1ll );
			__builtin_memset( &TMP$226$3, 0, 24ll );
			FBSTRING* vr$269 = fb_StrConcat( &TMP$226$3, (void*)vr$266, -1ll, (void*)"\x22", 2ll );
			__builtin_memset( &TMP$227$3, 0, 24ll );
			FBSTRING* vr$273 = fb_StrConcat( &TMP$227$3, (void*)&LDCLINE$1, -1ll, (void*)vr$269, -1ll );
			fb_StrAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$273, -1ll, 0 );
			void* vr$275 = LISTGETNEXT( (void*)I$2 );
			I$2 = (struct $11TSTRSETITEM*)vr$275;
		}
		goto label$342;
		label$343:;
		fb_StrDelete( (FBSTRING*)&L$2 );
	}
	int64 vr$278 = fb_StrLen( (void*)((uint8*)&FBC$ + 2354ll), 261ll );
	if( vr$278 == 0ll ) goto label$345;
	{
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --sysroot=", 12ll, 0 );
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 2354ll), 261ll, 0 );
	}
	label$345:;
	label$344:;
	{
		uint64 TMP$228$2;
		int64 vr$282 = FBGETOPTION( 3ll );
		TMP$228$2 = (uint64)vr$282;
		goto label$347;
		label$348:;
		{
			int64 vr$283 = FBGETOPTION( 0ll );
			if( vr$283 != 2ll ) goto label$350;
			{
				FBSTRING* vr$284 = HFINDLIB( (char*)"crt0.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$284, -1ll, 0 );
			}
			goto label$349;
			label$350:;
			{
				FBSTRING* vr$286 = HFINDLIB( (char*)"crt0.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$286, -1ll, 0 );
				int64 vr$288 = FBGETOPTION( 24ll );
				if( vr$288 != 1ll ) goto label$352;
				{
					FBSTRING* vr$289 = HFINDLIB( (char*)"gcrt0.o" );
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$289, -1ll, 0 );
				}
				label$352:;
				label$351:;
			}
			label$349:;
		}
		goto label$346;
		label$353:;
		{
			int64 vr$291 = FBGETOPTION( 0ll );
			if( vr$291 != 2ll ) goto label$355;
			{
				FBSTRING* vr$292 = HFINDLIB( (char*)"dllcrt2.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$292, -1ll, 0 );
			}
			goto label$354;
			label$355:;
			{
				FBSTRING* vr$294 = HFINDLIB( (char*)"crt2.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$294, -1ll, 0 );
				int64 vr$296 = FBGETOPTION( 24ll );
				if( vr$296 != 1ll ) goto label$357;
				{
					FBSTRING* vr$297 = HFINDLIB( (char*)"gcrt2.o" );
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$297, -1ll, 0 );
				}
				label$357:;
				label$356:;
			}
			label$354:;
			FBSTRING* vr$299 = HFINDLIB( (char*)"crtbegin.o" );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$299, -1ll, 0 );
		}
		goto label$346;
		label$358:;
		{
			int64 vr$301 = FBGETOPTION( 24ll );
			if( vr$301 != 1ll ) goto label$360;
			{
				FBSTRING* vr$302 = HFINDLIB( (char*)"gcrt0.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$302, -1ll, 0 );
			}
			goto label$359;
			label$360:;
			{
				FBSTRING* vr$304 = HFINDLIB( (char*)"crt0.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$304, -1ll, 0 );
			}
			label$359:;
		}
		goto label$346;
		label$361:;
		{
			int64 vr$306 = FBGETOPTION( 0ll );
			if( vr$306 != 0ll ) goto label$363;
			{
				int64 vr$307 = FBGETOPTION( 24ll );
				if( vr$307 == 0ll ) goto label$365;
				{
					{
						uint64 TMP$235$6;
						int64 vr$308 = FBGETOPTION( 3ll );
						TMP$235$6 = (uint64)vr$308;
						goto label$367;
						label$368:;
						{
							FBSTRING* vr$309 = HFINDLIB( (char*)"gcrt0.o" );
							fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$309, -1ll, 0 );
						}
						goto label$366;
						label$369:;
						{
							FBSTRING* vr$311 = HFINDLIB( (char*)"gcrt1.o" );
							fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$311, -1ll, 0 );
						}
						goto label$366;
						label$367:;
						static const void* tmp$874[3ll] = {
							&&label$368,
							&&label$369,
							&&label$368,
						};
						if( (TMP$235$6 - 9ull) > 2ull ) goto label$369;
						goto *tmp$874[TMP$235$6 - 9ull];
						label$366:;
					}
				}
				goto label$364;
				label$365:;
				{
					{
						uint64 TMP$237$6;
						int64 vr$313 = FBGETOPTION( 3ll );
						TMP$237$6 = (uint64)vr$313;
						goto label$371;
						label$372:;
						{
							FBSTRING* vr$314 = HFINDLIB( (char*)"crt0.o" );
							fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$314, -1ll, 0 );
						}
						goto label$370;
						label$373:;
						{
							FBSTRING* vr$316 = HFINDLIB( (char*)"crt1.o" );
							fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$316, -1ll, 0 );
						}
						goto label$370;
						label$371:;
						static const void* tmp$875[3ll] = {
							&&label$372,
							&&label$373,
							&&label$372,
						};
						if( (TMP$237$6 - 9ull) > 2ull ) goto label$373;
						goto *tmp$875[TMP$237$6 - 9ull];
						label$370:;
					}
				}
				label$364:;
			}
			label$363:;
			label$362:;
			int64 vr$318 = FBGETOPTION( 3ll );
			if( vr$318 == 10ll ) goto label$375;
			{
				int64 vr$319 = FBGETOPTION( 3ll );
				if( vr$319 == 9ll ) goto label$377;
				{
					FBSTRING* vr$320 = HFINDLIB( (char*)"crti.o" );
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$320, -1ll, 0 );
				}
				label$377:;
				label$376:;
				int64 vr$322 = FBGETOPTION( 38ll );
				if( vr$322 == 0ll ) goto label$379;
				{
					FBSTRING* vr$323 = HFINDLIB( (char*)"crtbeginS.o" );
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$323, -1ll, 0 );
				}
				goto label$378;
				label$379:;
				{
					FBSTRING* vr$325 = HFINDLIB( (char*)"crtbegin.o" );
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$325, -1ll, 0 );
				}
				label$378:;
			}
			label$375:;
			label$374:;
		}
		goto label$346;
		label$380:;
		{
			int64 vr$327 = FBGETOPTION( 0ll );
			if( vr$327 != 0ll ) goto label$382;
			{
				if( *(int64*)((uint8*)&FBC$ + 2760ll) == 0ll ) goto label$384;
				{
					FBSTRING* vr$328 = HFINDLIB( (char*)"crtbegin_static.o" );
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$328, -1ll, 0 );
				}
				goto label$383;
				label$384:;
				{
					FBSTRING* vr$330 = HFINDLIB( (char*)"crtbegin_dynamic.o" );
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$330, -1ll, 0 );
				}
				label$383:;
			}
			goto label$381;
			label$382:;
			{
				FBSTRING* vr$332 = HFINDLIB( (char*)"crtbegin_so.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$332, -1ll, 0 );
			}
			label$381:;
		}
		goto label$346;
		label$385:;
		{
			FBSTRING* vr$334 = HFINDLIB( (char*)"crt0.o" );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$334, -1ll, 0 );
		}
		goto label$346;
		label$347:;
		static const void* tmp$876[12ll] = {
			&&label$353,
			&&label$348,
			&&label$361,
			&&label$380,
			&&label$358,
			&&label$385,
			&&label$361,
			&&label$361,
			&&label$361,
			&&label$361,
			&&label$361,
			&&label$361,
		};
		if( TMP$228$2 > 11ull ) goto label$346;
		goto *tmp$876[TMP$228$2 - 0ull];
		label$346:;
	}
	if( *(int64*)((uint8*)&FBC$ + 2752ll) != 0ll ) goto label$387;
	{
		int64 vr$336 = FBGETOPTION( 3ll );
		if( vr$336 == 12ll ) goto label$389;
		{
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" \x22", 3ll, 0 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 3559ll), 261ll, 0 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"/", 2ll, 0 );
			{
				int64 TMP$244$4;
				int64 vr$341 = FBGETOPTION( 24ll );
				TMP$244$4 = vr$341;
				if( TMP$244$4 != 2ll ) goto label$391;
				label$392:;
				{
					int64 vr$342 = FBGETOPTION( 38ll );
					if( vr$342 == 0ll ) goto label$394;
					{
						fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"fbrt1pic.o", 11ll, 0 );
					}
					goto label$393;
					label$394:;
					{
						fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"fbrt1.o", 8ll, 0 );
					}
					label$393:;
				}
				goto label$390;
				label$391:;
				if( TMP$244$4 != 3ll ) goto label$395;
				label$396:;
				{
					int64 vr$345 = FBGETOPTION( 38ll );
					if( vr$345 == 0ll ) goto label$398;
					{
						fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"fbrt2pic.o", 11ll, 0 );
					}
					goto label$397;
					label$398:;
					{
						fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"fbrt2.o", 8ll, 0 );
					}
					label$397:;
				}
				goto label$390;
				label$395:;
				{
					int64 vr$348 = FBGETOPTION( 38ll );
					if( vr$348 == 0ll ) goto label$401;
					{
						fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"fbrt0pic.o", 11ll, 0 );
					}
					goto label$400;
					label$401:;
					{
						fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"fbrt0.o", 8ll, 0 );
					}
					label$400:;
				}
				label$399:;
				label$390:;
			}
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"\x22", 2ll, 0 );
		}
		label$389:;
		label$388:;
	}
	label$387:;
	label$386:;
	{
		FBSTRING* OBJFILE$2;
		void* vr$353 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 400ll) );
		OBJFILE$2 = (FBSTRING*)vr$353;
		label$402:;
		if( OBJFILE$2 == (FBSTRING*)0ull ) goto label$403;
		{
			FBSTRING TMP$251$3;
			FBSTRING TMP$252$3;
			FBSTRING TMP$253$3;
			__builtin_memset( &TMP$251$3, 0, 24ll );
			FBSTRING* vr$356 = fb_StrConcat( &TMP$251$3, (void*)" \x22", 3ll, (void*)OBJFILE$2, -1ll );
			__builtin_memset( &TMP$252$3, 0, 24ll );
			FBSTRING* vr$359 = fb_StrConcat( &TMP$252$3, (void*)vr$356, -1ll, (void*)"\x22", 2ll );
			__builtin_memset( &TMP$253$3, 0, 24ll );
			FBSTRING* vr$363 = fb_StrConcat( &TMP$253$3, (void*)&LDCLINE$1, -1ll, (void*)vr$359, -1ll );
			fb_StrAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$363, -1ll, 0 );
			void* vr$365 = LISTGETNEXT( (void*)OBJFILE$2 );
			OBJFILE$2 = (FBSTRING*)vr$365;
		}
		goto label$402;
		label$403:;
	}
	int64 vr$366 = FBGETOPTION( 3ll );
	if( vr$366 == 10ll ) goto label$405;
	{
		int64 vr$367 = FBGETOPTION( 3ll );
		if( vr$367 == 12ll ) goto label$407;
		{
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" \x22-(\x22", 6ll, 0 );
		}
		label$407:;
		label$406:;
	}
	label$405:;
	label$404:;
	{
		FBSTRING* LIBFILE$2;
		void* vr$370 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 464ll) );
		LIBFILE$2 = (FBSTRING*)vr$370;
		label$408:;
		if( LIBFILE$2 == (FBSTRING*)0ull ) goto label$409;
		{
			FBSTRING TMP$255$3;
			FBSTRING TMP$256$3;
			FBSTRING TMP$257$3;
			__builtin_memset( &TMP$255$3, 0, 24ll );
			FBSTRING* vr$373 = fb_StrConcat( &TMP$255$3, (void*)" \x22", 3ll, (void*)LIBFILE$2, -1ll );
			__builtin_memset( &TMP$256$3, 0, 24ll );
			FBSTRING* vr$376 = fb_StrConcat( &TMP$256$3, (void*)vr$373, -1ll, (void*)"\x22", 2ll );
			__builtin_memset( &TMP$257$3, 0, 24ll );
			FBSTRING* vr$380 = fb_StrConcat( &TMP$257$3, (void*)&LDCLINE$1, -1ll, (void*)vr$376, -1ll );
			fb_StrAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$380, -1ll, 0 );
			void* vr$382 = LISTGETNEXT( (void*)LIBFILE$2 );
			LIBFILE$2 = (FBSTRING*)vr$382;
		}
		goto label$408;
		label$409:;
	}
	{
		struct $11TSTRSETITEM* I$2;
		void* vr$384 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 792ll) );
		I$2 = (struct $11TSTRSETITEM*)vr$384;
		int64 CHECKDLLNAME$2;
		int64 vr$385 = FBGETOPTION( 0ll );
		CHECKDLLNAME$2 = (int64)-(vr$385 == 2ll);
		label$410:;
		if( I$2 == (struct $11TSTRSETITEM*)0ull ) goto label$411;
		{
			int64 TMP$258$3;
			if( CHECKDLLNAME$2 == 0ll ) goto label$412;
			int32 vr$390 = fb_StrCompare( (void*)I$2, -1ll, (void*)&DLLNAME$1, -1ll );
			TMP$258$3 = (int64)-((int64)vr$390 != 0ll);
			goto label$1600;
			label$412:;
			TMP$258$3 = -1ll;
			label$1600:;
			if( TMP$258$3 == 0ll ) goto label$414;
			{
				FBSTRING TMP$260$4;
				FBSTRING TMP$261$4;
				__builtin_memset( &TMP$260$4, 0, 24ll );
				FBSTRING* vr$397 = fb_StrConcat( &TMP$260$4, (void*)" -l", 4ll, (void*)I$2, -1ll );
				__builtin_memset( &TMP$261$4, 0, 24ll );
				FBSTRING* vr$401 = fb_StrConcat( &TMP$261$4, (void*)&LDCLINE$1, -1ll, (void*)vr$397, -1ll );
				fb_StrAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$401, -1ll, 0 );
			}
			label$414:;
			label$413:;
			void* vr$403 = LISTGETNEXT( (void*)I$2 );
			I$2 = (struct $11TSTRSETITEM*)vr$403;
		}
		goto label$410;
		label$411:;
	}
	int64 vr$404 = FBGETOPTION( 3ll );
	if( vr$404 == 10ll ) goto label$416;
	{
		int64 vr$405 = FBGETOPTION( 3ll );
		if( vr$405 == 12ll ) goto label$418;
		{
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" \x22-)\x22", 6ll, 0 );
		}
		goto label$417;
		label$418:;
		{
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -lfb", 6ll, 0 );
		}
		label$417:;
	}
	label$416:;
	label$415:;
	{
		uint64 TMP$264$2;
		int64 vr$408 = FBGETOPTION( 3ll );
		TMP$264$2 = (uint64)vr$408;
		goto label$420;
		label$421:;
		{
			int64 vr$409 = FBGETOPTION( 38ll );
			if( vr$409 == 0ll ) goto label$423;
			{
				FBSTRING* vr$410 = HFINDLIB( (char*)"crtendS.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$410, -1ll, 0 );
			}
			goto label$422;
			label$423:;
			{
				FBSTRING* vr$412 = HFINDLIB( (char*)"crtend.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$412, -1ll, 0 );
			}
			label$422:;
			int64 vr$414 = FBGETOPTION( 3ll );
			if( vr$414 == 9ll ) goto label$425;
			{
				FBSTRING* vr$415 = HFINDLIB( (char*)"crtn.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$415, -1ll, 0 );
			}
			label$425:;
			label$424:;
		}
		goto label$419;
		label$426:;
		{
			int64 vr$417 = FBGETOPTION( 0ll );
			if( vr$417 != 0ll ) goto label$428;
			{
				FBSTRING* vr$418 = HFINDLIB( (char*)"crtend_android.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$418, -1ll, 0 );
			}
			goto label$427;
			label$428:;
			{
				FBSTRING* vr$420 = HFINDLIB( (char*)"crtend_so.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$420, -1ll, 0 );
			}
			label$427:;
		}
		goto label$419;
		label$429:;
		{
			FBSTRING* vr$422 = HFINDLIB( (char*)"crtend.o" );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$422, -1ll, 0 );
		}
		goto label$419;
		label$420:;
		static const void* tmp$877[12ll] = {
			&&label$429,
			&&label$419,
			&&label$421,
			&&label$426,
			&&label$419,
			&&label$419,
			&&label$421,
			&&label$421,
			&&label$421,
			&&label$421,
			&&label$419,
			&&label$421,
		};
		if( TMP$264$2 > 11ull ) goto label$419;
		goto *tmp$877[TMP$264$2 - 0ull];
		label$419:;
	}
	int64 vr$424 = FBGETOPTION( 3ll );
	if( vr$424 != 10ll ) goto label$431;
	{
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -macosx_version_min 10.4", 26ll, 0 );
	}
	label$431:;
	label$430:;
	{
		uint64 TMP$271$2;
		int64 vr$426 = FBGETOPTION( 3ll );
		TMP$271$2 = (uint64)vr$426;
		goto label$433;
		label$434:;
		{
			int64 TMP$272$3;
			int32 OUTTYPE$3;
			int64 vr$427 = FBGETOPTION( 0ll );
			OUTTYPE$3 = (int32)vr$427;
			if( (int64)OUTTYPE$3 == 0ll ) goto label$435;
			TMP$272$3 = (int64)-((int64)OUTTYPE$3 == 2ll);
			goto label$1601;
			label$435:;
			TMP$272$3 = -1ll;
			label$1601:;
			if( TMP$272$3 == 0ll ) goto label$437;
			{
				int64 TMP$273$4;
				int64 TMP$274$4;
				int64 TMP$275$4;
				int32 CPUFAMILY$4;
				int64 vr$432 = FBGETCPUFAMILY(  );
				CPUFAMILY$4 = (int32)vr$432;
				if( (int64)CPUFAMILY$4 == 1ll ) goto label$438;
				TMP$273$4 = (int64)-((int64)CPUFAMILY$4 == 3ll);
				goto label$1602;
				label$438:;
				TMP$273$4 = -1ll;
				label$1602:;
				if( TMP$273$4 != 0ll ) goto label$439;
				TMP$274$4 = (int64)-((int64)CPUFAMILY$4 == 5ll);
				goto label$1603;
				label$439:;
				TMP$274$4 = -1ll;
				label$1603:;
				if( TMP$274$4 != 0ll ) goto label$440;
				TMP$275$4 = (int64)-((int64)CPUFAMILY$4 == 6ll);
				goto label$1604;
				label$440:;
				TMP$275$4 = -1ll;
				label$1604:;
				if( TMP$275$4 == 0ll ) goto label$442;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --eh-frame-hdr", 16ll, 0 );
				}
				label$442:;
				label$441:;
			}
			label$437:;
			label$436:;
		}
		goto label$432;
		label$433:;
		static const void* tmp$878[10ll] = {
			&&label$434,
			&&label$432,
			&&label$432,
			&&label$432,
			&&label$434,
			&&label$434,
			&&label$434,
			&&label$434,
			&&label$434,
			&&label$434,
		};
		if( (TMP$271$2 - 2ull) > 9ull ) goto label$432;
		goto *tmp$878[TMP$271$2 - 2ull];
		label$432:;
	}
	fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" ", 2ll, 0 );
	fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 2048ll), -1ll, 0 );
	$7FBCTOOL LD$1;
	LD$1 = 3ll;
	int64 vr$445 = FBGETOPTION( 3ll );
	if( vr$445 != 12ll ) goto label$444;
	{
		LD$1 = 14ll;
	}
	label$444:;
	label$443:;
	int64 vr$447 = FBCRUNBIN( (char*)"linking", LD$1, &LDCLINE$1 );
	if( vr$447 != 0ll ) goto label$446;
	{
		fb_StrDelete( (FBSTRING*)&DEFFILE$1 );
		fb_StrDelete( (FBSTRING*)&DLLNAME$1 );
		fb_StrDelete( (FBSTRING*)&LDCLINE$1 );
		goto label$220;
	}
	label$446:;
	label$445:;
	{
		uint64 TMP$278$2;
		int64 vr$451 = FBGETOPTION( 3ll );
		TMP$278$2 = (uint64)vr$451;
		goto label$448;
		label$449:;
		{
			int64 F$3;
			int32 vr$452 = fb_FileFree(  );
			F$3 = (int64)vr$452;
			FBSTRING* vr$456 = fb_StrAllocTempDescZ( (char*)((uint8*)&FBC$ + 968ll) );
			int32 vr$457 = fb_FileOpen( (FBSTRING*)vr$456, 0u, 3u, 0u, (int32)F$3, 0 );
			if( (int64)vr$457 == 0ll ) goto label$451;
			{
				fb_StrDelete( (FBSTRING*)&DEFFILE$1 );
				fb_StrDelete( (FBSTRING*)&DLLNAME$1 );
				fb_StrDelete( (FBSTRING*)&LDCLINE$1 );
				goto label$220;
			}
			label$451:;
			label$450:;
			int32 VALUE$3;
			int64 vr$462 = FBGETOPTION( 39ll );
			VALUE$3 = (int32)vr$462;
			fb_FilePutLarge( (int32)F$3, 533ll, (void*)&VALUE$3, 4ull );
			fb_FileClose( (int32)F$3 );
		}
		goto label$447;
		label$452:;
		{
			int64 vr$467 = FBGETOPTION( 0ll );
			if( vr$467 != 2ll ) goto label$454;
			{
				int64 vr$470 = MAKEIMPLIB( &DLLNAME$1, &DEFFILE$1 );
				if( vr$470 != 0ll ) goto label$456;
				{
					fb_StrDelete( (FBSTRING*)&DEFFILE$1 );
					fb_StrDelete( (FBSTRING*)&DLLNAME$1 );
					fb_StrDelete( (FBSTRING*)&LDCLINE$1 );
					goto label$220;
				}
				label$456:;
				label$455:;
			}
			label$454:;
			label$453:;
		}
		goto label$447;
		label$457:;
		{
			FBSTRING TMP$290$3;
			FBSTRING TMP$295$3;
			FBSTRING TMP$296$3;
			FBSTRING CXBEPATH$3;
			__builtin_memset( &CXBEPATH$3, 0, 24ll );
			FBSTRING CXBECLINE$3;
			__builtin_memset( &CXBECLINE$3, 0, 24ll );
			int64 RES$3;
			int64 vr$477 = fb_StrLen( (void*)((uint8*)&FBC$ + 2615ll), 129ll );
			if( vr$477 != 0ll ) goto label$459;
			{
				FBSTRING TMP$279$4;
				__builtin_memset( &TMP$279$4, 0, 24ll );
				fb_StrAssign( (void*)&TMP$279$4, -1ll, (void*)((uint8*)&FBC$ + 968ll), 261ll, 0 );
				FBSTRING* vr$482 = HSTRIPEXT( &TMP$279$4 );
				fb_StrAssign( (void*)((uint8*)&FBC$ + 2615ll), 129ll, (void*)vr$482, -1ll, 0 );
				fb_StrDelete( (FBSTRING*)&TMP$279$4 );
			}
			label$459:;
			label$458:;
			fb_StrAssign( (void*)&CXBECLINE$3, -1ll, (void*)"-TITLE:\x22", 9ll, 0 );
			fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)((uint8*)&FBC$ + 2615ll), 129ll, 0 );
			fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)"\x22 ", 3ll, 0 );
			int64 vr$489 = FBGETOPTION( 14ll );
			if( vr$489 == 0ll ) goto label$461;
			{
				FBSTRING TMP$285$4;
				fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)"-DUMPINFO:\x22", 12ll, 0 );
				__builtin_memset( &TMP$285$4, 0, 24ll );
				fb_StrAssign( (void*)&TMP$285$4, -1ll, (void*)((uint8*)&FBC$ + 968ll), 261ll, 0 );
				FBSTRING* vr$495 = HSTRIPEXT( &TMP$285$4 );
				fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)vr$495, -1ll, 0 );
				fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)".cxbe\x22", 7ll, 0 );
				fb_StrDelete( (FBSTRING*)&TMP$285$4 );
			}
			label$461:;
			label$460:;
			fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)" -OUT:\x22", 8ll, 0 );
			__builtin_memset( &TMP$290$3, 0, 24ll );
			fb_StrAssign( (void*)&TMP$290$3, -1ll, (void*)((uint8*)&FBC$ + 968ll), 261ll, 0 );
			FBSTRING* vr$504 = HSTRIPEXT( &TMP$290$3 );
			fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)vr$504, -1ll, 0 );
			fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)".xbe", 5ll, 0 );
			fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)"\x22", 2ll, 0 );
			fb_StrDelete( (FBSTRING*)&TMP$290$3 );
			fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)" \x22", 3ll, 0 );
			fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)((uint8*)&FBC$ + 968ll), 261ll, 0 );
			fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)"\x22", 2ll, 0 );
			if( *(int64*)((uint8*)&FBC$ + 112ll) != 0ll ) goto label$463;
			{
				fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)" >nul", 6ll, 0 );
			}
			label$463:;
			label$462:;
			if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$465;
			{
				FBSTRING* vr$514 = fb_StrAllocTempDescZEx( (char*)"cxbe: ", 6ll );
				fb_PrintString( 0, (FBSTRING*)vr$514, 2 );
				fb_PrintString( 0, (FBSTRING*)&CXBECLINE$3, 1 );
			}
			label$465:;
			label$464:;
			FBCFINDBIN( 10ll, &CXBEPATH$3 );
			__builtin_memset( &TMP$295$3, 0, 24ll );
			FBSTRING* vr$521 = fb_StrConcat( &TMP$295$3, (void*)&CXBEPATH$3, -1ll, (void*)" ", 2ll );
			__builtin_memset( &TMP$296$3, 0, 24ll );
			FBSTRING* vr$524 = fb_StrConcat( &TMP$296$3, (void*)vr$521, -1ll, (void*)&CXBECLINE$3, -1ll );
			int32 vr$525 = fb_Shell( (FBSTRING*)vr$524 );
			RES$3 = (int64)vr$525;
			if( RES$3 == 0ll ) goto label$467;
			{
				if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$469;
				{
					FBSTRING TMP$298$5;
					FBSTRING* vr$527 = fb_LongintToStr( RES$3 );
					__builtin_memset( &TMP$298$5, 0, 24ll );
					FBSTRING* vr$530 = fb_StrConcat( &TMP$298$5, (void*)"cxbe failed: exit code ", 24ll, (void*)vr$527, -1ll );
					fb_PrintString( 0, (FBSTRING*)vr$530, 1 );
				}
				label$469:;
				label$468:;
				fb_StrDelete( (FBSTRING*)&CXBECLINE$3 );
				fb_StrDelete( (FBSTRING*)&CXBEPATH$3 );
				fb_StrDelete( (FBSTRING*)&DEFFILE$1 );
				fb_StrDelete( (FBSTRING*)&DLLNAME$1 );
				fb_StrDelete( (FBSTRING*)&LDCLINE$1 );
				goto label$220;
			}
			label$467:;
			label$466:;
			FBSTRING* vr$537 = fb_StrAllocTempDescZ( (char*)((uint8*)&FBC$ + 968ll) );
			fb_FileKill( (FBSTRING*)vr$537 );
			fb_StrDelete( (FBSTRING*)&CXBECLINE$3 );
			fb_StrDelete( (FBSTRING*)&CXBEPATH$3 );
		}
		goto label$447;
		label$448:;
		static const void* tmp$879[6ll] = {
			&&label$452,
			&&label$452,
			&&label$447,
			&&label$447,
			&&label$449,
			&&label$457,
		};
		if( TMP$278$2 > 5ull ) goto label$447;
		goto *tmp$879[TMP$278$2 - 0ull];
		label$447:;
	}
	fb$result$1 = -1ll;
	fb_StrDelete( (FBSTRING*)&DEFFILE$1 );
	fb_StrDelete( (FBSTRING*)&DLLNAME$1 );
	fb_StrDelete( (FBSTRING*)&LDCLINE$1 );
	label$220:;
	return fb$result$1;
}

static void HREADOBJINFO( void )
{
	label$470:;
	FBSTRING DAT$1;
	__builtin_memset( &DAT$1, 0, 24ll );
	int64 LANG$1;
	label$472:;
	{
		{
			uint64 TMP$299$3;
			int64 vr$2 = OBJINFOREADNEXT( &DAT$1 );
			TMP$299$3 = (uint64)vr$2;
			goto label$476;
			label$477:;
			{
				STRSETADD( (struct $7TSTRSET*)((uint8*)&FBC$ + 792ll), &DAT$1, 0ll );
			}
			goto label$475;
			label$478:;
			{
				STRSETADD( (struct $7TSTRSET*)((uint8*)&FBC$ + 880ll), &DAT$1, 0ll );
			}
			goto label$475;
			label$479:;
			{
				if( *(int64*)((uint8*)&FBC$ + 4096ll) != 0ll ) goto label$481;
				{
					char* vr$7 = OBJINFOGETFILENAME(  );
					ERRREPORTWARNEX( 20ll, (char*)vr$7, -1ll, 1ll, (char*)0ull );
					*(int64*)((uint8*)&FBC$ + 4096ll) = -1ll;
					FBSETOPTION( 36ll, -1ll );
				}
				label$481:;
				label$480:;
			}
			goto label$475;
			label$482:;
			{
				FBSETOPTION( 37ll, -1ll );
			}
			goto label$475;
			label$483:;
			{
				$7FB_LANG vr$8 = FBGETLANGID( (char*)*(char**)&DAT$1 );
				LANG$1 = vr$8;
				if( LANG$1 != -1ll ) goto label$485;
				{
					LANG$1 = 0ll;
				}
				label$485:;
				label$484:;
				if( LANG$1 == *(int64*)((uint8*)&FBC$ + 4088ll) ) goto label$487;
				{
					char* vr$9 = OBJINFOGETFILENAME(  );
					ERRREPORTWARNEX( 21ll, (char*)vr$9, -1ll, 1ll, (char*)0ull );
					*($7FB_LANG*)((uint8*)&FBC$ + 4088ll) = LANG$1;
					FBSETOPTION( 10ll, LANG$1 );
				}
				label$487:;
				label$486:;
			}
			goto label$475;
			label$488:;
			{
				goto label$473;
			}
			goto label$475;
			label$476:;
			static const void* tmp$880[5ll] = {
				&&label$477,
				&&label$478,
				&&label$479,
				&&label$482,
				&&label$483,
			};
			if( TMP$299$3 > 4ull ) goto label$488;
			goto *tmp$880[TMP$299$3 - 0ull];
			label$475:;
		}
	}
	label$474:;
	goto label$472;
	label$473:;
	OBJINFOREADEND(  );
	fb_StrDelete( (FBSTRING*)&DAT$1 );
	label$471:;
}

static void HCOLLECTOBJINFO( void )
{
	label$489:;
	FBSTRING* S$1;
	struct $11TSTRSETITEM* I$1;
	void* vr$1 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 400ll) );
	S$1 = (FBSTRING*)vr$1;
	label$491:;
	if( S$1 == (FBSTRING*)0ull ) goto label$492;
	{
		OBJINFOREADOBJ( S$1 );
		HREADOBJINFO(  );
		void* vr$2 = LISTGETNEXT( (void*)S$1 );
		S$1 = (FBSTRING*)vr$2;
	}
	goto label$491;
	label$492:;
	void* vr$4 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 792ll) );
	I$1 = (struct $11TSTRSETITEM*)vr$4;
	label$493:;
	if( I$1 == (struct $11TSTRSETITEM*)0ull ) goto label$494;
	{
		if( *(int64*)((uint8*)I$1 + 24ll) != 0ll ) goto label$496;
		{
			OBJINFOREADLIB( (FBSTRING*)I$1, (struct $5TLIST*)((uint8*)&FBC$ + 880ll) );
			HREADOBJINFO(  );
		}
		label$496:;
		label$495:;
		void* vr$9 = LISTGETNEXT( (void*)I$1 );
		I$1 = (struct $11TSTRSETITEM*)vr$9;
	}
	goto label$493;
	label$494:;
	void* vr$11 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 464ll) );
	S$1 = (FBSTRING*)vr$11;
	label$497:;
	if( S$1 == (FBSTRING*)0ull ) goto label$498;
	{
		OBJINFOREADLIBFILE( S$1 );
		HREADOBJINFO(  );
		void* vr$12 = LISTGETNEXT( (void*)S$1 );
		S$1 = (FBSTRING*)vr$12;
	}
	goto label$497;
	label$498:;
	label$490:;
}

static void HFATALINVALIDOPTION( FBSTRING* ARG$1, int64 IS_SOURCE$1 )
{
	FBSTRING TMP$300$1;
	FBSTRING TMP$301$1;
	FBSTRING TMP$302$1;
	int64 TMP$303$1;
	label$499:;
	if( IS_SOURCE$1 == 0ll ) goto label$501;
	TMP$303$1 = 0ll;
	goto label$1605;
	label$501:;
	TMP$303$1 = -1ll;
	label$1605:;
	__builtin_memset( &TMP$302$1, 0, 24ll );
	__builtin_memset( &TMP$300$1, 0, 24ll );
	FBSTRING* vr$3 = fb_StrConcat( &TMP$300$1, (void*)"\x22", 2ll, (void*)ARG$1, -1ll );
	__builtin_memset( &TMP$301$1, 0, 24ll );
	FBSTRING* vr$6 = fb_StrConcat( &TMP$301$1, (void*)vr$3, -1ll, (void*)"\x22", 2ll );
	fb_StrAssign( (void*)&TMP$302$1, -1ll, (void*)vr$6, -1ll, 0 );
	ERRREPORTEX( 81ll, (char*)*(char**)&TMP$302$1, TMP$303$1, 1ll, (char*)0ull );
	fb_StrDelete( (FBSTRING*)&TMP$302$1 );
	FBCEND( 1ll );
	label$500:;
}

static void HCHECKWAITINGOBJFILE( void )
{
	label$502:;
	int64 vr$1 = fb_StrLen( (void*)((uint8*)&FBC$ + 16ll), -1ll );
	if( vr$1 <= 0ll ) goto label$505;
	{
		FBSTRING TMP$304$2;
		FBSTRING TMP$305$2;
		__builtin_memset( &TMP$305$2, 0, 24ll );
		__builtin_memset( &TMP$304$2, 0, 24ll );
		FBSTRING* vr$6 = fb_StrConcat( &TMP$304$2, (void*)"-o ", 4ll, (void*)((uint8*)&FBC$ + 16ll), -1ll );
		fb_StrAssign( (void*)&TMP$305$2, -1ll, (void*)vr$6, -1ll, 0 );
		ERRREPORTEX( 292ll, (char*)*(char**)&TMP$305$2, -1ll, 1ll, (char*)0ull );
		fb_StrDelete( (FBSTRING*)&TMP$305$2 );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 16ll), -1ll, (void*)"", 1ll, 0 );
	}
	label$505:;
	label$504:;
	label$503:;
}

static void HSETIOFILE( struct $9FBCIOFILE* MODULE$1, FBSTRING* SRCFILE$1, int64 IS_RC$1 )
{
	label$506:;
	fb_StrAssign( (void*)MODULE$1, -1ll, (void*)SRCFILE$1, -1ll, 0 );
	int64 vr$3 = fb_StrLen( (void*)((uint8*)&FBC$ + 16ll), -1ll );
	if( vr$3 != 0ll ) goto label$509;
	{
		*(int64*)((uint8*)MODULE$1 + 32ll) = 0ll;
		if( IS_RC$1 == 0ll ) goto label$511;
		{
			FBSTRING TMP$307$3;
			__builtin_memset( &TMP$307$3, 0, 24ll );
			FBSTRING* vr$7 = fb_StrConcat( &TMP$307$3, (void*)SRCFILE$1, -1ll, (void*)".o", 3ll );
			fb_StrAssign( (void*)((uint8*)&FBC$ + 16ll), -1ll, (void*)vr$7, -1ll, 0 );
		}
		goto label$510;
		label$511:;
		{
			FBSTRING TMP$308$3;
			FBSTRING* vr$9 = HSTRIPEXT( SRCFILE$1 );
			__builtin_memset( &TMP$308$3, 0, 24ll );
			FBSTRING* vr$12 = fb_StrConcat( &TMP$308$3, (void*)vr$9, -1ll, (void*)".o", 3ll );
			fb_StrAssign( (void*)((uint8*)&FBC$ + 16ll), -1ll, (void*)vr$12, -1ll, 0 );
		}
		label$510:;
		*(struct $9FBCIOFILE**)((uint8*)&FBC$ + 8ll) = MODULE$1;
	}
	goto label$508;
	label$509:;
	{
		*(int64*)((uint8*)MODULE$1 + 32ll) = -1ll;
	}
	label$508:;
	FBSTRING* vr$16 = FBCADDOBJ( (FBSTRING*)((uint8*)&FBC$ + 16ll) );
	*(FBSTRING**)((uint8*)MODULE$1 + 24ll) = vr$16;
	fb_StrAssign( (void*)((uint8*)&FBC$ + 16ll), -1ll, (void*)"", 1ll, 0 );
	label$507:;
}

static void HADDBAS( FBSTRING* BASFILE$1 )
{
	label$512:;
	void* vr$1 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&FBC$ + 144ll) );
	HSETIOFILE( (struct $9FBCIOFILE*)vr$1, BASFILE$1, 0ll );
	label$513:;
}

static void HPARSEGNUTRIPLET( FBSTRING* ARG$1, int64 SEPARATOR$1, int64* OS$1, int64* CPUTYPE$1 )
{
	label$514:;
	FBSTRING ARCH$1;
	__builtin_memset( &ARCH$1, 0, 24ll );
	{
		int64 I$2;
		I$2 = 0ll;
		label$519:;
		{
			FBSTRING* vr$2 = fb_StrAllocTempDescZ( (char*)*(char**)((int64)(struct $11FBGNUOSINFO*)GNUOSMAP$ + (I$2 << (4ll & 63ll))) );
			int64 vr$3 = fb_StrInstr( 1ll, (FBSTRING*)ARG$1, (FBSTRING*)vr$2 );
			if( vr$3 <= 0ll ) goto label$521;
			{
				*OS$1 = *(int64*)(((int64)(struct $11FBGNUOSINFO*)GNUOSMAP$ + (I$2 << (4ll & 63ll))) + 8ll);
				goto label$518;
			}
			label$521:;
			label$520:;
		}
		label$517:;
		I$2 = I$2 + 1ll;
		label$516:;
		if( I$2 <= 16ll ) goto label$519;
		label$518:;
	}
	if( SEPARATOR$1 <= 0ll ) goto label$523;
	{
		FBSTRING* vr$8 = fb_LEFT( (FBSTRING*)ARG$1, SEPARATOR$1 + -1ll );
		fb_StrAssign( (void*)&ARCH$1, -1ll, (void*)vr$8, -1ll, 0 );
		{
			int64 I$3;
			I$3 = 0ll;
			label$527:;
			{
				int32 vr$12 = fb_StrCompare( (void*)&ARCH$1, -1ll, *(void**)((int64)(struct $13FBGNUARCHINFO*)GNUARCHMAP$ + (I$3 << (4ll & 63ll))), 0ll );
				if( (int64)vr$12 != 0ll ) goto label$529;
				{
					*CPUTYPE$1 = *(int64*)(((int64)(struct $13FBGNUARCHINFO*)GNUARCHMAP$ + (I$3 << (4ll & 63ll))) + 8ll);
					goto label$526;
				}
				label$529:;
				label$528:;
			}
			label$525:;
			I$3 = I$3 + 1ll;
			label$524:;
			if( I$3 <= 20ll ) goto label$527;
			label$526:;
		}
	}
	label$523:;
	label$522:;
	fb_StrDelete( (FBSTRING*)&ARCH$1 );
	label$515:;
}

static void HPARSETARGETARG( FBSTRING* ARG$1, int64* OS$1, int64* CPUTYPE$1, int64* IS_GNU_TRIPLET$1 )
{
	label$538:;
	*OS$1 = -1ll;
	*CPUTYPE$1 = -1ll;
	*IS_GNU_TRIPLET$1 = 0ll;
	FBSTRING LCASEARG$1;
	FBSTRING* vr$3 = fb_StrLcase2( (FBSTRING*)ARG$1, 0 );
	fb_StrInit( (void*)&LCASEARG$1, -1ll, (void*)vr$3, -1ll, 0 );
	{
		int64 I$2;
		I$2 = 0ll;
		label$543:;
		{
			int32 vr$7 = fb_StrCompare( (void*)&LCASEARG$1, -1ll, *(void**)((int64)(struct $12FBOSARCHINFO*)FBOSARCHMAP$ + (I$2 * 24ll)), 0ll );
			if( (int64)vr$7 != 0ll ) goto label$545;
			{
				*OS$1 = *(int64*)(((int64)(struct $12FBOSARCHINFO*)FBOSARCHMAP$ + (I$2 * 24ll)) + 8ll);
				*CPUTYPE$1 = *(int64*)(((int64)(struct $12FBOSARCHINFO*)FBOSARCHMAP$ + (I$2 * 24ll)) + 16ll);
				fb_StrDelete( (FBSTRING*)&LCASEARG$1 );
				goto label$539;
			}
			label$545:;
			label$544:;
		}
		label$541:;
		I$2 = I$2 + 1ll;
		label$540:;
		if( I$2 <= 16ll ) goto label$543;
		label$542:;
	}
	int64 SEPARATOR$1;
	FBSTRING* vr$15 = fb_StrAllocTempDescZEx( (char*)"-", 1ll );
	int64 vr$16 = fb_StrInstr( 1ll, (FBSTRING*)ARG$1, (FBSTRING*)vr$15 );
	SEPARATOR$1 = vr$16;
	if( SEPARATOR$1 <= 0ll ) goto label$547;
	{
		FBSTRING TMP$355$2;
		FBSTRING TMP$356$2;
		__builtin_memset( &TMP$355$2, 0, 24ll );
		FBSTRING* vr$20 = fb_LEFT( (FBSTRING*)&LCASEARG$1, SEPARATOR$1 + -1ll );
		fb_StrAssign( (void*)&TMP$355$2, -1ll, (void*)vr$20, -1ll, 0 );
		int64 vr$23 = FBIDENTIFYOS( &TMP$355$2 );
		*OS$1 = vr$23;
		fb_StrDelete( (FBSTRING*)&TMP$355$2 );
		__builtin_memset( &TMP$356$2, 0, 24ll );
		int64 vr$28 = fb_StrLen( (void*)&LCASEARG$1, -1ll );
		FBSTRING* vr$31 = fb_RIGHT( (FBSTRING*)&LCASEARG$1, vr$28 - SEPARATOR$1 );
		fb_StrAssign( (void*)&TMP$356$2, -1ll, (void*)vr$31, -1ll, 0 );
		int64 vr$35 = FBDEFAULTCPUTYPEFROMCPUFAMILYID( *OS$1, &TMP$356$2 );
		*CPUTYPE$1 = vr$35;
		fb_StrDelete( (FBSTRING*)&TMP$356$2 );
	}
	label$547:;
	label$546:;
	if( ((int64)-(*OS$1 < 0ll) & (int64)-(*CPUTYPE$1 < 0ll)) == 0ll ) goto label$549;
	{
		HPARSEGNUTRIPLET( ARG$1, SEPARATOR$1, OS$1, CPUTYPE$1 );
		*IS_GNU_TRIPLET$1 = -1ll;
	}
	label$549:;
	label$548:;
	fb_StrDelete( (FBSTRING*)&LCASEARG$1 );
	label$539:;
}

static void HANDLEOPT( int64 OPTID$1, FBSTRING* ARG$1, int64 IS_SOURCE$1 )
{
	label$550:;
	{
		uint64 TMP$359$2;
		TMP$359$2 = (uint64)OPTID$1;
		goto label$553;
		label$554:;
		{
			FBCADDOBJ( ARG$1 );
		}
		goto label$552;
		label$555:;
		{
			int32 vr$0 = fb_StrCompare( (void*)ARG$1, -1ll, (void*)"native", 7ll );
			*(int64*)((uint8*)&FBC$ + 56ll) = (int64)-((int64)vr$0 == 0ll);
			int64 vr$3 = FBIDENTIFYFBCARCH( ARG$1 );
			*(int64*)((uint8*)&FBC$ + 48ll) = vr$3;
			if( *(int64*)((uint8*)&FBC$ + 48ll) >= 0ll ) goto label$557;
			{
				FBSTRING TMP$362$4;
				FBSTRING TMP$363$4;
				__builtin_memset( &TMP$363$4, 0, 24ll );
				__builtin_memset( &TMP$362$4, 0, 24ll );
				FBSTRING* vr$7 = fb_StrConcat( &TMP$362$4, (void*)"-arch ", 7ll, (void*)ARG$1, -1ll );
				fb_StrAssign( (void*)&TMP$363$4, -1ll, (void*)vr$7, -1ll, 0 );
				HFATALINVALIDOPTION( &TMP$363$4, IS_SOURCE$1 );
				fb_StrDelete( (FBSTRING*)&TMP$363$4 );
			}
			label$557:;
			label$556:;
		}
		goto label$552;
		label$558:;
		{
			{
				FBSTRING TMP$364$4;
				fb_StrInit( (void*)&TMP$364$4, -1ll, (void*)ARG$1, -1ll, 0 );
				int32 vr$13 = fb_StrCompare( (void*)&TMP$364$4, -1ll, (void*)"att", 4ll );
				if( (int64)vr$13 != 0ll ) goto label$560;
				label$561:;
				{
					*(int64*)((uint8*)&FBC$ + 64ll) = 1ll;
				}
				goto label$559;
				label$560:;
				int32 vr$16 = fb_StrCompare( (void*)&TMP$364$4, -1ll, (void*)"intel", 6ll );
				if( (int64)vr$16 != 0ll ) goto label$562;
				label$563:;
				{
					*(int64*)((uint8*)&FBC$ + 64ll) = 0ll;
				}
				goto label$559;
				label$562:;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$564:;
				label$559:;
				fb_StrDelete( (FBSTRING*)&TMP$364$4 );
			}
		}
		goto label$552;
		label$565:;
		{
			HADDBAS( ARG$1 );
		}
		goto label$552;
		label$566:;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 3820ll), 261ll, (void*)ARG$1, -1ll, 0 );
		}
		goto label$552;
		label$567:;
		{
			FBSETOPTION( 0ll, 3ll );
			*(int64*)((uint8*)&FBC$ + 104ll) = -1ll;
		}
		goto label$552;
		label$568:;
		{
			*(int64*)((uint8*)&FBC$ + 104ll) = -1ll;
		}
		goto label$552;
		label$569:;
		{
			FBADDPREDEFINE( ARG$1 );
		}
		goto label$552;
		label$570:;
		{
			FBSETOPTION( 0ll, 2ll );
		}
		goto label$552;
		label$571:;
		{
			FBSETOPTION( 16ll, -1ll );
			FBSETOPTION( 21ll, -1ll );
		}
		goto label$552;
		label$572:;
		{
			FBSETOPTION( 22ll, -1ll );
		}
		goto label$552;
		label$573:;
		{
			FBSETOPTION( 23ll, -1ll );
		}
		goto label$552;
		label$574:;
		{
			FBSETOPTION( 15ll, -1ll );
		}
		goto label$552;
		label$575:;
		{
			FBSETOPTION( 13ll, -1ll );
		}
		goto label$552;
		label$576:;
		{
			FBSETOPTION( 14ll, -1ll );
		}
		goto label$552;
		label$577:;
		{
			FBSETOPTION( 19ll, -1ll );
		}
		goto label$552;
		label$578:;
		{
			FBSETOPTION( 20ll, -1ll );
		}
		goto label$552;
		label$579:;
		{
			FBSETOPTION( 21ll, -1ll );
		}
		goto label$552;
		label$580:;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 1490ll), 129ll, (void*)ARG$1, -1ll, 0 );
		}
		goto label$552;
		label$581:;
		{
			FBSETOPTION( 16ll, -1ll );
			FBSETOPTION( 17ll, -1ll );
			FBSETOPTION( 21ll, -1ll );
		}
		goto label$552;
		label$582:;
		{
			FBSETOPTION( 16ll, -1ll );
			FBSETOPTION( 17ll, -1ll );
			FBSETOPTION( 18ll, -1ll );
			FBSETOPTION( 19ll, -1ll );
			FBSETOPTION( 22ll, -1ll );
			FBSETOPTION( 23ll, -1ll );
			FBSETOPTION( 20ll, -1ll );
			FBSETOPTION( 21ll, -1ll );
		}
		goto label$552;
		label$583:;
		{
			FBSETOPTION( 34ll, -1ll );
		}
		goto label$552;
		label$584:;
		{
			FBSETOPTION( 37ll, -1ll );
		}
		goto label$552;
		label$585:;
		{
			int64 VALUE$3;
			$7FB_LANG vr$22 = FBGETLANGID( (char*)*(char**)ARG$1 );
			VALUE$3 = vr$22;
			if( VALUE$3 != -1ll ) goto label$587;
			{
				HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
			}
			label$587:;
			label$586:;
			int64 vr$23 = FBGETOPTION( 11ll );
			if( (IS_SOURCE$1 & vr$23) == 0ll ) goto label$589;
			{
				ERRREPORTWARN( 30ll, (char*)0ull, 1ll, (char*)0ull );
			}
			goto label$588;
			label$589:;
			{
				FBSETOPTION( 10ll, VALUE$3 );
				FBSETOPTION( 11ll, -1ll );
				*($7FB_LANG*)((uint8*)&FBC$ + 4088ll) = VALUE$3;
				if( IS_SOURCE$1 == 0ll ) goto label$591;
				{
					FBSETOPTION( 12ll, VALUE$3 );
				}
				label$591:;
				label$590:;
			}
			label$588:;
		}
		goto label$552;
		label$592:;
		{
			int64 VALUE$3;
			{
				FBSTRING TMP$367$4;
				FBSTRING* vr$25 = fb_StrUcase2( (FBSTRING*)ARG$1, 0 );
				fb_StrInit( (void*)&TMP$367$4, -1ll, (void*)vr$25, -1ll, 0 );
				int32 vr$28 = fb_StrCompare( (void*)&TMP$367$4, -1ll, (void*)"PRECISE", 8ll );
				if( (int64)vr$28 != 0ll ) goto label$594;
				label$595:;
				{
					VALUE$3 = 0ll;
				}
				goto label$593;
				label$594:;
				int32 vr$31 = fb_StrCompare( (void*)&TMP$367$4, -1ll, (void*)"FAST", 5ll );
				if( (int64)vr$31 != 0ll ) goto label$596;
				label$597:;
				{
					VALUE$3 = 1ll;
				}
				goto label$593;
				label$596:;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$598:;
				label$593:;
				fb_StrDelete( (FBSTRING*)&TMP$367$4 );
			}
			FBSETOPTION( 6ll, VALUE$3 );
		}
		goto label$552;
		label$599:;
		{
			int64 VALUE$3;
			{
				FBSTRING TMP$370$4;
				FBSTRING* vr$34 = fb_StrUcase2( (FBSTRING*)ARG$1, 0 );
				fb_StrInit( (void*)&TMP$370$4, -1ll, (void*)vr$34, -1ll, 0 );
				int32 vr$37 = fb_StrCompare( (void*)&TMP$370$4, -1ll, (void*)"X87", 4ll );
				if( (int64)vr$37 == 0ll ) goto label$602;
				label$603:;
				int32 vr$40 = fb_StrCompare( (void*)&TMP$370$4, -1ll, (void*)"FPU", 4ll );
				if( (int64)vr$40 != 0ll ) goto label$601;
				label$602:;
				{
					VALUE$3 = 0ll;
				}
				goto label$600;
				label$601:;
				int32 vr$43 = fb_StrCompare( (void*)&TMP$370$4, -1ll, (void*)"SSE", 4ll );
				if( (int64)vr$43 != 0ll ) goto label$604;
				label$605:;
				{
					VALUE$3 = 1ll;
				}
				goto label$600;
				label$604:;
				int32 vr$46 = fb_StrCompare( (void*)&TMP$370$4, -1ll, (void*)"NEON", 5ll );
				if( (int64)vr$46 != 0ll ) goto label$606;
				label$607:;
				{
					VALUE$3 = 2ll;
				}
				goto label$600;
				label$606:;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$608:;
				label$600:;
				fb_StrDelete( (FBSTRING*)&TMP$370$4 );
			}
			FBSETOPTION( 5ll, VALUE$3 );
		}
		goto label$552;
		label$609:;
		{
			FBSETOPTION( 13ll, -1ll );
			FBSETOPTION( 14ll, -1ll );
			FBSETOPTION( 15ll, -1ll );
		}
		goto label$552;
		label$610:;
		{
			{
				FBSTRING TMP$375$4;
				FBSTRING* vr$49 = fb_StrLcase2( (FBSTRING*)ARG$1, 0 );
				fb_StrInit( (void*)&TMP$375$4, -1ll, (void*)vr$49, -1ll, 0 );
				int32 vr$52 = fb_StrCompare( (void*)&TMP$375$4, -1ll, (void*)"gas", 4ll );
				if( (int64)vr$52 != 0ll ) goto label$612;
				label$613:;
				{
					*(int64*)((uint8*)&FBC$ + 40ll) = 0ll;
				}
				goto label$611;
				label$612:;
				int32 vr$55 = fb_StrCompare( (void*)&TMP$375$4, -1ll, (void*)"gcc", 4ll );
				if( (int64)vr$55 != 0ll ) goto label$614;
				label$615:;
				{
					*(int64*)((uint8*)&FBC$ + 40ll) = 1ll;
				}
				goto label$611;
				label$614:;
				int32 vr$58 = fb_StrCompare( (void*)&TMP$375$4, -1ll, (void*)"clang", 6ll );
				if( (int64)vr$58 != 0ll ) goto label$616;
				label$617:;
				{
					*(int64*)((uint8*)&FBC$ + 40ll) = 2ll;
				}
				goto label$611;
				label$616:;
				int32 vr$61 = fb_StrCompare( (void*)&TMP$375$4, -1ll, (void*)"llvm", 5ll );
				if( (int64)vr$61 != 0ll ) goto label$618;
				label$619:;
				{
					*(int64*)((uint8*)&FBC$ + 40ll) = 3ll;
				}
				goto label$611;
				label$618:;
				int32 vr$64 = fb_StrCompare( (void*)&TMP$375$4, -1ll, (void*)"gas64", 6ll );
				if( (int64)vr$64 != 0ll ) goto label$620;
				label$621:;
				{
					*(int64*)((uint8*)&FBC$ + 40ll) = 4ll;
				}
				goto label$611;
				label$620:;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$622:;
				label$611:;
				fb_StrDelete( (FBSTRING*)&TMP$375$4 );
			}
		}
		goto label$552;
		label$623:;
		{
			*(int64*)((uint8*)&FBC$ + 128ll) = -1ll;
		}
		goto label$552;
		label$624:;
		{
			FBSTRING TMP$379$3;
			__builtin_memset( &TMP$379$3, 0, 24ll );
			FBSTRING* vr$68 = PATHSTRIPDIV( ARG$1 );
			fb_StrAssign( (void*)&TMP$379$3, -1ll, (void*)vr$68, -1ll, 0 );
			FBADDINCLUDEPATH( &TMP$379$3 );
			fb_StrDelete( (FBSTRING*)&TMP$379$3 );
		}
		goto label$552;
		label$625:;
		{
			FBADDPREINCLUDE( ARG$1 );
		}
		goto label$552;
		label$626:;
		{
			STRSETADD( (struct $7TSTRSET*)((uint8*)&FBC$ + 528ll), ARG$1, 0ll );
		}
		goto label$552;
		label$627:;
		{
			int64 VALUE$3;
			$7FB_LANG vr$74 = FBGETLANGID( (char*)*(char**)ARG$1 );
			VALUE$3 = vr$74;
			if( VALUE$3 != -1ll ) goto label$629;
			{
				HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
			}
			label$629:;
			label$628:;
			int64 vr$75 = FBGETOPTION( 11ll );
			if( vr$75 != 0ll ) goto label$631;
			{
				FBSETOPTION( 10ll, VALUE$3 );
				*($7FB_LANG*)((uint8*)&FBC$ + 4088ll) = VALUE$3;
				if( IS_SOURCE$1 == 0ll ) goto label$633;
				{
					FBSETOPTION( 12ll, VALUE$3 );
				}
				label$633:;
				label$632:;
			}
			label$631:;
			label$630:;
		}
		goto label$552;
		label$634:;
		{
			FBSETOPTION( 0ll, 1ll );
		}
		goto label$552;
		label$635:;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 1229ll), 261ll, (void*)ARG$1, -1ll, 0 );
			*(int64*)((uint8*)&FBC$ + 1624ll) = -1ll;
		}
		goto label$552;
		label$636:;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 1632ll), 261ll, (void*)ARG$1, -1ll, 0 );
		}
		goto label$552;
		label$637:;
		{
			int64 VALUE$3;
			int32 vr$78 = fb_StrCompare( (void*)ARG$1, -1ll, (void*)"inf", 4ll );
			if( (int64)vr$78 != 0ll ) goto label$639;
			{
				VALUE$3 = 2147483647ll;
			}
			goto label$638;
			label$639:;
			{
				int32 vr$80 = fb_VALINT( (FBSTRING*)ARG$1 );
				VALUE$3 = (int64)vr$80;
				if( VALUE$3 > 0ll ) goto label$641;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$641:;
				label$640:;
			}
			label$638:;
			FBSETOPTION( 27ll, VALUE$3 );
		}
		goto label$552;
		label$642:;
		{
			FBSETOPTION( 36ll, -1ll );
			*(int64*)((uint8*)&FBC$ + 4096ll) = -1ll;
		}
		goto label$552;
		label$643:;
		{
			*(int64*)((uint8*)&FBC$ + 2744ll) = -1ll;
			*(int64*)((uint8*)&FBC$ + 2752ll) = -1ll;
		}
		goto label$552;
		label$644:;
		{
			FBSETOPTION( 26ll, 0ll );
		}
		goto label$552;
		label$645:;
		{
			FBSTRING TMP$381$3;
			struct $7FBARRAYI8FBSTRINGE LIBS$3;
			*(FBSTRING**)&LIBS$3 = (FBSTRING*)0ull;
			*(FBSTRING**)((uint8*)&LIBS$3 + 8ll) = (FBSTRING*)0ull;
			*(int64*)((uint8*)&LIBS$3 + 16ll) = 0ll;
			*(int64*)((uint8*)&LIBS$3 + 24ll) = 24ll;
			*(int64*)((uint8*)&LIBS$3 + 32ll) = 0ll;
			*(int64*)((uint8*)&LIBS$3 + 40ll) = 8ll;
			__builtin_memset( (void*)((uint8*)&LIBS$3 + 48ll), 0, 192ll );
			__builtin_memset( &TMP$381$3, 0, 24ll );
			fb_StrAssign( (void*)&TMP$381$3, -1ll, (void*)",", 2ll, 0 );
			HSPLITSTR( ARG$1, &TMP$381$3, &LIBS$3 );
			fb_StrDelete( (FBSTRING*)&TMP$381$3 );
			{
				int64 I$4;
				int64 vr$89 = fb_ArrayLBound( (struct $7FBARRAYIKvE*)&LIBS$3, 1ll );
				I$4 = vr$89;
				int64 TMP$382$4;
				int64 vr$91 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)&LIBS$3, 1ll );
				TMP$382$4 = vr$91;
				goto label$646;
				label$649:;
				{
					int64 vr$95 = fb_StrLen( (void*)((I$4 * 24ll) + *(int64*)&LIBS$3), -1ll );
					if( vr$95 <= 0ll ) goto label$651;
					{
						STRSETADD( (struct $7TSTRSET*)((uint8*)&FBC$ + 704ll), (FBSTRING*)((I$4 * 24ll) + *(int64*)&LIBS$3), 0ll );
					}
					label$651:;
					label$650:;
				}
				label$647:;
				I$4 = I$4 + 1ll;
				label$646:;
				if( I$4 <= TMP$382$4 ) goto label$649;
				label$648:;
			}
			fb_ArrayStrErase( (struct $7FBARRAYIvE*)&LIBS$3 );
		}
		goto label$552;
		label$652:;
		{
			FBSETOPTION( 40ll, 0ll );
		}
		goto label$552;
		label$653:;
		{
			*(int64*)((uint8*)&FBC$ + 2768ll) = 0ll;
		}
		goto label$552;
		label$654:;
		{
			HCHECKWAITINGOBJFILE(  );
			if( *(struct $9FBCIOFILE**)((uint8*)&FBC$ + 8ll) == (struct $9FBCIOFILE*)0ull ) goto label$656;
			{
				fb_StrAssign( *(void**)((uint8*)*(struct $9FBCIOFILE**)((uint8*)&FBC$ + 8ll) + 24ll), -1ll, (void*)ARG$1, -1ll, 0 );
				*(int64*)((uint8*)*(struct $9FBCIOFILE**)((uint8*)&FBC$ + 8ll) + 32ll) = -1ll;
			}
			goto label$655;
			label$656:;
			{
				fb_StrAssign( (void*)((uint8*)&FBC$ + 16ll), -1ll, (void*)ARG$1, -1ll, 0 );
			}
			label$655:;
		}
		goto label$552;
		label$657:;
		{
			int64 VALUE$3;
			int32 vr$105 = fb_StrCompare( (void*)ARG$1, -1ll, (void*)"max", 4ll );
			if( (int64)vr$105 != 0ll ) goto label$659;
			{
				VALUE$3 = 3ll;
			}
			goto label$658;
			label$659:;
			{
				int32 vr$107 = fb_VALINT( (FBSTRING*)ARG$1 );
				VALUE$3 = (int64)vr$107;
				if( VALUE$3 >= 0ll ) goto label$661;
				{
					VALUE$3 = 0ll;
				}
				goto label$660;
				label$661:;
				if( VALUE$3 <= 3ll ) goto label$662;
				{
					VALUE$3 = 3ll;
				}
				label$662:;
				label$660:;
			}
			label$658:;
			FBSETOPTION( 8ll, VALUE$3 );
		}
		goto label$552;
		label$663:;
		{
			FBSTRING TMP$384$3;
			__builtin_memset( &TMP$384$3, 0, 24ll );
			FBSTRING* vr$110 = PATHSTRIPDIV( ARG$1 );
			fb_StrAssign( (void*)&TMP$384$3, -1ll, (void*)vr$110, -1ll, 0 );
			STRSETADD( (struct $7TSTRSET*)((uint8*)&FBC$ + 616ll), &TMP$384$3, 0ll );
			fb_StrDelete( (FBSTRING*)&TMP$384$3 );
		}
		goto label$552;
		label$664:;
		{
			FBSETOPTION( 38ll, -1ll );
		}
		goto label$552;
		label$665:;
		{
			FBSETOPTION( 1ll, -1ll );
			*(int64*)((uint8*)&FBC$ + 72ll) = -1ll;
		}
		goto label$552;
		label$666:;
		{
			FBSTRING* vr$115 = PATHSTRIPDIV( ARG$1 );
			fb_StrAssign( (void*)((uint8*)&FBC$ + 2776ll), 261ll, (void*)vr$115, -1ll, 0 );
			HREPLACESLASH( (char*)((uint8*)&FBC$ + 2776ll), 47ll );
		}
		goto label$552;
		label$667:;
		{
			{
				FBSTRING TMP$385$4;
				fb_StrInit( (void*)&TMP$385$4, -1ll, (void*)ARG$1, -1ll, 0 );
				int32 vr$120 = fb_StrCompare( (void*)&TMP$385$4, -1ll, (void*)"host", 5ll );
				if( (int64)vr$120 != 0ll ) goto label$669;
				label$670:;
				{
					*(int64*)((uint8*)&FBC$ + 136ll) = 0ll;
				}
				goto label$668;
				label$669:;
				int32 vr$123 = fb_StrCompare( (void*)&TMP$385$4, -1ll, (void*)"target", 7ll );
				if( (int64)vr$123 != 0ll ) goto label$671;
				label$672:;
				{
					*(int64*)((uint8*)&FBC$ + 136ll) = 1ll;
				}
				goto label$668;
				label$671:;
				int32 vr$126 = fb_StrCompare( (void*)&TMP$385$4, -1ll, (void*)"x", 2ll );
				if( (int64)vr$126 != 0ll ) goto label$673;
				label$674:;
				{
					*(int64*)((uint8*)&FBC$ + 136ll) = 2ll;
				}
				goto label$668;
				label$673:;
				int32 vr$129 = fb_StrCompare( (void*)&TMP$385$4, -1ll, (void*)"fblibdir", 9ll );
				if( (int64)vr$129 != 0ll ) goto label$675;
				label$676:;
				{
					*(int64*)((uint8*)&FBC$ + 136ll) = 3ll;
				}
				goto label$668;
				label$675:;
				int32 vr$132 = fb_StrCompare( (void*)&TMP$385$4, -1ll, (void*)"sha-1", 6ll );
				if( (int64)vr$132 != 0ll ) goto label$677;
				label$678:;
				{
					*(int64*)((uint8*)&FBC$ + 136ll) = 4ll;
				}
				goto label$668;
				label$677:;
				int32 vr$135 = fb_StrCompare( (void*)&TMP$385$4, -1ll, (void*)"fork-id", 8ll );
				if( (int64)vr$135 != 0ll ) goto label$679;
				label$680:;
				{
					*(int64*)((uint8*)&FBC$ + 136ll) = 5ll;
				}
				goto label$668;
				label$679:;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$681:;
				label$668:;
				fb_StrDelete( (FBSTRING*)&TMP$385$4 );
			}
		}
		goto label$552;
		label$682:;
		{
			FBSETOPTION( 24ll, 1ll );
		}
		goto label$552;
		label$683:;
		{
			{
				FBSTRING TMP$392$4;
				fb_StrInit( (void*)&TMP$392$4, -1ll, (void*)ARG$1, -1ll, 0 );
				int32 vr$140 = fb_StrCompare( (void*)&TMP$392$4, -1ll, (void*)"default", 8ll );
				if( (int64)vr$140 == 0ll ) goto label$686;
				label$687:;
				int32 vr$143 = fb_StrCompare( (void*)&TMP$392$4, -1ll, (void*)"gmon", 5ll );
				if( (int64)vr$143 != 0ll ) goto label$685;
				label$686:;
				{
					FBSETOPTION( 24ll, 1ll );
				}
				goto label$684;
				label$685:;
				int32 vr$146 = fb_StrCompare( (void*)&TMP$392$4, -1ll, (void*)"fb", 3ll );
				if( (int64)vr$146 != 0ll ) goto label$688;
				label$689:;
				{
					FBSETOPTION( 24ll, 2ll );
				}
				goto label$684;
				label$688:;
				int32 vr$149 = fb_StrCompare( (void*)&TMP$392$4, -1ll, (void*)"cycles", 7ll );
				if( (int64)vr$149 != 0ll ) goto label$690;
				label$691:;
				{
					FBSETOPTION( 24ll, 3ll );
				}
				goto label$684;
				label$690:;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$692:;
				label$684:;
				fb_StrDelete( (FBSTRING*)&TMP$392$4 );
			}
		}
		goto label$552;
		label$693:;
		{
			FBSETOPTION( 0ll, 3ll );
			*(int64*)((uint8*)&FBC$ + 72ll) = -1ll;
			*(int64*)((uint8*)&FBC$ + 80ll) = -1ll;
		}
		goto label$552;
		label$694:;
		{
			*(int64*)((uint8*)&FBC$ + 80ll) = -1ll;
		}
		goto label$552;
		label$695:;
		{
			FBSETOPTION( 0ll, 3ll );
			*(int64*)((uint8*)&FBC$ + 88ll) = -1ll;
			*(int64*)((uint8*)&FBC$ + 96ll) = -1ll;
		}
		goto label$552;
		label$696:;
		{
			*(int64*)((uint8*)&FBC$ + 96ll) = -1ll;
		}
		goto label$552;
		label$697:;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 1893ll), 129ll, (void*)ARG$1, -1ll, 0 );
			{
				FBSTRING TMP$396$4;
				fb_StrInit( (void*)&TMP$396$4, -1ll, (void*)ARG$1, -1ll, 0 );
				int32 vr$155 = fb_StrCompare( (void*)&TMP$396$4, -1ll, (void*)"gui", 4ll );
				if( (int64)vr$155 != 0ll ) goto label$699;
				label$700:;
				{
					FBSETOPTION( 42ll, 1ll );
				}
				label$699:;
				label$698:;
				fb_StrDelete( (FBSTRING*)&TMP$396$4 );
			}
		}
		goto label$552;
		label$701:;
		{
			FBSETOPTION( 41ll, -1ll );
		}
		goto label$552;
		label$702:;
		{
			*(int64*)((uint8*)&FBC$ + 2760ll) = -1ll;
		}
		goto label$552;
		label$703:;
		{
			*(int64*)((uint8*)&FBC$ + 2768ll) = -1ll;
		}
		goto label$552;
		label$704:;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 2354ll), 261ll, (void*)ARG$1, -1ll, 0 );
		}
		goto label$552;
		label$705:;
		{
			int32 vr$159 = fb_VALINT( (FBSTRING*)ARG$1 );
			FBSETOPTION( 39ll, (int64)vr$159 << (10ll & 63ll) );
		}
		goto label$552;
		label$706:;
		{
			int64 OS$3;
			__builtin_memset( &OS$3, 0, 8ll );
			int64 CPUTYPE$3;
			__builtin_memset( &CPUTYPE$3, 0, 8ll );
			int64 IS_GNU_TRIPLET$3;
			__builtin_memset( &IS_GNU_TRIPLET$3, 0, 8ll );
			HPARSETARGETARG( ARG$1, &OS$3, &CPUTYPE$3, &IS_GNU_TRIPLET$3 );
			if( ((int64)-(OS$3 < 0ll) | (int64)-(CPUTYPE$3 < 0ll)) == 0ll ) goto label$708;
			{
				HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
			}
			label$708:;
			label$707:;
			FBSETOPTION( 3ll, OS$3 );
			FBSETOPTION( 4ll, CPUTYPE$3 );
			if( (((int64)-(OS$3 != 2ll) | (int64)-(CPUTYPE$3 != 13ll)) | IS_GNU_TRIPLET$3) == 0ll ) goto label$710;
			{
				FBSTRING TMP$397$4;
				fb_StrAssign( (void*)((uint8*)&FBC$ + 2096ll), 129ll, (void*)ARG$1, -1ll, 0 );
				__builtin_memset( &TMP$397$4, 0, 24ll );
				FBSTRING* vr$179 = fb_StrConcat( &TMP$397$4, (void*)((uint8*)&FBC$ + 2096ll), 129ll, (void*)"-", 2ll );
				fb_StrAssign( (void*)((uint8*)&FBC$ + 2225ll), 129ll, (void*)vr$179, -1ll, 0 );
			}
			label$710:;
			label$709:;
		}
		goto label$552;
		label$711:;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 2615ll), 129ll, (void*)ARG$1, -1ll, 0 );
		}
		goto label$552;
		label$712:;
		{
			*(int64*)((uint8*)&FBC$ + 112ll) = -1ll;
		}
		goto label$552;
		label$713:;
		{
			int64 VALUE$3;
			{
				FBSTRING TMP$398$4;
				FBSTRING* vr$182 = fb_StrUcase2( (FBSTRING*)ARG$1, 0 );
				fb_StrInit( (void*)&TMP$398$4, -1ll, (void*)vr$182, -1ll, 0 );
				int32 vr$185 = fb_StrCompare( (void*)&TMP$398$4, -1ll, (void*)"NONE", 5ll );
				if( (int64)vr$185 == 0ll ) goto label$716;
				label$717:;
				int32 vr$188 = fb_StrCompare( (void*)&TMP$398$4, -1ll, (void*)"0", 2ll );
				if( (int64)vr$188 != 0ll ) goto label$715;
				label$716:;
				{
					VALUE$3 = 0ll;
				}
				goto label$714;
				label$715:;
				int32 vr$191 = fb_StrCompare( (void*)&TMP$398$4, -1ll, (void*)"1", 2ll );
				if( (int64)vr$191 != 0ll ) goto label$718;
				label$719:;
				{
					VALUE$3 = 1ll;
				}
				goto label$714;
				label$718:;
				int32 vr$194 = fb_StrCompare( (void*)&TMP$398$4, -1ll, (void*)"2", 2ll );
				if( (int64)vr$194 != 0ll ) goto label$720;
				label$721:;
				{
					VALUE$3 = 2ll;
				}
				goto label$714;
				label$720:;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$722:;
				label$714:;
				fb_StrDelete( (FBSTRING*)&TMP$398$4 );
			}
			FBSETOPTION( 7ll, VALUE$3 );
		}
		goto label$552;
		label$723:;
		{
			if( IS_SOURCE$1 == 0ll ) goto label$725;
			{
				if( *(int64*)((uint8*)&FBC$ + 120ll) != 0ll ) goto label$727;
				{
					HPRINTVERSION( *(int64*)((uint8*)&FBC$ + 112ll) );
				}
				label$727:;
				label$726:;
			}
			label$725:;
			label$724:;
			*(int64*)((uint8*)&FBC$ + 120ll) = -1ll;
		}
		goto label$552;
		label$728:;
		{
			int64 VALUE$3;
			VALUE$3 = -1ll;
			{
				FBSTRING TMP$401$4;
				fb_StrInit( (void*)&TMP$401$4, -1ll, (void*)ARG$1, -1ll, 0 );
				int32 vr$199 = fb_StrCompare( (void*)&TMP$401$4, -1ll, (void*)"all", 4ll );
				if( (int64)vr$199 != 0ll ) goto label$730;
				label$731:;
				{
					VALUE$3 = 0ll;
				}
				goto label$729;
				label$730:;
				int32 vr$202 = fb_StrCompare( (void*)&TMP$401$4, -1ll, (void*)"none", 5ll );
				if( (int64)vr$202 != 0ll ) goto label$732;
				label$733:;
				{
					VALUE$3 = 4ll;
				}
				goto label$729;
				label$732:;
				int32 vr$205 = fb_StrCompare( (void*)&TMP$401$4, -1ll, (void*)"param", 6ll );
				if( (int64)vr$205 != 0ll ) goto label$734;
				label$735:;
				{
					int64 vr$207 = FBGETOPTION( 28ll );
					FBSETOPTION( 28ll, vr$207 | 2ll );
				}
				goto label$729;
				label$734:;
				int32 vr$210 = fb_StrCompare( (void*)&TMP$401$4, -1ll, (void*)"escape", 7ll );
				if( (int64)vr$210 != 0ll ) goto label$736;
				label$737:;
				{
					int64 vr$212 = FBGETOPTION( 28ll );
					FBSETOPTION( 28ll, vr$212 | 1ll );
				}
				goto label$729;
				label$736:;
				int32 vr$215 = fb_StrCompare( (void*)&TMP$401$4, -1ll, (void*)"next", 5ll );
				if( (int64)vr$215 != 0ll ) goto label$738;
				label$739:;
				{
					int64 vr$217 = FBGETOPTION( 28ll );
					FBSETOPTION( 28ll, vr$217 | 8ll );
				}
				goto label$729;
				label$738:;
				int32 vr$220 = fb_StrCompare( (void*)&TMP$401$4, -1ll, (void*)"signedness", 11ll );
				if( (int64)vr$220 != 0ll ) goto label$740;
				label$741:;
				{
					int64 vr$222 = FBGETOPTION( 28ll );
					FBSETOPTION( 28ll, vr$222 | 32ll );
				}
				goto label$729;
				label$740:;
				int32 vr$225 = fb_StrCompare( (void*)&TMP$401$4, -1ll, (void*)"constness", 10ll );
				if( (int64)vr$225 != 0ll ) goto label$742;
				label$743:;
				{
					int64 vr$227 = FBGETOPTION( 28ll );
					FBSETOPTION( 28ll, vr$227 | 128ll );
					VALUE$3 = 0ll;
				}
				goto label$729;
				label$742:;
				int32 vr$230 = fb_StrCompare( (void*)&TMP$401$4, -1ll, (void*)"funcptr", 8ll );
				if( (int64)vr$230 != 0ll ) goto label$744;
				label$745:;
				{
					int64 vr$232 = FBGETOPTION( 28ll );
					FBSETOPTION( 28ll, vr$232 | 64ll );
					VALUE$3 = 0ll;
				}
				goto label$729;
				label$744:;
				int32 vr$235 = fb_StrCompare( (void*)&TMP$401$4, -1ll, (void*)"suffix", 7ll );
				if( (int64)vr$235 != 0ll ) goto label$746;
				label$747:;
				{
					int64 vr$237 = FBGETOPTION( 28ll );
					FBSETOPTION( 28ll, vr$237 | 256ll );
				}
				goto label$729;
				label$746:;
				int32 vr$240 = fb_StrCompare( (void*)&TMP$401$4, -1ll, (void*)"pedantic", 9ll );
				if( (int64)vr$240 != 0ll ) goto label$748;
				label$749:;
				{
					FBSETOPTION( 28ll, 4294965527ll );
					if( VALUE$3 <= 1ll ) goto label$751;
					{
						VALUE$3 = 1ll;
					}
					label$751:;
					label$750:;
				}
				goto label$729;
				label$748:;
				int32 vr$243 = fb_StrCompare( (void*)&TMP$401$4, -1ll, (void*)"error", 6ll );
				if( (int64)vr$243 != 0ll ) goto label$752;
				label$753:;
				{
					int64 vr$245 = FBGETOPTION( 28ll );
					FBSETOPTION( 28ll, vr$245 | 512ll );
				}
				goto label$729;
				label$752:;
				int32 vr$248 = fb_StrCompare( (void*)&TMP$401$4, -1ll, (void*)"upcast", 7ll );
				if( (int64)vr$248 != 0ll ) goto label$754;
				label$755:;
				{
					int64 vr$250 = FBGETOPTION( 28ll );
					FBSETOPTION( 28ll, vr$250 | 1024ll );
				}
				goto label$729;
				label$754:;
				{
					int32 vr$252 = fb_VALINT( (FBSTRING*)ARG$1 );
					VALUE$3 = (int64)vr$252;
				}
				label$756:;
				label$729:;
				fb_StrDelete( (FBSTRING*)&TMP$401$4 );
			}
			if( VALUE$3 < 0ll ) goto label$758;
			{
				FBSETOPTION( 25ll, VALUE$3 );
			}
			label$758:;
			label$757:;
		}
		goto label$552;
		label$759:;
		{
			FBSTRING TMP$414$3;
			FBSTRING TMP$415$3;
			FBSTRING TMP$416$3;
			FBSTRING* vr$256 = HREPLACE( (char*)*(char**)ARG$1, (char*)",", (char*)" " );
			__builtin_memset( &TMP$414$3, 0, 24ll );
			FBSTRING* vr$259 = fb_StrConcat( &TMP$414$3, (void*)" ", 2ll, (void*)vr$256, -1ll );
			__builtin_memset( &TMP$415$3, 0, 24ll );
			FBSTRING* vr$262 = fb_StrConcat( &TMP$415$3, (void*)vr$259, -1ll, (void*)" ", 2ll );
			__builtin_memset( &TMP$416$3, 0, 24ll );
			FBSTRING* vr$266 = fb_StrConcat( &TMP$416$3, (void*)((uint8*)&FBC$ + 2024ll), -1ll, (void*)vr$262, -1ll );
			fb_StrAssign( (void*)((uint8*)&FBC$ + 2024ll), -1ll, (void*)vr$266, -1ll, 0 );
		}
		goto label$552;
		label$760:;
		{
			FBSTRING TMP$417$3;
			FBSTRING TMP$418$3;
			FBSTRING TMP$419$3;
			FBSTRING* vr$269 = HREPLACE( (char*)*(char**)ARG$1, (char*)",", (char*)" " );
			__builtin_memset( &TMP$417$3, 0, 24ll );
			FBSTRING* vr$272 = fb_StrConcat( &TMP$417$3, (void*)" ", 2ll, (void*)vr$269, -1ll );
			__builtin_memset( &TMP$418$3, 0, 24ll );
			FBSTRING* vr$275 = fb_StrConcat( &TMP$418$3, (void*)vr$272, -1ll, (void*)" ", 2ll );
			__builtin_memset( &TMP$419$3, 0, 24ll );
			FBSTRING* vr$279 = fb_StrConcat( &TMP$419$3, (void*)((uint8*)&FBC$ + 2072ll), -1ll, (void*)vr$275, -1ll );
			fb_StrAssign( (void*)((uint8*)&FBC$ + 2072ll), -1ll, (void*)vr$279, -1ll, 0 );
		}
		goto label$552;
		label$761:;
		{
			FBSTRING TMP$420$3;
			FBSTRING TMP$421$3;
			FBSTRING TMP$422$3;
			FBSTRING* vr$282 = HREPLACE( (char*)*(char**)ARG$1, (char*)",", (char*)" " );
			__builtin_memset( &TMP$420$3, 0, 24ll );
			FBSTRING* vr$285 = fb_StrConcat( &TMP$420$3, (void*)" ", 2ll, (void*)vr$282, -1ll );
			__builtin_memset( &TMP$421$3, 0, 24ll );
			FBSTRING* vr$288 = fb_StrConcat( &TMP$421$3, (void*)vr$285, -1ll, (void*)" ", 2ll );
			__builtin_memset( &TMP$422$3, 0, 24ll );
			FBSTRING* vr$292 = fb_StrConcat( &TMP$422$3, (void*)((uint8*)&FBC$ + 2048ll), -1ll, (void*)vr$288, -1ll );
			fb_StrAssign( (void*)((uint8*)&FBC$ + 2048ll), -1ll, (void*)vr$292, -1ll, 0 );
		}
		goto label$552;
		label$762:;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 968ll), 261ll, (void*)ARG$1, -1ll, 0 );
		}
		goto label$552;
		label$763:;
		{
			{
				FBSTRING TMP$423$4;
				FBSTRING* vr$295 = fb_StrLcase2( (FBSTRING*)ARG$1, 0 );
				fb_StrInit( (void*)&TMP$423$4, -1ll, (void*)vr$295, -1ll, 0 );
				int32 vr$298 = fb_StrCompare( (void*)&TMP$423$4, -1ll, (void*)"gosub-setjmp", 13ll );
				if( (int64)vr$298 != 0ll ) goto label$765;
				label$766:;
				{
					FBSETOPTION( 29ll, -1ll );
				}
				goto label$764;
				label$765:;
				int32 vr$301 = fb_StrCompare( (void*)&TMP$423$4, -1ll, (void*)"valist-as-ptr", 14ll );
				if( (int64)vr$301 != 0ll ) goto label$767;
				label$768:;
				{
					FBSETOPTION( 30ll, -1ll );
				}
				goto label$764;
				label$767:;
				int32 vr$304 = fb_StrCompare( (void*)&TMP$423$4, -1ll, (void*)"no-thiscall", 12ll );
				if( (int64)vr$304 != 0ll ) goto label$769;
				label$770:;
				{
					FBSETOPTION( 31ll, -1ll );
				}
				goto label$764;
				label$769:;
				int32 vr$307 = fb_StrCompare( (void*)&TMP$423$4, -1ll, (void*)"no-fastcall", 12ll );
				if( (int64)vr$307 != 0ll ) goto label$771;
				label$772:;
				{
					FBSETOPTION( 32ll, -1ll );
				}
				goto label$764;
				label$771:;
				int32 vr$310 = fb_StrCompare( (void*)&TMP$423$4, -1ll, (void*)"fbrt", 5ll );
				if( (int64)vr$310 != 0ll ) goto label$773;
				label$774:;
				{
					FBSETOPTION( 33ll, -1ll );
				}
				goto label$764;
				label$773:;
				int32 vr$313 = fb_StrCompare( (void*)&TMP$423$4, -1ll, (void*)"nocmdline", 10ll );
				if( (int64)vr$313 != 0ll ) goto label$775;
				label$776:;
				{
					FBSETOPTION( 43ll, -1ll );
				}
				goto label$764;
				label$775:;
				int32 vr$316 = fb_StrCompare( (void*)&TMP$423$4, -1ll, (void*)"retinflts", 10ll );
				if( (int64)vr$316 != 0ll ) goto label$777;
				label$778:;
				{
					FBSETOPTION( 44ll, -1ll );
				}
				goto label$764;
				label$777:;
				int32 vr$319 = fb_StrCompare( (void*)&TMP$423$4, -1ll, (void*)"nobuiltins", 11ll );
				if( (int64)vr$319 != 0ll ) goto label$779;
				label$780:;
				{
					FBSETOPTION( 45ll, -1ll );
				}
				goto label$764;
				label$779:;
				int32 vr$322 = fb_StrCompare( (void*)&TMP$423$4, -1ll, (void*)"optabstract", 12ll );
				if( (int64)vr$322 != 0ll ) goto label$781;
				label$782:;
				{
					FBSETOPTION( 46ll, -1ll );
				}
				goto label$764;
				label$781:;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$783:;
				label$764:;
				fb_StrDelete( (FBSTRING*)&TMP$423$4 );
			}
		}
		goto label$552;
		label$553:;
		static const void* tmp$881[74ll] = {
			&&label$554,
			&&label$555,
			&&label$558,
			&&label$565,
			&&label$566,
			&&label$567,
			&&label$568,
			&&label$569,
			&&label$570,
			&&label$570,
			&&label$571,
			&&label$572,
			&&label$573,
			&&label$574,
			&&label$575,
			&&label$576,
			&&label$577,
			&&label$578,
			&&label$579,
			&&label$580,
			&&label$581,
			&&label$582,
			&&label$583,
			&&label$584,
			&&label$585,
			&&label$592,
			&&label$599,
			&&label$609,
			&&label$610,
			&&label$623,
			&&label$624,
			&&label$625,
			&&label$626,
			&&label$627,
			&&label$634,
			&&label$635,
			&&label$636,
			&&label$637,
			&&label$642,
			&&label$643,
			&&label$644,
			&&label$645,
			&&label$652,
			&&label$653,
			&&label$654,
			&&label$657,
			&&label$663,
			&&label$664,
			&&label$665,
			&&label$666,
			&&label$667,
			&&label$683,
			&&label$682,
			&&label$693,
			&&label$694,
			&&label$695,
			&&label$696,
			&&label$697,
			&&label$701,
			&&label$702,
			&&label$703,
			&&label$704,
			&&label$705,
			&&label$706,
			&&label$711,
			&&label$712,
			&&label$713,
			&&label$723,
			&&label$728,
			&&label$759,
			&&label$760,
			&&label$761,
			&&label$762,
			&&label$763,
		};
		if( TMP$359$2 > 73ull ) goto label$552;
		goto *tmp$881[TMP$359$2 - 0ull];
		label$552:;
	}
	label$551:;
}

static int64 PARSEOPTION( char* OPT$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$784:;
	{
		uint64 TMP$433$2;
		TMP$433$2 = (uint64)*(uint8*)OPT$1;
		goto label$787;
		label$788:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$790;
			{
				fb$result$1 = 0ll;
				goto label$785;
			}
			label$790:;
			label$789:;
			int32 vr$5 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"arch", 5ll );
			if( (int64)vr$5 != 0ll ) goto label$792;
			{
				fb$result$1 = 1ll;
				goto label$785;
			}
			label$792:;
			label$791:;
			int32 vr$7 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"asm", 4ll );
			if( (int64)vr$7 != 0ll ) goto label$794;
			{
				fb$result$1 = 2ll;
				goto label$785;
			}
			label$794:;
			label$793:;
		}
		goto label$786;
		label$795:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$797;
			{
				fb$result$1 = 3ll;
				goto label$785;
			}
			label$797:;
			label$796:;
			int32 vr$11 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"buildprefix", 12ll );
			if( (int64)vr$11 != 0ll ) goto label$799;
			{
				fb$result$1 = 4ll;
				goto label$785;
			}
			label$799:;
			label$798:;
		}
		goto label$786;
		label$800:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$802;
			{
				fb$result$1 = 5ll;
				goto label$785;
			}
			label$802:;
			label$801:;
		}
		goto label$786;
		label$803:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$805;
			{
				fb$result$1 = 6ll;
				goto label$785;
			}
			label$805:;
			label$804:;
		}
		goto label$786;
		label$806:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$808;
			{
				fb$result$1 = 7ll;
				goto label$785;
			}
			label$808:;
			label$807:;
			int32 vr$19 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"dll", 4ll );
			if( (int64)vr$19 != 0ll ) goto label$810;
			{
				fb$result$1 = 8ll;
				goto label$785;
			}
			label$810:;
			label$809:;
			int32 vr$21 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"dylib", 6ll );
			if( (int64)vr$21 != 0ll ) goto label$812;
			{
				fb$result$1 = 9ll;
				goto label$785;
			}
			label$812:;
			label$811:;
		}
		goto label$786;
		label$813:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$815;
			{
				fb$result$1 = 10ll;
				goto label$785;
			}
			label$815:;
			label$814:;
			int32 vr$25 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"ex", 3ll );
			if( (int64)vr$25 != 0ll ) goto label$817;
			{
				fb$result$1 = 20ll;
				goto label$785;
			}
			label$817:;
			label$816:;
			int32 vr$27 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"earray", 7ll );
			if( (int64)vr$27 != 0ll ) goto label$819;
			{
				fb$result$1 = 11ll;
				goto label$785;
			}
			label$819:;
			label$818:;
			int32 vr$29 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"earraydims", 11ll );
			if( (int64)vr$29 != 0ll ) goto label$821;
			{
				fb$result$1 = 12ll;
				goto label$785;
			}
			label$821:;
			label$820:;
			int32 vr$31 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"eassert", 8ll );
			if( (int64)vr$31 != 0ll ) goto label$823;
			{
				fb$result$1 = 13ll;
				goto label$785;
			}
			label$823:;
			label$822:;
			int32 vr$33 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"edebug", 7ll );
			if( (int64)vr$33 != 0ll ) goto label$825;
			{
				fb$result$1 = 14ll;
				goto label$785;
			}
			label$825:;
			label$824:;
			int32 vr$35 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"edebuginfo", 11ll );
			if( (int64)vr$35 != 0ll ) goto label$827;
			{
				fb$result$1 = 15ll;
				goto label$785;
			}
			label$827:;
			label$826:;
			int32 vr$37 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"elocation", 10ll );
			if( (int64)vr$37 != 0ll ) goto label$829;
			{
				fb$result$1 = 16ll;
				goto label$785;
			}
			label$829:;
			label$828:;
			int32 vr$39 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"enullptr", 9ll );
			if( (int64)vr$39 != 0ll ) goto label$831;
			{
				fb$result$1 = 17ll;
				goto label$785;
			}
			label$831:;
			label$830:;
			int32 vr$41 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"eunwind", 8ll );
			if( (int64)vr$41 != 0ll ) goto label$833;
			{
				fb$result$1 = 18ll;
				goto label$785;
			}
			label$833:;
			label$832:;
			int32 vr$43 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"entry", 6ll );
			if( (int64)vr$43 != 0ll ) goto label$835;
			{
				fb$result$1 = 19ll;
				goto label$785;
			}
			label$835:;
			label$834:;
			int32 vr$45 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"exx", 4ll );
			if( (int64)vr$45 != 0ll ) goto label$837;
			{
				fb$result$1 = 21ll;
				goto label$785;
			}
			label$837:;
			label$836:;
			int32 vr$47 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"export", 7ll );
			if( (int64)vr$47 != 0ll ) goto label$839;
			{
				fb$result$1 = 22ll;
				goto label$785;
			}
			label$839:;
			label$838:;
		}
		goto label$786;
		label$840:;
		{
			int32 vr$49 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"fbgfx", 6ll );
			if( (int64)vr$49 != 0ll ) goto label$842;
			{
				fb$result$1 = 23ll;
				goto label$785;
			}
			label$842:;
			label$841:;
			int32 vr$51 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"forcelang", 10ll );
			if( (int64)vr$51 != 0ll ) goto label$844;
			{
				fb$result$1 = 24ll;
				goto label$785;
			}
			label$844:;
			label$843:;
			int32 vr$53 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"fpmode", 7ll );
			if( (int64)vr$53 != 0ll ) goto label$846;
			{
				fb$result$1 = 25ll;
				goto label$785;
			}
			label$846:;
			label$845:;
			int32 vr$55 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"fpu", 4ll );
			if( (int64)vr$55 != 0ll ) goto label$848;
			{
				fb$result$1 = 26ll;
				goto label$785;
			}
			label$848:;
			label$847:;
		}
		goto label$786;
		label$849:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$851;
			{
				fb$result$1 = 27ll;
				goto label$785;
			}
			label$851:;
			label$850:;
			int32 vr$59 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"gen", 4ll );
			if( (int64)vr$59 != 0ll ) goto label$853;
			{
				fb$result$1 = 28ll;
				goto label$785;
			}
			label$853:;
			label$852:;
		}
		goto label$786;
		label$854:;
		{
			int32 vr$61 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"help", 5ll );
			if( (int64)vr$61 != 0ll ) goto label$856;
			{
				fb$result$1 = 29ll;
				goto label$785;
			}
			label$856:;
			label$855:;
		}
		goto label$786;
		label$857:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$859;
			{
				fb$result$1 = 30ll;
				goto label$785;
			}
			label$859:;
			label$858:;
			int32 vr$65 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"include", 8ll );
			if( (int64)vr$65 != 0ll ) goto label$861;
			{
				fb$result$1 = 31ll;
				goto label$785;
			}
			label$861:;
			label$860:;
		}
		goto label$786;
		label$862:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$864;
			{
				fb$result$1 = 32ll;
				goto label$785;
			}
			label$864:;
			label$863:;
			int32 vr$69 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"lang", 5ll );
			if( (int64)vr$69 != 0ll ) goto label$866;
			{
				fb$result$1 = 33ll;
				goto label$785;
			}
			label$866:;
			label$865:;
			int32 vr$71 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"lib", 4ll );
			if( (int64)vr$71 != 0ll ) goto label$868;
			{
				fb$result$1 = 34ll;
				goto label$785;
			}
			label$868:;
			label$867:;
		}
		goto label$786;
		label$869:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$871;
			{
				fb$result$1 = 35ll;
				goto label$785;
			}
			label$871:;
			label$870:;
			int32 vr$75 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"map", 4ll );
			if( (int64)vr$75 != 0ll ) goto label$873;
			{
				fb$result$1 = 36ll;
				goto label$785;
			}
			label$873:;
			label$872:;
			int32 vr$77 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"maxerr", 7ll );
			if( (int64)vr$77 != 0ll ) goto label$875;
			{
				fb$result$1 = 37ll;
				goto label$785;
			}
			label$875:;
			label$874:;
			int32 vr$79 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"mt", 3ll );
			if( (int64)vr$79 != 0ll ) goto label$877;
			{
				fb$result$1 = 38ll;
				goto label$785;
			}
			label$877:;
			label$876:;
		}
		goto label$786;
		label$878:;
		{
			int32 vr$81 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"noerrline", 10ll );
			if( (int64)vr$81 != 0ll ) goto label$880;
			{
				fb$result$1 = 40ll;
				goto label$785;
			}
			label$880:;
			label$879:;
			int32 vr$83 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"nodeflibs", 10ll );
			if( (int64)vr$83 != 0ll ) goto label$882;
			{
				fb$result$1 = 39ll;
				goto label$785;
			}
			label$882:;
			label$881:;
			int32 vr$85 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"nolib", 6ll );
			if( (int64)vr$85 != 0ll ) goto label$884;
			{
				fb$result$1 = 41ll;
				goto label$785;
			}
			label$884:;
			label$883:;
			int32 vr$87 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"noobjinfo", 10ll );
			if( (int64)vr$87 != 0ll ) goto label$886;
			{
				fb$result$1 = 42ll;
				goto label$785;
			}
			label$886:;
			label$885:;
			int32 vr$89 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"nostrip", 8ll );
			if( (int64)vr$89 != 0ll ) goto label$888;
			{
				fb$result$1 = 43ll;
				goto label$785;
			}
			label$888:;
			label$887:;
		}
		goto label$786;
		label$889:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$891;
			{
				fb$result$1 = 44ll;
				goto label$785;
			}
			label$891:;
			label$890:;
		}
		goto label$786;
		label$892:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$894;
			{
				fb$result$1 = 45ll;
				goto label$785;
			}
			label$894:;
			label$893:;
		}
		goto label$786;
		label$895:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$897;
			{
				fb$result$1 = 46ll;
				goto label$785;
			}
			label$897:;
			label$896:;
			int32 vr$97 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"pic", 4ll );
			if( (int64)vr$97 != 0ll ) goto label$899;
			{
				fb$result$1 = 47ll;
				goto label$785;
			}
			label$899:;
			label$898:;
			int32 vr$99 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"pp", 3ll );
			if( (int64)vr$99 != 0ll ) goto label$901;
			{
				fb$result$1 = 48ll;
				goto label$785;
			}
			label$901:;
			label$900:;
			int32 vr$101 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"prefix", 7ll );
			if( (int64)vr$101 != 0ll ) goto label$903;
			{
				fb$result$1 = 49ll;
				goto label$785;
			}
			label$903:;
			label$902:;
			int32 vr$103 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"print", 6ll );
			if( (int64)vr$103 != 0ll ) goto label$905;
			{
				fb$result$1 = 50ll;
				goto label$785;
			}
			label$905:;
			label$904:;
			int32 vr$105 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"profile", 8ll );
			if( (int64)vr$105 != 0ll ) goto label$907;
			{
				fb$result$1 = 52ll;
				goto label$785;
			}
			label$907:;
			label$906:;
			int32 vr$107 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"profgen", 8ll );
			if( (int64)vr$107 != 0ll ) goto label$909;
			{
				fb$result$1 = 51ll;
				goto label$785;
			}
			label$909:;
			label$908:;
		}
		goto label$786;
		label$910:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$912;
			{
				fb$result$1 = 53ll;
				goto label$785;
			}
			label$912:;
			label$911:;
			int32 vr$111 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"rr", 3ll );
			if( (int64)vr$111 != 0ll ) goto label$914;
			{
				fb$result$1 = 55ll;
				goto label$785;
			}
			label$914:;
			label$913:;
		}
		goto label$786;
		label$915:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$917;
			{
				fb$result$1 = 54ll;
				goto label$785;
			}
			label$917:;
			label$916:;
			int32 vr$115 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"RR", 3ll );
			if( (int64)vr$115 != 0ll ) goto label$919;
			{
				fb$result$1 = 56ll;
				goto label$785;
			}
			label$919:;
			label$918:;
		}
		goto label$786;
		label$920:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$922;
			{
				fb$result$1 = 57ll;
				goto label$785;
			}
			label$922:;
			label$921:;
			int32 vr$119 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"showincludes", 13ll );
			if( (int64)vr$119 != 0ll ) goto label$924;
			{
				fb$result$1 = 58ll;
				goto label$785;
			}
			label$924:;
			label$923:;
			int32 vr$121 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"static", 7ll );
			if( (int64)vr$121 != 0ll ) goto label$926;
			{
				fb$result$1 = 59ll;
				goto label$785;
			}
			label$926:;
			label$925:;
			int32 vr$123 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"strip", 6ll );
			if( (int64)vr$123 != 0ll ) goto label$928;
			{
				fb$result$1 = 60ll;
				goto label$785;
			}
			label$928:;
			label$927:;
			int32 vr$125 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"sysroot", 8ll );
			if( (int64)vr$125 != 0ll ) goto label$930;
			{
				fb$result$1 = 61ll;
				goto label$785;
			}
			label$930:;
			label$929:;
		}
		goto label$786;
		label$931:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$933;
			{
				fb$result$1 = 62ll;
				goto label$785;
			}
			label$933:;
			label$932:;
			int32 vr$129 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"target", 7ll );
			if( (int64)vr$129 != 0ll ) goto label$935;
			{
				fb$result$1 = 63ll;
				goto label$785;
			}
			label$935:;
			label$934:;
			int32 vr$131 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"title", 6ll );
			if( (int64)vr$131 != 0ll ) goto label$937;
			{
				fb$result$1 = 64ll;
				goto label$785;
			}
			label$937:;
			label$936:;
		}
		goto label$786;
		label$938:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$940;
			{
				fb$result$1 = 65ll;
				goto label$785;
			}
			label$940:;
			label$939:;
			int32 vr$135 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"vec", 4ll );
			if( (int64)vr$135 != 0ll ) goto label$942;
			{
				fb$result$1 = 66ll;
				goto label$785;
			}
			label$942:;
			label$941:;
			int32 vr$137 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"version", 8ll );
			if( (int64)vr$137 != 0ll ) goto label$944;
			{
				fb$result$1 = 67ll;
				goto label$785;
			}
			label$944:;
			label$943:;
		}
		goto label$786;
		label$945:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$947;
			{
				fb$result$1 = 68ll;
				goto label$785;
			}
			label$947:;
			label$946:;
		}
		goto label$786;
		label$948:;
		{
			int32 vr$141 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"Wa", 3ll );
			if( (int64)vr$141 != 0ll ) goto label$950;
			{
				fb$result$1 = 69ll;
				goto label$785;
			}
			label$950:;
			label$949:;
			int32 vr$143 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"Wl", 3ll );
			if( (int64)vr$143 != 0ll ) goto label$952;
			{
				fb$result$1 = 71ll;
				goto label$785;
			}
			label$952:;
			label$951:;
			int32 vr$145 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"Wc", 3ll );
			if( (int64)vr$145 != 0ll ) goto label$954;
			{
				fb$result$1 = 70ll;
				goto label$785;
			}
			label$954:;
			label$953:;
		}
		goto label$786;
		label$955:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$957;
			{
				fb$result$1 = 72ll;
				goto label$785;
			}
			label$957:;
			label$956:;
		}
		goto label$786;
		label$958:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$960;
			{
				fb$result$1 = 73ll;
				goto label$785;
			}
			label$960:;
			label$959:;
		}
		goto label$786;
		label$961:;
		{
			int32 vr$151 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"-version", 9ll );
			if( (int64)vr$151 != 0ll ) goto label$963;
			{
				fb$result$1 = 67ll;
				goto label$785;
			}
			label$963:;
			label$962:;
			int32 vr$153 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"-help", 6ll );
			if( (int64)vr$153 != 0ll ) goto label$965;
			{
				fb$result$1 = 29ll;
				goto label$785;
			}
			label$965:;
			label$964:;
		}
		goto label$786;
		label$787:;
		static const void* tmp$882[78ll] = {
			&&label$961,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$803,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$892,
			&&label$786,
			&&label$786,
			&&label$915,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$948,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$786,
			&&label$788,
			&&label$795,
			&&label$800,
			&&label$806,
			&&label$813,
			&&label$840,
			&&label$849,
			&&label$854,
			&&label$857,
			&&label$786,
			&&label$786,
			&&label$862,
			&&label$869,
			&&label$878,
			&&label$889,
			&&label$895,
			&&label$786,
			&&label$910,
			&&label$920,
			&&label$931,
			&&label$786,
			&&label$938,
			&&label$945,
			&&label$955,
			&&label$786,
			&&label$958,
		};
		if( (TMP$433$2 - 45ull) > 77ull ) goto label$786;
		goto *tmp$882[TMP$433$2 - 45ull];
		label$786:;
	}
	fb$result$1 = -1ll;
	goto label$785;
	label$785:;
	return fb$result$1;
}

static void HANDLEARG( FBSTRING* ARG$1, int64 IS_SOURCE$1, int64 IS_FILE$1 )
{
	label$966:;
	if( *(int64*)&FBC$ < 0ll ) goto label$969;
	{
		int64 vr$0 = fb_StrLen( (void*)ARG$1, -1ll );
		if( vr$0 != 0ll ) goto label$971;
		{
			HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
		}
		label$971:;
		label$970:;
		HANDLEOPT( *(int64*)&FBC$, ARG$1, IS_SOURCE$1 );
		*(int64*)&FBC$ = -1ll;
		goto label$967;
	}
	label$969:;
	label$968:;
	int64 vr$1 = fb_StrLen( (void*)ARG$1, -1ll );
	if( vr$1 != 0ll ) goto label$973;
	{
		goto label$967;
	}
	label$973:;
	label$972:;
	{
		uint8 TMP$511$2;
		TMP$511$2 = *(uint8*)*(char**)ARG$1;
		if( (uint64)(int64)TMP$511$2 != 45ull ) goto label$975;
		label$976:;
		{
			char* OPT$3;
			OPT$3 = (char*)((uint8*)*(char**)ARG$1 + 1ll);
			if( (int64)*(uint8*)OPT$3 != 0ll ) goto label$978;
			{
				HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
			}
			label$978:;
			label$977:;
			int64 OPTID$3;
			int64 vr$9 = PARSEOPTION( OPT$3 );
			OPTID$3 = vr$9;
			if( OPTID$3 >= 0ll ) goto label$980;
			{
				HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
			}
			label$980:;
			label$979:;
			if( IS_SOURCE$1 == 0ll ) goto label$982;
			{
				if( (boolean)(*(boolean*)(((int64)(struct $18FBC_CMDLINE_OPTION*)CMDLINEOPTIONTB$ + (OPTID$3 << (4ll & 63ll))) + 1ll) == 0ll) == (boolean)0ll ) goto label$984;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$984:;
				label$983:;
			}
			label$982:;
			label$981:;
			if( *(boolean*)((int64)(struct $18FBC_CMDLINE_OPTION*)CMDLINEOPTIONTB$ + (OPTID$3 << (4ll & 63ll))) == (boolean)0ll ) goto label$986;
			{
				*(int64*)&FBC$ = OPTID$3;
			}
			goto label$985;
			label$986:;
			{
				HANDLEOPT( OPTID$3, ARG$1, IS_SOURCE$1 );
			}
			label$985:;
			if( IS_SOURCE$1 == 0ll ) goto label$988;
			{
				if( *(boolean*)(((int64)(struct $18FBC_CMDLINE_OPTION*)CMDLINEOPTIONTB$ + (OPTID$3 << (4ll & 63ll))) + 2ll) == (boolean)0ll ) goto label$990;
				{
					FBRESTARTBEGINREQUEST( 2ll );
				}
				label$990:;
				label$989:;
				if( *(int64*)(((int64)(struct $18FBC_CMDLINE_OPTION*)CMDLINEOPTIONTB$ + (OPTID$3 << (4ll & 63ll))) + 8ll) == 0ll ) goto label$992;
				{
					FBRESTARTBEGINREQUEST( 8ll );
				}
				label$992:;
				label$991:;
			}
			label$988:;
			label$987:;
		}
		goto label$974;
		label$975:;
		if( (uint64)(int64)TMP$511$2 != 64ull ) goto label$993;
		label$994:;
		{
			static int64 RECLEVEL$3 = 0ll;
			if( RECLEVEL$3 <= 128ll ) goto label$996;
			{
				ERRREPORTEX( 27ll, (char*)*(char**)ARG$1, -1ll, 1ll, (char*)0ull );
				FBCEND( 1ll );
			}
			label$996:;
			label$995:;
			int64 vr$17 = fb_StrLen( (void*)ARG$1, -1ll );
			FBSTRING* vr$19 = fb_RIGHT( (FBSTRING*)ARG$1, vr$17 + -1ll );
			fb_StrAssign( (void*)ARG$1, -1ll, (void*)vr$19, -1ll, 0 );
			int64 vr$20 = fb_StrLen( (void*)ARG$1, -1ll );
			if( vr$20 != 0ll ) goto label$998;
			{
				HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
			}
			label$998:;
			label$997:;
			RECLEVEL$3 = RECLEVEL$3 + 1ll;
			PARSEARGSFROMFILE( ARG$1, IS_SOURCE$1 );
			RECLEVEL$3 = RECLEVEL$3 + -1ll;
		}
		goto label$974;
		label$993:;
		{
			FBSTRING EXT$3;
			FBSTRING* vr$24 = HGETFILEEXT( (char*)*(char**)ARG$1 );
			fb_StrInit( (void*)&EXT$3, -1ll, (void*)vr$24, -1ll, 0 );
			{
				int32 vr$27 = fb_StrCompare( (void*)&EXT$3, -1ll, (void*)"bas", 4ll );
				if( (int64)vr$27 != 0ll ) goto label$1001;
				label$1002:;
				{
					HADDBAS( ARG$1 );
				}
				goto label$1000;
				label$1001:;
				int32 vr$30 = fb_StrCompare( (void*)&EXT$3, -1ll, (void*)"o", 2ll );
				if( (int64)vr$30 != 0ll ) goto label$1003;
				label$1004:;
				{
					FBCADDOBJ( ARG$1 );
				}
				goto label$1000;
				label$1003:;
				int32 vr$33 = fb_StrCompare( (void*)&EXT$3, -1ll, (void*)"a", 2ll );
				if( (int64)vr$33 != 0ll ) goto label$1005;
				label$1006:;
				{
					STRLISTAPPEND( (struct $5TLIST*)((uint8*)&FBC$ + 464ll), ARG$1 );
				}
				goto label$1000;
				label$1005:;
				int32 vr$37 = fb_StrCompare( (void*)&EXT$3, -1ll, (void*)"rc", 3ll );
				if( (int64)vr$37 == 0ll ) goto label$1008;
				label$1009:;
				int32 vr$40 = fb_StrCompare( (void*)&EXT$3, -1ll, (void*)"res", 4ll );
				if( (int64)vr$40 != 0ll ) goto label$1007;
				label$1008:;
				{
					void* vr$43 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&FBC$ + 208ll) );
					HSETIOFILE( (struct $9FBCIOFILE*)vr$43, ARG$1, -1ll );
				}
				goto label$1000;
				label$1007:;
				int32 vr$45 = fb_StrCompare( (void*)&EXT$3, -1ll, (void*)"xpm", 4ll );
				if( (int64)vr$45 != 0ll ) goto label$1010;
				label$1011:;
				{
					int64 vr$48 = fb_StrLen( (void*)((uint8*)&FBC$ + 272ll), -1ll );
					if( vr$48 <= 0ll ) goto label$1013;
					{
						HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
					}
					label$1013:;
					label$1012:;
					HSETIOFILE( (struct $9FBCIOFILE*)((uint8*)&FBC$ + 272ll), ARG$1, -1ll );
				}
				goto label$1000;
				label$1010:;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$1014:;
				label$1000:;
			}
			fb_StrDelete( (FBSTRING*)&EXT$3 );
		}
		label$999:;
		label$974:;
	}
	label$967:;
}

static void PARSEARGSFROMFILE( FBSTRING* FILENAME$1, int64 IS_SOURCE$1 )
{
	label$1035:;
	int64 F$1;
	int32 vr$0 = fb_FileFree(  );
	F$1 = (int64)vr$0;
	int32 vr$3 = fb_FileOpen( (FBSTRING*)FILENAME$1, 2u, 0u, 0u, (int32)F$1, 0 );
	if( (int64)vr$3 == 0ll ) goto label$1038;
	{
		ERRREPORTEX( 26ll, (char*)*(char**)FILENAME$1, -1ll, 1ll, (char*)0ull );
		FBCEND( 1ll );
	}
	label$1038:;
	label$1037:;
	FBSTRING ARGS$1;
	__builtin_memset( &ARGS$1, 0, 24ll );
	label$1039:;
	int32 vr$8 = fb_FileEof( (int32)F$1 );
	if( (int64)vr$8 != 0ll ) goto label$1040;
	{
		fb_FileLineInput( (int32)F$1, (void*)&ARGS$1, -1ll, 0 );
		FBSTRING* vr$13 = fb_TRIM( (FBSTRING*)&ARGS$1 );
		fb_StrAssign( (void*)&ARGS$1, -1ll, (void*)vr$13, -1ll, 0 );
		FBCPARSEARGSFROMSTRING( (char*)*(char**)&ARGS$1, IS_SOURCE$1, -1ll );
	}
	goto label$1039;
	label$1040:;
	fb_FileClose( (int32)F$1 );
	fb_StrDelete( (FBSTRING*)&ARGS$1 );
	label$1036:;
}

static int64 HTARGETNEEDSPIC( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1041:;
	fb$result$1 = 0ll;
	int64 vr$1 = FBGETCPUFAMILY(  );
	if( vr$1 == 0ll ) goto label$1044;
	{
		{
			uint64 TMP$520$3;
			int64 vr$2 = FBGETOPTION( 3ll );
			TMP$520$3 = (uint64)vr$2;
			goto label$1046;
			label$1047:;
			{
				fb$result$1 = -1ll;
			}
			goto label$1045;
			label$1046:;
			static const void* tmp$883[10ll] = {
				&&label$1047,
				&&label$1047,
				&&label$1045,
				&&label$1045,
				&&label$1047,
				&&label$1047,
				&&label$1047,
				&&label$1047,
				&&label$1045,
				&&label$1047,
			};
			if( (TMP$520$3 - 2ull) > 9ull ) goto label$1045;
			goto *tmp$883[TMP$520$3 - 2ull];
			label$1045:;
		}
	}
	goto label$1043;
	label$1044:;
	{
		int64 vr$3 = FBGETOPTION( 3ll );
		if( vr$3 != 3ll ) goto label$1049;
		{
			fb$result$1 = -1ll;
		}
		label$1049:;
		label$1048:;
	}
	label$1043:;
	label$1042:;
	return fb$result$1;
}

static void HPARSEARGS( int64 ARGC$1, char** ARGV$1 )
{
	label$1050:;
	*(int64*)&FBC$ = -1ll;
	FBSTRING ARG$1;
	__builtin_memset( &ARG$1, 0, 24ll );
	{
		int64 I$2;
		I$2 = 1ll;
		int64 TMP$521$2;
		TMP$521$2 = ARGC$1 + -1ll;
		goto label$1052;
		label$1055:;
		{
			fb_StrAssign( (void*)&ARG$1, -1ll, *(void**)((uint8*)ARGV$1 + (I$2 << (3ll & 63ll))), 0ll, 0 );
			HANDLEARG( &ARG$1, 0ll, 0ll );
		}
		label$1053:;
		I$2 = I$2 + 1ll;
		label$1052:;
		if( I$2 <= TMP$521$2 ) goto label$1055;
		label$1054:;
	}
	if( *(int64*)&FBC$ < 0ll ) goto label$1057;
	{
		FBSTRING TMP$522$2;
		__builtin_memset( &TMP$522$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$522$2, -1ll, *(void**)((uint8*)((uint8*)ARGV$1 + (ARGC$1 << (3ll & 63ll))) + -8ll), 0ll, 0 );
		HFATALINVALIDOPTION( &TMP$522$2, 0ll );
		fb_StrDelete( (FBSTRING*)&TMP$522$2 );
	}
	label$1057:;
	label$1056:;
	fb_StrDelete( (FBSTRING*)&ARG$1 );
	label$1051:;
}

static void HCHECKARGS( void )
{
	label$1058:;
	HCHECKWAITINGOBJFILE(  );
	{
		int64 TMP$523$2;
		int64 vr$0 = FBGETOPTION( 5ll );
		TMP$523$2 = vr$0;
		if( TMP$523$2 != 0ll ) goto label$1061;
		label$1062:;
		{
			int64 vr$1 = FBGETOPTION( 7ll );
			if( vr$1 < 1ll ) goto label$1064;
			{
				ERRREPORTEX( 284ll, (char*)"", -1ll, 1ll, (char*)0ull );
				FBCEND( 1ll );
			}
			label$1064:;
			label$1063:;
		}
		goto label$1060;
		label$1061:;
		if( TMP$523$2 != 1ll ) goto label$1065;
		label$1066:;
		{
			int64 vr$2 = FBGETCPUFAMILY(  );
			int64 vr$4 = FBGETCPUFAMILY(  );
			if( ((int64)-(vr$2 != 0ll) & (int64)-(vr$4 != 1ll)) == 0ll ) goto label$1068;
			{
				ERRREPORTEX( 330ll, (char*)"", -1ll, 1ll, (char*)0ull );
				FBCEND( 1ll );
			}
			label$1068:;
			label$1067:;
		}
		goto label$1060;
		label$1065:;
		if( TMP$523$2 != 2ll ) goto label$1069;
		label$1070:;
		{
			int64 vr$7 = FBGETCPUFAMILY(  );
			int64 vr$9 = FBGETCPUFAMILY(  );
			if( ((int64)-(vr$7 != 2ll) & (int64)-(vr$9 != 3ll)) == 0ll ) goto label$1072;
			{
				ERRREPORTEX( 331ll, (char*)"", -1ll, 1ll, (char*)0ull );
				FBCEND( 1ll );
			}
			label$1072:;
			label$1071:;
		}
		label$1069:;
		label$1060:;
	}
	if( *(int64*)((uint8*)&FBC$ + 48ll) < 0ll ) goto label$1074;
	{
		FBSETOPTION( 4ll, *(int64*)((uint8*)&FBC$ + 48ll) );
	}
	label$1074:;
	label$1073:;
	int64 vr$12 = FBGETOPTION( 5ll );
	int64 vr$14 = FBGETOPTION( 4ll );
	if( ((int64)-(vr$12 == 2ll) & (int64)-(vr$14 < 17ll)) == 0ll ) goto label$1076;
	{
		FBSETOPTION( 4ll, 17ll );
	}
	label$1076:;
	label$1075:;
	int64 vr$17 = FBGETOPTION( 3ll );
	int64 vr$19 = FBGETCPUFAMILY(  );
	if( ((int64)-(vr$17 == 4ll) & (int64)-(vr$19 != 0ll)) == 0ll ) goto label$1078;
	{
		char* vr$22 = FBGETFBCARCH(  );
		ERRREPORTEX( 82ll, (char*)vr$22, -1ll, 1ll, (char*)0ull );
		FBCEND( 1ll );
	}
	label$1078:;
	label$1077:;
	int64 vr$23 = FBGETOPTION( 0ll );
	int64 vr$25 = FBGETOPTION( 3ll );
	if( ((int64)-(vr$23 == 2ll) | (int64)-(vr$25 == 3ll)) == 0ll ) goto label$1080;
	{
		int64 vr$28 = HTARGETNEEDSPIC(  );
		if( vr$28 == 0ll ) goto label$1082;
		{
			FBSETOPTION( 38ll, -1ll );
		}
		label$1082:;
		label$1081:;
	}
	label$1080:;
	label$1079:;
	int64 vr$29 = FBGETOPTION( 38ll );
	if( vr$29 == 0ll ) goto label$1084;
	{
		int64 vr$30 = HTARGETNEEDSPIC(  );
		if( vr$30 != 0ll ) goto label$1086;
		{
			ERRREPORTEX( 86ll, (char*)"", -1ll, 1ll, (char*)0ull );
		}
		label$1086:;
		label$1085:;
	}
	label$1084:;
	label$1083:;
	int64 vr$31 = FBGETCPUFAMILY(  );
	int64 vr$33 = FBGETOPTION( 3ll );
	if( ((int64)-(vr$31 == 0ll) & (int64)-(vr$33 != 10ll)) == 0ll ) goto label$1088;
	{
		FBSETOPTION( 2ll, 0ll );
	}
	goto label$1087;
	label$1088:;
	{
		FBSETOPTION( 2ll, 1ll );
	}
	label$1087:;
	int64 vr$36 = FBGETOPTION( 2ll );
	int64 vr$38 = FBGETOPTION( 38ll );
	if( ((int64)-(vr$36 == 0ll) & vr$38) == 0ll ) goto label$1090;
	{
		FBSETOPTION( 2ll, 1ll );
	}
	label$1090:;
	label$1089:;
	if( *(int64*)((uint8*)&FBC$ + 40ll) < 0ll ) goto label$1092;
	{
		FBSETOPTION( 2ll, *(int64*)((uint8*)&FBC$ + 40ll) );
	}
	label$1092:;
	label$1091:;
	int64 vr$40 = FBGETOPTION( 2ll );
	int64 vr$42 = FBGETCPUFAMILY(  );
	int64 vr$45 = FBGETOPTION( 2ll );
	int64 vr$47 = FBGETCPUFAMILY(  );
	if( (((int64)-(vr$40 == 0ll) & (int64)-(vr$42 != 0ll)) | ((int64)-(vr$45 == 4ll) & (int64)-(vr$47 != 1ll))) == 0ll ) goto label$1094;
	{
		char* vr$51 = FBGETFBCARCH(  );
		ERRREPORTEX( 83ll, (char*)vr$51, -1ll, 1ll, (char*)0ull );
		FBCEND( 1ll );
	}
	label$1094:;
	label$1093:;
	int64 vr$52 = FBGETOPTION( 2ll );
	int64 vr$54 = FBGETOPTION( 38ll );
	if( ((int64)-(vr$52 == 0ll) & vr$54) == 0ll ) goto label$1096;
	{
		ERRREPORTEX( 85ll, (char*)"", -1ll, 1ll, (char*)0ull );
		FBCEND( 1ll );
	}
	label$1096:;
	label$1095:;
	{
		uint64 TMP$524$2;
		int64 vr$56 = FBGETOPTION( 3ll );
		TMP$524$2 = (uint64)vr$56;
		goto label$1098;
		label$1099:;
		{
		}
		goto label$1097;
		label$1100:;
		{
			struct $9FBCIOFILE* RC$3;
			void* vr$58 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 208ll) );
			RC$3 = (struct $9FBCIOFILE*)vr$58;
			if( RC$3 == (struct $9FBCIOFILE*)0ull ) goto label$1102;
			{
				ERRREPORTEX( 291ll, (char*)*(char**)RC$3, -1ll, 1ll, (char*)0ull );
				FBCEND( 1ll );
			}
			label$1102:;
			label$1101:;
		}
		goto label$1097;
		label$1098:;
		static const void* tmp$884[6ll] = {
			&&label$1099,
			&&label$1099,
			&&label$1100,
			&&label$1100,
			&&label$1100,
			&&label$1099,
		};
		if( TMP$524$2 > 5ull ) goto label$1100;
		goto *tmp$884[TMP$524$2 - 0ull];
		label$1097:;
	}
	{
		uint64 TMP$525$2;
		int64 vr$60 = FBGETOPTION( 3ll );
		TMP$525$2 = (uint64)vr$60;
		goto label$1104;
		label$1105:;
		{
		}
		goto label$1103;
		label$1106:;
		{
			int64 vr$62 = fb_StrLen( (void*)((uint8*)&FBC$ + 272ll), -1ll );
			if( vr$62 <= 0ll ) goto label$1108;
			{
				ERRREPORTEX( 291ll, (char*)*(char**)((uint8*)&FBC$ + 272ll), -1ll, 1ll, (char*)0ull );
				FBCEND( 1ll );
			}
			label$1108:;
			label$1107:;
		}
		goto label$1103;
		label$1104:;
		static const void* tmp$885[10ll] = {
			&&label$1105,
			&&label$1106,
			&&label$1106,
			&&label$1106,
			&&label$1105,
			&&label$1105,
			&&label$1105,
			&&label$1105,
			&&label$1105,
			&&label$1105,
		};
		if( (TMP$525$2 - 2ull) > 9ull ) goto label$1106;
		goto *tmp$885[TMP$525$2 - 2ull];
		label$1103:;
	}
	int64 vr$63 = FBGETOPTION( 3ll );
	int64 vr$65 = FBGETOPTION( 2ll );
	if( ((int64)-(vr$63 == 10ll) & (int64)-(vr$65 != 0ll)) == 0ll ) goto label$1110;
	{
		FBSETOPTION( 9ll, 1ll );
	}
	label$1110:;
	label$1109:;
	if( *(int64*)((uint8*)&FBC$ + 64ll) < 0ll ) goto label$1112;
	{
		{
			int64 TMP$526$3;
			int64 vr$68 = FBGETCPUFAMILY(  );
			TMP$526$3 = vr$68;
			if( TMP$526$3 == 0ll ) goto label$1115;
			label$1116:;
			if( TMP$526$3 != 1ll ) goto label$1114;
			label$1115:;
			{
			}
			goto label$1113;
			label$1114:;
			{
				FBSTRING TMP$527$4;
				__builtin_memset( &TMP$527$4, 0, 24ll );
				FBSTRING* vr$70 = FBGETTARGETID(  );
				fb_StrAssign( (void*)&TMP$527$4, -1ll, (void*)vr$70, -1ll, 0 );
				ERRREPORTEX( 319ll, (char*)*(char**)&TMP$527$4, -1ll, 1ll, (char*)0ull );
				fb_StrDelete( (FBSTRING*)&TMP$527$4 );
			}
			label$1117:;
			label$1113:;
		}
		{
			int64 TMP$528$3;
			int64 vr$73 = FBGETOPTION( 2ll );
			TMP$528$3 = vr$73;
			if( TMP$528$3 == 0ll ) goto label$1120;
			label$1121:;
			if( TMP$528$3 != 4ll ) goto label$1119;
			label$1120:;
			{
				if( *(int64*)((uint8*)&FBC$ + 64ll) == 0ll ) goto label$1123;
				{
					ERRREPORTEX( 84ll, (char*)"", -1ll, 1ll, (char*)0ull );
				}
				label$1123:;
				label$1122:;
			}
			label$1119:;
			label$1118:;
		}
		FBSETOPTION( 9ll, *(int64*)((uint8*)&FBC$ + 64ll) );
	}
	label$1112:;
	label$1111:;
	FBSETOPTION( 39ll, -1ll );
	label$1059:;
}

static void FBCDETERMINEPREFIX( void )
{
	label$1124:;
	int64 vr$1 = fb_StrLen( (void*)((uint8*)&FBC$ + 2776ll), 261ll );
	if( vr$1 != 0ll ) goto label$1127;
	{
		FBSTRING TMP$529$2;
		FBSTRING TMP$530$2;
		FBSTRING TMP$533$2;
		__builtin_memset( &TMP$529$2, 0, 24ll );
		FBSTRING* vr$3 = fb_ExePath(  );
		fb_StrAssign( (void*)&TMP$529$2, -1ll, (void*)vr$3, -1ll, 0 );
		FBSTRING* vr$6 = PATHSTRIPDIV( &TMP$529$2 );
		__builtin_memset( &TMP$530$2, 0, 24ll );
		FBSTRING* vr$9 = fb_StrConcat( &TMP$530$2, (void*)vr$6, -1ll, (void*)"/", 2ll );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 2776ll), 261ll, (void*)vr$9, -1ll, 0 );
		fb_StrDelete( (FBSTRING*)&TMP$529$2 );
		__builtin_memset( &TMP$533$2, 0, 24ll );
		FBSTRING* vr$15 = fb_StrConcat( &TMP$533$2, (void*)((uint8*)&FBC$ + 2776ll), 261ll, (void*)"../", 4ll );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 2776ll), 261ll, (void*)vr$15, -1ll, 0 );
	}
	goto label$1126;
	label$1127:;
	{
		FBSTRING TMP$534$2;
		FBSTRING TMP$535$2;
		__builtin_memset( &TMP$534$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$534$2, -1ll, (void*)((uint8*)&FBC$ + 2776ll), 261ll, 0 );
		FBSTRING* vr$21 = PATHSTRIPDIV( &TMP$534$2 );
		__builtin_memset( &TMP$535$2, 0, 24ll );
		FBSTRING* vr$24 = fb_StrConcat( &TMP$535$2, (void*)vr$21, -1ll, (void*)"/", 2ll );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 2776ll), 261ll, (void*)vr$24, -1ll, 0 );
		fb_StrDelete( (FBSTRING*)&TMP$534$2 );
	}
	label$1126:;
	label$1125:;
}

static void FBCSETUPCOMPILERPATHS( void )
{
	FBSTRING TMP$544$1;
	FBSTRING TMP$545$1;
	FBSTRING TMP$546$1;
	FBSTRING TMP$547$1;
	FBSTRING TMP$548$1;
	FBSTRING TMP$549$1;
	FBSTRING TMP$550$1;
	FBSTRING TMP$551$1;
	label$1128:;
	FBSTRING TARGETID$1;
	FBSTRING* vr$0 = FBGETTARGETID(  );
	fb_StrInit( (void*)&TARGETID$1, -1ll, (void*)vr$0, -1ll, 0 );
	FBSTRING FBNAME$1;
	__builtin_memset( &FBNAME$1, 0, 24ll );
	fb_StrAssign( (void*)&FBNAME$1, -1ll, (void*)"freebasic", 10ll, 0 );
	FBSTRING LIBDIRNAME$1;
	fb_StrInit( (void*)&LIBDIRNAME$1, -1ll, (void*)"lib", 4ll, 0 );
	int64 vr$6 = fb_StrLen( (void*)((uint8*)&FBC$ + 3820ll), 261ll );
	if( vr$6 <= 0ll ) goto label$1131;
	{
		FBSTRING TMP$538$2;
		FBSTRING TMP$539$2;
		FBSTRING TMP$540$2;
		__builtin_memset( &TMP$538$2, 0, 24ll );
		FBSTRING* vr$11 = fb_StrConcat( &TMP$538$2, (void*)((uint8*)&FBC$ + 2776ll), 261ll, (void*)"bin", 4ll );
		__builtin_memset( &TMP$539$2, 0, 24ll );
		FBSTRING* vr$14 = fb_StrConcat( &TMP$539$2, (void*)vr$11, -1ll, (void*)"/", 2ll );
		__builtin_memset( &TMP$540$2, 0, 24ll );
		FBSTRING* vr$17 = fb_StrConcat( &TMP$540$2, (void*)vr$14, -1ll, (void*)((uint8*)&FBC$ + 3820ll), 261ll );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 3037ll), 261ll, (void*)vr$17, -1ll, 0 );
	}
	goto label$1130;
	label$1131:;
	{
		FBSTRING TMP$541$2;
		FBSTRING TMP$542$2;
		FBSTRING TMP$543$2;
		__builtin_memset( &TMP$541$2, 0, 24ll );
		FBSTRING* vr$23 = fb_StrConcat( &TMP$541$2, (void*)((uint8*)&FBC$ + 2776ll), 261ll, (void*)"bin", 4ll );
		__builtin_memset( &TMP$542$2, 0, 24ll );
		FBSTRING* vr$26 = fb_StrConcat( &TMP$542$2, (void*)vr$23, -1ll, (void*)"/", 2ll );
		__builtin_memset( &TMP$543$2, 0, 24ll );
		FBSTRING* vr$29 = fb_StrConcat( &TMP$543$2, (void*)vr$26, -1ll, (void*)((uint8*)&FBC$ + 2225ll), 129ll );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 3037ll), 261ll, (void*)vr$29, -1ll, 0 );
	}
	label$1130:;
	__builtin_memset( &TMP$544$1, 0, 24ll );
	FBSTRING* vr$35 = fb_StrConcat( &TMP$544$1, (void*)((uint8*)&FBC$ + 2776ll), 261ll, (void*)"include", 8ll );
	__builtin_memset( &TMP$545$1, 0, 24ll );
	FBSTRING* vr$38 = fb_StrConcat( &TMP$545$1, (void*)vr$35, -1ll, (void*)"/", 2ll );
	__builtin_memset( &TMP$546$1, 0, 24ll );
	FBSTRING* vr$41 = fb_StrConcat( &TMP$546$1, (void*)vr$38, -1ll, (void*)&FBNAME$1, -1ll );
	fb_StrAssign( (void*)((uint8*)&FBC$ + 3298ll), 261ll, (void*)vr$41, -1ll, 0 );
	__builtin_memset( &TMP$547$1, 0, 24ll );
	FBSTRING* vr$49 = fb_StrConcat( &TMP$547$1, (void*)((uint8*)&FBC$ + 2776ll), 261ll, (void*)&LIBDIRNAME$1, -1ll );
	__builtin_memset( &TMP$548$1, 0, 24ll );
	FBSTRING* vr$52 = fb_StrConcat( &TMP$548$1, (void*)vr$49, -1ll, (void*)"/", 2ll );
	__builtin_memset( &TMP$549$1, 0, 24ll );
	FBSTRING* vr$55 = fb_StrConcat( &TMP$549$1, (void*)vr$52, -1ll, (void*)&FBNAME$1, -1ll );
	__builtin_memset( &TMP$550$1, 0, 24ll );
	FBSTRING* vr$58 = fb_StrConcat( &TMP$550$1, (void*)vr$55, -1ll, (void*)"/", 2ll );
	__builtin_memset( &TMP$551$1, 0, 24ll );
	FBSTRING* vr$61 = fb_StrConcat( &TMP$551$1, (void*)vr$58, -1ll, (void*)&TARGETID$1, -1ll );
	fb_StrAssign( (void*)((uint8*)&FBC$ + 3559ll), 261ll, (void*)vr$61, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&LIBDIRNAME$1 );
	fb_StrDelete( (FBSTRING*)&FBNAME$1 );
	fb_StrDelete( (FBSTRING*)&TARGETID$1 );
	label$1129:;
}

static void FBCPRINTTARGETINFO( void )
{
	FBSTRING TMP$553$1;
	FBSTRING TMP$554$1;
	label$1132:;
	FBSTRING S$1;
	FBSTRING* vr$0 = FBGETTARGETID(  );
	fb_StrInit( (void*)&S$1, -1ll, (void*)vr$0, -1ll, 0 );
	char* vr$2 = FBGETFBCARCH(  );
	__builtin_memset( &TMP$553$1, 0, 24ll );
	FBSTRING* vr$5 = fb_StrConcat( &TMP$553$1, (void*)", ", 3ll, (void*)vr$2, 0ll );
	__builtin_memset( &TMP$554$1, 0, 24ll );
	FBSTRING* vr$9 = fb_StrConcat( &TMP$554$1, (void*)&S$1, -1ll, (void*)vr$5, -1ll );
	fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$9, -1ll, 0 );
	fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)", ", 3ll, 0 );
	int64 vr$12 = FBGETBITS(  );
	FBSTRING* vr$13 = fb_LongintToStr( vr$12 );
	fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)vr$13, -1ll, 0 );
	fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"bit", 4ll, 0 );
	int64 vr$17 = fb_StrLen( (void*)((uint8*)&FBC$ + 2096ll), 129ll );
	if( vr$17 <= 0ll ) goto label$1135;
	{
		fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)" (", 3ll, 0 );
		fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)((uint8*)&FBC$ + 2096ll), 129ll, 0 );
		fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)")", 2ll, 0 );
	}
	label$1135:;
	label$1134:;
	FBSTRING* vr$22 = fb_StrAllocTempDescZEx( (char*)"target:", 7ll );
	fb_PrintString( 0, (FBSTRING*)vr$22, 2 );
	fb_PrintString( 0, (FBSTRING*)&S$1, 1 );
	FBSTRING* vr$24 = fb_StrAllocTempDescZEx( (char*)"backend:", 8ll );
	fb_PrintString( 0, (FBSTRING*)vr$24, 2 );
	int64 vr$25 = FBGETOPTION( 2ll );
	FBSTRING* vr$26 = FBGETBACKENDNAME( vr$25 );
	fb_PrintString( 0, (FBSTRING*)vr$26, 1 );
	fb_StrDelete( (FBSTRING*)&S$1 );
	label$1133:;
}

static void FBCDETERMINEMAINNAME( void )
{
	label$1136:;
	int64 vr$1 = fb_StrLen( (void*)((uint8*)&FBC$ + 1229ll), 261ll );
	if( vr$1 != 0ll ) goto label$1139;
	{
		FBSTRING TMP$561$2;
		struct $9FBCIOFILE* M$2;
		void* vr$3 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 144ll) );
		M$2 = (struct $9FBCIOFILE*)vr$3;
		if( M$2 == (struct $9FBCIOFILE*)0ull ) goto label$1141;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 1229ll), 261ll, (void*)M$2, -1ll, 0 );
		}
		goto label$1140;
		label$1141:;
		{
			FBSTRING* OBJF$3;
			void* vr$8 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 400ll) );
			OBJF$3 = (FBSTRING*)vr$8;
			if( OBJF$3 == (FBSTRING*)0ull ) goto label$1143;
			{
				fb_StrAssign( (void*)((uint8*)&FBC$ + 1229ll), 261ll, (void*)OBJF$3, -1ll, 0 );
			}
			goto label$1142;
			label$1143:;
			{
				fb_StrAssign( (void*)((uint8*)&FBC$ + 1229ll), 261ll, (void*)"unnamed", 8ll, 0 );
			}
			label$1142:;
		}
		label$1140:;
		__builtin_memset( &TMP$561$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$561$2, -1ll, (void*)((uint8*)&FBC$ + 1229ll), 261ll, 0 );
		FBSTRING* vr$15 = HSTRIPEXT( &TMP$561$2 );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 1229ll), 261ll, (void*)vr$15, -1ll, 0 );
		fb_StrDelete( (FBSTRING*)&TMP$561$2 );
	}
	label$1139:;
	label$1138:;
	label$1137:;
}

static FBSTRING* HGETASMNAME( struct $9FBCIOFILE* MODULE$1, int64 STAGE$1 )
{
	FBSTRING TMP$566$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$1144:;
	char* EXT$1;
	FBSTRING ASMFILE$1;
	__builtin_memset( &ASMFILE$1, 0, 24ll );
	FBSTRING* vr$3 = HSTRIPEXT( *(FBSTRING**)((uint8*)MODULE$1 + 24ll) );
	fb_StrAssign( (void*)&ASMFILE$1, -1ll, (void*)vr$3, -1ll, 0 );
	int64 vr$5 = FBGETOPTION( 3ll );
	if( vr$5 == 12ll ) goto label$1147;
	{
		EXT$1 = (char*)".asm";
	}
	goto label$1146;
	label$1147:;
	{
		EXT$1 = (char*)".o";
	}
	label$1146:;
	if( STAGE$1 != 1ll ) goto label$1149;
	{
		{
			int64 TMP$563$3;
			int64 vr$6 = FBGETOPTION( 2ll );
			TMP$563$3 = vr$6;
			if( TMP$563$3 == 1ll ) goto label$1152;
			label$1153:;
			if( TMP$563$3 != 2ll ) goto label$1151;
			label$1152:;
			{
				EXT$1 = (char*)".c";
			}
			goto label$1150;
			label$1151:;
			if( TMP$563$3 != 3ll ) goto label$1154;
			label$1155:;
			{
				EXT$1 = (char*)".ll";
			}
			label$1154:;
			label$1150:;
		}
	}
	label$1149:;
	label$1148:;
	__builtin_memset( &TMP$566$1, 0, 24ll );
	FBSTRING* vr$10 = fb_StrConcat( &TMP$566$1, (void*)&ASMFILE$1, -1ll, (void*)EXT$1, 0ll );
	fb_StrAssign( (void*)&ASMFILE$1, -1ll, (void*)vr$10, -1ll, 0 );
	fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&ASMFILE$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&ASMFILE$1 );
	label$1145:;
	FBSTRING* vr$16 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$16;
}

static void HCOMPILEBAS( struct $9FBCIOFILE* MODULE$1, int64 IS_MAIN$1, int64 IS_FBCTINF$1, int64 MODULE_COUNT$1 )
{
	label$1156:;
	int64 PREVLANG$1;
	int64 PREVOUTTYPE$1;
	FBSTRING ASMFILE$1;
	__builtin_memset( &ASMFILE$1, 0, 24ll );
	FBSTRING PPONLYFILE$1;
	__builtin_memset( &PPONLYFILE$1, 0, 24ll );
	FBSTRING* vr$2 = HGETASMNAME( MODULE$1, 1ll );
	fb_StrAssign( (void*)&ASMFILE$1, -1ll, (void*)vr$2, -1ll, 0 );
	int64 vr$4 = FBGETOPTION( 1ll );
	if( vr$4 == 0ll ) goto label$1159;
	{
		fb_StrAssign( (void*)&PPONLYFILE$1, -1ll, *(void**)((uint8*)MODULE$1 + 24ll), -1ll, 0 );
		if( *(int64*)((uint8*)MODULE$1 + 32ll) != 0ll ) goto label$1161;
		{
			FBSTRING TMP$568$3;
			FBSTRING* vr$9 = HSTRIPEXT( &PPONLYFILE$1 );
			__builtin_memset( &TMP$568$3, 0, 24ll );
			FBSTRING* vr$12 = fb_StrConcat( &TMP$568$3, (void*)vr$9, -1ll, (void*)".pp.bas", 8ll );
			fb_StrAssign( (void*)&PPONLYFILE$1, -1ll, (void*)vr$12, -1ll, 0 );
		}
		label$1161:;
		label$1160:;
	}
	label$1159:;
	label$1158:;
	if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$1163;
	{
		FBSTRING* vr$14 = fb_StrAllocTempDescZEx( (char*)"compiling: ", 11ll );
		fb_PrintString( 0, (FBSTRING*)vr$14, 2 );
		fb_PrintString( 0, (FBSTRING*)MODULE$1, 0 );
		FBSTRING* vr$17 = fb_StrAllocTempDescZEx( (char*)" -o ", 4ll );
		fb_PrintString( 0, (FBSTRING*)vr$17, 0 );
		fb_PrintString( 0, (FBSTRING*)&ASMFILE$1, 0 );
		int64 vr$19 = FBGETOPTION( 1ll );
		if( vr$19 == 0ll ) goto label$1165;
		{
			FBSTRING TMP$572$3;
			__builtin_memset( &TMP$572$3, 0, 24ll );
			FBSTRING* vr$23 = fb_StrConcat( &TMP$572$3, (void*)" -pp ", 6ll, (void*)&PPONLYFILE$1, -1ll );
			fb_PrintString( 0, (FBSTRING*)vr$23, 0 );
		}
		label$1165:;
		label$1164:;
		if( IS_MAIN$1 == 0ll ) goto label$1167;
		{
			FBSTRING* vr$24 = fb_StrAllocTempDescZEx( (char*)" (main module)", 14ll );
			fb_PrintString( 0, (FBSTRING*)vr$24, 0 );
		}
		goto label$1166;
		label$1167:;
		if( IS_FBCTINF$1 == 0ll ) goto label$1168;
		{
			FBSTRING* vr$25 = fb_StrAllocTempDescZEx( (char*)" (FB compile-time info)", 23ll );
			fb_PrintString( 0, (FBSTRING*)vr$25, 0 );
		}
		label$1168:;
		label$1166:;
		fb_PrintVoid( 0, 1 );
	}
	label$1163:;
	label$1162:;
	int64 vr$26 = FBGETOPTION( 12ll );
	if( vr$26 == -1ll ) goto label$1170;
	{
		int64 vr$27 = FBGETOPTION( 12ll );
		FBSETOPTION( 10ll, vr$27 );
	}
	label$1170:;
	label$1169:;
	int64 vr$28 = FBGETOPTION( 10ll );
	PREVLANG$1 = vr$28;
	int64 vr$29 = FBGETOPTION( 0ll );
	PREVOUTTYPE$1 = vr$29;
	if( IS_FBCTINF$1 == 0ll ) goto label$1172;
	{
		FBSETOPTION( 0ll, 3ll );
	}
	label$1172:;
	label$1171:;
	label$1173:;
	{
		int64 vr$31 = FBGETOPTION( 2ll );
		int64 vr$33 = FBGETOPTION( 2ll );
		if( (~(*(int64*)((uint8*)&FBC$ + 80ll)) & (((int64)-(vr$31 != 0ll) & (int64)-(vr$33 != 4ll)) | ~(*(int64*)((uint8*)&FBC$ + 96ll)))) == 0ll ) goto label$1177;
		{
			FBCADDTEMP( &ASMFILE$1 );
		}
		goto label$1176;
		label$1177:;
		if( MODULE_COUNT$1 != 1ll ) goto label$1178;
		{
			int64 vr$40 = FBRESTARTGETCOUNT(  );
			if( vr$40 <= 0ll ) goto label$1180;
			{
				FBCREMOVETEMP( &ASMFILE$1 );
			}
			label$1180:;
			label$1179:;
		}
		label$1178:;
		label$1176:;
		FBINIT( IS_MAIN$1, (char*)((uint8*)&FBC$ + 1490ll), MODULE_COUNT$1 );
		if( IS_FBCTINF$1 == 0ll ) goto label$1182;
		{
			FBSETLIBS( (struct $7TSTRSET*)((uint8*)&FBC$ + 792ll), (struct $7TSTRSET*)((uint8*)&FBC$ + 880ll) );
		}
		goto label$1181;
		label$1182:;
		{
			FBSETLIBS( (struct $7TSTRSET*)((uint8*)&FBC$ + 528ll), (struct $7TSTRSET*)((uint8*)&FBC$ + 616ll) );
		}
		label$1181:;
		FBCOMPILE( (char*)*(char**)MODULE$1, (char*)*(char**)&ASMFILE$1, &PPONLYFILE$1, IS_MAIN$1 );
		int64 vr$49 = ERRGETCOUNT(  );
		if( vr$49 <= 0ll ) goto label$1184;
		{
			FBCEND( 1ll );
		}
		label$1184:;
		label$1183:;
		int64 vr$50 = FBSHOULDRESTART(  );
		if( vr$50 != 0ll ) goto label$1186;
		{
			goto label$1174;
		}
		label$1186:;
		label$1185:;
		FBRESTARTENDREQUEST( 7ll );
		FBEND(  );
		int64 vr$51 = FBSHOULDRESTART(  );
		if( vr$51 == 0ll ) goto label$1188;
		{
			int64 vr$52 = FBGETOPTION( 12ll );
			if( vr$52 != -1ll ) goto label$1190;
			{
				FBSETOPTION( 10ll, PREVLANG$1 );
			}
			label$1190:;
			label$1189:;
			fb_StrDelete( (FBSTRING*)&PPONLYFILE$1 );
			fb_StrDelete( (FBSTRING*)&ASMFILE$1 );
			goto label$1157;
		}
		label$1188:;
		label$1187:;
	}
	label$1175:;
	goto label$1173;
	label$1174:;
	if( IS_FBCTINF$1 != 0ll ) goto label$1192;
	{
		FBGETLIBS( (struct $7TSTRSET*)((uint8*)&FBC$ + 792ll), (struct $7TSTRSET*)((uint8*)&FBC$ + 880ll) );
	}
	label$1192:;
	label$1191:;
	FBEND(  );
	if( IS_FBCTINF$1 == 0ll ) goto label$1194;
	{
		FBSETOPTION( 0ll, PREVOUTTYPE$1 );
	}
	label$1194:;
	label$1193:;
	FBSETOPTION( 10ll, PREVLANG$1 );
	fb_StrDelete( (FBSTRING*)&PPONLYFILE$1 );
	fb_StrDelete( (FBSTRING*)&ASMFILE$1 );
	label$1157:;
}

static void HCOMPILEMODULES( void )
{
	label$1195:;
	int64 ISMAIN$1;
	int64 CHECKMAIN$1;
	FBSTRING MAINFILE$1;
	__builtin_memset( &MAINFILE$1, 0, 24ll );
	struct $9FBCIOFILE* MODULE$1;
	ISMAIN$1 = 0ll;
	{
		int64 TMP$575$2;
		int64 vr$1 = FBGETOPTION( 0ll );
		TMP$575$2 = vr$1;
		if( TMP$575$2 == 0ll ) goto label$1199;
		label$1200:;
		if( TMP$575$2 != 2ll ) goto label$1198;
		label$1199:;
		{
			CHECKMAIN$1 = -1ll;
		}
		goto label$1197;
		label$1198:;
		{
			CHECKMAIN$1 = *(int64*)((uint8*)&FBC$ + 1624ll);
		}
		label$1201:;
		label$1197:;
	}
	if( CHECKMAIN$1 == 0ll ) goto label$1203;
	{
		FBSTRING* vr$3 = HSTRIPPATH( (char*)((uint8*)&FBC$ + 1229ll) );
		fb_StrAssign( (void*)&MAINFILE$1, -1ll, (void*)vr$3, -1ll, 0 );
	}
	label$1203:;
	label$1202:;
	void* vr$6 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 144ll) );
	MODULE$1 = (struct $9FBCIOFILE*)vr$6;
	if( MODULE$1 != (struct $9FBCIOFILE*)0ull ) goto label$1205;
	{
		STRSETCOPY( (struct $7TSTRSET*)((uint8*)&FBC$ + 792ll), (struct $7TSTRSET*)((uint8*)&FBC$ + 528ll) );
		STRSETCOPY( (struct $7TSTRSET*)((uint8*)&FBC$ + 880ll), (struct $7TSTRSET*)((uint8*)&FBC$ + 616ll) );
		fb_StrDelete( (FBSTRING*)&MAINFILE$1 );
		goto label$1196;
	}
	label$1205:;
	label$1204:;
	int64 MODULE_COUNT$1;
	MODULE_COUNT$1 = 0ll;
	label$1206:;
	{
		if( CHECKMAIN$1 == 0ll ) goto label$1210;
		{
			FBSTRING TMP$576$3;
			__builtin_memset( &TMP$576$3, 0, 24ll );
			FBSTRING* vr$15 = HSTRIPEXT( (FBSTRING*)MODULE$1 );
			fb_StrAssign( (void*)&TMP$576$3, -1ll, (void*)vr$15, -1ll, 0 );
			FBSTRING* vr$17 = HSTRIPPATH( (char*)*(char**)&TMP$576$3 );
			int32 vr$19 = fb_StrCompare( (void*)&MAINFILE$1, -1ll, (void*)vr$17, -1ll );
			ISMAIN$1 = (int64)-((int64)vr$19 == 0ll);
			fb_StrDelete( (FBSTRING*)&TMP$576$3 );
		}
		label$1210:;
		label$1209:;
		MODULE_COUNT$1 = MODULE_COUNT$1 + 1ll;
		HCOMPILEBAS( MODULE$1, ISMAIN$1, 0ll, MODULE_COUNT$1 );
		int64 vr$24 = FBSHOULDRESTART(  );
		if( vr$24 == 0ll ) goto label$1212;
		{
			fb_StrDelete( (FBSTRING*)&MAINFILE$1 );
			goto label$1196;
		}
		label$1212:;
		label$1211:;
		void* vr$26 = LISTGETNEXT( (void*)MODULE$1 );
		MODULE$1 = (struct $9FBCIOFILE*)vr$26;
	}
	label$1208:;
	if( MODULE$1 != (struct $9FBCIOFILE*)0ull ) goto label$1206;
	label$1207:;
	fb_StrDelete( (FBSTRING*)&MAINFILE$1 );
	label$1196:;
}

static int64 HPARSEXPM( FBSTRING* XPMFILE$1, FBSTRING* CODE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1213:;
	fb_StrConcatByref( (void*)CODE$1, -1ll, (void*)"\x0A" "dim shared as zstring ptr ", 28ll, 0 );
	fb_StrConcatByref( (void*)CODE$1, -1ll, (void*)"fb_program_icon_data", 21ll, 0 );
	fb_StrConcatByref( (void*)CODE$1, -1ll, (void*)"(0 to ...) = _\x0A{ _\x0A", 20ll, 0 );
	int64 F$1;
	int32 vr$1 = fb_FileFree(  );
	F$1 = (int64)vr$1;
	int32 vr$4 = fb_FileOpen( (FBSTRING*)XPMFILE$1, 2u, 0u, 0u, (int32)F$1, 0 );
	if( (int64)vr$4 == 0ll ) goto label$1216;
	{
		goto label$1214;
	}
	label$1216:;
	label$1215:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	fb_FileLineInput( (int32)F$1, (void*)&LN$1, -1ll, 0 );
	FBSTRING* vr$10 = fb_StrUcase2( (FBSTRING*)&LN$1, 0 );
	int32 vr$11 = fb_StrCompare( (void*)vr$10, -1ll, (void*)"/* XPM */", 10ll );
	if( (int64)vr$11 == 0ll ) goto label$1218;
	{
		fb_FileClose( (int32)F$1 );
		fb_StrDelete( (FBSTRING*)&LN$1 );
		goto label$1214;
	}
	label$1218:;
	label$1217:;
	int64 SAW_ROWS$1;
	SAW_ROWS$1 = 0ll;
	label$1219:;
	int32 vr$16 = fb_FileEof( (int32)F$1 );
	if( (int64)vr$16 != 0ll ) goto label$1220;
	{
		fb_FileLineInput( (int32)F$1, (void*)&LN$1, -1ll, 0 );
		int64 vr$21 = fb_StrLen( (void*)&LN$1, -1ll );
		FBSTRING* vr$22 = fb_StrAllocTempDescZEx( (char*)"\x22", 1ll );
		int64 vr$24 = fb_StrInstr( 1ll, (FBSTRING*)&LN$1, (FBSTRING*)vr$22 );
		FBSTRING* vr$28 = fb_RIGHT( (FBSTRING*)&LN$1, (vr$21 - vr$24) + 1ll );
		fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$28, -1ll, 0 );
		FBSTRING* vr$30 = fb_StrAllocTempDescZEx( (char*)"\x22", 1ll );
		int64 vr$32 = fb_StrInstr( 2ll, (FBSTRING*)&LN$1, (FBSTRING*)vr$30 );
		FBSTRING* vr$34 = fb_LEFT( (FBSTRING*)&LN$1, vr$32 );
		fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$34, -1ll, 0 );
		int64 vr$37 = fb_StrLen( (void*)&LN$1, -1ll );
		if( vr$37 <= 0ll ) goto label$1222;
		{
			FBSTRING TMP$583$3;
			if( SAW_ROWS$1 == 0ll ) goto label$1224;
			{
				fb_StrConcatByref( (void*)CODE$1, -1ll, (void*)", _\x0A", 5ll, 0 );
			}
			label$1224:;
			label$1223:;
			__builtin_memset( &TMP$583$3, 0, 24ll );
			FBSTRING* vr$41 = fb_StrConcat( &TMP$583$3, (void*)"\x09@", 3ll, (void*)&LN$1, -1ll );
			fb_StrConcatByref( (void*)CODE$1, -1ll, (void*)vr$41, -1ll, 0 );
			SAW_ROWS$1 = -1ll;
		}
		label$1222:;
		label$1221:;
	}
	goto label$1219;
	label$1220:;
	fb_FileClose( (int32)F$1 );
	if( SAW_ROWS$1 != 0ll ) goto label$1226;
	{
		fb_StrDelete( (FBSTRING*)&LN$1 );
		goto label$1214;
	}
	label$1226:;
	label$1225:;
	fb_StrConcatByref( (void*)CODE$1, -1ll, (void*)" _ \x0A", 5ll, 0 );
	fb_StrConcatByref( (void*)CODE$1, -1ll, (void*)"}\x0A\x0A", 4ll, 0 );
	fb_StrConcatByref( (void*)CODE$1, -1ll, (void*)"extern as zstring ptr ptr fb_program_icon alias \x22" "fb_program_icon\x22\x0A", 67ll, 0 );
	fb_StrConcatByref( (void*)CODE$1, -1ll, (void*)"dim shared as zstring ptr ptr fb_program_icon = @fb_program_icon_data(0)\x0A", 74ll, 0 );
	fb$result$1 = -1ll;
	fb_StrDelete( (FBSTRING*)&LN$1 );
	label$1214:;
	return fb$result$1;
}

static int64 HCOMPILEXPM( void )
{
	int64 TMP$594$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1227:;
	FBSTRING XPMFILE$1;
	__builtin_memset( &XPMFILE$1, 0, 24ll );
	FBSTRING CODE$1;
	__builtin_memset( &CODE$1, 0, 24ll );
	int64 FO$1;
	int64 vr$4 = fb_StrLen( (void*)((uint8*)&FBC$ + 272ll), -1ll );
	if( vr$4 != 0ll ) goto label$1230;
	{
		fb$result$1 = -1ll;
		fb_StrDelete( (FBSTRING*)&CODE$1 );
		fb_StrDelete( (FBSTRING*)&XPMFILE$1 );
		goto label$1228;
	}
	label$1230:;
	label$1229:;
	fb_StrAssign( (void*)&XPMFILE$1, -1ll, (void*)((uint8*)&FBC$ + 272ll), -1ll, 0 );
	int64 vr$9 = fb_StrLen( *(void**)((uint8*)&FBC$ + 296ll), -1ll );
	if( vr$9 <= 0ll ) goto label$1232;
	{
		FBSTRING* vr$10 = HSTRIPEXT( *(FBSTRING**)((uint8*)&FBC$ + 296ll) );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 272ll), -1ll, (void*)vr$10, -1ll, 0 );
	}
	label$1232:;
	label$1231:;
	fb_StrConcatByref( (void*)((uint8*)&FBC$ + 272ll), -1ll, (void*)".bas", 5ll, 0 );
	if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$1234;
	{
		FBSTRING TMP$592$2;
		FBSTRING TMP$593$2;
		FBSTRING* vr$13 = fb_StrAllocTempDescZEx( (char*)"parsing xpm: ", 13ll );
		fb_PrintString( 0, (FBSTRING*)vr$13, 2 );
		__builtin_memset( &TMP$592$2, 0, 24ll );
		FBSTRING* vr$18 = fb_StrConcat( &TMP$592$2, (void*)&XPMFILE$1, -1ll, (void*)" -o ", 5ll );
		__builtin_memset( &TMP$593$2, 0, 24ll );
		FBSTRING* vr$21 = fb_StrConcat( &TMP$593$2, (void*)vr$18, -1ll, (void*)((uint8*)&FBC$ + 272ll), -1ll );
		fb_PrintString( 0, (FBSTRING*)vr$21, 1 );
	}
	label$1234:;
	label$1233:;
	int64 vr$24 = HPARSEXPM( &XPMFILE$1, &CODE$1 );
	if( vr$24 != 0ll ) goto label$1236;
	{
		fb_StrDelete( (FBSTRING*)&CODE$1 );
		fb_StrDelete( (FBSTRING*)&XPMFILE$1 );
		goto label$1228;
	}
	label$1236:;
	label$1235:;
	int32 vr$27 = fb_FileFree(  );
	FO$1 = (int64)vr$27;
	int32 vr$31 = fb_FileOpen( (FBSTRING*)((uint8*)&FBC$ + 272ll), 3u, 0u, 0u, (int32)FO$1, 0 );
	if( (int64)vr$31 == 0ll ) goto label$1238;
	{
		fb_StrDelete( (FBSTRING*)&CODE$1 );
		fb_StrDelete( (FBSTRING*)&XPMFILE$1 );
		goto label$1228;
	}
	label$1238:;
	label$1237:;
	TMP$594$1 = FO$1;
	fb_PrintString( (int32)TMP$594$1, (FBSTRING*)&CODE$1, 0 );
	fb_FileClose( (int32)FO$1 );
	if( *(int64*)((uint8*)&FBC$ + 80ll) != 0ll ) goto label$1240;
	{
		FBCADDTEMP( (FBSTRING*)((uint8*)&FBC$ + 272ll) );
	}
	label$1240:;
	label$1239:;
	HCOMPILEBAS( (struct $9FBCIOFILE*)((uint8*)&FBC$ + 272ll), 0ll, 0ll, -1ll );
	fb$result$1 = -1ll;
	fb_StrDelete( (FBSTRING*)&CODE$1 );
	fb_StrDelete( (FBSTRING*)&XPMFILE$1 );
	label$1228:;
	return fb$result$1;
}

static int64 HCOMPILESTAGE2MODULE( struct $9FBCIOFILE* MODULE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1241:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	FBSTRING ASMFILE$1;
	__builtin_memset( &ASMFILE$1, 0, 24ll );
	FBSTRING* vr$3 = HGETASMNAME( MODULE$1, 2ll );
	fb_StrAssign( (void*)&ASMFILE$1, -1ll, (void*)vr$3, -1ll, 0 );
	int64 vr$6 = FBGETOPTION( 3ll );
	if( (~(*(int64*)((uint8*)&FBC$ + 96ll)) & ((int64)-(vr$6 != 12ll) | ~(*(int64*)((uint8*)&FBC$ + 104ll)))) == 0ll ) goto label$1244;
	{
		FBCADDTEMP( &ASMFILE$1 );
	}
	label$1244:;
	label$1243:;
	{
		int64 TMP$595$2;
		int64 vr$12 = FBGETOPTION( 2ll );
		TMP$595$2 = vr$12;
		if( TMP$595$2 == 1ll ) goto label$1247;
		label$1248:;
		if( TMP$595$2 != 2ll ) goto label$1246;
		label$1247:;
		{
			int64 TMP$627$3;
			boolean ISM64TARGET$3;
			ISM64TARGET$3 = (boolean)0ll;
			{
				int64 TMP$596$4;
				int64 vr$13 = FBGETCPUFAMILY(  );
				TMP$596$4 = vr$13;
				if( TMP$596$4 != 0ll ) goto label$1250;
				label$1251:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-m32 ", 6ll, 0 );
				}
				goto label$1249;
				label$1250:;
				if( TMP$596$4 != 1ll ) goto label$1252;
				label$1253:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-m64 ", 6ll, 0 );
					ISM64TARGET$3 = (boolean)1ll;
				}
				goto label$1249;
				label$1252:;
				if( TMP$596$4 != 4ll ) goto label$1254;
				label$1255:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-m32 ", 6ll, 0 );
				}
				goto label$1249;
				label$1254:;
				if( TMP$596$4 == 5ll ) goto label$1257;
				label$1258:;
				if( TMP$596$4 != 6ll ) goto label$1256;
				label$1257:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-m64 ", 6ll, 0 );
					ISM64TARGET$3 = (boolean)1ll;
				}
				label$1256:;
				label$1249:;
			}
			int64 vr$18 = FBGETOPTION( 3ll );
			if( vr$18 == 12ll ) goto label$1260;
			{
				{
					int64 TMP$599$5;
					int64 vr$19 = FBGETCPUFAMILY(  );
					TMP$599$5 = vr$19;
					if( TMP$599$5 == 4ll ) goto label$1263;
					label$1264:;
					if( TMP$599$5 == 5ll ) goto label$1263;
					label$1265:;
					if( TMP$599$5 == 6ll ) goto label$1263;
					label$1266:;
					if( TMP$599$5 != 8ll ) goto label$1262;
					label$1263:;
					{
						if( *(int64*)((uint8*)&FBC$ + 56ll) == 0ll ) goto label$1268;
						{
							fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-mcpu=native ", 14ll, 0 );
						}
						goto label$1267;
						label$1268:;
						{
							FBSTRING TMP$602$7;
							FBSTRING TMP$603$7;
							FBSTRING TMP$604$7;
							char* vr$21 = FBGETGCCARCH(  );
							__builtin_memset( &TMP$602$7, 0, 24ll );
							FBSTRING* vr$24 = fb_StrConcat( &TMP$602$7, (void*)"-mcpu=", 7ll, (void*)vr$21, 0ll );
							__builtin_memset( &TMP$603$7, 0, 24ll );
							FBSTRING* vr$27 = fb_StrConcat( &TMP$603$7, (void*)vr$24, -1ll, (void*)" ", 2ll );
							__builtin_memset( &TMP$604$7, 0, 24ll );
							FBSTRING* vr$31 = fb_StrConcat( &TMP$604$7, (void*)&LN$1, -1ll, (void*)vr$27, -1ll );
							fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$31, -1ll, 0 );
						}
						label$1267:;
					}
					goto label$1261;
					label$1262:;
					{
						if( *(int64*)((uint8*)&FBC$ + 56ll) == 0ll ) goto label$1271;
						{
							fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-march=native ", 15ll, 0 );
						}
						goto label$1270;
						label$1271:;
						{
							FBSTRING TMP$607$7;
							FBSTRING TMP$608$7;
							FBSTRING TMP$609$7;
							char* vr$34 = FBGETGCCARCH(  );
							__builtin_memset( &TMP$607$7, 0, 24ll );
							FBSTRING* vr$37 = fb_StrConcat( &TMP$607$7, (void*)"-march=", 8ll, (void*)vr$34, 0ll );
							__builtin_memset( &TMP$608$7, 0, 24ll );
							FBSTRING* vr$40 = fb_StrConcat( &TMP$608$7, (void*)vr$37, -1ll, (void*)" ", 2ll );
							__builtin_memset( &TMP$609$7, 0, 24ll );
							FBSTRING* vr$44 = fb_StrConcat( &TMP$609$7, (void*)&LN$1, -1ll, (void*)vr$40, -1ll );
							fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$44, -1ll, 0 );
						}
						label$1270:;
					}
					label$1269:;
					label$1261:;
				}
			}
			label$1260:;
			label$1259:;
			int64 vr$46 = FBGETOPTION( 3ll );
			int64 vr$48 = FBGETOPTION( 4ll );
			if( ((int64)-(vr$46 == 3ll) & (int64)-(vr$48 == 17ll)) == 0ll ) goto label$1273;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-mfloat-abi=softfp -mfpu=vfpv3-d16 ", 36ll, 0 );
			}
			label$1273:;
			label$1272:;
			int64 vr$52 = FBGETOPTION( 38ll );
			if( vr$52 == 0ll ) goto label$1275;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-fPIC ", 7ll, 0 );
			}
			label$1275:;
			label$1274:;
			int64 vr$54 = FBGETOPTION( 3ll );
			if( vr$54 == 12ll ) goto label$1277;
			{
				int64 vr$55 = FBGETOPTION( 2ll );
				if( vr$55 != 2ll ) goto label$1279;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-fno-integrated-as ", 20ll, 0 );
				}
				label$1279:;
				label$1278:;
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-S ", 4ll, 0 );
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-nostdlib -nostdinc ", 21ll, 0 );
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-Wall ", 7ll, 0 );
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-Wno-unused ", 13ll, 0 );
			}
			goto label$1276;
			label$1277:;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-c -nostdlib -nostdinc -Wall -Wno-unused-label -Wno-unused-function -Wno-unused-variable ", 90ll, 0 );
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-Wno-warn-absolute-paths ", 26ll, 0 );
			}
			label$1276:;
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-Wno-main ", 11ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-Werror-implicit-function-declaration ", 39ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-O", 3ll, 0 );
			int64 vr$66 = FBGETOPTION( 8ll );
			FBSTRING* vr$67 = fb_LongintToStr( vr$66 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$67, -1ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" ", 2ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-fno-strict-aliasing ", 22ll, 0 );
			{
				uint64 TMP$625$4;
				int64 vr$71 = FBGETOPTION( 3ll );
				TMP$625$4 = (uint64)vr$71;
				goto label$1281;
				label$1282:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-fno-ident ", 12ll, 0 );
				}
				goto label$1280;
				label$1281:;
				static const void* tmp$886[1ll] = {
					&&label$1282,
				};
				if( TMP$625$4 > 0ull ) goto label$1280;
				goto *tmp$886[TMP$625$4 - 0ull];
				label$1280:;
			}
			int64 vr$73 = FBGETOPTION( 3ll );
			if( vr$73 == 12ll ) goto label$1283;
			int64 vr$74 = FBGETOPTION( 3ll );
			TMP$627$3 = (int64)-(vr$74 != 3ll);
			goto label$1606;
			label$1283:;
			TMP$627$3 = 0ll;
			label$1606:;
			if( TMP$627$3 == 0ll ) goto label$1285;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-frounding-math ", 17ll, 0 );
			}
			label$1285:;
			label$1284:;
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-fno-math-errno ", 17ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-fwrapv ", 9ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-fno-exceptions -fno-asynchronous-unwind-tables ", 49ll, 0 );
			int64 vr$82 = FBGETOPTION( 21ll );
			if( ((int64)-((int64)-ISM64TARGET$3 == -1ll) | (int64)-(vr$82 == -1ll)) == 0ll ) goto label$1287;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-funwind-tables ", 17ll, 0 );
			}
			goto label$1286;
			label$1287:;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-fno-unwind-tables ", 20ll, 0 );
			}
			label$1286:;
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-Wno-format ", 13ll, 0 );
			int64 vr$88 = FBGETOPTION( 14ll );
			if( vr$88 == 0ll ) goto label$1289;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-g ", 4ll, 0 );
			}
			label$1289:;
			label$1288:;
			int64 vr$90 = FBGETOPTION( 24ll );
			if( vr$90 != 1ll ) goto label$1291;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-pg ", 5ll, 0 );
			}
			label$1291:;
			label$1290:;
			int64 vr$92 = FBGETOPTION( 5ll );
			if( vr$92 != 1ll ) goto label$1293;
			{
				int64 vr$93 = FBGETOPTION( 3ll );
				if( vr$93 != 3ll ) goto label$1295;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-mfpmath=sse -mssse3 ", 22ll, 0 );
				}
				goto label$1294;
				label$1295:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-mfpmath=sse -msse2 ", 21ll, 0 );
				}
				label$1294:;
			}
			goto label$1292;
			label$1293:;
			int64 vr$96 = FBGETOPTION( 5ll );
			if( vr$96 != 2ll ) goto label$1296;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-mfpu=neon -funsafe-math-optimizations ", 40ll, 0 );
			}
			label$1296:;
			label$1292:;
			{
				int64 TMP$640$4;
				int64 vr$98 = FBGETCPUFAMILY(  );
				TMP$640$4 = vr$98;
				if( TMP$640$4 == 0ll ) goto label$1299;
				label$1300:;
				if( TMP$640$4 != 1ll ) goto label$1298;
				label$1299:;
				{
					int64 vr$99 = FBGETOPTION( 9ll );
					if( vr$99 != 0ll ) goto label$1302;
					{
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-masm=intel ", 13ll, 0 );
					}
					label$1302:;
					label$1301:;
				}
				label$1298:;
				label$1297:;
			}
		}
		goto label$1245;
		label$1246:;
		if( TMP$595$2 != 3ll ) goto label$1303;
		label$1304:;
		{
			{
				int64 TMP$642$4;
				int64 vr$101 = FBGETCPUFAMILY(  );
				TMP$642$4 = vr$101;
				if( TMP$642$4 != 0ll ) goto label$1306;
				label$1307:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-march=x86 ", 12ll, 0 );
				}
				goto label$1305;
				label$1306:;
				if( TMP$642$4 != 1ll ) goto label$1308;
				label$1309:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-march=x86-64 ", 15ll, 0 );
				}
				goto label$1305;
				label$1308:;
				if( TMP$642$4 != 2ll ) goto label$1310;
				label$1311:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-march=arm ", 12ll, 0 );
				}
				goto label$1305;
				label$1310:;
				if( TMP$642$4 != 3ll ) goto label$1312;
				label$1313:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-march=armv8-a ", 16ll, 0 );
				}
				goto label$1305;
				label$1312:;
				if( TMP$642$4 != 4ll ) goto label$1314;
				label$1315:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-mcpu=powerpc ", 15ll, 0 );
				}
				goto label$1305;
				label$1314:;
				if( TMP$642$4 != 5ll ) goto label$1316;
				label$1317:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-mcpu=powerpc64 ", 17ll, 0 );
				}
				goto label$1305;
				label$1316:;
				if( TMP$642$4 != 6ll ) goto label$1318;
				label$1319:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-mcpu=powerpc64le ", 19ll, 0 );
				}
				label$1318:;
				label$1305:;
			}
			int64 vr$109 = FBGETOPTION( 38ll );
			if( vr$109 == 0ll ) goto label$1321;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-relocation-model=pic ", 23ll, 0 );
			}
			label$1321:;
			label$1320:;
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-O", 3ll, 0 );
			int64 vr$112 = FBGETOPTION( 8ll );
			FBSTRING* vr$113 = fb_LongintToStr( vr$112 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$113, -1ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" ", 2ll, 0 );
			{
				int64 TMP$651$4;
				int64 vr$116 = FBGETCPUFAMILY(  );
				TMP$651$4 = vr$116;
				if( TMP$651$4 == 0ll ) goto label$1324;
				label$1325:;
				if( TMP$651$4 != 1ll ) goto label$1323;
				label$1324:;
				{
					int64 vr$117 = FBGETOPTION( 9ll );
					if( vr$117 != 0ll ) goto label$1327;
					{
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"--x86-asm-syntax=intel ", 24ll, 0 );
					}
					label$1327:;
					label$1326:;
				}
				label$1323:;
				label$1322:;
			}
		}
		label$1303:;
		label$1245:;
	}
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22", 2ll, 0 );
	FBSTRING* vr$120 = HGETASMNAME( MODULE$1, 1ll );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$120, -1ll, 0 );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22 ", 3ll, 0 );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-o \x22", 5ll, 0 );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)&ASMFILE$1, -1ll, 0 );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22", 2ll, 0 );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)((uint8*)&FBC$ + 2072ll), -1ll, 0 );
	$7FBCTOOL CCOMPILER$1;
	CCOMPILER$1 = 0ll;
	{
		int64 TMP$655$2;
		int64 vr$129 = FBGETOPTION( 2ll );
		TMP$655$2 = vr$129;
		if( TMP$655$2 != 1ll ) goto label$1329;
		label$1330:;
		{
			CCOMPILER$1 = 4ll;
			int64 vr$130 = FBGETOPTION( 3ll );
			if( vr$130 != 12ll ) goto label$1332;
			{
				CCOMPILER$1 = 15ll;
			}
			label$1332:;
			label$1331:;
			int64 vr$132 = FBCRUNBIN( (char*)"compiling C", CCOMPILER$1, &LN$1 );
			fb$result$1 = vr$132;
		}
		goto label$1328;
		label$1329:;
		if( TMP$655$2 != 2ll ) goto label$1333;
		label$1334:;
		{
			CCOMPILER$1 = 6ll;
			int64 vr$134 = FBCRUNBIN( (char*)"compiling C", CCOMPILER$1, &LN$1 );
			fb$result$1 = vr$134;
		}
		goto label$1328;
		label$1333:;
		if( TMP$655$2 != 3ll ) goto label$1335;
		label$1336:;
		{
			CCOMPILER$1 = 5ll;
			int64 vr$136 = FBCRUNBIN( (char*)"compiling LLVM IR", CCOMPILER$1, &LN$1 );
			fb$result$1 = vr$136;
		}
		label$1335:;
		label$1328:;
	}
	fb_StrDelete( (FBSTRING*)&ASMFILE$1 );
	fb_StrDelete( (FBSTRING*)&LN$1 );
	label$1242:;
	return fb$result$1;
}

static void HCOMPILESTAGE2MODULES( void )
{
	label$1337:;
	struct $9FBCIOFILE* MODULE$1;
	void* vr$1 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 144ll) );
	MODULE$1 = (struct $9FBCIOFILE*)vr$1;
	label$1339:;
	if( MODULE$1 == (struct $9FBCIOFILE*)0ull ) goto label$1340;
	{
		int64 vr$2 = HCOMPILESTAGE2MODULE( MODULE$1 );
		if( vr$2 != 0ll ) goto label$1342;
		{
			FBCEND( 1ll );
		}
		label$1342:;
		label$1341:;
		void* vr$3 = LISTGETNEXT( (void*)MODULE$1 );
		MODULE$1 = (struct $9FBCIOFILE*)vr$3;
	}
	goto label$1339;
	label$1340:;
	label$1338:;
}

static int64 HASSEMBLEMODULE( struct $9FBCIOFILE* MODULE$1 )
{
	FBSTRING TMP$664$1;
	FBSTRING TMP$665$1;
	FBSTRING TMP$666$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1343:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	$7FBCTOOL ASSEMBLER$1;
	ASSEMBLER$1 = 0ll;
	if( ASSEMBLER$1 != 0ll ) goto label$1346;
	{
		{
			int64 TMP$658$3;
			int64 vr$2 = FBGETOPTION( 3ll );
			TMP$658$3 = vr$2;
			if( TMP$658$3 != 12ll ) goto label$1348;
			label$1349:;
			{
				ASSEMBLER$1 = 0ll;
			}
			goto label$1347;
			label$1348:;
			{
				ASSEMBLER$1 = 1ll;
			}
			label$1350:;
			label$1347:;
		}
	}
	label$1346:;
	label$1345:;
	if( ASSEMBLER$1 != 0ll ) goto label$1352;
	{
		fb$result$1 = -1ll;
		fb_StrDelete( (FBSTRING*)&LN$1 );
		goto label$1344;
	}
	label$1352:;
	label$1351:;
	{
		if( ASSEMBLER$1 != 6ll ) goto label$1354;
		label$1355:;
		{
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-c ", 4ll, 0 );
		}
		goto label$1353;
		label$1354:;
		{
			{
				int64 TMP$660$4;
				int64 vr$5 = FBGETCPUFAMILY(  );
				TMP$660$4 = vr$5;
				if( TMP$660$4 != 0ll ) goto label$1358;
				label$1359:;
				{
					int64 vr$6 = FBGETOPTION( 3ll );
					if( vr$6 != 10ll ) goto label$1361;
					{
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-arch i386 ", 12ll, 0 );
					}
					goto label$1360;
					label$1361:;
					{
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"--32 ", 6ll, 0 );
					}
					label$1360:;
				}
				goto label$1357;
				label$1358:;
				if( TMP$660$4 != 1ll ) goto label$1362;
				label$1363:;
				{
					int64 vr$9 = FBGETOPTION( 3ll );
					if( vr$9 != 10ll ) goto label$1365;
					{
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-arch x86_64 ", 14ll, 0 );
					}
					goto label$1364;
					label$1365:;
					{
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"--64 ", 6ll, 0 );
					}
					label$1364:;
				}
				label$1362:;
				label$1357:;
			}
			int64 vr$12 = FBGETOPTION( 14ll );
			if( vr$12 != 0ll ) goto label$1367;
			{
				int64 vr$13 = FBGETOPTION( 3ll );
				if( vr$13 == 10ll ) goto label$1369;
				{
					int64 vr$14 = FBGETOPTION( 3ll );
					if( vr$14 == 12ll ) goto label$1371;
					{
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"--strip-local-absolute ", 24ll, 0 );
					}
					label$1371:;
					label$1370:;
				}
				label$1369:;
				label$1368:;
			}
			label$1367:;
			label$1366:;
		}
		label$1356:;
		label$1353:;
	}
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22", 2ll, 0 );
	FBSTRING* vr$17 = HGETASMNAME( MODULE$1, 2ll );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$17, -1ll, 0 );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22 ", 3ll, 0 );
	__builtin_memset( &TMP$664$1, 0, 24ll );
	FBSTRING* vr$23 = fb_StrConcat( &TMP$664$1, (void*)"-o \x22", 5ll, *(void**)((uint8*)MODULE$1 + 24ll), -1ll );
	__builtin_memset( &TMP$665$1, 0, 24ll );
	FBSTRING* vr$26 = fb_StrConcat( &TMP$665$1, (void*)vr$23, -1ll, (void*)"\x22", 2ll );
	__builtin_memset( &TMP$666$1, 0, 24ll );
	FBSTRING* vr$30 = fb_StrConcat( &TMP$666$1, (void*)&LN$1, -1ll, (void*)vr$26, -1ll );
	fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$30, -1ll, 0 );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)((uint8*)&FBC$ + 2024ll), -1ll, 0 );
	int64 vr$35 = FBCRUNBIN( (char*)"assembling", ASSEMBLER$1, &LN$1 );
	if( vr$35 != 0ll ) goto label$1373;
	{
		fb_StrDelete( (FBSTRING*)&LN$1 );
		goto label$1344;
	}
	label$1373:;
	label$1372:;
	if( *(int64*)((uint8*)&FBC$ + 104ll) != 0ll ) goto label$1375;
	{
		FBCADDTEMP( *(FBSTRING**)((uint8*)MODULE$1 + 24ll) );
	}
	label$1375:;
	label$1374:;
	fb$result$1 = -1ll;
	fb_StrDelete( (FBSTRING*)&LN$1 );
	label$1344:;
	return fb$result$1;
}

static void HASSEMBLEMODULES( void )
{
	label$1376:;
	struct $9FBCIOFILE* MODULE$1;
	void* vr$1 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 144ll) );
	MODULE$1 = (struct $9FBCIOFILE*)vr$1;
	label$1378:;
	if( MODULE$1 == (struct $9FBCIOFILE*)0ull ) goto label$1379;
	{
		int64 vr$2 = HASSEMBLEMODULE( MODULE$1 );
		if( vr$2 != 0ll ) goto label$1381;
		{
			FBCEND( 1ll );
		}
		label$1381:;
		label$1380:;
		void* vr$3 = LISTGETNEXT( (void*)MODULE$1 );
		MODULE$1 = (struct $9FBCIOFILE*)vr$3;
	}
	goto label$1378;
	label$1379:;
	label$1377:;
}

static int64 HASSEMBLERC( struct $9FBCIOFILE* RC$1 )
{
	FBSTRING TMP$669$1;
	FBSTRING TMP$670$1;
	FBSTRING TMP$671$1;
	FBSTRING TMP$672$1;
	FBSTRING TMP$673$1;
	FBSTRING TMP$674$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1382:;
	FBSTRING LN$1;
	fb_StrInit( (void*)&LN$1, -1ll, (void*)"--output-format=coff --include-dir=.", 37ll, 0 );
	__builtin_memset( &TMP$669$1, 0, 24ll );
	FBSTRING* vr$6 = fb_StrConcat( &TMP$669$1, (void*)" \x22", 3ll, (void*)RC$1, -1ll );
	__builtin_memset( &TMP$670$1, 0, 24ll );
	FBSTRING* vr$9 = fb_StrConcat( &TMP$670$1, (void*)vr$6, -1ll, (void*)"\x22", 2ll );
	__builtin_memset( &TMP$671$1, 0, 24ll );
	FBSTRING* vr$13 = fb_StrConcat( &TMP$671$1, (void*)&LN$1, -1ll, (void*)vr$9, -1ll );
	fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$13, -1ll, 0 );
	__builtin_memset( &TMP$672$1, 0, 24ll );
	FBSTRING* vr$18 = fb_StrConcat( &TMP$672$1, (void*)" \x22", 3ll, *(void**)((uint8*)RC$1 + 24ll), -1ll );
	__builtin_memset( &TMP$673$1, 0, 24ll );
	FBSTRING* vr$21 = fb_StrConcat( &TMP$673$1, (void*)vr$18, -1ll, (void*)"\x22", 2ll );
	__builtin_memset( &TMP$674$1, 0, 24ll );
	FBSTRING* vr$25 = fb_StrConcat( &TMP$674$1, (void*)&LN$1, -1ll, (void*)vr$21, -1ll );
	fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$25, -1ll, 0 );
	int64 vr$28 = FBCRUNBIN( (char*)"compiling rc", 9ll, &LN$1 );
	fb$result$1 = vr$28;
	if( *(int64*)((uint8*)&FBC$ + 104ll) != 0ll ) goto label$1385;
	{
		FBCADDTEMP( *(FBSTRING**)((uint8*)RC$1 + 24ll) );
	}
	label$1385:;
	label$1384:;
	fb_StrDelete( (FBSTRING*)&LN$1 );
	label$1383:;
	return fb$result$1;
}

static void HASSEMBLERCS( void )
{
	label$1386:;
	struct $9FBCIOFILE* RC$1;
	void* vr$1 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 208ll) );
	RC$1 = (struct $9FBCIOFILE*)vr$1;
	label$1388:;
	if( RC$1 == (struct $9FBCIOFILE*)0ull ) goto label$1389;
	{
		int64 vr$2 = HASSEMBLERC( RC$1 );
		if( vr$2 != 0ll ) goto label$1391;
		{
			FBCEND( 1ll );
		}
		label$1391:;
		label$1390:;
		void* vr$3 = LISTGETNEXT( (void*)RC$1 );
		RC$1 = (struct $9FBCIOFILE*)vr$3;
	}
	goto label$1388;
	label$1389:;
	label$1387:;
}

static void HASSEMBLEXPM( void )
{
	label$1392:;
	int64 vr$1 = fb_StrLen( (void*)((uint8*)&FBC$ + 272ll), -1ll );
	if( vr$1 <= 0ll ) goto label$1395;
	{
		int64 vr$2 = FBGETOPTION( 2ll );
		if( vr$2 == 0ll ) goto label$1397;
		{
			HCOMPILESTAGE2MODULE( (struct $9FBCIOFILE*)((uint8*)&FBC$ + 272ll) );
		}
		label$1397:;
		label$1396:;
		int64 vr$5 = HASSEMBLEMODULE( (struct $9FBCIOFILE*)((uint8*)&FBC$ + 272ll) );
		if( vr$5 != 0ll ) goto label$1399;
		{
			FBCEND( 1ll );
		}
		label$1399:;
		label$1398:;
	}
	label$1395:;
	label$1394:;
	label$1393:;
}

static int64 HCOMPILEFBCTINF( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1400:;
	struct $9FBCIOFILE FBCTINF$1;
	_ZN9FBCIOFILEC1Ev( &FBCTINF$1 );
	FBSTRING OBJFILE$1;
	__builtin_memset( &OBJFILE$1, 0, 24ll );
	int64 FO$1;
	fb_StrAssign( (void*)&FBCTINF$1, -1ll, (void*)"__fb_ct.inf.bas", 16ll, 0 );
	fb_StrAssign( (void*)&OBJFILE$1, -1ll, (void*)"__fb_ct.inf", 12ll, 0 );
	*(FBSTRING**)((uint8*)&FBCTINF$1 + 24ll) = &OBJFILE$1;
	if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$1403;
	{
		FBSTRING* vr$6 = fb_StrAllocTempDescZEx( (char*)"creating: ", 10ll );
		fb_PrintString( 0, (FBSTRING*)vr$6, 2 );
		fb_PrintString( 0, (FBSTRING*)&FBCTINF$1, 1 );
	}
	label$1403:;
	label$1402:;
	int32 vr$8 = fb_FileFree(  );
	FO$1 = (int64)vr$8;
	int32 vr$12 = fb_FileOpen( (FBSTRING*)&FBCTINF$1, 3u, 0u, 0u, (int32)FO$1, 0 );
	if( (int64)vr$12 == 0ll ) goto label$1405;
	{
		fb_StrDelete( (FBSTRING*)&OBJFILE$1 );
		_ZN9FBCIOFILED1Ev( &FBCTINF$1 );
		goto label$1401;
	}
	label$1405:;
	label$1404:;
	fb_FileClose( (int32)FO$1 );
	if( *(int64*)((uint8*)&FBC$ + 80ll) != 0ll ) goto label$1407;
	{
		FBCADDTEMP( (FBSTRING*)&FBCTINF$1 );
	}
	label$1407:;
	label$1406:;
	HCOMPILEBAS( &FBCTINF$1, 0ll, -1ll, -1ll );
	int64 vr$19 = FBGETOPTION( 2ll );
	if( vr$19 == 0ll ) goto label$1409;
	{
		HCOMPILESTAGE2MODULE( &FBCTINF$1 );
	}
	label$1409:;
	label$1408:;
	int64 vr$22 = HASSEMBLEMODULE( &FBCTINF$1 );
	fb$result$1 = vr$22;
	fb_StrDelete( (FBSTRING*)&OBJFILE$1 );
	_ZN9FBCIOFILED1Ev( &FBCTINF$1 );
	label$1401:;
	return fb$result$1;
}

static int64 HARCHIVEFILES( void )
{
	FBSTRING TMP$679$1;
	FBSTRING TMP$680$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1410:;
	HSETOUTNAME(  );
	FBSTRING* vr$2 = fb_StrAllocTempDescZ( (char*)((uint8*)&FBC$ + 968ll) );
	int32 vr$3 = fb_FileKill( (FBSTRING*)vr$2 );
	if( (int64)vr$3 == 0ll ) goto label$1413;
	{
	}
	label$1413:;
	label$1412:;
	FBSTRING LN$1;
	__builtin_memset( &TMP$679$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$679$1, (void*)"-rsc \x22", 7ll, (void*)((uint8*)&FBC$ + 968ll), 261ll );
	__builtin_memset( &TMP$680$1, 0, 24ll );
	FBSTRING* vr$11 = fb_StrConcat( &TMP$680$1, (void*)vr$8, -1ll, (void*)"\x22 ", 3ll );
	fb_StrInit( (void*)&LN$1, -1ll, (void*)vr$11, -1ll, 0 );
	int64 vr$13 = FBGETOPTION( 40ll );
	int64 vr$14 = FBISCROSSCOMP(  );
	if( (vr$13 & ~vr$14) == 0ll ) goto label$1415;
	{
		FBSTRING TMP$684$2;
		int64 vr$17 = HCOMPILEFBCTINF(  );
		if( vr$17 == 0ll ) goto label$1417;
		{
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22__fb_ct.inf\x22 ", 15ll, 0 );
		}
		label$1417:;
		label$1416:;
		__builtin_memset( &TMP$684$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$684$2, -1ll, (void*)"__fb_ct.inf", 12ll, 0 );
		FBCADDTEMP( &TMP$684$2 );
		fb_StrDelete( (FBSTRING*)&TMP$684$2 );
	}
	label$1415:;
	label$1414:;
	FBSTRING* OBJFILE$1;
	void* vr$24 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 400ll) );
	OBJFILE$1 = (FBSTRING*)vr$24;
	label$1418:;
	if( OBJFILE$1 == (FBSTRING*)0ull ) goto label$1419;
	{
		FBSTRING TMP$685$2;
		FBSTRING TMP$686$2;
		FBSTRING TMP$687$2;
		__builtin_memset( &TMP$685$2, 0, 24ll );
		FBSTRING* vr$27 = fb_StrConcat( &TMP$685$2, (void*)"\x22", 2ll, (void*)OBJFILE$1, -1ll );
		__builtin_memset( &TMP$686$2, 0, 24ll );
		FBSTRING* vr$30 = fb_StrConcat( &TMP$686$2, (void*)vr$27, -1ll, (void*)"\x22 ", 3ll );
		__builtin_memset( &TMP$687$2, 0, 24ll );
		FBSTRING* vr$34 = fb_StrConcat( &TMP$687$2, (void*)&LN$1, -1ll, (void*)vr$30, -1ll );
		fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$34, -1ll, 0 );
		void* vr$36 = LISTGETNEXT( (void*)OBJFILE$1 );
		OBJFILE$1 = (FBSTRING*)vr$36;
	}
	goto label$1418;
	label$1419:;
	$7FBCTOOL AR$1;
	AR$1 = 2ll;
	int64 vr$37 = FBGETOPTION( 3ll );
	if( vr$37 != 12ll ) goto label$1421;
	{
		AR$1 = 13ll;
	}
	label$1421:;
	label$1420:;
	int64 vr$39 = FBCRUNBIN( (char*)"archiving", AR$1, &LN$1 );
	fb$result$1 = vr$39;
	fb_StrDelete( (FBSTRING*)&LN$1 );
	label$1411:;
	return fb$result$1;
}

static void HSETDEFAULTLIBPATHS( void )
{
	FBSTRING TMP$689$1;
	FBSTRING TMP$690$1;
	label$1422:;
	__builtin_memset( &TMP$689$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$689$1, -1ll, (void*)((uint8*)&FBC$ + 3559ll), 261ll, 0 );
	FBCADDDEFLIBPATH( &TMP$689$1 );
	fb_StrDelete( (FBSTRING*)&TMP$689$1 );
	__builtin_memset( &TMP$690$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$690$1, -1ll, (void*)".", 2ll, 0 );
	FBCADDDEFLIBPATH( &TMP$690$1 );
	fb_StrDelete( (FBSTRING*)&TMP$690$1 );
	{
		int64 TMP$691$2;
		int64 vr$9 = FBGETOPTION( 3ll );
		TMP$691$2 = vr$9;
		if( TMP$691$2 != 3ll ) goto label$1425;
		label$1426:;
		{
		}
		goto label$1424;
		label$1425:;
		if( TMP$691$2 != 12ll ) goto label$1427;
		label$1428:;
		{
		}
		goto label$1424;
		label$1427:;
		{
			FBCADDLIBPATHFOR( (char*)"libgcc.a" );
			{
				int64 TMP$693$4;
				int64 vr$10 = FBGETOPTION( 3ll );
				TMP$693$4 = vr$10;
				if( TMP$693$4 != 6ll ) goto label$1431;
				label$1432:;
				{
					FBCADDLIBPATHFOR( (char*)"libc++.so" );
				}
				goto label$1430;
				label$1431:;
				if( TMP$693$4 != 4ll ) goto label$1433;
				label$1434:;
				{
					FBCADDLIBPATHFOR( (char*)"libstdcx.a" );
				}
				goto label$1430;
				label$1433:;
				{
					FBCADDLIBPATHFOR( (char*)"libstdc++.so" );
				}
				label$1435:;
				label$1430:;
			}
		}
		label$1429:;
		label$1424:;
	}
	{
		int64 TMP$697$2;
		int64 vr$11 = FBGETOPTION( 3ll );
		TMP$697$2 = vr$11;
		if( TMP$697$2 != 4ll ) goto label$1437;
		label$1438:;
		{
			FBCADDLIBPATHFOR( (char*)"libm.a" );
		}
		goto label$1436;
		label$1437:;
		if( TMP$697$2 != 0ll ) goto label$1439;
		label$1440:;
		{
			FBCADDLIBPATHFOR( (char*)"libmingw32.a" );
		}
		label$1439:;
		label$1436:;
	}
	label$1423:;
}

static void FBCADDDEFLIB( char* LIBNAME$1 )
{
	FBSTRING TMP$700$1;
	label$1441:;
	__builtin_memset( &TMP$700$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$700$1, -1ll, (void*)LIBNAME$1, 0ll, 0 );
	STRSETADD( (struct $7TSTRSET*)((uint8*)&FBC$ + 792ll), &TMP$700$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$700$1 );
	label$1442:;
}

static FBSTRING* HGETFBLIBNAMESUFFIX( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$1443:;
	FBSTRING S$1;
	__builtin_memset( &S$1, 0, 24ll );
	int64 vr$2 = FBGETOPTION( 36ll );
	if( vr$2 == 0ll ) goto label$1446;
	{
		fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"mt", 3ll, 0 );
	}
	label$1446:;
	label$1445:;
	int64 vr$4 = FBGETOPTION( 38ll );
	if( vr$4 == 0ll ) goto label$1448;
	{
		fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"pic", 4ll, 0 );
	}
	label$1448:;
	label$1447:;
	fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&S$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&S$1 );
	label$1444:;
	FBSTRING* vr$10 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$10;
}

static void HADDDEFAULTLIBS( void )
{
	label$1449:;
	int64 vr$0 = FBGETOPTION( 33ll );
	if( vr$0 == 0ll ) goto label$1452;
	{
		FBSTRING TMP$701$2;
		FBSTRING TMP$702$2;
		__builtin_memset( &TMP$702$2, 0, 24ll );
		FBSTRING* vr$2 = HGETFBLIBNAMESUFFIX(  );
		__builtin_memset( &TMP$701$2, 0, 24ll );
		FBSTRING* vr$5 = fb_StrConcat( &TMP$701$2, (void*)"fbrt", 5ll, (void*)vr$2, -1ll );
		fb_StrAssign( (void*)&TMP$702$2, -1ll, (void*)vr$5, -1ll, 0 );
		FBCADDDEFLIB( (char*)*(char**)&TMP$702$2 );
		fb_StrDelete( (FBSTRING*)&TMP$702$2 );
	}
	goto label$1451;
	label$1452:;
	{
		FBSTRING TMP$703$2;
		FBSTRING TMP$704$2;
		__builtin_memset( &TMP$704$2, 0, 24ll );
		FBSTRING* vr$9 = HGETFBLIBNAMESUFFIX(  );
		__builtin_memset( &TMP$703$2, 0, 24ll );
		FBSTRING* vr$12 = fb_StrConcat( &TMP$703$2, (void*)"fb", 3ll, (void*)vr$9, -1ll );
		fb_StrAssign( (void*)&TMP$704$2, -1ll, (void*)vr$12, -1ll, 0 );
		FBCADDDEFLIB( (char*)*(char**)&TMP$704$2 );
		fb_StrDelete( (FBSTRING*)&TMP$704$2 );
	}
	label$1451:;
	int64 vr$15 = FBGETOPTION( 37ll );
	if( vr$15 == 0ll ) goto label$1454;
	{
		FBSTRING TMP$705$2;
		FBSTRING TMP$706$2;
		__builtin_memset( &TMP$706$2, 0, 24ll );
		FBSTRING* vr$17 = HGETFBLIBNAMESUFFIX(  );
		__builtin_memset( &TMP$705$2, 0, 24ll );
		FBSTRING* vr$20 = fb_StrConcat( &TMP$705$2, (void*)"fbgfx", 6ll, (void*)vr$17, -1ll );
		fb_StrAssign( (void*)&TMP$706$2, -1ll, (void*)vr$20, -1ll, 0 );
		FBCADDDEFLIB( (char*)*(char**)&TMP$706$2 );
		fb_StrDelete( (FBSTRING*)&TMP$706$2 );
		{
			uint64 TMP$707$3;
			int64 vr$23 = FBGETOPTION( 3ll );
			TMP$707$3 = (uint64)vr$23;
			goto label$1456;
			label$1457:;
			{
				FBCADDDEFLIB( (char*)"gdi32" );
				FBCADDDEFLIB( (char*)"winmm" );
			}
			goto label$1455;
			label$1458:;
			{
				FBSTRING TMP$711$4;
				__builtin_memset( &TMP$711$4, 0, 24ll );
				fb_StrAssign( (void*)&TMP$711$4, -1ll, (void*)"/usr/X11R6/lib", 15ll, 0 );
				FBCADDDEFLIBPATH( &TMP$711$4 );
				fb_StrDelete( (FBSTRING*)&TMP$711$4 );
				FBCADDDEFLIB( (char*)"X11" );
				FBCADDDEFLIB( (char*)"Xext" );
				FBCADDDEFLIB( (char*)"Xpm" );
				FBCADDDEFLIB( (char*)"Xrandr" );
				FBCADDDEFLIB( (char*)"Xrender" );
			}
			goto label$1455;
			label$1459:;
			{
				ERRREPORTEX( 329ll, (char*)"", -1ll, 1ll, (char*)0ull );
			}
			goto label$1455;
			label$1456:;
			static const void* tmp$887[12ll] = {
				&&label$1457,
				&&label$1457,
				&&label$1458,
				&&label$1459,
				&&label$1455,
				&&label$1455,
				&&label$1458,
				&&label$1458,
				&&label$1458,
				&&label$1458,
				&&label$1458,
				&&label$1458,
			};
			if( TMP$707$3 > 11ull ) goto label$1455;
			goto *tmp$887[TMP$707$3 - 0ull];
			label$1455:;
		}
	}
	label$1454:;
	label$1453:;
	{
		uint64 TMP$717$2;
		int64 vr$28 = FBGETOPTION( 3ll );
		TMP$717$2 = (uint64)vr$28;
		goto label$1461;
		label$1462:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"cygwin" );
			FBCADDDEFLIB( (char*)"kernel32" );
			FBCADDDEFLIB( (char*)"user32" );
			int64 vr$29 = FBGETOPTION( 24ll );
			if( vr$29 != 1ll ) goto label$1464;
			{
				FBCADDDEFLIB( (char*)"gmon" );
			}
			label$1464:;
			label$1463:;
		}
		goto label$1460;
		label$1465:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"System" );
			FBCADDDEFLIB( (char*)"pthread" );
			FBCADDDEFLIB( (char*)"ncurses" );
		}
		goto label$1460;
		label$1466:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"c" );
			FBCADDDEFLIB( (char*)"m" );
			int64 vr$30 = FBGETOPTION( 36ll );
			if( vr$30 == 0ll ) goto label$1468;
			{
				FBCADDDEFLIB( (char*)"pthread" );
				FBCADDDEFLIB( (char*)"socket" );
			}
			label$1468:;
			label$1467:;
		}
		goto label$1460;
		label$1469:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"pthread" );
			FBCADDDEFLIB( (char*)"c" );
			FBCADDDEFLIB( (char*)"m" );
			FBCADDDEFLIB( (char*)"ncurses" );
		}
		goto label$1460;
		label$1470:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"pthread" );
			FBCADDDEFLIB( (char*)"c" );
			FBCADDDEFLIB( (char*)"m" );
			FBCADDDEFLIB( (char*)"ncurses" );
		}
		goto label$1460;
		label$1471:;
		{
			FBSTRING* vr$31 = FBCFINDLIBFILE( (char*)"libtinfo.a" );
			int64 vr$32 = fb_StrLen( (void*)vr$31, -1ll );
			FBSTRING* vr$34 = FBCFINDLIBFILE( (char*)"libtinfo.so" );
			int64 vr$35 = fb_StrLen( (void*)vr$34, -1ll );
			if( ((int64)-(vr$32 > 0ll) | (int64)-(vr$35 > 0ll)) == 0ll ) goto label$1473;
			{
				FBCADDDEFLIB( (char*)"tinfo" );
			}
			goto label$1472;
			label$1473:;
			{
				FBCADDDEFLIB( (char*)"ncurses" );
			}
			label$1472:;
			FBCADDDEFLIB( (char*)"m" );
			FBCADDDEFLIB( (char*)"dl" );
			FBCADDDEFLIB( (char*)"pthread" );
			FBCADDDEFLIB( (char*)"gcc" );
			FBSTRING* vr$38 = FBCFINDLIBFILE( (char*)"libgcc_eh.a" );
			int64 vr$39 = fb_StrLen( (void*)vr$38, -1ll );
			FBSTRING* vr$41 = FBCFINDLIBFILE( (char*)"libgcc_eh.so" );
			int64 vr$42 = fb_StrLen( (void*)vr$41, -1ll );
			if( ((int64)-(vr$39 > 0ll) | (int64)-(vr$42 > 0ll)) == 0ll ) goto label$1475;
			{
				FBCADDDEFLIB( (char*)"gcc_eh" );
			}
			label$1475:;
			label$1474:;
			FBCADDDEFLIB( (char*)"c" );
		}
		goto label$1460;
		label$1476:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"pthread" );
			FBCADDDEFLIB( (char*)"c" );
			FBCADDDEFLIB( (char*)"m" );
			FBCADDDEFLIB( (char*)"ncurses" );
		}
		goto label$1460;
		label$1477:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"pthread" );
			FBCADDDEFLIB( (char*)"c" );
			FBCADDDEFLIB( (char*)"m" );
			FBCADDDEFLIB( (char*)"ncurses" );
		}
		goto label$1460;
		label$1478:;
		{
			FBCADDDEFLIB( (char*)"m" );
			FBCADDDEFLIB( (char*)"dl" );
			FBCADDDEFLIB( (char*)"c" );
		}
		goto label$1460;
		label$1479:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"msvcrt" );
			FBCADDDEFLIB( (char*)"kernel32" );
			FBCADDDEFLIB( (char*)"user32" );
			FBCADDDEFLIB( (char*)"mingw32" );
			FBCADDDEFLIB( (char*)"mingwex" );
			FBCADDDEFLIB( (char*)"moldname" );
			FBSTRING* vr$45 = FBCFINDLIBFILE( (char*)"libgcc_eh.a" );
			int64 vr$46 = fb_StrLen( (void*)vr$45, -1ll );
			FBSTRING* vr$48 = FBCFINDLIBFILE( (char*)"libgcc_eh.dll.a" );
			int64 vr$49 = fb_StrLen( (void*)vr$48, -1ll );
			if( ((int64)-(vr$46 > 0ll) | (int64)-(vr$49 > 0ll)) == 0ll ) goto label$1481;
			{
				FBCADDDEFLIB( (char*)"gcc_eh" );
			}
			label$1481:;
			label$1480:;
			int64 vr$52 = FBGETOPTION( 24ll );
			if( vr$52 != 1ll ) goto label$1483;
			{
				FBCADDDEFLIB( (char*)"gmon" );
			}
			label$1483:;
			label$1482:;
		}
		goto label$1460;
		label$1484:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"fbgfx" );
			FBCADDDEFLIB( (char*)"openxdk" );
			FBCADDDEFLIB( (char*)"hal" );
			FBCADDDEFLIB( (char*)"c" );
			FBCADDDEFLIB( (char*)"usb" );
			FBCADDDEFLIB( (char*)"xboxkrnl" );
			FBCADDDEFLIB( (char*)"m" );
			int64 vr$53 = FBGETOPTION( 24ll );
			if( vr$53 != 1ll ) goto label$1486;
			{
				FBCADDDEFLIB( (char*)"gmon" );
			}
			label$1486:;
			label$1485:;
		}
		goto label$1460;
		label$1487:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"amiga" );
			FBCADDDEFLIB( (char*)"m" );
		}
		goto label$1460;
		label$1488:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"arosc" );
			FBCADDDEFLIB( (char*)"autoinit" );
			FBCADDDEFLIB( (char*)"m" );
		}
		goto label$1460;
		label$1489:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"c" );
			FBCADDDEFLIB( (char*)"m" );
		}
		goto label$1460;
		label$1490:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"c" );
			FBCADDDEFLIB( (char*)"m" );
			FBCADDDEFLIB( (char*)"auto" );
		}
		goto label$1460;
		label$1461:;
		static const void* tmp$888[17ll] = {
			&&label$1479,
			&&label$1462,
			&&label$1471,
			&&label$1478,
			&&label$1466,
			&&label$1484,
			&&label$1469,
			&&label$1470,
			&&label$1470,
			&&label$1477,
			&&label$1465,
			&&label$1476,
			&&label$1460,
			&&label$1487,
			&&label$1488,
			&&label$1489,
			&&label$1490,
		};
		if( TMP$717$2 > 16ull ) goto label$1460;
		goto *tmp$888[TMP$717$2 - 0ull];
		label$1460:;
	}
	label$1450:;
}

static void HEXCLUDELIBSFROMLINK( void )
{
	label$1491:;
	struct $11TSTRSETITEM* I$1;
	void* vr$1 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 704ll) );
	I$1 = (struct $11TSTRSETITEM*)vr$1;
	label$1493:;
	if( I$1 == (struct $11TSTRSETITEM*)0ull ) goto label$1494;
	{
		{
			FBSTRING TMP$743$3;
			fb_StrInit( (void*)&TMP$743$3, -1ll, (void*)I$1, -1ll, 0 );
			int32 vr$6 = fb_StrCompare( (void*)&TMP$743$3, -1ll, (void*)"fbrt0.o", 8ll );
			if( (int64)vr$6 == 0ll ) goto label$1497;
			label$1498:;
			int32 vr$9 = fb_StrCompare( (void*)&TMP$743$3, -1ll, (void*)"fbrt0pic.o", 11ll );
			if( (int64)vr$9 == 0ll ) goto label$1497;
			label$1499:;
			int32 vr$12 = fb_StrCompare( (void*)&TMP$743$3, -1ll, (void*)"fbrt1.o", 8ll );
			if( (int64)vr$12 == 0ll ) goto label$1497;
			label$1500:;
			int32 vr$15 = fb_StrCompare( (void*)&TMP$743$3, -1ll, (void*)"fbrt1pic.o", 11ll );
			if( (int64)vr$15 == 0ll ) goto label$1497;
			label$1501:;
			int32 vr$18 = fb_StrCompare( (void*)&TMP$743$3, -1ll, (void*)"fbrt2.o", 8ll );
			if( (int64)vr$18 == 0ll ) goto label$1497;
			label$1502:;
			int32 vr$21 = fb_StrCompare( (void*)&TMP$743$3, -1ll, (void*)"fbrt2pic.o", 11ll );
			if( (int64)vr$21 != 0ll ) goto label$1496;
			label$1497:;
			{
				*(int64*)((uint8*)&FBC$ + 2752ll) = -1ll;
			}
			goto label$1495;
			label$1496:;
			{
				STRSETDEL( (struct $7TSTRSET*)((uint8*)&FBC$ + 792ll), (FBSTRING*)I$1 );
			}
			label$1503:;
			label$1495:;
			fb_StrDelete( (FBSTRING*)&TMP$743$3 );
		}
		void* vr$27 = LISTGETNEXT( (void*)I$1 );
		I$1 = (struct $11TSTRSETITEM*)vr$27;
	}
	goto label$1493;
	label$1494:;
	label$1492:;
}

static void HPRINTOPTIONS( int64 VERBOSE$1 )
{
	label$1504:;
	FBSTRING* vr$0 = fb_StrAllocTempDescZEx( (char*)"usage: fbc [options] <input files>", 34ll );
	fb_PrintString( 0, (FBSTRING*)vr$0, 1 );
	FBSTRING* vr$1 = fb_StrAllocTempDescZEx( (char*)"input files:", 12ll );
	fb_PrintString( 0, (FBSTRING*)vr$1, 1 );
	FBSTRING* vr$2 = fb_StrAllocTempDescZEx( (char*)"  *.a = static library, *.o = object file, *.bas = source", 57ll );
	fb_PrintString( 0, (FBSTRING*)vr$2, 1 );
	FBSTRING* vr$3 = fb_StrAllocTempDescZEx( (char*)"  *.rc = resource script, *.res = compiled resource (win32)", 59ll );
	fb_PrintString( 0, (FBSTRING*)vr$3, 1 );
	FBSTRING* vr$4 = fb_StrAllocTempDescZEx( (char*)"  *.xpm = icon resource (*nix/*bsd)", 35ll );
	fb_PrintString( 0, (FBSTRING*)vr$4, 1 );
	FBSTRING* vr$5 = fb_StrAllocTempDescZEx( (char*)"options:", 8ll );
	fb_PrintString( 0, (FBSTRING*)vr$5, 1 );
	FBSTRING* vr$6 = fb_StrAllocTempDescZEx( (char*)"  @<file>          Read more command line arguments from a file", 63ll );
	fb_PrintString( 0, (FBSTRING*)vr$6, 1 );
	FBSTRING* vr$7 = fb_StrAllocTempDescZEx( (char*)"  -a <file>        Treat file as .o/.a input file", 49ll );
	fb_PrintString( 0, (FBSTRING*)vr$7, 1 );
	FBSTRING* vr$8 = fb_StrAllocTempDescZEx( (char*)"  -arch <type>     Set target architecture (default: 686)", 57ll );
	fb_PrintString( 0, (FBSTRING*)vr$8, 1 );
	FBSTRING* vr$9 = fb_StrAllocTempDescZEx( (char*)"  -asm att|intel   Set asm format (-gen gcc|llvm, x86 or x86_64 only)", 69ll );
	fb_PrintString( 0, (FBSTRING*)vr$9, 1 );
	FBSTRING* vr$10 = fb_StrAllocTempDescZEx( (char*)"  -b <file>        Treat file as .bas input file", 48ll );
	fb_PrintString( 0, (FBSTRING*)vr$10, 1 );
	if( VERBOSE$1 == 0ll ) goto label$1507;
	{
		FBSTRING* vr$11 = fb_StrAllocTempDescZEx( (char*)"  -buildprefix <name>  specify prefix on tool names (as, ar, ld)", 64ll );
		fb_PrintString( 0, (FBSTRING*)vr$11, 1 );
	}
	label$1507:;
	label$1506:;
	FBSTRING* vr$12 = fb_StrAllocTempDescZEx( (char*)"  -c               Compile only, do not link", 44ll );
	fb_PrintString( 0, (FBSTRING*)vr$12, 1 );
	FBSTRING* vr$13 = fb_StrAllocTempDescZEx( (char*)"  -C               Preserve temporary .o files", 46ll );
	fb_PrintString( 0, (FBSTRING*)vr$13, 1 );
	FBSTRING* vr$14 = fb_StrAllocTempDescZEx( (char*)"  -d <name>[=<val>]  Add a global #define", 41ll );
	fb_PrintString( 0, (FBSTRING*)vr$14, 1 );
	FBSTRING* vr$15 = fb_StrAllocTempDescZEx( (char*)"  -dll             Same as -dylib", 33ll );
	fb_PrintString( 0, (FBSTRING*)vr$15, 1 );
	FBSTRING* vr$16 = fb_StrAllocTempDescZEx( (char*)"  -dylib           Create a DLL (win32) or shared library (*nix/*BSD)", 69ll );
	fb_PrintString( 0, (FBSTRING*)vr$16, 1 );
	FBSTRING* vr$17 = fb_StrAllocTempDescZEx( (char*)"  -e               Enable runtime error checking", 48ll );
	fb_PrintString( 0, (FBSTRING*)vr$17, 1 );
	if( VERBOSE$1 == 0ll ) goto label$1509;
	{
		FBSTRING* vr$18 = fb_StrAllocTempDescZEx( (char*)"  -earray          Enable array bounds checking", 47ll );
		fb_PrintString( 0, (FBSTRING*)vr$18, 1 );
		FBSTRING* vr$19 = fb_StrAllocTempDescZEx( (char*)"  -earraydims      Enable array dimensions checking", 51ll );
		fb_PrintString( 0, (FBSTRING*)vr$19, 1 );
		FBSTRING* vr$20 = fb_StrAllocTempDescZEx( (char*)"  -eassert         Enable assert() and assertwarn() checking", 60ll );
		fb_PrintString( 0, (FBSTRING*)vr$20, 1 );
		FBSTRING* vr$21 = fb_StrAllocTempDescZEx( (char*)"  -edebug          Enable __FB_DEBUG__", 38ll );
		fb_PrintString( 0, (FBSTRING*)vr$21, 1 );
		FBSTRING* vr$22 = fb_StrAllocTempDescZEx( (char*)"  -edebuginfo      Add debug info", 33ll );
		fb_PrintString( 0, (FBSTRING*)vr$22, 1 );
		FBSTRING* vr$23 = fb_StrAllocTempDescZEx( (char*)"  -elocation       Enable error location reporting", 50ll );
		fb_PrintString( 0, (FBSTRING*)vr$23, 1 );
		FBSTRING* vr$24 = fb_StrAllocTempDescZEx( (char*)"  -enullptr        Enable null-pointer checking", 47ll );
		fb_PrintString( 0, (FBSTRING*)vr$24, 1 );
		FBSTRING* vr$25 = fb_StrAllocTempDescZEx( (char*)"  -eunwind         Enable call stack unwind information", 55ll );
		fb_PrintString( 0, (FBSTRING*)vr$25, 1 );
		FBSTRING* vr$26 = fb_StrAllocTempDescZEx( (char*)"  -entry <name>    Change the entry point of the program from main()", 68ll );
		fb_PrintString( 0, (FBSTRING*)vr$26, 1 );
	}
	label$1509:;
	label$1508:;
	FBSTRING* vr$27 = fb_StrAllocTempDescZEx( (char*)"  -ex              -e plus RESUME support", 41ll );
	fb_PrintString( 0, (FBSTRING*)vr$27, 1 );
	FBSTRING* vr$28 = fb_StrAllocTempDescZEx( (char*)"  -exx             -ex plus array bounds/null-pointer checking", 62ll );
	fb_PrintString( 0, (FBSTRING*)vr$28, 1 );
	FBSTRING* vr$29 = fb_StrAllocTempDescZEx( (char*)"  -export          Export symbols for dynamic linkage", 53ll );
	fb_PrintString( 0, (FBSTRING*)vr$29, 1 );
	if( VERBOSE$1 == 0ll ) goto label$1511;
	{
		FBSTRING* vr$30 = fb_StrAllocTempDescZEx( (char*)"  -fbgfx           Link to the appropriate libfbgfx variant (normally automatic)", 80ll );
		fb_PrintString( 0, (FBSTRING*)vr$30, 1 );
	}
	label$1511:;
	label$1510:;
	FBSTRING* vr$31 = fb_StrAllocTempDescZEx( (char*)"  -forcelang <name>  Override #lang statements in source code", 61ll );
	fb_PrintString( 0, (FBSTRING*)vr$31, 1 );
	if( VERBOSE$1 == 0ll ) goto label$1513;
	{
		FBSTRING* vr$32 = fb_StrAllocTempDescZEx( (char*)"  -fpmode fast|precise  Select floating-point math accuracy/speed", 65ll );
		fb_PrintString( 0, (FBSTRING*)vr$32, 1 );
		FBSTRING* vr$33 = fb_StrAllocTempDescZEx( (char*)"  -fpu x87|sse|neon  Set target FPU", 35ll );
		fb_PrintString( 0, (FBSTRING*)vr$33, 1 );
	}
	label$1513:;
	label$1512:;
	FBSTRING* vr$34 = fb_StrAllocTempDescZEx( (char*)"  -g               Add debug info, enable __FB_DEBUG__, and enable assert()", 75ll );
	fb_PrintString( 0, (FBSTRING*)vr$34, 1 );
	if( VERBOSE$1 == 0ll ) goto label$1515;
	{
		FBSTRING* vr$35 = fb_StrAllocTempDescZEx( (char*)"  -gen gas         Select GNU gas 32-bit assembler backend", 58ll );
		fb_PrintString( 0, (FBSTRING*)vr$35, 1 );
		FBSTRING* vr$36 = fb_StrAllocTempDescZEx( (char*)"  -gen gas64       Select GNU gas 64-bit assembler backend", 58ll );
		fb_PrintString( 0, (FBSTRING*)vr$36, 1 );
		FBSTRING* vr$37 = fb_StrAllocTempDescZEx( (char*)"  -gen gcc         Select GNU gcc C backend", 43ll );
		fb_PrintString( 0, (FBSTRING*)vr$37, 1 );
		FBSTRING* vr$38 = fb_StrAllocTempDescZEx( (char*)"  -gen llvm        Select LLVM backend", 38ll );
		fb_PrintString( 0, (FBSTRING*)vr$38, 1 );
		FBSTRING* vr$39 = fb_StrAllocTempDescZEx( (char*)"  -gen clang       Select clang C backend", 41ll );
		fb_PrintString( 0, (FBSTRING*)vr$39, 1 );
	}
	goto label$1514;
	label$1515:;
	{
		FBSTRING* vr$40 = fb_StrAllocTempDescZEx( (char*)"  -gen <backend>   Select code generation backend (gas|gas64|gcc|llvm|clang)", 76ll );
		fb_PrintString( 0, (FBSTRING*)vr$40, 1 );
	}
	label$1514:;
	FBSTRING* vr$41 = fb_StrAllocTempDescZEx( (char*)"  [-]-help         Show this help output; use '-help -v' to show verbose help", 77ll );
	fb_PrintString( 0, (FBSTRING*)vr$41, 1 );
	FBSTRING* vr$42 = fb_StrAllocTempDescZEx( (char*)"  -i <path>        Add an include file search path", 50ll );
	fb_PrintString( 0, (FBSTRING*)vr$42, 1 );
	FBSTRING* vr$43 = fb_StrAllocTempDescZEx( (char*)"  -include <file>  Pre-#include a file for each input .bas", 58ll );
	fb_PrintString( 0, (FBSTRING*)vr$43, 1 );
	FBSTRING* vr$44 = fb_StrAllocTempDescZEx( (char*)"  -l <name>        Link in a library", 36ll );
	fb_PrintString( 0, (FBSTRING*)vr$44, 1 );
	FBSTRING* vr$45 = fb_StrAllocTempDescZEx( (char*)"  -lang <name>     Select FB dialect: fb, deprecated, fblite, qb", 64ll );
	fb_PrintString( 0, (FBSTRING*)vr$45, 1 );
	FBSTRING* vr$46 = fb_StrAllocTempDescZEx( (char*)"  -lib             Create a static library", 42ll );
	fb_PrintString( 0, (FBSTRING*)vr$46, 1 );
	FBSTRING* vr$47 = fb_StrAllocTempDescZEx( (char*)"  -m <name>        Specify main module (default if not -c: first input .bas)", 76ll );
	fb_PrintString( 0, (FBSTRING*)vr$47, 1 );
	FBSTRING* vr$48 = fb_StrAllocTempDescZEx( (char*)"  -map <file>      Save linking map to file", 43ll );
	fb_PrintString( 0, (FBSTRING*)vr$48, 1 );
	FBSTRING* vr$49 = fb_StrAllocTempDescZEx( (char*)"  -maxerr <n>      Only show <n> errors", 39ll );
	fb_PrintString( 0, (FBSTRING*)vr$49, 1 );
	FBSTRING* vr$50 = fb_StrAllocTempDescZEx( (char*)"  -mt              Use thread-safe FB runtime", 45ll );
	fb_PrintString( 0, (FBSTRING*)vr$50, 1 );
	FBSTRING* vr$51 = fb_StrAllocTempDescZEx( (char*)"  -nodeflibs       Do not include the default libraries when linking", 68ll );
	fb_PrintString( 0, (FBSTRING*)vr$51, 1 );
	FBSTRING* vr$52 = fb_StrAllocTempDescZEx( (char*)"  -noerrline       Do not show source context in error messages", 63ll );
	fb_PrintString( 0, (FBSTRING*)vr$52, 1 );
	FBSTRING* vr$53 = fb_StrAllocTempDescZEx( (char*)"  -nolib <a,b,c>   Do not include the specified libraries when linking", 70ll );
	fb_PrintString( 0, (FBSTRING*)vr$53, 1 );
	FBSTRING* vr$54 = fb_StrAllocTempDescZEx( (char*)"  -noobjinfo       Do not read/write compile-time info from/to .o and .a files", 78ll );
	fb_PrintString( 0, (FBSTRING*)vr$54, 1 );
	FBSTRING* vr$55 = fb_StrAllocTempDescZEx( (char*)"  -nostrip         Do not strip symbol information from the output file", 71ll );
	fb_PrintString( 0, (FBSTRING*)vr$55, 1 );
	FBSTRING* vr$56 = fb_StrAllocTempDescZEx( (char*)"  -o <file>        Set .o (or -pp .bas) file name for prev/next input file", 74ll );
	fb_PrintString( 0, (FBSTRING*)vr$56, 1 );
	FBSTRING* vr$57 = fb_StrAllocTempDescZEx( (char*)"  -O <value>       Optimization level (default: 0)", 50ll );
	fb_PrintString( 0, (FBSTRING*)vr$57, 1 );
	FBSTRING* vr$58 = fb_StrAllocTempDescZEx( (char*)"  -p <path>        Add a library search path", 44ll );
	fb_PrintString( 0, (FBSTRING*)vr$58, 1 );
	FBSTRING* vr$59 = fb_StrAllocTempDescZEx( (char*)"  -pic             Generate position-independent code (non-x86 Unix shared libs)", 80ll );
	fb_PrintString( 0, (FBSTRING*)vr$59, 1 );
	FBSTRING* vr$60 = fb_StrAllocTempDescZEx( (char*)"  -pp              Write out preprocessed input file (.pp.bas) only", 67ll );
	fb_PrintString( 0, (FBSTRING*)vr$60, 1 );
	FBSTRING* vr$61 = fb_StrAllocTempDescZEx( (char*)"  -prefix <path>   Set the compiler prefix path", 47ll );
	fb_PrintString( 0, (FBSTRING*)vr$61, 1 );
	FBSTRING* vr$62 = fb_StrAllocTempDescZEx( (char*)"  -print host|target  Display host/target system name", 53ll );
	fb_PrintString( 0, (FBSTRING*)vr$62, 1 );
	FBSTRING* vr$63 = fb_StrAllocTempDescZEx( (char*)"  -print fblibdir  Display the compiler's lib/ path", 51ll );
	fb_PrintString( 0, (FBSTRING*)vr$63, 1 );
	FBSTRING* vr$64 = fb_StrAllocTempDescZEx( (char*)"  -print x         Display output binary/library file name (if known)", 69ll );
	fb_PrintString( 0, (FBSTRING*)vr$64, 1 );
	if( VERBOSE$1 == 0ll ) goto label$1517;
	{
		FBSTRING* vr$65 = fb_StrAllocTempDescZEx( (char*)"  -print fork-id   Display compiler's fork identifier (if set)", 62ll );
		fb_PrintString( 0, (FBSTRING*)vr$65, 1 );
		FBSTRING* vr$66 = fb_StrAllocTempDescZEx( (char*)"  -print sha-1     Display compiler's source code commit sha-1 (if known)", 73ll );
		fb_PrintString( 0, (FBSTRING*)vr$66, 1 );
	}
	label$1517:;
	label$1516:;
	FBSTRING* vr$67 = fb_StrAllocTempDescZEx( (char*)"  -profile         Enable function profiling", 44ll );
	fb_PrintString( 0, (FBSTRING*)vr$67, 1 );
	FBSTRING* vr$68 = fb_StrAllocTempDescZEx( (char*)"  -profgen         Set the profiling code generation type (gmon|fb|cycles)", 74ll );
	fb_PrintString( 0, (FBSTRING*)vr$68, 1 );
	FBSTRING* vr$69 = fb_StrAllocTempDescZEx( (char*)"  -r               Write out .asm/.c/.ll (-gen gas/gcc/llvm) only", 65ll );
	fb_PrintString( 0, (FBSTRING*)vr$69, 1 );
	FBSTRING* vr$70 = fb_StrAllocTempDescZEx( (char*)"  -rr              Write out the final .asm only", 48ll );
	fb_PrintString( 0, (FBSTRING*)vr$70, 1 );
	FBSTRING* vr$71 = fb_StrAllocTempDescZEx( (char*)"  -R               Preserve temporary .asm/.c/.ll/.def files", 60ll );
	fb_PrintString( 0, (FBSTRING*)vr$71, 1 );
	FBSTRING* vr$72 = fb_StrAllocTempDescZEx( (char*)"  -RR              Preserve the final .asm file", 47ll );
	fb_PrintString( 0, (FBSTRING*)vr$72, 1 );
	FBSTRING* vr$73 = fb_StrAllocTempDescZEx( (char*)"  -s console|gui   Select win32 subsystem", 41ll );
	fb_PrintString( 0, (FBSTRING*)vr$73, 1 );
	FBSTRING* vr$74 = fb_StrAllocTempDescZEx( (char*)"  -showincludes    Display a tree of file names of #included files", 66ll );
	fb_PrintString( 0, (FBSTRING*)vr$74, 1 );
	FBSTRING* vr$75 = fb_StrAllocTempDescZEx( (char*)"  -static          Prefer static libraries over dynamic ones when linking", 73ll );
	fb_PrintString( 0, (FBSTRING*)vr$75, 1 );
	FBSTRING* vr$76 = fb_StrAllocTempDescZEx( (char*)"  -strip           Omit all symbol information from the output file", 67ll );
	fb_PrintString( 0, (FBSTRING*)vr$76, 1 );
	FBSTRING* vr$77 = fb_StrAllocTempDescZEx( (char*)"  -sysroot <path>  Linker sysroot, needed by some cross-compiling toolchains", 76ll );
	fb_PrintString( 0, (FBSTRING*)vr$77, 1 );
	FBSTRING* vr$78 = fb_StrAllocTempDescZEx( (char*)"  -t <value>       Set .exe stack size in kbytes, default: 1024 (win32/dos)", 75ll );
	fb_PrintString( 0, (FBSTRING*)vr$78, 1 );
	if( VERBOSE$1 == 0ll ) goto label$1519;
	{
		FBSTRING* vr$79 = fb_StrAllocTempDescZEx( (char*)"  -target <name>   Set cross-compilation target", 47ll );
		fb_PrintString( 0, (FBSTRING*)vr$79, 1 );
	}
	goto label$1518;
	label$1519:;
	{
		FBSTRING* vr$80 = fb_StrAllocTempDescZEx( (char*)"  -target <name>   Set cross-compilation target", 47ll );
		fb_PrintString( 0, (FBSTRING*)vr$80, 1 );
	}
	label$1518:;
	FBSTRING* vr$81 = fb_StrAllocTempDescZEx( (char*)"  -title <name>    Set XBE display title (xbox)", 47ll );
	fb_PrintString( 0, (FBSTRING*)vr$81, 1 );
	FBSTRING* vr$82 = fb_StrAllocTempDescZEx( (char*)"  -v               Be verbose", 29ll );
	fb_PrintString( 0, (FBSTRING*)vr$82, 1 );
	FBSTRING* vr$83 = fb_StrAllocTempDescZEx( (char*)"  -vec <n>         Automatic vectorization level (default: 0)", 61ll );
	fb_PrintString( 0, (FBSTRING*)vr$83, 1 );
	FBSTRING* vr$84 = fb_StrAllocTempDescZEx( (char*)"  [-]-version      Show compiler version", 40ll );
	fb_PrintString( 0, (FBSTRING*)vr$84, 1 );
	FBSTRING* vr$85 = fb_StrAllocTempDescZEx( (char*)"  -w all|pedantic|<n>  Set min warning level: all, pedantic or a value", 70ll );
	fb_PrintString( 0, (FBSTRING*)vr$85, 1 );
	if( VERBOSE$1 == 0ll ) goto label$1521;
	{
		FBSTRING* vr$86 = fb_StrAllocTempDescZEx( (char*)"  -w all           Enable all warnings", 38ll );
		fb_PrintString( 0, (FBSTRING*)vr$86, 1 );
		FBSTRING* vr$87 = fb_StrAllocTempDescZEx( (char*)"  -w none          Disable all warnings", 39ll );
		fb_PrintString( 0, (FBSTRING*)vr$87, 1 );
		FBSTRING* vr$88 = fb_StrAllocTempDescZEx( (char*)"  -w param         Enable parameter warnings", 44ll );
		fb_PrintString( 0, (FBSTRING*)vr$88, 1 );
		FBSTRING* vr$89 = fb_StrAllocTempDescZEx( (char*)"  -w escape        Enable string escape sequence warnings", 57ll );
		fb_PrintString( 0, (FBSTRING*)vr$89, 1 );
		FBSTRING* vr$90 = fb_StrAllocTempDescZEx( (char*)"  -w next          Enable next statement warnings", 49ll );
		fb_PrintString( 0, (FBSTRING*)vr$90, 1 );
		FBSTRING* vr$91 = fb_StrAllocTempDescZEx( (char*)"  -w signedness    Enable type signedness warnings", 50ll );
		fb_PrintString( 0, (FBSTRING*)vr$91, 1 );
		FBSTRING* vr$92 = fb_StrAllocTempDescZEx( (char*)"  -w constness     Enable const type warnings", 45ll );
		fb_PrintString( 0, (FBSTRING*)vr$92, 1 );
		FBSTRING* vr$93 = fb_StrAllocTempDescZEx( (char*)"  -w suffix        Enable invalid suffix warnings", 49ll );
		fb_PrintString( 0, (FBSTRING*)vr$93, 1 );
		FBSTRING* vr$94 = fb_StrAllocTempDescZEx( (char*)"  -w error         Report warnings as errors", 44ll );
		fb_PrintString( 0, (FBSTRING*)vr$94, 1 );
		FBSTRING* vr$95 = fb_StrAllocTempDescZEx( (char*)"  -w upcast        Enable warning when up-casting discards initializers", 71ll );
		fb_PrintString( 0, (FBSTRING*)vr$95, 1 );
	}
	label$1521:;
	label$1520:;
	FBSTRING* vr$96 = fb_StrAllocTempDescZEx( (char*)"  -Wa <a,b,c>      Pass options to 'as'", 39ll );
	fb_PrintString( 0, (FBSTRING*)vr$96, 1 );
	FBSTRING* vr$97 = fb_StrAllocTempDescZEx( (char*)"  -Wc <a,b,c>      Pass options to 'gcc' (-gen gcc) or 'llc' (-gen llvm)", 72ll );
	fb_PrintString( 0, (FBSTRING*)vr$97, 1 );
	FBSTRING* vr$98 = fb_StrAllocTempDescZEx( (char*)"  -Wl <a,b,c>      Pass options to 'ld'", 39ll );
	fb_PrintString( 0, (FBSTRING*)vr$98, 1 );
	FBSTRING* vr$99 = fb_StrAllocTempDescZEx( (char*)"  -x <file>        Set output executable/library file name", 58ll );
	fb_PrintString( 0, (FBSTRING*)vr$99, 1 );
	if( VERBOSE$1 == 0ll ) goto label$1523;
	{
		FBSTRING* vr$100 = fb_StrAllocTempDescZEx( (char*)"  -z fbrt          Link with 'fbrt' instead of 'fb' runtime library", 67ll );
		fb_PrintString( 0, (FBSTRING*)vr$100, 1 );
		FBSTRING* vr$101 = fb_StrAllocTempDescZEx( (char*)"  -z gosub-setjmp  Use setjmp/longjmp to implement GOSUB", 56ll );
		fb_PrintString( 0, (FBSTRING*)vr$101, 1 );
		FBSTRING* vr$102 = fb_StrAllocTempDescZEx( (char*)"  -z no-thiscall   Don't use '__thiscall' calling convention", 60ll );
		fb_PrintString( 0, (FBSTRING*)vr$102, 1 );
		FBSTRING* vr$103 = fb_StrAllocTempDescZEx( (char*)"  -z no-fastcall   Don't use '__fastcall' calling convention", 60ll );
		fb_PrintString( 0, (FBSTRING*)vr$103, 1 );
		FBSTRING* vr$104 = fb_StrAllocTempDescZEx( (char*)"  -z nobuiltins    Disable all non-required builtin procedure definitions", 73ll );
		fb_PrintString( 0, (FBSTRING*)vr$104, 1 );
		FBSTRING* vr$105 = fb_StrAllocTempDescZEx( (char*)"  -z nocmdline     Disable #cmdline source directives", 53ll );
		fb_PrintString( 0, (FBSTRING*)vr$105, 1 );
		FBSTRING* vr$106 = fb_StrAllocTempDescZEx( (char*)"  -z optabstract   Only supports optimizing purely abstract types", 65ll );
		fb_PrintString( 0, (FBSTRING*)vr$106, 1 );
		FBSTRING* vr$107 = fb_StrAllocTempDescZEx( (char*)"  -z retinflts     Enable returning some types in floating point registers", 74ll );
		fb_PrintString( 0, (FBSTRING*)vr$107, 1 );
		FBSTRING* vr$108 = fb_StrAllocTempDescZEx( (char*)"  -z valist-as-ptr Use pointer expressions to implement CVA_*() macros", 70ll );
		fb_PrintString( 0, (FBSTRING*)vr$108, 1 );
	}
	goto label$1522;
	label$1523:;
	{
		FBSTRING* vr$109 = fb_StrAllocTempDescZEx( (char*)"  -z <option>      Extended options (see fbc -help -v)", 54ll );
		fb_PrintString( 0, (FBSTRING*)vr$109, 1 );
	}
	label$1522:;
	label$1505:;
}

static void HPRINTVERSION( int64 VERBOSE$1 )
{
	FBSTRING TMP$861$1;
	FBSTRING TMP$862$1;
	FBSTRING TMP$863$1;
	FBSTRING TMP$864$1;
	label$1528:;
	FBSTRING CONFIG$1;
	__builtin_memset( &CONFIG$1, 0, 24ll );
	int64 vr$1 = FBGETHOSTBITS(  );
	FBSTRING* vr$2 = fb_LongintToStr( vr$1 );
	FBSTRING* vr$3 = FBGETHOSTID(  );
	__builtin_memset( &TMP$861$1, 0, 24ll );
	FBSTRING* vr$6 = fb_StrConcat( &TMP$861$1, (void*)"FreeBASIC Compiler - Version 1.20.0 (2026-05-15), built for ", 61ll, (void*)vr$3, -1ll );
	__builtin_memset( &TMP$862$1, 0, 24ll );
	FBSTRING* vr$9 = fb_StrConcat( &TMP$862$1, (void*)vr$6, -1ll, (void*)" (", 3ll );
	__builtin_memset( &TMP$863$1, 0, 24ll );
	FBSTRING* vr$12 = fb_StrConcat( &TMP$863$1, (void*)vr$9, -1ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$864$1, 0, 24ll );
	FBSTRING* vr$15 = fb_StrConcat( &TMP$864$1, (void*)vr$12, -1ll, (void*)"bit)", 5ll );
	fb_PrintString( 0, (FBSTRING*)vr$15, 1 );
	FBSTRING* vr$16 = fb_StrAllocTempDescZEx( (char*)"Copyright (C) 2004-2025 The FreeBASIC development team.", 55ll );
	fb_PrintString( 0, (FBSTRING*)vr$16, 1 );
	int64 vr$18 = fb_StrLen( (void*)&CONFIG$1, -1ll );
	if( vr$18 <= 0ll ) goto label$1531;
	{
		fb_PrintString( 0, (FBSTRING*)&CONFIG$1, 1 );
	}
	label$1531:;
	label$1530:;
	if( VERBOSE$1 == 0ll ) goto label$1533;
	{
		FBCPRINTTARGETINFO(  );
		goto label$1535;
		{
			FBSTRING* vr$20 = fb_StrAllocTempDescZEx( (char*)"source sha-1: ", 14ll );
			fb_PrintString( 0, (FBSTRING*)vr$20, 1 );
		}
		label$1535:;
		label$1534:;
		goto label$1537;
		{
			FBSTRING* vr$21 = fb_StrAllocTempDescZEx( (char*)"fbc fork id:  ", 14ll );
			fb_PrintString( 0, (FBSTRING*)vr$21, 1 );
		}
		label$1537:;
		label$1536:;
	}
	label$1533:;
	label$1532:;
	fb_StrDelete( (FBSTRING*)&CONFIG$1 );
	label$1529:;
}

__attribute__(( constructor )) static void _GLOBAL__I( void )
{
	label$1595:;
	_ZN6FBCCTXC1Ev( &FBC$ );
	label$1596:;
}

__attribute__(( destructor )) static void _GLOBAL__D( void )
{
	label$1598:;
	_ZN6FBCCTXD1Ev( &FBC$ );
	label$1599:;
}
