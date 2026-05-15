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
	label$534:;
	{
		int64 I$2;
		I$2 = 0ll;
		label$539:;
		{
			int32 vr$2 = fb_StrCompare( (void*)ARCH$1, -1ll, *(void**)((int64)(struct $13FBGNUARCHINFO*)GNUARCHMAP$ + (I$2 << (4ll & 63ll))), 0ll );
			if( (int64)vr$2 != 0ll ) goto label$541;
			{
				fb$result$1 = *(int64*)(((int64)(struct $13FBGNUARCHINFO*)GNUARCHMAP$ + (I$2 << (4ll & 63ll))) + 8ll);
				goto label$535;
			}
			label$541:;
			label$540:;
		}
		label$537:;
		I$2 = I$2 + 1ll;
		label$536:;
		if( I$2 <= 20ll ) goto label$539;
		label$538:;
	}
	fb$result$1 = -1ll;
	goto label$535;
	label$535:;
	return fb$result$1;
}

void FBCPARSEARGSFROMSTRING( char* ARGS_IN$1, int64 IS_SOURCE$1, int64 IS_FILE$1 )
{
	label$1019:;
	FBSTRING ARGS$1;
	fb_StrInit( (void*)&ARGS$1, -1ll, (void*)ARGS_IN$1, 0ll, 0 );
	FBSTRING ARG$1;
	__builtin_memset( &ARG$1, 0, 24ll );
	label$1021:;
	{
		int64 LENGTH$2;
		int64 vr$3 = fb_StrLen( (void*)&ARGS$1, -1ll );
		LENGTH$2 = vr$3;
		if( LENGTH$2 != 0ll ) goto label$1025;
		{
			goto label$1022;
		}
		label$1025:;
		label$1024:;
		int64 I$2;
		I$2 = 0ll;
		int64 QUOTECH$2;
		QUOTECH$2 = 0ll;
		label$1026:;
		if( I$2 >= LENGTH$2 ) goto label$1027;
		{
			int64 CH$3;
			CH$3 = (int64)*(uint8*)((uint8*)*(char**)&ARGS$1 + I$2);
			{
				uint64 TMP$519$4;
				TMP$519$4 = (uint64)CH$3;
				goto label$1029;
				label$1030:;
				{
					if( QUOTECH$2 != 0ll ) goto label$1032;
					{
						goto label$1027;
					}
					label$1032:;
					label$1031:;
				}
				goto label$1028;
				label$1033:;
				{
					if( QUOTECH$2 != CH$3 ) goto label$1035;
					{
						QUOTECH$2 = 0ll;
					}
					goto label$1034;
					label$1035:;
					if( QUOTECH$2 != 0ll ) goto label$1036;
					{
						QUOTECH$2 = CH$3;
					}
					label$1036:;
					label$1034:;
				}
				goto label$1028;
				label$1029:;
				static const void* tmp$521[8ll] = {
					&&label$1030,
					&&label$1028,
					&&label$1033,
					&&label$1028,
					&&label$1028,
					&&label$1028,
					&&label$1028,
					&&label$1033,
				};
				if( (TMP$519$4 - 32ull) > 7ull ) goto label$1028;
				goto *tmp$521[TMP$519$4 - 32ull];
				label$1028:;
			}
			I$2 = I$2 + 1ll;
		}
		goto label$1026;
		label$1027:;
		if( I$2 != 0ll ) goto label$1038;
		{
			I$2 = 1ll;
		}
		goto label$1037;
		label$1038:;
		{
			FBSTRING* vr$8 = fb_LEFT( (FBSTRING*)&ARGS$1, I$2 );
			fb_StrAssign( (void*)&ARG$1, -1ll, (void*)vr$8, -1ll, 0 );
			FBSTRING* vr$11 = fb_TRIM( (FBSTRING*)&ARG$1 );
			fb_StrAssign( (void*)&ARG$1, -1ll, (void*)vr$11, -1ll, 0 );
			FBSTRING* vr$14 = STRUNQUOTE( &ARG$1 );
			fb_StrAssign( (void*)&ARG$1, -1ll, (void*)vr$14, -1ll, 0 );
			HANDLEARG( &ARG$1, IS_SOURCE$1, IS_FILE$1 );
		}
		label$1037:;
		FBSTRING* vr$19 = fb_RIGHT( (FBSTRING*)&ARGS$1, LENGTH$2 - I$2 );
		fb_StrAssign( (void*)&ARGS$1, -1ll, (void*)vr$19, -1ll, 0 );
	}
	label$1023:;
	goto label$1021;
	label$1022:;
	fb_StrDelete( (FBSTRING*)&ARG$1 );
	fb_StrDelete( (FBSTRING*)&ARGS$1 );
	label$1020:;
}

int32 main( int32 __FB_ARGC__$0, char** __FB_ARGV__$0 )
{
	int32 fb$result$0;
	__builtin_memset( &fb$result$0, 0, 4ll );
	fb_Init( __FB_ARGC__$0, (char**)__FB_ARGV__$0, 0 );
	label$0:;
	FBCINIT(  );
	if( (int64)__FB_ARGC__$0 != 1ll ) goto label$1543;
	{
		HPRINTOPTIONS( 0ll );
		FBCEND( 1ll );
	}
	label$1543:;
	label$1542:;
	HPARSEARGS( (int64)__FB_ARGC__$0, (char**)__FB_ARGV__$0 );
	HCHECKARGS(  );
	if( *(int64*)((uint8*)&FBC$ + 120ll) == 0ll ) goto label$1545;
	{
		HPRINTVERSION( *(int64*)((uint8*)&FBC$ + 112ll) );
		FBCEND( 0ll );
	}
	label$1545:;
	label$1544:;
	if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$1547;
	{
		*(int64*)((uint8*)&FBC$ + 120ll) = -1ll;
		HPRINTVERSION( 0ll );
	}
	label$1547:;
	label$1546:;
	if( *(int64*)((uint8*)&FBC$ + 128ll) == 0ll ) goto label$1549;
	{
		HPRINTOPTIONS( *(int64*)((uint8*)&FBC$ + 112ll) );
		FBCEND( 1ll );
	}
	label$1549:;
	label$1548:;
	label$1550:;
	{
		FBSTRING TMP$870$1;
		FBCDETERMINEPREFIX(  );
		FBCSETUPCOMPILERPATHS(  );
		if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$1554;
		{
			FBCPRINTTARGETINFO(  );
		}
		label$1554:;
		label$1553:;
		__builtin_memset( &TMP$870$1, 0, 24ll );
		fb_StrAssign( (void*)&TMP$870$1, -1ll, (void*)((uint8*)&FBC$ + 3298ll), 261ll, 0 );
		FBADDINCLUDEPATH( &TMP$870$1 );
		fb_StrDelete( (FBSTRING*)&TMP$870$1 );
		int64 HAVE_INPUT_FILES$1;
		void* vr$9 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 144ll) );
		void* vr$12 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 400ll) );
		void* vr$16 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 528ll) );
		void* vr$20 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 464ll) );
		HAVE_INPUT_FILES$1 = (((int64)-(vr$9 != (void*)0ull) | (int64)-(vr$12 != (void*)0ull)) | (int64)-(vr$16 != (void*)0ull)) | (int64)-(vr$20 != (void*)0ull);
		if( *(int64*)((uint8*)&FBC$ + 136ll) < 0ll ) goto label$1556;
		{
			{
				int64 TMP$871$3;
				TMP$871$3 = *(int64*)((uint8*)&FBC$ + 136ll);
				if( TMP$871$3 != 0ll ) goto label$1558;
				label$1559:;
				{
					FBSTRING* vr$23 = FBGETHOSTID(  );
					fb_PrintString( 0, (FBSTRING*)vr$23, 1 );
				}
				goto label$1557;
				label$1558:;
				if( TMP$871$3 != 1ll ) goto label$1560;
				label$1561:;
				{
					FBSTRING* vr$24 = FBGETTARGETID(  );
					fb_PrintString( 0, (FBSTRING*)vr$24, 1 );
				}
				goto label$1557;
				label$1560:;
				if( TMP$871$3 != 2ll ) goto label$1562;
				label$1563:;
				{
					if( HAVE_INPUT_FILES$1 == 0ll ) goto label$1565;
					{
						FBCDETERMINEMAINNAME(  );
					}
					label$1565:;
					label$1564:;
					HSETOUTNAME(  );
					FBSTRING* vr$26 = fb_StrAllocTempDescZ( (char*)((uint8*)&FBC$ + 968ll) );
					fb_PrintString( 0, (FBSTRING*)vr$26, 1 );
				}
				goto label$1557;
				label$1562:;
				if( TMP$871$3 != 3ll ) goto label$1566;
				label$1567:;
				{
					FBSTRING* vr$28 = fb_StrAllocTempDescZ( (char*)((uint8*)&FBC$ + 3559ll) );
					fb_PrintString( 0, (FBSTRING*)vr$28, 1 );
				}
				goto label$1557;
				label$1566:;
				if( TMP$871$3 != 4ll ) goto label$1568;
				label$1569:;
				{
					FBSTRING* vr$29 = fb_StrAllocTempDescZEx( (char*)"", 0ll );
					fb_PrintString( 0, (FBSTRING*)vr$29, 1 );
				}
				goto label$1557;
				label$1568:;
				if( TMP$871$3 != 5ll ) goto label$1570;
				label$1571:;
				{
					FBSTRING* vr$30 = fb_StrAllocTempDescZEx( (char*)"", 0ll );
					fb_PrintString( 0, (FBSTRING*)vr$30, 1 );
				}
				label$1570:;
				label$1557:;
			}
			FBCEND( 0ll );
		}
		label$1556:;
		label$1555:;
		FBCDETERMINEMAINNAME(  );
		if( HAVE_INPUT_FILES$1 != 0ll ) goto label$1573;
		{
			HPRINTOPTIONS( *(int64*)((uint8*)&FBC$ + 112ll) );
			FBCEND( 1ll );
		}
		label$1573:;
		label$1572:;
		HCOMPILEMODULES(  );
		int64 vr$31 = FBSHOULDRESTART(  );
		if( vr$31 != 0ll ) goto label$1575;
		{
			goto label$1551;
		}
		label$1575:;
		label$1574:;
		FBRESTARTENDREQUEST( 8ll );
		ERRPREINIT(  );
		HCHECKARGS(  );
		if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$1577;
		{
			FBSTRING* vr$32 = fb_StrAllocTempDescZEx( (char*)"Restarting fbc ...", 18ll );
			fb_PrintString( 0, (FBSTRING*)vr$32, 1 );
		}
		label$1577:;
		label$1576:;
	}
	label$1552:;
	goto label$1550;
	label$1551:;
	int64 vr$33 = HCOMPILEXPM(  );
	if( vr$33 != 0ll ) goto label$1579;
	{
		FBCEND( 1ll );
	}
	label$1579:;
	label$1578:;
	if( *(int64*)((uint8*)&FBC$ + 72ll) == 0ll ) goto label$1581;
	{
		FBCEND( 0ll );
	}
	label$1581:;
	label$1580:;
	int64 vr$34 = FBGETOPTION( 2ll );
	int64 vr$36 = FBGETOPTION( 2ll );
	if( ((int64)-(vr$34 != 0ll) & (int64)-(vr$36 != 4ll)) == 0ll ) goto label$1583;
	{
		HCOMPILESTAGE2MODULES(  );
	}
	label$1583:;
	label$1582:;
	if( *(int64*)((uint8*)&FBC$ + 88ll) == 0ll ) goto label$1585;
	{
		FBCEND( 0ll );
	}
	label$1585:;
	label$1584:;
	HASSEMBLEMODULES(  );
	HASSEMBLERCS(  );
	HASSEMBLEXPM(  );
	int64 vr$39 = FBGETOPTION( 0ll );
	if( vr$39 != 3ll ) goto label$1587;
	{
		FBCEND( 0ll );
	}
	label$1587:;
	label$1586:;
	HSETDEFAULTLIBPATHS(  );
	int64 vr$40 = FBGETOPTION( 40ll );
	int64 vr$41 = FBISCROSSCOMP(  );
	if( (vr$40 & ~vr$41) == 0ll ) goto label$1589;
	{
		HCOLLECTOBJINFO(  );
	}
	label$1589:;
	label$1588:;
	int64 vr$44 = FBGETOPTION( 0ll );
	if( vr$44 != 1ll ) goto label$1591;
	{
		int64 vr$45 = HARCHIVEFILES(  );
		if( vr$45 != 0ll ) goto label$1593;
		{
			FBCEND( 1ll );
		}
		label$1593:;
		label$1592:;
		FBCEND( 0ll );
	}
	label$1591:;
	label$1590:;
	if( *(int64*)((uint8*)&FBC$ + 2744ll) != 0ll ) goto label$1595;
	{
		HADDDEFAULTLIBS(  );
	}
	label$1595:;
	label$1594:;
	HEXCLUDELIBSFROMLINK(  );
	int64 vr$46 = HLINKFILES(  );
	if( vr$46 != 0ll ) goto label$1597;
	{
		FBCEND( 1ll );
	}
	label$1597:;
	label$1596:;
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
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"-arch armv7 ", 13ll, 0 );
				}
				goto label$250;
				label$255:;
				if( TMP$147$4 != 3ll ) goto label$257;
				label$258:;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"-arch arm64 ", 13ll, 0 );
				}
				label$257:;
				label$250:;
			}
		}
		goto label$221;
		label$248:;
		if( TMP$135$2 == 13ll ) goto label$260;
		label$261:;
		if( TMP$135$2 == 14ll ) goto label$260;
		label$262:;
		if( TMP$135$2 == 15ll ) goto label$260;
		label$263:;
		if( TMP$135$2 != 16ll ) goto label$259;
		label$260:;
		{
		}
		label$259:;
		label$221:;
	}
	fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"-o \x22", 5ll, 0 );
	fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 968ll), 261ll, 0 );
	fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"\x22", 2ll, 0 );
	int64 vr$51 = FBGETOPTION( 3ll );
	int64 vr$53 = FBGETOPTION( 0ll );
	if( ((int64)-(vr$51 == 4ll) & (int64)-(vr$53 == 2ll)) == 0ll ) goto label$265;
	{
		FBSTRING TMP$156$2;
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -I \x22lib", 9ll, 0 );
		__builtin_memset( &TMP$156$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$156$2, -1ll, (void*)((uint8*)&FBC$ + 968ll), 261ll, 0 );
		FBSTRING* vr$61 = HSTRIPEXT( &TMP$156$2 );
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$61, -1ll, 0 );
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"_il.a\x22", 7ll, 0 );
		fb_StrDelete( (FBSTRING*)&TMP$156$2 );
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -U", 4ll, 0 );
		{
			FBSTRING* OBJFILE$3;
			void* vr$67 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 400ll) );
			OBJFILE$3 = (FBSTRING*)vr$67;
			label$266:;
			if( OBJFILE$3 == (FBSTRING*)0ull ) goto label$267;
			{
				FBSTRING TMP$159$4;
				FBSTRING TMP$160$4;
				FBSTRING TMP$161$4;
				__builtin_memset( &TMP$159$4, 0, 24ll );
				FBSTRING* vr$70 = fb_StrConcat( &TMP$159$4, (void*)" \x22", 3ll, (void*)OBJFILE$3, -1ll );
				__builtin_memset( &TMP$160$4, 0, 24ll );
				FBSTRING* vr$73 = fb_StrConcat( &TMP$160$4, (void*)vr$70, -1ll, (void*)"\x22", 2ll );
				__builtin_memset( &TMP$161$4, 0, 24ll );
				FBSTRING* vr$77 = fb_StrConcat( &TMP$161$4, (void*)&LDCLINE$1, -1ll, (void*)vr$73, -1ll );
				fb_StrAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$77, -1ll, 0 );
				void* vr$79 = LISTGETNEXT( (void*)OBJFILE$3 );
				OBJFILE$3 = (FBSTRING*)vr$79;
			}
			goto label$266;
			label$267:;
		}
		{
			FBSTRING* LIBFILE$3;
			void* vr$81 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 464ll) );
			LIBFILE$3 = (FBSTRING*)vr$81;
			if( LIBFILE$3 == (FBSTRING*)0ull ) goto label$269;
			{
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -lc", 5ll, 0 );
			}
			label$269:;
			label$268:;
			label$270:;
			if( LIBFILE$3 == (FBSTRING*)0ull ) goto label$271;
			{
				FBSTRING TMP$163$4;
				FBSTRING TMP$164$4;
				FBSTRING TMP$165$4;
				__builtin_memset( &TMP$163$4, 0, 24ll );
				FBSTRING* vr$85 = fb_StrConcat( &TMP$163$4, (void*)" \x22", 3ll, (void*)LIBFILE$3, -1ll );
				__builtin_memset( &TMP$164$4, 0, 24ll );
				FBSTRING* vr$88 = fb_StrConcat( &TMP$164$4, (void*)vr$85, -1ll, (void*)"\x22", 2ll );
				__builtin_memset( &TMP$165$4, 0, 24ll );
				FBSTRING* vr$92 = fb_StrConcat( &TMP$165$4, (void*)&LDCLINE$1, -1ll, (void*)vr$88, -1ll );
				fb_StrAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$92, -1ll, 0 );
				void* vr$94 = LISTGETNEXT( (void*)LIBFILE$3 );
				LIBFILE$3 = (FBSTRING*)vr$94;
			}
			goto label$270;
			label$271:;
		}
		int64 vr$96 = FBCRUNBIN( (char*)"making DXE", 11ll, &LDCLINE$1 );
		fb$result$1 = vr$96;
		fb_StrDelete( (FBSTRING*)&DEFFILE$1 );
		fb_StrDelete( (FBSTRING*)&DLLNAME$1 );
		fb_StrDelete( (FBSTRING*)&LDCLINE$1 );
		goto label$220;
	}
	label$265:;
	label$264:;
	{
		uint64 TMP$167$2;
		int64 vr$100 = FBGETOPTION( 3ll );
		TMP$167$2 = (uint64)vr$100;
		goto label$273;
		label$274:;
		{
			int64 vr$102 = fb_StrLen( (void*)((uint8*)&FBC$ + 1893ll), 129ll );
			if( vr$102 != 0ll ) goto label$276;
			{
				fb_StrAssign( (void*)((uint8*)&FBC$ + 1893ll), 129ll, (void*)"console", 8ll, 0 );
			}
			goto label$275;
			label$276:;
			{
				int32 vr$105 = fb_StrCompare( (void*)((uint8*)&FBC$ + 1893ll), 129ll, (void*)"gui", 4ll );
				if( (int64)vr$105 != 0ll ) goto label$278;
				{
					fb_StrAssign( (void*)((uint8*)&FBC$ + 1893ll), 129ll, (void*)"windows", 8ll, 0 );
				}
				label$278:;
				label$277:;
			}
			label$275:;
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -subsystem ", 13ll, 0 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 1893ll), 129ll, 0 );
			int64 vr$111 = FBGETOPTION( 0ll );
			if( vr$111 != 2ll ) goto label$280;
			{
				FBSTRING TMP$172$4;
				FBSTRING TMP$173$4;
				__builtin_memset( &TMP$173$4, 0, 24ll );
				__builtin_memset( &TMP$172$4, 0, 24ll );
				fb_StrAssign( (void*)&TMP$172$4, -1ll, (void*)((uint8*)&FBC$ + 968ll), 261ll, 0 );
				FBSTRING* vr$117 = HSTRIPEXT( &TMP$172$4 );
				fb_StrAssign( (void*)&TMP$173$4, -1ll, (void*)vr$117, -1ll, 0 );
				FBSTRING* vr$119 = HSTRIPPATH( (char*)*(char**)&TMP$173$4 );
				fb_StrAssign( (void*)&DLLNAME$1, -1ll, (void*)vr$119, -1ll, 0 );
				fb_StrDelete( (FBSTRING*)&TMP$173$4 );
				fb_StrDelete( (FBSTRING*)&TMP$172$4 );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --dll --enable-stdcall-fixup", 30ll, 0 );
				int64 vr$124 = FBGETCPUFAMILY(  );
				if( vr$124 != 0ll ) goto label$282;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -e _DllMainCRTStartup@12", 26ll, 0 );
				}
				goto label$281;
				label$282:;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -e DllMainCRTStartup", 22ll, 0 );
				}
				label$281:;
			}
			label$280:;
			label$279:;
		}
		goto label$272;
		label$283:;
		{
			int64 vr$127 = FBGETOPTION( 0ll );
			if( vr$127 != 2ll ) goto label$285;
			{
				FBSTRING TMP$177$4;
				FBSTRING TMP$178$4;
				__builtin_memset( &TMP$178$4, 0, 24ll );
				__builtin_memset( &TMP$177$4, 0, 24ll );
				fb_StrAssign( (void*)&TMP$177$4, -1ll, (void*)((uint8*)&FBC$ + 968ll), 261ll, 0 );
				FBSTRING* vr$133 = HSTRIPEXT( &TMP$177$4 );
				fb_StrAssign( (void*)&TMP$178$4, -1ll, (void*)vr$133, -1ll, 0 );
				FBSTRING* vr$135 = HSTRIPPATH( (char*)*(char**)&TMP$178$4 );
				fb_StrAssign( (void*)&DLLNAME$1, -1ll, (void*)vr$135, -1ll, 0 );
				fb_StrDelete( (FBSTRING*)&TMP$178$4 );
				fb_StrDelete( (FBSTRING*)&TMP$177$4 );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -shared -h", 12ll, 0 );
				FBSTRING* vr$141 = HSTRIPPATH( (char*)((uint8*)&FBC$ + 968ll) );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$141, -1ll, 0 );
				FBSTRING* vr$144 = fb_LEFT( (FBSTRING*)&DLLNAME$1, 3ll );
				int32 vr$145 = fb_StrCompare( (void*)vr$144, -1ll, (void*)"lib", 4ll );
				if( (int64)vr$145 != 0ll ) goto label$287;
				{
					int64 vr$148 = fb_StrLen( (void*)&DLLNAME$1, -1ll );
					FBSTRING* vr$151 = fb_RIGHT( (FBSTRING*)&DLLNAME$1, vr$148 + -3ll );
					fb_StrAssign( (void*)&DLLNAME$1, -1ll, (void*)vr$151, -1ll, 0 );
				}
				label$287:;
				label$286:;
			}
			goto label$284;
			label$285:;
			{
				{
					uint64 TMP$180$5;
					int64 vr$153 = FBGETOPTION( 3ll );
					TMP$180$5 = (uint64)vr$153;
					goto label$289;
					label$290:;
					{
						fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /libexec/ld-elf.so.1", 38ll, 0 );
					}
					goto label$288;
					label$291:;
					{
						fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /libexec/ld-elf.so.2", 38ll, 0 );
					}
					goto label$288;
					label$292:;
					{
						fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --dynamic-linker /lib/64/ld.so.1", 34ll, 0 );
					}
					goto label$288;
					label$293:;
					{
						{
							int64 TMP$184$7;
							int64 vr$157 = FBGETCPUFAMILY(  );
							TMP$184$7 = vr$157;
							if( TMP$184$7 != 0ll ) goto label$295;
							label$296:;
							{
								fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /lib/ld-linux.so.2", 36ll, 0 );
							}
							goto label$294;
							label$295:;
							if( TMP$184$7 != 1ll ) goto label$297;
							label$298:;
							{
								fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /lib64/ld-linux-x86-64.so.2", 45ll, 0 );
							}
							goto label$294;
							label$297:;
							if( TMP$184$7 != 2ll ) goto label$299;
							label$300:;
							{
								fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /lib/ld-linux-armhf.so.3", 42ll, 0 );
							}
							goto label$294;
							label$299:;
							if( TMP$184$7 != 3ll ) goto label$301;
							label$302:;
							{
								fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /lib/ld-linux-aarch64.so.1", 44ll, 0 );
							}
							label$301:;
							label$294:;
						}
					}
					goto label$288;
					label$303:;
					{
						fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /usr/libexec/ld.elf_so", 40ll, 0 );
					}
					goto label$288;
					label$304:;
					{
						fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /usr/libexec/ld.so", 36ll, 0 );
					}
					goto label$288;
					label$305:;
					{
						fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /system/bin/linker", 36ll, 0 );
					}
					goto label$288;
					label$289:;
					static const void* tmp$873[10ll] = {
						&&label$293,
						&&label$305,
						&&label$288,
						&&label$288,
						&&label$290,
						&&label$291,
						&&label$292,
						&&label$304,
						&&label$288,
						&&label$303,
					};
					if( (TMP$180$5 - 2ull) > 9ull ) goto label$288;
					goto *tmp$873[TMP$180$5 - 2ull];
					label$288:;
				}
			}
			label$284:;
			int64 vr$165 = FBGETOPTION( 0ll );
			int64 vr$167 = FBGETOPTION( 34ll );
			int64 vr$169 = FBGETOPTION( 3ll );
			if( (((int64)-(vr$165 == 2ll) | vr$167) & (int64)-(vr$169 != 8ll)) == 0ll ) goto label$307;
			{
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --export-dynamic", 18ll, 0 );
			}
			label$307:;
			label$306:;
		}
		goto label$272;
		label$308:;
		{
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -nostdlib --file-alignment 0x20 --section-alignment 0x20 -shared", 66ll, 0 );
		}
		goto label$272;
		label$309:;
		{
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -O", 4ll, 0 );
			int64 vr$175 = FBGETOPTION( 8ll );
			FBSTRING* vr$176 = fb_LongintToStr( vr$175 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$176, -1ll, 0 );
			static char EMSCRIPTEN_OPTIONS$3[5][32] = { "CASE_INSENSITIVE_FS=1", "TOTAL_MEMORY=67108864", "ALLOW_MEMORY_GROWTH=1", "RETAIN_COMPILER_SETTINGS=1", "ASYNCIFY=1" };
			static struct $8FBARRAY1IcE tmp$200$3 = { (char*)EMSCRIPTEN_OPTIONS$3, (char*)EMSCRIPTEN_OPTIONS$3, 160ll, 32ll, 1ll, 49ll, { { 5ll, 0ll, 4ll } } };
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -Wno-warn-absolute-paths", 26ll, 0 );
			{
				int64 I$4;
				I$4 = 0ll;
				label$313:;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -s ", 5ll, 0 );
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((int64)(char*)EMSCRIPTEN_OPTIONS$3 + (I$4 << (5ll & 63ll))), 32ll, 0 );
				}
				label$311:;
				I$4 = I$4 + 1ll;
				label$310:;
				if( I$4 <= 4ll ) goto label$313;
				label$312:;
			}
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --shell-file", 14ll, 0 );
			FBSTRING* vr$185 = HFINDLIB( (char*)"fb_shell.html" );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$185, -1ll, 0 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --post-js", 11ll, 0 );
			FBSTRING* vr$188 = HFINDLIB( (char*)"fb_rtlib.js" );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$188, -1ll, 0 );
			int64 vr$191 = fb_StrLen( (void*)((uint8*)&FBC$ + 1893ll), 129ll );
			if( vr$191 != 0ll ) goto label$315;
			{
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --post-js", 11ll, 0 );
				FBSTRING* vr$193 = HFINDLIB( (char*)"termlib_min.js" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$193, -1ll, 0 );
			}
			label$315:;
			label$314:;
		}
		goto label$272;
		label$273:;
		static const void* tmp$874[13ll] = {
			&&label$274,
			&&label$274,
			&&label$283,
			&&label$283,
			&&label$272,
			&&label$308,
			&&label$283,
			&&label$283,
			&&label$283,
			&&label$283,
			&&label$283,
			&&label$283,
			&&label$309,
		};
		if( TMP$167$2 > 12ull ) goto label$272;
		goto *tmp$874[TMP$167$2 - 0ull];
		label$272:;
	}
	int64 vr$195 = FBGETOPTION( 3ll );
	if( vr$195 != 4ll ) goto label$317;
	{
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -T \x22", 6ll, 0 );
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 3559ll), 261ll, 0 );
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"/i386go32.x\x22", 13ll, 0 );
	}
	goto label$316;
	label$317:;
	{
		int64 vr$200 = FBGETOPTION( 40ll );
		int64 vr$201 = FBGETOPTION( 3ll );
		int64 vr$204 = FBGETOPTION( 3ll );
		int64 vr$207 = FBGETOPTION( 3ll );
		int64 vr$210 = FBCISUSINGGOLDLINKER(  );
		if( ((((vr$200 & (int64)-(vr$201 != 10ll)) & (int64)-(vr$204 != 8ll)) & (int64)-(vr$207 != 12ll)) & ~vr$210) == 0ll ) goto label$319;
		{
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -T \x22", 6ll, 0 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 3559ll), 261ll, 0 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"/fbextra.x\x22", 12ll, 0 );
		}
		label$319:;
		label$318:;
	}
	label$316:;
	{
		uint64 TMP$213$2;
		int64 vr$217 = FBGETOPTION( 3ll );
		TMP$213$2 = (uint64)vr$217;
		goto label$321;
		label$322:;
		{
			int64 STACKSIZE$3;
			int64 vr$218 = FBGETOPTION( 39ll );
			STACKSIZE$3 = vr$218;
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --stack ", 10ll, 0 );
			FBSTRING* vr$220 = fb_LongintToStr( STACKSIZE$3 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$220, -1ll, 0 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)",", 2ll, 0 );
			FBSTRING* vr$223 = fb_LongintToStr( STACKSIZE$3 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$223, -1ll, 0 );
			int64 vr$225 = FBGETOPTION( 0ll );
			if( vr$225 != 2ll ) goto label$324;
			{
				FBSTRING TMP$216$4;
				__builtin_memset( &TMP$216$4, 0, 24ll );
				fb_StrAssign( (void*)&TMP$216$4, -1ll, (void*)((uint8*)&FBC$ + 968ll), 261ll, 0 );
				FBSTRING* vr$230 = HSTRIPEXT( &TMP$216$4 );
				fb_StrAssign( (void*)&DEFFILE$1, -1ll, (void*)vr$230, -1ll, 0 );
				fb_StrConcatAssign( (void*)&DEFFILE$1, -1ll, (void*)".def", 5ll, 0 );
				fb_StrDelete( (FBSTRING*)&TMP$216$4 );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --output-def \x22", 16ll, 0 );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)&DEFFILE$1, -1ll, 0 );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"\x22", 2ll, 0 );
			}
			label$324:;
			label$323:;
		}
		goto label$320;
		label$325:;
		{
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -e _WinMainCRTStartup", 23ll, 0 );
		}
		goto label$320;
		label$321:;
		static const void* tmp$875[6ll] = {
			&&label$322,
			&&label$322,
			&&label$320,
			&&label$320,
			&&label$320,
			&&label$325,
		};
		if( TMP$213$2 > 5ull ) goto label$320;
		goto *tmp$875[TMP$213$2 - 0ull];
		label$320:;
	}
	if( *(int64*)((uint8*)&FBC$ + 2760ll) == 0ll ) goto label$327;
	{
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -Bstatic", 10ll, 0 );
	}
	label$327:;
	label$326:;
	int64 vr$240 = FBGETOPTION( 38ll );
	if( vr$240 == 0ll ) goto label$329;
	{
		int64 vr$241 = FBGETOPTION( 0ll );
		if( vr$241 != 0ll ) goto label$331;
		{
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -pie", 6ll, 0 );
		}
		goto label$330;
		label$331:;
		{
		}
		label$330:;
	}
	label$329:;
	label$328:;
	int64 vr$244 = fb_StrLen( (void*)((uint8*)&FBC$ + 1632ll), 261ll );
	if( vr$244 <= 0ll ) goto label$333;
	{
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -Map ", 7ll, 0 );
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 1632ll), 261ll, 0 );
	}
	label$333:;
	label$332:;
	int64 vr$248 = FBGETOPTION( 14ll );
	if( vr$248 != 0ll ) goto label$335;
	{
		int64 vr$249 = FBGETOPTION( 24ll );
		if( vr$249 == 1ll ) goto label$337;
		{
			int64 vr$250 = FBGETOPTION( 3ll );
			int64 vr$252 = FBGETOPTION( 3ll );
			if( ((int64)-(vr$250 != 10ll) & (int64)-(vr$252 != 12ll)) == 0ll ) goto label$339;
			{
				if( *(int64*)((uint8*)&FBC$ + 2768ll) == 0ll ) goto label$341;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -s", 4ll, 0 );
				}
				label$341:;
				label$340:;
			}
			label$339:;
			label$338:;
		}
		label$337:;
		label$336:;
	}
	label$335:;
	label$334:;
	{
		struct $11TSTRSETITEM* I$2;
		void* vr$257 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 880ll) );
		I$2 = (struct $11TSTRSETITEM*)vr$257;
		FBSTRING L$2;
		__builtin_memset( &L$2, 0, 24ll );
		int64 vr$259 = FBGETOPTION( 3ll );
		if( vr$259 == 12ll ) goto label$343;
		{
			fb_StrAssign( (void*)&L$2, -1ll, (void*)" -L \x22", 6ll, 0 );
		}
		goto label$342;
		label$343:;
		{
			fb_StrAssign( (void*)&L$2, -1ll, (void*)" -L\x22", 5ll, 0 );
		}
		label$342:;
		label$344:;
		if( I$2 == (struct $11TSTRSETITEM*)0ull ) goto label$345;
		{
			FBSTRING TMP$226$3;
			FBSTRING TMP$227$3;
			FBSTRING TMP$228$3;
			__builtin_memset( &TMP$226$3, 0, 24ll );
			FBSTRING* vr$267 = fb_StrConcat( &TMP$226$3, (void*)&L$2, -1ll, (void*)I$2, -1ll );
			__builtin_memset( &TMP$227$3, 0, 24ll );
			FBSTRING* vr$270 = fb_StrConcat( &TMP$227$3, (void*)vr$267, -1ll, (void*)"\x22", 2ll );
			__builtin_memset( &TMP$228$3, 0, 24ll );
			FBSTRING* vr$274 = fb_StrConcat( &TMP$228$3, (void*)&LDCLINE$1, -1ll, (void*)vr$270, -1ll );
			fb_StrAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$274, -1ll, 0 );
			void* vr$276 = LISTGETNEXT( (void*)I$2 );
			I$2 = (struct $11TSTRSETITEM*)vr$276;
		}
		goto label$344;
		label$345:;
		fb_StrDelete( (FBSTRING*)&L$2 );
	}
	int64 vr$279 = fb_StrLen( (void*)((uint8*)&FBC$ + 2354ll), 261ll );
	if( vr$279 == 0ll ) goto label$347;
	{
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --sysroot=", 12ll, 0 );
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 2354ll), 261ll, 0 );
	}
	label$347:;
	label$346:;
	{
		uint64 TMP$229$2;
		int64 vr$283 = FBGETOPTION( 3ll );
		TMP$229$2 = (uint64)vr$283;
		goto label$349;
		label$350:;
		{
			int64 vr$284 = FBGETOPTION( 0ll );
			if( vr$284 != 2ll ) goto label$352;
			{
				FBSTRING* vr$285 = HFINDLIB( (char*)"crt0.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$285, -1ll, 0 );
			}
			goto label$351;
			label$352:;
			{
				FBSTRING* vr$287 = HFINDLIB( (char*)"crt0.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$287, -1ll, 0 );
				int64 vr$289 = FBGETOPTION( 24ll );
				if( vr$289 != 1ll ) goto label$354;
				{
					FBSTRING* vr$290 = HFINDLIB( (char*)"gcrt0.o" );
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$290, -1ll, 0 );
				}
				label$354:;
				label$353:;
			}
			label$351:;
		}
		goto label$348;
		label$355:;
		{
			int64 vr$292 = FBGETOPTION( 0ll );
			if( vr$292 != 2ll ) goto label$357;
			{
				FBSTRING* vr$293 = HFINDLIB( (char*)"dllcrt2.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$293, -1ll, 0 );
			}
			goto label$356;
			label$357:;
			{
				FBSTRING* vr$295 = HFINDLIB( (char*)"crt2.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$295, -1ll, 0 );
				int64 vr$297 = FBGETOPTION( 24ll );
				if( vr$297 != 1ll ) goto label$359;
				{
					FBSTRING* vr$298 = HFINDLIB( (char*)"gcrt2.o" );
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$298, -1ll, 0 );
				}
				label$359:;
				label$358:;
			}
			label$356:;
			FBSTRING* vr$300 = HFINDLIB( (char*)"crtbegin.o" );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$300, -1ll, 0 );
		}
		goto label$348;
		label$360:;
		{
			int64 vr$302 = FBGETOPTION( 24ll );
			if( vr$302 != 1ll ) goto label$362;
			{
				FBSTRING* vr$303 = HFINDLIB( (char*)"gcrt0.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$303, -1ll, 0 );
			}
			goto label$361;
			label$362:;
			{
				FBSTRING* vr$305 = HFINDLIB( (char*)"crt0.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$305, -1ll, 0 );
			}
			label$361:;
		}
		goto label$348;
		label$363:;
		{
			int64 vr$307 = FBGETOPTION( 0ll );
			if( vr$307 != 0ll ) goto label$365;
			{
				int64 vr$308 = FBGETOPTION( 3ll );
				if( vr$308 == 10ll ) goto label$367;
				{
					int64 vr$309 = FBGETOPTION( 24ll );
					if( vr$309 == 0ll ) goto label$369;
					{
						{
							uint64 TMP$236$7;
							int64 vr$310 = FBGETOPTION( 3ll );
							TMP$236$7 = (uint64)vr$310;
							goto label$371;
							label$372:;
							{
								FBSTRING* vr$311 = HFINDLIB( (char*)"gcrt0.o" );
								fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$311, -1ll, 0 );
							}
							goto label$370;
							label$373:;
							{
								FBSTRING* vr$313 = HFINDLIB( (char*)"gcrt1.o" );
								fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$313, -1ll, 0 );
							}
							goto label$370;
							label$371:;
							static const void* tmp$876[3ll] = {
								&&label$372,
								&&label$373,
								&&label$372,
							};
							if( (TMP$236$7 - 9ull) > 2ull ) goto label$373;
							goto *tmp$876[TMP$236$7 - 9ull];
							label$370:;
						}
					}
					goto label$368;
					label$369:;
					{
						{
							uint64 TMP$238$7;
							int64 vr$315 = FBGETOPTION( 3ll );
							TMP$238$7 = (uint64)vr$315;
							goto label$375;
							label$376:;
							{
								FBSTRING* vr$316 = HFINDLIB( (char*)"crt0.o" );
								fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$316, -1ll, 0 );
							}
							goto label$374;
							label$377:;
							{
								FBSTRING* vr$318 = HFINDLIB( (char*)"crt1.o" );
								fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$318, -1ll, 0 );
							}
							goto label$374;
							label$375:;
							static const void* tmp$877[3ll] = {
								&&label$376,
								&&label$377,
								&&label$376,
							};
							if( (TMP$238$7 - 9ull) > 2ull ) goto label$377;
							goto *tmp$877[TMP$238$7 - 9ull];
							label$374:;
						}
					}
					label$368:;
				}
				label$367:;
				label$366:;
			}
			label$365:;
			label$364:;
			int64 vr$320 = FBGETOPTION( 3ll );
			if( vr$320 == 10ll ) goto label$379;
			{
				int64 vr$321 = FBGETOPTION( 3ll );
				if( vr$321 == 9ll ) goto label$381;
				{
					FBSTRING* vr$322 = HFINDLIB( (char*)"crti.o" );
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$322, -1ll, 0 );
				}
				label$381:;
				label$380:;
				int64 vr$324 = FBGETOPTION( 38ll );
				if( vr$324 == 0ll ) goto label$383;
				{
					FBSTRING* vr$325 = HFINDLIB( (char*)"crtbeginS.o" );
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$325, -1ll, 0 );
				}
				goto label$382;
				label$383:;
				{
					FBSTRING* vr$327 = HFINDLIB( (char*)"crtbegin.o" );
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$327, -1ll, 0 );
				}
				label$382:;
			}
			label$379:;
			label$378:;
		}
		goto label$348;
		label$384:;
		{
			int64 vr$329 = FBGETOPTION( 0ll );
			if( vr$329 != 0ll ) goto label$386;
			{
				if( *(int64*)((uint8*)&FBC$ + 2760ll) == 0ll ) goto label$388;
				{
					FBSTRING* vr$330 = HFINDLIB( (char*)"crtbegin_static.o" );
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$330, -1ll, 0 );
				}
				goto label$387;
				label$388:;
				{
					FBSTRING* vr$332 = HFINDLIB( (char*)"crtbegin_dynamic.o" );
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$332, -1ll, 0 );
				}
				label$387:;
			}
			goto label$385;
			label$386:;
			{
				FBSTRING* vr$334 = HFINDLIB( (char*)"crtbegin_so.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$334, -1ll, 0 );
			}
			label$385:;
		}
		goto label$348;
		label$389:;
		{
			FBSTRING* vr$336 = HFINDLIB( (char*)"crt0.o" );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$336, -1ll, 0 );
		}
		goto label$348;
		label$349:;
		static const void* tmp$878[12ll] = {
			&&label$355,
			&&label$350,
			&&label$363,
			&&label$384,
			&&label$360,
			&&label$389,
			&&label$363,
			&&label$363,
			&&label$363,
			&&label$363,
			&&label$363,
			&&label$363,
		};
		if( TMP$229$2 > 11ull ) goto label$348;
		goto *tmp$878[TMP$229$2 - 0ull];
		label$348:;
	}
	if( *(int64*)((uint8*)&FBC$ + 2752ll) != 0ll ) goto label$391;
	{
		int64 vr$338 = FBGETOPTION( 3ll );
		if( vr$338 == 12ll ) goto label$393;
		{
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" \x22", 3ll, 0 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 3559ll), 261ll, 0 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"/", 2ll, 0 );
			{
				int64 TMP$245$4;
				int64 vr$343 = FBGETOPTION( 24ll );
				TMP$245$4 = vr$343;
				if( TMP$245$4 != 2ll ) goto label$395;
				label$396:;
				{
					int64 vr$344 = FBGETOPTION( 38ll );
					if( vr$344 == 0ll ) goto label$398;
					{
						fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"fbrt1pic.o", 11ll, 0 );
					}
					goto label$397;
					label$398:;
					{
						fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"fbrt1.o", 8ll, 0 );
					}
					label$397:;
				}
				goto label$394;
				label$395:;
				if( TMP$245$4 != 3ll ) goto label$399;
				label$400:;
				{
					int64 vr$347 = FBGETOPTION( 38ll );
					if( vr$347 == 0ll ) goto label$402;
					{
						fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"fbrt2pic.o", 11ll, 0 );
					}
					goto label$401;
					label$402:;
					{
						fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"fbrt2.o", 8ll, 0 );
					}
					label$401:;
				}
				goto label$394;
				label$399:;
				{
					int64 vr$350 = FBGETOPTION( 38ll );
					if( vr$350 == 0ll ) goto label$405;
					{
						fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"fbrt0pic.o", 11ll, 0 );
					}
					goto label$404;
					label$405:;
					{
						fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"fbrt0.o", 8ll, 0 );
					}
					label$404:;
				}
				label$403:;
				label$394:;
			}
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"\x22", 2ll, 0 );
		}
		label$393:;
		label$392:;
	}
	label$391:;
	label$390:;
	{
		FBSTRING* OBJFILE$2;
		void* vr$355 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 400ll) );
		OBJFILE$2 = (FBSTRING*)vr$355;
		label$406:;
		if( OBJFILE$2 == (FBSTRING*)0ull ) goto label$407;
		{
			FBSTRING TMP$252$3;
			FBSTRING TMP$253$3;
			FBSTRING TMP$254$3;
			__builtin_memset( &TMP$252$3, 0, 24ll );
			FBSTRING* vr$358 = fb_StrConcat( &TMP$252$3, (void*)" \x22", 3ll, (void*)OBJFILE$2, -1ll );
			__builtin_memset( &TMP$253$3, 0, 24ll );
			FBSTRING* vr$361 = fb_StrConcat( &TMP$253$3, (void*)vr$358, -1ll, (void*)"\x22", 2ll );
			__builtin_memset( &TMP$254$3, 0, 24ll );
			FBSTRING* vr$365 = fb_StrConcat( &TMP$254$3, (void*)&LDCLINE$1, -1ll, (void*)vr$361, -1ll );
			fb_StrAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$365, -1ll, 0 );
			void* vr$367 = LISTGETNEXT( (void*)OBJFILE$2 );
			OBJFILE$2 = (FBSTRING*)vr$367;
		}
		goto label$406;
		label$407:;
	}
	int64 vr$368 = FBGETOPTION( 3ll );
	if( vr$368 == 10ll ) goto label$409;
	{
		int64 vr$369 = FBGETOPTION( 3ll );
		if( vr$369 == 12ll ) goto label$411;
		{
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" \x22-(\x22", 6ll, 0 );
		}
		label$411:;
		label$410:;
	}
	label$409:;
	label$408:;
	{
		FBSTRING* LIBFILE$2;
		void* vr$372 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 464ll) );
		LIBFILE$2 = (FBSTRING*)vr$372;
		label$412:;
		if( LIBFILE$2 == (FBSTRING*)0ull ) goto label$413;
		{
			FBSTRING TMP$256$3;
			FBSTRING TMP$257$3;
			FBSTRING TMP$258$3;
			__builtin_memset( &TMP$256$3, 0, 24ll );
			FBSTRING* vr$375 = fb_StrConcat( &TMP$256$3, (void*)" \x22", 3ll, (void*)LIBFILE$2, -1ll );
			__builtin_memset( &TMP$257$3, 0, 24ll );
			FBSTRING* vr$378 = fb_StrConcat( &TMP$257$3, (void*)vr$375, -1ll, (void*)"\x22", 2ll );
			__builtin_memset( &TMP$258$3, 0, 24ll );
			FBSTRING* vr$382 = fb_StrConcat( &TMP$258$3, (void*)&LDCLINE$1, -1ll, (void*)vr$378, -1ll );
			fb_StrAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$382, -1ll, 0 );
			void* vr$384 = LISTGETNEXT( (void*)LIBFILE$2 );
			LIBFILE$2 = (FBSTRING*)vr$384;
		}
		goto label$412;
		label$413:;
	}
	{
		struct $11TSTRSETITEM* I$2;
		void* vr$386 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 792ll) );
		I$2 = (struct $11TSTRSETITEM*)vr$386;
		int64 CHECKDLLNAME$2;
		int64 vr$387 = FBGETOPTION( 0ll );
		CHECKDLLNAME$2 = (int64)-(vr$387 == 2ll);
		label$414:;
		if( I$2 == (struct $11TSTRSETITEM*)0ull ) goto label$415;
		{
			int64 TMP$259$3;
			if( CHECKDLLNAME$2 == 0ll ) goto label$416;
			int32 vr$392 = fb_StrCompare( (void*)I$2, -1ll, (void*)&DLLNAME$1, -1ll );
			TMP$259$3 = (int64)-((int64)vr$392 != 0ll);
			goto label$1604;
			label$416:;
			TMP$259$3 = -1ll;
			label$1604:;
			if( TMP$259$3 == 0ll ) goto label$418;
			{
				FBSTRING TMP$261$4;
				FBSTRING TMP$262$4;
				__builtin_memset( &TMP$261$4, 0, 24ll );
				FBSTRING* vr$399 = fb_StrConcat( &TMP$261$4, (void*)" -l", 4ll, (void*)I$2, -1ll );
				__builtin_memset( &TMP$262$4, 0, 24ll );
				FBSTRING* vr$403 = fb_StrConcat( &TMP$262$4, (void*)&LDCLINE$1, -1ll, (void*)vr$399, -1ll );
				fb_StrAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$403, -1ll, 0 );
			}
			label$418:;
			label$417:;
			void* vr$405 = LISTGETNEXT( (void*)I$2 );
			I$2 = (struct $11TSTRSETITEM*)vr$405;
		}
		goto label$414;
		label$415:;
	}
	int64 vr$406 = FBGETOPTION( 3ll );
	if( vr$406 == 10ll ) goto label$420;
	{
		int64 vr$407 = FBGETOPTION( 3ll );
		if( vr$407 == 12ll ) goto label$422;
		{
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" \x22-)\x22", 6ll, 0 );
		}
		goto label$421;
		label$422:;
		{
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -lfb", 6ll, 0 );
		}
		label$421:;
	}
	label$420:;
	label$419:;
	{
		uint64 TMP$265$2;
		int64 vr$410 = FBGETOPTION( 3ll );
		TMP$265$2 = (uint64)vr$410;
		goto label$424;
		label$425:;
		{
			int64 vr$411 = FBGETOPTION( 38ll );
			if( vr$411 == 0ll ) goto label$427;
			{
				FBSTRING* vr$412 = HFINDLIB( (char*)"crtendS.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$412, -1ll, 0 );
			}
			goto label$426;
			label$427:;
			{
				FBSTRING* vr$414 = HFINDLIB( (char*)"crtend.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$414, -1ll, 0 );
			}
			label$426:;
			int64 vr$416 = FBGETOPTION( 3ll );
			if( vr$416 == 9ll ) goto label$429;
			{
				FBSTRING* vr$417 = HFINDLIB( (char*)"crtn.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$417, -1ll, 0 );
			}
			label$429:;
			label$428:;
		}
		goto label$423;
		label$430:;
		{
			int64 vr$419 = FBGETOPTION( 0ll );
			if( vr$419 != 0ll ) goto label$432;
			{
				FBSTRING* vr$420 = HFINDLIB( (char*)"crtend_android.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$420, -1ll, 0 );
			}
			goto label$431;
			label$432:;
			{
				FBSTRING* vr$422 = HFINDLIB( (char*)"crtend_so.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$422, -1ll, 0 );
			}
			label$431:;
		}
		goto label$423;
		label$433:;
		{
			FBSTRING* vr$424 = HFINDLIB( (char*)"crtend.o" );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$424, -1ll, 0 );
		}
		goto label$423;
		label$424:;
		static const void* tmp$879[12ll] = {
			&&label$433,
			&&label$423,
			&&label$425,
			&&label$430,
			&&label$423,
			&&label$423,
			&&label$425,
			&&label$425,
			&&label$425,
			&&label$425,
			&&label$423,
			&&label$425,
		};
		if( TMP$265$2 > 11ull ) goto label$423;
		goto *tmp$879[TMP$265$2 - 0ull];
		label$423:;
	}
	int64 vr$426 = FBGETOPTION( 3ll );
	if( vr$426 != 10ll ) goto label$435;
	{
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -platform_version macos 11.0.0 11.0.0", 39ll, 0 );
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -syslibroot /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk", 65ll, 0 );
	}
	label$435:;
	label$434:;
	{
		uint64 TMP$273$2;
		int64 vr$429 = FBGETOPTION( 3ll );
		TMP$273$2 = (uint64)vr$429;
		goto label$437;
		label$438:;
		{
			int64 TMP$274$3;
			int32 OUTTYPE$3;
			int64 vr$430 = FBGETOPTION( 0ll );
			OUTTYPE$3 = (int32)vr$430;
			if( (int64)OUTTYPE$3 == 0ll ) goto label$439;
			TMP$274$3 = (int64)-((int64)OUTTYPE$3 == 2ll);
			goto label$1605;
			label$439:;
			TMP$274$3 = -1ll;
			label$1605:;
			if( TMP$274$3 == 0ll ) goto label$441;
			{
				int64 TMP$275$4;
				int64 TMP$276$4;
				int64 TMP$277$4;
				int32 CPUFAMILY$4;
				int64 vr$435 = FBGETCPUFAMILY(  );
				CPUFAMILY$4 = (int32)vr$435;
				if( (int64)CPUFAMILY$4 == 1ll ) goto label$442;
				TMP$275$4 = (int64)-((int64)CPUFAMILY$4 == 3ll);
				goto label$1606;
				label$442:;
				TMP$275$4 = -1ll;
				label$1606:;
				if( TMP$275$4 != 0ll ) goto label$443;
				TMP$276$4 = (int64)-((int64)CPUFAMILY$4 == 5ll);
				goto label$1607;
				label$443:;
				TMP$276$4 = -1ll;
				label$1607:;
				if( TMP$276$4 != 0ll ) goto label$444;
				TMP$277$4 = (int64)-((int64)CPUFAMILY$4 == 6ll);
				goto label$1608;
				label$444:;
				TMP$277$4 = -1ll;
				label$1608:;
				if( TMP$277$4 == 0ll ) goto label$446;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --eh-frame-hdr", 16ll, 0 );
				}
				label$446:;
				label$445:;
			}
			label$441:;
			label$440:;
		}
		goto label$436;
		label$437:;
		static const void* tmp$880[10ll] = {
			&&label$438,
			&&label$436,
			&&label$436,
			&&label$436,
			&&label$438,
			&&label$438,
			&&label$438,
			&&label$438,
			&&label$436,
			&&label$438,
		};
		if( (TMP$273$2 - 2ull) > 9ull ) goto label$436;
		goto *tmp$880[TMP$273$2 - 2ull];
		label$436:;
	}
	fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" ", 2ll, 0 );
	fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 2048ll), -1ll, 0 );
	$7FBCTOOL LD$1;
	LD$1 = 3ll;
	int64 vr$448 = FBGETOPTION( 3ll );
	if( vr$448 != 12ll ) goto label$448;
	{
		LD$1 = 14ll;
	}
	label$448:;
	label$447:;
	int64 vr$450 = FBCRUNBIN( (char*)"linking", LD$1, &LDCLINE$1 );
	if( vr$450 != 0ll ) goto label$450;
	{
		fb_StrDelete( (FBSTRING*)&DEFFILE$1 );
		fb_StrDelete( (FBSTRING*)&DLLNAME$1 );
		fb_StrDelete( (FBSTRING*)&LDCLINE$1 );
		goto label$220;
	}
	label$450:;
	label$449:;
	{
		uint64 TMP$280$2;
		int64 vr$454 = FBGETOPTION( 3ll );
		TMP$280$2 = (uint64)vr$454;
		goto label$452;
		label$453:;
		{
			int64 F$3;
			int32 vr$455 = fb_FileFree(  );
			F$3 = (int64)vr$455;
			FBSTRING* vr$459 = fb_StrAllocTempDescZ( (char*)((uint8*)&FBC$ + 968ll) );
			int32 vr$460 = fb_FileOpen( (FBSTRING*)vr$459, 0u, 3u, 0u, (int32)F$3, 0 );
			if( (int64)vr$460 == 0ll ) goto label$455;
			{
				fb_StrDelete( (FBSTRING*)&DEFFILE$1 );
				fb_StrDelete( (FBSTRING*)&DLLNAME$1 );
				fb_StrDelete( (FBSTRING*)&LDCLINE$1 );
				goto label$220;
			}
			label$455:;
			label$454:;
			int32 VALUE$3;
			int64 vr$465 = FBGETOPTION( 39ll );
			VALUE$3 = (int32)vr$465;
			fb_FilePutLarge( (int32)F$3, 533ll, (void*)&VALUE$3, 4ull );
			fb_FileClose( (int32)F$3 );
		}
		goto label$451;
		label$456:;
		{
			int64 vr$470 = FBGETOPTION( 0ll );
			if( vr$470 != 2ll ) goto label$458;
			{
				int64 vr$473 = MAKEIMPLIB( &DLLNAME$1, &DEFFILE$1 );
				if( vr$473 != 0ll ) goto label$460;
				{
					fb_StrDelete( (FBSTRING*)&DEFFILE$1 );
					fb_StrDelete( (FBSTRING*)&DLLNAME$1 );
					fb_StrDelete( (FBSTRING*)&LDCLINE$1 );
					goto label$220;
				}
				label$460:;
				label$459:;
			}
			label$458:;
			label$457:;
		}
		goto label$451;
		label$461:;
		{
			FBSTRING TMP$292$3;
			FBSTRING TMP$297$3;
			FBSTRING TMP$298$3;
			FBSTRING CXBEPATH$3;
			__builtin_memset( &CXBEPATH$3, 0, 24ll );
			FBSTRING CXBECLINE$3;
			__builtin_memset( &CXBECLINE$3, 0, 24ll );
			int64 RES$3;
			int64 vr$480 = fb_StrLen( (void*)((uint8*)&FBC$ + 2615ll), 129ll );
			if( vr$480 != 0ll ) goto label$463;
			{
				FBSTRING TMP$281$4;
				__builtin_memset( &TMP$281$4, 0, 24ll );
				fb_StrAssign( (void*)&TMP$281$4, -1ll, (void*)((uint8*)&FBC$ + 968ll), 261ll, 0 );
				FBSTRING* vr$485 = HSTRIPEXT( &TMP$281$4 );
				fb_StrAssign( (void*)((uint8*)&FBC$ + 2615ll), 129ll, (void*)vr$485, -1ll, 0 );
				fb_StrDelete( (FBSTRING*)&TMP$281$4 );
			}
			label$463:;
			label$462:;
			fb_StrAssign( (void*)&CXBECLINE$3, -1ll, (void*)"-TITLE:\x22", 9ll, 0 );
			fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)((uint8*)&FBC$ + 2615ll), 129ll, 0 );
			fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)"\x22 ", 3ll, 0 );
			int64 vr$492 = FBGETOPTION( 14ll );
			if( vr$492 == 0ll ) goto label$465;
			{
				FBSTRING TMP$287$4;
				fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)"-DUMPINFO:\x22", 12ll, 0 );
				__builtin_memset( &TMP$287$4, 0, 24ll );
				fb_StrAssign( (void*)&TMP$287$4, -1ll, (void*)((uint8*)&FBC$ + 968ll), 261ll, 0 );
				FBSTRING* vr$498 = HSTRIPEXT( &TMP$287$4 );
				fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)vr$498, -1ll, 0 );
				fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)".cxbe\x22", 7ll, 0 );
				fb_StrDelete( (FBSTRING*)&TMP$287$4 );
			}
			label$465:;
			label$464:;
			fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)" -OUT:\x22", 8ll, 0 );
			__builtin_memset( &TMP$292$3, 0, 24ll );
			fb_StrAssign( (void*)&TMP$292$3, -1ll, (void*)((uint8*)&FBC$ + 968ll), 261ll, 0 );
			FBSTRING* vr$507 = HSTRIPEXT( &TMP$292$3 );
			fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)vr$507, -1ll, 0 );
			fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)".xbe", 5ll, 0 );
			fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)"\x22", 2ll, 0 );
			fb_StrDelete( (FBSTRING*)&TMP$292$3 );
			fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)" \x22", 3ll, 0 );
			fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)((uint8*)&FBC$ + 968ll), 261ll, 0 );
			fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)"\x22", 2ll, 0 );
			if( *(int64*)((uint8*)&FBC$ + 112ll) != 0ll ) goto label$467;
			{
				fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)" >nul", 6ll, 0 );
			}
			label$467:;
			label$466:;
			if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$469;
			{
				FBSTRING* vr$517 = fb_StrAllocTempDescZEx( (char*)"cxbe: ", 6ll );
				fb_PrintString( 0, (FBSTRING*)vr$517, 2 );
				fb_PrintString( 0, (FBSTRING*)&CXBECLINE$3, 1 );
			}
			label$469:;
			label$468:;
			FBCFINDBIN( 10ll, &CXBEPATH$3 );
			__builtin_memset( &TMP$297$3, 0, 24ll );
			FBSTRING* vr$524 = fb_StrConcat( &TMP$297$3, (void*)&CXBEPATH$3, -1ll, (void*)" ", 2ll );
			__builtin_memset( &TMP$298$3, 0, 24ll );
			FBSTRING* vr$527 = fb_StrConcat( &TMP$298$3, (void*)vr$524, -1ll, (void*)&CXBECLINE$3, -1ll );
			int32 vr$528 = fb_Shell( (FBSTRING*)vr$527 );
			RES$3 = (int64)vr$528;
			if( RES$3 == 0ll ) goto label$471;
			{
				if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$473;
				{
					FBSTRING TMP$300$5;
					FBSTRING* vr$530 = fb_LongintToStr( RES$3 );
					__builtin_memset( &TMP$300$5, 0, 24ll );
					FBSTRING* vr$533 = fb_StrConcat( &TMP$300$5, (void*)"cxbe failed: exit code ", 24ll, (void*)vr$530, -1ll );
					fb_PrintString( 0, (FBSTRING*)vr$533, 1 );
				}
				label$473:;
				label$472:;
				fb_StrDelete( (FBSTRING*)&CXBECLINE$3 );
				fb_StrDelete( (FBSTRING*)&CXBEPATH$3 );
				fb_StrDelete( (FBSTRING*)&DEFFILE$1 );
				fb_StrDelete( (FBSTRING*)&DLLNAME$1 );
				fb_StrDelete( (FBSTRING*)&LDCLINE$1 );
				goto label$220;
			}
			label$471:;
			label$470:;
			FBSTRING* vr$540 = fb_StrAllocTempDescZ( (char*)((uint8*)&FBC$ + 968ll) );
			fb_FileKill( (FBSTRING*)vr$540 );
			fb_StrDelete( (FBSTRING*)&CXBECLINE$3 );
			fb_StrDelete( (FBSTRING*)&CXBEPATH$3 );
		}
		goto label$451;
		label$452:;
		static const void* tmp$881[6ll] = {
			&&label$456,
			&&label$456,
			&&label$451,
			&&label$451,
			&&label$453,
			&&label$461,
		};
		if( TMP$280$2 > 5ull ) goto label$451;
		goto *tmp$881[TMP$280$2 - 0ull];
		label$451:;
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
	label$474:;
	FBSTRING DAT$1;
	__builtin_memset( &DAT$1, 0, 24ll );
	int64 LANG$1;
	label$476:;
	{
		{
			uint64 TMP$301$3;
			int64 vr$2 = OBJINFOREADNEXT( &DAT$1 );
			TMP$301$3 = (uint64)vr$2;
			goto label$480;
			label$481:;
			{
				STRSETADD( (struct $7TSTRSET*)((uint8*)&FBC$ + 792ll), &DAT$1, 0ll );
			}
			goto label$479;
			label$482:;
			{
				STRSETADD( (struct $7TSTRSET*)((uint8*)&FBC$ + 880ll), &DAT$1, 0ll );
			}
			goto label$479;
			label$483:;
			{
				if( *(int64*)((uint8*)&FBC$ + 4096ll) != 0ll ) goto label$485;
				{
					char* vr$7 = OBJINFOGETFILENAME(  );
					ERRREPORTWARNEX( 20ll, (char*)vr$7, -1ll, 1ll, (char*)0ull );
					*(int64*)((uint8*)&FBC$ + 4096ll) = -1ll;
					FBSETOPTION( 36ll, -1ll );
				}
				label$485:;
				label$484:;
			}
			goto label$479;
			label$486:;
			{
				FBSETOPTION( 37ll, -1ll );
			}
			goto label$479;
			label$487:;
			{
				$7FB_LANG vr$8 = FBGETLANGID( (char*)*(char**)&DAT$1 );
				LANG$1 = vr$8;
				if( LANG$1 != -1ll ) goto label$489;
				{
					LANG$1 = 0ll;
				}
				label$489:;
				label$488:;
				if( LANG$1 == *(int64*)((uint8*)&FBC$ + 4088ll) ) goto label$491;
				{
					char* vr$9 = OBJINFOGETFILENAME(  );
					ERRREPORTWARNEX( 21ll, (char*)vr$9, -1ll, 1ll, (char*)0ull );
					*($7FB_LANG*)((uint8*)&FBC$ + 4088ll) = LANG$1;
					FBSETOPTION( 10ll, LANG$1 );
				}
				label$491:;
				label$490:;
			}
			goto label$479;
			label$492:;
			{
				goto label$477;
			}
			goto label$479;
			label$480:;
			static const void* tmp$882[5ll] = {
				&&label$481,
				&&label$482,
				&&label$483,
				&&label$486,
				&&label$487,
			};
			if( TMP$301$3 > 4ull ) goto label$492;
			goto *tmp$882[TMP$301$3 - 0ull];
			label$479:;
		}
	}
	label$478:;
	goto label$476;
	label$477:;
	OBJINFOREADEND(  );
	fb_StrDelete( (FBSTRING*)&DAT$1 );
	label$475:;
}

static void HCOLLECTOBJINFO( void )
{
	label$493:;
	FBSTRING* S$1;
	struct $11TSTRSETITEM* I$1;
	void* vr$1 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 400ll) );
	S$1 = (FBSTRING*)vr$1;
	label$495:;
	if( S$1 == (FBSTRING*)0ull ) goto label$496;
	{
		OBJINFOREADOBJ( S$1 );
		HREADOBJINFO(  );
		void* vr$2 = LISTGETNEXT( (void*)S$1 );
		S$1 = (FBSTRING*)vr$2;
	}
	goto label$495;
	label$496:;
	void* vr$4 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 792ll) );
	I$1 = (struct $11TSTRSETITEM*)vr$4;
	label$497:;
	if( I$1 == (struct $11TSTRSETITEM*)0ull ) goto label$498;
	{
		if( *(int64*)((uint8*)I$1 + 24ll) != 0ll ) goto label$500;
		{
			OBJINFOREADLIB( (FBSTRING*)I$1, (struct $5TLIST*)((uint8*)&FBC$ + 880ll) );
			HREADOBJINFO(  );
		}
		label$500:;
		label$499:;
		void* vr$9 = LISTGETNEXT( (void*)I$1 );
		I$1 = (struct $11TSTRSETITEM*)vr$9;
	}
	goto label$497;
	label$498:;
	void* vr$11 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 464ll) );
	S$1 = (FBSTRING*)vr$11;
	label$501:;
	if( S$1 == (FBSTRING*)0ull ) goto label$502;
	{
		OBJINFOREADLIBFILE( S$1 );
		HREADOBJINFO(  );
		void* vr$12 = LISTGETNEXT( (void*)S$1 );
		S$1 = (FBSTRING*)vr$12;
	}
	goto label$501;
	label$502:;
	label$494:;
}

static void HFATALINVALIDOPTION( FBSTRING* ARG$1, int64 IS_SOURCE$1 )
{
	FBSTRING TMP$302$1;
	FBSTRING TMP$303$1;
	FBSTRING TMP$304$1;
	int64 TMP$305$1;
	label$503:;
	if( IS_SOURCE$1 == 0ll ) goto label$505;
	TMP$305$1 = 0ll;
	goto label$1609;
	label$505:;
	TMP$305$1 = -1ll;
	label$1609:;
	__builtin_memset( &TMP$304$1, 0, 24ll );
	__builtin_memset( &TMP$302$1, 0, 24ll );
	FBSTRING* vr$3 = fb_StrConcat( &TMP$302$1, (void*)"\x22", 2ll, (void*)ARG$1, -1ll );
	__builtin_memset( &TMP$303$1, 0, 24ll );
	FBSTRING* vr$6 = fb_StrConcat( &TMP$303$1, (void*)vr$3, -1ll, (void*)"\x22", 2ll );
	fb_StrAssign( (void*)&TMP$304$1, -1ll, (void*)vr$6, -1ll, 0 );
	ERRREPORTEX( 81ll, (char*)*(char**)&TMP$304$1, TMP$305$1, 1ll, (char*)0ull );
	fb_StrDelete( (FBSTRING*)&TMP$304$1 );
	FBCEND( 1ll );
	label$504:;
}

static void HCHECKWAITINGOBJFILE( void )
{
	label$506:;
	int64 vr$1 = fb_StrLen( (void*)((uint8*)&FBC$ + 16ll), -1ll );
	if( vr$1 <= 0ll ) goto label$509;
	{
		FBSTRING TMP$306$2;
		FBSTRING TMP$307$2;
		__builtin_memset( &TMP$307$2, 0, 24ll );
		__builtin_memset( &TMP$306$2, 0, 24ll );
		FBSTRING* vr$6 = fb_StrConcat( &TMP$306$2, (void*)"-o ", 4ll, (void*)((uint8*)&FBC$ + 16ll), -1ll );
		fb_StrAssign( (void*)&TMP$307$2, -1ll, (void*)vr$6, -1ll, 0 );
		ERRREPORTEX( 292ll, (char*)*(char**)&TMP$307$2, -1ll, 1ll, (char*)0ull );
		fb_StrDelete( (FBSTRING*)&TMP$307$2 );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 16ll), -1ll, (void*)"", 1ll, 0 );
	}
	label$509:;
	label$508:;
	label$507:;
}

static void HSETIOFILE( struct $9FBCIOFILE* MODULE$1, FBSTRING* SRCFILE$1, int64 IS_RC$1 )
{
	label$510:;
	fb_StrAssign( (void*)MODULE$1, -1ll, (void*)SRCFILE$1, -1ll, 0 );
	int64 vr$3 = fb_StrLen( (void*)((uint8*)&FBC$ + 16ll), -1ll );
	if( vr$3 != 0ll ) goto label$513;
	{
		*(int64*)((uint8*)MODULE$1 + 32ll) = 0ll;
		if( IS_RC$1 == 0ll ) goto label$515;
		{
			FBSTRING TMP$309$3;
			__builtin_memset( &TMP$309$3, 0, 24ll );
			FBSTRING* vr$7 = fb_StrConcat( &TMP$309$3, (void*)SRCFILE$1, -1ll, (void*)".o", 3ll );
			fb_StrAssign( (void*)((uint8*)&FBC$ + 16ll), -1ll, (void*)vr$7, -1ll, 0 );
		}
		goto label$514;
		label$515:;
		{
			FBSTRING TMP$310$3;
			FBSTRING* vr$9 = HSTRIPEXT( SRCFILE$1 );
			__builtin_memset( &TMP$310$3, 0, 24ll );
			FBSTRING* vr$12 = fb_StrConcat( &TMP$310$3, (void*)vr$9, -1ll, (void*)".o", 3ll );
			fb_StrAssign( (void*)((uint8*)&FBC$ + 16ll), -1ll, (void*)vr$12, -1ll, 0 );
		}
		label$514:;
		*(struct $9FBCIOFILE**)((uint8*)&FBC$ + 8ll) = MODULE$1;
	}
	goto label$512;
	label$513:;
	{
		*(int64*)((uint8*)MODULE$1 + 32ll) = -1ll;
	}
	label$512:;
	FBSTRING* vr$16 = FBCADDOBJ( (FBSTRING*)((uint8*)&FBC$ + 16ll) );
	*(FBSTRING**)((uint8*)MODULE$1 + 24ll) = vr$16;
	fb_StrAssign( (void*)((uint8*)&FBC$ + 16ll), -1ll, (void*)"", 1ll, 0 );
	label$511:;
}

static void HADDBAS( FBSTRING* BASFILE$1 )
{
	label$516:;
	void* vr$1 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&FBC$ + 144ll) );
	HSETIOFILE( (struct $9FBCIOFILE*)vr$1, BASFILE$1, 0ll );
	label$517:;
}

static void HPARSEGNUTRIPLET( FBSTRING* ARG$1, int64 SEPARATOR$1, int64* OS$1, int64* CPUTYPE$1 )
{
	label$518:;
	FBSTRING ARCH$1;
	__builtin_memset( &ARCH$1, 0, 24ll );
	{
		int64 I$2;
		I$2 = 0ll;
		label$523:;
		{
			FBSTRING* vr$2 = fb_StrAllocTempDescZ( (char*)*(char**)((int64)(struct $11FBGNUOSINFO*)GNUOSMAP$ + (I$2 << (4ll & 63ll))) );
			int64 vr$3 = fb_StrInstr( 1ll, (FBSTRING*)ARG$1, (FBSTRING*)vr$2 );
			if( vr$3 <= 0ll ) goto label$525;
			{
				*OS$1 = *(int64*)(((int64)(struct $11FBGNUOSINFO*)GNUOSMAP$ + (I$2 << (4ll & 63ll))) + 8ll);
				goto label$522;
			}
			label$525:;
			label$524:;
		}
		label$521:;
		I$2 = I$2 + 1ll;
		label$520:;
		if( I$2 <= 16ll ) goto label$523;
		label$522:;
	}
	if( SEPARATOR$1 <= 0ll ) goto label$527;
	{
		FBSTRING* vr$8 = fb_LEFT( (FBSTRING*)ARG$1, SEPARATOR$1 + -1ll );
		fb_StrAssign( (void*)&ARCH$1, -1ll, (void*)vr$8, -1ll, 0 );
		{
			int64 I$3;
			I$3 = 0ll;
			label$531:;
			{
				int32 vr$12 = fb_StrCompare( (void*)&ARCH$1, -1ll, *(void**)((int64)(struct $13FBGNUARCHINFO*)GNUARCHMAP$ + (I$3 << (4ll & 63ll))), 0ll );
				if( (int64)vr$12 != 0ll ) goto label$533;
				{
					*CPUTYPE$1 = *(int64*)(((int64)(struct $13FBGNUARCHINFO*)GNUARCHMAP$ + (I$3 << (4ll & 63ll))) + 8ll);
					goto label$530;
				}
				label$533:;
				label$532:;
			}
			label$529:;
			I$3 = I$3 + 1ll;
			label$528:;
			if( I$3 <= 20ll ) goto label$531;
			label$530:;
		}
	}
	label$527:;
	label$526:;
	fb_StrDelete( (FBSTRING*)&ARCH$1 );
	label$519:;
}

static void HPARSETARGETARG( FBSTRING* ARG$1, int64* OS$1, int64* CPUTYPE$1, int64* IS_GNU_TRIPLET$1 )
{
	label$542:;
	*OS$1 = -1ll;
	*CPUTYPE$1 = -1ll;
	*IS_GNU_TRIPLET$1 = 0ll;
	FBSTRING LCASEARG$1;
	FBSTRING* vr$3 = fb_StrLcase2( (FBSTRING*)ARG$1, 0 );
	fb_StrInit( (void*)&LCASEARG$1, -1ll, (void*)vr$3, -1ll, 0 );
	{
		int64 I$2;
		I$2 = 0ll;
		label$547:;
		{
			int32 vr$7 = fb_StrCompare( (void*)&LCASEARG$1, -1ll, *(void**)((int64)(struct $12FBOSARCHINFO*)FBOSARCHMAP$ + (I$2 * 24ll)), 0ll );
			if( (int64)vr$7 != 0ll ) goto label$549;
			{
				*OS$1 = *(int64*)(((int64)(struct $12FBOSARCHINFO*)FBOSARCHMAP$ + (I$2 * 24ll)) + 8ll);
				*CPUTYPE$1 = *(int64*)(((int64)(struct $12FBOSARCHINFO*)FBOSARCHMAP$ + (I$2 * 24ll)) + 16ll);
				fb_StrDelete( (FBSTRING*)&LCASEARG$1 );
				goto label$543;
			}
			label$549:;
			label$548:;
		}
		label$545:;
		I$2 = I$2 + 1ll;
		label$544:;
		if( I$2 <= 16ll ) goto label$547;
		label$546:;
	}
	int64 SEPARATOR$1;
	FBSTRING* vr$15 = fb_StrAllocTempDescZEx( (char*)"-", 1ll );
	int64 vr$16 = fb_StrInstr( 1ll, (FBSTRING*)ARG$1, (FBSTRING*)vr$15 );
	SEPARATOR$1 = vr$16;
	if( SEPARATOR$1 <= 0ll ) goto label$551;
	{
		FBSTRING TMP$357$2;
		FBSTRING TMP$358$2;
		__builtin_memset( &TMP$357$2, 0, 24ll );
		FBSTRING* vr$20 = fb_LEFT( (FBSTRING*)&LCASEARG$1, SEPARATOR$1 + -1ll );
		fb_StrAssign( (void*)&TMP$357$2, -1ll, (void*)vr$20, -1ll, 0 );
		int64 vr$23 = FBIDENTIFYOS( &TMP$357$2 );
		*OS$1 = vr$23;
		fb_StrDelete( (FBSTRING*)&TMP$357$2 );
		__builtin_memset( &TMP$358$2, 0, 24ll );
		int64 vr$28 = fb_StrLen( (void*)&LCASEARG$1, -1ll );
		FBSTRING* vr$31 = fb_RIGHT( (FBSTRING*)&LCASEARG$1, vr$28 - SEPARATOR$1 );
		fb_StrAssign( (void*)&TMP$358$2, -1ll, (void*)vr$31, -1ll, 0 );
		int64 vr$35 = FBDEFAULTCPUTYPEFROMCPUFAMILYID( *OS$1, &TMP$358$2 );
		*CPUTYPE$1 = vr$35;
		fb_StrDelete( (FBSTRING*)&TMP$358$2 );
	}
	label$551:;
	label$550:;
	if( ((int64)-(*OS$1 < 0ll) & (int64)-(*CPUTYPE$1 < 0ll)) == 0ll ) goto label$553;
	{
		HPARSEGNUTRIPLET( ARG$1, SEPARATOR$1, OS$1, CPUTYPE$1 );
		*IS_GNU_TRIPLET$1 = -1ll;
	}
	label$553:;
	label$552:;
	fb_StrDelete( (FBSTRING*)&LCASEARG$1 );
	label$543:;
}

static void HANDLEOPT( int64 OPTID$1, FBSTRING* ARG$1, int64 IS_SOURCE$1 )
{
	label$554:;
	{
		uint64 TMP$361$2;
		TMP$361$2 = (uint64)OPTID$1;
		goto label$557;
		label$558:;
		{
			FBCADDOBJ( ARG$1 );
		}
		goto label$556;
		label$559:;
		{
			int32 vr$0 = fb_StrCompare( (void*)ARG$1, -1ll, (void*)"native", 7ll );
			*(int64*)((uint8*)&FBC$ + 56ll) = (int64)-((int64)vr$0 == 0ll);
			int64 vr$3 = FBIDENTIFYFBCARCH( ARG$1 );
			*(int64*)((uint8*)&FBC$ + 48ll) = vr$3;
			if( *(int64*)((uint8*)&FBC$ + 48ll) >= 0ll ) goto label$561;
			{
				FBSTRING TMP$364$4;
				FBSTRING TMP$365$4;
				__builtin_memset( &TMP$365$4, 0, 24ll );
				__builtin_memset( &TMP$364$4, 0, 24ll );
				FBSTRING* vr$7 = fb_StrConcat( &TMP$364$4, (void*)"-arch ", 7ll, (void*)ARG$1, -1ll );
				fb_StrAssign( (void*)&TMP$365$4, -1ll, (void*)vr$7, -1ll, 0 );
				HFATALINVALIDOPTION( &TMP$365$4, IS_SOURCE$1 );
				fb_StrDelete( (FBSTRING*)&TMP$365$4 );
			}
			label$561:;
			label$560:;
		}
		goto label$556;
		label$562:;
		{
			{
				FBSTRING TMP$366$4;
				fb_StrInit( (void*)&TMP$366$4, -1ll, (void*)ARG$1, -1ll, 0 );
				int32 vr$13 = fb_StrCompare( (void*)&TMP$366$4, -1ll, (void*)"att", 4ll );
				if( (int64)vr$13 != 0ll ) goto label$564;
				label$565:;
				{
					*(int64*)((uint8*)&FBC$ + 64ll) = 1ll;
				}
				goto label$563;
				label$564:;
				int32 vr$16 = fb_StrCompare( (void*)&TMP$366$4, -1ll, (void*)"intel", 6ll );
				if( (int64)vr$16 != 0ll ) goto label$566;
				label$567:;
				{
					*(int64*)((uint8*)&FBC$ + 64ll) = 0ll;
				}
				goto label$563;
				label$566:;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$568:;
				label$563:;
				fb_StrDelete( (FBSTRING*)&TMP$366$4 );
			}
		}
		goto label$556;
		label$569:;
		{
			HADDBAS( ARG$1 );
		}
		goto label$556;
		label$570:;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 3820ll), 261ll, (void*)ARG$1, -1ll, 0 );
		}
		goto label$556;
		label$571:;
		{
			FBSETOPTION( 0ll, 3ll );
			*(int64*)((uint8*)&FBC$ + 104ll) = -1ll;
		}
		goto label$556;
		label$572:;
		{
			*(int64*)((uint8*)&FBC$ + 104ll) = -1ll;
		}
		goto label$556;
		label$573:;
		{
			FBADDPREDEFINE( ARG$1 );
		}
		goto label$556;
		label$574:;
		{
			FBSETOPTION( 0ll, 2ll );
		}
		goto label$556;
		label$575:;
		{
			FBSETOPTION( 16ll, -1ll );
			FBSETOPTION( 21ll, -1ll );
		}
		goto label$556;
		label$576:;
		{
			FBSETOPTION( 22ll, -1ll );
		}
		goto label$556;
		label$577:;
		{
			FBSETOPTION( 23ll, -1ll );
		}
		goto label$556;
		label$578:;
		{
			FBSETOPTION( 15ll, -1ll );
		}
		goto label$556;
		label$579:;
		{
			FBSETOPTION( 13ll, -1ll );
		}
		goto label$556;
		label$580:;
		{
			FBSETOPTION( 14ll, -1ll );
		}
		goto label$556;
		label$581:;
		{
			FBSETOPTION( 19ll, -1ll );
		}
		goto label$556;
		label$582:;
		{
			FBSETOPTION( 20ll, -1ll );
		}
		goto label$556;
		label$583:;
		{
			FBSETOPTION( 21ll, -1ll );
		}
		goto label$556;
		label$584:;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 1490ll), 129ll, (void*)ARG$1, -1ll, 0 );
		}
		goto label$556;
		label$585:;
		{
			FBSETOPTION( 16ll, -1ll );
			FBSETOPTION( 17ll, -1ll );
			FBSETOPTION( 21ll, -1ll );
		}
		goto label$556;
		label$586:;
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
		goto label$556;
		label$587:;
		{
			FBSETOPTION( 34ll, -1ll );
		}
		goto label$556;
		label$588:;
		{
			FBSETOPTION( 37ll, -1ll );
		}
		goto label$556;
		label$589:;
		{
			int64 VALUE$3;
			$7FB_LANG vr$22 = FBGETLANGID( (char*)*(char**)ARG$1 );
			VALUE$3 = vr$22;
			if( VALUE$3 != -1ll ) goto label$591;
			{
				HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
			}
			label$591:;
			label$590:;
			int64 vr$23 = FBGETOPTION( 11ll );
			if( (IS_SOURCE$1 & vr$23) == 0ll ) goto label$593;
			{
				ERRREPORTWARN( 30ll, (char*)0ull, 1ll, (char*)0ull );
			}
			goto label$592;
			label$593:;
			{
				FBSETOPTION( 10ll, VALUE$3 );
				FBSETOPTION( 11ll, -1ll );
				*($7FB_LANG*)((uint8*)&FBC$ + 4088ll) = VALUE$3;
				if( IS_SOURCE$1 == 0ll ) goto label$595;
				{
					FBSETOPTION( 12ll, VALUE$3 );
				}
				label$595:;
				label$594:;
			}
			label$592:;
		}
		goto label$556;
		label$596:;
		{
			int64 VALUE$3;
			{
				FBSTRING TMP$369$4;
				FBSTRING* vr$25 = fb_StrUcase2( (FBSTRING*)ARG$1, 0 );
				fb_StrInit( (void*)&TMP$369$4, -1ll, (void*)vr$25, -1ll, 0 );
				int32 vr$28 = fb_StrCompare( (void*)&TMP$369$4, -1ll, (void*)"PRECISE", 8ll );
				if( (int64)vr$28 != 0ll ) goto label$598;
				label$599:;
				{
					VALUE$3 = 0ll;
				}
				goto label$597;
				label$598:;
				int32 vr$31 = fb_StrCompare( (void*)&TMP$369$4, -1ll, (void*)"FAST", 5ll );
				if( (int64)vr$31 != 0ll ) goto label$600;
				label$601:;
				{
					VALUE$3 = 1ll;
				}
				goto label$597;
				label$600:;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$602:;
				label$597:;
				fb_StrDelete( (FBSTRING*)&TMP$369$4 );
			}
			FBSETOPTION( 6ll, VALUE$3 );
		}
		goto label$556;
		label$603:;
		{
			int64 VALUE$3;
			{
				FBSTRING TMP$372$4;
				FBSTRING* vr$34 = fb_StrUcase2( (FBSTRING*)ARG$1, 0 );
				fb_StrInit( (void*)&TMP$372$4, -1ll, (void*)vr$34, -1ll, 0 );
				int32 vr$37 = fb_StrCompare( (void*)&TMP$372$4, -1ll, (void*)"X87", 4ll );
				if( (int64)vr$37 == 0ll ) goto label$606;
				label$607:;
				int32 vr$40 = fb_StrCompare( (void*)&TMP$372$4, -1ll, (void*)"FPU", 4ll );
				if( (int64)vr$40 != 0ll ) goto label$605;
				label$606:;
				{
					VALUE$3 = 0ll;
				}
				goto label$604;
				label$605:;
				int32 vr$43 = fb_StrCompare( (void*)&TMP$372$4, -1ll, (void*)"SSE", 4ll );
				if( (int64)vr$43 != 0ll ) goto label$608;
				label$609:;
				{
					VALUE$3 = 1ll;
				}
				goto label$604;
				label$608:;
				int32 vr$46 = fb_StrCompare( (void*)&TMP$372$4, -1ll, (void*)"NEON", 5ll );
				if( (int64)vr$46 != 0ll ) goto label$610;
				label$611:;
				{
					VALUE$3 = 2ll;
				}
				goto label$604;
				label$610:;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$612:;
				label$604:;
				fb_StrDelete( (FBSTRING*)&TMP$372$4 );
			}
			FBSETOPTION( 5ll, VALUE$3 );
		}
		goto label$556;
		label$613:;
		{
			FBSETOPTION( 13ll, -1ll );
			FBSETOPTION( 14ll, -1ll );
			FBSETOPTION( 15ll, -1ll );
		}
		goto label$556;
		label$614:;
		{
			{
				FBSTRING TMP$377$4;
				FBSTRING* vr$49 = fb_StrLcase2( (FBSTRING*)ARG$1, 0 );
				fb_StrInit( (void*)&TMP$377$4, -1ll, (void*)vr$49, -1ll, 0 );
				int32 vr$52 = fb_StrCompare( (void*)&TMP$377$4, -1ll, (void*)"gas", 4ll );
				if( (int64)vr$52 != 0ll ) goto label$616;
				label$617:;
				{
					*(int64*)((uint8*)&FBC$ + 40ll) = 0ll;
				}
				goto label$615;
				label$616:;
				int32 vr$55 = fb_StrCompare( (void*)&TMP$377$4, -1ll, (void*)"gcc", 4ll );
				if( (int64)vr$55 != 0ll ) goto label$618;
				label$619:;
				{
					*(int64*)((uint8*)&FBC$ + 40ll) = 1ll;
				}
				goto label$615;
				label$618:;
				int32 vr$58 = fb_StrCompare( (void*)&TMP$377$4, -1ll, (void*)"clang", 6ll );
				if( (int64)vr$58 != 0ll ) goto label$620;
				label$621:;
				{
					*(int64*)((uint8*)&FBC$ + 40ll) = 2ll;
				}
				goto label$615;
				label$620:;
				int32 vr$61 = fb_StrCompare( (void*)&TMP$377$4, -1ll, (void*)"llvm", 5ll );
				if( (int64)vr$61 != 0ll ) goto label$622;
				label$623:;
				{
					*(int64*)((uint8*)&FBC$ + 40ll) = 3ll;
				}
				goto label$615;
				label$622:;
				int32 vr$64 = fb_StrCompare( (void*)&TMP$377$4, -1ll, (void*)"gas64", 6ll );
				if( (int64)vr$64 != 0ll ) goto label$624;
				label$625:;
				{
					*(int64*)((uint8*)&FBC$ + 40ll) = 4ll;
				}
				goto label$615;
				label$624:;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$626:;
				label$615:;
				fb_StrDelete( (FBSTRING*)&TMP$377$4 );
			}
		}
		goto label$556;
		label$627:;
		{
			*(int64*)((uint8*)&FBC$ + 128ll) = -1ll;
		}
		goto label$556;
		label$628:;
		{
			FBSTRING TMP$381$3;
			__builtin_memset( &TMP$381$3, 0, 24ll );
			FBSTRING* vr$68 = PATHSTRIPDIV( ARG$1 );
			fb_StrAssign( (void*)&TMP$381$3, -1ll, (void*)vr$68, -1ll, 0 );
			FBADDINCLUDEPATH( &TMP$381$3 );
			fb_StrDelete( (FBSTRING*)&TMP$381$3 );
		}
		goto label$556;
		label$629:;
		{
			FBADDPREINCLUDE( ARG$1 );
		}
		goto label$556;
		label$630:;
		{
			STRSETADD( (struct $7TSTRSET*)((uint8*)&FBC$ + 528ll), ARG$1, 0ll );
		}
		goto label$556;
		label$631:;
		{
			int64 VALUE$3;
			$7FB_LANG vr$74 = FBGETLANGID( (char*)*(char**)ARG$1 );
			VALUE$3 = vr$74;
			if( VALUE$3 != -1ll ) goto label$633;
			{
				HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
			}
			label$633:;
			label$632:;
			int64 vr$75 = FBGETOPTION( 11ll );
			if( vr$75 != 0ll ) goto label$635;
			{
				FBSETOPTION( 10ll, VALUE$3 );
				*($7FB_LANG*)((uint8*)&FBC$ + 4088ll) = VALUE$3;
				if( IS_SOURCE$1 == 0ll ) goto label$637;
				{
					FBSETOPTION( 12ll, VALUE$3 );
				}
				label$637:;
				label$636:;
			}
			label$635:;
			label$634:;
		}
		goto label$556;
		label$638:;
		{
			FBSETOPTION( 0ll, 1ll );
		}
		goto label$556;
		label$639:;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 1229ll), 261ll, (void*)ARG$1, -1ll, 0 );
			*(int64*)((uint8*)&FBC$ + 1624ll) = -1ll;
		}
		goto label$556;
		label$640:;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 1632ll), 261ll, (void*)ARG$1, -1ll, 0 );
		}
		goto label$556;
		label$641:;
		{
			int64 VALUE$3;
			int32 vr$78 = fb_StrCompare( (void*)ARG$1, -1ll, (void*)"inf", 4ll );
			if( (int64)vr$78 != 0ll ) goto label$643;
			{
				VALUE$3 = 2147483647ll;
			}
			goto label$642;
			label$643:;
			{
				int32 vr$80 = fb_VALINT( (FBSTRING*)ARG$1 );
				VALUE$3 = (int64)vr$80;
				if( VALUE$3 > 0ll ) goto label$645;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$645:;
				label$644:;
			}
			label$642:;
			FBSETOPTION( 27ll, VALUE$3 );
		}
		goto label$556;
		label$646:;
		{
			FBSETOPTION( 36ll, -1ll );
			*(int64*)((uint8*)&FBC$ + 4096ll) = -1ll;
		}
		goto label$556;
		label$647:;
		{
			*(int64*)((uint8*)&FBC$ + 2744ll) = -1ll;
			*(int64*)((uint8*)&FBC$ + 2752ll) = -1ll;
		}
		goto label$556;
		label$648:;
		{
			FBSETOPTION( 26ll, 0ll );
		}
		goto label$556;
		label$649:;
		{
			FBSTRING TMP$383$3;
			struct $7FBARRAYI8FBSTRINGE LIBS$3;
			*(FBSTRING**)&LIBS$3 = (FBSTRING*)0ull;
			*(FBSTRING**)((uint8*)&LIBS$3 + 8ll) = (FBSTRING*)0ull;
			*(int64*)((uint8*)&LIBS$3 + 16ll) = 0ll;
			*(int64*)((uint8*)&LIBS$3 + 24ll) = 24ll;
			*(int64*)((uint8*)&LIBS$3 + 32ll) = 0ll;
			*(int64*)((uint8*)&LIBS$3 + 40ll) = 8ll;
			__builtin_memset( (void*)((uint8*)&LIBS$3 + 48ll), 0, 192ll );
			__builtin_memset( &TMP$383$3, 0, 24ll );
			fb_StrAssign( (void*)&TMP$383$3, -1ll, (void*)",", 2ll, 0 );
			HSPLITSTR( ARG$1, &TMP$383$3, &LIBS$3 );
			fb_StrDelete( (FBSTRING*)&TMP$383$3 );
			{
				int64 I$4;
				int64 vr$89 = fb_ArrayLBound( (struct $7FBARRAYIKvE*)&LIBS$3, 1ll );
				I$4 = vr$89;
				int64 TMP$384$4;
				int64 vr$91 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)&LIBS$3, 1ll );
				TMP$384$4 = vr$91;
				goto label$650;
				label$653:;
				{
					int64 vr$95 = fb_StrLen( (void*)((I$4 * 24ll) + *(int64*)&LIBS$3), -1ll );
					if( vr$95 <= 0ll ) goto label$655;
					{
						STRSETADD( (struct $7TSTRSET*)((uint8*)&FBC$ + 704ll), (FBSTRING*)((I$4 * 24ll) + *(int64*)&LIBS$3), 0ll );
					}
					label$655:;
					label$654:;
				}
				label$651:;
				I$4 = I$4 + 1ll;
				label$650:;
				if( I$4 <= TMP$384$4 ) goto label$653;
				label$652:;
			}
			fb_ArrayStrErase( (struct $7FBARRAYIvE*)&LIBS$3 );
		}
		goto label$556;
		label$656:;
		{
			FBSETOPTION( 40ll, 0ll );
		}
		goto label$556;
		label$657:;
		{
			*(int64*)((uint8*)&FBC$ + 2768ll) = 0ll;
		}
		goto label$556;
		label$658:;
		{
			HCHECKWAITINGOBJFILE(  );
			if( *(struct $9FBCIOFILE**)((uint8*)&FBC$ + 8ll) == (struct $9FBCIOFILE*)0ull ) goto label$660;
			{
				fb_StrAssign( *(void**)((uint8*)*(struct $9FBCIOFILE**)((uint8*)&FBC$ + 8ll) + 24ll), -1ll, (void*)ARG$1, -1ll, 0 );
				*(int64*)((uint8*)*(struct $9FBCIOFILE**)((uint8*)&FBC$ + 8ll) + 32ll) = -1ll;
			}
			goto label$659;
			label$660:;
			{
				fb_StrAssign( (void*)((uint8*)&FBC$ + 16ll), -1ll, (void*)ARG$1, -1ll, 0 );
			}
			label$659:;
		}
		goto label$556;
		label$661:;
		{
			int64 VALUE$3;
			int32 vr$105 = fb_StrCompare( (void*)ARG$1, -1ll, (void*)"max", 4ll );
			if( (int64)vr$105 != 0ll ) goto label$663;
			{
				VALUE$3 = 3ll;
			}
			goto label$662;
			label$663:;
			{
				int32 vr$107 = fb_VALINT( (FBSTRING*)ARG$1 );
				VALUE$3 = (int64)vr$107;
				if( VALUE$3 >= 0ll ) goto label$665;
				{
					VALUE$3 = 0ll;
				}
				goto label$664;
				label$665:;
				if( VALUE$3 <= 3ll ) goto label$666;
				{
					VALUE$3 = 3ll;
				}
				label$666:;
				label$664:;
			}
			label$662:;
			FBSETOPTION( 8ll, VALUE$3 );
		}
		goto label$556;
		label$667:;
		{
			FBSTRING TMP$386$3;
			__builtin_memset( &TMP$386$3, 0, 24ll );
			FBSTRING* vr$110 = PATHSTRIPDIV( ARG$1 );
			fb_StrAssign( (void*)&TMP$386$3, -1ll, (void*)vr$110, -1ll, 0 );
			STRSETADD( (struct $7TSTRSET*)((uint8*)&FBC$ + 616ll), &TMP$386$3, 0ll );
			fb_StrDelete( (FBSTRING*)&TMP$386$3 );
		}
		goto label$556;
		label$668:;
		{
			FBSETOPTION( 38ll, -1ll );
		}
		goto label$556;
		label$669:;
		{
			FBSETOPTION( 1ll, -1ll );
			*(int64*)((uint8*)&FBC$ + 72ll) = -1ll;
		}
		goto label$556;
		label$670:;
		{
			FBSTRING* vr$115 = PATHSTRIPDIV( ARG$1 );
			fb_StrAssign( (void*)((uint8*)&FBC$ + 2776ll), 261ll, (void*)vr$115, -1ll, 0 );
			HREPLACESLASH( (char*)((uint8*)&FBC$ + 2776ll), 47ll );
		}
		goto label$556;
		label$671:;
		{
			{
				FBSTRING TMP$387$4;
				fb_StrInit( (void*)&TMP$387$4, -1ll, (void*)ARG$1, -1ll, 0 );
				int32 vr$120 = fb_StrCompare( (void*)&TMP$387$4, -1ll, (void*)"host", 5ll );
				if( (int64)vr$120 != 0ll ) goto label$673;
				label$674:;
				{
					*(int64*)((uint8*)&FBC$ + 136ll) = 0ll;
				}
				goto label$672;
				label$673:;
				int32 vr$123 = fb_StrCompare( (void*)&TMP$387$4, -1ll, (void*)"target", 7ll );
				if( (int64)vr$123 != 0ll ) goto label$675;
				label$676:;
				{
					*(int64*)((uint8*)&FBC$ + 136ll) = 1ll;
				}
				goto label$672;
				label$675:;
				int32 vr$126 = fb_StrCompare( (void*)&TMP$387$4, -1ll, (void*)"x", 2ll );
				if( (int64)vr$126 != 0ll ) goto label$677;
				label$678:;
				{
					*(int64*)((uint8*)&FBC$ + 136ll) = 2ll;
				}
				goto label$672;
				label$677:;
				int32 vr$129 = fb_StrCompare( (void*)&TMP$387$4, -1ll, (void*)"fblibdir", 9ll );
				if( (int64)vr$129 != 0ll ) goto label$679;
				label$680:;
				{
					*(int64*)((uint8*)&FBC$ + 136ll) = 3ll;
				}
				goto label$672;
				label$679:;
				int32 vr$132 = fb_StrCompare( (void*)&TMP$387$4, -1ll, (void*)"sha-1", 6ll );
				if( (int64)vr$132 != 0ll ) goto label$681;
				label$682:;
				{
					*(int64*)((uint8*)&FBC$ + 136ll) = 4ll;
				}
				goto label$672;
				label$681:;
				int32 vr$135 = fb_StrCompare( (void*)&TMP$387$4, -1ll, (void*)"fork-id", 8ll );
				if( (int64)vr$135 != 0ll ) goto label$683;
				label$684:;
				{
					*(int64*)((uint8*)&FBC$ + 136ll) = 5ll;
				}
				goto label$672;
				label$683:;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$685:;
				label$672:;
				fb_StrDelete( (FBSTRING*)&TMP$387$4 );
			}
		}
		goto label$556;
		label$686:;
		{
			FBSETOPTION( 24ll, 1ll );
		}
		goto label$556;
		label$687:;
		{
			{
				FBSTRING TMP$394$4;
				fb_StrInit( (void*)&TMP$394$4, -1ll, (void*)ARG$1, -1ll, 0 );
				int32 vr$140 = fb_StrCompare( (void*)&TMP$394$4, -1ll, (void*)"default", 8ll );
				if( (int64)vr$140 == 0ll ) goto label$690;
				label$691:;
				int32 vr$143 = fb_StrCompare( (void*)&TMP$394$4, -1ll, (void*)"gmon", 5ll );
				if( (int64)vr$143 != 0ll ) goto label$689;
				label$690:;
				{
					FBSETOPTION( 24ll, 1ll );
				}
				goto label$688;
				label$689:;
				int32 vr$146 = fb_StrCompare( (void*)&TMP$394$4, -1ll, (void*)"fb", 3ll );
				if( (int64)vr$146 != 0ll ) goto label$692;
				label$693:;
				{
					FBSETOPTION( 24ll, 2ll );
				}
				goto label$688;
				label$692:;
				int32 vr$149 = fb_StrCompare( (void*)&TMP$394$4, -1ll, (void*)"cycles", 7ll );
				if( (int64)vr$149 != 0ll ) goto label$694;
				label$695:;
				{
					FBSETOPTION( 24ll, 3ll );
				}
				goto label$688;
				label$694:;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$696:;
				label$688:;
				fb_StrDelete( (FBSTRING*)&TMP$394$4 );
			}
		}
		goto label$556;
		label$697:;
		{
			FBSETOPTION( 0ll, 3ll );
			*(int64*)((uint8*)&FBC$ + 72ll) = -1ll;
			*(int64*)((uint8*)&FBC$ + 80ll) = -1ll;
		}
		goto label$556;
		label$698:;
		{
			*(int64*)((uint8*)&FBC$ + 80ll) = -1ll;
		}
		goto label$556;
		label$699:;
		{
			FBSETOPTION( 0ll, 3ll );
			*(int64*)((uint8*)&FBC$ + 88ll) = -1ll;
			*(int64*)((uint8*)&FBC$ + 96ll) = -1ll;
		}
		goto label$556;
		label$700:;
		{
			*(int64*)((uint8*)&FBC$ + 96ll) = -1ll;
		}
		goto label$556;
		label$701:;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 1893ll), 129ll, (void*)ARG$1, -1ll, 0 );
			{
				FBSTRING TMP$398$4;
				fb_StrInit( (void*)&TMP$398$4, -1ll, (void*)ARG$1, -1ll, 0 );
				int32 vr$155 = fb_StrCompare( (void*)&TMP$398$4, -1ll, (void*)"gui", 4ll );
				if( (int64)vr$155 != 0ll ) goto label$703;
				label$704:;
				{
					FBSETOPTION( 42ll, 1ll );
				}
				label$703:;
				label$702:;
				fb_StrDelete( (FBSTRING*)&TMP$398$4 );
			}
		}
		goto label$556;
		label$705:;
		{
			FBSETOPTION( 41ll, -1ll );
		}
		goto label$556;
		label$706:;
		{
			*(int64*)((uint8*)&FBC$ + 2760ll) = -1ll;
		}
		goto label$556;
		label$707:;
		{
			*(int64*)((uint8*)&FBC$ + 2768ll) = -1ll;
		}
		goto label$556;
		label$708:;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 2354ll), 261ll, (void*)ARG$1, -1ll, 0 );
		}
		goto label$556;
		label$709:;
		{
			int32 vr$159 = fb_VALINT( (FBSTRING*)ARG$1 );
			FBSETOPTION( 39ll, (int64)vr$159 << (10ll & 63ll) );
		}
		goto label$556;
		label$710:;
		{
			int64 OS$3;
			__builtin_memset( &OS$3, 0, 8ll );
			int64 CPUTYPE$3;
			__builtin_memset( &CPUTYPE$3, 0, 8ll );
			int64 IS_GNU_TRIPLET$3;
			__builtin_memset( &IS_GNU_TRIPLET$3, 0, 8ll );
			HPARSETARGETARG( ARG$1, &OS$3, &CPUTYPE$3, &IS_GNU_TRIPLET$3 );
			if( ((int64)-(OS$3 < 0ll) | (int64)-(CPUTYPE$3 < 0ll)) == 0ll ) goto label$712;
			{
				HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
			}
			label$712:;
			label$711:;
			FBSETOPTION( 3ll, OS$3 );
			FBSETOPTION( 4ll, CPUTYPE$3 );
			if( (((int64)-(OS$3 != 2ll) | (int64)-(CPUTYPE$3 != 13ll)) | IS_GNU_TRIPLET$3) == 0ll ) goto label$714;
			{
				FBSTRING TMP$399$4;
				fb_StrAssign( (void*)((uint8*)&FBC$ + 2096ll), 129ll, (void*)ARG$1, -1ll, 0 );
				__builtin_memset( &TMP$399$4, 0, 24ll );
				FBSTRING* vr$179 = fb_StrConcat( &TMP$399$4, (void*)((uint8*)&FBC$ + 2096ll), 129ll, (void*)"-", 2ll );
				fb_StrAssign( (void*)((uint8*)&FBC$ + 2225ll), 129ll, (void*)vr$179, -1ll, 0 );
			}
			label$714:;
			label$713:;
		}
		goto label$556;
		label$715:;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 2615ll), 129ll, (void*)ARG$1, -1ll, 0 );
		}
		goto label$556;
		label$716:;
		{
			*(int64*)((uint8*)&FBC$ + 112ll) = -1ll;
		}
		goto label$556;
		label$717:;
		{
			int64 VALUE$3;
			{
				FBSTRING TMP$400$4;
				FBSTRING* vr$182 = fb_StrUcase2( (FBSTRING*)ARG$1, 0 );
				fb_StrInit( (void*)&TMP$400$4, -1ll, (void*)vr$182, -1ll, 0 );
				int32 vr$185 = fb_StrCompare( (void*)&TMP$400$4, -1ll, (void*)"NONE", 5ll );
				if( (int64)vr$185 == 0ll ) goto label$720;
				label$721:;
				int32 vr$188 = fb_StrCompare( (void*)&TMP$400$4, -1ll, (void*)"0", 2ll );
				if( (int64)vr$188 != 0ll ) goto label$719;
				label$720:;
				{
					VALUE$3 = 0ll;
				}
				goto label$718;
				label$719:;
				int32 vr$191 = fb_StrCompare( (void*)&TMP$400$4, -1ll, (void*)"1", 2ll );
				if( (int64)vr$191 != 0ll ) goto label$722;
				label$723:;
				{
					VALUE$3 = 1ll;
				}
				goto label$718;
				label$722:;
				int32 vr$194 = fb_StrCompare( (void*)&TMP$400$4, -1ll, (void*)"2", 2ll );
				if( (int64)vr$194 != 0ll ) goto label$724;
				label$725:;
				{
					VALUE$3 = 2ll;
				}
				goto label$718;
				label$724:;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$726:;
				label$718:;
				fb_StrDelete( (FBSTRING*)&TMP$400$4 );
			}
			FBSETOPTION( 7ll, VALUE$3 );
		}
		goto label$556;
		label$727:;
		{
			if( IS_SOURCE$1 == 0ll ) goto label$729;
			{
				if( *(int64*)((uint8*)&FBC$ + 120ll) != 0ll ) goto label$731;
				{
					HPRINTVERSION( *(int64*)((uint8*)&FBC$ + 112ll) );
				}
				label$731:;
				label$730:;
			}
			label$729:;
			label$728:;
			*(int64*)((uint8*)&FBC$ + 120ll) = -1ll;
		}
		goto label$556;
		label$732:;
		{
			int64 VALUE$3;
			VALUE$3 = -1ll;
			{
				FBSTRING TMP$403$4;
				fb_StrInit( (void*)&TMP$403$4, -1ll, (void*)ARG$1, -1ll, 0 );
				int32 vr$199 = fb_StrCompare( (void*)&TMP$403$4, -1ll, (void*)"all", 4ll );
				if( (int64)vr$199 != 0ll ) goto label$734;
				label$735:;
				{
					VALUE$3 = 0ll;
				}
				goto label$733;
				label$734:;
				int32 vr$202 = fb_StrCompare( (void*)&TMP$403$4, -1ll, (void*)"none", 5ll );
				if( (int64)vr$202 != 0ll ) goto label$736;
				label$737:;
				{
					VALUE$3 = 4ll;
				}
				goto label$733;
				label$736:;
				int32 vr$205 = fb_StrCompare( (void*)&TMP$403$4, -1ll, (void*)"param", 6ll );
				if( (int64)vr$205 != 0ll ) goto label$738;
				label$739:;
				{
					int64 vr$207 = FBGETOPTION( 28ll );
					FBSETOPTION( 28ll, vr$207 | 2ll );
				}
				goto label$733;
				label$738:;
				int32 vr$210 = fb_StrCompare( (void*)&TMP$403$4, -1ll, (void*)"escape", 7ll );
				if( (int64)vr$210 != 0ll ) goto label$740;
				label$741:;
				{
					int64 vr$212 = FBGETOPTION( 28ll );
					FBSETOPTION( 28ll, vr$212 | 1ll );
				}
				goto label$733;
				label$740:;
				int32 vr$215 = fb_StrCompare( (void*)&TMP$403$4, -1ll, (void*)"next", 5ll );
				if( (int64)vr$215 != 0ll ) goto label$742;
				label$743:;
				{
					int64 vr$217 = FBGETOPTION( 28ll );
					FBSETOPTION( 28ll, vr$217 | 8ll );
				}
				goto label$733;
				label$742:;
				int32 vr$220 = fb_StrCompare( (void*)&TMP$403$4, -1ll, (void*)"signedness", 11ll );
				if( (int64)vr$220 != 0ll ) goto label$744;
				label$745:;
				{
					int64 vr$222 = FBGETOPTION( 28ll );
					FBSETOPTION( 28ll, vr$222 | 32ll );
				}
				goto label$733;
				label$744:;
				int32 vr$225 = fb_StrCompare( (void*)&TMP$403$4, -1ll, (void*)"constness", 10ll );
				if( (int64)vr$225 != 0ll ) goto label$746;
				label$747:;
				{
					int64 vr$227 = FBGETOPTION( 28ll );
					FBSETOPTION( 28ll, vr$227 | 128ll );
					VALUE$3 = 0ll;
				}
				goto label$733;
				label$746:;
				int32 vr$230 = fb_StrCompare( (void*)&TMP$403$4, -1ll, (void*)"funcptr", 8ll );
				if( (int64)vr$230 != 0ll ) goto label$748;
				label$749:;
				{
					int64 vr$232 = FBGETOPTION( 28ll );
					FBSETOPTION( 28ll, vr$232 | 64ll );
					VALUE$3 = 0ll;
				}
				goto label$733;
				label$748:;
				int32 vr$235 = fb_StrCompare( (void*)&TMP$403$4, -1ll, (void*)"suffix", 7ll );
				if( (int64)vr$235 != 0ll ) goto label$750;
				label$751:;
				{
					int64 vr$237 = FBGETOPTION( 28ll );
					FBSETOPTION( 28ll, vr$237 | 256ll );
				}
				goto label$733;
				label$750:;
				int32 vr$240 = fb_StrCompare( (void*)&TMP$403$4, -1ll, (void*)"pedantic", 9ll );
				if( (int64)vr$240 != 0ll ) goto label$752;
				label$753:;
				{
					FBSETOPTION( 28ll, 4294965527ll );
					if( VALUE$3 <= 1ll ) goto label$755;
					{
						VALUE$3 = 1ll;
					}
					label$755:;
					label$754:;
				}
				goto label$733;
				label$752:;
				int32 vr$243 = fb_StrCompare( (void*)&TMP$403$4, -1ll, (void*)"error", 6ll );
				if( (int64)vr$243 != 0ll ) goto label$756;
				label$757:;
				{
					int64 vr$245 = FBGETOPTION( 28ll );
					FBSETOPTION( 28ll, vr$245 | 512ll );
				}
				goto label$733;
				label$756:;
				int32 vr$248 = fb_StrCompare( (void*)&TMP$403$4, -1ll, (void*)"upcast", 7ll );
				if( (int64)vr$248 != 0ll ) goto label$758;
				label$759:;
				{
					int64 vr$250 = FBGETOPTION( 28ll );
					FBSETOPTION( 28ll, vr$250 | 1024ll );
				}
				goto label$733;
				label$758:;
				{
					int32 vr$252 = fb_VALINT( (FBSTRING*)ARG$1 );
					VALUE$3 = (int64)vr$252;
				}
				label$760:;
				label$733:;
				fb_StrDelete( (FBSTRING*)&TMP$403$4 );
			}
			if( VALUE$3 < 0ll ) goto label$762;
			{
				FBSETOPTION( 25ll, VALUE$3 );
			}
			label$762:;
			label$761:;
		}
		goto label$556;
		label$763:;
		{
			FBSTRING TMP$416$3;
			FBSTRING TMP$417$3;
			FBSTRING TMP$418$3;
			FBSTRING* vr$256 = HREPLACE( (char*)*(char**)ARG$1, (char*)",", (char*)" " );
			__builtin_memset( &TMP$416$3, 0, 24ll );
			FBSTRING* vr$259 = fb_StrConcat( &TMP$416$3, (void*)" ", 2ll, (void*)vr$256, -1ll );
			__builtin_memset( &TMP$417$3, 0, 24ll );
			FBSTRING* vr$262 = fb_StrConcat( &TMP$417$3, (void*)vr$259, -1ll, (void*)" ", 2ll );
			__builtin_memset( &TMP$418$3, 0, 24ll );
			FBSTRING* vr$266 = fb_StrConcat( &TMP$418$3, (void*)((uint8*)&FBC$ + 2024ll), -1ll, (void*)vr$262, -1ll );
			fb_StrAssign( (void*)((uint8*)&FBC$ + 2024ll), -1ll, (void*)vr$266, -1ll, 0 );
		}
		goto label$556;
		label$764:;
		{
			FBSTRING TMP$419$3;
			FBSTRING TMP$420$3;
			FBSTRING TMP$421$3;
			FBSTRING* vr$269 = HREPLACE( (char*)*(char**)ARG$1, (char*)",", (char*)" " );
			__builtin_memset( &TMP$419$3, 0, 24ll );
			FBSTRING* vr$272 = fb_StrConcat( &TMP$419$3, (void*)" ", 2ll, (void*)vr$269, -1ll );
			__builtin_memset( &TMP$420$3, 0, 24ll );
			FBSTRING* vr$275 = fb_StrConcat( &TMP$420$3, (void*)vr$272, -1ll, (void*)" ", 2ll );
			__builtin_memset( &TMP$421$3, 0, 24ll );
			FBSTRING* vr$279 = fb_StrConcat( &TMP$421$3, (void*)((uint8*)&FBC$ + 2072ll), -1ll, (void*)vr$275, -1ll );
			fb_StrAssign( (void*)((uint8*)&FBC$ + 2072ll), -1ll, (void*)vr$279, -1ll, 0 );
		}
		goto label$556;
		label$765:;
		{
			FBSTRING TMP$422$3;
			FBSTRING TMP$423$3;
			FBSTRING TMP$424$3;
			FBSTRING* vr$282 = HREPLACE( (char*)*(char**)ARG$1, (char*)",", (char*)" " );
			__builtin_memset( &TMP$422$3, 0, 24ll );
			FBSTRING* vr$285 = fb_StrConcat( &TMP$422$3, (void*)" ", 2ll, (void*)vr$282, -1ll );
			__builtin_memset( &TMP$423$3, 0, 24ll );
			FBSTRING* vr$288 = fb_StrConcat( &TMP$423$3, (void*)vr$285, -1ll, (void*)" ", 2ll );
			__builtin_memset( &TMP$424$3, 0, 24ll );
			FBSTRING* vr$292 = fb_StrConcat( &TMP$424$3, (void*)((uint8*)&FBC$ + 2048ll), -1ll, (void*)vr$288, -1ll );
			fb_StrAssign( (void*)((uint8*)&FBC$ + 2048ll), -1ll, (void*)vr$292, -1ll, 0 );
		}
		goto label$556;
		label$766:;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 968ll), 261ll, (void*)ARG$1, -1ll, 0 );
		}
		goto label$556;
		label$767:;
		{
			{
				FBSTRING TMP$425$4;
				FBSTRING* vr$295 = fb_StrLcase2( (FBSTRING*)ARG$1, 0 );
				fb_StrInit( (void*)&TMP$425$4, -1ll, (void*)vr$295, -1ll, 0 );
				int32 vr$298 = fb_StrCompare( (void*)&TMP$425$4, -1ll, (void*)"gosub-setjmp", 13ll );
				if( (int64)vr$298 != 0ll ) goto label$769;
				label$770:;
				{
					FBSETOPTION( 29ll, -1ll );
				}
				goto label$768;
				label$769:;
				int32 vr$301 = fb_StrCompare( (void*)&TMP$425$4, -1ll, (void*)"valist-as-ptr", 14ll );
				if( (int64)vr$301 != 0ll ) goto label$771;
				label$772:;
				{
					FBSETOPTION( 30ll, -1ll );
				}
				goto label$768;
				label$771:;
				int32 vr$304 = fb_StrCompare( (void*)&TMP$425$4, -1ll, (void*)"no-thiscall", 12ll );
				if( (int64)vr$304 != 0ll ) goto label$773;
				label$774:;
				{
					FBSETOPTION( 31ll, -1ll );
				}
				goto label$768;
				label$773:;
				int32 vr$307 = fb_StrCompare( (void*)&TMP$425$4, -1ll, (void*)"no-fastcall", 12ll );
				if( (int64)vr$307 != 0ll ) goto label$775;
				label$776:;
				{
					FBSETOPTION( 32ll, -1ll );
				}
				goto label$768;
				label$775:;
				int32 vr$310 = fb_StrCompare( (void*)&TMP$425$4, -1ll, (void*)"fbrt", 5ll );
				if( (int64)vr$310 != 0ll ) goto label$777;
				label$778:;
				{
					FBSETOPTION( 33ll, -1ll );
				}
				goto label$768;
				label$777:;
				int32 vr$313 = fb_StrCompare( (void*)&TMP$425$4, -1ll, (void*)"nocmdline", 10ll );
				if( (int64)vr$313 != 0ll ) goto label$779;
				label$780:;
				{
					FBSETOPTION( 43ll, -1ll );
				}
				goto label$768;
				label$779:;
				int32 vr$316 = fb_StrCompare( (void*)&TMP$425$4, -1ll, (void*)"retinflts", 10ll );
				if( (int64)vr$316 != 0ll ) goto label$781;
				label$782:;
				{
					FBSETOPTION( 44ll, -1ll );
				}
				goto label$768;
				label$781:;
				int32 vr$319 = fb_StrCompare( (void*)&TMP$425$4, -1ll, (void*)"nobuiltins", 11ll );
				if( (int64)vr$319 != 0ll ) goto label$783;
				label$784:;
				{
					FBSETOPTION( 45ll, -1ll );
				}
				goto label$768;
				label$783:;
				int32 vr$322 = fb_StrCompare( (void*)&TMP$425$4, -1ll, (void*)"optabstract", 12ll );
				if( (int64)vr$322 != 0ll ) goto label$785;
				label$786:;
				{
					FBSETOPTION( 46ll, -1ll );
				}
				goto label$768;
				label$785:;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$787:;
				label$768:;
				fb_StrDelete( (FBSTRING*)&TMP$425$4 );
			}
		}
		goto label$556;
		label$557:;
		static const void* tmp$883[74ll] = {
			&&label$558,
			&&label$559,
			&&label$562,
			&&label$569,
			&&label$570,
			&&label$571,
			&&label$572,
			&&label$573,
			&&label$574,
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
			&&label$586,
			&&label$587,
			&&label$588,
			&&label$589,
			&&label$596,
			&&label$603,
			&&label$613,
			&&label$614,
			&&label$627,
			&&label$628,
			&&label$629,
			&&label$630,
			&&label$631,
			&&label$638,
			&&label$639,
			&&label$640,
			&&label$641,
			&&label$646,
			&&label$647,
			&&label$648,
			&&label$649,
			&&label$656,
			&&label$657,
			&&label$658,
			&&label$661,
			&&label$667,
			&&label$668,
			&&label$669,
			&&label$670,
			&&label$671,
			&&label$687,
			&&label$686,
			&&label$697,
			&&label$698,
			&&label$699,
			&&label$700,
			&&label$701,
			&&label$705,
			&&label$706,
			&&label$707,
			&&label$708,
			&&label$709,
			&&label$710,
			&&label$715,
			&&label$716,
			&&label$717,
			&&label$727,
			&&label$732,
			&&label$763,
			&&label$764,
			&&label$765,
			&&label$766,
			&&label$767,
		};
		if( TMP$361$2 > 73ull ) goto label$556;
		goto *tmp$883[TMP$361$2 - 0ull];
		label$556:;
	}
	label$555:;
}

static int64 PARSEOPTION( char* OPT$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$788:;
	{
		uint64 TMP$435$2;
		TMP$435$2 = (uint64)*(uint8*)OPT$1;
		goto label$791;
		label$792:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$794;
			{
				fb$result$1 = 0ll;
				goto label$789;
			}
			label$794:;
			label$793:;
			int32 vr$5 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"arch", 5ll );
			if( (int64)vr$5 != 0ll ) goto label$796;
			{
				fb$result$1 = 1ll;
				goto label$789;
			}
			label$796:;
			label$795:;
			int32 vr$7 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"asm", 4ll );
			if( (int64)vr$7 != 0ll ) goto label$798;
			{
				fb$result$1 = 2ll;
				goto label$789;
			}
			label$798:;
			label$797:;
		}
		goto label$790;
		label$799:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$801;
			{
				fb$result$1 = 3ll;
				goto label$789;
			}
			label$801:;
			label$800:;
			int32 vr$11 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"buildprefix", 12ll );
			if( (int64)vr$11 != 0ll ) goto label$803;
			{
				fb$result$1 = 4ll;
				goto label$789;
			}
			label$803:;
			label$802:;
		}
		goto label$790;
		label$804:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$806;
			{
				fb$result$1 = 5ll;
				goto label$789;
			}
			label$806:;
			label$805:;
		}
		goto label$790;
		label$807:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$809;
			{
				fb$result$1 = 6ll;
				goto label$789;
			}
			label$809:;
			label$808:;
		}
		goto label$790;
		label$810:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$812;
			{
				fb$result$1 = 7ll;
				goto label$789;
			}
			label$812:;
			label$811:;
			int32 vr$19 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"dll", 4ll );
			if( (int64)vr$19 != 0ll ) goto label$814;
			{
				fb$result$1 = 8ll;
				goto label$789;
			}
			label$814:;
			label$813:;
			int32 vr$21 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"dylib", 6ll );
			if( (int64)vr$21 != 0ll ) goto label$816;
			{
				fb$result$1 = 9ll;
				goto label$789;
			}
			label$816:;
			label$815:;
		}
		goto label$790;
		label$817:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$819;
			{
				fb$result$1 = 10ll;
				goto label$789;
			}
			label$819:;
			label$818:;
			int32 vr$25 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"ex", 3ll );
			if( (int64)vr$25 != 0ll ) goto label$821;
			{
				fb$result$1 = 20ll;
				goto label$789;
			}
			label$821:;
			label$820:;
			int32 vr$27 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"earray", 7ll );
			if( (int64)vr$27 != 0ll ) goto label$823;
			{
				fb$result$1 = 11ll;
				goto label$789;
			}
			label$823:;
			label$822:;
			int32 vr$29 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"earraydims", 11ll );
			if( (int64)vr$29 != 0ll ) goto label$825;
			{
				fb$result$1 = 12ll;
				goto label$789;
			}
			label$825:;
			label$824:;
			int32 vr$31 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"eassert", 8ll );
			if( (int64)vr$31 != 0ll ) goto label$827;
			{
				fb$result$1 = 13ll;
				goto label$789;
			}
			label$827:;
			label$826:;
			int32 vr$33 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"edebug", 7ll );
			if( (int64)vr$33 != 0ll ) goto label$829;
			{
				fb$result$1 = 14ll;
				goto label$789;
			}
			label$829:;
			label$828:;
			int32 vr$35 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"edebuginfo", 11ll );
			if( (int64)vr$35 != 0ll ) goto label$831;
			{
				fb$result$1 = 15ll;
				goto label$789;
			}
			label$831:;
			label$830:;
			int32 vr$37 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"elocation", 10ll );
			if( (int64)vr$37 != 0ll ) goto label$833;
			{
				fb$result$1 = 16ll;
				goto label$789;
			}
			label$833:;
			label$832:;
			int32 vr$39 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"enullptr", 9ll );
			if( (int64)vr$39 != 0ll ) goto label$835;
			{
				fb$result$1 = 17ll;
				goto label$789;
			}
			label$835:;
			label$834:;
			int32 vr$41 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"eunwind", 8ll );
			if( (int64)vr$41 != 0ll ) goto label$837;
			{
				fb$result$1 = 18ll;
				goto label$789;
			}
			label$837:;
			label$836:;
			int32 vr$43 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"entry", 6ll );
			if( (int64)vr$43 != 0ll ) goto label$839;
			{
				fb$result$1 = 19ll;
				goto label$789;
			}
			label$839:;
			label$838:;
			int32 vr$45 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"exx", 4ll );
			if( (int64)vr$45 != 0ll ) goto label$841;
			{
				fb$result$1 = 21ll;
				goto label$789;
			}
			label$841:;
			label$840:;
			int32 vr$47 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"export", 7ll );
			if( (int64)vr$47 != 0ll ) goto label$843;
			{
				fb$result$1 = 22ll;
				goto label$789;
			}
			label$843:;
			label$842:;
		}
		goto label$790;
		label$844:;
		{
			int32 vr$49 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"fbgfx", 6ll );
			if( (int64)vr$49 != 0ll ) goto label$846;
			{
				fb$result$1 = 23ll;
				goto label$789;
			}
			label$846:;
			label$845:;
			int32 vr$51 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"forcelang", 10ll );
			if( (int64)vr$51 != 0ll ) goto label$848;
			{
				fb$result$1 = 24ll;
				goto label$789;
			}
			label$848:;
			label$847:;
			int32 vr$53 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"fpmode", 7ll );
			if( (int64)vr$53 != 0ll ) goto label$850;
			{
				fb$result$1 = 25ll;
				goto label$789;
			}
			label$850:;
			label$849:;
			int32 vr$55 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"fpu", 4ll );
			if( (int64)vr$55 != 0ll ) goto label$852;
			{
				fb$result$1 = 26ll;
				goto label$789;
			}
			label$852:;
			label$851:;
		}
		goto label$790;
		label$853:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$855;
			{
				fb$result$1 = 27ll;
				goto label$789;
			}
			label$855:;
			label$854:;
			int32 vr$59 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"gen", 4ll );
			if( (int64)vr$59 != 0ll ) goto label$857;
			{
				fb$result$1 = 28ll;
				goto label$789;
			}
			label$857:;
			label$856:;
		}
		goto label$790;
		label$858:;
		{
			int32 vr$61 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"help", 5ll );
			if( (int64)vr$61 != 0ll ) goto label$860;
			{
				fb$result$1 = 29ll;
				goto label$789;
			}
			label$860:;
			label$859:;
		}
		goto label$790;
		label$861:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$863;
			{
				fb$result$1 = 30ll;
				goto label$789;
			}
			label$863:;
			label$862:;
			int32 vr$65 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"include", 8ll );
			if( (int64)vr$65 != 0ll ) goto label$865;
			{
				fb$result$1 = 31ll;
				goto label$789;
			}
			label$865:;
			label$864:;
		}
		goto label$790;
		label$866:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$868;
			{
				fb$result$1 = 32ll;
				goto label$789;
			}
			label$868:;
			label$867:;
			int32 vr$69 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"lang", 5ll );
			if( (int64)vr$69 != 0ll ) goto label$870;
			{
				fb$result$1 = 33ll;
				goto label$789;
			}
			label$870:;
			label$869:;
			int32 vr$71 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"lib", 4ll );
			if( (int64)vr$71 != 0ll ) goto label$872;
			{
				fb$result$1 = 34ll;
				goto label$789;
			}
			label$872:;
			label$871:;
		}
		goto label$790;
		label$873:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$875;
			{
				fb$result$1 = 35ll;
				goto label$789;
			}
			label$875:;
			label$874:;
			int32 vr$75 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"map", 4ll );
			if( (int64)vr$75 != 0ll ) goto label$877;
			{
				fb$result$1 = 36ll;
				goto label$789;
			}
			label$877:;
			label$876:;
			int32 vr$77 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"maxerr", 7ll );
			if( (int64)vr$77 != 0ll ) goto label$879;
			{
				fb$result$1 = 37ll;
				goto label$789;
			}
			label$879:;
			label$878:;
			int32 vr$79 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"mt", 3ll );
			if( (int64)vr$79 != 0ll ) goto label$881;
			{
				fb$result$1 = 38ll;
				goto label$789;
			}
			label$881:;
			label$880:;
		}
		goto label$790;
		label$882:;
		{
			int32 vr$81 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"noerrline", 10ll );
			if( (int64)vr$81 != 0ll ) goto label$884;
			{
				fb$result$1 = 40ll;
				goto label$789;
			}
			label$884:;
			label$883:;
			int32 vr$83 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"nodeflibs", 10ll );
			if( (int64)vr$83 != 0ll ) goto label$886;
			{
				fb$result$1 = 39ll;
				goto label$789;
			}
			label$886:;
			label$885:;
			int32 vr$85 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"nolib", 6ll );
			if( (int64)vr$85 != 0ll ) goto label$888;
			{
				fb$result$1 = 41ll;
				goto label$789;
			}
			label$888:;
			label$887:;
			int32 vr$87 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"noobjinfo", 10ll );
			if( (int64)vr$87 != 0ll ) goto label$890;
			{
				fb$result$1 = 42ll;
				goto label$789;
			}
			label$890:;
			label$889:;
			int32 vr$89 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"nostrip", 8ll );
			if( (int64)vr$89 != 0ll ) goto label$892;
			{
				fb$result$1 = 43ll;
				goto label$789;
			}
			label$892:;
			label$891:;
		}
		goto label$790;
		label$893:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$895;
			{
				fb$result$1 = 44ll;
				goto label$789;
			}
			label$895:;
			label$894:;
		}
		goto label$790;
		label$896:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$898;
			{
				fb$result$1 = 45ll;
				goto label$789;
			}
			label$898:;
			label$897:;
		}
		goto label$790;
		label$899:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$901;
			{
				fb$result$1 = 46ll;
				goto label$789;
			}
			label$901:;
			label$900:;
			int32 vr$97 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"pic", 4ll );
			if( (int64)vr$97 != 0ll ) goto label$903;
			{
				fb$result$1 = 47ll;
				goto label$789;
			}
			label$903:;
			label$902:;
			int32 vr$99 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"pp", 3ll );
			if( (int64)vr$99 != 0ll ) goto label$905;
			{
				fb$result$1 = 48ll;
				goto label$789;
			}
			label$905:;
			label$904:;
			int32 vr$101 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"prefix", 7ll );
			if( (int64)vr$101 != 0ll ) goto label$907;
			{
				fb$result$1 = 49ll;
				goto label$789;
			}
			label$907:;
			label$906:;
			int32 vr$103 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"print", 6ll );
			if( (int64)vr$103 != 0ll ) goto label$909;
			{
				fb$result$1 = 50ll;
				goto label$789;
			}
			label$909:;
			label$908:;
			int32 vr$105 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"profile", 8ll );
			if( (int64)vr$105 != 0ll ) goto label$911;
			{
				fb$result$1 = 52ll;
				goto label$789;
			}
			label$911:;
			label$910:;
			int32 vr$107 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"profgen", 8ll );
			if( (int64)vr$107 != 0ll ) goto label$913;
			{
				fb$result$1 = 51ll;
				goto label$789;
			}
			label$913:;
			label$912:;
		}
		goto label$790;
		label$914:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$916;
			{
				fb$result$1 = 53ll;
				goto label$789;
			}
			label$916:;
			label$915:;
			int32 vr$111 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"rr", 3ll );
			if( (int64)vr$111 != 0ll ) goto label$918;
			{
				fb$result$1 = 55ll;
				goto label$789;
			}
			label$918:;
			label$917:;
		}
		goto label$790;
		label$919:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$921;
			{
				fb$result$1 = 54ll;
				goto label$789;
			}
			label$921:;
			label$920:;
			int32 vr$115 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"RR", 3ll );
			if( (int64)vr$115 != 0ll ) goto label$923;
			{
				fb$result$1 = 56ll;
				goto label$789;
			}
			label$923:;
			label$922:;
		}
		goto label$790;
		label$924:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$926;
			{
				fb$result$1 = 57ll;
				goto label$789;
			}
			label$926:;
			label$925:;
			int32 vr$119 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"showincludes", 13ll );
			if( (int64)vr$119 != 0ll ) goto label$928;
			{
				fb$result$1 = 58ll;
				goto label$789;
			}
			label$928:;
			label$927:;
			int32 vr$121 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"static", 7ll );
			if( (int64)vr$121 != 0ll ) goto label$930;
			{
				fb$result$1 = 59ll;
				goto label$789;
			}
			label$930:;
			label$929:;
			int32 vr$123 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"strip", 6ll );
			if( (int64)vr$123 != 0ll ) goto label$932;
			{
				fb$result$1 = 60ll;
				goto label$789;
			}
			label$932:;
			label$931:;
			int32 vr$125 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"sysroot", 8ll );
			if( (int64)vr$125 != 0ll ) goto label$934;
			{
				fb$result$1 = 61ll;
				goto label$789;
			}
			label$934:;
			label$933:;
		}
		goto label$790;
		label$935:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$937;
			{
				fb$result$1 = 62ll;
				goto label$789;
			}
			label$937:;
			label$936:;
			int32 vr$129 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"target", 7ll );
			if( (int64)vr$129 != 0ll ) goto label$939;
			{
				fb$result$1 = 63ll;
				goto label$789;
			}
			label$939:;
			label$938:;
			int32 vr$131 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"title", 6ll );
			if( (int64)vr$131 != 0ll ) goto label$941;
			{
				fb$result$1 = 64ll;
				goto label$789;
			}
			label$941:;
			label$940:;
		}
		goto label$790;
		label$942:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$944;
			{
				fb$result$1 = 65ll;
				goto label$789;
			}
			label$944:;
			label$943:;
			int32 vr$135 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"vec", 4ll );
			if( (int64)vr$135 != 0ll ) goto label$946;
			{
				fb$result$1 = 66ll;
				goto label$789;
			}
			label$946:;
			label$945:;
			int32 vr$137 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"version", 8ll );
			if( (int64)vr$137 != 0ll ) goto label$948;
			{
				fb$result$1 = 67ll;
				goto label$789;
			}
			label$948:;
			label$947:;
		}
		goto label$790;
		label$949:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$951;
			{
				fb$result$1 = 68ll;
				goto label$789;
			}
			label$951:;
			label$950:;
		}
		goto label$790;
		label$952:;
		{
			int32 vr$141 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"Wa", 3ll );
			if( (int64)vr$141 != 0ll ) goto label$954;
			{
				fb$result$1 = 69ll;
				goto label$789;
			}
			label$954:;
			label$953:;
			int32 vr$143 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"Wl", 3ll );
			if( (int64)vr$143 != 0ll ) goto label$956;
			{
				fb$result$1 = 71ll;
				goto label$789;
			}
			label$956:;
			label$955:;
			int32 vr$145 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"Wc", 3ll );
			if( (int64)vr$145 != 0ll ) goto label$958;
			{
				fb$result$1 = 70ll;
				goto label$789;
			}
			label$958:;
			label$957:;
		}
		goto label$790;
		label$959:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$961;
			{
				fb$result$1 = 72ll;
				goto label$789;
			}
			label$961:;
			label$960:;
		}
		goto label$790;
		label$962:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$964;
			{
				fb$result$1 = 73ll;
				goto label$789;
			}
			label$964:;
			label$963:;
		}
		goto label$790;
		label$965:;
		{
			int32 vr$151 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"-version", 9ll );
			if( (int64)vr$151 != 0ll ) goto label$967;
			{
				fb$result$1 = 67ll;
				goto label$789;
			}
			label$967:;
			label$966:;
			int32 vr$153 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"-help", 6ll );
			if( (int64)vr$153 != 0ll ) goto label$969;
			{
				fb$result$1 = 29ll;
				goto label$789;
			}
			label$969:;
			label$968:;
		}
		goto label$790;
		label$791:;
		static const void* tmp$884[78ll] = {
			&&label$965,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$807,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$896,
			&&label$790,
			&&label$790,
			&&label$919,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$952,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$790,
			&&label$792,
			&&label$799,
			&&label$804,
			&&label$810,
			&&label$817,
			&&label$844,
			&&label$853,
			&&label$858,
			&&label$861,
			&&label$790,
			&&label$790,
			&&label$866,
			&&label$873,
			&&label$882,
			&&label$893,
			&&label$899,
			&&label$790,
			&&label$914,
			&&label$924,
			&&label$935,
			&&label$790,
			&&label$942,
			&&label$949,
			&&label$959,
			&&label$790,
			&&label$962,
		};
		if( (TMP$435$2 - 45ull) > 77ull ) goto label$790;
		goto *tmp$884[TMP$435$2 - 45ull];
		label$790:;
	}
	fb$result$1 = -1ll;
	goto label$789;
	label$789:;
	return fb$result$1;
}

static void HANDLEARG( FBSTRING* ARG$1, int64 IS_SOURCE$1, int64 IS_FILE$1 )
{
	label$970:;
	if( *(int64*)&FBC$ < 0ll ) goto label$973;
	{
		int64 vr$0 = fb_StrLen( (void*)ARG$1, -1ll );
		if( vr$0 != 0ll ) goto label$975;
		{
			HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
		}
		label$975:;
		label$974:;
		HANDLEOPT( *(int64*)&FBC$, ARG$1, IS_SOURCE$1 );
		*(int64*)&FBC$ = -1ll;
		goto label$971;
	}
	label$973:;
	label$972:;
	int64 vr$1 = fb_StrLen( (void*)ARG$1, -1ll );
	if( vr$1 != 0ll ) goto label$977;
	{
		goto label$971;
	}
	label$977:;
	label$976:;
	{
		uint8 TMP$513$2;
		TMP$513$2 = *(uint8*)*(char**)ARG$1;
		if( (uint64)(int64)TMP$513$2 != 45ull ) goto label$979;
		label$980:;
		{
			char* OPT$3;
			OPT$3 = (char*)((uint8*)*(char**)ARG$1 + 1ll);
			if( (int64)*(uint8*)OPT$3 != 0ll ) goto label$982;
			{
				HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
			}
			label$982:;
			label$981:;
			int64 OPTID$3;
			int64 vr$9 = PARSEOPTION( OPT$3 );
			OPTID$3 = vr$9;
			if( OPTID$3 >= 0ll ) goto label$984;
			{
				HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
			}
			label$984:;
			label$983:;
			if( IS_SOURCE$1 == 0ll ) goto label$986;
			{
				if( (boolean)(*(boolean*)(((int64)(struct $18FBC_CMDLINE_OPTION*)CMDLINEOPTIONTB$ + (OPTID$3 << (4ll & 63ll))) + 1ll) == 0ll) == (boolean)0ll ) goto label$988;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$988:;
				label$987:;
			}
			label$986:;
			label$985:;
			if( *(boolean*)((int64)(struct $18FBC_CMDLINE_OPTION*)CMDLINEOPTIONTB$ + (OPTID$3 << (4ll & 63ll))) == (boolean)0ll ) goto label$990;
			{
				*(int64*)&FBC$ = OPTID$3;
			}
			goto label$989;
			label$990:;
			{
				HANDLEOPT( OPTID$3, ARG$1, IS_SOURCE$1 );
			}
			label$989:;
			if( IS_SOURCE$1 == 0ll ) goto label$992;
			{
				if( *(boolean*)(((int64)(struct $18FBC_CMDLINE_OPTION*)CMDLINEOPTIONTB$ + (OPTID$3 << (4ll & 63ll))) + 2ll) == (boolean)0ll ) goto label$994;
				{
					FBRESTARTBEGINREQUEST( 2ll );
				}
				label$994:;
				label$993:;
				if( *(int64*)(((int64)(struct $18FBC_CMDLINE_OPTION*)CMDLINEOPTIONTB$ + (OPTID$3 << (4ll & 63ll))) + 8ll) == 0ll ) goto label$996;
				{
					FBRESTARTBEGINREQUEST( 8ll );
				}
				label$996:;
				label$995:;
			}
			label$992:;
			label$991:;
		}
		goto label$978;
		label$979:;
		if( (uint64)(int64)TMP$513$2 != 64ull ) goto label$997;
		label$998:;
		{
			static int64 RECLEVEL$3 = 0ll;
			if( RECLEVEL$3 <= 128ll ) goto label$1000;
			{
				ERRREPORTEX( 27ll, (char*)*(char**)ARG$1, -1ll, 1ll, (char*)0ull );
				FBCEND( 1ll );
			}
			label$1000:;
			label$999:;
			int64 vr$17 = fb_StrLen( (void*)ARG$1, -1ll );
			FBSTRING* vr$19 = fb_RIGHT( (FBSTRING*)ARG$1, vr$17 + -1ll );
			fb_StrAssign( (void*)ARG$1, -1ll, (void*)vr$19, -1ll, 0 );
			int64 vr$20 = fb_StrLen( (void*)ARG$1, -1ll );
			if( vr$20 != 0ll ) goto label$1002;
			{
				HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
			}
			label$1002:;
			label$1001:;
			RECLEVEL$3 = RECLEVEL$3 + 1ll;
			PARSEARGSFROMFILE( ARG$1, IS_SOURCE$1 );
			RECLEVEL$3 = RECLEVEL$3 + -1ll;
		}
		goto label$978;
		label$997:;
		{
			FBSTRING EXT$3;
			FBSTRING* vr$24 = HGETFILEEXT( (char*)*(char**)ARG$1 );
			fb_StrInit( (void*)&EXT$3, -1ll, (void*)vr$24, -1ll, 0 );
			{
				int32 vr$27 = fb_StrCompare( (void*)&EXT$3, -1ll, (void*)"bas", 4ll );
				if( (int64)vr$27 != 0ll ) goto label$1005;
				label$1006:;
				{
					HADDBAS( ARG$1 );
				}
				goto label$1004;
				label$1005:;
				int32 vr$30 = fb_StrCompare( (void*)&EXT$3, -1ll, (void*)"o", 2ll );
				if( (int64)vr$30 != 0ll ) goto label$1007;
				label$1008:;
				{
					FBCADDOBJ( ARG$1 );
				}
				goto label$1004;
				label$1007:;
				int32 vr$33 = fb_StrCompare( (void*)&EXT$3, -1ll, (void*)"a", 2ll );
				if( (int64)vr$33 != 0ll ) goto label$1009;
				label$1010:;
				{
					STRLISTAPPEND( (struct $5TLIST*)((uint8*)&FBC$ + 464ll), ARG$1 );
				}
				goto label$1004;
				label$1009:;
				int32 vr$37 = fb_StrCompare( (void*)&EXT$3, -1ll, (void*)"rc", 3ll );
				if( (int64)vr$37 == 0ll ) goto label$1012;
				label$1013:;
				int32 vr$40 = fb_StrCompare( (void*)&EXT$3, -1ll, (void*)"res", 4ll );
				if( (int64)vr$40 != 0ll ) goto label$1011;
				label$1012:;
				{
					void* vr$43 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&FBC$ + 208ll) );
					HSETIOFILE( (struct $9FBCIOFILE*)vr$43, ARG$1, -1ll );
				}
				goto label$1004;
				label$1011:;
				int32 vr$45 = fb_StrCompare( (void*)&EXT$3, -1ll, (void*)"xpm", 4ll );
				if( (int64)vr$45 != 0ll ) goto label$1014;
				label$1015:;
				{
					int64 vr$48 = fb_StrLen( (void*)((uint8*)&FBC$ + 272ll), -1ll );
					if( vr$48 <= 0ll ) goto label$1017;
					{
						HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
					}
					label$1017:;
					label$1016:;
					HSETIOFILE( (struct $9FBCIOFILE*)((uint8*)&FBC$ + 272ll), ARG$1, -1ll );
				}
				goto label$1004;
				label$1014:;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$1018:;
				label$1004:;
			}
			fb_StrDelete( (FBSTRING*)&EXT$3 );
		}
		label$1003:;
		label$978:;
	}
	label$971:;
}

static void PARSEARGSFROMFILE( FBSTRING* FILENAME$1, int64 IS_SOURCE$1 )
{
	label$1039:;
	int64 F$1;
	int32 vr$0 = fb_FileFree(  );
	F$1 = (int64)vr$0;
	int32 vr$3 = fb_FileOpen( (FBSTRING*)FILENAME$1, 2u, 0u, 0u, (int32)F$1, 0 );
	if( (int64)vr$3 == 0ll ) goto label$1042;
	{
		ERRREPORTEX( 26ll, (char*)*(char**)FILENAME$1, -1ll, 1ll, (char*)0ull );
		FBCEND( 1ll );
	}
	label$1042:;
	label$1041:;
	FBSTRING ARGS$1;
	__builtin_memset( &ARGS$1, 0, 24ll );
	label$1043:;
	int32 vr$8 = fb_FileEof( (int32)F$1 );
	if( (int64)vr$8 != 0ll ) goto label$1044;
	{
		fb_FileLineInput( (int32)F$1, (void*)&ARGS$1, -1ll, 0 );
		FBSTRING* vr$13 = fb_TRIM( (FBSTRING*)&ARGS$1 );
		fb_StrAssign( (void*)&ARGS$1, -1ll, (void*)vr$13, -1ll, 0 );
		FBCPARSEARGSFROMSTRING( (char*)*(char**)&ARGS$1, IS_SOURCE$1, -1ll );
	}
	goto label$1043;
	label$1044:;
	fb_FileClose( (int32)F$1 );
	fb_StrDelete( (FBSTRING*)&ARGS$1 );
	label$1040:;
}

static int64 HTARGETNEEDSPIC( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1045:;
	fb$result$1 = 0ll;
	int64 vr$1 = FBGETCPUFAMILY(  );
	if( vr$1 == 0ll ) goto label$1048;
	{
		{
			uint64 TMP$522$3;
			int64 vr$2 = FBGETOPTION( 3ll );
			TMP$522$3 = (uint64)vr$2;
			goto label$1050;
			label$1051:;
			{
				fb$result$1 = -1ll;
			}
			goto label$1049;
			label$1050:;
			static const void* tmp$885[10ll] = {
				&&label$1051,
				&&label$1051,
				&&label$1049,
				&&label$1049,
				&&label$1051,
				&&label$1051,
				&&label$1051,
				&&label$1051,
				&&label$1049,
				&&label$1051,
			};
			if( (TMP$522$3 - 2ull) > 9ull ) goto label$1049;
			goto *tmp$885[TMP$522$3 - 2ull];
			label$1049:;
		}
	}
	goto label$1047;
	label$1048:;
	{
		int64 vr$3 = FBGETOPTION( 3ll );
		if( vr$3 != 3ll ) goto label$1053;
		{
			fb$result$1 = -1ll;
		}
		label$1053:;
		label$1052:;
	}
	label$1047:;
	label$1046:;
	return fb$result$1;
}

static void HPARSEARGS( int64 ARGC$1, char** ARGV$1 )
{
	label$1054:;
	*(int64*)&FBC$ = -1ll;
	FBSTRING ARG$1;
	__builtin_memset( &ARG$1, 0, 24ll );
	{
		int64 I$2;
		I$2 = 1ll;
		int64 TMP$523$2;
		TMP$523$2 = ARGC$1 + -1ll;
		goto label$1056;
		label$1059:;
		{
			fb_StrAssign( (void*)&ARG$1, -1ll, *(void**)((uint8*)ARGV$1 + (I$2 << (3ll & 63ll))), 0ll, 0 );
			HANDLEARG( &ARG$1, 0ll, 0ll );
		}
		label$1057:;
		I$2 = I$2 + 1ll;
		label$1056:;
		if( I$2 <= TMP$523$2 ) goto label$1059;
		label$1058:;
	}
	if( *(int64*)&FBC$ < 0ll ) goto label$1061;
	{
		FBSTRING TMP$524$2;
		__builtin_memset( &TMP$524$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$524$2, -1ll, *(void**)((uint8*)((uint8*)ARGV$1 + (ARGC$1 << (3ll & 63ll))) + -8ll), 0ll, 0 );
		HFATALINVALIDOPTION( &TMP$524$2, 0ll );
		fb_StrDelete( (FBSTRING*)&TMP$524$2 );
	}
	label$1061:;
	label$1060:;
	fb_StrDelete( (FBSTRING*)&ARG$1 );
	label$1055:;
}

static void HCHECKARGS( void )
{
	label$1062:;
	HCHECKWAITINGOBJFILE(  );
	{
		int64 TMP$525$2;
		int64 vr$0 = FBGETOPTION( 5ll );
		TMP$525$2 = vr$0;
		if( TMP$525$2 != 0ll ) goto label$1065;
		label$1066:;
		{
			int64 vr$1 = FBGETOPTION( 7ll );
			if( vr$1 < 1ll ) goto label$1068;
			{
				ERRREPORTEX( 284ll, (char*)"", -1ll, 1ll, (char*)0ull );
				FBCEND( 1ll );
			}
			label$1068:;
			label$1067:;
		}
		goto label$1064;
		label$1065:;
		if( TMP$525$2 != 1ll ) goto label$1069;
		label$1070:;
		{
			int64 vr$2 = FBGETCPUFAMILY(  );
			int64 vr$4 = FBGETCPUFAMILY(  );
			if( ((int64)-(vr$2 != 0ll) & (int64)-(vr$4 != 1ll)) == 0ll ) goto label$1072;
			{
				ERRREPORTEX( 330ll, (char*)"", -1ll, 1ll, (char*)0ull );
				FBCEND( 1ll );
			}
			label$1072:;
			label$1071:;
		}
		goto label$1064;
		label$1069:;
		if( TMP$525$2 != 2ll ) goto label$1073;
		label$1074:;
		{
			int64 vr$7 = FBGETCPUFAMILY(  );
			int64 vr$9 = FBGETCPUFAMILY(  );
			if( ((int64)-(vr$7 != 2ll) & (int64)-(vr$9 != 3ll)) == 0ll ) goto label$1076;
			{
				ERRREPORTEX( 331ll, (char*)"", -1ll, 1ll, (char*)0ull );
				FBCEND( 1ll );
			}
			label$1076:;
			label$1075:;
		}
		label$1073:;
		label$1064:;
	}
	if( *(int64*)((uint8*)&FBC$ + 48ll) < 0ll ) goto label$1078;
	{
		FBSETOPTION( 4ll, *(int64*)((uint8*)&FBC$ + 48ll) );
	}
	label$1078:;
	label$1077:;
	int64 vr$12 = FBGETOPTION( 5ll );
	int64 vr$14 = FBGETOPTION( 4ll );
	if( ((int64)-(vr$12 == 2ll) & (int64)-(vr$14 < 17ll)) == 0ll ) goto label$1080;
	{
		FBSETOPTION( 4ll, 17ll );
	}
	label$1080:;
	label$1079:;
	int64 vr$17 = FBGETOPTION( 3ll );
	int64 vr$19 = FBGETCPUFAMILY(  );
	if( ((int64)-(vr$17 == 4ll) & (int64)-(vr$19 != 0ll)) == 0ll ) goto label$1082;
	{
		char* vr$22 = FBGETFBCARCH(  );
		ERRREPORTEX( 82ll, (char*)vr$22, -1ll, 1ll, (char*)0ull );
		FBCEND( 1ll );
	}
	label$1082:;
	label$1081:;
	int64 vr$23 = FBGETOPTION( 0ll );
	int64 vr$25 = FBGETOPTION( 3ll );
	if( ((int64)-(vr$23 == 2ll) | (int64)-(vr$25 == 3ll)) == 0ll ) goto label$1084;
	{
		int64 vr$28 = HTARGETNEEDSPIC(  );
		if( vr$28 == 0ll ) goto label$1086;
		{
			FBSETOPTION( 38ll, -1ll );
		}
		label$1086:;
		label$1085:;
	}
	label$1084:;
	label$1083:;
	int64 vr$29 = FBGETOPTION( 38ll );
	if( vr$29 == 0ll ) goto label$1088;
	{
		int64 vr$30 = HTARGETNEEDSPIC(  );
		if( vr$30 != 0ll ) goto label$1090;
		{
			ERRREPORTEX( 86ll, (char*)"", -1ll, 1ll, (char*)0ull );
		}
		label$1090:;
		label$1089:;
	}
	label$1088:;
	label$1087:;
	int64 vr$31 = FBGETCPUFAMILY(  );
	int64 vr$33 = FBGETOPTION( 3ll );
	if( ((int64)-(vr$31 == 0ll) & (int64)-(vr$33 != 10ll)) == 0ll ) goto label$1092;
	{
		FBSETOPTION( 2ll, 0ll );
	}
	goto label$1091;
	label$1092:;
	{
		FBSETOPTION( 2ll, 1ll );
	}
	label$1091:;
	int64 vr$36 = FBGETOPTION( 2ll );
	int64 vr$38 = FBGETOPTION( 38ll );
	if( ((int64)-(vr$36 == 0ll) & vr$38) == 0ll ) goto label$1094;
	{
		FBSETOPTION( 2ll, 1ll );
	}
	label$1094:;
	label$1093:;
	if( *(int64*)((uint8*)&FBC$ + 40ll) < 0ll ) goto label$1096;
	{
		FBSETOPTION( 2ll, *(int64*)((uint8*)&FBC$ + 40ll) );
	}
	label$1096:;
	label$1095:;
	int64 vr$40 = FBGETOPTION( 2ll );
	int64 vr$42 = FBGETCPUFAMILY(  );
	int64 vr$45 = FBGETOPTION( 2ll );
	int64 vr$47 = FBGETCPUFAMILY(  );
	if( (((int64)-(vr$40 == 0ll) & (int64)-(vr$42 != 0ll)) | ((int64)-(vr$45 == 4ll) & (int64)-(vr$47 != 1ll))) == 0ll ) goto label$1098;
	{
		char* vr$51 = FBGETFBCARCH(  );
		ERRREPORTEX( 83ll, (char*)vr$51, -1ll, 1ll, (char*)0ull );
		FBCEND( 1ll );
	}
	label$1098:;
	label$1097:;
	int64 vr$52 = FBGETOPTION( 2ll );
	int64 vr$54 = FBGETOPTION( 38ll );
	if( ((int64)-(vr$52 == 0ll) & vr$54) == 0ll ) goto label$1100;
	{
		ERRREPORTEX( 85ll, (char*)"", -1ll, 1ll, (char*)0ull );
		FBCEND( 1ll );
	}
	label$1100:;
	label$1099:;
	{
		uint64 TMP$526$2;
		int64 vr$56 = FBGETOPTION( 3ll );
		TMP$526$2 = (uint64)vr$56;
		goto label$1102;
		label$1103:;
		{
		}
		goto label$1101;
		label$1104:;
		{
			struct $9FBCIOFILE* RC$3;
			void* vr$58 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 208ll) );
			RC$3 = (struct $9FBCIOFILE*)vr$58;
			if( RC$3 == (struct $9FBCIOFILE*)0ull ) goto label$1106;
			{
				ERRREPORTEX( 291ll, (char*)*(char**)RC$3, -1ll, 1ll, (char*)0ull );
				FBCEND( 1ll );
			}
			label$1106:;
			label$1105:;
		}
		goto label$1101;
		label$1102:;
		static const void* tmp$886[6ll] = {
			&&label$1103,
			&&label$1103,
			&&label$1104,
			&&label$1104,
			&&label$1104,
			&&label$1103,
		};
		if( TMP$526$2 > 5ull ) goto label$1104;
		goto *tmp$886[TMP$526$2 - 0ull];
		label$1101:;
	}
	{
		uint64 TMP$527$2;
		int64 vr$60 = FBGETOPTION( 3ll );
		TMP$527$2 = (uint64)vr$60;
		goto label$1108;
		label$1109:;
		{
		}
		goto label$1107;
		label$1110:;
		{
			int64 vr$62 = fb_StrLen( (void*)((uint8*)&FBC$ + 272ll), -1ll );
			if( vr$62 <= 0ll ) goto label$1112;
			{
				ERRREPORTEX( 291ll, (char*)*(char**)((uint8*)&FBC$ + 272ll), -1ll, 1ll, (char*)0ull );
				FBCEND( 1ll );
			}
			label$1112:;
			label$1111:;
		}
		goto label$1107;
		label$1108:;
		static const void* tmp$887[10ll] = {
			&&label$1109,
			&&label$1110,
			&&label$1110,
			&&label$1110,
			&&label$1109,
			&&label$1109,
			&&label$1109,
			&&label$1109,
			&&label$1109,
			&&label$1109,
		};
		if( (TMP$527$2 - 2ull) > 9ull ) goto label$1110;
		goto *tmp$887[TMP$527$2 - 2ull];
		label$1107:;
	}
	int64 vr$63 = FBGETOPTION( 3ll );
	int64 vr$65 = FBGETOPTION( 2ll );
	if( ((int64)-(vr$63 == 10ll) & (int64)-(vr$65 != 0ll)) == 0ll ) goto label$1114;
	{
		FBSETOPTION( 9ll, 1ll );
	}
	label$1114:;
	label$1113:;
	if( *(int64*)((uint8*)&FBC$ + 64ll) < 0ll ) goto label$1116;
	{
		{
			int64 TMP$528$3;
			int64 vr$68 = FBGETCPUFAMILY(  );
			TMP$528$3 = vr$68;
			if( TMP$528$3 == 0ll ) goto label$1119;
			label$1120:;
			if( TMP$528$3 != 1ll ) goto label$1118;
			label$1119:;
			{
			}
			goto label$1117;
			label$1118:;
			{
				FBSTRING TMP$529$4;
				__builtin_memset( &TMP$529$4, 0, 24ll );
				FBSTRING* vr$70 = FBGETTARGETID(  );
				fb_StrAssign( (void*)&TMP$529$4, -1ll, (void*)vr$70, -1ll, 0 );
				ERRREPORTEX( 319ll, (char*)*(char**)&TMP$529$4, -1ll, 1ll, (char*)0ull );
				fb_StrDelete( (FBSTRING*)&TMP$529$4 );
			}
			label$1121:;
			label$1117:;
		}
		{
			int64 TMP$530$3;
			int64 vr$73 = FBGETOPTION( 2ll );
			TMP$530$3 = vr$73;
			if( TMP$530$3 == 0ll ) goto label$1124;
			label$1125:;
			if( TMP$530$3 != 4ll ) goto label$1123;
			label$1124:;
			{
				if( *(int64*)((uint8*)&FBC$ + 64ll) == 0ll ) goto label$1127;
				{
					ERRREPORTEX( 84ll, (char*)"", -1ll, 1ll, (char*)0ull );
				}
				label$1127:;
				label$1126:;
			}
			label$1123:;
			label$1122:;
		}
		FBSETOPTION( 9ll, *(int64*)((uint8*)&FBC$ + 64ll) );
	}
	label$1116:;
	label$1115:;
	FBSETOPTION( 39ll, -1ll );
	label$1063:;
}

static void FBCDETERMINEPREFIX( void )
{
	label$1128:;
	int64 vr$1 = fb_StrLen( (void*)((uint8*)&FBC$ + 2776ll), 261ll );
	if( vr$1 != 0ll ) goto label$1131;
	{
		FBSTRING TMP$531$2;
		FBSTRING TMP$532$2;
		FBSTRING TMP$535$2;
		__builtin_memset( &TMP$531$2, 0, 24ll );
		FBSTRING* vr$3 = fb_ExePath(  );
		fb_StrAssign( (void*)&TMP$531$2, -1ll, (void*)vr$3, -1ll, 0 );
		FBSTRING* vr$6 = PATHSTRIPDIV( &TMP$531$2 );
		__builtin_memset( &TMP$532$2, 0, 24ll );
		FBSTRING* vr$9 = fb_StrConcat( &TMP$532$2, (void*)vr$6, -1ll, (void*)"/", 2ll );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 2776ll), 261ll, (void*)vr$9, -1ll, 0 );
		fb_StrDelete( (FBSTRING*)&TMP$531$2 );
		__builtin_memset( &TMP$535$2, 0, 24ll );
		FBSTRING* vr$15 = fb_StrConcat( &TMP$535$2, (void*)((uint8*)&FBC$ + 2776ll), 261ll, (void*)"../", 4ll );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 2776ll), 261ll, (void*)vr$15, -1ll, 0 );
	}
	goto label$1130;
	label$1131:;
	{
		FBSTRING TMP$536$2;
		FBSTRING TMP$537$2;
		__builtin_memset( &TMP$536$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$536$2, -1ll, (void*)((uint8*)&FBC$ + 2776ll), 261ll, 0 );
		FBSTRING* vr$21 = PATHSTRIPDIV( &TMP$536$2 );
		__builtin_memset( &TMP$537$2, 0, 24ll );
		FBSTRING* vr$24 = fb_StrConcat( &TMP$537$2, (void*)vr$21, -1ll, (void*)"/", 2ll );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 2776ll), 261ll, (void*)vr$24, -1ll, 0 );
		fb_StrDelete( (FBSTRING*)&TMP$536$2 );
	}
	label$1130:;
	label$1129:;
}

static void FBCSETUPCOMPILERPATHS( void )
{
	FBSTRING TMP$546$1;
	FBSTRING TMP$547$1;
	FBSTRING TMP$548$1;
	FBSTRING TMP$549$1;
	FBSTRING TMP$550$1;
	FBSTRING TMP$551$1;
	FBSTRING TMP$552$1;
	FBSTRING TMP$553$1;
	label$1132:;
	FBSTRING TARGETID$1;
	FBSTRING* vr$0 = FBGETTARGETID(  );
	fb_StrInit( (void*)&TARGETID$1, -1ll, (void*)vr$0, -1ll, 0 );
	FBSTRING FBNAME$1;
	__builtin_memset( &FBNAME$1, 0, 24ll );
	fb_StrAssign( (void*)&FBNAME$1, -1ll, (void*)"freebasic", 10ll, 0 );
	FBSTRING LIBDIRNAME$1;
	fb_StrInit( (void*)&LIBDIRNAME$1, -1ll, (void*)"lib", 4ll, 0 );
	int64 vr$6 = fb_StrLen( (void*)((uint8*)&FBC$ + 3820ll), 261ll );
	if( vr$6 <= 0ll ) goto label$1135;
	{
		FBSTRING TMP$540$2;
		FBSTRING TMP$541$2;
		FBSTRING TMP$542$2;
		__builtin_memset( &TMP$540$2, 0, 24ll );
		FBSTRING* vr$11 = fb_StrConcat( &TMP$540$2, (void*)((uint8*)&FBC$ + 2776ll), 261ll, (void*)"bin", 4ll );
		__builtin_memset( &TMP$541$2, 0, 24ll );
		FBSTRING* vr$14 = fb_StrConcat( &TMP$541$2, (void*)vr$11, -1ll, (void*)"/", 2ll );
		__builtin_memset( &TMP$542$2, 0, 24ll );
		FBSTRING* vr$17 = fb_StrConcat( &TMP$542$2, (void*)vr$14, -1ll, (void*)((uint8*)&FBC$ + 3820ll), 261ll );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 3037ll), 261ll, (void*)vr$17, -1ll, 0 );
	}
	goto label$1134;
	label$1135:;
	{
		FBSTRING TMP$543$2;
		FBSTRING TMP$544$2;
		FBSTRING TMP$545$2;
		__builtin_memset( &TMP$543$2, 0, 24ll );
		FBSTRING* vr$23 = fb_StrConcat( &TMP$543$2, (void*)((uint8*)&FBC$ + 2776ll), 261ll, (void*)"bin", 4ll );
		__builtin_memset( &TMP$544$2, 0, 24ll );
		FBSTRING* vr$26 = fb_StrConcat( &TMP$544$2, (void*)vr$23, -1ll, (void*)"/", 2ll );
		__builtin_memset( &TMP$545$2, 0, 24ll );
		FBSTRING* vr$29 = fb_StrConcat( &TMP$545$2, (void*)vr$26, -1ll, (void*)((uint8*)&FBC$ + 2225ll), 129ll );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 3037ll), 261ll, (void*)vr$29, -1ll, 0 );
	}
	label$1134:;
	__builtin_memset( &TMP$546$1, 0, 24ll );
	FBSTRING* vr$35 = fb_StrConcat( &TMP$546$1, (void*)((uint8*)&FBC$ + 2776ll), 261ll, (void*)"include", 8ll );
	__builtin_memset( &TMP$547$1, 0, 24ll );
	FBSTRING* vr$38 = fb_StrConcat( &TMP$547$1, (void*)vr$35, -1ll, (void*)"/", 2ll );
	__builtin_memset( &TMP$548$1, 0, 24ll );
	FBSTRING* vr$41 = fb_StrConcat( &TMP$548$1, (void*)vr$38, -1ll, (void*)&FBNAME$1, -1ll );
	fb_StrAssign( (void*)((uint8*)&FBC$ + 3298ll), 261ll, (void*)vr$41, -1ll, 0 );
	__builtin_memset( &TMP$549$1, 0, 24ll );
	FBSTRING* vr$49 = fb_StrConcat( &TMP$549$1, (void*)((uint8*)&FBC$ + 2776ll), 261ll, (void*)&LIBDIRNAME$1, -1ll );
	__builtin_memset( &TMP$550$1, 0, 24ll );
	FBSTRING* vr$52 = fb_StrConcat( &TMP$550$1, (void*)vr$49, -1ll, (void*)"/", 2ll );
	__builtin_memset( &TMP$551$1, 0, 24ll );
	FBSTRING* vr$55 = fb_StrConcat( &TMP$551$1, (void*)vr$52, -1ll, (void*)&FBNAME$1, -1ll );
	__builtin_memset( &TMP$552$1, 0, 24ll );
	FBSTRING* vr$58 = fb_StrConcat( &TMP$552$1, (void*)vr$55, -1ll, (void*)"/", 2ll );
	__builtin_memset( &TMP$553$1, 0, 24ll );
	FBSTRING* vr$61 = fb_StrConcat( &TMP$553$1, (void*)vr$58, -1ll, (void*)&TARGETID$1, -1ll );
	fb_StrAssign( (void*)((uint8*)&FBC$ + 3559ll), 261ll, (void*)vr$61, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&LIBDIRNAME$1 );
	fb_StrDelete( (FBSTRING*)&FBNAME$1 );
	fb_StrDelete( (FBSTRING*)&TARGETID$1 );
	label$1133:;
}

static void FBCPRINTTARGETINFO( void )
{
	FBSTRING TMP$555$1;
	FBSTRING TMP$556$1;
	label$1136:;
	FBSTRING S$1;
	FBSTRING* vr$0 = FBGETTARGETID(  );
	fb_StrInit( (void*)&S$1, -1ll, (void*)vr$0, -1ll, 0 );
	char* vr$2 = FBGETFBCARCH(  );
	__builtin_memset( &TMP$555$1, 0, 24ll );
	FBSTRING* vr$5 = fb_StrConcat( &TMP$555$1, (void*)", ", 3ll, (void*)vr$2, 0ll );
	__builtin_memset( &TMP$556$1, 0, 24ll );
	FBSTRING* vr$9 = fb_StrConcat( &TMP$556$1, (void*)&S$1, -1ll, (void*)vr$5, -1ll );
	fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$9, -1ll, 0 );
	fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)", ", 3ll, 0 );
	int64 vr$12 = FBGETBITS(  );
	FBSTRING* vr$13 = fb_LongintToStr( vr$12 );
	fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)vr$13, -1ll, 0 );
	fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"bit", 4ll, 0 );
	int64 vr$17 = fb_StrLen( (void*)((uint8*)&FBC$ + 2096ll), 129ll );
	if( vr$17 <= 0ll ) goto label$1139;
	{
		fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)" (", 3ll, 0 );
		fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)((uint8*)&FBC$ + 2096ll), 129ll, 0 );
		fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)")", 2ll, 0 );
	}
	label$1139:;
	label$1138:;
	FBSTRING* vr$22 = fb_StrAllocTempDescZEx( (char*)"target:", 7ll );
	fb_PrintString( 0, (FBSTRING*)vr$22, 2 );
	fb_PrintString( 0, (FBSTRING*)&S$1, 1 );
	FBSTRING* vr$24 = fb_StrAllocTempDescZEx( (char*)"backend:", 8ll );
	fb_PrintString( 0, (FBSTRING*)vr$24, 2 );
	int64 vr$25 = FBGETOPTION( 2ll );
	FBSTRING* vr$26 = FBGETBACKENDNAME( vr$25 );
	fb_PrintString( 0, (FBSTRING*)vr$26, 1 );
	fb_StrDelete( (FBSTRING*)&S$1 );
	label$1137:;
}

static void FBCDETERMINEMAINNAME( void )
{
	label$1140:;
	int64 vr$1 = fb_StrLen( (void*)((uint8*)&FBC$ + 1229ll), 261ll );
	if( vr$1 != 0ll ) goto label$1143;
	{
		FBSTRING TMP$563$2;
		struct $9FBCIOFILE* M$2;
		void* vr$3 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 144ll) );
		M$2 = (struct $9FBCIOFILE*)vr$3;
		if( M$2 == (struct $9FBCIOFILE*)0ull ) goto label$1145;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 1229ll), 261ll, (void*)M$2, -1ll, 0 );
		}
		goto label$1144;
		label$1145:;
		{
			FBSTRING* OBJF$3;
			void* vr$8 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 400ll) );
			OBJF$3 = (FBSTRING*)vr$8;
			if( OBJF$3 == (FBSTRING*)0ull ) goto label$1147;
			{
				fb_StrAssign( (void*)((uint8*)&FBC$ + 1229ll), 261ll, (void*)OBJF$3, -1ll, 0 );
			}
			goto label$1146;
			label$1147:;
			{
				fb_StrAssign( (void*)((uint8*)&FBC$ + 1229ll), 261ll, (void*)"unnamed", 8ll, 0 );
			}
			label$1146:;
		}
		label$1144:;
		__builtin_memset( &TMP$563$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$563$2, -1ll, (void*)((uint8*)&FBC$ + 1229ll), 261ll, 0 );
		FBSTRING* vr$15 = HSTRIPEXT( &TMP$563$2 );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 1229ll), 261ll, (void*)vr$15, -1ll, 0 );
		fb_StrDelete( (FBSTRING*)&TMP$563$2 );
	}
	label$1143:;
	label$1142:;
	label$1141:;
}

static FBSTRING* HGETASMNAME( struct $9FBCIOFILE* MODULE$1, int64 STAGE$1 )
{
	FBSTRING TMP$568$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$1148:;
	char* EXT$1;
	FBSTRING ASMFILE$1;
	__builtin_memset( &ASMFILE$1, 0, 24ll );
	FBSTRING* vr$3 = HSTRIPEXT( *(FBSTRING**)((uint8*)MODULE$1 + 24ll) );
	fb_StrAssign( (void*)&ASMFILE$1, -1ll, (void*)vr$3, -1ll, 0 );
	int64 vr$5 = FBGETOPTION( 3ll );
	if( vr$5 == 12ll ) goto label$1151;
	{
		EXT$1 = (char*)".asm";
	}
	goto label$1150;
	label$1151:;
	{
		EXT$1 = (char*)".o";
	}
	label$1150:;
	if( STAGE$1 != 1ll ) goto label$1153;
	{
		{
			int64 TMP$565$3;
			int64 vr$6 = FBGETOPTION( 2ll );
			TMP$565$3 = vr$6;
			if( TMP$565$3 == 1ll ) goto label$1156;
			label$1157:;
			if( TMP$565$3 != 2ll ) goto label$1155;
			label$1156:;
			{
				EXT$1 = (char*)".c";
			}
			goto label$1154;
			label$1155:;
			if( TMP$565$3 != 3ll ) goto label$1158;
			label$1159:;
			{
				EXT$1 = (char*)".ll";
			}
			label$1158:;
			label$1154:;
		}
	}
	label$1153:;
	label$1152:;
	__builtin_memset( &TMP$568$1, 0, 24ll );
	FBSTRING* vr$10 = fb_StrConcat( &TMP$568$1, (void*)&ASMFILE$1, -1ll, (void*)EXT$1, 0ll );
	fb_StrAssign( (void*)&ASMFILE$1, -1ll, (void*)vr$10, -1ll, 0 );
	fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&ASMFILE$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&ASMFILE$1 );
	label$1149:;
	FBSTRING* vr$16 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$16;
}

static void HCOMPILEBAS( struct $9FBCIOFILE* MODULE$1, int64 IS_MAIN$1, int64 IS_FBCTINF$1, int64 MODULE_COUNT$1 )
{
	label$1160:;
	int64 PREVLANG$1;
	int64 PREVOUTTYPE$1;
	FBSTRING ASMFILE$1;
	__builtin_memset( &ASMFILE$1, 0, 24ll );
	FBSTRING PPONLYFILE$1;
	__builtin_memset( &PPONLYFILE$1, 0, 24ll );
	FBSTRING* vr$2 = HGETASMNAME( MODULE$1, 1ll );
	fb_StrAssign( (void*)&ASMFILE$1, -1ll, (void*)vr$2, -1ll, 0 );
	int64 vr$4 = FBGETOPTION( 1ll );
	if( vr$4 == 0ll ) goto label$1163;
	{
		fb_StrAssign( (void*)&PPONLYFILE$1, -1ll, *(void**)((uint8*)MODULE$1 + 24ll), -1ll, 0 );
		if( *(int64*)((uint8*)MODULE$1 + 32ll) != 0ll ) goto label$1165;
		{
			FBSTRING TMP$570$3;
			FBSTRING* vr$9 = HSTRIPEXT( &PPONLYFILE$1 );
			__builtin_memset( &TMP$570$3, 0, 24ll );
			FBSTRING* vr$12 = fb_StrConcat( &TMP$570$3, (void*)vr$9, -1ll, (void*)".pp.bas", 8ll );
			fb_StrAssign( (void*)&PPONLYFILE$1, -1ll, (void*)vr$12, -1ll, 0 );
		}
		label$1165:;
		label$1164:;
	}
	label$1163:;
	label$1162:;
	if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$1167;
	{
		FBSTRING* vr$14 = fb_StrAllocTempDescZEx( (char*)"compiling: ", 11ll );
		fb_PrintString( 0, (FBSTRING*)vr$14, 2 );
		fb_PrintString( 0, (FBSTRING*)MODULE$1, 0 );
		FBSTRING* vr$17 = fb_StrAllocTempDescZEx( (char*)" -o ", 4ll );
		fb_PrintString( 0, (FBSTRING*)vr$17, 0 );
		fb_PrintString( 0, (FBSTRING*)&ASMFILE$1, 0 );
		int64 vr$19 = FBGETOPTION( 1ll );
		if( vr$19 == 0ll ) goto label$1169;
		{
			FBSTRING TMP$574$3;
			__builtin_memset( &TMP$574$3, 0, 24ll );
			FBSTRING* vr$23 = fb_StrConcat( &TMP$574$3, (void*)" -pp ", 6ll, (void*)&PPONLYFILE$1, -1ll );
			fb_PrintString( 0, (FBSTRING*)vr$23, 0 );
		}
		label$1169:;
		label$1168:;
		if( IS_MAIN$1 == 0ll ) goto label$1171;
		{
			FBSTRING* vr$24 = fb_StrAllocTempDescZEx( (char*)" (main module)", 14ll );
			fb_PrintString( 0, (FBSTRING*)vr$24, 0 );
		}
		goto label$1170;
		label$1171:;
		if( IS_FBCTINF$1 == 0ll ) goto label$1172;
		{
			FBSTRING* vr$25 = fb_StrAllocTempDescZEx( (char*)" (FB compile-time info)", 23ll );
			fb_PrintString( 0, (FBSTRING*)vr$25, 0 );
		}
		label$1172:;
		label$1170:;
		fb_PrintVoid( 0, 1 );
	}
	label$1167:;
	label$1166:;
	int64 vr$26 = FBGETOPTION( 12ll );
	if( vr$26 == -1ll ) goto label$1174;
	{
		int64 vr$27 = FBGETOPTION( 12ll );
		FBSETOPTION( 10ll, vr$27 );
	}
	label$1174:;
	label$1173:;
	int64 vr$28 = FBGETOPTION( 10ll );
	PREVLANG$1 = vr$28;
	int64 vr$29 = FBGETOPTION( 0ll );
	PREVOUTTYPE$1 = vr$29;
	if( IS_FBCTINF$1 == 0ll ) goto label$1176;
	{
		FBSETOPTION( 0ll, 3ll );
	}
	label$1176:;
	label$1175:;
	label$1177:;
	{
		int64 vr$31 = FBGETOPTION( 2ll );
		int64 vr$33 = FBGETOPTION( 2ll );
		if( (~(*(int64*)((uint8*)&FBC$ + 80ll)) & (((int64)-(vr$31 != 0ll) & (int64)-(vr$33 != 4ll)) | ~(*(int64*)((uint8*)&FBC$ + 96ll)))) == 0ll ) goto label$1181;
		{
			FBCADDTEMP( &ASMFILE$1 );
		}
		goto label$1180;
		label$1181:;
		if( MODULE_COUNT$1 != 1ll ) goto label$1182;
		{
			int64 vr$40 = FBRESTARTGETCOUNT(  );
			if( vr$40 <= 0ll ) goto label$1184;
			{
				FBCREMOVETEMP( &ASMFILE$1 );
			}
			label$1184:;
			label$1183:;
		}
		label$1182:;
		label$1180:;
		FBINIT( IS_MAIN$1, (char*)((uint8*)&FBC$ + 1490ll), MODULE_COUNT$1 );
		if( IS_FBCTINF$1 == 0ll ) goto label$1186;
		{
			FBSETLIBS( (struct $7TSTRSET*)((uint8*)&FBC$ + 792ll), (struct $7TSTRSET*)((uint8*)&FBC$ + 880ll) );
		}
		goto label$1185;
		label$1186:;
		{
			FBSETLIBS( (struct $7TSTRSET*)((uint8*)&FBC$ + 528ll), (struct $7TSTRSET*)((uint8*)&FBC$ + 616ll) );
		}
		label$1185:;
		FBCOMPILE( (char*)*(char**)MODULE$1, (char*)*(char**)&ASMFILE$1, &PPONLYFILE$1, IS_MAIN$1 );
		int64 vr$49 = ERRGETCOUNT(  );
		if( vr$49 <= 0ll ) goto label$1188;
		{
			FBCEND( 1ll );
		}
		label$1188:;
		label$1187:;
		int64 vr$50 = FBSHOULDRESTART(  );
		if( vr$50 != 0ll ) goto label$1190;
		{
			goto label$1178;
		}
		label$1190:;
		label$1189:;
		FBRESTARTENDREQUEST( 7ll );
		FBEND(  );
		int64 vr$51 = FBSHOULDRESTART(  );
		if( vr$51 == 0ll ) goto label$1192;
		{
			int64 vr$52 = FBGETOPTION( 12ll );
			if( vr$52 != -1ll ) goto label$1194;
			{
				FBSETOPTION( 10ll, PREVLANG$1 );
			}
			label$1194:;
			label$1193:;
			fb_StrDelete( (FBSTRING*)&PPONLYFILE$1 );
			fb_StrDelete( (FBSTRING*)&ASMFILE$1 );
			goto label$1161;
		}
		label$1192:;
		label$1191:;
	}
	label$1179:;
	goto label$1177;
	label$1178:;
	if( IS_FBCTINF$1 != 0ll ) goto label$1196;
	{
		FBGETLIBS( (struct $7TSTRSET*)((uint8*)&FBC$ + 792ll), (struct $7TSTRSET*)((uint8*)&FBC$ + 880ll) );
	}
	label$1196:;
	label$1195:;
	FBEND(  );
	if( IS_FBCTINF$1 == 0ll ) goto label$1198;
	{
		FBSETOPTION( 0ll, PREVOUTTYPE$1 );
	}
	label$1198:;
	label$1197:;
	FBSETOPTION( 10ll, PREVLANG$1 );
	fb_StrDelete( (FBSTRING*)&PPONLYFILE$1 );
	fb_StrDelete( (FBSTRING*)&ASMFILE$1 );
	label$1161:;
}

static void HCOMPILEMODULES( void )
{
	label$1199:;
	int64 ISMAIN$1;
	int64 CHECKMAIN$1;
	FBSTRING MAINFILE$1;
	__builtin_memset( &MAINFILE$1, 0, 24ll );
	struct $9FBCIOFILE* MODULE$1;
	ISMAIN$1 = 0ll;
	{
		int64 TMP$577$2;
		int64 vr$1 = FBGETOPTION( 0ll );
		TMP$577$2 = vr$1;
		if( TMP$577$2 == 0ll ) goto label$1203;
		label$1204:;
		if( TMP$577$2 != 2ll ) goto label$1202;
		label$1203:;
		{
			CHECKMAIN$1 = -1ll;
		}
		goto label$1201;
		label$1202:;
		{
			CHECKMAIN$1 = *(int64*)((uint8*)&FBC$ + 1624ll);
		}
		label$1205:;
		label$1201:;
	}
	if( CHECKMAIN$1 == 0ll ) goto label$1207;
	{
		FBSTRING* vr$3 = HSTRIPPATH( (char*)((uint8*)&FBC$ + 1229ll) );
		fb_StrAssign( (void*)&MAINFILE$1, -1ll, (void*)vr$3, -1ll, 0 );
	}
	label$1207:;
	label$1206:;
	void* vr$6 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 144ll) );
	MODULE$1 = (struct $9FBCIOFILE*)vr$6;
	if( MODULE$1 != (struct $9FBCIOFILE*)0ull ) goto label$1209;
	{
		STRSETCOPY( (struct $7TSTRSET*)((uint8*)&FBC$ + 792ll), (struct $7TSTRSET*)((uint8*)&FBC$ + 528ll) );
		STRSETCOPY( (struct $7TSTRSET*)((uint8*)&FBC$ + 880ll), (struct $7TSTRSET*)((uint8*)&FBC$ + 616ll) );
		fb_StrDelete( (FBSTRING*)&MAINFILE$1 );
		goto label$1200;
	}
	label$1209:;
	label$1208:;
	int64 MODULE_COUNT$1;
	MODULE_COUNT$1 = 0ll;
	label$1210:;
	{
		if( CHECKMAIN$1 == 0ll ) goto label$1214;
		{
			FBSTRING TMP$578$3;
			__builtin_memset( &TMP$578$3, 0, 24ll );
			FBSTRING* vr$15 = HSTRIPEXT( (FBSTRING*)MODULE$1 );
			fb_StrAssign( (void*)&TMP$578$3, -1ll, (void*)vr$15, -1ll, 0 );
			FBSTRING* vr$17 = HSTRIPPATH( (char*)*(char**)&TMP$578$3 );
			int32 vr$19 = fb_StrCompare( (void*)&MAINFILE$1, -1ll, (void*)vr$17, -1ll );
			ISMAIN$1 = (int64)-((int64)vr$19 == 0ll);
			fb_StrDelete( (FBSTRING*)&TMP$578$3 );
		}
		label$1214:;
		label$1213:;
		MODULE_COUNT$1 = MODULE_COUNT$1 + 1ll;
		HCOMPILEBAS( MODULE$1, ISMAIN$1, 0ll, MODULE_COUNT$1 );
		int64 vr$24 = FBSHOULDRESTART(  );
		if( vr$24 == 0ll ) goto label$1216;
		{
			fb_StrDelete( (FBSTRING*)&MAINFILE$1 );
			goto label$1200;
		}
		label$1216:;
		label$1215:;
		void* vr$26 = LISTGETNEXT( (void*)MODULE$1 );
		MODULE$1 = (struct $9FBCIOFILE*)vr$26;
	}
	label$1212:;
	if( MODULE$1 != (struct $9FBCIOFILE*)0ull ) goto label$1210;
	label$1211:;
	fb_StrDelete( (FBSTRING*)&MAINFILE$1 );
	label$1200:;
}

static int64 HPARSEXPM( FBSTRING* XPMFILE$1, FBSTRING* CODE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1217:;
	fb_StrConcatByref( (void*)CODE$1, -1ll, (void*)"\x0A" "dim shared as zstring ptr ", 28ll, 0 );
	fb_StrConcatByref( (void*)CODE$1, -1ll, (void*)"fb_program_icon_data", 21ll, 0 );
	fb_StrConcatByref( (void*)CODE$1, -1ll, (void*)"(0 to ...) = _\x0A{ _\x0A", 20ll, 0 );
	int64 F$1;
	int32 vr$1 = fb_FileFree(  );
	F$1 = (int64)vr$1;
	int32 vr$4 = fb_FileOpen( (FBSTRING*)XPMFILE$1, 2u, 0u, 0u, (int32)F$1, 0 );
	if( (int64)vr$4 == 0ll ) goto label$1220;
	{
		goto label$1218;
	}
	label$1220:;
	label$1219:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	fb_FileLineInput( (int32)F$1, (void*)&LN$1, -1ll, 0 );
	FBSTRING* vr$10 = fb_StrUcase2( (FBSTRING*)&LN$1, 0 );
	int32 vr$11 = fb_StrCompare( (void*)vr$10, -1ll, (void*)"/* XPM */", 10ll );
	if( (int64)vr$11 == 0ll ) goto label$1222;
	{
		fb_FileClose( (int32)F$1 );
		fb_StrDelete( (FBSTRING*)&LN$1 );
		goto label$1218;
	}
	label$1222:;
	label$1221:;
	int64 SAW_ROWS$1;
	SAW_ROWS$1 = 0ll;
	label$1223:;
	int32 vr$16 = fb_FileEof( (int32)F$1 );
	if( (int64)vr$16 != 0ll ) goto label$1224;
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
		if( vr$37 <= 0ll ) goto label$1226;
		{
			FBSTRING TMP$585$3;
			if( SAW_ROWS$1 == 0ll ) goto label$1228;
			{
				fb_StrConcatByref( (void*)CODE$1, -1ll, (void*)", _\x0A", 5ll, 0 );
			}
			label$1228:;
			label$1227:;
			__builtin_memset( &TMP$585$3, 0, 24ll );
			FBSTRING* vr$41 = fb_StrConcat( &TMP$585$3, (void*)"\x09@", 3ll, (void*)&LN$1, -1ll );
			fb_StrConcatByref( (void*)CODE$1, -1ll, (void*)vr$41, -1ll, 0 );
			SAW_ROWS$1 = -1ll;
		}
		label$1226:;
		label$1225:;
	}
	goto label$1223;
	label$1224:;
	fb_FileClose( (int32)F$1 );
	if( SAW_ROWS$1 != 0ll ) goto label$1230;
	{
		fb_StrDelete( (FBSTRING*)&LN$1 );
		goto label$1218;
	}
	label$1230:;
	label$1229:;
	fb_StrConcatByref( (void*)CODE$1, -1ll, (void*)" _ \x0A", 5ll, 0 );
	fb_StrConcatByref( (void*)CODE$1, -1ll, (void*)"}\x0A\x0A", 4ll, 0 );
	fb_StrConcatByref( (void*)CODE$1, -1ll, (void*)"extern as zstring ptr ptr fb_program_icon alias \x22" "fb_program_icon\x22\x0A", 67ll, 0 );
	fb_StrConcatByref( (void*)CODE$1, -1ll, (void*)"dim shared as zstring ptr ptr fb_program_icon = @fb_program_icon_data(0)\x0A", 74ll, 0 );
	fb$result$1 = -1ll;
	fb_StrDelete( (FBSTRING*)&LN$1 );
	label$1218:;
	return fb$result$1;
}

static int64 HCOMPILEXPM( void )
{
	int64 TMP$596$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1231:;
	FBSTRING XPMFILE$1;
	__builtin_memset( &XPMFILE$1, 0, 24ll );
	FBSTRING CODE$1;
	__builtin_memset( &CODE$1, 0, 24ll );
	int64 FO$1;
	int64 vr$4 = fb_StrLen( (void*)((uint8*)&FBC$ + 272ll), -1ll );
	if( vr$4 != 0ll ) goto label$1234;
	{
		fb$result$1 = -1ll;
		fb_StrDelete( (FBSTRING*)&CODE$1 );
		fb_StrDelete( (FBSTRING*)&XPMFILE$1 );
		goto label$1232;
	}
	label$1234:;
	label$1233:;
	fb_StrAssign( (void*)&XPMFILE$1, -1ll, (void*)((uint8*)&FBC$ + 272ll), -1ll, 0 );
	int64 vr$9 = fb_StrLen( *(void**)((uint8*)&FBC$ + 296ll), -1ll );
	if( vr$9 <= 0ll ) goto label$1236;
	{
		FBSTRING* vr$10 = HSTRIPEXT( *(FBSTRING**)((uint8*)&FBC$ + 296ll) );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 272ll), -1ll, (void*)vr$10, -1ll, 0 );
	}
	label$1236:;
	label$1235:;
	fb_StrConcatByref( (void*)((uint8*)&FBC$ + 272ll), -1ll, (void*)".bas", 5ll, 0 );
	if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$1238;
	{
		FBSTRING TMP$594$2;
		FBSTRING TMP$595$2;
		FBSTRING* vr$13 = fb_StrAllocTempDescZEx( (char*)"parsing xpm: ", 13ll );
		fb_PrintString( 0, (FBSTRING*)vr$13, 2 );
		__builtin_memset( &TMP$594$2, 0, 24ll );
		FBSTRING* vr$18 = fb_StrConcat( &TMP$594$2, (void*)&XPMFILE$1, -1ll, (void*)" -o ", 5ll );
		__builtin_memset( &TMP$595$2, 0, 24ll );
		FBSTRING* vr$21 = fb_StrConcat( &TMP$595$2, (void*)vr$18, -1ll, (void*)((uint8*)&FBC$ + 272ll), -1ll );
		fb_PrintString( 0, (FBSTRING*)vr$21, 1 );
	}
	label$1238:;
	label$1237:;
	int64 vr$24 = HPARSEXPM( &XPMFILE$1, &CODE$1 );
	if( vr$24 != 0ll ) goto label$1240;
	{
		fb_StrDelete( (FBSTRING*)&CODE$1 );
		fb_StrDelete( (FBSTRING*)&XPMFILE$1 );
		goto label$1232;
	}
	label$1240:;
	label$1239:;
	int32 vr$27 = fb_FileFree(  );
	FO$1 = (int64)vr$27;
	int32 vr$31 = fb_FileOpen( (FBSTRING*)((uint8*)&FBC$ + 272ll), 3u, 0u, 0u, (int32)FO$1, 0 );
	if( (int64)vr$31 == 0ll ) goto label$1242;
	{
		fb_StrDelete( (FBSTRING*)&CODE$1 );
		fb_StrDelete( (FBSTRING*)&XPMFILE$1 );
		goto label$1232;
	}
	label$1242:;
	label$1241:;
	TMP$596$1 = FO$1;
	fb_PrintString( (int32)TMP$596$1, (FBSTRING*)&CODE$1, 0 );
	fb_FileClose( (int32)FO$1 );
	if( *(int64*)((uint8*)&FBC$ + 80ll) != 0ll ) goto label$1244;
	{
		FBCADDTEMP( (FBSTRING*)((uint8*)&FBC$ + 272ll) );
	}
	label$1244:;
	label$1243:;
	HCOMPILEBAS( (struct $9FBCIOFILE*)((uint8*)&FBC$ + 272ll), 0ll, 0ll, -1ll );
	fb$result$1 = -1ll;
	fb_StrDelete( (FBSTRING*)&CODE$1 );
	fb_StrDelete( (FBSTRING*)&XPMFILE$1 );
	label$1232:;
	return fb$result$1;
}

static int64 HCOMPILESTAGE2MODULE( struct $9FBCIOFILE* MODULE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1245:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	FBSTRING ASMFILE$1;
	__builtin_memset( &ASMFILE$1, 0, 24ll );
	FBSTRING* vr$3 = HGETASMNAME( MODULE$1, 2ll );
	fb_StrAssign( (void*)&ASMFILE$1, -1ll, (void*)vr$3, -1ll, 0 );
	int64 vr$6 = FBGETOPTION( 3ll );
	if( (~(*(int64*)((uint8*)&FBC$ + 96ll)) & ((int64)-(vr$6 != 12ll) | ~(*(int64*)((uint8*)&FBC$ + 104ll)))) == 0ll ) goto label$1248;
	{
		FBCADDTEMP( &ASMFILE$1 );
	}
	label$1248:;
	label$1247:;
	{
		int64 TMP$597$2;
		int64 vr$12 = FBGETOPTION( 2ll );
		TMP$597$2 = vr$12;
		if( TMP$597$2 == 1ll ) goto label$1251;
		label$1252:;
		if( TMP$597$2 != 2ll ) goto label$1250;
		label$1251:;
		{
			int64 TMP$629$3;
			boolean ISM64TARGET$3;
			ISM64TARGET$3 = (boolean)0ll;
			{
				int64 TMP$598$4;
				int64 vr$13 = FBGETCPUFAMILY(  );
				TMP$598$4 = vr$13;
				if( TMP$598$4 != 0ll ) goto label$1254;
				label$1255:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-m32 ", 6ll, 0 );
				}
				goto label$1253;
				label$1254:;
				if( TMP$598$4 != 1ll ) goto label$1256;
				label$1257:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-m64 ", 6ll, 0 );
					ISM64TARGET$3 = (boolean)1ll;
				}
				goto label$1253;
				label$1256:;
				if( TMP$598$4 != 4ll ) goto label$1258;
				label$1259:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-m32 ", 6ll, 0 );
				}
				goto label$1253;
				label$1258:;
				if( TMP$598$4 == 5ll ) goto label$1261;
				label$1262:;
				if( TMP$598$4 != 6ll ) goto label$1260;
				label$1261:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-m64 ", 6ll, 0 );
					ISM64TARGET$3 = (boolean)1ll;
				}
				label$1260:;
				label$1253:;
			}
			int64 vr$18 = FBGETOPTION( 3ll );
			if( vr$18 == 12ll ) goto label$1264;
			{
				{
					int64 TMP$601$5;
					int64 vr$19 = FBGETCPUFAMILY(  );
					TMP$601$5 = vr$19;
					if( TMP$601$5 == 4ll ) goto label$1267;
					label$1268:;
					if( TMP$601$5 == 5ll ) goto label$1267;
					label$1269:;
					if( TMP$601$5 == 6ll ) goto label$1267;
					label$1270:;
					if( TMP$601$5 != 8ll ) goto label$1266;
					label$1267:;
					{
						if( *(int64*)((uint8*)&FBC$ + 56ll) == 0ll ) goto label$1272;
						{
							fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-mcpu=native ", 14ll, 0 );
						}
						goto label$1271;
						label$1272:;
						{
							FBSTRING TMP$604$7;
							FBSTRING TMP$605$7;
							FBSTRING TMP$606$7;
							char* vr$21 = FBGETGCCARCH(  );
							__builtin_memset( &TMP$604$7, 0, 24ll );
							FBSTRING* vr$24 = fb_StrConcat( &TMP$604$7, (void*)"-mcpu=", 7ll, (void*)vr$21, 0ll );
							__builtin_memset( &TMP$605$7, 0, 24ll );
							FBSTRING* vr$27 = fb_StrConcat( &TMP$605$7, (void*)vr$24, -1ll, (void*)" ", 2ll );
							__builtin_memset( &TMP$606$7, 0, 24ll );
							FBSTRING* vr$31 = fb_StrConcat( &TMP$606$7, (void*)&LN$1, -1ll, (void*)vr$27, -1ll );
							fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$31, -1ll, 0 );
						}
						label$1271:;
					}
					goto label$1265;
					label$1266:;
					{
						if( *(int64*)((uint8*)&FBC$ + 56ll) == 0ll ) goto label$1275;
						{
							fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-march=native ", 15ll, 0 );
						}
						goto label$1274;
						label$1275:;
						{
							FBSTRING TMP$609$7;
							FBSTRING TMP$610$7;
							FBSTRING TMP$611$7;
							char* vr$34 = FBGETGCCARCH(  );
							__builtin_memset( &TMP$609$7, 0, 24ll );
							FBSTRING* vr$37 = fb_StrConcat( &TMP$609$7, (void*)"-march=", 8ll, (void*)vr$34, 0ll );
							__builtin_memset( &TMP$610$7, 0, 24ll );
							FBSTRING* vr$40 = fb_StrConcat( &TMP$610$7, (void*)vr$37, -1ll, (void*)" ", 2ll );
							__builtin_memset( &TMP$611$7, 0, 24ll );
							FBSTRING* vr$44 = fb_StrConcat( &TMP$611$7, (void*)&LN$1, -1ll, (void*)vr$40, -1ll );
							fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$44, -1ll, 0 );
						}
						label$1274:;
					}
					label$1273:;
					label$1265:;
				}
			}
			label$1264:;
			label$1263:;
			int64 vr$46 = FBGETOPTION( 3ll );
			int64 vr$48 = FBGETOPTION( 4ll );
			if( ((int64)-(vr$46 == 3ll) & (int64)-(vr$48 == 17ll)) == 0ll ) goto label$1277;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-mfloat-abi=softfp -mfpu=vfpv3-d16 ", 36ll, 0 );
			}
			label$1277:;
			label$1276:;
			int64 vr$52 = FBGETOPTION( 38ll );
			if( vr$52 == 0ll ) goto label$1279;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-fPIC ", 7ll, 0 );
			}
			label$1279:;
			label$1278:;
			int64 vr$54 = FBGETOPTION( 3ll );
			if( vr$54 == 12ll ) goto label$1281;
			{
				int64 vr$55 = FBGETOPTION( 2ll );
				if( vr$55 != 2ll ) goto label$1283;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-fno-integrated-as ", 20ll, 0 );
				}
				label$1283:;
				label$1282:;
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-S ", 4ll, 0 );
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-nostdlib -nostdinc ", 21ll, 0 );
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-Wall ", 7ll, 0 );
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-Wno-unused ", 13ll, 0 );
			}
			goto label$1280;
			label$1281:;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-c -nostdlib -nostdinc -Wall -Wno-unused-label -Wno-unused-function -Wno-unused-variable ", 90ll, 0 );
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-Wno-warn-absolute-paths ", 26ll, 0 );
			}
			label$1280:;
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-Wno-main ", 11ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-Werror-implicit-function-declaration ", 39ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-O", 3ll, 0 );
			int64 vr$66 = FBGETOPTION( 8ll );
			FBSTRING* vr$67 = fb_LongintToStr( vr$66 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$67, -1ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" ", 2ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-fno-strict-aliasing ", 22ll, 0 );
			{
				uint64 TMP$627$4;
				int64 vr$71 = FBGETOPTION( 3ll );
				TMP$627$4 = (uint64)vr$71;
				goto label$1285;
				label$1286:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-fno-ident ", 12ll, 0 );
				}
				goto label$1284;
				label$1285:;
				static const void* tmp$888[1ll] = {
					&&label$1286,
				};
				if( TMP$627$4 > 0ull ) goto label$1284;
				goto *tmp$888[TMP$627$4 - 0ull];
				label$1284:;
			}
			int64 vr$73 = FBGETOPTION( 3ll );
			if( vr$73 == 12ll ) goto label$1287;
			int64 vr$74 = FBGETOPTION( 3ll );
			TMP$629$3 = (int64)-(vr$74 != 3ll);
			goto label$1610;
			label$1287:;
			TMP$629$3 = 0ll;
			label$1610:;
			if( TMP$629$3 == 0ll ) goto label$1289;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-frounding-math ", 17ll, 0 );
			}
			label$1289:;
			label$1288:;
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-fno-math-errno ", 17ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-fwrapv ", 9ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-fno-exceptions -fno-asynchronous-unwind-tables ", 49ll, 0 );
			int64 vr$82 = FBGETOPTION( 21ll );
			if( ((int64)-((int64)-ISM64TARGET$3 == -1ll) | (int64)-(vr$82 == -1ll)) == 0ll ) goto label$1291;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-funwind-tables ", 17ll, 0 );
			}
			goto label$1290;
			label$1291:;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-fno-unwind-tables ", 20ll, 0 );
			}
			label$1290:;
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-Wno-format ", 13ll, 0 );
			int64 vr$88 = FBGETOPTION( 14ll );
			if( vr$88 == 0ll ) goto label$1293;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-g ", 4ll, 0 );
			}
			label$1293:;
			label$1292:;
			int64 vr$90 = FBGETOPTION( 24ll );
			if( vr$90 != 1ll ) goto label$1295;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-pg ", 5ll, 0 );
			}
			label$1295:;
			label$1294:;
			int64 vr$92 = FBGETOPTION( 5ll );
			if( vr$92 != 1ll ) goto label$1297;
			{
				int64 vr$93 = FBGETOPTION( 3ll );
				if( vr$93 != 3ll ) goto label$1299;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-mfpmath=sse -mssse3 ", 22ll, 0 );
				}
				goto label$1298;
				label$1299:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-mfpmath=sse -msse2 ", 21ll, 0 );
				}
				label$1298:;
			}
			goto label$1296;
			label$1297:;
			int64 vr$96 = FBGETOPTION( 5ll );
			if( vr$96 != 2ll ) goto label$1300;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-mfpu=neon -funsafe-math-optimizations ", 40ll, 0 );
			}
			label$1300:;
			label$1296:;
			{
				int64 TMP$642$4;
				int64 vr$98 = FBGETCPUFAMILY(  );
				TMP$642$4 = vr$98;
				if( TMP$642$4 == 0ll ) goto label$1303;
				label$1304:;
				if( TMP$642$4 != 1ll ) goto label$1302;
				label$1303:;
				{
					int64 vr$99 = FBGETOPTION( 9ll );
					if( vr$99 != 0ll ) goto label$1306;
					{
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-masm=intel ", 13ll, 0 );
					}
					label$1306:;
					label$1305:;
				}
				label$1302:;
				label$1301:;
			}
		}
		goto label$1249;
		label$1250:;
		if( TMP$597$2 != 3ll ) goto label$1307;
		label$1308:;
		{
			{
				int64 TMP$644$4;
				int64 vr$101 = FBGETCPUFAMILY(  );
				TMP$644$4 = vr$101;
				if( TMP$644$4 != 0ll ) goto label$1310;
				label$1311:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-march=x86 ", 12ll, 0 );
				}
				goto label$1309;
				label$1310:;
				if( TMP$644$4 != 1ll ) goto label$1312;
				label$1313:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-march=x86-64 ", 15ll, 0 );
				}
				goto label$1309;
				label$1312:;
				if( TMP$644$4 != 2ll ) goto label$1314;
				label$1315:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-march=arm ", 12ll, 0 );
				}
				goto label$1309;
				label$1314:;
				if( TMP$644$4 != 3ll ) goto label$1316;
				label$1317:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-march=armv8-a ", 16ll, 0 );
				}
				goto label$1309;
				label$1316:;
				if( TMP$644$4 != 4ll ) goto label$1318;
				label$1319:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-mcpu=powerpc ", 15ll, 0 );
				}
				goto label$1309;
				label$1318:;
				if( TMP$644$4 != 5ll ) goto label$1320;
				label$1321:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-mcpu=powerpc64 ", 17ll, 0 );
				}
				goto label$1309;
				label$1320:;
				if( TMP$644$4 != 6ll ) goto label$1322;
				label$1323:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-mcpu=powerpc64le ", 19ll, 0 );
				}
				label$1322:;
				label$1309:;
			}
			int64 vr$109 = FBGETOPTION( 38ll );
			if( vr$109 == 0ll ) goto label$1325;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-relocation-model=pic ", 23ll, 0 );
			}
			label$1325:;
			label$1324:;
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-O", 3ll, 0 );
			int64 vr$112 = FBGETOPTION( 8ll );
			FBSTRING* vr$113 = fb_LongintToStr( vr$112 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$113, -1ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" ", 2ll, 0 );
			{
				int64 TMP$653$4;
				int64 vr$116 = FBGETCPUFAMILY(  );
				TMP$653$4 = vr$116;
				if( TMP$653$4 == 0ll ) goto label$1328;
				label$1329:;
				if( TMP$653$4 != 1ll ) goto label$1327;
				label$1328:;
				{
					int64 vr$117 = FBGETOPTION( 9ll );
					if( vr$117 != 0ll ) goto label$1331;
					{
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"--x86-asm-syntax=intel ", 24ll, 0 );
					}
					label$1331:;
					label$1330:;
				}
				label$1327:;
				label$1326:;
			}
		}
		label$1307:;
		label$1249:;
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
		int64 TMP$657$2;
		int64 vr$129 = FBGETOPTION( 2ll );
		TMP$657$2 = vr$129;
		if( TMP$657$2 != 1ll ) goto label$1333;
		label$1334:;
		{
			CCOMPILER$1 = 4ll;
			int64 vr$130 = FBGETOPTION( 3ll );
			if( vr$130 != 12ll ) goto label$1336;
			{
				CCOMPILER$1 = 15ll;
			}
			label$1336:;
			label$1335:;
			int64 vr$132 = FBCRUNBIN( (char*)"compiling C", CCOMPILER$1, &LN$1 );
			fb$result$1 = vr$132;
		}
		goto label$1332;
		label$1333:;
		if( TMP$657$2 != 2ll ) goto label$1337;
		label$1338:;
		{
			CCOMPILER$1 = 6ll;
			int64 vr$134 = FBCRUNBIN( (char*)"compiling C", CCOMPILER$1, &LN$1 );
			fb$result$1 = vr$134;
		}
		goto label$1332;
		label$1337:;
		if( TMP$657$2 != 3ll ) goto label$1339;
		label$1340:;
		{
			CCOMPILER$1 = 5ll;
			int64 vr$136 = FBCRUNBIN( (char*)"compiling LLVM IR", CCOMPILER$1, &LN$1 );
			fb$result$1 = vr$136;
		}
		label$1339:;
		label$1332:;
	}
	fb_StrDelete( (FBSTRING*)&ASMFILE$1 );
	fb_StrDelete( (FBSTRING*)&LN$1 );
	label$1246:;
	return fb$result$1;
}

static void HCOMPILESTAGE2MODULES( void )
{
	label$1341:;
	struct $9FBCIOFILE* MODULE$1;
	void* vr$1 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 144ll) );
	MODULE$1 = (struct $9FBCIOFILE*)vr$1;
	label$1343:;
	if( MODULE$1 == (struct $9FBCIOFILE*)0ull ) goto label$1344;
	{
		int64 vr$2 = HCOMPILESTAGE2MODULE( MODULE$1 );
		if( vr$2 != 0ll ) goto label$1346;
		{
			FBCEND( 1ll );
		}
		label$1346:;
		label$1345:;
		void* vr$3 = LISTGETNEXT( (void*)MODULE$1 );
		MODULE$1 = (struct $9FBCIOFILE*)vr$3;
	}
	goto label$1343;
	label$1344:;
	label$1342:;
}

static int64 HASSEMBLEMODULE( struct $9FBCIOFILE* MODULE$1 )
{
	FBSTRING TMP$666$1;
	FBSTRING TMP$667$1;
	FBSTRING TMP$668$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1347:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	$7FBCTOOL ASSEMBLER$1;
	ASSEMBLER$1 = 0ll;
	if( ASSEMBLER$1 != 0ll ) goto label$1350;
	{
		{
			int64 TMP$660$3;
			int64 vr$2 = FBGETOPTION( 3ll );
			TMP$660$3 = vr$2;
			if( TMP$660$3 != 12ll ) goto label$1352;
			label$1353:;
			{
				ASSEMBLER$1 = 0ll;
			}
			goto label$1351;
			label$1352:;
			{
				ASSEMBLER$1 = 1ll;
			}
			label$1354:;
			label$1351:;
		}
	}
	label$1350:;
	label$1349:;
	if( ASSEMBLER$1 != 0ll ) goto label$1356;
	{
		fb$result$1 = -1ll;
		fb_StrDelete( (FBSTRING*)&LN$1 );
		goto label$1348;
	}
	label$1356:;
	label$1355:;
	{
		if( ASSEMBLER$1 != 6ll ) goto label$1358;
		label$1359:;
		{
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-c ", 4ll, 0 );
		}
		goto label$1357;
		label$1358:;
		{
			{
				int64 TMP$662$4;
				int64 vr$5 = FBGETCPUFAMILY(  );
				TMP$662$4 = vr$5;
				if( TMP$662$4 != 0ll ) goto label$1362;
				label$1363:;
				{
					int64 vr$6 = FBGETOPTION( 3ll );
					if( vr$6 != 10ll ) goto label$1365;
					{
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-arch i386 ", 12ll, 0 );
					}
					goto label$1364;
					label$1365:;
					{
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"--32 ", 6ll, 0 );
					}
					label$1364:;
				}
				goto label$1361;
				label$1362:;
				if( TMP$662$4 != 1ll ) goto label$1366;
				label$1367:;
				{
					int64 vr$9 = FBGETOPTION( 3ll );
					if( vr$9 != 10ll ) goto label$1369;
					{
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-arch x86_64 ", 14ll, 0 );
					}
					goto label$1368;
					label$1369:;
					{
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"--64 ", 6ll, 0 );
					}
					label$1368:;
				}
				label$1366:;
				label$1361:;
			}
			int64 vr$12 = FBGETOPTION( 14ll );
			if( vr$12 != 0ll ) goto label$1371;
			{
				int64 vr$13 = FBGETOPTION( 3ll );
				if( vr$13 == 10ll ) goto label$1373;
				{
					int64 vr$14 = FBGETOPTION( 3ll );
					if( vr$14 == 12ll ) goto label$1375;
					{
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"--strip-local-absolute ", 24ll, 0 );
					}
					label$1375:;
					label$1374:;
				}
				label$1373:;
				label$1372:;
			}
			label$1371:;
			label$1370:;
		}
		label$1360:;
		label$1357:;
	}
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22", 2ll, 0 );
	FBSTRING* vr$17 = HGETASMNAME( MODULE$1, 2ll );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$17, -1ll, 0 );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22 ", 3ll, 0 );
	__builtin_memset( &TMP$666$1, 0, 24ll );
	FBSTRING* vr$23 = fb_StrConcat( &TMP$666$1, (void*)"-o \x22", 5ll, *(void**)((uint8*)MODULE$1 + 24ll), -1ll );
	__builtin_memset( &TMP$667$1, 0, 24ll );
	FBSTRING* vr$26 = fb_StrConcat( &TMP$667$1, (void*)vr$23, -1ll, (void*)"\x22", 2ll );
	__builtin_memset( &TMP$668$1, 0, 24ll );
	FBSTRING* vr$30 = fb_StrConcat( &TMP$668$1, (void*)&LN$1, -1ll, (void*)vr$26, -1ll );
	fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$30, -1ll, 0 );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)((uint8*)&FBC$ + 2024ll), -1ll, 0 );
	int64 vr$35 = FBCRUNBIN( (char*)"assembling", ASSEMBLER$1, &LN$1 );
	if( vr$35 != 0ll ) goto label$1377;
	{
		fb_StrDelete( (FBSTRING*)&LN$1 );
		goto label$1348;
	}
	label$1377:;
	label$1376:;
	if( *(int64*)((uint8*)&FBC$ + 104ll) != 0ll ) goto label$1379;
	{
		FBCADDTEMP( *(FBSTRING**)((uint8*)MODULE$1 + 24ll) );
	}
	label$1379:;
	label$1378:;
	fb$result$1 = -1ll;
	fb_StrDelete( (FBSTRING*)&LN$1 );
	label$1348:;
	return fb$result$1;
}

static void HASSEMBLEMODULES( void )
{
	label$1380:;
	struct $9FBCIOFILE* MODULE$1;
	void* vr$1 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 144ll) );
	MODULE$1 = (struct $9FBCIOFILE*)vr$1;
	label$1382:;
	if( MODULE$1 == (struct $9FBCIOFILE*)0ull ) goto label$1383;
	{
		int64 vr$2 = HASSEMBLEMODULE( MODULE$1 );
		if( vr$2 != 0ll ) goto label$1385;
		{
			FBCEND( 1ll );
		}
		label$1385:;
		label$1384:;
		void* vr$3 = LISTGETNEXT( (void*)MODULE$1 );
		MODULE$1 = (struct $9FBCIOFILE*)vr$3;
	}
	goto label$1382;
	label$1383:;
	label$1381:;
}

static int64 HASSEMBLERC( struct $9FBCIOFILE* RC$1 )
{
	FBSTRING TMP$671$1;
	FBSTRING TMP$672$1;
	FBSTRING TMP$673$1;
	FBSTRING TMP$674$1;
	FBSTRING TMP$675$1;
	FBSTRING TMP$676$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1386:;
	FBSTRING LN$1;
	fb_StrInit( (void*)&LN$1, -1ll, (void*)"--output-format=coff --include-dir=.", 37ll, 0 );
	__builtin_memset( &TMP$671$1, 0, 24ll );
	FBSTRING* vr$6 = fb_StrConcat( &TMP$671$1, (void*)" \x22", 3ll, (void*)RC$1, -1ll );
	__builtin_memset( &TMP$672$1, 0, 24ll );
	FBSTRING* vr$9 = fb_StrConcat( &TMP$672$1, (void*)vr$6, -1ll, (void*)"\x22", 2ll );
	__builtin_memset( &TMP$673$1, 0, 24ll );
	FBSTRING* vr$13 = fb_StrConcat( &TMP$673$1, (void*)&LN$1, -1ll, (void*)vr$9, -1ll );
	fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$13, -1ll, 0 );
	__builtin_memset( &TMP$674$1, 0, 24ll );
	FBSTRING* vr$18 = fb_StrConcat( &TMP$674$1, (void*)" \x22", 3ll, *(void**)((uint8*)RC$1 + 24ll), -1ll );
	__builtin_memset( &TMP$675$1, 0, 24ll );
	FBSTRING* vr$21 = fb_StrConcat( &TMP$675$1, (void*)vr$18, -1ll, (void*)"\x22", 2ll );
	__builtin_memset( &TMP$676$1, 0, 24ll );
	FBSTRING* vr$25 = fb_StrConcat( &TMP$676$1, (void*)&LN$1, -1ll, (void*)vr$21, -1ll );
	fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$25, -1ll, 0 );
	int64 vr$28 = FBCRUNBIN( (char*)"compiling rc", 9ll, &LN$1 );
	fb$result$1 = vr$28;
	if( *(int64*)((uint8*)&FBC$ + 104ll) != 0ll ) goto label$1389;
	{
		FBCADDTEMP( *(FBSTRING**)((uint8*)RC$1 + 24ll) );
	}
	label$1389:;
	label$1388:;
	fb_StrDelete( (FBSTRING*)&LN$1 );
	label$1387:;
	return fb$result$1;
}

static void HASSEMBLERCS( void )
{
	label$1390:;
	struct $9FBCIOFILE* RC$1;
	void* vr$1 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 208ll) );
	RC$1 = (struct $9FBCIOFILE*)vr$1;
	label$1392:;
	if( RC$1 == (struct $9FBCIOFILE*)0ull ) goto label$1393;
	{
		int64 vr$2 = HASSEMBLERC( RC$1 );
		if( vr$2 != 0ll ) goto label$1395;
		{
			FBCEND( 1ll );
		}
		label$1395:;
		label$1394:;
		void* vr$3 = LISTGETNEXT( (void*)RC$1 );
		RC$1 = (struct $9FBCIOFILE*)vr$3;
	}
	goto label$1392;
	label$1393:;
	label$1391:;
}

static void HASSEMBLEXPM( void )
{
	label$1396:;
	int64 vr$1 = fb_StrLen( (void*)((uint8*)&FBC$ + 272ll), -1ll );
	if( vr$1 <= 0ll ) goto label$1399;
	{
		int64 vr$2 = FBGETOPTION( 2ll );
		if( vr$2 == 0ll ) goto label$1401;
		{
			HCOMPILESTAGE2MODULE( (struct $9FBCIOFILE*)((uint8*)&FBC$ + 272ll) );
		}
		label$1401:;
		label$1400:;
		int64 vr$5 = HASSEMBLEMODULE( (struct $9FBCIOFILE*)((uint8*)&FBC$ + 272ll) );
		if( vr$5 != 0ll ) goto label$1403;
		{
			FBCEND( 1ll );
		}
		label$1403:;
		label$1402:;
	}
	label$1399:;
	label$1398:;
	label$1397:;
}

static int64 HCOMPILEFBCTINF( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1404:;
	struct $9FBCIOFILE FBCTINF$1;
	_ZN9FBCIOFILEC1Ev( &FBCTINF$1 );
	FBSTRING OBJFILE$1;
	__builtin_memset( &OBJFILE$1, 0, 24ll );
	int64 FO$1;
	fb_StrAssign( (void*)&FBCTINF$1, -1ll, (void*)"__fb_ct.inf.bas", 16ll, 0 );
	fb_StrAssign( (void*)&OBJFILE$1, -1ll, (void*)"__fb_ct.inf", 12ll, 0 );
	*(FBSTRING**)((uint8*)&FBCTINF$1 + 24ll) = &OBJFILE$1;
	if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$1407;
	{
		FBSTRING* vr$6 = fb_StrAllocTempDescZEx( (char*)"creating: ", 10ll );
		fb_PrintString( 0, (FBSTRING*)vr$6, 2 );
		fb_PrintString( 0, (FBSTRING*)&FBCTINF$1, 1 );
	}
	label$1407:;
	label$1406:;
	int32 vr$8 = fb_FileFree(  );
	FO$1 = (int64)vr$8;
	int32 vr$12 = fb_FileOpen( (FBSTRING*)&FBCTINF$1, 3u, 0u, 0u, (int32)FO$1, 0 );
	if( (int64)vr$12 == 0ll ) goto label$1409;
	{
		fb_StrDelete( (FBSTRING*)&OBJFILE$1 );
		_ZN9FBCIOFILED1Ev( &FBCTINF$1 );
		goto label$1405;
	}
	label$1409:;
	label$1408:;
	fb_FileClose( (int32)FO$1 );
	if( *(int64*)((uint8*)&FBC$ + 80ll) != 0ll ) goto label$1411;
	{
		FBCADDTEMP( (FBSTRING*)&FBCTINF$1 );
	}
	label$1411:;
	label$1410:;
	HCOMPILEBAS( &FBCTINF$1, 0ll, -1ll, -1ll );
	int64 vr$19 = FBGETOPTION( 2ll );
	if( vr$19 == 0ll ) goto label$1413;
	{
		HCOMPILESTAGE2MODULE( &FBCTINF$1 );
	}
	label$1413:;
	label$1412:;
	int64 vr$22 = HASSEMBLEMODULE( &FBCTINF$1 );
	fb$result$1 = vr$22;
	fb_StrDelete( (FBSTRING*)&OBJFILE$1 );
	_ZN9FBCIOFILED1Ev( &FBCTINF$1 );
	label$1405:;
	return fb$result$1;
}

static int64 HARCHIVEFILES( void )
{
	FBSTRING TMP$681$1;
	FBSTRING TMP$682$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1414:;
	HSETOUTNAME(  );
	FBSTRING* vr$2 = fb_StrAllocTempDescZ( (char*)((uint8*)&FBC$ + 968ll) );
	int32 vr$3 = fb_FileKill( (FBSTRING*)vr$2 );
	if( (int64)vr$3 == 0ll ) goto label$1417;
	{
	}
	label$1417:;
	label$1416:;
	FBSTRING LN$1;
	__builtin_memset( &TMP$681$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$681$1, (void*)"-rsc \x22", 7ll, (void*)((uint8*)&FBC$ + 968ll), 261ll );
	__builtin_memset( &TMP$682$1, 0, 24ll );
	FBSTRING* vr$11 = fb_StrConcat( &TMP$682$1, (void*)vr$8, -1ll, (void*)"\x22 ", 3ll );
	fb_StrInit( (void*)&LN$1, -1ll, (void*)vr$11, -1ll, 0 );
	int64 vr$13 = FBGETOPTION( 40ll );
	int64 vr$14 = FBISCROSSCOMP(  );
	if( (vr$13 & ~vr$14) == 0ll ) goto label$1419;
	{
		FBSTRING TMP$686$2;
		int64 vr$17 = HCOMPILEFBCTINF(  );
		if( vr$17 == 0ll ) goto label$1421;
		{
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22__fb_ct.inf\x22 ", 15ll, 0 );
		}
		label$1421:;
		label$1420:;
		__builtin_memset( &TMP$686$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$686$2, -1ll, (void*)"__fb_ct.inf", 12ll, 0 );
		FBCADDTEMP( &TMP$686$2 );
		fb_StrDelete( (FBSTRING*)&TMP$686$2 );
	}
	label$1419:;
	label$1418:;
	FBSTRING* OBJFILE$1;
	void* vr$24 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 400ll) );
	OBJFILE$1 = (FBSTRING*)vr$24;
	label$1422:;
	if( OBJFILE$1 == (FBSTRING*)0ull ) goto label$1423;
	{
		FBSTRING TMP$687$2;
		FBSTRING TMP$688$2;
		FBSTRING TMP$689$2;
		__builtin_memset( &TMP$687$2, 0, 24ll );
		FBSTRING* vr$27 = fb_StrConcat( &TMP$687$2, (void*)"\x22", 2ll, (void*)OBJFILE$1, -1ll );
		__builtin_memset( &TMP$688$2, 0, 24ll );
		FBSTRING* vr$30 = fb_StrConcat( &TMP$688$2, (void*)vr$27, -1ll, (void*)"\x22 ", 3ll );
		__builtin_memset( &TMP$689$2, 0, 24ll );
		FBSTRING* vr$34 = fb_StrConcat( &TMP$689$2, (void*)&LN$1, -1ll, (void*)vr$30, -1ll );
		fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$34, -1ll, 0 );
		void* vr$36 = LISTGETNEXT( (void*)OBJFILE$1 );
		OBJFILE$1 = (FBSTRING*)vr$36;
	}
	goto label$1422;
	label$1423:;
	$7FBCTOOL AR$1;
	AR$1 = 2ll;
	int64 vr$37 = FBGETOPTION( 3ll );
	if( vr$37 != 12ll ) goto label$1425;
	{
		AR$1 = 13ll;
	}
	label$1425:;
	label$1424:;
	int64 vr$39 = FBCRUNBIN( (char*)"archiving", AR$1, &LN$1 );
	fb$result$1 = vr$39;
	fb_StrDelete( (FBSTRING*)&LN$1 );
	label$1415:;
	return fb$result$1;
}

static void HSETDEFAULTLIBPATHS( void )
{
	FBSTRING TMP$691$1;
	FBSTRING TMP$692$1;
	label$1426:;
	__builtin_memset( &TMP$691$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$691$1, -1ll, (void*)((uint8*)&FBC$ + 3559ll), 261ll, 0 );
	FBCADDDEFLIBPATH( &TMP$691$1 );
	fb_StrDelete( (FBSTRING*)&TMP$691$1 );
	__builtin_memset( &TMP$692$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$692$1, -1ll, (void*)".", 2ll, 0 );
	FBCADDDEFLIBPATH( &TMP$692$1 );
	fb_StrDelete( (FBSTRING*)&TMP$692$1 );
	{
		int64 TMP$693$2;
		int64 vr$9 = FBGETOPTION( 3ll );
		TMP$693$2 = vr$9;
		if( TMP$693$2 != 3ll ) goto label$1429;
		label$1430:;
		{
		}
		goto label$1428;
		label$1429:;
		if( TMP$693$2 != 12ll ) goto label$1431;
		label$1432:;
		{
		}
		goto label$1428;
		label$1431:;
		{
			FBCADDLIBPATHFOR( (char*)"libgcc.a" );
			{
				int64 TMP$695$4;
				int64 vr$10 = FBGETOPTION( 3ll );
				TMP$695$4 = vr$10;
				if( TMP$695$4 != 6ll ) goto label$1435;
				label$1436:;
				{
					FBCADDLIBPATHFOR( (char*)"libc++.so" );
				}
				goto label$1434;
				label$1435:;
				if( TMP$695$4 != 4ll ) goto label$1437;
				label$1438:;
				{
					FBCADDLIBPATHFOR( (char*)"libstdcx.a" );
				}
				goto label$1434;
				label$1437:;
				{
					FBCADDLIBPATHFOR( (char*)"libstdc++.so" );
				}
				label$1439:;
				label$1434:;
			}
		}
		label$1433:;
		label$1428:;
	}
	{
		int64 TMP$699$2;
		int64 vr$11 = FBGETOPTION( 3ll );
		TMP$699$2 = vr$11;
		if( TMP$699$2 != 4ll ) goto label$1441;
		label$1442:;
		{
			FBCADDLIBPATHFOR( (char*)"libm.a" );
		}
		goto label$1440;
		label$1441:;
		if( TMP$699$2 != 0ll ) goto label$1443;
		label$1444:;
		{
			FBCADDLIBPATHFOR( (char*)"libmingw32.a" );
		}
		label$1443:;
		label$1440:;
	}
	label$1427:;
}

static void FBCADDDEFLIB( char* LIBNAME$1 )
{
	FBSTRING TMP$702$1;
	label$1445:;
	__builtin_memset( &TMP$702$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$702$1, -1ll, (void*)LIBNAME$1, 0ll, 0 );
	STRSETADD( (struct $7TSTRSET*)((uint8*)&FBC$ + 792ll), &TMP$702$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$702$1 );
	label$1446:;
}

static FBSTRING* HGETFBLIBNAMESUFFIX( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$1447:;
	FBSTRING S$1;
	__builtin_memset( &S$1, 0, 24ll );
	int64 vr$2 = FBGETOPTION( 36ll );
	if( vr$2 == 0ll ) goto label$1450;
	{
		fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"mt", 3ll, 0 );
	}
	label$1450:;
	label$1449:;
	int64 vr$4 = FBGETOPTION( 38ll );
	if( vr$4 == 0ll ) goto label$1452;
	{
		fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"pic", 4ll, 0 );
	}
	label$1452:;
	label$1451:;
	fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&S$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&S$1 );
	label$1448:;
	FBSTRING* vr$10 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$10;
}

static void HADDDEFAULTLIBS( void )
{
	label$1453:;
	int64 vr$0 = FBGETOPTION( 33ll );
	if( vr$0 == 0ll ) goto label$1456;
	{
		FBSTRING TMP$703$2;
		FBSTRING TMP$704$2;
		__builtin_memset( &TMP$704$2, 0, 24ll );
		FBSTRING* vr$2 = HGETFBLIBNAMESUFFIX(  );
		__builtin_memset( &TMP$703$2, 0, 24ll );
		FBSTRING* vr$5 = fb_StrConcat( &TMP$703$2, (void*)"fbrt", 5ll, (void*)vr$2, -1ll );
		fb_StrAssign( (void*)&TMP$704$2, -1ll, (void*)vr$5, -1ll, 0 );
		FBCADDDEFLIB( (char*)*(char**)&TMP$704$2 );
		fb_StrDelete( (FBSTRING*)&TMP$704$2 );
	}
	goto label$1455;
	label$1456:;
	{
		FBSTRING TMP$705$2;
		FBSTRING TMP$706$2;
		__builtin_memset( &TMP$706$2, 0, 24ll );
		FBSTRING* vr$9 = HGETFBLIBNAMESUFFIX(  );
		__builtin_memset( &TMP$705$2, 0, 24ll );
		FBSTRING* vr$12 = fb_StrConcat( &TMP$705$2, (void*)"fb", 3ll, (void*)vr$9, -1ll );
		fb_StrAssign( (void*)&TMP$706$2, -1ll, (void*)vr$12, -1ll, 0 );
		FBCADDDEFLIB( (char*)*(char**)&TMP$706$2 );
		fb_StrDelete( (FBSTRING*)&TMP$706$2 );
	}
	label$1455:;
	int64 vr$15 = FBGETOPTION( 37ll );
	if( vr$15 == 0ll ) goto label$1458;
	{
		FBSTRING TMP$707$2;
		FBSTRING TMP$708$2;
		__builtin_memset( &TMP$708$2, 0, 24ll );
		FBSTRING* vr$17 = HGETFBLIBNAMESUFFIX(  );
		__builtin_memset( &TMP$707$2, 0, 24ll );
		FBSTRING* vr$20 = fb_StrConcat( &TMP$707$2, (void*)"fbgfx", 6ll, (void*)vr$17, -1ll );
		fb_StrAssign( (void*)&TMP$708$2, -1ll, (void*)vr$20, -1ll, 0 );
		FBCADDDEFLIB( (char*)*(char**)&TMP$708$2 );
		fb_StrDelete( (FBSTRING*)&TMP$708$2 );
		{
			uint64 TMP$709$3;
			int64 vr$23 = FBGETOPTION( 3ll );
			TMP$709$3 = (uint64)vr$23;
			goto label$1460;
			label$1461:;
			{
				FBCADDDEFLIB( (char*)"gdi32" );
				FBCADDDEFLIB( (char*)"winmm" );
			}
			goto label$1459;
			label$1462:;
			{
				FBSTRING TMP$713$4;
				__builtin_memset( &TMP$713$4, 0, 24ll );
				fb_StrAssign( (void*)&TMP$713$4, -1ll, (void*)"/usr/X11R6/lib", 15ll, 0 );
				FBCADDDEFLIBPATH( &TMP$713$4 );
				fb_StrDelete( (FBSTRING*)&TMP$713$4 );
				FBCADDDEFLIB( (char*)"X11" );
				FBCADDDEFLIB( (char*)"Xext" );
				FBCADDDEFLIB( (char*)"Xpm" );
				FBCADDDEFLIB( (char*)"Xrandr" );
				FBCADDDEFLIB( (char*)"Xrender" );
			}
			goto label$1459;
			label$1463:;
			{
				ERRREPORTEX( 329ll, (char*)"", -1ll, 1ll, (char*)0ull );
			}
			goto label$1459;
			label$1460:;
			static const void* tmp$889[12ll] = {
				&&label$1461,
				&&label$1461,
				&&label$1462,
				&&label$1463,
				&&label$1459,
				&&label$1459,
				&&label$1462,
				&&label$1462,
				&&label$1462,
				&&label$1462,
				&&label$1462,
				&&label$1462,
			};
			if( TMP$709$3 > 11ull ) goto label$1459;
			goto *tmp$889[TMP$709$3 - 0ull];
			label$1459:;
		}
	}
	label$1458:;
	label$1457:;
	{
		uint64 TMP$719$2;
		int64 vr$28 = FBGETOPTION( 3ll );
		TMP$719$2 = (uint64)vr$28;
		goto label$1465;
		label$1466:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"cygwin" );
			FBCADDDEFLIB( (char*)"kernel32" );
			FBCADDDEFLIB( (char*)"user32" );
			int64 vr$29 = FBGETOPTION( 24ll );
			if( vr$29 != 1ll ) goto label$1468;
			{
				FBCADDDEFLIB( (char*)"gmon" );
			}
			label$1468:;
			label$1467:;
		}
		goto label$1464;
		label$1469:;
		{
			FBCADDDEFLIB( (char*)"System" );
			FBCADDDEFLIB( (char*)"pthread" );
			FBCADDDEFLIB( (char*)"ncurses" );
		}
		goto label$1464;
		label$1470:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"c" );
			FBCADDDEFLIB( (char*)"m" );
			int64 vr$30 = FBGETOPTION( 36ll );
			if( vr$30 == 0ll ) goto label$1472;
			{
				FBCADDDEFLIB( (char*)"pthread" );
				FBCADDDEFLIB( (char*)"socket" );
			}
			label$1472:;
			label$1471:;
		}
		goto label$1464;
		label$1473:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"pthread" );
			FBCADDDEFLIB( (char*)"c" );
			FBCADDDEFLIB( (char*)"m" );
			FBCADDDEFLIB( (char*)"ncurses" );
		}
		goto label$1464;
		label$1474:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"pthread" );
			FBCADDDEFLIB( (char*)"c" );
			FBCADDDEFLIB( (char*)"m" );
			FBCADDDEFLIB( (char*)"ncurses" );
		}
		goto label$1464;
		label$1475:;
		{
			FBSTRING* vr$31 = FBCFINDLIBFILE( (char*)"libtinfo.a" );
			int64 vr$32 = fb_StrLen( (void*)vr$31, -1ll );
			FBSTRING* vr$34 = FBCFINDLIBFILE( (char*)"libtinfo.so" );
			int64 vr$35 = fb_StrLen( (void*)vr$34, -1ll );
			if( ((int64)-(vr$32 > 0ll) | (int64)-(vr$35 > 0ll)) == 0ll ) goto label$1477;
			{
				FBCADDDEFLIB( (char*)"tinfo" );
			}
			goto label$1476;
			label$1477:;
			{
				FBCADDDEFLIB( (char*)"ncurses" );
			}
			label$1476:;
			FBCADDDEFLIB( (char*)"m" );
			FBCADDDEFLIB( (char*)"dl" );
			FBCADDDEFLIB( (char*)"pthread" );
			FBCADDDEFLIB( (char*)"gcc" );
			FBSTRING* vr$38 = FBCFINDLIBFILE( (char*)"libgcc_eh.a" );
			int64 vr$39 = fb_StrLen( (void*)vr$38, -1ll );
			FBSTRING* vr$41 = FBCFINDLIBFILE( (char*)"libgcc_eh.so" );
			int64 vr$42 = fb_StrLen( (void*)vr$41, -1ll );
			if( ((int64)-(vr$39 > 0ll) | (int64)-(vr$42 > 0ll)) == 0ll ) goto label$1479;
			{
				FBCADDDEFLIB( (char*)"gcc_eh" );
			}
			label$1479:;
			label$1478:;
			FBCADDDEFLIB( (char*)"c" );
		}
		goto label$1464;
		label$1480:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"pthread" );
			FBCADDDEFLIB( (char*)"c" );
			FBCADDDEFLIB( (char*)"m" );
			FBCADDDEFLIB( (char*)"ncurses" );
		}
		goto label$1464;
		label$1481:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"pthread" );
			FBCADDDEFLIB( (char*)"c" );
			FBCADDDEFLIB( (char*)"m" );
			FBCADDDEFLIB( (char*)"ncurses" );
		}
		goto label$1464;
		label$1482:;
		{
			FBCADDDEFLIB( (char*)"m" );
			FBCADDDEFLIB( (char*)"dl" );
			FBCADDDEFLIB( (char*)"c" );
		}
		goto label$1464;
		label$1483:;
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
			if( ((int64)-(vr$46 > 0ll) | (int64)-(vr$49 > 0ll)) == 0ll ) goto label$1485;
			{
				FBCADDDEFLIB( (char*)"gcc_eh" );
			}
			label$1485:;
			label$1484:;
			int64 vr$52 = FBGETOPTION( 24ll );
			if( vr$52 != 1ll ) goto label$1487;
			{
				FBCADDDEFLIB( (char*)"gmon" );
			}
			label$1487:;
			label$1486:;
		}
		goto label$1464;
		label$1488:;
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
			if( vr$53 != 1ll ) goto label$1490;
			{
				FBCADDDEFLIB( (char*)"gmon" );
			}
			label$1490:;
			label$1489:;
		}
		goto label$1464;
		label$1491:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"amiga" );
			FBCADDDEFLIB( (char*)"m" );
		}
		goto label$1464;
		label$1492:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"arosc" );
			FBCADDDEFLIB( (char*)"autoinit" );
			FBCADDDEFLIB( (char*)"m" );
		}
		goto label$1464;
		label$1493:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"c" );
			FBCADDDEFLIB( (char*)"m" );
		}
		goto label$1464;
		label$1494:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"c" );
			FBCADDDEFLIB( (char*)"m" );
			FBCADDDEFLIB( (char*)"auto" );
		}
		goto label$1464;
		label$1465:;
		static const void* tmp$890[17ll] = {
			&&label$1483,
			&&label$1466,
			&&label$1475,
			&&label$1482,
			&&label$1470,
			&&label$1488,
			&&label$1473,
			&&label$1474,
			&&label$1474,
			&&label$1481,
			&&label$1469,
			&&label$1480,
			&&label$1464,
			&&label$1491,
			&&label$1492,
			&&label$1493,
			&&label$1494,
		};
		if( TMP$719$2 > 16ull ) goto label$1464;
		goto *tmp$890[TMP$719$2 - 0ull];
		label$1464:;
	}
	label$1454:;
}

static void HEXCLUDELIBSFROMLINK( void )
{
	label$1495:;
	struct $11TSTRSETITEM* I$1;
	void* vr$1 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 704ll) );
	I$1 = (struct $11TSTRSETITEM*)vr$1;
	label$1497:;
	if( I$1 == (struct $11TSTRSETITEM*)0ull ) goto label$1498;
	{
		{
			FBSTRING TMP$745$3;
			fb_StrInit( (void*)&TMP$745$3, -1ll, (void*)I$1, -1ll, 0 );
			int32 vr$6 = fb_StrCompare( (void*)&TMP$745$3, -1ll, (void*)"fbrt0.o", 8ll );
			if( (int64)vr$6 == 0ll ) goto label$1501;
			label$1502:;
			int32 vr$9 = fb_StrCompare( (void*)&TMP$745$3, -1ll, (void*)"fbrt0pic.o", 11ll );
			if( (int64)vr$9 == 0ll ) goto label$1501;
			label$1503:;
			int32 vr$12 = fb_StrCompare( (void*)&TMP$745$3, -1ll, (void*)"fbrt1.o", 8ll );
			if( (int64)vr$12 == 0ll ) goto label$1501;
			label$1504:;
			int32 vr$15 = fb_StrCompare( (void*)&TMP$745$3, -1ll, (void*)"fbrt1pic.o", 11ll );
			if( (int64)vr$15 == 0ll ) goto label$1501;
			label$1505:;
			int32 vr$18 = fb_StrCompare( (void*)&TMP$745$3, -1ll, (void*)"fbrt2.o", 8ll );
			if( (int64)vr$18 == 0ll ) goto label$1501;
			label$1506:;
			int32 vr$21 = fb_StrCompare( (void*)&TMP$745$3, -1ll, (void*)"fbrt2pic.o", 11ll );
			if( (int64)vr$21 != 0ll ) goto label$1500;
			label$1501:;
			{
				*(int64*)((uint8*)&FBC$ + 2752ll) = -1ll;
			}
			goto label$1499;
			label$1500:;
			{
				STRSETDEL( (struct $7TSTRSET*)((uint8*)&FBC$ + 792ll), (FBSTRING*)I$1 );
			}
			label$1507:;
			label$1499:;
			fb_StrDelete( (FBSTRING*)&TMP$745$3 );
		}
		void* vr$27 = LISTGETNEXT( (void*)I$1 );
		I$1 = (struct $11TSTRSETITEM*)vr$27;
	}
	goto label$1497;
	label$1498:;
	label$1496:;
}

static void HPRINTOPTIONS( int64 VERBOSE$1 )
{
	label$1508:;
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
	if( VERBOSE$1 == 0ll ) goto label$1511;
	{
		FBSTRING* vr$11 = fb_StrAllocTempDescZEx( (char*)"  -buildprefix <name>  specify prefix on tool names (as, ar, ld)", 64ll );
		fb_PrintString( 0, (FBSTRING*)vr$11, 1 );
	}
	label$1511:;
	label$1510:;
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
	if( VERBOSE$1 == 0ll ) goto label$1513;
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
	label$1513:;
	label$1512:;
	FBSTRING* vr$27 = fb_StrAllocTempDescZEx( (char*)"  -ex              -e plus RESUME support", 41ll );
	fb_PrintString( 0, (FBSTRING*)vr$27, 1 );
	FBSTRING* vr$28 = fb_StrAllocTempDescZEx( (char*)"  -exx             -ex plus array bounds/null-pointer checking", 62ll );
	fb_PrintString( 0, (FBSTRING*)vr$28, 1 );
	FBSTRING* vr$29 = fb_StrAllocTempDescZEx( (char*)"  -export          Export symbols for dynamic linkage", 53ll );
	fb_PrintString( 0, (FBSTRING*)vr$29, 1 );
	if( VERBOSE$1 == 0ll ) goto label$1515;
	{
		FBSTRING* vr$30 = fb_StrAllocTempDescZEx( (char*)"  -fbgfx           Link to the appropriate libfbgfx variant (normally automatic)", 80ll );
		fb_PrintString( 0, (FBSTRING*)vr$30, 1 );
	}
	label$1515:;
	label$1514:;
	FBSTRING* vr$31 = fb_StrAllocTempDescZEx( (char*)"  -forcelang <name>  Override #lang statements in source code", 61ll );
	fb_PrintString( 0, (FBSTRING*)vr$31, 1 );
	if( VERBOSE$1 == 0ll ) goto label$1517;
	{
		FBSTRING* vr$32 = fb_StrAllocTempDescZEx( (char*)"  -fpmode fast|precise  Select floating-point math accuracy/speed", 65ll );
		fb_PrintString( 0, (FBSTRING*)vr$32, 1 );
		FBSTRING* vr$33 = fb_StrAllocTempDescZEx( (char*)"  -fpu x87|sse|neon  Set target FPU", 35ll );
		fb_PrintString( 0, (FBSTRING*)vr$33, 1 );
	}
	label$1517:;
	label$1516:;
	FBSTRING* vr$34 = fb_StrAllocTempDescZEx( (char*)"  -g               Add debug info, enable __FB_DEBUG__, and enable assert()", 75ll );
	fb_PrintString( 0, (FBSTRING*)vr$34, 1 );
	if( VERBOSE$1 == 0ll ) goto label$1519;
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
	goto label$1518;
	label$1519:;
	{
		FBSTRING* vr$40 = fb_StrAllocTempDescZEx( (char*)"  -gen <backend>   Select code generation backend (gas|gas64|gcc|llvm|clang)", 76ll );
		fb_PrintString( 0, (FBSTRING*)vr$40, 1 );
	}
	label$1518:;
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
	if( VERBOSE$1 == 0ll ) goto label$1521;
	{
		FBSTRING* vr$65 = fb_StrAllocTempDescZEx( (char*)"  -print fork-id   Display compiler's fork identifier (if set)", 62ll );
		fb_PrintString( 0, (FBSTRING*)vr$65, 1 );
		FBSTRING* vr$66 = fb_StrAllocTempDescZEx( (char*)"  -print sha-1     Display compiler's source code commit sha-1 (if known)", 73ll );
		fb_PrintString( 0, (FBSTRING*)vr$66, 1 );
	}
	label$1521:;
	label$1520:;
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
	if( VERBOSE$1 == 0ll ) goto label$1523;
	{
		FBSTRING* vr$79 = fb_StrAllocTempDescZEx( (char*)"  -target <name>   Set cross-compilation target", 47ll );
		fb_PrintString( 0, (FBSTRING*)vr$79, 1 );
	}
	goto label$1522;
	label$1523:;
	{
		FBSTRING* vr$80 = fb_StrAllocTempDescZEx( (char*)"  -target <name>   Set cross-compilation target", 47ll );
		fb_PrintString( 0, (FBSTRING*)vr$80, 1 );
	}
	label$1522:;
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
	if( VERBOSE$1 == 0ll ) goto label$1525;
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
	label$1525:;
	label$1524:;
	FBSTRING* vr$96 = fb_StrAllocTempDescZEx( (char*)"  -Wa <a,b,c>      Pass options to 'as'", 39ll );
	fb_PrintString( 0, (FBSTRING*)vr$96, 1 );
	FBSTRING* vr$97 = fb_StrAllocTempDescZEx( (char*)"  -Wc <a,b,c>      Pass options to 'gcc' (-gen gcc) or 'llc' (-gen llvm)", 72ll );
	fb_PrintString( 0, (FBSTRING*)vr$97, 1 );
	FBSTRING* vr$98 = fb_StrAllocTempDescZEx( (char*)"  -Wl <a,b,c>      Pass options to 'ld'", 39ll );
	fb_PrintString( 0, (FBSTRING*)vr$98, 1 );
	FBSTRING* vr$99 = fb_StrAllocTempDescZEx( (char*)"  -x <file>        Set output executable/library file name", 58ll );
	fb_PrintString( 0, (FBSTRING*)vr$99, 1 );
	if( VERBOSE$1 == 0ll ) goto label$1527;
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
	goto label$1526;
	label$1527:;
	{
		FBSTRING* vr$109 = fb_StrAllocTempDescZEx( (char*)"  -z <option>      Extended options (see fbc -help -v)", 54ll );
		fb_PrintString( 0, (FBSTRING*)vr$109, 1 );
	}
	label$1526:;
	label$1509:;
}

static void HPRINTVERSION( int64 VERBOSE$1 )
{
	FBSTRING TMP$863$1;
	FBSTRING TMP$864$1;
	FBSTRING TMP$865$1;
	FBSTRING TMP$866$1;
	label$1532:;
	FBSTRING CONFIG$1;
	__builtin_memset( &CONFIG$1, 0, 24ll );
	int64 vr$1 = FBGETHOSTBITS(  );
	FBSTRING* vr$2 = fb_LongintToStr( vr$1 );
	FBSTRING* vr$3 = FBGETHOSTID(  );
	__builtin_memset( &TMP$863$1, 0, 24ll );
	FBSTRING* vr$6 = fb_StrConcat( &TMP$863$1, (void*)"FreeBASIC Compiler - Version 1.20.0 (2026-05-15), built for ", 61ll, (void*)vr$3, -1ll );
	__builtin_memset( &TMP$864$1, 0, 24ll );
	FBSTRING* vr$9 = fb_StrConcat( &TMP$864$1, (void*)vr$6, -1ll, (void*)" (", 3ll );
	__builtin_memset( &TMP$865$1, 0, 24ll );
	FBSTRING* vr$12 = fb_StrConcat( &TMP$865$1, (void*)vr$9, -1ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$866$1, 0, 24ll );
	FBSTRING* vr$15 = fb_StrConcat( &TMP$866$1, (void*)vr$12, -1ll, (void*)"bit)", 5ll );
	fb_PrintString( 0, (FBSTRING*)vr$15, 1 );
	FBSTRING* vr$16 = fb_StrAllocTempDescZEx( (char*)"Copyright (C) 2004-2025 The FreeBASIC development team.", 55ll );
	fb_PrintString( 0, (FBSTRING*)vr$16, 1 );
	int64 vr$18 = fb_StrLen( (void*)&CONFIG$1, -1ll );
	if( vr$18 <= 0ll ) goto label$1535;
	{
		fb_PrintString( 0, (FBSTRING*)&CONFIG$1, 1 );
	}
	label$1535:;
	label$1534:;
	if( VERBOSE$1 == 0ll ) goto label$1537;
	{
		FBCPRINTTARGETINFO(  );
		goto label$1539;
		{
			FBSTRING* vr$20 = fb_StrAllocTempDescZEx( (char*)"source sha-1: ", 14ll );
			fb_PrintString( 0, (FBSTRING*)vr$20, 1 );
		}
		label$1539:;
		label$1538:;
		goto label$1541;
		{
			FBSTRING* vr$21 = fb_StrAllocTempDescZEx( (char*)"fbc fork id:  ", 14ll );
			fb_PrintString( 0, (FBSTRING*)vr$21, 1 );
		}
		label$1541:;
		label$1540:;
	}
	label$1537:;
	label$1536:;
	fb_StrDelete( (FBSTRING*)&CONFIG$1 );
	label$1533:;
}

__attribute__(( constructor )) static void _GLOBAL__I( void )
{
	label$1599:;
	_ZN6FBCCTXC1Ev( &FBC$ );
	label$1600:;
}

__attribute__(( destructor )) static void _GLOBAL__D( void )
{
	label$1602:;
	_ZN6FBCCTXD1Ev( &FBC$ );
	label$1603:;
}
