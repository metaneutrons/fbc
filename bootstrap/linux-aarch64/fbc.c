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
	char XBE_TITLE[129];
	int64 NODEFLIBS;
	int64 STATICLINK;
	int64 STRIPSYMBOLS;
	char PREFIX[261];
	char BINPATH[261];
	char INCPATH[261];
	char LIBPATH[261];
	char BUILDPREFIX[261];
	struct $10FBC_OBJINF OBJINF;
};
__FB_STATIC_ASSERT( sizeof( struct $6FBCCTX ) == 3840 );
typedef int64 $11FBCTOOLFLAG;
struct $11FBCTOOLINFO {
	char NAME[16];
	$11FBCTOOLFLAG FLAGS;
	char PATH[261];
};
__FB_STATIC_ASSERT( sizeof( struct $11FBCTOOLINFO ) == 288 );
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
void* fb_ErrorThrowAt( int32, char*, void*, void* );
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
void fb_InitSignals( void );
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
int64 FBCPUTYPEFROMCPUFAMILYID( FBSTRING* );
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
static FBSTRING* FBCQUERYGCC( FBSTRING* );
static FBSTRING* FBCBUILDPATHTOLIBFILE( char* );
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
static struct $11FBCTOOLINFO FBCTOOLTB$[15] = { { "as", 3ll }, { "ar", 3ll }, { "ld", 3ll }, { "gcc", 3ll }, { "llc", 3ll }, { "clang", 3ll }, { "dlltool", 3ll }, { "GoRC", 3ll }, { "windres", 3ll }, { "cxbe", 3ll }, { "dxe3gen", 3ll }, { "emcc", 3ll }, { "emar", 3ll }, { "emcc", 3ll }, { "emcc", 3ll } };
static struct $6FBCCTX FBC$;
static struct $11FBGNUOSINFO GNUOSMAP$[12] = { { (char*)"linux", 2ll }, { (char*)"mingw", 0ll }, { (char*)"djgpp", 3ll }, { (char*)"msdosdjgpp", 3ll }, { (char*)"cygwin", 1ll }, { (char*)"darwin", 9ll }, { (char*)"freebsd", 5ll }, { (char*)"dragonfly", 6ll }, { (char*)"solaris", 7ll }, { (char*)"netbsd", 10ll }, { (char*)"openbsd", 8ll }, { (char*)"xbox", 4ll } };
static struct $13FBGNUARCHINFO GNUARCHMAP$[19] = { { (char*)"i386", 0ll }, { (char*)"i486", 1ll }, { (char*)"i586", 2ll }, { (char*)"i686", 3ll }, { (char*)"x86", 3ll }, { (char*)"x86_64", 13ll }, { (char*)"amd64", 13ll }, { (char*)"armv6", 14ll }, { (char*)"armv6+fp", 15ll }, { (char*)"armv7a", 16ll }, { (char*)"armv7a+fp", 17ll }, { (char*)"arm", 17ll }, { (char*)"aarch64", 18ll }, { (char*)"ppc", 19ll }, { (char*)"powerpc", 19ll }, { (char*)"ppc64  ", 20ll }, { (char*)"powerpc64", 20ll }, { (char*)"ppc64le  ", 21ll }, { (char*)"powerpc64le", 21ll } };
static struct $12FBOSARCHINFO FBOSARCHMAP$[12] = { { (char*)"win32", 0ll, 3ll }, { (char*)"win64", 0ll, 13ll }, { (char*)"dragonfly", 6ll, 13ll }, { (char*)"solaris", 7ll, 13ll }, { (char*)"dos", 3ll, 3ll }, { (char*)"xbox", 4ll, 3ll }, { (char*)"cygwin", 1ll, 18ll }, { (char*)"darwin", 9ll, 18ll }, { (char*)"freebsd", 5ll, 18ll }, { (char*)"linux", 2ll, 18ll }, { (char*)"netbsd", 10ll, 18ll }, { (char*)"openbsd", 8ll, 18ll } };
static struct $18FBC_CMDLINE_OPTION CMDLINEOPTIONTB$[71] = { { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)1, -1ll }, { (boolean)1, (boolean)1, (boolean)0, -1ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)0, -1ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)0, -1ll }, { (boolean)0, (boolean)1, (boolean)1, -1ll }, { (boolean)0, (boolean)1, (boolean)1, -1ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)1, (boolean)1, (boolean)1, -1ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)1, 0ll }, { (boolean)1, (boolean)1, (boolean)1, -1ll }, { (boolean)1, (boolean)1, (boolean)1, -1ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)1, (boolean)1, (boolean)1, -1ll }, { (boolean)0, (boolean)0, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)1, -1ll }, { (boolean)1, (boolean)1, (boolean)1, -1ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)1, -1ll }, { (boolean)1, (boolean)1, (boolean)1, -1ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)0, 0ll }, { (boolean)0, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)0, (boolean)1, (boolean)0, 0ll }, { (boolean)0, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)1, -1ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)0, (boolean)1, (boolean)0, -1ll }, { (boolean)0, (boolean)1, (boolean)0, -1ll }, { (boolean)1, (boolean)1, (boolean)0, -1ll }, { (boolean)1, (boolean)0, (boolean)0, 0ll }, { (boolean)0, (boolean)1, (boolean)1, -1ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)0, (boolean)1, (boolean)1, 0ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)0, (boolean)1, (boolean)0, -1ll }, { (boolean)0, (boolean)1, (boolean)0, 0ll }, { (boolean)0, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)1, -1ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)0, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)1, -1ll }, { (boolean)0, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)0, 0ll }, { (boolean)1, (boolean)1, (boolean)1, -1ll } };

int64 FBCPUTYPEFROMGNUARCHINFO( FBSTRING* ARCH$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$480:;
	{
		int64 I$2;
		I$2 = 0ll;
		label$485:;
		{
			int32 vr$2 = fb_StrCompare( (void*)ARCH$1, -1ll, *(void**)((int64)(struct $13FBGNUARCHINFO*)GNUARCHMAP$ + (I$2 << (4ll & 63ll))), 0ll );
			if( (int64)vr$2 != 0ll ) goto label$487;
			{
				fb$result$1 = *(int64*)(((int64)(struct $13FBGNUARCHINFO*)GNUARCHMAP$ + (I$2 << (4ll & 63ll))) + 8ll);
				goto label$481;
			}
			label$487:;
			label$486:;
		}
		label$483:;
		I$2 = I$2 + 1ll;
		label$482:;
		if( I$2 <= 18ll ) goto label$485;
		label$484:;
	}
	fb$result$1 = -1ll;
	goto label$481;
	label$481:;
	return fb$result$1;
}

void FBCPARSEARGSFROMSTRING( char* ARGS_IN$1, int64 IS_SOURCE$1, int64 IS_FILE$1 )
{
	label$937:;
	FBSTRING ARGS$1;
	fb_StrInit( (void*)&ARGS$1, -1ll, (void*)ARGS_IN$1, 0ll, 0 );
	FBSTRING ARG$1;
	__builtin_memset( &ARG$1, 0, 24ll );
	label$939:;
	{
		int64 LENGTH$2;
		int64 vr$3 = fb_StrLen( (void*)&ARGS$1, -1ll );
		LENGTH$2 = vr$3;
		if( LENGTH$2 != 0ll ) goto label$943;
		{
			goto label$940;
		}
		label$943:;
		label$942:;
		int64 I$2;
		I$2 = 0ll;
		int64 QUOTECH$2;
		QUOTECH$2 = 0ll;
		label$944:;
		if( I$2 >= LENGTH$2 ) goto label$945;
		{
			int64 CH$3;
			CH$3 = (int64)*(uint8*)((uint8*)*(char**)&ARGS$1 + I$2);
			{
				uint64 TMP$462$4;
				TMP$462$4 = (uint64)CH$3;
				goto label$947;
				label$948:;
				{
					if( QUOTECH$2 != 0ll ) goto label$950;
					{
						goto label$945;
					}
					label$950:;
					label$949:;
				}
				goto label$946;
				label$951:;
				{
					if( QUOTECH$2 != CH$3 ) goto label$953;
					{
						QUOTECH$2 = 0ll;
					}
					goto label$952;
					label$953:;
					if( QUOTECH$2 != 0ll ) goto label$954;
					{
						QUOTECH$2 = CH$3;
					}
					label$954:;
					label$952:;
				}
				goto label$946;
				label$947:;
				static const void* tmp$464[8ll] = {
					&&label$948,
					&&label$946,
					&&label$951,
					&&label$946,
					&&label$946,
					&&label$946,
					&&label$946,
					&&label$951,
				};
				if( (TMP$462$4 - 32ull) > 7ull ) goto label$946;
				goto *tmp$464[TMP$462$4 - 32ull];
				label$946:;
			}
			I$2 = I$2 + 1ll;
		}
		goto label$944;
		label$945:;
		if( I$2 != 0ll ) goto label$956;
		{
			I$2 = 1ll;
		}
		goto label$955;
		label$956:;
		{
			FBSTRING* vr$8 = fb_LEFT( (FBSTRING*)&ARGS$1, I$2 );
			fb_StrAssign( (void*)&ARG$1, -1ll, (void*)vr$8, -1ll, 0 );
			FBSTRING* vr$11 = fb_TRIM( (FBSTRING*)&ARG$1 );
			fb_StrAssign( (void*)&ARG$1, -1ll, (void*)vr$11, -1ll, 0 );
			FBSTRING* vr$14 = STRUNQUOTE( &ARG$1 );
			fb_StrAssign( (void*)&ARG$1, -1ll, (void*)vr$14, -1ll, 0 );
			HANDLEARG( &ARG$1, IS_SOURCE$1, IS_FILE$1 );
		}
		label$955:;
		FBSTRING* vr$19 = fb_RIGHT( (FBSTRING*)&ARGS$1, LENGTH$2 - I$2 );
		fb_StrAssign( (void*)&ARGS$1, -1ll, (void*)vr$19, -1ll, 0 );
	}
	label$941:;
	goto label$939;
	label$940:;
	fb_StrDelete( (FBSTRING*)&ARG$1 );
	fb_StrDelete( (FBSTRING*)&ARGS$1 );
	label$938:;
}

int32 main( int32 __FB_ARGC__$0, char** __FB_ARGV__$0 )
{
	int32 fb$result$0;
	__builtin_memset( &fb$result$0, 0, 4ll );
	fb_Init( __FB_ARGC__$0, (char**)__FB_ARGV__$0, 0 );
	fb_InitSignals(  );
	label$0:;
	FBCINIT(  );
	if( (int64)__FB_ARGC__$0 != 1ll ) goto label$1400;
	{
		HPRINTOPTIONS( 0ll );
		FBCEND( 1ll );
	}
	label$1400:;
	label$1399:;
	HPARSEARGS( (int64)__FB_ARGC__$0, (char**)__FB_ARGV__$0 );
	HCHECKARGS(  );
	if( *(int64*)((uint8*)&FBC$ + 120ll) == 0ll ) goto label$1402;
	{
		HPRINTVERSION( *(int64*)((uint8*)&FBC$ + 112ll) );
		FBCEND( 0ll );
	}
	label$1402:;
	label$1401:;
	if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$1404;
	{
		*(int64*)((uint8*)&FBC$ + 120ll) = -1ll;
		HPRINTVERSION( 0ll );
	}
	label$1404:;
	label$1403:;
	if( *(int64*)((uint8*)&FBC$ + 128ll) == 0ll ) goto label$1406;
	{
		HPRINTOPTIONS( *(int64*)((uint8*)&FBC$ + 112ll) );
		FBCEND( 1ll );
	}
	label$1406:;
	label$1405:;
	label$1407:;
	{
		FBSTRING TMP$789$1;
		FBCDETERMINEPREFIX(  );
		FBCSETUPCOMPILERPATHS(  );
		if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$1411;
		{
			FBCPRINTTARGETINFO(  );
		}
		label$1411:;
		label$1410:;
		__builtin_memset( &TMP$789$1, 0, 24ll );
		fb_StrAssign( (void*)&TMP$789$1, -1ll, (void*)((uint8*)&FBC$ + 3034ll), 261ll, 0 );
		FBADDINCLUDEPATH( &TMP$789$1 );
		fb_StrDelete( (FBSTRING*)&TMP$789$1 );
		int64 HAVE_INPUT_FILES$1;
		void* vr$9 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 144ll) );
		void* vr$12 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 400ll) );
		void* vr$16 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 528ll) );
		void* vr$20 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 464ll) );
		HAVE_INPUT_FILES$1 = (((int64)-(vr$9 != (void*)0ull) | (int64)-(vr$12 != (void*)0ull)) | (int64)-(vr$16 != (void*)0ull)) | (int64)-(vr$20 != (void*)0ull);
		if( *(int64*)((uint8*)&FBC$ + 136ll) < 0ll ) goto label$1413;
		{
			{
				int64 TMP$790$3;
				TMP$790$3 = *(int64*)((uint8*)&FBC$ + 136ll);
				if( TMP$790$3 != 0ll ) goto label$1415;
				label$1416:;
				{
					FBSTRING* vr$23 = FBGETHOSTID(  );
					fb_PrintString( 0, (FBSTRING*)vr$23, 1 );
				}
				goto label$1414;
				label$1415:;
				if( TMP$790$3 != 1ll ) goto label$1417;
				label$1418:;
				{
					FBSTRING* vr$24 = FBGETTARGETID(  );
					fb_PrintString( 0, (FBSTRING*)vr$24, 1 );
				}
				goto label$1414;
				label$1417:;
				if( TMP$790$3 != 2ll ) goto label$1419;
				label$1420:;
				{
					if( HAVE_INPUT_FILES$1 == 0ll ) goto label$1422;
					{
						FBCDETERMINEMAINNAME(  );
					}
					label$1422:;
					label$1421:;
					HSETOUTNAME(  );
					FBSTRING* vr$26 = fb_StrAllocTempDescZ( (char*)((uint8*)&FBC$ + 968ll) );
					fb_PrintString( 0, (FBSTRING*)vr$26, 1 );
				}
				goto label$1414;
				label$1419:;
				if( TMP$790$3 != 3ll ) goto label$1423;
				label$1424:;
				{
					FBSTRING* vr$28 = fb_StrAllocTempDescZ( (char*)((uint8*)&FBC$ + 3295ll) );
					fb_PrintString( 0, (FBSTRING*)vr$28, 1 );
				}
				goto label$1414;
				label$1423:;
				if( TMP$790$3 != 4ll ) goto label$1425;
				label$1426:;
				{
					FBSTRING* vr$29 = fb_StrAllocTempDescZEx( (char*)"", 0ll );
					fb_PrintString( 0, (FBSTRING*)vr$29, 1 );
				}
				label$1425:;
				label$1414:;
			}
			FBCEND( 0ll );
		}
		label$1413:;
		label$1412:;
		FBCDETERMINEMAINNAME(  );
		if( HAVE_INPUT_FILES$1 != 0ll ) goto label$1428;
		{
			HPRINTOPTIONS( *(int64*)((uint8*)&FBC$ + 112ll) );
			FBCEND( 1ll );
		}
		label$1428:;
		label$1427:;
		HCOMPILEMODULES(  );
		int64 vr$30 = FBSHOULDRESTART(  );
		if( vr$30 != 0ll ) goto label$1430;
		{
			goto label$1408;
		}
		label$1430:;
		label$1429:;
		FBRESTARTENDREQUEST( 8ll );
		ERRPREINIT(  );
		HCHECKARGS(  );
		if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$1432;
		{
			FBSTRING* vr$31 = fb_StrAllocTempDescZEx( (char*)"Restarting fbc ...", 18ll );
			fb_PrintString( 0, (FBSTRING*)vr$31, 1 );
		}
		label$1432:;
		label$1431:;
	}
	label$1409:;
	goto label$1407;
	label$1408:;
	int64 vr$32 = HCOMPILEXPM(  );
	if( vr$32 != 0ll ) goto label$1434;
	{
		FBCEND( 1ll );
	}
	label$1434:;
	label$1433:;
	if( *(int64*)((uint8*)&FBC$ + 72ll) == 0ll ) goto label$1436;
	{
		FBCEND( 0ll );
	}
	label$1436:;
	label$1435:;
	int64 vr$33 = FBGETOPTION( 2ll );
	int64 vr$35 = FBGETOPTION( 2ll );
	if( ((int64)-(vr$33 != 0ll) & (int64)-(vr$35 != 3ll)) == 0ll ) goto label$1438;
	{
		HCOMPILESTAGE2MODULES(  );
	}
	label$1438:;
	label$1437:;
	if( *(int64*)((uint8*)&FBC$ + 88ll) == 0ll ) goto label$1440;
	{
		FBCEND( 0ll );
	}
	label$1440:;
	label$1439:;
	HASSEMBLEMODULES(  );
	HASSEMBLERCS(  );
	HASSEMBLEXPM(  );
	int64 vr$38 = FBGETOPTION( 0ll );
	if( vr$38 != 3ll ) goto label$1442;
	{
		FBCEND( 0ll );
	}
	label$1442:;
	label$1441:;
	HSETDEFAULTLIBPATHS(  );
	int64 vr$39 = FBGETOPTION( 39ll );
	int64 vr$40 = FBISCROSSCOMP(  );
	if( (vr$39 & ~vr$40) == 0ll ) goto label$1444;
	{
		HCOLLECTOBJINFO(  );
	}
	label$1444:;
	label$1443:;
	int64 vr$43 = FBGETOPTION( 0ll );
	if( vr$43 != 1ll ) goto label$1446;
	{
		int64 vr$44 = HARCHIVEFILES(  );
		if( vr$44 != 0ll ) goto label$1448;
		{
			FBCEND( 1ll );
		}
		label$1448:;
		label$1447:;
		FBCEND( 0ll );
	}
	label$1446:;
	label$1445:;
	if( *(int64*)((uint8*)&FBC$ + 2488ll) != 0ll ) goto label$1450;
	{
		HADDDEFAULTLIBS(  );
	}
	label$1450:;
	label$1449:;
	HEXCLUDELIBSFROMLINK(  );
	int64 vr$45 = HLINKFILES(  );
	if( vr$45 != 0ll ) goto label$1452;
	{
		FBCEND( 1ll );
	}
	label$1452:;
	label$1451:;
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
	__builtin_memset( (char*)((uint8*)THIS$1 + 2354ll), 0, 129ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 2488ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 2496ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 2504ll), 0, 8ll );
	__builtin_memset( (char*)((uint8*)THIS$1 + 2512ll), 0, 261ll );
	__builtin_memset( (char*)((uint8*)THIS$1 + 2773ll), 0, 261ll );
	__builtin_memset( (char*)((uint8*)THIS$1 + 3034ll), 0, 261ll );
	__builtin_memset( (char*)((uint8*)THIS$1 + 3295ll), 0, 261ll );
	__builtin_memset( (char*)((uint8*)THIS$1 + 3556ll), 0, 261ll );
	__builtin_memset( (struct $10FBC_OBJINF*)((uint8*)THIS$1 + 3824ll), 0, 16ll );
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
	fb_StrAssign( (void*)((uint8*)THIS$1 + 2354ll), 129ll, (void*)((uint8*)__FB_RHS__$1 + 2354ll), 129ll, 0 );
	*(int64*)((uint8*)THIS$1 + 2488ll) = *(int64*)((uint8*)__FB_RHS__$1 + 2488ll);
	*(int64*)((uint8*)THIS$1 + 2496ll) = *(int64*)((uint8*)__FB_RHS__$1 + 2496ll);
	*(int64*)((uint8*)THIS$1 + 2504ll) = *(int64*)((uint8*)__FB_RHS__$1 + 2504ll);
	fb_StrAssign( (void*)((uint8*)THIS$1 + 2512ll), 261ll, (void*)((uint8*)__FB_RHS__$1 + 2512ll), 261ll, 0 );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 2773ll), 261ll, (void*)((uint8*)__FB_RHS__$1 + 2773ll), 261ll, 0 );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 3034ll), 261ll, (void*)((uint8*)__FB_RHS__$1 + 3034ll), 261ll, 0 );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 3295ll), 261ll, (void*)((uint8*)__FB_RHS__$1 + 3295ll), 261ll, 0 );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 3556ll), 261ll, (void*)((uint8*)__FB_RHS__$1 + 3556ll), 261ll, 0 );
	__builtin_memcpy( (struct $10FBC_OBJINF*)((uint8*)THIS$1 + 3824ll), (struct $10FBC_OBJINF*)((uint8*)__FB_RHS__$1 + 3824ll), 16 );
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
	*($7FB_LANG*)((uint8*)&FBC$ + 3824ll) = vr$10;
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
		FBSTRING TMP$40$2;
		FBSTRING TMP$41$2;
		FBSTRING TMP$42$2;
		FBSTRING* vr$4 = HSTRIPPATH( (char*)((uint8*)&FBC$ + 1229ll) );
		FBSTRING* vr$6 = HSTRIPFILENAME( (char*)((uint8*)&FBC$ + 1229ll) );
		__builtin_memset( &TMP$40$2, 0, 24ll );
		FBSTRING* vr$9 = fb_StrConcat( &TMP$40$2, (void*)vr$6, -1ll, (void*)"lib", 4ll );
		__builtin_memset( &TMP$41$2, 0, 24ll );
		FBSTRING* vr$12 = fb_StrConcat( &TMP$41$2, (void*)vr$9, -1ll, (void*)vr$4, -1ll );
		__builtin_memset( &TMP$42$2, 0, 24ll );
		FBSTRING* vr$15 = fb_StrConcat( &TMP$42$2, (void*)vr$12, -1ll, (void*)".a", 3ll );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 968ll), 261ll, (void*)vr$15, -1ll, 0 );
		goto label$37;
	}
	label$41:;
	label$40:;
	fb_StrAssign( (void*)((uint8*)&FBC$ + 968ll), 261ll, (void*)((uint8*)&FBC$ + 1229ll), 261ll, 0 );
	{
		int64 TMP$43$2;
		int64 vr$19 = FBGETOPTION( 0ll );
		TMP$43$2 = vr$19;
		if( TMP$43$2 != 0ll ) goto label$43;
		label$44:;
		{
			{
				int64 TMP$44$4;
				int64 vr$20 = FBGETOPTION( 3ll );
				TMP$44$4 = vr$20;
				if( TMP$44$4 == 3ll ) goto label$47;
				label$48:;
				if( TMP$44$4 == 1ll ) goto label$47;
				label$49:;
				if( TMP$44$4 == 0ll ) goto label$47;
				label$50:;
				if( TMP$44$4 != 4ll ) goto label$46;
				label$47:;
				{
					FBSTRING TMP$46$5;
					__builtin_memset( &TMP$46$5, 0, 24ll );
					FBSTRING* vr$24 = fb_StrConcat( &TMP$46$5, (void*)((uint8*)&FBC$ + 968ll), 261ll, (void*)".exe", 5ll );
					fb_StrAssign( (void*)((uint8*)&FBC$ + 968ll), 261ll, (void*)vr$24, -1ll, 0 );
				}
				goto label$45;
				label$46:;
				if( TMP$44$4 != 11ll ) goto label$51;
				label$52:;
				{
					FBSTRING TMP$48$5;
					__builtin_memset( &TMP$48$5, 0, 24ll );
					FBSTRING* vr$29 = fb_StrConcat( &TMP$48$5, (void*)((uint8*)&FBC$ + 968ll), 261ll, (void*)".html", 6ll );
					fb_StrAssign( (void*)((uint8*)&FBC$ + 968ll), 261ll, (void*)vr$29, -1ll, 0 );
				}
				label$51:;
				label$45:;
			}
		}
		goto label$42;
		label$43:;
		if( TMP$43$2 != 2ll ) goto label$53;
		label$54:;
		{
			{
				int64 TMP$49$4;
				int64 vr$31 = FBGETOPTION( 3ll );
				TMP$49$4 = vr$31;
				if( TMP$49$4 == 1ll ) goto label$57;
				label$58:;
				if( TMP$49$4 != 0ll ) goto label$56;
				label$57:;
				{
					FBSTRING TMP$51$5;
					__builtin_memset( &TMP$51$5, 0, 24ll );
					FBSTRING* vr$35 = fb_StrConcat( &TMP$51$5, (void*)((uint8*)&FBC$ + 968ll), 261ll, (void*)".dll", 5ll );
					fb_StrAssign( (void*)((uint8*)&FBC$ + 968ll), 261ll, (void*)vr$35, -1ll, 0 );
				}
				goto label$55;
				label$56:;
				if( TMP$49$4 == 2ll ) goto label$60;
				label$61:;
				if( TMP$49$4 == 9ll ) goto label$60;
				label$62:;
				if( TMP$49$4 == 5ll ) goto label$60;
				label$63:;
				if( TMP$49$4 == 8ll ) goto label$60;
				label$64:;
				if( TMP$49$4 == 10ll ) goto label$60;
				label$65:;
				if( TMP$49$4 == 6ll ) goto label$60;
				label$66:;
				if( TMP$49$4 != 7ll ) goto label$59;
				label$60:;
				{
					FBSTRING TMP$53$5;
					FBSTRING TMP$54$5;
					FBSTRING TMP$55$5;
					FBSTRING* vr$38 = HSTRIPPATH( (char*)((uint8*)&FBC$ + 968ll) );
					FBSTRING* vr$40 = HSTRIPFILENAME( (char*)((uint8*)&FBC$ + 968ll) );
					__builtin_memset( &TMP$53$5, 0, 24ll );
					FBSTRING* vr$43 = fb_StrConcat( &TMP$53$5, (void*)vr$40, -1ll, (void*)"lib", 4ll );
					__builtin_memset( &TMP$54$5, 0, 24ll );
					FBSTRING* vr$46 = fb_StrConcat( &TMP$54$5, (void*)vr$43, -1ll, (void*)vr$38, -1ll );
					__builtin_memset( &TMP$55$5, 0, 24ll );
					FBSTRING* vr$49 = fb_StrConcat( &TMP$55$5, (void*)vr$46, -1ll, (void*)".so", 4ll );
					fb_StrAssign( (void*)((uint8*)&FBC$ + 968ll), 261ll, (void*)vr$49, -1ll, 0 );
				}
				goto label$55;
				label$59:;
				if( TMP$49$4 != 3ll ) goto label$67;
				label$68:;
				{
					FBSTRING TMP$57$5;
					__builtin_memset( &TMP$57$5, 0, 24ll );
					FBSTRING* vr$54 = fb_StrConcat( &TMP$57$5, (void*)((uint8*)&FBC$ + 968ll), 261ll, (void*)".dxe", 5ll );
					fb_StrAssign( (void*)((uint8*)&FBC$ + 968ll), 261ll, (void*)vr$54, -1ll, 0 );
				}
				label$67:;
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
	label$69:;
	struct $11TSTRSETITEM* FILE$1;
	void* vr$1 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 312ll) );
	FILE$1 = (struct $11TSTRSETITEM*)vr$1;
	label$71:;
	if( FILE$1 == (struct $11TSTRSETITEM*)0ull ) goto label$72;
	{
		int32 vr$4 = fb_FileKill( (FBSTRING*)FILE$1 );
		if( (int64)vr$4 == 0ll ) goto label$74;
		{
		}
		label$74:;
		label$73:;
		void* vr$6 = LISTGETNEXT( (void*)FILE$1 );
		FILE$1 = (struct $11TSTRSETITEM*)vr$6;
	}
	goto label$71;
	label$72:;
	fb_End( (int32)ERRNUM$1 );
	label$70:;
}

static void FBCADDTEMP( FBSTRING* FILE$1 )
{
	label$75:;
	STRSETADD( (struct $7TSTRSET*)((uint8*)&FBC$ + 312ll), FILE$1, 0ll );
	label$76:;
}

static void FBCREMOVETEMP( FBSTRING* FILE$1 )
{
	label$77:;
	STRSETDEL( (struct $7TSTRSET*)((uint8*)&FBC$ + 312ll), (FBSTRING*)FILE$1 );
	label$78:;
}

static FBSTRING* FBCADDOBJ( FBSTRING* FILE$1 )
{
	FBSTRING* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$79:;
	FBSTRING* S$1;
	void* vr$2 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&FBC$ + 400ll) );
	S$1 = (FBSTRING*)vr$2;
	fb_StrAssign( (void*)S$1, -1ll, (void*)FILE$1, -1ll, 0 );
	fb$result$1 = S$1;
	label$80:;
	return fb$result$1;
}

static FBSTRING* HGET1STOUTPUTLINEFROMCOMMAND( FBSTRING* CMD$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$81:;
	int32 F$1;
	int32 vr$1 = fb_FileFree(  );
	F$1 = vr$1;
	int32 vr$2 = fb_FileOpenPipe( (FBSTRING*)CMD$1, 2u, 0u, 0u, F$1, 0, (char*)0ull );
	if( (int64)vr$2 == 0ll ) goto label$84;
	{
		goto label$82;
	}
	label$84:;
	label$83:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	fb_FileInput( F$1 );
	fb_InputString( (void*)&LN$1, -1ll, 0 );
	int32 vr$6 = fb_FileClose( F$1 );
	if( (int64)vr$6 == 0ll ) goto label$85;
	void* vr$8 = fb_ErrorThrowAt( 303, (char*)"src/compiler/fbc.bas", (void*)0ull, (void*)0ull );
	goto *vr$8;
	label$85:;
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)&LN$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&LN$1 );
	goto label$82;
	fb_StrDelete( (FBSTRING*)&LN$1 );
	label$82:;
	FBSTRING* vr$14 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$14;
}

static FBSTRING* FBCQUERYGCC( FBSTRING* OPTIONS$1 )
{
	FBSTRING TMP$62$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$86:;
	FBSTRING PATH$1;
	__builtin_memset( &PATH$1, 0, 24ll );
	FBCFINDBIN( 3ll, &PATH$1 );
	{
		int64 TMP$59$2;
		int64 vr$3 = FBGETCPUFAMILY(  );
		TMP$59$2 = vr$3;
		if( TMP$59$2 != 0ll ) goto label$89;
		label$90:;
		{
			fb_StrConcatAssign( (void*)&PATH$1, -1ll, (void*)" -m32", 6ll, 0 );
		}
		goto label$88;
		label$89:;
		if( TMP$59$2 != 1ll ) goto label$91;
		label$92:;
		{
			fb_StrConcatAssign( (void*)&PATH$1, -1ll, (void*)" -m64", 6ll, 0 );
		}
		goto label$88;
		label$91:;
		if( TMP$59$2 != 4ll ) goto label$93;
		label$94:;
		{
			fb_StrConcatAssign( (void*)&PATH$1, -1ll, (void*)" -m32", 6ll, 0 );
		}
		goto label$88;
		label$93:;
		if( TMP$59$2 == 5ll ) goto label$96;
		label$97:;
		if( TMP$59$2 != 6ll ) goto label$95;
		label$96:;
		{
			fb_StrConcatAssign( (void*)&PATH$1, -1ll, (void*)" -m64", 6ll, 0 );
		}
		label$95:;
		label$88:;
	}
	__builtin_memset( &TMP$62$1, 0, 24ll );
	FBSTRING* vr$11 = fb_StrConcat( &TMP$62$1, (void*)&PATH$1, -1ll, (void*)OPTIONS$1, -1ll );
	fb_StrAssign( (void*)&PATH$1, -1ll, (void*)vr$11, -1ll, 0 );
	int64 FF$1;
	int32 vr$13 = fb_FileFree(  );
	FF$1 = (int64)vr$13;
	int32 vr$17 = fb_FileOpenPipe( (FBSTRING*)&PATH$1, 2u, 0u, 0u, (int32)FF$1, 0, (char*)0ull );
	if( (int64)vr$17 == 0ll ) goto label$99;
	{
		fb_StrDelete( (FBSTRING*)&PATH$1 );
		goto label$87;
	}
	label$99:;
	label$98:;
	FBSTRING RET$1;
	__builtin_memset( &RET$1, 0, 24ll );
	fb_FileInput( (int32)FF$1 );
	fb_InputString( (void*)&RET$1, -1ll, 0 );
	int32 vr$24 = fb_FileClose( (int32)FF$1 );
	if( (int64)vr$24 == 0ll ) goto label$100;
	void* vr$26 = fb_ErrorThrowAt( 334, (char*)"src/compiler/fbc.bas", (void*)0ull, (void*)0ull );
	goto *vr$26;
	label$100:;
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)&RET$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&RET$1 );
	fb_StrDelete( (FBSTRING*)&PATH$1 );
	goto label$87;
	fb_StrDelete( (FBSTRING*)&RET$1 );
	fb_StrDelete( (FBSTRING*)&PATH$1 );
	label$87:;
	FBSTRING* vr$34 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$34;
}

static FBSTRING* FBCBUILDPATHTOLIBFILE( char* FILE$1 )
{
	FBSTRING TMP$63$1;
	FBSTRING TMP$64$1;
	FBSTRING TMP$67$1;
	FBSTRING TMP$68$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$101:;
	FBSTRING FOUND$1;
	__builtin_memset( &FOUND$1, 0, 24ll );
	__builtin_memset( &TMP$63$1, 0, 24ll );
	FBSTRING* vr$5 = fb_StrConcat( &TMP$63$1, (void*)((uint8*)&FBC$ + 3295ll), 261ll, (void*)"/", 2ll );
	__builtin_memset( &TMP$64$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$64$1, (void*)vr$5, -1ll, (void*)FILE$1, 0ll );
	fb_StrAssign( (void*)&FOUND$1, -1ll, (void*)vr$8, -1ll, 0 );
	int64 vr$10 = HFILEEXISTS( (char*)*(char**)&FOUND$1 );
	if( vr$10 == 0ll ) goto label$104;
	{
		fb_StrInit( (void*)&fb$result$1, -1ll, (void*)&FOUND$1, -1ll, 0 );
		fb_StrDelete( (FBSTRING*)&FOUND$1 );
		goto label$102;
	}
	label$104:;
	label$103:;
	FBSTRING PATH$1;
	__builtin_memset( &PATH$1, 0, 24ll );
	FBCFINDBIN( 3ll, &PATH$1 );
	{
		int64 TMP$65$2;
		int64 vr$16 = FBGETCPUFAMILY(  );
		TMP$65$2 = vr$16;
		if( TMP$65$2 != 0ll ) goto label$106;
		label$107:;
		{
			fb_StrConcatAssign( (void*)&PATH$1, -1ll, (void*)" -m32", 6ll, 0 );
		}
		goto label$105;
		label$106:;
		if( TMP$65$2 != 1ll ) goto label$108;
		label$109:;
		{
			fb_StrConcatAssign( (void*)&PATH$1, -1ll, (void*)" -m64", 6ll, 0 );
		}
		goto label$105;
		label$108:;
		if( TMP$65$2 != 4ll ) goto label$110;
		label$111:;
		{
			fb_StrConcatAssign( (void*)&PATH$1, -1ll, (void*)" -m32", 6ll, 0 );
		}
		goto label$105;
		label$110:;
		if( TMP$65$2 == 5ll ) goto label$113;
		label$114:;
		if( TMP$65$2 != 6ll ) goto label$112;
		label$113:;
		{
			fb_StrConcatAssign( (void*)&PATH$1, -1ll, (void*)" -m64", 6ll, 0 );
		}
		label$112:;
		label$105:;
	}
	__builtin_memset( &TMP$67$1, 0, 24ll );
	FBSTRING* vr$23 = fb_StrConcat( &TMP$67$1, (void*)" -print-file-name=", 19ll, (void*)FILE$1, 0ll );
	__builtin_memset( &TMP$68$1, 0, 24ll );
	FBSTRING* vr$27 = fb_StrConcat( &TMP$68$1, (void*)&PATH$1, -1ll, (void*)vr$23, -1ll );
	fb_StrAssign( (void*)&PATH$1, -1ll, (void*)vr$27, -1ll, 0 );
	FBSTRING* vr$30 = HGET1STOUTPUTLINEFROMCOMMAND( &PATH$1 );
	fb_StrAssign( (void*)&FOUND$1, -1ll, (void*)vr$30, -1ll, 0 );
	int64 vr$33 = fb_StrLen( (void*)&FOUND$1, -1ll );
	if( vr$33 != 0ll ) goto label$116;
	{
		fb_StrDelete( (FBSTRING*)&PATH$1 );
		fb_StrDelete( (FBSTRING*)&FOUND$1 );
		goto label$102;
	}
	label$116:;
	label$115:;
	FBSTRING* vr$36 = HSTRIPPATH( (char*)*(char**)&FOUND$1 );
	int32 vr$38 = fb_StrCompare( (void*)&FOUND$1, -1ll, (void*)vr$36, -1ll );
	if( (int64)vr$38 != 0ll ) goto label$118;
	{
		fb_StrDelete( (FBSTRING*)&PATH$1 );
		fb_StrDelete( (FBSTRING*)&FOUND$1 );
		goto label$102;
	}
	label$118:;
	label$117:;
	fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&FOUND$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&PATH$1 );
	fb_StrDelete( (FBSTRING*)&FOUND$1 );
	label$102:;
	FBSTRING* vr$47 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$47;
}

static FBSTRING* FBCFINDLIBFILE( char* FILE$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$119:;
	FBSTRING FOUND$1;
	__builtin_memset( &FOUND$1, 0, 24ll );
	FBSTRING* vr$2 = FBCBUILDPATHTOLIBFILE( FILE$1 );
	fb_StrAssign( (void*)&FOUND$1, -1ll, (void*)vr$2, -1ll, 0 );
	int64 vr$5 = fb_StrLen( (void*)&FOUND$1, -1ll );
	if( vr$5 <= 0ll ) goto label$122;
	{
		int64 vr$6 = HFILEEXISTS( (char*)*(char**)&FOUND$1 );
		if( vr$6 != 0ll ) goto label$124;
		{
			fb_StrAssign( (void*)&FOUND$1, -1ll, (void*)"", 1ll, 0 );
		}
		label$124:;
		label$123:;
	}
	label$122:;
	label$121:;
	fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&FOUND$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&FOUND$1 );
	label$120:;
	FBSTRING* vr$12 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$12;
}

static void FBCADDDEFLIBPATH( FBSTRING* PATH$1 )
{
	label$125:;
	STRSETADD( (struct $7TSTRSET*)((uint8*)&FBC$ + 880ll), PATH$1, -1ll );
	label$126:;
}

static void FBCADDLIBPATHFOR( char* LIBNAME$1 )
{
	FBSTRING TMP$69$1;
	label$127:;
	FBSTRING PATH$1;
	__builtin_memset( &PATH$1, 0, 24ll );
	__builtin_memset( &TMP$69$1, 0, 24ll );
	FBSTRING* vr$2 = FBCBUILDPATHTOLIBFILE( LIBNAME$1 );
	fb_StrAssign( (void*)&TMP$69$1, -1ll, (void*)vr$2, -1ll, 0 );
	FBSTRING* vr$4 = HSTRIPFILENAME( (char*)*(char**)&TMP$69$1 );
	fb_StrAssign( (void*)&PATH$1, -1ll, (void*)vr$4, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&TMP$69$1 );
	FBSTRING* vr$8 = PATHSTRIPDIV( &PATH$1 );
	fb_StrAssign( (void*)&PATH$1, -1ll, (void*)vr$8, -1ll, 0 );
	int64 vr$11 = fb_StrLen( (void*)&PATH$1, -1ll );
	if( vr$11 <= 0ll ) goto label$130;
	{
		FBCADDDEFLIBPATH( &PATH$1 );
	}
	label$130:;
	label$129:;
	fb_StrDelete( (FBSTRING*)&PATH$1 );
	label$128:;
}

static void FBCFINDBIN( int64 TOOL$1, FBSTRING* PATH$1 )
{
	label$131:;
	if( (*(int64*)(((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 288ll)) + 16ll) & 4ll) == 0ll ) goto label$134;
	{
		fb_StrAssign( (void*)PATH$1, -1ll, (void*)(((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 288ll)) + 24ll), 261ll, 0 );
		goto label$132;
	}
	label$134:;
	label$133:;
	*($11FBCTOOLFLAG*)(((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 288ll)) + 16ll) = *(int64*)(((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 288ll)) + 16ll) & -9ll;
	if( (*(int64*)(((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 288ll)) + 16ll) & 2ll) == 0ll ) goto label$136;
	{
		FBSTRING* vr$11 = fb_StrAllocTempDescZ( (char*)((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 288ll)) );
		FBSTRING* vr$12 = fb_StrUcase2( (FBSTRING*)vr$11, 0 );
		FBSTRING* vr$13 = fb_GetEnviron( (FBSTRING*)vr$12 );
		fb_StrAssign( (void*)PATH$1, -1ll, (void*)vr$13, -1ll, 0 );
	}
	label$136:;
	label$135:;
	int64 vr$14 = fb_StrLen( (void*)PATH$1, -1ll );
	if( vr$14 != 0ll ) goto label$138;
	{
		FBSTRING TMP$70$2;
		FBSTRING TMP$71$2;
		__builtin_memset( &TMP$70$2, 0, 24ll );
		FBSTRING* vr$20 = fb_StrConcat( &TMP$70$2, (void*)((uint8*)&FBC$ + 2773ll), 261ll, (void*)((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 288ll)), 16ll );
		__builtin_memset( &TMP$71$2, 0, 24ll );
		FBSTRING* vr$23 = fb_StrConcat( &TMP$71$2, (void*)vr$20, -1ll, (void*)"", 1ll );
		fb_StrAssign( (void*)PATH$1, -1ll, (void*)vr$23, -1ll, 0 );
		int64 vr$25 = HFILEEXISTS( (char*)*(char**)PATH$1 );
		if( vr$25 != 0ll ) goto label$140;
		{
			{
				int64 TMP$72$4;
				int64 vr$26 = FBGETOPTION( 2ll );
				TMP$72$4 = vr$26;
				if( TMP$72$4 != 1ll ) goto label$142;
				label$143:;
				{
					if( TOOL$1 != 0ll ) goto label$145;
					{
						FBSTRING TMP$74$6;
						__builtin_memset( &TMP$74$6, 0, 24ll );
						fb_StrAssign( (void*)&TMP$74$6, -1ll, (void*)" -print-prog-name=as", 21ll, 0 );
						FBSTRING* vr$30 = FBCQUERYGCC( &TMP$74$6 );
						fb_StrAssign( (void*)PATH$1, -1ll, (void*)vr$30, -1ll, 0 );
						fb_StrDelete( (FBSTRING*)&TMP$74$6 );
					}
					goto label$144;
					label$145:;
					if( TOOL$1 != 2ll ) goto label$146;
					{
						FBSTRING TMP$76$6;
						__builtin_memset( &TMP$76$6, 0, 24ll );
						fb_StrAssign( (void*)&TMP$76$6, -1ll, (void*)" -print-prog-name=ld", 21ll, 0 );
						FBSTRING* vr$35 = FBCQUERYGCC( &TMP$76$6 );
						fb_StrAssign( (void*)PATH$1, -1ll, (void*)vr$35, -1ll, 0 );
						fb_StrDelete( (FBSTRING*)&TMP$76$6 );
					}
					label$146:;
					label$144:;
				}
				goto label$141;
				label$142:;
				if( TMP$72$4 == 0ll ) goto label$148;
				label$149:;
				if( TMP$72$4 != 3ll ) goto label$147;
				label$148:;
				{
				}
				label$147:;
				label$141:;
			}
		}
		label$140:;
		label$139:;
		int64 vr$38 = HFILEEXISTS( (char*)*(char**)PATH$1 );
		if( vr$38 != 0ll ) goto label$151;
		{
			int64 vr$39 = FBGETOPTION( 3ll );
			if( vr$39 == 11ll ) goto label$153;
			{
				int64 vr$41 = fb_StrLen( (void*)((uint8*)&FBC$ + 3556ll), 261ll );
				if( vr$41 <= 0ll ) goto label$155;
				{
					FBSTRING TMP$77$5;
					FBSTRING TMP$78$5;
					__builtin_memset( &TMP$77$5, 0, 24ll );
					FBSTRING* vr$47 = fb_StrConcat( &TMP$77$5, (void*)((uint8*)&FBC$ + 3556ll), 261ll, (void*)((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 288ll)), 16ll );
					__builtin_memset( &TMP$78$5, 0, 24ll );
					FBSTRING* vr$50 = fb_StrConcat( &TMP$78$5, (void*)vr$47, -1ll, (void*)"", 1ll );
					fb_StrAssign( (void*)PATH$1, -1ll, (void*)vr$50, -1ll, 0 );
				}
				goto label$154;
				label$155:;
				{
					FBSTRING TMP$79$5;
					FBSTRING TMP$80$5;
					__builtin_memset( &TMP$79$5, 0, 24ll );
					FBSTRING* vr$56 = fb_StrConcat( &TMP$79$5, (void*)((uint8*)&FBC$ + 2225ll), 129ll, (void*)((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 288ll)), 16ll );
					__builtin_memset( &TMP$80$5, 0, 24ll );
					FBSTRING* vr$59 = fb_StrConcat( &TMP$80$5, (void*)vr$56, -1ll, (void*)"", 1ll );
					fb_StrAssign( (void*)PATH$1, -1ll, (void*)vr$59, -1ll, 0 );
				}
				label$154:;
			}
			goto label$152;
			label$153:;
			{
				fb_StrAssign( (void*)PATH$1, -1ll, (void*)((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 288ll)), 16ll, 0 );
			}
			label$152:;
			*($11FBCTOOLFLAG*)(((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 288ll)) + 16ll) = *(int64*)(((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 288ll)) + 16ll) | 8ll;
		}
		label$151:;
		label$150:;
	}
	label$138:;
	label$137:;
	fb_StrAssign( (void*)(((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 288ll)) + 24ll), 261ll, (void*)PATH$1, -1ll, 0 );
	*($11FBCTOOLFLAG*)(((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 288ll)) + 16ll) = *(int64*)(((int64)(struct $11FBCTOOLINFO*)FBCTOOLTB$ + (TOOL$1 * 288ll)) + 16ll) | 4ll;
	label$132:;
}

static int64 FBCRUNBIN( char* ACTION$1, int64 TOOL$1, FBSTRING* LN$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$156:;
	int64 RESULT$1;
	FBSTRING PATH$1;
	__builtin_memset( &PATH$1, 0, 24ll );
	FBCFINDBIN( TOOL$1, &PATH$1 );
	if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$159;
	{
		FBSTRING TMP$82$2;
		FBSTRING TMP$84$2;
		FBSTRING TMP$85$2;
		__builtin_memset( &TMP$82$2, 0, 24ll );
		FBSTRING* vr$5 = fb_StrConcat( &TMP$82$2, (void*)ACTION$1, 0ll, (void*)": ", 3ll );
		fb_PrintString( 0, (FBSTRING*)vr$5, 2 );
		__builtin_memset( &TMP$84$2, 0, 24ll );
		FBSTRING* vr$9 = fb_StrConcat( &TMP$84$2, (void*)&PATH$1, -1ll, (void*)" ", 2ll );
		__builtin_memset( &TMP$85$2, 0, 24ll );
		FBSTRING* vr$12 = fb_StrConcat( &TMP$85$2, (void*)vr$9, -1ll, (void*)LN$1, -1ll );
		fb_PrintString( 0, (FBSTRING*)vr$12, 1 );
	}
	label$159:;
	label$158:;
	int32 vr$14 = fb_Exec( (FBSTRING*)&PATH$1, (FBSTRING*)LN$1 );
	RESULT$1 = (int64)vr$14;
	if( RESULT$1 != 0ll ) goto label$161;
	{
		fb$result$1 = -1ll;
	}
	goto label$160;
	label$161:;
	if( RESULT$1 >= 0ll ) goto label$162;
	{
		ERRREPORTEX( 91ll, (char*)*(char**)&PATH$1, -1ll, 6ll, (char*)0ull );
	}
	goto label$160;
	label$162:;
	{
		if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$164;
		{
			FBSTRING TMP$88$3;
			FBSTRING TMP$89$3;
			FBSTRING TMP$90$3;
			FBSTRING TMP$91$3;
			FBSTRING* vr$16 = fb_LongintToStr( RESULT$1 );
			__builtin_memset( &TMP$88$3, 0, 24ll );
			FBSTRING* vr$20 = fb_StrConcat( &TMP$88$3, (void*)ACTION$1, 0ll, (void*)" failed: '", 11ll );
			__builtin_memset( &TMP$89$3, 0, 24ll );
			FBSTRING* vr$23 = fb_StrConcat( &TMP$89$3, (void*)vr$20, -1ll, (void*)&PATH$1, -1ll );
			__builtin_memset( &TMP$90$3, 0, 24ll );
			FBSTRING* vr$26 = fb_StrConcat( &TMP$90$3, (void*)vr$23, -1ll, (void*)"' terminated with exit code ", 29ll );
			__builtin_memset( &TMP$91$3, 0, 24ll );
			FBSTRING* vr$29 = fb_StrConcat( &TMP$91$3, (void*)vr$26, -1ll, (void*)vr$16, -1ll );
			fb_PrintString( 0, (FBSTRING*)vr$29, 1 );
		}
		label$164:;
		label$163:;
	}
	label$160:;
	fb_StrDelete( (FBSTRING*)&PATH$1 );
	label$157:;
	return fb$result$1;
}

static int64 CLEARDEFLIST( FBSTRING* DEFFILE$1 )
{
	FBSTRING TMP$93$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$165:;
	int64 FI$1;
	int32 vr$1 = fb_FileFree(  );
	FI$1 = (int64)vr$1;
	int32 vr$4 = fb_FileOpen( (FBSTRING*)DEFFILE$1, 2u, 0u, 0u, (int32)FI$1, 0 );
	if( (int64)vr$4 == 0ll ) goto label$168;
	{
		fb$result$1 = 0ll;
		goto label$166;
	}
	label$168:;
	label$167:;
	FBSTRING CLEANED$1;
	FBSTRING* vr$6 = HSTRIPEXT( DEFFILE$1 );
	__builtin_memset( &TMP$93$1, 0, 24ll );
	FBSTRING* vr$9 = fb_StrConcat( &TMP$93$1, (void*)vr$6, -1ll, (void*)".clean.def", 11ll );
	fb_StrInit( (void*)&CLEANED$1, -1ll, (void*)vr$9, -1ll, 0 );
	int64 FO$1;
	int32 vr$11 = fb_FileFree(  );
	FO$1 = (int64)vr$11;
	int32 vr$15 = fb_FileOpen( (FBSTRING*)&CLEANED$1, 3u, 0u, 0u, (int32)FO$1, 0 );
	if( (int64)vr$15 == 0ll ) goto label$170;
	{
		int32 vr$18 = fb_FileClose( (int32)FI$1 );
		if( (int64)vr$18 == 0ll ) goto label$171;
		void* vr$20 = fb_ErrorThrowAt( 604, (char*)"src/compiler/fbc.bas", (void*)0ull, (void*)0ull );
		goto *vr$20;
		label$171:;
		fb$result$1 = 0ll;
		fb_StrDelete( (FBSTRING*)&CLEANED$1 );
		goto label$166;
	}
	label$170:;
	label$169:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	label$172:;
	int32 vr$24 = fb_FileEof( (int32)FI$1 );
	if( (int64)vr$24 != 0ll ) goto label$173;
	{
		int64 TMP$95$2;
		fb_FileLineInput( (int32)FI$1, (void*)&LN$1, -1ll, 0 );
		FBSTRING* vr$29 = fb_RIGHT( (FBSTRING*)&LN$1, 4ll );
		int32 vr$30 = fb_StrCompare( (void*)vr$29, -1ll, (void*)"DATA", 5ll );
		if( (int64)vr$30 != 0ll ) goto label$175;
		{
			int64 vr$33 = fb_StrLen( (void*)&LN$1, -1ll );
			FBSTRING* vr$36 = fb_LEFT( (FBSTRING*)&LN$1, vr$33 + -4ll );
			fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$36, -1ll, 0 );
		}
		label$175:;
		label$174:;
		TMP$95$2 = FO$1;
		fb_PrintString( (int32)TMP$95$2, (FBSTRING*)&LN$1, 1 );
	}
	goto label$172;
	label$173:;
	int32 vr$41 = fb_FileClose( (int32)FO$1 );
	if( (int64)vr$41 == 0ll ) goto label$176;
	void* vr$43 = fb_ErrorThrowAt( 619, (char*)"src/compiler/fbc.bas", (void*)0ull, (void*)0ull );
	goto *vr$43;
	label$176:;
	int32 vr$45 = fb_FileClose( (int32)FI$1 );
	if( (int64)vr$45 == 0ll ) goto label$177;
	void* vr$47 = fb_ErrorThrowAt( 620, (char*)"src/compiler/fbc.bas", (void*)0ull, (void*)0ull );
	goto *vr$47;
	label$177:;
	fb_FileKill( (FBSTRING*)DEFFILE$1 );
	int32 vr$49 = rename( (char*)*(char**)&CLEANED$1, (char*)*(char**)DEFFILE$1 );
	fb$result$1 = (int64)-((int64)vr$49 == 0ll);
	fb_StrDelete( (FBSTRING*)&LN$1 );
	fb_StrDelete( (FBSTRING*)&CLEANED$1 );
	goto label$166;
	fb_StrDelete( (FBSTRING*)&LN$1 );
	fb_StrDelete( (FBSTRING*)&CLEANED$1 );
	label$166:;
	return fb$result$1;
}

static int64 HGENERATEEMPTYDEFFILE( FBSTRING* DEFFILE$1 )
{
	int32 TMP$96$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$178:;
	int32 F$1;
	int32 vr$1 = fb_FileFree(  );
	F$1 = vr$1;
	int32 vr$2 = fb_FileOpen( (FBSTRING*)DEFFILE$1, 3u, 0u, 0u, F$1, 0 );
	if( (int64)vr$2 == 0ll ) goto label$181;
	{
		goto label$179;
	}
	label$181:;
	label$180:;
	TMP$96$1 = F$1;
	FBSTRING* vr$4 = fb_StrAllocTempDescZEx( (char*)"EXPORTS", 7ll );
	fb_PrintString( TMP$96$1, (FBSTRING*)vr$4, 1 );
	int32 vr$5 = fb_FileClose( F$1 );
	if( (int64)vr$5 == 0ll ) goto label$182;
	void* vr$7 = fb_ErrorThrowAt( 634, (char*)"src/compiler/fbc.bas", (void*)0ull, (void*)0ull );
	goto *vr$7;
	label$182:;
	fb$result$1 = -1ll;
	label$179:;
	return fb$result$1;
}

static int64 MAKEIMPLIB( FBSTRING* DLLNAME$1, FBSTRING* DEFFILE$1 )
{
	FBSTRING TMP$100$1;
	FBSTRING TMP$101$1;
	FBSTRING TMP$102$1;
	FBSTRING TMP$106$1;
	FBSTRING TMP$107$1;
	FBSTRING TMP$108$1;
	FBSTRING TMP$109$1;
	FBSTRING TMP$110$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$183:;
	int64 vr$1 = CLEARDEFLIST( DEFFILE$1 );
	if( vr$1 != 0ll ) goto label$186;
	{
		goto label$184;
	}
	label$186:;
	label$185:;
	int64 vr$3 = fb_FileLen( (char*)*(char**)DEFFILE$1 );
	if( vr$3 != 0ll ) goto label$188;
	{
		int64 vr$4 = HGENERATEEMPTYDEFFILE( DEFFILE$1 );
		if( vr$4 != 0ll ) goto label$190;
		{
			goto label$184;
		}
		label$190:;
		label$189:;
	}
	label$188:;
	label$187:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	__builtin_memset( &TMP$100$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$100$1, (void*)"--def \x22", 8ll, (void*)DEFFILE$1, -1ll );
	__builtin_memset( &TMP$101$1, 0, 24ll );
	FBSTRING* vr$11 = fb_StrConcat( &TMP$101$1, (void*)vr$8, -1ll, (void*)"\x22", 2ll );
	__builtin_memset( &TMP$102$1, 0, 24ll );
	FBSTRING* vr$15 = fb_StrConcat( &TMP$102$1, (void*)&LN$1, -1ll, (void*)vr$11, -1ll );
	fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$15, -1ll, 0 );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" --dllname \x22", 13ll, 0 );
	FBSTRING* vr$19 = HSTRIPPATH( (char*)((uint8*)&FBC$ + 968ll) );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$19, -1ll, 0 );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22", 2ll, 0 );
	FBSTRING* vr$23 = HSTRIPFILENAME( (char*)((uint8*)&FBC$ + 968ll) );
	__builtin_memset( &TMP$106$1, 0, 24ll );
	FBSTRING* vr$26 = fb_StrConcat( &TMP$106$1, (void*)" --output-lib \x22", 16ll, (void*)vr$23, -1ll );
	__builtin_memset( &TMP$107$1, 0, 24ll );
	FBSTRING* vr$29 = fb_StrConcat( &TMP$107$1, (void*)vr$26, -1ll, (void*)"lib", 4ll );
	__builtin_memset( &TMP$108$1, 0, 24ll );
	FBSTRING* vr$32 = fb_StrConcat( &TMP$108$1, (void*)vr$29, -1ll, (void*)DLLNAME$1, -1ll );
	__builtin_memset( &TMP$109$1, 0, 24ll );
	FBSTRING* vr$35 = fb_StrConcat( &TMP$109$1, (void*)vr$32, -1ll, (void*)".dll.a\x22", 8ll );
	__builtin_memset( &TMP$110$1, 0, 24ll );
	FBSTRING* vr$39 = fb_StrConcat( &TMP$110$1, (void*)&LN$1, -1ll, (void*)vr$35, -1ll );
	fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$39, -1ll, 0 );
	int64 vr$42 = FBCRUNBIN( (char*)"creating import library", 6ll, &LN$1 );
	if( vr$42 != 0ll ) goto label$192;
	{
		fb_StrDelete( (FBSTRING*)&LN$1 );
		goto label$184;
	}
	label$192:;
	label$191:;
	if( *(int64*)((uint8*)&FBC$ + 80ll) != 0ll ) goto label$194;
	{
		FBCADDTEMP( DEFFILE$1 );
	}
	label$194:;
	label$193:;
	fb$result$1 = -1ll;
	fb_StrDelete( (FBSTRING*)&LN$1 );
	label$184:;
	return fb$result$1;
}

static FBSTRING* HFINDLIB( char* FILE$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$195:;
	FBSTRING FOUND$1;
	FBSTRING* vr$1 = FBCBUILDPATHTOLIBFILE( FILE$1 );
	fb_StrInit( (void*)&FOUND$1, -1ll, (void*)vr$1, -1ll, 0 );
	int64 vr$4 = fb_StrLen( (void*)&FOUND$1, -1ll );
	if( vr$4 <= 0ll ) goto label$198;
	{
		fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)" \x22", 3ll, 0 );
		fb_StrConcatAssign( (void*)&fb$result$1, -1ll, (void*)&FOUND$1, -1ll, 0 );
		fb_StrConcatAssign( (void*)&fb$result$1, -1ll, (void*)"\x22", 2ll, 0 );
	}
	goto label$197;
	label$198:;
	{
		ERRREPORTEX( 23ll, (char*)FILE$1, -1ll, 1ll, (char*)0ull );
	}
	label$197:;
	fb_StrDelete( (FBSTRING*)&FOUND$1 );
	label$196:;
	FBSTRING* vr$11 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$11;
}

static int64 FBCLINKERISGOLD( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$199:;
	int64 vr$1 = FBGETOPTION( 3ll );
	if( vr$1 != 7ll ) goto label$202;
	{
		fb$result$1 = 0ll;
		goto label$200;
	}
	goto label$201;
	label$202:;
	{
		FBSTRING LDCMD$2;
		__builtin_memset( &LDCMD$2, 0, 24ll );
		FBCFINDBIN( 2ll, &LDCMD$2 );
		fb_StrConcatAssign( (void*)&LDCMD$2, -1ll, (void*)" --version", 11ll, 0 );
		FBSTRING* vr$5 = fb_StrAllocTempDescZEx( (char*)"GNU gold", 8ll );
		FBSTRING* vr$7 = HGET1STOUTPUTLINEFROMCOMMAND( &LDCMD$2 );
		int64 vr$8 = fb_StrInstr( 1ll, (FBSTRING*)vr$7, (FBSTRING*)vr$5 );
		fb$result$1 = (int64)-(vr$8 > 0ll);
		fb_StrDelete( (FBSTRING*)&LDCMD$2 );
		goto label$200;
		fb_StrDelete( (FBSTRING*)&LDCMD$2 );
	}
	label$201:;
	label$200:;
	return fb$result$1;
}

static int64 FBCISUSINGGOLDLINKER( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$203:;
	int64 vr$1 = FBTARGETSUPPORTSELF(  );
	if( vr$1 == 0ll ) goto label$206;
	{
		int64 vr$2 = FBCLINKERISGOLD(  );
		fb$result$1 = vr$2;
		goto label$204;
	}
	label$206:;
	label$205:;
	fb$result$1 = 0ll;
	goto label$204;
	label$204:;
	return fb$result$1;
}

static int64 HLINKFILES( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$207:;
	FBSTRING LDCLINE$1;
	__builtin_memset( &LDCLINE$1, 0, 24ll );
	FBSTRING DLLNAME$1;
	__builtin_memset( &DLLNAME$1, 0, 24ll );
	FBSTRING DEFFILE$1;
	__builtin_memset( &DEFFILE$1, 0, 24ll );
	fb$result$1 = 0ll;
	HSETOUTNAME(  );
	{
		int64 TMP$115$2;
		int64 vr$4 = FBGETOPTION( 3ll );
		TMP$115$2 = vr$4;
		if( TMP$115$2 != 0ll ) goto label$210;
		label$211:;
		{
			{
				int64 TMP$116$4;
				int64 vr$5 = FBGETCPUFAMILY(  );
				TMP$116$4 = vr$5;
				if( TMP$116$4 != 0ll ) goto label$213;
				label$214:;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"-m i386pe ", 11ll, 0 );
				}
				goto label$212;
				label$213:;
				if( TMP$116$4 != 1ll ) goto label$215;
				label$216:;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"-m i386pep ", 12ll, 0 );
				}
				label$215:;
				label$212:;
			}
		}
		goto label$209;
		label$210:;
		if( TMP$115$2 != 2ll ) goto label$217;
		label$218:;
		{
			{
				int64 TMP$119$4;
				int64 vr$8 = FBGETCPUFAMILY(  );
				TMP$119$4 = vr$8;
				if( TMP$119$4 != 0ll ) goto label$220;
				label$221:;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"-m elf_i386 ", 13ll, 0 );
				}
				goto label$219;
				label$220:;
				if( TMP$119$4 != 1ll ) goto label$222;
				label$223:;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"-m elf_x86_64 ", 15ll, 0 );
				}
				goto label$219;
				label$222:;
				if( TMP$119$4 != 2ll ) goto label$224;
				label$225:;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"-m armelf_linux_eabi ", 22ll, 0 );
				}
				label$224:;
				label$219:;
			}
		}
		goto label$209;
		label$217:;
		if( TMP$115$2 != 9ll ) goto label$226;
		label$227:;
		{
			{
				int64 TMP$123$4;
				int64 vr$12 = FBGETCPUFAMILY(  );
				TMP$123$4 = vr$12;
				if( TMP$123$4 != 0ll ) goto label$229;
				label$230:;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"-arch i386 ", 12ll, 0 );
				}
				goto label$228;
				label$229:;
				if( TMP$123$4 != 1ll ) goto label$231;
				label$232:;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"-arch x86_64 ", 14ll, 0 );
				}
				goto label$228;
				label$231:;
				if( TMP$123$4 != 2ll ) goto label$233;
				label$234:;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"-arch armv6 ", 13ll, 0 );
				}
				label$233:;
				label$228:;
			}
		}
		label$226:;
		label$209:;
	}
	fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"-o \x22", 5ll, 0 );
	fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 968ll), 261ll, 0 );
	fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"\x22", 2ll, 0 );
	int64 vr$20 = FBGETOPTION( 3ll );
	int64 vr$22 = FBGETOPTION( 0ll );
	if( ((int64)-(vr$20 == 3ll) & (int64)-(vr$22 == 2ll)) == 0ll ) goto label$236;
	{
		FBSTRING TMP$131$2;
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -I \x22lib", 9ll, 0 );
		__builtin_memset( &TMP$131$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$131$2, -1ll, (void*)((uint8*)&FBC$ + 968ll), 261ll, 0 );
		FBSTRING* vr$30 = HSTRIPEXT( &TMP$131$2 );
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$30, -1ll, 0 );
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"_il.a\x22", 7ll, 0 );
		fb_StrDelete( (FBSTRING*)&TMP$131$2 );
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -U", 4ll, 0 );
		{
			FBSTRING* OBJFILE$3;
			void* vr$36 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 400ll) );
			OBJFILE$3 = (FBSTRING*)vr$36;
			label$237:;
			if( OBJFILE$3 == (FBSTRING*)0ull ) goto label$238;
			{
				FBSTRING TMP$134$4;
				FBSTRING TMP$135$4;
				FBSTRING TMP$136$4;
				__builtin_memset( &TMP$134$4, 0, 24ll );
				FBSTRING* vr$39 = fb_StrConcat( &TMP$134$4, (void*)" \x22", 3ll, (void*)OBJFILE$3, -1ll );
				__builtin_memset( &TMP$135$4, 0, 24ll );
				FBSTRING* vr$42 = fb_StrConcat( &TMP$135$4, (void*)vr$39, -1ll, (void*)"\x22", 2ll );
				__builtin_memset( &TMP$136$4, 0, 24ll );
				FBSTRING* vr$46 = fb_StrConcat( &TMP$136$4, (void*)&LDCLINE$1, -1ll, (void*)vr$42, -1ll );
				fb_StrAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$46, -1ll, 0 );
				void* vr$48 = LISTGETNEXT( (void*)OBJFILE$3 );
				OBJFILE$3 = (FBSTRING*)vr$48;
			}
			goto label$237;
			label$238:;
		}
		{
			FBSTRING* LIBFILE$3;
			void* vr$50 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 464ll) );
			LIBFILE$3 = (FBSTRING*)vr$50;
			if( LIBFILE$3 == (FBSTRING*)0ull ) goto label$240;
			{
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -lc", 5ll, 0 );
			}
			label$240:;
			label$239:;
			label$241:;
			if( LIBFILE$3 == (FBSTRING*)0ull ) goto label$242;
			{
				FBSTRING TMP$138$4;
				FBSTRING TMP$139$4;
				FBSTRING TMP$140$4;
				__builtin_memset( &TMP$138$4, 0, 24ll );
				FBSTRING* vr$54 = fb_StrConcat( &TMP$138$4, (void*)" \x22", 3ll, (void*)LIBFILE$3, -1ll );
				__builtin_memset( &TMP$139$4, 0, 24ll );
				FBSTRING* vr$57 = fb_StrConcat( &TMP$139$4, (void*)vr$54, -1ll, (void*)"\x22", 2ll );
				__builtin_memset( &TMP$140$4, 0, 24ll );
				FBSTRING* vr$61 = fb_StrConcat( &TMP$140$4, (void*)&LDCLINE$1, -1ll, (void*)vr$57, -1ll );
				fb_StrAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$61, -1ll, 0 );
				void* vr$63 = LISTGETNEXT( (void*)LIBFILE$3 );
				LIBFILE$3 = (FBSTRING*)vr$63;
			}
			goto label$241;
			label$242:;
		}
		int64 vr$65 = FBCRUNBIN( (char*)"making DXE", 10ll, &LDCLINE$1 );
		fb$result$1 = vr$65;
		fb_StrDelete( (FBSTRING*)&DEFFILE$1 );
		fb_StrDelete( (FBSTRING*)&DLLNAME$1 );
		fb_StrDelete( (FBSTRING*)&LDCLINE$1 );
		goto label$208;
	}
	label$236:;
	label$235:;
	{
		uint64 TMP$142$2;
		int64 vr$69 = FBGETOPTION( 3ll );
		TMP$142$2 = (uint64)vr$69;
		goto label$244;
		label$245:;
		{
			int64 vr$71 = fb_StrLen( (void*)((uint8*)&FBC$ + 1893ll), 129ll );
			if( vr$71 != 0ll ) goto label$247;
			{
				fb_StrAssign( (void*)((uint8*)&FBC$ + 1893ll), 129ll, (void*)"console", 8ll, 0 );
			}
			goto label$246;
			label$247:;
			{
				int32 vr$74 = fb_StrCompare( (void*)((uint8*)&FBC$ + 1893ll), 129ll, (void*)"gui", 4ll );
				if( (int64)vr$74 != 0ll ) goto label$249;
				{
					fb_StrAssign( (void*)((uint8*)&FBC$ + 1893ll), 129ll, (void*)"windows", 8ll, 0 );
				}
				label$249:;
				label$248:;
			}
			label$246:;
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -subsystem ", 13ll, 0 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 1893ll), 129ll, 0 );
			int64 vr$80 = FBGETOPTION( 0ll );
			if( vr$80 != 2ll ) goto label$251;
			{
				FBSTRING TMP$147$4;
				FBSTRING TMP$148$4;
				__builtin_memset( &TMP$148$4, 0, 24ll );
				__builtin_memset( &TMP$147$4, 0, 24ll );
				fb_StrAssign( (void*)&TMP$147$4, -1ll, (void*)((uint8*)&FBC$ + 968ll), 261ll, 0 );
				FBSTRING* vr$86 = HSTRIPEXT( &TMP$147$4 );
				fb_StrAssign( (void*)&TMP$148$4, -1ll, (void*)vr$86, -1ll, 0 );
				FBSTRING* vr$88 = HSTRIPPATH( (char*)*(char**)&TMP$148$4 );
				fb_StrAssign( (void*)&DLLNAME$1, -1ll, (void*)vr$88, -1ll, 0 );
				fb_StrDelete( (FBSTRING*)&TMP$148$4 );
				fb_StrDelete( (FBSTRING*)&TMP$147$4 );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --dll --enable-stdcall-fixup", 30ll, 0 );
				int64 vr$93 = FBGETCPUFAMILY(  );
				if( vr$93 != 0ll ) goto label$253;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -e _DllMainCRTStartup@12", 26ll, 0 );
				}
				goto label$252;
				label$253:;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -e DllMainCRTStartup", 22ll, 0 );
				}
				label$252:;
			}
			label$251:;
			label$250:;
		}
		goto label$243;
		label$254:;
		{
			int64 vr$96 = FBGETOPTION( 0ll );
			if( vr$96 != 2ll ) goto label$256;
			{
				FBSTRING TMP$152$4;
				FBSTRING TMP$153$4;
				__builtin_memset( &TMP$153$4, 0, 24ll );
				__builtin_memset( &TMP$152$4, 0, 24ll );
				fb_StrAssign( (void*)&TMP$152$4, -1ll, (void*)((uint8*)&FBC$ + 968ll), 261ll, 0 );
				FBSTRING* vr$102 = HSTRIPEXT( &TMP$152$4 );
				fb_StrAssign( (void*)&TMP$153$4, -1ll, (void*)vr$102, -1ll, 0 );
				FBSTRING* vr$104 = HSTRIPPATH( (char*)*(char**)&TMP$153$4 );
				fb_StrAssign( (void*)&DLLNAME$1, -1ll, (void*)vr$104, -1ll, 0 );
				fb_StrDelete( (FBSTRING*)&TMP$153$4 );
				fb_StrDelete( (FBSTRING*)&TMP$152$4 );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -shared -h", 12ll, 0 );
				FBSTRING* vr$110 = HSTRIPPATH( (char*)((uint8*)&FBC$ + 968ll) );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$110, -1ll, 0 );
				FBSTRING* vr$113 = fb_LEFT( (FBSTRING*)&DLLNAME$1, 3ll );
				int32 vr$114 = fb_StrCompare( (void*)vr$113, -1ll, (void*)"lib", 4ll );
				if( (int64)vr$114 != 0ll ) goto label$258;
				{
					int64 vr$117 = fb_StrLen( (void*)&DLLNAME$1, -1ll );
					FBSTRING* vr$120 = fb_RIGHT( (FBSTRING*)&DLLNAME$1, vr$117 + -3ll );
					fb_StrAssign( (void*)&DLLNAME$1, -1ll, (void*)vr$120, -1ll, 0 );
				}
				label$258:;
				label$257:;
			}
			goto label$255;
			label$256:;
			{
				{
					uint64 TMP$155$5;
					int64 vr$122 = FBGETOPTION( 3ll );
					TMP$155$5 = (uint64)vr$122;
					goto label$260;
					label$261:;
					{
						fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /libexec/ld-elf.so.1", 38ll, 0 );
					}
					goto label$259;
					label$262:;
					{
						fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /libexec/ld-elf.so.2", 38ll, 0 );
					}
					goto label$259;
					label$263:;
					{
						fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --dynamic-linker /lib/64/ld.so.1", 34ll, 0 );
					}
					goto label$259;
					label$264:;
					{
						{
							int64 TMP$159$7;
							int64 vr$126 = FBGETCPUFAMILY(  );
							TMP$159$7 = vr$126;
							if( TMP$159$7 != 0ll ) goto label$266;
							label$267:;
							{
								fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /lib/ld-linux.so.2", 36ll, 0 );
							}
							goto label$265;
							label$266:;
							if( TMP$159$7 != 1ll ) goto label$268;
							label$269:;
							{
								fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /lib64/ld-linux-x86-64.so.2", 45ll, 0 );
							}
							goto label$265;
							label$268:;
							if( TMP$159$7 != 2ll ) goto label$270;
							label$271:;
							{
								fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /lib/ld-linux-armhf.so.3", 42ll, 0 );
							}
							goto label$265;
							label$270:;
							if( TMP$159$7 != 3ll ) goto label$272;
							label$273:;
							{
								fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /lib/ld-linux-aarch64.so.1", 44ll, 0 );
							}
							label$272:;
							label$265:;
						}
					}
					goto label$259;
					label$274:;
					{
						fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /usr/libexec/ld.elf_so", 40ll, 0 );
					}
					goto label$259;
					label$275:;
					{
						fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /usr/libexec/ld.so", 36ll, 0 );
					}
					goto label$259;
					label$260:;
					static const void* tmp$792[9ll] = {
						&&label$264,
						&&label$259,
						&&label$259,
						&&label$261,
						&&label$262,
						&&label$263,
						&&label$275,
						&&label$259,
						&&label$274,
					};
					if( (TMP$155$5 - 2ull) > 8ull ) goto label$259;
					goto *tmp$792[TMP$155$5 - 2ull];
					label$259:;
				}
			}
			label$255:;
			int64 vr$133 = FBGETOPTION( 0ll );
			int64 vr$135 = FBGETOPTION( 33ll );
			int64 vr$137 = FBGETOPTION( 3ll );
			if( (((int64)-(vr$133 == 2ll) | vr$135) & (int64)-(vr$137 != 7ll)) == 0ll ) goto label$277;
			{
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --export-dynamic", 18ll, 0 );
			}
			label$277:;
			label$276:;
		}
		goto label$243;
		label$278:;
		{
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -nostdlib --file-alignment 0x20 --section-alignment 0x20 -shared", 66ll, 0 );
		}
		goto label$243;
		label$279:;
		{
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -O", 4ll, 0 );
			int64 vr$143 = FBGETOPTION( 8ll );
			FBSTRING* vr$144 = fb_LongintToStr( vr$143 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$144, -1ll, 0 );
			static char EMSCRIPTEN_OPTIONS$3[5][32] = { "CASE_INSENSITIVE_FS=1", "TOTAL_MEMORY=67108864", "ALLOW_MEMORY_GROWTH=1", "RETAIN_COMPILER_SETTINGS=1", "ASYNCIFY=1" };
			static struct $8FBARRAY1IcE tmp$174$3 = { (char*)EMSCRIPTEN_OPTIONS$3, (char*)EMSCRIPTEN_OPTIONS$3, 160ll, 32ll, 1ll, 49ll, { { 5ll, 0ll, 4ll } } };
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -Wno-warn-absolute-paths", 26ll, 0 );
			{
				int64 I$4;
				I$4 = 0ll;
				label$283:;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -s ", 5ll, 0 );
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((int64)(char*)EMSCRIPTEN_OPTIONS$3 + (I$4 << (5ll & 63ll))), 32ll, 0 );
				}
				label$281:;
				I$4 = I$4 + 1ll;
				label$280:;
				if( I$4 <= 4ll ) goto label$283;
				label$282:;
			}
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --shell-file", 14ll, 0 );
			FBSTRING* vr$153 = HFINDLIB( (char*)"fb_shell.html" );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$153, -1ll, 0 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --post-js", 11ll, 0 );
			FBSTRING* vr$156 = HFINDLIB( (char*)"fb_rtlib.js" );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$156, -1ll, 0 );
			int64 vr$159 = fb_StrLen( (void*)((uint8*)&FBC$ + 1893ll), 129ll );
			if( vr$159 != 0ll ) goto label$285;
			{
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --post-js", 11ll, 0 );
				FBSTRING* vr$161 = HFINDLIB( (char*)"termlib_min.js" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$161, -1ll, 0 );
			}
			label$285:;
			label$284:;
		}
		goto label$243;
		label$244:;
		static const void* tmp$793[12ll] = {
			&&label$245,
			&&label$245,
			&&label$254,
			&&label$243,
			&&label$278,
			&&label$254,
			&&label$254,
			&&label$254,
			&&label$254,
			&&label$254,
			&&label$254,
			&&label$279,
		};
		if( TMP$142$2 > 11ull ) goto label$243;
		goto *tmp$793[TMP$142$2 - 0ull];
		label$243:;
	}
	int64 vr$163 = FBGETOPTION( 3ll );
	if( vr$163 != 3ll ) goto label$287;
	{
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -T \x22", 6ll, 0 );
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 3295ll), 261ll, 0 );
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"/i386go32.x\x22", 13ll, 0 );
	}
	goto label$286;
	label$287:;
	{
		int64 vr$168 = FBGETOPTION( 39ll );
		int64 vr$169 = FBGETOPTION( 3ll );
		int64 vr$172 = FBGETOPTION( 3ll );
		int64 vr$175 = FBGETOPTION( 3ll );
		int64 vr$178 = FBCISUSINGGOLDLINKER(  );
		if( ((((vr$168 & (int64)-(vr$169 != 9ll)) & (int64)-(vr$172 != 7ll)) & (int64)-(vr$175 != 11ll)) & ~vr$178) == 0ll ) goto label$289;
		{
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -T \x22", 6ll, 0 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 3295ll), 261ll, 0 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"/fbextra.x\x22", 12ll, 0 );
		}
		label$289:;
		label$288:;
	}
	label$286:;
	{
		uint64 TMP$187$2;
		int64 vr$185 = FBGETOPTION( 3ll );
		TMP$187$2 = (uint64)vr$185;
		goto label$291;
		label$292:;
		{
			int64 STACKSIZE$3;
			int64 vr$186 = FBGETOPTION( 38ll );
			STACKSIZE$3 = vr$186;
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --stack ", 10ll, 0 );
			FBSTRING* vr$188 = fb_LongintToStr( STACKSIZE$3 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$188, -1ll, 0 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)",", 2ll, 0 );
			FBSTRING* vr$191 = fb_LongintToStr( STACKSIZE$3 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$191, -1ll, 0 );
			int64 vr$193 = FBGETOPTION( 0ll );
			if( vr$193 != 2ll ) goto label$294;
			{
				FBSTRING TMP$190$4;
				__builtin_memset( &TMP$190$4, 0, 24ll );
				fb_StrAssign( (void*)&TMP$190$4, -1ll, (void*)((uint8*)&FBC$ + 968ll), 261ll, 0 );
				FBSTRING* vr$198 = HSTRIPEXT( &TMP$190$4 );
				fb_StrAssign( (void*)&DEFFILE$1, -1ll, (void*)vr$198, -1ll, 0 );
				fb_StrConcatAssign( (void*)&DEFFILE$1, -1ll, (void*)".def", 5ll, 0 );
				fb_StrDelete( (FBSTRING*)&TMP$190$4 );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --output-def \x22", 16ll, 0 );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)&DEFFILE$1, -1ll, 0 );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"\x22", 2ll, 0 );
			}
			label$294:;
			label$293:;
		}
		goto label$290;
		label$295:;
		{
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -e _WinMainCRTStartup", 23ll, 0 );
		}
		goto label$290;
		label$291:;
		static const void* tmp$794[5ll] = {
			&&label$292,
			&&label$292,
			&&label$290,
			&&label$290,
			&&label$295,
		};
		if( TMP$187$2 > 4ull ) goto label$290;
		goto *tmp$794[TMP$187$2 - 0ull];
		label$290:;
	}
	if( *(int64*)((uint8*)&FBC$ + 2496ll) == 0ll ) goto label$297;
	{
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -Bstatic", 10ll, 0 );
	}
	label$297:;
	label$296:;
	int64 vr$209 = fb_StrLen( (void*)((uint8*)&FBC$ + 1632ll), 261ll );
	if( vr$209 <= 0ll ) goto label$299;
	{
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -Map ", 7ll, 0 );
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 1632ll), 261ll, 0 );
	}
	label$299:;
	label$298:;
	int64 vr$213 = FBGETOPTION( 14ll );
	if( vr$213 != 0ll ) goto label$301;
	{
		int64 vr$214 = FBGETOPTION( 23ll );
		if( vr$214 != 0ll ) goto label$303;
		{
			int64 vr$215 = FBGETOPTION( 3ll );
			int64 vr$217 = FBGETOPTION( 3ll );
			if( ((int64)-(vr$215 != 9ll) & (int64)-(vr$217 != 11ll)) == 0ll ) goto label$305;
			{
				if( *(int64*)((uint8*)&FBC$ + 2504ll) == 0ll ) goto label$307;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -s", 4ll, 0 );
				}
				label$307:;
				label$306:;
			}
			label$305:;
			label$304:;
		}
		label$303:;
		label$302:;
	}
	label$301:;
	label$300:;
	{
		struct $11TSTRSETITEM* I$2;
		void* vr$222 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 880ll) );
		I$2 = (struct $11TSTRSETITEM*)vr$222;
		FBSTRING L$2;
		__builtin_memset( &L$2, 0, 24ll );
		int64 vr$224 = FBGETOPTION( 3ll );
		if( vr$224 == 11ll ) goto label$309;
		{
			fb_StrAssign( (void*)&L$2, -1ll, (void*)" -L \x22", 6ll, 0 );
		}
		goto label$308;
		label$309:;
		{
			fb_StrAssign( (void*)&L$2, -1ll, (void*)" -L\x22", 5ll, 0 );
		}
		label$308:;
		label$310:;
		if( I$2 == (struct $11TSTRSETITEM*)0ull ) goto label$311;
		{
			FBSTRING TMP$199$3;
			FBSTRING TMP$200$3;
			FBSTRING TMP$201$3;
			__builtin_memset( &TMP$199$3, 0, 24ll );
			FBSTRING* vr$232 = fb_StrConcat( &TMP$199$3, (void*)&L$2, -1ll, (void*)I$2, -1ll );
			__builtin_memset( &TMP$200$3, 0, 24ll );
			FBSTRING* vr$235 = fb_StrConcat( &TMP$200$3, (void*)vr$232, -1ll, (void*)"\x22", 2ll );
			__builtin_memset( &TMP$201$3, 0, 24ll );
			FBSTRING* vr$239 = fb_StrConcat( &TMP$201$3, (void*)&LDCLINE$1, -1ll, (void*)vr$235, -1ll );
			fb_StrAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$239, -1ll, 0 );
			void* vr$241 = LISTGETNEXT( (void*)I$2 );
			I$2 = (struct $11TSTRSETITEM*)vr$241;
		}
		goto label$310;
		label$311:;
		fb_StrDelete( (FBSTRING*)&L$2 );
	}
	{
		uint64 TMP$202$2;
		int64 vr$243 = FBGETOPTION( 3ll );
		TMP$202$2 = (uint64)vr$243;
		goto label$313;
		label$314:;
		{
			int64 vr$244 = FBGETOPTION( 0ll );
			if( vr$244 != 2ll ) goto label$316;
			{
				FBSTRING* vr$245 = HFINDLIB( (char*)"crt0.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$245, -1ll, 0 );
			}
			goto label$315;
			label$316:;
			{
				FBSTRING* vr$247 = HFINDLIB( (char*)"crt0.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$247, -1ll, 0 );
				int64 vr$249 = FBGETOPTION( 23ll );
				if( vr$249 == 0ll ) goto label$318;
				{
					FBSTRING* vr$250 = HFINDLIB( (char*)"gcrt0.o" );
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$250, -1ll, 0 );
				}
				label$318:;
				label$317:;
			}
			label$315:;
		}
		goto label$312;
		label$319:;
		{
			int64 vr$252 = FBGETOPTION( 0ll );
			if( vr$252 != 2ll ) goto label$321;
			{
				FBSTRING* vr$253 = HFINDLIB( (char*)"dllcrt2.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$253, -1ll, 0 );
			}
			goto label$320;
			label$321:;
			{
				FBSTRING* vr$255 = HFINDLIB( (char*)"crt2.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$255, -1ll, 0 );
				int64 vr$257 = FBGETOPTION( 23ll );
				if( vr$257 == 0ll ) goto label$323;
				{
					FBSTRING* vr$258 = HFINDLIB( (char*)"gcrt2.o" );
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$258, -1ll, 0 );
				}
				label$323:;
				label$322:;
			}
			label$320:;
			FBSTRING* vr$260 = HFINDLIB( (char*)"crtbegin.o" );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$260, -1ll, 0 );
		}
		goto label$312;
		label$324:;
		{
			int64 vr$262 = FBGETOPTION( 23ll );
			if( vr$262 == 0ll ) goto label$326;
			{
				FBSTRING* vr$263 = HFINDLIB( (char*)"gcrt0.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$263, -1ll, 0 );
			}
			goto label$325;
			label$326:;
			{
				FBSTRING* vr$265 = HFINDLIB( (char*)"crt0.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$265, -1ll, 0 );
			}
			label$325:;
		}
		goto label$312;
		label$327:;
		{
			int64 vr$267 = FBGETOPTION( 0ll );
			if( vr$267 != 0ll ) goto label$329;
			{
				int64 vr$268 = FBGETOPTION( 23ll );
				if( vr$268 == 0ll ) goto label$331;
				{
					{
						uint64 TMP$209$6;
						int64 vr$269 = FBGETOPTION( 3ll );
						TMP$209$6 = (uint64)vr$269;
						goto label$333;
						label$334:;
						{
							FBSTRING* vr$270 = HFINDLIB( (char*)"gcrt0.o" );
							fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$270, -1ll, 0 );
						}
						goto label$332;
						label$335:;
						{
							FBSTRING* vr$272 = HFINDLIB( (char*)"gcrt1.o" );
							fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$272, -1ll, 0 );
						}
						goto label$332;
						label$333:;
						static const void* tmp$795[3ll] = {
							&&label$334,
							&&label$335,
							&&label$334,
						};
						if( (TMP$209$6 - 8ull) > 2ull ) goto label$335;
						goto *tmp$795[TMP$209$6 - 8ull];
						label$332:;
					}
				}
				goto label$330;
				label$331:;
				{
					{
						uint64 TMP$211$6;
						int64 vr$274 = FBGETOPTION( 3ll );
						TMP$211$6 = (uint64)vr$274;
						goto label$337;
						label$338:;
						{
							FBSTRING* vr$275 = HFINDLIB( (char*)"crt0.o" );
							fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$275, -1ll, 0 );
						}
						goto label$336;
						label$339:;
						{
							FBSTRING* vr$277 = HFINDLIB( (char*)"crt1.o" );
							fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$277, -1ll, 0 );
						}
						goto label$336;
						label$337:;
						static const void* tmp$796[3ll] = {
							&&label$338,
							&&label$339,
							&&label$338,
						};
						if( (TMP$211$6 - 8ull) > 2ull ) goto label$339;
						goto *tmp$796[TMP$211$6 - 8ull];
						label$336:;
					}
				}
				label$330:;
			}
			label$329:;
			label$328:;
			int64 vr$279 = FBGETOPTION( 3ll );
			if( vr$279 == 9ll ) goto label$341;
			{
				int64 vr$280 = FBGETOPTION( 3ll );
				if( vr$280 == 8ll ) goto label$343;
				{
					FBSTRING* vr$281 = HFINDLIB( (char*)"crti.o" );
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$281, -1ll, 0 );
				}
				label$343:;
				label$342:;
				int64 vr$283 = FBGETOPTION( 37ll );
				if( vr$283 == 0ll ) goto label$345;
				{
					FBSTRING* vr$284 = HFINDLIB( (char*)"crtbeginS.o" );
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$284, -1ll, 0 );
				}
				goto label$344;
				label$345:;
				{
					FBSTRING* vr$286 = HFINDLIB( (char*)"crtbegin.o" );
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$286, -1ll, 0 );
				}
				label$344:;
			}
			label$341:;
			label$340:;
		}
		goto label$312;
		label$346:;
		{
			FBSTRING* vr$288 = HFINDLIB( (char*)"crt0.o" );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$288, -1ll, 0 );
		}
		goto label$312;
		label$313:;
		static const void* tmp$797[11ll] = {
			&&label$319,
			&&label$314,
			&&label$327,
			&&label$324,
			&&label$346,
			&&label$327,
			&&label$327,
			&&label$327,
			&&label$327,
			&&label$327,
			&&label$327,
		};
		if( TMP$202$2 > 10ull ) goto label$312;
		goto *tmp$797[TMP$202$2 - 0ull];
		label$312:;
	}
	if( *(int64*)((uint8*)&FBC$ + 2488ll) != 0ll ) goto label$348;
	{
		int64 vr$290 = FBGETOPTION( 3ll );
		if( vr$290 == 11ll ) goto label$350;
		{
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" \x22", 3ll, 0 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 3295ll), 261ll, 0 );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"/", 2ll, 0 );
			int64 vr$295 = FBGETOPTION( 37ll );
			if( vr$295 == 0ll ) goto label$352;
			{
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"fbrt0pic.o", 11ll, 0 );
			}
			goto label$351;
			label$352:;
			{
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"fbrt0.o", 8ll, 0 );
			}
			label$351:;
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"\x22", 2ll, 0 );
		}
		label$350:;
		label$349:;
	}
	label$348:;
	label$347:;
	{
		FBSTRING* OBJFILE$2;
		void* vr$300 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 400ll) );
		OBJFILE$2 = (FBSTRING*)vr$300;
		label$353:;
		if( OBJFILE$2 == (FBSTRING*)0ull ) goto label$354;
		{
			FBSTRING TMP$217$3;
			FBSTRING TMP$218$3;
			FBSTRING TMP$219$3;
			__builtin_memset( &TMP$217$3, 0, 24ll );
			FBSTRING* vr$303 = fb_StrConcat( &TMP$217$3, (void*)" \x22", 3ll, (void*)OBJFILE$2, -1ll );
			__builtin_memset( &TMP$218$3, 0, 24ll );
			FBSTRING* vr$306 = fb_StrConcat( &TMP$218$3, (void*)vr$303, -1ll, (void*)"\x22", 2ll );
			__builtin_memset( &TMP$219$3, 0, 24ll );
			FBSTRING* vr$310 = fb_StrConcat( &TMP$219$3, (void*)&LDCLINE$1, -1ll, (void*)vr$306, -1ll );
			fb_StrAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$310, -1ll, 0 );
			void* vr$312 = LISTGETNEXT( (void*)OBJFILE$2 );
			OBJFILE$2 = (FBSTRING*)vr$312;
		}
		goto label$353;
		label$354:;
	}
	int64 vr$313 = FBGETOPTION( 3ll );
	if( vr$313 == 9ll ) goto label$356;
	{
		int64 vr$314 = FBGETOPTION( 3ll );
		if( vr$314 == 11ll ) goto label$358;
		{
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" \x22-(\x22", 6ll, 0 );
		}
		label$358:;
		label$357:;
	}
	label$356:;
	label$355:;
	{
		FBSTRING* LIBFILE$2;
		void* vr$317 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 464ll) );
		LIBFILE$2 = (FBSTRING*)vr$317;
		label$359:;
		if( LIBFILE$2 == (FBSTRING*)0ull ) goto label$360;
		{
			FBSTRING TMP$221$3;
			FBSTRING TMP$222$3;
			FBSTRING TMP$223$3;
			__builtin_memset( &TMP$221$3, 0, 24ll );
			FBSTRING* vr$320 = fb_StrConcat( &TMP$221$3, (void*)" \x22", 3ll, (void*)LIBFILE$2, -1ll );
			__builtin_memset( &TMP$222$3, 0, 24ll );
			FBSTRING* vr$323 = fb_StrConcat( &TMP$222$3, (void*)vr$320, -1ll, (void*)"\x22", 2ll );
			__builtin_memset( &TMP$223$3, 0, 24ll );
			FBSTRING* vr$327 = fb_StrConcat( &TMP$223$3, (void*)&LDCLINE$1, -1ll, (void*)vr$323, -1ll );
			fb_StrAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$327, -1ll, 0 );
			void* vr$329 = LISTGETNEXT( (void*)LIBFILE$2 );
			LIBFILE$2 = (FBSTRING*)vr$329;
		}
		goto label$359;
		label$360:;
	}
	{
		struct $11TSTRSETITEM* I$2;
		void* vr$331 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 792ll) );
		I$2 = (struct $11TSTRSETITEM*)vr$331;
		int64 CHECKDLLNAME$2;
		int64 vr$332 = FBGETOPTION( 0ll );
		CHECKDLLNAME$2 = (int64)-(vr$332 == 2ll);
		label$361:;
		if( I$2 == (struct $11TSTRSETITEM*)0ull ) goto label$362;
		{
			int64 TMP$224$3;
			if( CHECKDLLNAME$2 == 0ll ) goto label$363;
			int32 vr$337 = fb_StrCompare( (void*)I$2, -1ll, (void*)&DLLNAME$1, -1ll );
			TMP$224$3 = (int64)-((int64)vr$337 != 0ll);
			goto label$1459;
			label$363:;
			TMP$224$3 = -1ll;
			label$1459:;
			if( TMP$224$3 == 0ll ) goto label$365;
			{
				FBSTRING TMP$226$4;
				FBSTRING TMP$227$4;
				__builtin_memset( &TMP$226$4, 0, 24ll );
				FBSTRING* vr$344 = fb_StrConcat( &TMP$226$4, (void*)" -l", 4ll, (void*)I$2, -1ll );
				__builtin_memset( &TMP$227$4, 0, 24ll );
				FBSTRING* vr$348 = fb_StrConcat( &TMP$227$4, (void*)&LDCLINE$1, -1ll, (void*)vr$344, -1ll );
				fb_StrAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$348, -1ll, 0 );
			}
			label$365:;
			label$364:;
			void* vr$350 = LISTGETNEXT( (void*)I$2 );
			I$2 = (struct $11TSTRSETITEM*)vr$350;
		}
		goto label$361;
		label$362:;
	}
	int64 vr$351 = FBGETOPTION( 3ll );
	if( vr$351 == 9ll ) goto label$367;
	{
		int64 vr$352 = FBGETOPTION( 3ll );
		if( vr$352 == 11ll ) goto label$369;
		{
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" \x22-)\x22", 6ll, 0 );
		}
		goto label$368;
		label$369:;
		{
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -lfb", 6ll, 0 );
		}
		label$368:;
	}
	label$367:;
	label$366:;
	{
		uint64 TMP$230$2;
		int64 vr$355 = FBGETOPTION( 3ll );
		TMP$230$2 = (uint64)vr$355;
		goto label$371;
		label$372:;
		{
			int64 vr$356 = FBGETOPTION( 37ll );
			if( vr$356 == 0ll ) goto label$374;
			{
				FBSTRING* vr$357 = HFINDLIB( (char*)"crtendS.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$357, -1ll, 0 );
			}
			goto label$373;
			label$374:;
			{
				FBSTRING* vr$359 = HFINDLIB( (char*)"crtend.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$359, -1ll, 0 );
			}
			label$373:;
			int64 vr$361 = FBGETOPTION( 3ll );
			if( vr$361 == 8ll ) goto label$376;
			{
				FBSTRING* vr$362 = HFINDLIB( (char*)"crtn.o" );
				fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$362, -1ll, 0 );
			}
			label$376:;
			label$375:;
		}
		goto label$370;
		label$377:;
		{
			FBSTRING* vr$364 = HFINDLIB( (char*)"crtend.o" );
			fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$364, -1ll, 0 );
		}
		goto label$370;
		label$371:;
		static const void* tmp$798[11ll] = {
			&&label$377,
			&&label$370,
			&&label$372,
			&&label$370,
			&&label$370,
			&&label$372,
			&&label$372,
			&&label$372,
			&&label$372,
			&&label$370,
			&&label$372,
		};
		if( TMP$230$2 > 10ull ) goto label$370;
		goto *tmp$798[TMP$230$2 - 0ull];
		label$370:;
	}
	int64 vr$366 = FBGETOPTION( 3ll );
	if( vr$366 != 9ll ) goto label$379;
	{
		fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -macosx_version_min 10.4", 26ll, 0 );
	}
	label$379:;
	label$378:;
	{
		uint64 TMP$235$2;
		int64 vr$368 = FBGETOPTION( 3ll );
		TMP$235$2 = (uint64)vr$368;
		goto label$381;
		label$382:;
		{
			int64 TMP$236$3;
			int32 OUTTYPE$3;
			int64 vr$369 = FBGETOPTION( 0ll );
			OUTTYPE$3 = (int32)vr$369;
			if( (int64)OUTTYPE$3 == 0ll ) goto label$383;
			TMP$236$3 = (int64)-((int64)OUTTYPE$3 == 2ll);
			goto label$1460;
			label$383:;
			TMP$236$3 = -1ll;
			label$1460:;
			if( TMP$236$3 == 0ll ) goto label$385;
			{
				int64 TMP$237$4;
				int64 TMP$238$4;
				int64 TMP$239$4;
				int32 CPUFAMILY$4;
				int64 vr$374 = FBGETCPUFAMILY(  );
				CPUFAMILY$4 = (int32)vr$374;
				if( (int64)CPUFAMILY$4 == 1ll ) goto label$386;
				TMP$237$4 = (int64)-((int64)CPUFAMILY$4 == 3ll);
				goto label$1461;
				label$386:;
				TMP$237$4 = -1ll;
				label$1461:;
				if( TMP$237$4 != 0ll ) goto label$387;
				TMP$238$4 = (int64)-((int64)CPUFAMILY$4 == 5ll);
				goto label$1462;
				label$387:;
				TMP$238$4 = -1ll;
				label$1462:;
				if( TMP$238$4 != 0ll ) goto label$388;
				TMP$239$4 = (int64)-((int64)CPUFAMILY$4 == 6ll);
				goto label$1463;
				label$388:;
				TMP$239$4 = -1ll;
				label$1463:;
				if( TMP$239$4 == 0ll ) goto label$390;
				{
					fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --eh-frame-hdr", 16ll, 0 );
				}
				label$390:;
				label$389:;
			}
			label$385:;
			label$384:;
		}
		goto label$380;
		label$381:;
		static const void* tmp$799[9ll] = {
			&&label$382,
			&&label$380,
			&&label$380,
			&&label$382,
			&&label$382,
			&&label$382,
			&&label$382,
			&&label$382,
			&&label$382,
		};
		if( (TMP$235$2 - 2ull) > 8ull ) goto label$380;
		goto *tmp$799[TMP$235$2 - 2ull];
		label$380:;
	}
	fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" ", 2ll, 0 );
	fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 2048ll), -1ll, 0 );
	$7FBCTOOL LD$1;
	LD$1 = 2ll;
	int64 vr$387 = FBGETOPTION( 3ll );
	if( vr$387 != 11ll ) goto label$392;
	{
		LD$1 = 13ll;
	}
	label$392:;
	label$391:;
	int64 vr$389 = FBCRUNBIN( (char*)"linking", LD$1, &LDCLINE$1 );
	if( vr$389 != 0ll ) goto label$394;
	{
		fb_StrDelete( (FBSTRING*)&DEFFILE$1 );
		fb_StrDelete( (FBSTRING*)&DLLNAME$1 );
		fb_StrDelete( (FBSTRING*)&LDCLINE$1 );
		goto label$208;
	}
	label$394:;
	label$393:;
	{
		uint64 TMP$242$2;
		int64 vr$393 = FBGETOPTION( 3ll );
		TMP$242$2 = (uint64)vr$393;
		goto label$396;
		label$397:;
		{
			int64 F$3;
			int32 vr$394 = fb_FileFree(  );
			F$3 = (int64)vr$394;
			FBSTRING* vr$398 = fb_StrAllocTempDescZ( (char*)((uint8*)&FBC$ + 968ll) );
			int32 vr$399 = fb_FileOpen( (FBSTRING*)vr$398, 0u, 3u, 0u, (int32)F$3, 0 );
			if( (int64)vr$399 == 0ll ) goto label$399;
			{
				fb_StrDelete( (FBSTRING*)&DEFFILE$1 );
				fb_StrDelete( (FBSTRING*)&DLLNAME$1 );
				fb_StrDelete( (FBSTRING*)&LDCLINE$1 );
				goto label$208;
			}
			label$399:;
			label$398:;
			int32 VALUE$3;
			int64 vr$404 = FBGETOPTION( 38ll );
			VALUE$3 = (int32)vr$404;
			int32 vr$408 = fb_FilePutLarge( (int32)F$3, 533ll, (void*)&VALUE$3, 4ull );
			if( (int64)vr$408 == 0ll ) goto label$400;
			void* vr$410 = fb_ErrorThrowAt( 1268, (char*)"src/compiler/fbc.bas", (void*)0ull, (void*)0ull );
			goto *vr$410;
			label$400:;
			int32 vr$412 = fb_FileClose( (int32)F$3 );
			if( (int64)vr$412 == 0ll ) goto label$401;
			void* vr$414 = fb_ErrorThrowAt( 1270, (char*)"src/compiler/fbc.bas", (void*)0ull, (void*)0ull );
			goto *vr$414;
			label$401:;
		}
		goto label$395;
		label$402:;
		{
			int64 vr$415 = FBGETOPTION( 0ll );
			if( vr$415 != 2ll ) goto label$404;
			{
				int64 vr$418 = MAKEIMPLIB( &DLLNAME$1, &DEFFILE$1 );
				if( vr$418 != 0ll ) goto label$406;
				{
					fb_StrDelete( (FBSTRING*)&DEFFILE$1 );
					fb_StrDelete( (FBSTRING*)&DLLNAME$1 );
					fb_StrDelete( (FBSTRING*)&LDCLINE$1 );
					goto label$208;
				}
				label$406:;
				label$405:;
			}
			label$404:;
			label$403:;
		}
		goto label$395;
		label$407:;
		{
			FBSTRING TMP$254$3;
			FBSTRING TMP$259$3;
			FBSTRING TMP$260$3;
			FBSTRING CXBEPATH$3;
			__builtin_memset( &CXBEPATH$3, 0, 24ll );
			FBSTRING CXBECLINE$3;
			__builtin_memset( &CXBECLINE$3, 0, 24ll );
			int64 RES$3;
			int64 vr$425 = fb_StrLen( (void*)((uint8*)&FBC$ + 2354ll), 129ll );
			if( vr$425 != 0ll ) goto label$409;
			{
				FBSTRING TMP$243$4;
				__builtin_memset( &TMP$243$4, 0, 24ll );
				fb_StrAssign( (void*)&TMP$243$4, -1ll, (void*)((uint8*)&FBC$ + 968ll), 261ll, 0 );
				FBSTRING* vr$430 = HSTRIPEXT( &TMP$243$4 );
				fb_StrAssign( (void*)((uint8*)&FBC$ + 2354ll), 129ll, (void*)vr$430, -1ll, 0 );
				fb_StrDelete( (FBSTRING*)&TMP$243$4 );
			}
			label$409:;
			label$408:;
			fb_StrAssign( (void*)&CXBECLINE$3, -1ll, (void*)"-TITLE:\x22", 9ll, 0 );
			fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)((uint8*)&FBC$ + 2354ll), 129ll, 0 );
			fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)"\x22 ", 3ll, 0 );
			int64 vr$437 = FBGETOPTION( 14ll );
			if( vr$437 == 0ll ) goto label$411;
			{
				FBSTRING TMP$249$4;
				fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)"-DUMPINFO:\x22", 12ll, 0 );
				__builtin_memset( &TMP$249$4, 0, 24ll );
				fb_StrAssign( (void*)&TMP$249$4, -1ll, (void*)((uint8*)&FBC$ + 968ll), 261ll, 0 );
				FBSTRING* vr$443 = HSTRIPEXT( &TMP$249$4 );
				fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)vr$443, -1ll, 0 );
				fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)".cxbe\x22", 7ll, 0 );
				fb_StrDelete( (FBSTRING*)&TMP$249$4 );
			}
			label$411:;
			label$410:;
			fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)" -OUT:\x22", 8ll, 0 );
			__builtin_memset( &TMP$254$3, 0, 24ll );
			fb_StrAssign( (void*)&TMP$254$3, -1ll, (void*)((uint8*)&FBC$ + 968ll), 261ll, 0 );
			FBSTRING* vr$452 = HSTRIPEXT( &TMP$254$3 );
			fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)vr$452, -1ll, 0 );
			fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)".xbe", 5ll, 0 );
			fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)"\x22", 2ll, 0 );
			fb_StrDelete( (FBSTRING*)&TMP$254$3 );
			fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)" \x22", 3ll, 0 );
			fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)((uint8*)&FBC$ + 968ll), 261ll, 0 );
			fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)"\x22", 2ll, 0 );
			if( *(int64*)((uint8*)&FBC$ + 112ll) != 0ll ) goto label$413;
			{
				fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)" >nul", 6ll, 0 );
			}
			label$413:;
			label$412:;
			if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$415;
			{
				FBSTRING* vr$462 = fb_StrAllocTempDescZEx( (char*)"cxbe: ", 6ll );
				fb_PrintString( 0, (FBSTRING*)vr$462, 2 );
				fb_PrintString( 0, (FBSTRING*)&CXBECLINE$3, 1 );
			}
			label$415:;
			label$414:;
			FBCFINDBIN( 9ll, &CXBEPATH$3 );
			__builtin_memset( &TMP$259$3, 0, 24ll );
			FBSTRING* vr$469 = fb_StrConcat( &TMP$259$3, (void*)&CXBEPATH$3, -1ll, (void*)" ", 2ll );
			__builtin_memset( &TMP$260$3, 0, 24ll );
			FBSTRING* vr$472 = fb_StrConcat( &TMP$260$3, (void*)vr$469, -1ll, (void*)&CXBECLINE$3, -1ll );
			int32 vr$473 = fb_Shell( (FBSTRING*)vr$472 );
			RES$3 = (int64)vr$473;
			if( RES$3 == 0ll ) goto label$417;
			{
				if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$419;
				{
					FBSTRING TMP$262$5;
					FBSTRING* vr$475 = fb_LongintToStr( RES$3 );
					__builtin_memset( &TMP$262$5, 0, 24ll );
					FBSTRING* vr$478 = fb_StrConcat( &TMP$262$5, (void*)"cxbe failed: exit code ", 24ll, (void*)vr$475, -1ll );
					fb_PrintString( 0, (FBSTRING*)vr$478, 1 );
				}
				label$419:;
				label$418:;
				fb_StrDelete( (FBSTRING*)&CXBECLINE$3 );
				fb_StrDelete( (FBSTRING*)&CXBEPATH$3 );
				fb_StrDelete( (FBSTRING*)&DEFFILE$1 );
				fb_StrDelete( (FBSTRING*)&DLLNAME$1 );
				fb_StrDelete( (FBSTRING*)&LDCLINE$1 );
				goto label$208;
			}
			label$417:;
			label$416:;
			FBSTRING* vr$485 = fb_StrAllocTempDescZ( (char*)((uint8*)&FBC$ + 968ll) );
			fb_FileKill( (FBSTRING*)vr$485 );
			fb_StrDelete( (FBSTRING*)&CXBECLINE$3 );
			fb_StrDelete( (FBSTRING*)&CXBEPATH$3 );
		}
		goto label$395;
		label$396:;
		static const void* tmp$800[5ll] = {
			&&label$402,
			&&label$402,
			&&label$395,
			&&label$397,
			&&label$407,
		};
		if( TMP$242$2 > 4ull ) goto label$395;
		goto *tmp$800[TMP$242$2 - 0ull];
		label$395:;
	}
	fb$result$1 = -1ll;
	fb_StrDelete( (FBSTRING*)&DEFFILE$1 );
	fb_StrDelete( (FBSTRING*)&DLLNAME$1 );
	fb_StrDelete( (FBSTRING*)&LDCLINE$1 );
	label$208:;
	return fb$result$1;
}

static void HREADOBJINFO( void )
{
	label$420:;
	FBSTRING DAT$1;
	__builtin_memset( &DAT$1, 0, 24ll );
	int64 LANG$1;
	label$422:;
	{
		{
			uint64 TMP$263$3;
			int64 vr$2 = OBJINFOREADNEXT( &DAT$1 );
			TMP$263$3 = (uint64)vr$2;
			goto label$426;
			label$427:;
			{
				STRSETADD( (struct $7TSTRSET*)((uint8*)&FBC$ + 792ll), &DAT$1, 0ll );
			}
			goto label$425;
			label$428:;
			{
				STRSETADD( (struct $7TSTRSET*)((uint8*)&FBC$ + 880ll), &DAT$1, 0ll );
			}
			goto label$425;
			label$429:;
			{
				if( *(int64*)((uint8*)&FBC$ + 3832ll) != 0ll ) goto label$431;
				{
					char* vr$7 = OBJINFOGETFILENAME(  );
					ERRREPORTWARNEX( 20ll, (char*)vr$7, -1ll, 1ll, (char*)0ull );
					*(int64*)((uint8*)&FBC$ + 3832ll) = -1ll;
					FBSETOPTION( 35ll, -1ll );
				}
				label$431:;
				label$430:;
			}
			goto label$425;
			label$432:;
			{
				FBSETOPTION( 36ll, -1ll );
			}
			goto label$425;
			label$433:;
			{
				$7FB_LANG vr$8 = FBGETLANGID( (char*)*(char**)&DAT$1 );
				LANG$1 = vr$8;
				if( LANG$1 != -1ll ) goto label$435;
				{
					LANG$1 = 0ll;
				}
				label$435:;
				label$434:;
				if( LANG$1 == *(int64*)((uint8*)&FBC$ + 3824ll) ) goto label$437;
				{
					char* vr$9 = OBJINFOGETFILENAME(  );
					ERRREPORTWARNEX( 21ll, (char*)vr$9, -1ll, 1ll, (char*)0ull );
					*($7FB_LANG*)((uint8*)&FBC$ + 3824ll) = LANG$1;
					FBSETOPTION( 10ll, LANG$1 );
				}
				label$437:;
				label$436:;
			}
			goto label$425;
			label$438:;
			{
				goto label$423;
			}
			goto label$425;
			label$426:;
			static const void* tmp$801[5ll] = {
				&&label$427,
				&&label$428,
				&&label$429,
				&&label$432,
				&&label$433,
			};
			if( TMP$263$3 > 4ull ) goto label$438;
			goto *tmp$801[TMP$263$3 - 0ull];
			label$425:;
		}
	}
	label$424:;
	goto label$422;
	label$423:;
	OBJINFOREADEND(  );
	fb_StrDelete( (FBSTRING*)&DAT$1 );
	label$421:;
}

static void HCOLLECTOBJINFO( void )
{
	label$439:;
	FBSTRING* S$1;
	struct $11TSTRSETITEM* I$1;
	void* vr$1 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 400ll) );
	S$1 = (FBSTRING*)vr$1;
	label$441:;
	if( S$1 == (FBSTRING*)0ull ) goto label$442;
	{
		OBJINFOREADOBJ( S$1 );
		HREADOBJINFO(  );
		void* vr$2 = LISTGETNEXT( (void*)S$1 );
		S$1 = (FBSTRING*)vr$2;
	}
	goto label$441;
	label$442:;
	void* vr$4 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 792ll) );
	I$1 = (struct $11TSTRSETITEM*)vr$4;
	label$443:;
	if( I$1 == (struct $11TSTRSETITEM*)0ull ) goto label$444;
	{
		if( *(int64*)((uint8*)I$1 + 24ll) != 0ll ) goto label$446;
		{
			OBJINFOREADLIB( (FBSTRING*)I$1, (struct $5TLIST*)((uint8*)&FBC$ + 880ll) );
			HREADOBJINFO(  );
		}
		label$446:;
		label$445:;
		void* vr$9 = LISTGETNEXT( (void*)I$1 );
		I$1 = (struct $11TSTRSETITEM*)vr$9;
	}
	goto label$443;
	label$444:;
	void* vr$11 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 464ll) );
	S$1 = (FBSTRING*)vr$11;
	label$447:;
	if( S$1 == (FBSTRING*)0ull ) goto label$448;
	{
		OBJINFOREADLIBFILE( S$1 );
		HREADOBJINFO(  );
		void* vr$12 = LISTGETNEXT( (void*)S$1 );
		S$1 = (FBSTRING*)vr$12;
	}
	goto label$447;
	label$448:;
	label$440:;
}

static void HFATALINVALIDOPTION( FBSTRING* ARG$1, int64 IS_SOURCE$1 )
{
	FBSTRING TMP$264$1;
	FBSTRING TMP$265$1;
	FBSTRING TMP$266$1;
	int64 TMP$267$1;
	label$449:;
	if( IS_SOURCE$1 == 0ll ) goto label$451;
	TMP$267$1 = 0ll;
	goto label$1464;
	label$451:;
	TMP$267$1 = -1ll;
	label$1464:;
	__builtin_memset( &TMP$266$1, 0, 24ll );
	__builtin_memset( &TMP$264$1, 0, 24ll );
	FBSTRING* vr$3 = fb_StrConcat( &TMP$264$1, (void*)"\x22", 2ll, (void*)ARG$1, -1ll );
	__builtin_memset( &TMP$265$1, 0, 24ll );
	FBSTRING* vr$6 = fb_StrConcat( &TMP$265$1, (void*)vr$3, -1ll, (void*)"\x22", 2ll );
	fb_StrAssign( (void*)&TMP$266$1, -1ll, (void*)vr$6, -1ll, 0 );
	ERRREPORTEX( 81ll, (char*)*(char**)&TMP$266$1, TMP$267$1, 1ll, (char*)0ull );
	fb_StrDelete( (FBSTRING*)&TMP$266$1 );
	FBCEND( 1ll );
	label$450:;
}

static void HCHECKWAITINGOBJFILE( void )
{
	label$452:;
	int64 vr$1 = fb_StrLen( (void*)((uint8*)&FBC$ + 16ll), -1ll );
	if( vr$1 <= 0ll ) goto label$455;
	{
		FBSTRING TMP$268$2;
		FBSTRING TMP$269$2;
		__builtin_memset( &TMP$269$2, 0, 24ll );
		__builtin_memset( &TMP$268$2, 0, 24ll );
		FBSTRING* vr$6 = fb_StrConcat( &TMP$268$2, (void*)"-o ", 4ll, (void*)((uint8*)&FBC$ + 16ll), -1ll );
		fb_StrAssign( (void*)&TMP$269$2, -1ll, (void*)vr$6, -1ll, 0 );
		ERRREPORTEX( 292ll, (char*)*(char**)&TMP$269$2, -1ll, 1ll, (char*)0ull );
		fb_StrDelete( (FBSTRING*)&TMP$269$2 );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 16ll), -1ll, (void*)"", 1ll, 0 );
	}
	label$455:;
	label$454:;
	label$453:;
}

static void HSETIOFILE( struct $9FBCIOFILE* MODULE$1, FBSTRING* SRCFILE$1, int64 IS_RC$1 )
{
	label$456:;
	fb_StrAssign( (void*)MODULE$1, -1ll, (void*)SRCFILE$1, -1ll, 0 );
	int64 vr$3 = fb_StrLen( (void*)((uint8*)&FBC$ + 16ll), -1ll );
	if( vr$3 != 0ll ) goto label$459;
	{
		*(int64*)((uint8*)MODULE$1 + 32ll) = 0ll;
		if( IS_RC$1 == 0ll ) goto label$461;
		{
			FBSTRING TMP$271$3;
			__builtin_memset( &TMP$271$3, 0, 24ll );
			FBSTRING* vr$7 = fb_StrConcat( &TMP$271$3, (void*)SRCFILE$1, -1ll, (void*)".o", 3ll );
			fb_StrAssign( (void*)((uint8*)&FBC$ + 16ll), -1ll, (void*)vr$7, -1ll, 0 );
		}
		goto label$460;
		label$461:;
		{
			FBSTRING TMP$272$3;
			FBSTRING* vr$9 = HSTRIPEXT( SRCFILE$1 );
			__builtin_memset( &TMP$272$3, 0, 24ll );
			FBSTRING* vr$12 = fb_StrConcat( &TMP$272$3, (void*)vr$9, -1ll, (void*)".o", 3ll );
			fb_StrAssign( (void*)((uint8*)&FBC$ + 16ll), -1ll, (void*)vr$12, -1ll, 0 );
		}
		label$460:;
		*(struct $9FBCIOFILE**)((uint8*)&FBC$ + 8ll) = MODULE$1;
	}
	goto label$458;
	label$459:;
	{
		*(int64*)((uint8*)MODULE$1 + 32ll) = -1ll;
	}
	label$458:;
	FBSTRING* vr$16 = FBCADDOBJ( (FBSTRING*)((uint8*)&FBC$ + 16ll) );
	*(FBSTRING**)((uint8*)MODULE$1 + 24ll) = vr$16;
	fb_StrAssign( (void*)((uint8*)&FBC$ + 16ll), -1ll, (void*)"", 1ll, 0 );
	label$457:;
}

static void HADDBAS( FBSTRING* BASFILE$1 )
{
	label$462:;
	void* vr$1 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&FBC$ + 144ll) );
	HSETIOFILE( (struct $9FBCIOFILE*)vr$1, BASFILE$1, 0ll );
	label$463:;
}

static void HPARSEGNUTRIPLET( FBSTRING* ARG$1, int64 SEPARATOR$1, int64* OS$1, int64* CPUTYPE$1 )
{
	label$464:;
	{
		int64 I$2;
		I$2 = 0ll;
		label$469:;
		{
			FBSTRING* vr$1 = fb_StrAllocTempDescZ( (char*)*(char**)((int64)(struct $11FBGNUOSINFO*)GNUOSMAP$ + (I$2 << (4ll & 63ll))) );
			int64 vr$2 = fb_StrInstr( 1ll, (FBSTRING*)ARG$1, (FBSTRING*)vr$1 );
			if( vr$2 <= 0ll ) goto label$471;
			{
				*OS$1 = *(int64*)(((int64)(struct $11FBGNUOSINFO*)GNUOSMAP$ + (I$2 << (4ll & 63ll))) + 8ll);
				goto label$468;
			}
			label$471:;
			label$470:;
		}
		label$467:;
		I$2 = I$2 + 1ll;
		label$466:;
		if( I$2 <= 11ll ) goto label$469;
		label$468:;
	}
	if( SEPARATOR$1 <= 0ll ) goto label$473;
	{
		FBSTRING ARCH$2;
		FBSTRING* vr$7 = fb_LEFT( (FBSTRING*)ARG$1, SEPARATOR$1 + -1ll );
		fb_StrInit( (void*)&ARCH$2, -1ll, (void*)vr$7, -1ll, 0 );
		{
			int64 I$3;
			I$3 = 0ll;
			label$477:;
			{
				int32 vr$11 = fb_StrCompare( (void*)&ARCH$2, -1ll, *(void**)((int64)(struct $13FBGNUARCHINFO*)GNUARCHMAP$ + (I$3 << (4ll & 63ll))), 0ll );
				if( (int64)vr$11 != 0ll ) goto label$479;
				{
					*CPUTYPE$1 = *(int64*)(((int64)(struct $13FBGNUARCHINFO*)GNUARCHMAP$ + (I$3 << (4ll & 63ll))) + 8ll);
					goto label$476;
				}
				label$479:;
				label$478:;
			}
			label$475:;
			I$3 = I$3 + 1ll;
			label$474:;
			if( I$3 <= 18ll ) goto label$477;
			label$476:;
		}
		fb_StrDelete( (FBSTRING*)&ARCH$2 );
	}
	label$473:;
	label$472:;
	label$465:;
}

static void HPARSETARGETARG( FBSTRING* ARG$1, int64* OS$1, int64* CPUTYPE$1, int64* IS_GNU_TRIPLET$1 )
{
	label$488:;
	*OS$1 = -1ll;
	*CPUTYPE$1 = -1ll;
	*IS_GNU_TRIPLET$1 = 0ll;
	FBSTRING LCASEARG$1;
	FBSTRING* vr$3 = fb_StrLcase2( (FBSTRING*)ARG$1, 0 );
	fb_StrInit( (void*)&LCASEARG$1, -1ll, (void*)vr$3, -1ll, 0 );
	{
		int64 I$2;
		I$2 = 0ll;
		label$493:;
		{
			int32 vr$7 = fb_StrCompare( (void*)&LCASEARG$1, -1ll, *(void**)((int64)(struct $12FBOSARCHINFO*)FBOSARCHMAP$ + (I$2 * 24ll)), 0ll );
			if( (int64)vr$7 != 0ll ) goto label$495;
			{
				*OS$1 = *(int64*)(((int64)(struct $12FBOSARCHINFO*)FBOSARCHMAP$ + (I$2 * 24ll)) + 8ll);
				*CPUTYPE$1 = *(int64*)(((int64)(struct $12FBOSARCHINFO*)FBOSARCHMAP$ + (I$2 * 24ll)) + 16ll);
				fb_StrDelete( (FBSTRING*)&LCASEARG$1 );
				goto label$489;
			}
			label$495:;
			label$494:;
		}
		label$491:;
		I$2 = I$2 + 1ll;
		label$490:;
		if( I$2 <= 11ll ) goto label$493;
		label$492:;
	}
	int64 SEPARATOR$1;
	FBSTRING* vr$15 = fb_StrAllocTempDescZEx( (char*)"-", 1ll );
	int64 vr$16 = fb_StrInstr( 1ll, (FBSTRING*)ARG$1, (FBSTRING*)vr$15 );
	SEPARATOR$1 = vr$16;
	if( SEPARATOR$1 <= 0ll ) goto label$497;
	{
		FBSTRING TMP$311$2;
		FBSTRING TMP$312$2;
		__builtin_memset( &TMP$311$2, 0, 24ll );
		FBSTRING* vr$20 = fb_LEFT( (FBSTRING*)&LCASEARG$1, SEPARATOR$1 + -1ll );
		fb_StrAssign( (void*)&TMP$311$2, -1ll, (void*)vr$20, -1ll, 0 );
		int64 vr$23 = FBIDENTIFYOS( &TMP$311$2 );
		*OS$1 = vr$23;
		fb_StrDelete( (FBSTRING*)&TMP$311$2 );
		__builtin_memset( &TMP$312$2, 0, 24ll );
		int64 vr$28 = fb_StrLen( (void*)&LCASEARG$1, -1ll );
		FBSTRING* vr$31 = fb_RIGHT( (FBSTRING*)&LCASEARG$1, vr$28 - SEPARATOR$1 );
		fb_StrAssign( (void*)&TMP$312$2, -1ll, (void*)vr$31, -1ll, 0 );
		int64 vr$34 = FBCPUTYPEFROMCPUFAMILYID( &TMP$312$2 );
		*CPUTYPE$1 = vr$34;
		fb_StrDelete( (FBSTRING*)&TMP$312$2 );
	}
	label$497:;
	label$496:;
	if( ((int64)-(*OS$1 < 0ll) & (int64)-(*CPUTYPE$1 < 0ll)) == 0ll ) goto label$499;
	{
		HPARSEGNUTRIPLET( ARG$1, SEPARATOR$1, OS$1, CPUTYPE$1 );
		*IS_GNU_TRIPLET$1 = -1ll;
	}
	label$499:;
	label$498:;
	fb_StrDelete( (FBSTRING*)&LCASEARG$1 );
	label$489:;
}

static void HANDLEOPT( int64 OPTID$1, FBSTRING* ARG$1, int64 IS_SOURCE$1 )
{
	label$500:;
	{
		uint64 TMP$315$2;
		TMP$315$2 = (uint64)OPTID$1;
		goto label$503;
		label$504:;
		{
			FBCADDOBJ( ARG$1 );
		}
		goto label$502;
		label$505:;
		{
			int32 vr$0 = fb_StrCompare( (void*)ARG$1, -1ll, (void*)"native", 7ll );
			*(int64*)((uint8*)&FBC$ + 56ll) = (int64)-((int64)vr$0 == 0ll);
			int64 vr$3 = FBIDENTIFYFBCARCH( ARG$1 );
			*(int64*)((uint8*)&FBC$ + 48ll) = vr$3;
			if( *(int64*)((uint8*)&FBC$ + 48ll) >= 0ll ) goto label$507;
			{
				FBSTRING TMP$318$4;
				FBSTRING TMP$319$4;
				__builtin_memset( &TMP$319$4, 0, 24ll );
				__builtin_memset( &TMP$318$4, 0, 24ll );
				FBSTRING* vr$7 = fb_StrConcat( &TMP$318$4, (void*)"-arch ", 7ll, (void*)ARG$1, -1ll );
				fb_StrAssign( (void*)&TMP$319$4, -1ll, (void*)vr$7, -1ll, 0 );
				HFATALINVALIDOPTION( &TMP$319$4, IS_SOURCE$1 );
				fb_StrDelete( (FBSTRING*)&TMP$319$4 );
			}
			label$507:;
			label$506:;
		}
		goto label$502;
		label$508:;
		{
			{
				FBSTRING TMP$320$4;
				fb_StrInit( (void*)&TMP$320$4, -1ll, (void*)ARG$1, -1ll, 0 );
				int32 vr$13 = fb_StrCompare( (void*)&TMP$320$4, -1ll, (void*)"att", 4ll );
				if( (int64)vr$13 != 0ll ) goto label$510;
				label$511:;
				{
					*(int64*)((uint8*)&FBC$ + 64ll) = 1ll;
				}
				goto label$509;
				label$510:;
				int32 vr$16 = fb_StrCompare( (void*)&TMP$320$4, -1ll, (void*)"intel", 6ll );
				if( (int64)vr$16 != 0ll ) goto label$512;
				label$513:;
				{
					*(int64*)((uint8*)&FBC$ + 64ll) = 0ll;
				}
				goto label$509;
				label$512:;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$514:;
				label$509:;
				fb_StrDelete( (FBSTRING*)&TMP$320$4 );
			}
		}
		goto label$502;
		label$515:;
		{
			HADDBAS( ARG$1 );
		}
		goto label$502;
		label$516:;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 3556ll), 261ll, (void*)ARG$1, -1ll, 0 );
		}
		goto label$502;
		label$517:;
		{
			FBSETOPTION( 0ll, 3ll );
			*(int64*)((uint8*)&FBC$ + 104ll) = -1ll;
		}
		goto label$502;
		label$518:;
		{
			*(int64*)((uint8*)&FBC$ + 104ll) = -1ll;
		}
		goto label$502;
		label$519:;
		{
			FBADDPREDEFINE( ARG$1 );
		}
		goto label$502;
		label$520:;
		{
			FBSETOPTION( 0ll, 2ll );
		}
		goto label$502;
		label$521:;
		{
			FBSETOPTION( 16ll, -1ll );
			FBSETOPTION( 21ll, -1ll );
		}
		goto label$502;
		label$522:;
		{
			FBSETOPTION( 22ll, -1ll );
		}
		goto label$502;
		label$523:;
		{
			FBSETOPTION( 15ll, -1ll );
		}
		goto label$502;
		label$524:;
		{
			FBSETOPTION( 13ll, -1ll );
		}
		goto label$502;
		label$525:;
		{
			FBSETOPTION( 14ll, -1ll );
		}
		goto label$502;
		label$526:;
		{
			FBSETOPTION( 19ll, -1ll );
		}
		goto label$502;
		label$527:;
		{
			FBSETOPTION( 20ll, -1ll );
		}
		goto label$502;
		label$528:;
		{
			FBSETOPTION( 21ll, -1ll );
		}
		goto label$502;
		label$529:;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 1490ll), 129ll, (void*)ARG$1, -1ll, 0 );
		}
		goto label$502;
		label$530:;
		{
			FBSETOPTION( 16ll, -1ll );
			FBSETOPTION( 17ll, -1ll );
			FBSETOPTION( 21ll, -1ll );
		}
		goto label$502;
		label$531:;
		{
			FBSETOPTION( 16ll, -1ll );
			FBSETOPTION( 17ll, -1ll );
			FBSETOPTION( 18ll, -1ll );
			FBSETOPTION( 19ll, -1ll );
			FBSETOPTION( 22ll, -1ll );
			FBSETOPTION( 20ll, -1ll );
			FBSETOPTION( 21ll, -1ll );
		}
		goto label$502;
		label$532:;
		{
			FBSETOPTION( 33ll, -1ll );
		}
		goto label$502;
		label$533:;
		{
			FBSETOPTION( 36ll, -1ll );
		}
		goto label$502;
		label$534:;
		{
			int64 VALUE$3;
			$7FB_LANG vr$22 = FBGETLANGID( (char*)*(char**)ARG$1 );
			VALUE$3 = vr$22;
			if( VALUE$3 != -1ll ) goto label$536;
			{
				HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
			}
			label$536:;
			label$535:;
			int64 vr$23 = FBGETOPTION( 11ll );
			if( (IS_SOURCE$1 & vr$23) == 0ll ) goto label$538;
			{
				ERRREPORTWARN( 30ll, (char*)0ull, 1ll, (char*)0ull );
			}
			goto label$537;
			label$538:;
			{
				FBSETOPTION( 10ll, VALUE$3 );
				FBSETOPTION( 11ll, -1ll );
				*($7FB_LANG*)((uint8*)&FBC$ + 3824ll) = VALUE$3;
				if( IS_SOURCE$1 == 0ll ) goto label$540;
				{
					FBSETOPTION( 12ll, VALUE$3 );
				}
				label$540:;
				label$539:;
			}
			label$537:;
		}
		goto label$502;
		label$541:;
		{
			int64 VALUE$3;
			{
				FBSTRING TMP$323$4;
				FBSTRING* vr$25 = fb_StrUcase2( (FBSTRING*)ARG$1, 0 );
				fb_StrInit( (void*)&TMP$323$4, -1ll, (void*)vr$25, -1ll, 0 );
				int32 vr$28 = fb_StrCompare( (void*)&TMP$323$4, -1ll, (void*)"PRECISE", 8ll );
				if( (int64)vr$28 != 0ll ) goto label$543;
				label$544:;
				{
					VALUE$3 = 0ll;
				}
				goto label$542;
				label$543:;
				int32 vr$31 = fb_StrCompare( (void*)&TMP$323$4, -1ll, (void*)"FAST", 5ll );
				if( (int64)vr$31 != 0ll ) goto label$545;
				label$546:;
				{
					VALUE$3 = 1ll;
				}
				goto label$542;
				label$545:;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$547:;
				label$542:;
				fb_StrDelete( (FBSTRING*)&TMP$323$4 );
			}
			FBSETOPTION( 6ll, VALUE$3 );
		}
		goto label$502;
		label$548:;
		{
			int64 VALUE$3;
			{
				FBSTRING TMP$326$4;
				FBSTRING* vr$34 = fb_StrUcase2( (FBSTRING*)ARG$1, 0 );
				fb_StrInit( (void*)&TMP$326$4, -1ll, (void*)vr$34, -1ll, 0 );
				int32 vr$37 = fb_StrCompare( (void*)&TMP$326$4, -1ll, (void*)"X87", 4ll );
				if( (int64)vr$37 == 0ll ) goto label$551;
				label$552:;
				int32 vr$40 = fb_StrCompare( (void*)&TMP$326$4, -1ll, (void*)"FPU", 4ll );
				if( (int64)vr$40 != 0ll ) goto label$550;
				label$551:;
				{
					VALUE$3 = 0ll;
				}
				goto label$549;
				label$550:;
				int32 vr$43 = fb_StrCompare( (void*)&TMP$326$4, -1ll, (void*)"SSE", 4ll );
				if( (int64)vr$43 != 0ll ) goto label$553;
				label$554:;
				{
					VALUE$3 = 1ll;
				}
				goto label$549;
				label$553:;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$555:;
				label$549:;
				fb_StrDelete( (FBSTRING*)&TMP$326$4 );
			}
			FBSETOPTION( 5ll, VALUE$3 );
		}
		goto label$502;
		label$556:;
		{
			FBSETOPTION( 13ll, -1ll );
			FBSETOPTION( 14ll, -1ll );
			FBSETOPTION( 15ll, -1ll );
		}
		goto label$502;
		label$557:;
		{
			{
				FBSTRING TMP$330$4;
				FBSTRING* vr$46 = fb_StrLcase2( (FBSTRING*)ARG$1, 0 );
				fb_StrInit( (void*)&TMP$330$4, -1ll, (void*)vr$46, -1ll, 0 );
				int32 vr$49 = fb_StrCompare( (void*)&TMP$330$4, -1ll, (void*)"gas", 4ll );
				if( (int64)vr$49 != 0ll ) goto label$559;
				label$560:;
				{
					*(int64*)((uint8*)&FBC$ + 40ll) = 0ll;
				}
				goto label$558;
				label$559:;
				int32 vr$52 = fb_StrCompare( (void*)&TMP$330$4, -1ll, (void*)"gcc", 4ll );
				if( (int64)vr$52 != 0ll ) goto label$561;
				label$562:;
				{
					*(int64*)((uint8*)&FBC$ + 40ll) = 1ll;
				}
				goto label$558;
				label$561:;
				int32 vr$55 = fb_StrCompare( (void*)&TMP$330$4, -1ll, (void*)"llvm", 5ll );
				if( (int64)vr$55 != 0ll ) goto label$563;
				label$564:;
				{
					*(int64*)((uint8*)&FBC$ + 40ll) = 2ll;
				}
				goto label$558;
				label$563:;
				int32 vr$58 = fb_StrCompare( (void*)&TMP$330$4, -1ll, (void*)"gas64", 6ll );
				if( (int64)vr$58 != 0ll ) goto label$565;
				label$566:;
				{
					*(int64*)((uint8*)&FBC$ + 40ll) = 3ll;
				}
				goto label$558;
				label$565:;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$567:;
				label$558:;
				fb_StrDelete( (FBSTRING*)&TMP$330$4 );
			}
		}
		goto label$502;
		label$568:;
		{
			*(int64*)((uint8*)&FBC$ + 128ll) = -1ll;
		}
		goto label$502;
		label$569:;
		{
			FBSTRING TMP$334$3;
			__builtin_memset( &TMP$334$3, 0, 24ll );
			FBSTRING* vr$62 = PATHSTRIPDIV( ARG$1 );
			fb_StrAssign( (void*)&TMP$334$3, -1ll, (void*)vr$62, -1ll, 0 );
			FBADDINCLUDEPATH( &TMP$334$3 );
			fb_StrDelete( (FBSTRING*)&TMP$334$3 );
		}
		goto label$502;
		label$570:;
		{
			FBADDPREINCLUDE( ARG$1 );
		}
		goto label$502;
		label$571:;
		{
			STRSETADD( (struct $7TSTRSET*)((uint8*)&FBC$ + 528ll), ARG$1, 0ll );
		}
		goto label$502;
		label$572:;
		{
			int64 VALUE$3;
			$7FB_LANG vr$68 = FBGETLANGID( (char*)*(char**)ARG$1 );
			VALUE$3 = vr$68;
			if( VALUE$3 != -1ll ) goto label$574;
			{
				HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
			}
			label$574:;
			label$573:;
			int64 vr$69 = FBGETOPTION( 11ll );
			if( vr$69 != 0ll ) goto label$576;
			{
				FBSETOPTION( 10ll, VALUE$3 );
				*($7FB_LANG*)((uint8*)&FBC$ + 3824ll) = VALUE$3;
				if( IS_SOURCE$1 == 0ll ) goto label$578;
				{
					FBSETOPTION( 12ll, VALUE$3 );
				}
				label$578:;
				label$577:;
			}
			label$576:;
			label$575:;
		}
		goto label$502;
		label$579:;
		{
			FBSETOPTION( 0ll, 1ll );
		}
		goto label$502;
		label$580:;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 1229ll), 261ll, (void*)ARG$1, -1ll, 0 );
			*(int64*)((uint8*)&FBC$ + 1624ll) = -1ll;
		}
		goto label$502;
		label$581:;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 1632ll), 261ll, (void*)ARG$1, -1ll, 0 );
		}
		goto label$502;
		label$582:;
		{
			int64 VALUE$3;
			int32 vr$72 = fb_StrCompare( (void*)ARG$1, -1ll, (void*)"inf", 4ll );
			if( (int64)vr$72 != 0ll ) goto label$584;
			{
				VALUE$3 = 2147483647ll;
			}
			goto label$583;
			label$584:;
			{
				int32 vr$74 = fb_VALINT( (FBSTRING*)ARG$1 );
				VALUE$3 = (int64)vr$74;
				if( VALUE$3 > 0ll ) goto label$586;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$586:;
				label$585:;
			}
			label$583:;
			FBSETOPTION( 26ll, VALUE$3 );
		}
		goto label$502;
		label$587:;
		{
			FBSETOPTION( 35ll, -1ll );
			*(int64*)((uint8*)&FBC$ + 3832ll) = -1ll;
		}
		goto label$502;
		label$588:;
		{
			*(int64*)((uint8*)&FBC$ + 2488ll) = -1ll;
		}
		goto label$502;
		label$589:;
		{
			FBSETOPTION( 25ll, 0ll );
		}
		goto label$502;
		label$590:;
		{
			FBSTRING TMP$336$3;
			struct $7FBARRAYI8FBSTRINGE LIBS$3;
			*(FBSTRING**)&LIBS$3 = (FBSTRING*)0ull;
			*(FBSTRING**)((uint8*)&LIBS$3 + 8ll) = (FBSTRING*)0ull;
			*(int64*)((uint8*)&LIBS$3 + 16ll) = 0ll;
			*(int64*)((uint8*)&LIBS$3 + 24ll) = 24ll;
			*(int64*)((uint8*)&LIBS$3 + 32ll) = 0ll;
			*(int64*)((uint8*)&LIBS$3 + 40ll) = 8ll;
			__builtin_memset( (void*)((uint8*)&LIBS$3 + 48ll), 0, 192ll );
			__builtin_memset( &TMP$336$3, 0, 24ll );
			fb_StrAssign( (void*)&TMP$336$3, -1ll, (void*)",", 2ll, 0 );
			HSPLITSTR( ARG$1, &TMP$336$3, &LIBS$3 );
			fb_StrDelete( (FBSTRING*)&TMP$336$3 );
			{
				int64 I$4;
				int64 vr$83 = fb_ArrayLBound( (struct $7FBARRAYIKvE*)&LIBS$3, 1ll );
				I$4 = vr$83;
				int64 TMP$337$4;
				int64 vr$85 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)&LIBS$3, 1ll );
				TMP$337$4 = vr$85;
				goto label$591;
				label$594:;
				{
					int64 vr$89 = fb_StrLen( (void*)((I$4 * 24ll) + *(int64*)&LIBS$3), -1ll );
					if( vr$89 <= 0ll ) goto label$596;
					{
						STRSETADD( (struct $7TSTRSET*)((uint8*)&FBC$ + 704ll), (FBSTRING*)((I$4 * 24ll) + *(int64*)&LIBS$3), 0ll );
					}
					label$596:;
					label$595:;
				}
				label$592:;
				I$4 = I$4 + 1ll;
				label$591:;
				if( I$4 <= TMP$337$4 ) goto label$594;
				label$593:;
			}
			fb_ArrayStrErase( (struct $7FBARRAYIvE*)&LIBS$3 );
		}
		goto label$502;
		label$597:;
		{
			FBSETOPTION( 39ll, 0ll );
		}
		goto label$502;
		label$598:;
		{
			*(int64*)((uint8*)&FBC$ + 2504ll) = 0ll;
		}
		goto label$502;
		label$599:;
		{
			HCHECKWAITINGOBJFILE(  );
			if( *(struct $9FBCIOFILE**)((uint8*)&FBC$ + 8ll) == (struct $9FBCIOFILE*)0ull ) goto label$601;
			{
				fb_StrAssign( *(void**)((uint8*)*(struct $9FBCIOFILE**)((uint8*)&FBC$ + 8ll) + 24ll), -1ll, (void*)ARG$1, -1ll, 0 );
				*(int64*)((uint8*)*(struct $9FBCIOFILE**)((uint8*)&FBC$ + 8ll) + 32ll) = -1ll;
			}
			goto label$600;
			label$601:;
			{
				fb_StrAssign( (void*)((uint8*)&FBC$ + 16ll), -1ll, (void*)ARG$1, -1ll, 0 );
			}
			label$600:;
		}
		goto label$502;
		label$602:;
		{
			int64 VALUE$3;
			int32 vr$99 = fb_StrCompare( (void*)ARG$1, -1ll, (void*)"max", 4ll );
			if( (int64)vr$99 != 0ll ) goto label$604;
			{
				VALUE$3 = 3ll;
			}
			goto label$603;
			label$604:;
			{
				int32 vr$101 = fb_VALINT( (FBSTRING*)ARG$1 );
				VALUE$3 = (int64)vr$101;
				if( VALUE$3 >= 0ll ) goto label$606;
				{
					VALUE$3 = 0ll;
				}
				goto label$605;
				label$606:;
				if( VALUE$3 <= 3ll ) goto label$607;
				{
					VALUE$3 = 3ll;
				}
				label$607:;
				label$605:;
			}
			label$603:;
			FBSETOPTION( 8ll, VALUE$3 );
		}
		goto label$502;
		label$608:;
		{
			FBSTRING TMP$339$3;
			__builtin_memset( &TMP$339$3, 0, 24ll );
			FBSTRING* vr$104 = PATHSTRIPDIV( ARG$1 );
			fb_StrAssign( (void*)&TMP$339$3, -1ll, (void*)vr$104, -1ll, 0 );
			STRSETADD( (struct $7TSTRSET*)((uint8*)&FBC$ + 616ll), &TMP$339$3, 0ll );
			fb_StrDelete( (FBSTRING*)&TMP$339$3 );
		}
		goto label$502;
		label$609:;
		{
			FBSETOPTION( 37ll, -1ll );
		}
		goto label$502;
		label$610:;
		{
			FBSETOPTION( 1ll, -1ll );
			*(int64*)((uint8*)&FBC$ + 72ll) = -1ll;
		}
		goto label$502;
		label$611:;
		{
			FBSTRING* vr$109 = PATHSTRIPDIV( ARG$1 );
			fb_StrAssign( (void*)((uint8*)&FBC$ + 2512ll), 261ll, (void*)vr$109, -1ll, 0 );
			HREPLACESLASH( (char*)((uint8*)&FBC$ + 2512ll), 47ll );
		}
		goto label$502;
		label$612:;
		{
			{
				FBSTRING TMP$340$4;
				fb_StrInit( (void*)&TMP$340$4, -1ll, (void*)ARG$1, -1ll, 0 );
				int32 vr$114 = fb_StrCompare( (void*)&TMP$340$4, -1ll, (void*)"host", 5ll );
				if( (int64)vr$114 != 0ll ) goto label$614;
				label$615:;
				{
					*(int64*)((uint8*)&FBC$ + 136ll) = 0ll;
				}
				goto label$613;
				label$614:;
				int32 vr$117 = fb_StrCompare( (void*)&TMP$340$4, -1ll, (void*)"target", 7ll );
				if( (int64)vr$117 != 0ll ) goto label$616;
				label$617:;
				{
					*(int64*)((uint8*)&FBC$ + 136ll) = 1ll;
				}
				goto label$613;
				label$616:;
				int32 vr$120 = fb_StrCompare( (void*)&TMP$340$4, -1ll, (void*)"x", 2ll );
				if( (int64)vr$120 != 0ll ) goto label$618;
				label$619:;
				{
					*(int64*)((uint8*)&FBC$ + 136ll) = 2ll;
				}
				goto label$613;
				label$618:;
				int32 vr$123 = fb_StrCompare( (void*)&TMP$340$4, -1ll, (void*)"fblibdir", 9ll );
				if( (int64)vr$123 != 0ll ) goto label$620;
				label$621:;
				{
					*(int64*)((uint8*)&FBC$ + 136ll) = 3ll;
				}
				goto label$613;
				label$620:;
				int32 vr$126 = fb_StrCompare( (void*)&TMP$340$4, -1ll, (void*)"sha-1", 6ll );
				if( (int64)vr$126 != 0ll ) goto label$622;
				label$623:;
				{
					*(int64*)((uint8*)&FBC$ + 136ll) = 4ll;
				}
				goto label$613;
				label$622:;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$624:;
				label$613:;
				fb_StrDelete( (FBSTRING*)&TMP$340$4 );
			}
		}
		goto label$502;
		label$625:;
		{
			FBSETOPTION( 23ll, -1ll );
		}
		goto label$502;
		label$626:;
		{
			FBSETOPTION( 0ll, 3ll );
			*(int64*)((uint8*)&FBC$ + 72ll) = -1ll;
			*(int64*)((uint8*)&FBC$ + 80ll) = -1ll;
		}
		goto label$502;
		label$627:;
		{
			*(int64*)((uint8*)&FBC$ + 80ll) = -1ll;
		}
		goto label$502;
		label$628:;
		{
			FBSETOPTION( 0ll, 3ll );
			*(int64*)((uint8*)&FBC$ + 88ll) = -1ll;
			*(int64*)((uint8*)&FBC$ + 96ll) = -1ll;
		}
		goto label$502;
		label$629:;
		{
			*(int64*)((uint8*)&FBC$ + 96ll) = -1ll;
		}
		goto label$502;
		label$630:;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 1893ll), 129ll, (void*)ARG$1, -1ll, 0 );
			{
				FBSTRING TMP$346$4;
				fb_StrInit( (void*)&TMP$346$4, -1ll, (void*)ARG$1, -1ll, 0 );
				int32 vr$132 = fb_StrCompare( (void*)&TMP$346$4, -1ll, (void*)"gui", 4ll );
				if( (int64)vr$132 != 0ll ) goto label$632;
				label$633:;
				{
					FBSETOPTION( 41ll, 1ll );
				}
				label$632:;
				label$631:;
				fb_StrDelete( (FBSTRING*)&TMP$346$4 );
			}
		}
		goto label$502;
		label$634:;
		{
			FBSETOPTION( 40ll, -1ll );
		}
		goto label$502;
		label$635:;
		{
			*(int64*)((uint8*)&FBC$ + 2496ll) = -1ll;
		}
		goto label$502;
		label$636:;
		{
			*(int64*)((uint8*)&FBC$ + 2504ll) = -1ll;
		}
		goto label$502;
		label$637:;
		{
			int32 vr$135 = fb_VALINT( (FBSTRING*)ARG$1 );
			FBSETOPTION( 38ll, (int64)vr$135 << (10ll & 63ll) );
		}
		goto label$502;
		label$638:;
		{
			int64 OS$3;
			__builtin_memset( &OS$3, 0, 8ll );
			int64 CPUTYPE$3;
			__builtin_memset( &CPUTYPE$3, 0, 8ll );
			int64 IS_GNU_TRIPLET$3;
			__builtin_memset( &IS_GNU_TRIPLET$3, 0, 8ll );
			HPARSETARGETARG( ARG$1, &OS$3, &CPUTYPE$3, &IS_GNU_TRIPLET$3 );
			if( ((int64)-(OS$3 < 0ll) | (int64)-(CPUTYPE$3 < 0ll)) == 0ll ) goto label$640;
			{
				HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
			}
			label$640:;
			label$639:;
			FBSETOPTION( 3ll, OS$3 );
			FBSETOPTION( 4ll, CPUTYPE$3 );
			if( (((int64)-(OS$3 != 2ll) | (int64)-(CPUTYPE$3 != 18ll)) | IS_GNU_TRIPLET$3) == 0ll ) goto label$642;
			{
				FBSTRING TMP$347$4;
				fb_StrAssign( (void*)((uint8*)&FBC$ + 2096ll), 129ll, (void*)ARG$1, -1ll, 0 );
				__builtin_memset( &TMP$347$4, 0, 24ll );
				FBSTRING* vr$155 = fb_StrConcat( &TMP$347$4, (void*)((uint8*)&FBC$ + 2096ll), 129ll, (void*)"-", 2ll );
				fb_StrAssign( (void*)((uint8*)&FBC$ + 2225ll), 129ll, (void*)vr$155, -1ll, 0 );
			}
			label$642:;
			label$641:;
		}
		goto label$502;
		label$643:;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 2354ll), 129ll, (void*)ARG$1, -1ll, 0 );
		}
		goto label$502;
		label$644:;
		{
			*(int64*)((uint8*)&FBC$ + 112ll) = -1ll;
		}
		goto label$502;
		label$645:;
		{
			int64 VALUE$3;
			{
				FBSTRING TMP$348$4;
				FBSTRING* vr$158 = fb_StrUcase2( (FBSTRING*)ARG$1, 0 );
				fb_StrInit( (void*)&TMP$348$4, -1ll, (void*)vr$158, -1ll, 0 );
				int32 vr$161 = fb_StrCompare( (void*)&TMP$348$4, -1ll, (void*)"NONE", 5ll );
				if( (int64)vr$161 == 0ll ) goto label$648;
				label$649:;
				int32 vr$164 = fb_StrCompare( (void*)&TMP$348$4, -1ll, (void*)"0", 2ll );
				if( (int64)vr$164 != 0ll ) goto label$647;
				label$648:;
				{
					VALUE$3 = 0ll;
				}
				goto label$646;
				label$647:;
				int32 vr$167 = fb_StrCompare( (void*)&TMP$348$4, -1ll, (void*)"1", 2ll );
				if( (int64)vr$167 != 0ll ) goto label$650;
				label$651:;
				{
					VALUE$3 = 1ll;
				}
				goto label$646;
				label$650:;
				int32 vr$170 = fb_StrCompare( (void*)&TMP$348$4, -1ll, (void*)"2", 2ll );
				if( (int64)vr$170 != 0ll ) goto label$652;
				label$653:;
				{
					VALUE$3 = 2ll;
				}
				goto label$646;
				label$652:;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$654:;
				label$646:;
				fb_StrDelete( (FBSTRING*)&TMP$348$4 );
			}
			FBSETOPTION( 7ll, VALUE$3 );
		}
		goto label$502;
		label$655:;
		{
			if( IS_SOURCE$1 == 0ll ) goto label$657;
			{
				if( *(int64*)((uint8*)&FBC$ + 120ll) != 0ll ) goto label$659;
				{
					HPRINTVERSION( *(int64*)((uint8*)&FBC$ + 112ll) );
				}
				label$659:;
				label$658:;
			}
			label$657:;
			label$656:;
			*(int64*)((uint8*)&FBC$ + 120ll) = -1ll;
		}
		goto label$502;
		label$660:;
		{
			int64 VALUE$3;
			VALUE$3 = -1ll;
			{
				FBSTRING TMP$351$4;
				fb_StrInit( (void*)&TMP$351$4, -1ll, (void*)ARG$1, -1ll, 0 );
				int32 vr$175 = fb_StrCompare( (void*)&TMP$351$4, -1ll, (void*)"all", 4ll );
				if( (int64)vr$175 != 0ll ) goto label$662;
				label$663:;
				{
					VALUE$3 = 0ll;
				}
				goto label$661;
				label$662:;
				int32 vr$178 = fb_StrCompare( (void*)&TMP$351$4, -1ll, (void*)"none", 5ll );
				if( (int64)vr$178 != 0ll ) goto label$664;
				label$665:;
				{
					VALUE$3 = 4ll;
				}
				goto label$661;
				label$664:;
				int32 vr$181 = fb_StrCompare( (void*)&TMP$351$4, -1ll, (void*)"param", 6ll );
				if( (int64)vr$181 != 0ll ) goto label$666;
				label$667:;
				{
					int64 vr$183 = FBGETOPTION( 27ll );
					FBSETOPTION( 27ll, vr$183 | 2ll );
				}
				goto label$661;
				label$666:;
				int32 vr$186 = fb_StrCompare( (void*)&TMP$351$4, -1ll, (void*)"escape", 7ll );
				if( (int64)vr$186 != 0ll ) goto label$668;
				label$669:;
				{
					int64 vr$188 = FBGETOPTION( 27ll );
					FBSETOPTION( 27ll, vr$188 | 1ll );
				}
				goto label$661;
				label$668:;
				int32 vr$191 = fb_StrCompare( (void*)&TMP$351$4, -1ll, (void*)"next", 5ll );
				if( (int64)vr$191 != 0ll ) goto label$670;
				label$671:;
				{
					int64 vr$193 = FBGETOPTION( 27ll );
					FBSETOPTION( 27ll, vr$193 | 8ll );
				}
				goto label$661;
				label$670:;
				int32 vr$196 = fb_StrCompare( (void*)&TMP$351$4, -1ll, (void*)"signedness", 11ll );
				if( (int64)vr$196 != 0ll ) goto label$672;
				label$673:;
				{
					int64 vr$198 = FBGETOPTION( 27ll );
					FBSETOPTION( 27ll, vr$198 | 32ll );
				}
				goto label$661;
				label$672:;
				int32 vr$201 = fb_StrCompare( (void*)&TMP$351$4, -1ll, (void*)"constness", 10ll );
				if( (int64)vr$201 != 0ll ) goto label$674;
				label$675:;
				{
					int64 vr$203 = FBGETOPTION( 27ll );
					FBSETOPTION( 27ll, vr$203 | 128ll );
					VALUE$3 = 0ll;
				}
				goto label$661;
				label$674:;
				int32 vr$206 = fb_StrCompare( (void*)&TMP$351$4, -1ll, (void*)"funcptr", 8ll );
				if( (int64)vr$206 != 0ll ) goto label$676;
				label$677:;
				{
					int64 vr$208 = FBGETOPTION( 27ll );
					FBSETOPTION( 27ll, vr$208 | 64ll );
					VALUE$3 = 0ll;
				}
				goto label$661;
				label$676:;
				int32 vr$211 = fb_StrCompare( (void*)&TMP$351$4, -1ll, (void*)"suffix", 7ll );
				if( (int64)vr$211 != 0ll ) goto label$678;
				label$679:;
				{
					int64 vr$213 = FBGETOPTION( 27ll );
					FBSETOPTION( 27ll, vr$213 | 256ll );
				}
				goto label$661;
				label$678:;
				int32 vr$216 = fb_StrCompare( (void*)&TMP$351$4, -1ll, (void*)"pedantic", 9ll );
				if( (int64)vr$216 != 0ll ) goto label$680;
				label$681:;
				{
					FBSETOPTION( 27ll, 4294965527ll );
					if( VALUE$3 <= 1ll ) goto label$683;
					{
						VALUE$3 = 1ll;
					}
					label$683:;
					label$682:;
				}
				goto label$661;
				label$680:;
				int32 vr$219 = fb_StrCompare( (void*)&TMP$351$4, -1ll, (void*)"error", 6ll );
				if( (int64)vr$219 != 0ll ) goto label$684;
				label$685:;
				{
					int64 vr$221 = FBGETOPTION( 27ll );
					FBSETOPTION( 27ll, vr$221 | 512ll );
				}
				goto label$661;
				label$684:;
				int32 vr$224 = fb_StrCompare( (void*)&TMP$351$4, -1ll, (void*)"upcast", 7ll );
				if( (int64)vr$224 != 0ll ) goto label$686;
				label$687:;
				{
					int64 vr$226 = FBGETOPTION( 27ll );
					FBSETOPTION( 27ll, vr$226 | 1024ll );
				}
				goto label$661;
				label$686:;
				{
					int32 vr$228 = fb_VALINT( (FBSTRING*)ARG$1 );
					VALUE$3 = (int64)vr$228;
				}
				label$688:;
				label$661:;
				fb_StrDelete( (FBSTRING*)&TMP$351$4 );
			}
			if( VALUE$3 < 0ll ) goto label$690;
			{
				FBSETOPTION( 24ll, VALUE$3 );
			}
			label$690:;
			label$689:;
		}
		goto label$502;
		label$691:;
		{
			FBSTRING TMP$364$3;
			FBSTRING TMP$365$3;
			FBSTRING TMP$366$3;
			FBSTRING* vr$232 = HREPLACE( (char*)*(char**)ARG$1, (char*)",", (char*)" " );
			__builtin_memset( &TMP$364$3, 0, 24ll );
			FBSTRING* vr$235 = fb_StrConcat( &TMP$364$3, (void*)" ", 2ll, (void*)vr$232, -1ll );
			__builtin_memset( &TMP$365$3, 0, 24ll );
			FBSTRING* vr$238 = fb_StrConcat( &TMP$365$3, (void*)vr$235, -1ll, (void*)" ", 2ll );
			__builtin_memset( &TMP$366$3, 0, 24ll );
			FBSTRING* vr$242 = fb_StrConcat( &TMP$366$3, (void*)((uint8*)&FBC$ + 2024ll), -1ll, (void*)vr$238, -1ll );
			fb_StrAssign( (void*)((uint8*)&FBC$ + 2024ll), -1ll, (void*)vr$242, -1ll, 0 );
		}
		goto label$502;
		label$692:;
		{
			FBSTRING TMP$367$3;
			FBSTRING TMP$368$3;
			FBSTRING TMP$369$3;
			FBSTRING* vr$245 = HREPLACE( (char*)*(char**)ARG$1, (char*)",", (char*)" " );
			__builtin_memset( &TMP$367$3, 0, 24ll );
			FBSTRING* vr$248 = fb_StrConcat( &TMP$367$3, (void*)" ", 2ll, (void*)vr$245, -1ll );
			__builtin_memset( &TMP$368$3, 0, 24ll );
			FBSTRING* vr$251 = fb_StrConcat( &TMP$368$3, (void*)vr$248, -1ll, (void*)" ", 2ll );
			__builtin_memset( &TMP$369$3, 0, 24ll );
			FBSTRING* vr$255 = fb_StrConcat( &TMP$369$3, (void*)((uint8*)&FBC$ + 2072ll), -1ll, (void*)vr$251, -1ll );
			fb_StrAssign( (void*)((uint8*)&FBC$ + 2072ll), -1ll, (void*)vr$255, -1ll, 0 );
		}
		goto label$502;
		label$693:;
		{
			FBSTRING TMP$370$3;
			FBSTRING TMP$371$3;
			FBSTRING TMP$372$3;
			FBSTRING* vr$258 = HREPLACE( (char*)*(char**)ARG$1, (char*)",", (char*)" " );
			__builtin_memset( &TMP$370$3, 0, 24ll );
			FBSTRING* vr$261 = fb_StrConcat( &TMP$370$3, (void*)" ", 2ll, (void*)vr$258, -1ll );
			__builtin_memset( &TMP$371$3, 0, 24ll );
			FBSTRING* vr$264 = fb_StrConcat( &TMP$371$3, (void*)vr$261, -1ll, (void*)" ", 2ll );
			__builtin_memset( &TMP$372$3, 0, 24ll );
			FBSTRING* vr$268 = fb_StrConcat( &TMP$372$3, (void*)((uint8*)&FBC$ + 2048ll), -1ll, (void*)vr$264, -1ll );
			fb_StrAssign( (void*)((uint8*)&FBC$ + 2048ll), -1ll, (void*)vr$268, -1ll, 0 );
		}
		goto label$502;
		label$694:;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 968ll), 261ll, (void*)ARG$1, -1ll, 0 );
		}
		goto label$502;
		label$695:;
		{
			{
				FBSTRING TMP$373$4;
				FBSTRING* vr$271 = fb_StrLcase2( (FBSTRING*)ARG$1, 0 );
				fb_StrInit( (void*)&TMP$373$4, -1ll, (void*)vr$271, -1ll, 0 );
				int32 vr$274 = fb_StrCompare( (void*)&TMP$373$4, -1ll, (void*)"gosub-setjmp", 13ll );
				if( (int64)vr$274 != 0ll ) goto label$697;
				label$698:;
				{
					FBSETOPTION( 28ll, -1ll );
				}
				goto label$696;
				label$697:;
				int32 vr$277 = fb_StrCompare( (void*)&TMP$373$4, -1ll, (void*)"valist-as-ptr", 14ll );
				if( (int64)vr$277 != 0ll ) goto label$699;
				label$700:;
				{
					FBSETOPTION( 29ll, -1ll );
				}
				goto label$696;
				label$699:;
				int32 vr$280 = fb_StrCompare( (void*)&TMP$373$4, -1ll, (void*)"no-thiscall", 12ll );
				if( (int64)vr$280 != 0ll ) goto label$701;
				label$702:;
				{
					FBSETOPTION( 30ll, -1ll );
				}
				goto label$696;
				label$701:;
				int32 vr$283 = fb_StrCompare( (void*)&TMP$373$4, -1ll, (void*)"no-fastcall", 12ll );
				if( (int64)vr$283 != 0ll ) goto label$703;
				label$704:;
				{
					FBSETOPTION( 31ll, -1ll );
				}
				goto label$696;
				label$703:;
				int32 vr$286 = fb_StrCompare( (void*)&TMP$373$4, -1ll, (void*)"fbrt", 5ll );
				if( (int64)vr$286 != 0ll ) goto label$705;
				label$706:;
				{
					FBSETOPTION( 32ll, -1ll );
				}
				goto label$696;
				label$705:;
				int32 vr$289 = fb_StrCompare( (void*)&TMP$373$4, -1ll, (void*)"nocmdline", 10ll );
				if( (int64)vr$289 != 0ll ) goto label$707;
				label$708:;
				{
					FBSETOPTION( 42ll, -1ll );
				}
				goto label$696;
				label$707:;
				int32 vr$292 = fb_StrCompare( (void*)&TMP$373$4, -1ll, (void*)"retinflts", 10ll );
				if( (int64)vr$292 != 0ll ) goto label$709;
				label$710:;
				{
					FBSETOPTION( 43ll, -1ll );
				}
				goto label$696;
				label$709:;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$711:;
				label$696:;
				fb_StrDelete( (FBSTRING*)&TMP$373$4 );
			}
		}
		goto label$502;
		label$503:;
		static const void* tmp$802[71ll] = {
			&&label$504,
			&&label$505,
			&&label$508,
			&&label$515,
			&&label$516,
			&&label$517,
			&&label$518,
			&&label$519,
			&&label$520,
			&&label$520,
			&&label$521,
			&&label$522,
			&&label$523,
			&&label$524,
			&&label$525,
			&&label$526,
			&&label$527,
			&&label$528,
			&&label$529,
			&&label$530,
			&&label$531,
			&&label$532,
			&&label$533,
			&&label$534,
			&&label$541,
			&&label$548,
			&&label$556,
			&&label$557,
			&&label$568,
			&&label$569,
			&&label$570,
			&&label$571,
			&&label$572,
			&&label$579,
			&&label$580,
			&&label$581,
			&&label$582,
			&&label$587,
			&&label$588,
			&&label$589,
			&&label$590,
			&&label$597,
			&&label$598,
			&&label$599,
			&&label$602,
			&&label$608,
			&&label$609,
			&&label$610,
			&&label$611,
			&&label$612,
			&&label$625,
			&&label$626,
			&&label$627,
			&&label$628,
			&&label$629,
			&&label$630,
			&&label$634,
			&&label$635,
			&&label$636,
			&&label$637,
			&&label$638,
			&&label$643,
			&&label$644,
			&&label$645,
			&&label$655,
			&&label$660,
			&&label$691,
			&&label$692,
			&&label$693,
			&&label$694,
			&&label$695,
		};
		if( TMP$315$2 > 70ull ) goto label$502;
		goto *tmp$802[TMP$315$2 - 0ull];
		label$502:;
	}
	label$501:;
}

static int64 PARSEOPTION( char* OPT$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$712:;
	{
		uint64 TMP$381$2;
		TMP$381$2 = (uint64)*(uint8*)OPT$1;
		goto label$715;
		label$716:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$718;
			{
				fb$result$1 = 0ll;
				goto label$713;
			}
			label$718:;
			label$717:;
			int32 vr$5 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"arch", 5ll );
			if( (int64)vr$5 != 0ll ) goto label$720;
			{
				fb$result$1 = 1ll;
				goto label$713;
			}
			label$720:;
			label$719:;
			int32 vr$7 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"asm", 4ll );
			if( (int64)vr$7 != 0ll ) goto label$722;
			{
				fb$result$1 = 2ll;
				goto label$713;
			}
			label$722:;
			label$721:;
		}
		goto label$714;
		label$723:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$725;
			{
				fb$result$1 = 3ll;
				goto label$713;
			}
			label$725:;
			label$724:;
			int32 vr$11 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"buildprefix", 12ll );
			if( (int64)vr$11 != 0ll ) goto label$727;
			{
				fb$result$1 = 4ll;
				goto label$713;
			}
			label$727:;
			label$726:;
		}
		goto label$714;
		label$728:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$730;
			{
				fb$result$1 = 5ll;
				goto label$713;
			}
			label$730:;
			label$729:;
		}
		goto label$714;
		label$731:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$733;
			{
				fb$result$1 = 6ll;
				goto label$713;
			}
			label$733:;
			label$732:;
		}
		goto label$714;
		label$734:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$736;
			{
				fb$result$1 = 7ll;
				goto label$713;
			}
			label$736:;
			label$735:;
			int32 vr$19 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"dll", 4ll );
			if( (int64)vr$19 != 0ll ) goto label$738;
			{
				fb$result$1 = 8ll;
				goto label$713;
			}
			label$738:;
			label$737:;
			int32 vr$21 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"dylib", 6ll );
			if( (int64)vr$21 != 0ll ) goto label$740;
			{
				fb$result$1 = 9ll;
				goto label$713;
			}
			label$740:;
			label$739:;
		}
		goto label$714;
		label$741:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$743;
			{
				fb$result$1 = 10ll;
				goto label$713;
			}
			label$743:;
			label$742:;
			int32 vr$25 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"ex", 3ll );
			if( (int64)vr$25 != 0ll ) goto label$745;
			{
				fb$result$1 = 19ll;
				goto label$713;
			}
			label$745:;
			label$744:;
			int32 vr$27 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"earray", 7ll );
			if( (int64)vr$27 != 0ll ) goto label$747;
			{
				fb$result$1 = 11ll;
				goto label$713;
			}
			label$747:;
			label$746:;
			int32 vr$29 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"eassert", 8ll );
			if( (int64)vr$29 != 0ll ) goto label$749;
			{
				fb$result$1 = 12ll;
				goto label$713;
			}
			label$749:;
			label$748:;
			int32 vr$31 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"edebug", 7ll );
			if( (int64)vr$31 != 0ll ) goto label$751;
			{
				fb$result$1 = 13ll;
				goto label$713;
			}
			label$751:;
			label$750:;
			int32 vr$33 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"edebuginfo", 11ll );
			if( (int64)vr$33 != 0ll ) goto label$753;
			{
				fb$result$1 = 14ll;
				goto label$713;
			}
			label$753:;
			label$752:;
			int32 vr$35 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"elocation", 10ll );
			if( (int64)vr$35 != 0ll ) goto label$755;
			{
				fb$result$1 = 15ll;
				goto label$713;
			}
			label$755:;
			label$754:;
			int32 vr$37 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"enullptr", 9ll );
			if( (int64)vr$37 != 0ll ) goto label$757;
			{
				fb$result$1 = 16ll;
				goto label$713;
			}
			label$757:;
			label$756:;
			int32 vr$39 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"eunwind", 8ll );
			if( (int64)vr$39 != 0ll ) goto label$759;
			{
				fb$result$1 = 17ll;
				goto label$713;
			}
			label$759:;
			label$758:;
			int32 vr$41 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"entry", 6ll );
			if( (int64)vr$41 != 0ll ) goto label$761;
			{
				fb$result$1 = 18ll;
				goto label$713;
			}
			label$761:;
			label$760:;
			int32 vr$43 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"exx", 4ll );
			if( (int64)vr$43 != 0ll ) goto label$763;
			{
				fb$result$1 = 20ll;
				goto label$713;
			}
			label$763:;
			label$762:;
			int32 vr$45 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"export", 7ll );
			if( (int64)vr$45 != 0ll ) goto label$765;
			{
				fb$result$1 = 21ll;
				goto label$713;
			}
			label$765:;
			label$764:;
		}
		goto label$714;
		label$766:;
		{
			int32 vr$47 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"fbgfx", 6ll );
			if( (int64)vr$47 != 0ll ) goto label$768;
			{
				fb$result$1 = 22ll;
				goto label$713;
			}
			label$768:;
			label$767:;
			int32 vr$49 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"forcelang", 10ll );
			if( (int64)vr$49 != 0ll ) goto label$770;
			{
				fb$result$1 = 23ll;
				goto label$713;
			}
			label$770:;
			label$769:;
			int32 vr$51 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"fpmode", 7ll );
			if( (int64)vr$51 != 0ll ) goto label$772;
			{
				fb$result$1 = 24ll;
				goto label$713;
			}
			label$772:;
			label$771:;
			int32 vr$53 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"fpu", 4ll );
			if( (int64)vr$53 != 0ll ) goto label$774;
			{
				fb$result$1 = 25ll;
				goto label$713;
			}
			label$774:;
			label$773:;
		}
		goto label$714;
		label$775:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$777;
			{
				fb$result$1 = 26ll;
				goto label$713;
			}
			label$777:;
			label$776:;
			int32 vr$57 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"gen", 4ll );
			if( (int64)vr$57 != 0ll ) goto label$779;
			{
				fb$result$1 = 27ll;
				goto label$713;
			}
			label$779:;
			label$778:;
		}
		goto label$714;
		label$780:;
		{
			int32 vr$59 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"help", 5ll );
			if( (int64)vr$59 != 0ll ) goto label$782;
			{
				fb$result$1 = 28ll;
				goto label$713;
			}
			label$782:;
			label$781:;
		}
		goto label$714;
		label$783:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$785;
			{
				fb$result$1 = 29ll;
				goto label$713;
			}
			label$785:;
			label$784:;
			int32 vr$63 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"include", 8ll );
			if( (int64)vr$63 != 0ll ) goto label$787;
			{
				fb$result$1 = 30ll;
				goto label$713;
			}
			label$787:;
			label$786:;
		}
		goto label$714;
		label$788:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$790;
			{
				fb$result$1 = 31ll;
				goto label$713;
			}
			label$790:;
			label$789:;
			int32 vr$67 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"lang", 5ll );
			if( (int64)vr$67 != 0ll ) goto label$792;
			{
				fb$result$1 = 32ll;
				goto label$713;
			}
			label$792:;
			label$791:;
			int32 vr$69 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"lib", 4ll );
			if( (int64)vr$69 != 0ll ) goto label$794;
			{
				fb$result$1 = 33ll;
				goto label$713;
			}
			label$794:;
			label$793:;
		}
		goto label$714;
		label$795:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$797;
			{
				fb$result$1 = 34ll;
				goto label$713;
			}
			label$797:;
			label$796:;
			int32 vr$73 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"map", 4ll );
			if( (int64)vr$73 != 0ll ) goto label$799;
			{
				fb$result$1 = 35ll;
				goto label$713;
			}
			label$799:;
			label$798:;
			int32 vr$75 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"maxerr", 7ll );
			if( (int64)vr$75 != 0ll ) goto label$801;
			{
				fb$result$1 = 36ll;
				goto label$713;
			}
			label$801:;
			label$800:;
			int32 vr$77 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"mt", 3ll );
			if( (int64)vr$77 != 0ll ) goto label$803;
			{
				fb$result$1 = 37ll;
				goto label$713;
			}
			label$803:;
			label$802:;
		}
		goto label$714;
		label$804:;
		{
			int32 vr$79 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"noerrline", 10ll );
			if( (int64)vr$79 != 0ll ) goto label$806;
			{
				fb$result$1 = 39ll;
				goto label$713;
			}
			label$806:;
			label$805:;
			int32 vr$81 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"nodeflibs", 10ll );
			if( (int64)vr$81 != 0ll ) goto label$808;
			{
				fb$result$1 = 38ll;
				goto label$713;
			}
			label$808:;
			label$807:;
			int32 vr$83 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"nolib", 6ll );
			if( (int64)vr$83 != 0ll ) goto label$810;
			{
				fb$result$1 = 40ll;
				goto label$713;
			}
			label$810:;
			label$809:;
			int32 vr$85 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"noobjinfo", 10ll );
			if( (int64)vr$85 != 0ll ) goto label$812;
			{
				fb$result$1 = 41ll;
				goto label$713;
			}
			label$812:;
			label$811:;
			int32 vr$87 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"nostrip", 8ll );
			if( (int64)vr$87 != 0ll ) goto label$814;
			{
				fb$result$1 = 42ll;
				goto label$713;
			}
			label$814:;
			label$813:;
		}
		goto label$714;
		label$815:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$817;
			{
				fb$result$1 = 43ll;
				goto label$713;
			}
			label$817:;
			label$816:;
		}
		goto label$714;
		label$818:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$820;
			{
				fb$result$1 = 44ll;
				goto label$713;
			}
			label$820:;
			label$819:;
		}
		goto label$714;
		label$821:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$823;
			{
				fb$result$1 = 45ll;
				goto label$713;
			}
			label$823:;
			label$822:;
			int32 vr$95 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"pic", 4ll );
			if( (int64)vr$95 != 0ll ) goto label$825;
			{
				fb$result$1 = 46ll;
				goto label$713;
			}
			label$825:;
			label$824:;
			int32 vr$97 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"pp", 3ll );
			if( (int64)vr$97 != 0ll ) goto label$827;
			{
				fb$result$1 = 47ll;
				goto label$713;
			}
			label$827:;
			label$826:;
			int32 vr$99 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"prefix", 7ll );
			if( (int64)vr$99 != 0ll ) goto label$829;
			{
				fb$result$1 = 48ll;
				goto label$713;
			}
			label$829:;
			label$828:;
			int32 vr$101 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"print", 6ll );
			if( (int64)vr$101 != 0ll ) goto label$831;
			{
				fb$result$1 = 49ll;
				goto label$713;
			}
			label$831:;
			label$830:;
			int32 vr$103 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"profile", 8ll );
			if( (int64)vr$103 != 0ll ) goto label$833;
			{
				fb$result$1 = 50ll;
				goto label$713;
			}
			label$833:;
			label$832:;
		}
		goto label$714;
		label$834:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$836;
			{
				fb$result$1 = 51ll;
				goto label$713;
			}
			label$836:;
			label$835:;
			int32 vr$107 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"rr", 3ll );
			if( (int64)vr$107 != 0ll ) goto label$838;
			{
				fb$result$1 = 53ll;
				goto label$713;
			}
			label$838:;
			label$837:;
		}
		goto label$714;
		label$839:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$841;
			{
				fb$result$1 = 52ll;
				goto label$713;
			}
			label$841:;
			label$840:;
			int32 vr$111 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"RR", 3ll );
			if( (int64)vr$111 != 0ll ) goto label$843;
			{
				fb$result$1 = 54ll;
				goto label$713;
			}
			label$843:;
			label$842:;
		}
		goto label$714;
		label$844:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$846;
			{
				fb$result$1 = 55ll;
				goto label$713;
			}
			label$846:;
			label$845:;
			int32 vr$115 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"showincludes", 13ll );
			if( (int64)vr$115 != 0ll ) goto label$848;
			{
				fb$result$1 = 56ll;
				goto label$713;
			}
			label$848:;
			label$847:;
			int32 vr$117 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"static", 7ll );
			if( (int64)vr$117 != 0ll ) goto label$850;
			{
				fb$result$1 = 57ll;
				goto label$713;
			}
			label$850:;
			label$849:;
			int32 vr$119 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"strip", 6ll );
			if( (int64)vr$119 != 0ll ) goto label$852;
			{
				fb$result$1 = 58ll;
				goto label$713;
			}
			label$852:;
			label$851:;
		}
		goto label$714;
		label$853:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$855;
			{
				fb$result$1 = 59ll;
				goto label$713;
			}
			label$855:;
			label$854:;
			int32 vr$123 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"target", 7ll );
			if( (int64)vr$123 != 0ll ) goto label$857;
			{
				fb$result$1 = 60ll;
				goto label$713;
			}
			label$857:;
			label$856:;
			int32 vr$125 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"title", 6ll );
			if( (int64)vr$125 != 0ll ) goto label$859;
			{
				fb$result$1 = 61ll;
				goto label$713;
			}
			label$859:;
			label$858:;
		}
		goto label$714;
		label$860:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$862;
			{
				fb$result$1 = 62ll;
				goto label$713;
			}
			label$862:;
			label$861:;
			int32 vr$129 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"vec", 4ll );
			if( (int64)vr$129 != 0ll ) goto label$864;
			{
				fb$result$1 = 63ll;
				goto label$713;
			}
			label$864:;
			label$863:;
			int32 vr$131 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"version", 8ll );
			if( (int64)vr$131 != 0ll ) goto label$866;
			{
				fb$result$1 = 64ll;
				goto label$713;
			}
			label$866:;
			label$865:;
		}
		goto label$714;
		label$867:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$869;
			{
				fb$result$1 = 65ll;
				goto label$713;
			}
			label$869:;
			label$868:;
		}
		goto label$714;
		label$870:;
		{
			int32 vr$135 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"Wa", 3ll );
			if( (int64)vr$135 != 0ll ) goto label$872;
			{
				fb$result$1 = 66ll;
				goto label$713;
			}
			label$872:;
			label$871:;
			int32 vr$137 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"Wl", 3ll );
			if( (int64)vr$137 != 0ll ) goto label$874;
			{
				fb$result$1 = 68ll;
				goto label$713;
			}
			label$874:;
			label$873:;
			int32 vr$139 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"Wc", 3ll );
			if( (int64)vr$139 != 0ll ) goto label$876;
			{
				fb$result$1 = 67ll;
				goto label$713;
			}
			label$876:;
			label$875:;
		}
		goto label$714;
		label$877:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$879;
			{
				fb$result$1 = 69ll;
				goto label$713;
			}
			label$879:;
			label$878:;
		}
		goto label$714;
		label$880:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$882;
			{
				fb$result$1 = 70ll;
				goto label$713;
			}
			label$882:;
			label$881:;
		}
		goto label$714;
		label$883:;
		{
			int32 vr$145 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"-version", 9ll );
			if( (int64)vr$145 != 0ll ) goto label$885;
			{
				fb$result$1 = 64ll;
				goto label$713;
			}
			label$885:;
			label$884:;
			int32 vr$147 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"-help", 6ll );
			if( (int64)vr$147 != 0ll ) goto label$887;
			{
				fb$result$1 = 28ll;
				goto label$713;
			}
			label$887:;
			label$886:;
		}
		goto label$714;
		label$715:;
		static const void* tmp$803[78ll] = {
			&&label$883,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$731,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$818,
			&&label$714,
			&&label$714,
			&&label$839,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$870,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$714,
			&&label$716,
			&&label$723,
			&&label$728,
			&&label$734,
			&&label$741,
			&&label$766,
			&&label$775,
			&&label$780,
			&&label$783,
			&&label$714,
			&&label$714,
			&&label$788,
			&&label$795,
			&&label$804,
			&&label$815,
			&&label$821,
			&&label$714,
			&&label$834,
			&&label$844,
			&&label$853,
			&&label$714,
			&&label$860,
			&&label$867,
			&&label$877,
			&&label$714,
			&&label$880,
		};
		if( (TMP$381$2 - 45ull) > 77ull ) goto label$714;
		goto *tmp$803[TMP$381$2 - 45ull];
		label$714:;
	}
	fb$result$1 = -1ll;
	goto label$713;
	label$713:;
	return fb$result$1;
}

static void HANDLEARG( FBSTRING* ARG$1, int64 IS_SOURCE$1, int64 IS_FILE$1 )
{
	label$888:;
	if( *(int64*)&FBC$ < 0ll ) goto label$891;
	{
		int64 vr$0 = fb_StrLen( (void*)ARG$1, -1ll );
		if( vr$0 != 0ll ) goto label$893;
		{
			HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
		}
		label$893:;
		label$892:;
		HANDLEOPT( *(int64*)&FBC$, ARG$1, IS_SOURCE$1 );
		*(int64*)&FBC$ = -1ll;
		goto label$889;
	}
	label$891:;
	label$890:;
	int64 vr$1 = fb_StrLen( (void*)ARG$1, -1ll );
	if( vr$1 != 0ll ) goto label$895;
	{
		goto label$889;
	}
	label$895:;
	label$894:;
	{
		uint8 TMP$456$2;
		TMP$456$2 = *(uint8*)*(char**)ARG$1;
		if( (uint64)(int64)TMP$456$2 != 45ull ) goto label$897;
		label$898:;
		{
			char* OPT$3;
			OPT$3 = (char*)((uint8*)*(char**)ARG$1 + 1ll);
			if( (int64)*(uint8*)OPT$3 != 0ll ) goto label$900;
			{
				HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
			}
			label$900:;
			label$899:;
			int64 OPTID$3;
			int64 vr$9 = PARSEOPTION( OPT$3 );
			OPTID$3 = vr$9;
			if( OPTID$3 >= 0ll ) goto label$902;
			{
				HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
			}
			label$902:;
			label$901:;
			if( IS_SOURCE$1 == 0ll ) goto label$904;
			{
				if( (boolean)(*(boolean*)(((int64)(struct $18FBC_CMDLINE_OPTION*)CMDLINEOPTIONTB$ + (OPTID$3 << (4ll & 63ll))) + 1ll) == 0ll) == (boolean)0ll ) goto label$906;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$906:;
				label$905:;
			}
			label$904:;
			label$903:;
			if( *(boolean*)((int64)(struct $18FBC_CMDLINE_OPTION*)CMDLINEOPTIONTB$ + (OPTID$3 << (4ll & 63ll))) == (boolean)0ll ) goto label$908;
			{
				*(int64*)&FBC$ = OPTID$3;
			}
			goto label$907;
			label$908:;
			{
				HANDLEOPT( OPTID$3, ARG$1, IS_SOURCE$1 );
			}
			label$907:;
			if( IS_SOURCE$1 == 0ll ) goto label$910;
			{
				if( *(boolean*)(((int64)(struct $18FBC_CMDLINE_OPTION*)CMDLINEOPTIONTB$ + (OPTID$3 << (4ll & 63ll))) + 2ll) == (boolean)0ll ) goto label$912;
				{
					FBRESTARTBEGINREQUEST( 2ll );
				}
				label$912:;
				label$911:;
				if( *(int64*)(((int64)(struct $18FBC_CMDLINE_OPTION*)CMDLINEOPTIONTB$ + (OPTID$3 << (4ll & 63ll))) + 8ll) == 0ll ) goto label$914;
				{
					FBRESTARTBEGINREQUEST( 8ll );
				}
				label$914:;
				label$913:;
			}
			label$910:;
			label$909:;
		}
		goto label$896;
		label$897:;
		if( (uint64)(int64)TMP$456$2 != 64ull ) goto label$915;
		label$916:;
		{
			static int64 RECLEVEL$3 = 0ll;
			if( RECLEVEL$3 <= 128ll ) goto label$918;
			{
				ERRREPORTEX( 27ll, (char*)*(char**)ARG$1, -1ll, 1ll, (char*)0ull );
				FBCEND( 1ll );
			}
			label$918:;
			label$917:;
			int64 vr$17 = fb_StrLen( (void*)ARG$1, -1ll );
			FBSTRING* vr$19 = fb_RIGHT( (FBSTRING*)ARG$1, vr$17 + -1ll );
			fb_StrAssign( (void*)ARG$1, -1ll, (void*)vr$19, -1ll, 0 );
			int64 vr$20 = fb_StrLen( (void*)ARG$1, -1ll );
			if( vr$20 != 0ll ) goto label$920;
			{
				HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
			}
			label$920:;
			label$919:;
			RECLEVEL$3 = RECLEVEL$3 + 1ll;
			PARSEARGSFROMFILE( ARG$1, IS_SOURCE$1 );
			RECLEVEL$3 = RECLEVEL$3 + -1ll;
		}
		goto label$896;
		label$915:;
		{
			FBSTRING EXT$3;
			FBSTRING* vr$24 = HGETFILEEXT( (char*)*(char**)ARG$1 );
			fb_StrInit( (void*)&EXT$3, -1ll, (void*)vr$24, -1ll, 0 );
			{
				int32 vr$27 = fb_StrCompare( (void*)&EXT$3, -1ll, (void*)"bas", 4ll );
				if( (int64)vr$27 != 0ll ) goto label$923;
				label$924:;
				{
					HADDBAS( ARG$1 );
				}
				goto label$922;
				label$923:;
				int32 vr$30 = fb_StrCompare( (void*)&EXT$3, -1ll, (void*)"o", 2ll );
				if( (int64)vr$30 != 0ll ) goto label$925;
				label$926:;
				{
					FBCADDOBJ( ARG$1 );
				}
				goto label$922;
				label$925:;
				int32 vr$33 = fb_StrCompare( (void*)&EXT$3, -1ll, (void*)"a", 2ll );
				if( (int64)vr$33 != 0ll ) goto label$927;
				label$928:;
				{
					STRLISTAPPEND( (struct $5TLIST*)((uint8*)&FBC$ + 464ll), ARG$1 );
				}
				goto label$922;
				label$927:;
				int32 vr$37 = fb_StrCompare( (void*)&EXT$3, -1ll, (void*)"rc", 3ll );
				if( (int64)vr$37 == 0ll ) goto label$930;
				label$931:;
				int32 vr$40 = fb_StrCompare( (void*)&EXT$3, -1ll, (void*)"res", 4ll );
				if( (int64)vr$40 != 0ll ) goto label$929;
				label$930:;
				{
					void* vr$43 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&FBC$ + 208ll) );
					HSETIOFILE( (struct $9FBCIOFILE*)vr$43, ARG$1, -1ll );
				}
				goto label$922;
				label$929:;
				int32 vr$45 = fb_StrCompare( (void*)&EXT$3, -1ll, (void*)"xpm", 4ll );
				if( (int64)vr$45 != 0ll ) goto label$932;
				label$933:;
				{
					int64 vr$48 = fb_StrLen( (void*)((uint8*)&FBC$ + 272ll), -1ll );
					if( vr$48 <= 0ll ) goto label$935;
					{
						HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
					}
					label$935:;
					label$934:;
					HSETIOFILE( (struct $9FBCIOFILE*)((uint8*)&FBC$ + 272ll), ARG$1, -1ll );
				}
				goto label$922;
				label$932:;
				{
					HFATALINVALIDOPTION( ARG$1, IS_SOURCE$1 );
				}
				label$936:;
				label$922:;
			}
			fb_StrDelete( (FBSTRING*)&EXT$3 );
		}
		label$921:;
		label$896:;
	}
	label$889:;
}

static void PARSEARGSFROMFILE( FBSTRING* FILENAME$1, int64 IS_SOURCE$1 )
{
	label$957:;
	int64 F$1;
	int32 vr$0 = fb_FileFree(  );
	F$1 = (int64)vr$0;
	int32 vr$3 = fb_FileOpen( (FBSTRING*)FILENAME$1, 2u, 0u, 0u, (int32)F$1, 0 );
	if( (int64)vr$3 == 0ll ) goto label$960;
	{
		ERRREPORTEX( 26ll, (char*)*(char**)FILENAME$1, -1ll, 1ll, (char*)0ull );
		FBCEND( 1ll );
	}
	label$960:;
	label$959:;
	FBSTRING ARGS$1;
	__builtin_memset( &ARGS$1, 0, 24ll );
	label$961:;
	int32 vr$8 = fb_FileEof( (int32)F$1 );
	if( (int64)vr$8 != 0ll ) goto label$962;
	{
		fb_FileLineInput( (int32)F$1, (void*)&ARGS$1, -1ll, 0 );
		FBSTRING* vr$13 = fb_TRIM( (FBSTRING*)&ARGS$1 );
		fb_StrAssign( (void*)&ARGS$1, -1ll, (void*)vr$13, -1ll, 0 );
		FBCPARSEARGSFROMSTRING( (char*)*(char**)&ARGS$1, IS_SOURCE$1, -1ll );
	}
	goto label$961;
	label$962:;
	int32 vr$16 = fb_FileClose( (int32)F$1 );
	if( (int64)vr$16 == 0ll ) goto label$963;
	void* vr$18 = fb_ErrorThrowAt( 2714, (char*)"src/compiler/fbc.bas", (void*)0ull, (void*)0ull );
	goto *vr$18;
	label$963:;
	fb_StrDelete( (FBSTRING*)&ARGS$1 );
	label$958:;
}

static int64 HTARGETNEEDSPIC( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$964:;
	fb$result$1 = 0ll;
	int64 vr$1 = FBGETCPUFAMILY(  );
	if( vr$1 == 0ll ) goto label$967;
	{
		{
			uint64 TMP$465$3;
			int64 vr$2 = FBGETOPTION( 3ll );
			TMP$465$3 = (uint64)vr$2;
			goto label$969;
			label$970:;
			{
				fb$result$1 = -1ll;
			}
			goto label$968;
			label$969:;
			static const void* tmp$804[9ll] = {
				&&label$970,
				&&label$968,
				&&label$968,
				&&label$970,
				&&label$970,
				&&label$970,
				&&label$970,
				&&label$968,
				&&label$970,
			};
			if( (TMP$465$3 - 2ull) > 8ull ) goto label$968;
			goto *tmp$804[TMP$465$3 - 2ull];
			label$968:;
		}
	}
	label$967:;
	label$966:;
	label$965:;
	return fb$result$1;
}

static void HPARSEARGS( int64 ARGC$1, char** ARGV$1 )
{
	label$971:;
	*(int64*)&FBC$ = -1ll;
	FBSTRING ARG$1;
	__builtin_memset( &ARG$1, 0, 24ll );
	{
		int64 I$2;
		I$2 = 1ll;
		int64 TMP$466$2;
		TMP$466$2 = ARGC$1 + -1ll;
		goto label$973;
		label$976:;
		{
			fb_StrAssign( (void*)&ARG$1, -1ll, *(void**)((uint8*)ARGV$1 + (I$2 << (3ll & 63ll))), 0ll, 0 );
			HANDLEARG( &ARG$1, 0ll, 0ll );
		}
		label$974:;
		I$2 = I$2 + 1ll;
		label$973:;
		if( I$2 <= TMP$466$2 ) goto label$976;
		label$975:;
	}
	if( *(int64*)&FBC$ < 0ll ) goto label$978;
	{
		FBSTRING TMP$467$2;
		__builtin_memset( &TMP$467$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$467$2, -1ll, *(void**)((uint8*)((uint8*)ARGV$1 + (ARGC$1 << (3ll & 63ll))) + -8ll), 0ll, 0 );
		HFATALINVALIDOPTION( &TMP$467$2, 0ll );
		fb_StrDelete( (FBSTRING*)&TMP$467$2 );
	}
	label$978:;
	label$977:;
	fb_StrDelete( (FBSTRING*)&ARG$1 );
	label$972:;
}

static void HCHECKARGS( void )
{
	label$979:;
	HCHECKWAITINGOBJFILE(  );
	int64 vr$0 = FBGETOPTION( 5ll );
	if( vr$0 != 0ll ) goto label$982;
	{
		int64 vr$1 = FBGETOPTION( 7ll );
		int64 vr$3 = FBGETOPTION( 6ll );
		if( ((int64)-(vr$1 >= 1ll) | (int64)-(vr$3 == 1ll)) == 0ll ) goto label$984;
		{
			ERRREPORTEX( 284ll, (char*)"", -1ll, 1ll, (char*)0ull );
			FBCEND( 1ll );
		}
		label$984:;
		label$983:;
	}
	label$982:;
	label$981:;
	if( *(int64*)((uint8*)&FBC$ + 48ll) < 0ll ) goto label$986;
	{
		FBSETOPTION( 4ll, *(int64*)((uint8*)&FBC$ + 48ll) );
	}
	label$986:;
	label$985:;
	int64 vr$6 = FBGETOPTION( 3ll );
	int64 vr$8 = FBGETCPUFAMILY(  );
	if( ((int64)-(vr$6 == 3ll) & (int64)-(vr$8 != 0ll)) == 0ll ) goto label$988;
	{
		char* vr$11 = FBGETFBCARCH(  );
		ERRREPORTEX( 82ll, (char*)vr$11, -1ll, 1ll, (char*)0ull );
		FBCEND( 1ll );
	}
	label$988:;
	label$987:;
	int64 vr$12 = FBGETCPUFAMILY(  );
	int64 vr$14 = FBGETOPTION( 3ll );
	if( ((int64)-(vr$12 == 0ll) & (int64)-(vr$14 != 9ll)) == 0ll ) goto label$990;
	{
		FBSETOPTION( 2ll, 0ll );
	}
	goto label$989;
	label$990:;
	{
		FBSETOPTION( 2ll, 1ll );
	}
	label$989:;
	if( *(int64*)((uint8*)&FBC$ + 40ll) < 0ll ) goto label$992;
	{
		FBSETOPTION( 2ll, *(int64*)((uint8*)&FBC$ + 40ll) );
	}
	label$992:;
	label$991:;
	int64 vr$17 = FBGETOPTION( 2ll );
	int64 vr$19 = FBGETCPUFAMILY(  );
	int64 vr$22 = FBGETOPTION( 2ll );
	int64 vr$24 = FBGETCPUFAMILY(  );
	if( (((int64)-(vr$17 == 0ll) & (int64)-(vr$19 != 0ll)) | ((int64)-(vr$22 == 3ll) & (int64)-(vr$24 != 1ll))) == 0ll ) goto label$994;
	{
		char* vr$28 = FBGETFBCARCH(  );
		ERRREPORTEX( 83ll, (char*)vr$28, -1ll, 1ll, (char*)0ull );
		FBCEND( 1ll );
	}
	label$994:;
	label$993:;
	{
		uint64 TMP$468$2;
		int64 vr$29 = FBGETOPTION( 3ll );
		TMP$468$2 = (uint64)vr$29;
		goto label$996;
		label$997:;
		{
		}
		goto label$995;
		label$998:;
		{
			struct $9FBCIOFILE* RC$3;
			void* vr$31 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 208ll) );
			RC$3 = (struct $9FBCIOFILE*)vr$31;
			if( RC$3 == (struct $9FBCIOFILE*)0ull ) goto label$1000;
			{
				ERRREPORTEX( 291ll, (char*)*(char**)RC$3, -1ll, 1ll, (char*)0ull );
				FBCEND( 1ll );
			}
			label$1000:;
			label$999:;
		}
		goto label$995;
		label$996:;
		static const void* tmp$805[5ll] = {
			&&label$997,
			&&label$997,
			&&label$998,
			&&label$998,
			&&label$997,
		};
		if( TMP$468$2 > 4ull ) goto label$998;
		goto *tmp$805[TMP$468$2 - 0ull];
		label$995:;
	}
	{
		uint64 TMP$469$2;
		int64 vr$33 = FBGETOPTION( 3ll );
		TMP$469$2 = (uint64)vr$33;
		goto label$1002;
		label$1003:;
		{
		}
		goto label$1001;
		label$1004:;
		{
			int64 vr$35 = fb_StrLen( (void*)((uint8*)&FBC$ + 272ll), -1ll );
			if( vr$35 <= 0ll ) goto label$1006;
			{
				ERRREPORTEX( 291ll, (char*)*(char**)((uint8*)&FBC$ + 272ll), -1ll, 1ll, (char*)0ull );
				FBCEND( 1ll );
			}
			label$1006:;
			label$1005:;
		}
		goto label$1001;
		label$1002:;
		static const void* tmp$806[9ll] = {
			&&label$1003,
			&&label$1004,
			&&label$1004,
			&&label$1003,
			&&label$1003,
			&&label$1003,
			&&label$1003,
			&&label$1003,
			&&label$1003,
		};
		if( (TMP$469$2 - 2ull) > 8ull ) goto label$1004;
		goto *tmp$806[TMP$469$2 - 2ull];
		label$1001:;
	}
	int64 vr$36 = FBGETOPTION( 3ll );
	int64 vr$38 = FBGETOPTION( 2ll );
	if( ((int64)-(vr$36 == 9ll) & (int64)-(vr$38 != 0ll)) == 0ll ) goto label$1008;
	{
		FBSETOPTION( 9ll, 1ll );
	}
	label$1008:;
	label$1007:;
	if( *(int64*)((uint8*)&FBC$ + 64ll) < 0ll ) goto label$1010;
	{
		{
			int64 TMP$470$3;
			int64 vr$41 = FBGETCPUFAMILY(  );
			TMP$470$3 = vr$41;
			if( TMP$470$3 == 0ll ) goto label$1013;
			label$1014:;
			if( TMP$470$3 != 1ll ) goto label$1012;
			label$1013:;
			{
			}
			goto label$1011;
			label$1012:;
			{
				FBSTRING TMP$471$4;
				__builtin_memset( &TMP$471$4, 0, 24ll );
				FBSTRING* vr$43 = FBGETTARGETID(  );
				fb_StrAssign( (void*)&TMP$471$4, -1ll, (void*)vr$43, -1ll, 0 );
				ERRREPORTEX( 319ll, (char*)*(char**)&TMP$471$4, -1ll, 1ll, (char*)0ull );
				fb_StrDelete( (FBSTRING*)&TMP$471$4 );
			}
			label$1015:;
			label$1011:;
		}
		int64 vr$46 = FBGETOPTION( 2ll );
		int64 vr$48 = FBGETOPTION( 2ll );
		if( (((int64)-(vr$46 == 0ll) | (int64)-(vr$48 == 3ll)) & (int64)-(*(int64*)((uint8*)&FBC$ + 64ll) != 0ll)) == 0ll ) goto label$1017;
		{
			ERRREPORTEX( 84ll, (char*)"", -1ll, 1ll, (char*)0ull );
		}
		label$1017:;
		label$1016:;
		FBSETOPTION( 9ll, *(int64*)((uint8*)&FBC$ + 64ll) );
	}
	label$1010:;
	label$1009:;
	int64 vr$53 = FBGETOPTION( 0ll );
	if( vr$53 != 2ll ) goto label$1019;
	{
		int64 vr$54 = HTARGETNEEDSPIC(  );
		if( vr$54 == 0ll ) goto label$1021;
		{
			FBSETOPTION( 37ll, -1ll );
		}
		label$1021:;
		label$1020:;
	}
	label$1019:;
	label$1018:;
	int64 vr$55 = FBGETOPTION( 37ll );
	if( vr$55 == 0ll ) goto label$1023;
	{
		int64 vr$56 = FBGETOPTION( 0ll );
		if( vr$56 != 0ll ) goto label$1025;
		{
			ERRREPORTEX( 85ll, (char*)"", -1ll, 1ll, (char*)0ull );
		}
		goto label$1024;
		label$1025:;
		int64 vr$57 = HTARGETNEEDSPIC(  );
		if( vr$57 != 0ll ) goto label$1026;
		{
			ERRREPORTEX( 86ll, (char*)"", -1ll, 1ll, (char*)0ull );
		}
		label$1026:;
		label$1024:;
	}
	label$1023:;
	label$1022:;
	FBSETOPTION( 38ll, -1ll );
	label$980:;
}

static void FBCDETERMINEPREFIX( void )
{
	label$1027:;
	int64 vr$1 = fb_StrLen( (void*)((uint8*)&FBC$ + 2512ll), 261ll );
	if( vr$1 != 0ll ) goto label$1030;
	{
		FBSTRING TMP$472$2;
		FBSTRING TMP$473$2;
		FBSTRING TMP$476$2;
		__builtin_memset( &TMP$472$2, 0, 24ll );
		FBSTRING* vr$3 = fb_ExePath(  );
		fb_StrAssign( (void*)&TMP$472$2, -1ll, (void*)vr$3, -1ll, 0 );
		FBSTRING* vr$6 = PATHSTRIPDIV( &TMP$472$2 );
		__builtin_memset( &TMP$473$2, 0, 24ll );
		FBSTRING* vr$9 = fb_StrConcat( &TMP$473$2, (void*)vr$6, -1ll, (void*)"/", 2ll );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 2512ll), 261ll, (void*)vr$9, -1ll, 0 );
		fb_StrDelete( (FBSTRING*)&TMP$472$2 );
		__builtin_memset( &TMP$476$2, 0, 24ll );
		FBSTRING* vr$15 = fb_StrConcat( &TMP$476$2, (void*)((uint8*)&FBC$ + 2512ll), 261ll, (void*)"../", 4ll );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 2512ll), 261ll, (void*)vr$15, -1ll, 0 );
	}
	goto label$1029;
	label$1030:;
	{
		FBSTRING TMP$477$2;
		FBSTRING TMP$478$2;
		__builtin_memset( &TMP$477$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$477$2, -1ll, (void*)((uint8*)&FBC$ + 2512ll), 261ll, 0 );
		FBSTRING* vr$21 = PATHSTRIPDIV( &TMP$477$2 );
		__builtin_memset( &TMP$478$2, 0, 24ll );
		FBSTRING* vr$24 = fb_StrConcat( &TMP$478$2, (void*)vr$21, -1ll, (void*)"/", 2ll );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 2512ll), 261ll, (void*)vr$24, -1ll, 0 );
		fb_StrDelete( (FBSTRING*)&TMP$477$2 );
	}
	label$1029:;
	label$1028:;
}

static void FBCSETUPCOMPILERPATHS( void )
{
	FBSTRING TMP$487$1;
	FBSTRING TMP$488$1;
	FBSTRING TMP$489$1;
	FBSTRING TMP$490$1;
	FBSTRING TMP$491$1;
	FBSTRING TMP$492$1;
	FBSTRING TMP$493$1;
	FBSTRING TMP$494$1;
	label$1031:;
	FBSTRING TARGETID$1;
	FBSTRING* vr$0 = FBGETTARGETID(  );
	fb_StrInit( (void*)&TARGETID$1, -1ll, (void*)vr$0, -1ll, 0 );
	FBSTRING FBNAME$1;
	__builtin_memset( &FBNAME$1, 0, 24ll );
	fb_StrAssign( (void*)&FBNAME$1, -1ll, (void*)"freebasic", 10ll, 0 );
	FBSTRING LIBDIRNAME$1;
	fb_StrInit( (void*)&LIBDIRNAME$1, -1ll, (void*)"lib", 4ll, 0 );
	int64 vr$6 = fb_StrLen( (void*)((uint8*)&FBC$ + 3556ll), 261ll );
	if( vr$6 <= 0ll ) goto label$1034;
	{
		FBSTRING TMP$481$2;
		FBSTRING TMP$482$2;
		FBSTRING TMP$483$2;
		__builtin_memset( &TMP$481$2, 0, 24ll );
		FBSTRING* vr$11 = fb_StrConcat( &TMP$481$2, (void*)((uint8*)&FBC$ + 2512ll), 261ll, (void*)"bin", 4ll );
		__builtin_memset( &TMP$482$2, 0, 24ll );
		FBSTRING* vr$14 = fb_StrConcat( &TMP$482$2, (void*)vr$11, -1ll, (void*)"/", 2ll );
		__builtin_memset( &TMP$483$2, 0, 24ll );
		FBSTRING* vr$17 = fb_StrConcat( &TMP$483$2, (void*)vr$14, -1ll, (void*)((uint8*)&FBC$ + 3556ll), 261ll );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 2773ll), 261ll, (void*)vr$17, -1ll, 0 );
	}
	goto label$1033;
	label$1034:;
	{
		FBSTRING TMP$484$2;
		FBSTRING TMP$485$2;
		FBSTRING TMP$486$2;
		__builtin_memset( &TMP$484$2, 0, 24ll );
		FBSTRING* vr$23 = fb_StrConcat( &TMP$484$2, (void*)((uint8*)&FBC$ + 2512ll), 261ll, (void*)"bin", 4ll );
		__builtin_memset( &TMP$485$2, 0, 24ll );
		FBSTRING* vr$26 = fb_StrConcat( &TMP$485$2, (void*)vr$23, -1ll, (void*)"/", 2ll );
		__builtin_memset( &TMP$486$2, 0, 24ll );
		FBSTRING* vr$29 = fb_StrConcat( &TMP$486$2, (void*)vr$26, -1ll, (void*)((uint8*)&FBC$ + 2225ll), 129ll );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 2773ll), 261ll, (void*)vr$29, -1ll, 0 );
	}
	label$1033:;
	__builtin_memset( &TMP$487$1, 0, 24ll );
	FBSTRING* vr$35 = fb_StrConcat( &TMP$487$1, (void*)((uint8*)&FBC$ + 2512ll), 261ll, (void*)"include", 8ll );
	__builtin_memset( &TMP$488$1, 0, 24ll );
	FBSTRING* vr$38 = fb_StrConcat( &TMP$488$1, (void*)vr$35, -1ll, (void*)"/", 2ll );
	__builtin_memset( &TMP$489$1, 0, 24ll );
	FBSTRING* vr$41 = fb_StrConcat( &TMP$489$1, (void*)vr$38, -1ll, (void*)&FBNAME$1, -1ll );
	fb_StrAssign( (void*)((uint8*)&FBC$ + 3034ll), 261ll, (void*)vr$41, -1ll, 0 );
	__builtin_memset( &TMP$490$1, 0, 24ll );
	FBSTRING* vr$49 = fb_StrConcat( &TMP$490$1, (void*)((uint8*)&FBC$ + 2512ll), 261ll, (void*)&LIBDIRNAME$1, -1ll );
	__builtin_memset( &TMP$491$1, 0, 24ll );
	FBSTRING* vr$52 = fb_StrConcat( &TMP$491$1, (void*)vr$49, -1ll, (void*)"/", 2ll );
	__builtin_memset( &TMP$492$1, 0, 24ll );
	FBSTRING* vr$55 = fb_StrConcat( &TMP$492$1, (void*)vr$52, -1ll, (void*)&FBNAME$1, -1ll );
	__builtin_memset( &TMP$493$1, 0, 24ll );
	FBSTRING* vr$58 = fb_StrConcat( &TMP$493$1, (void*)vr$55, -1ll, (void*)"/", 2ll );
	__builtin_memset( &TMP$494$1, 0, 24ll );
	FBSTRING* vr$61 = fb_StrConcat( &TMP$494$1, (void*)vr$58, -1ll, (void*)&TARGETID$1, -1ll );
	fb_StrAssign( (void*)((uint8*)&FBC$ + 3295ll), 261ll, (void*)vr$61, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&LIBDIRNAME$1 );
	fb_StrDelete( (FBSTRING*)&FBNAME$1 );
	fb_StrDelete( (FBSTRING*)&TARGETID$1 );
	label$1032:;
}

static void FBCPRINTTARGETINFO( void )
{
	FBSTRING TMP$496$1;
	FBSTRING TMP$497$1;
	label$1035:;
	FBSTRING S$1;
	FBSTRING* vr$0 = FBGETTARGETID(  );
	fb_StrInit( (void*)&S$1, -1ll, (void*)vr$0, -1ll, 0 );
	char* vr$2 = FBGETFBCARCH(  );
	__builtin_memset( &TMP$496$1, 0, 24ll );
	FBSTRING* vr$5 = fb_StrConcat( &TMP$496$1, (void*)", ", 3ll, (void*)vr$2, 0ll );
	__builtin_memset( &TMP$497$1, 0, 24ll );
	FBSTRING* vr$9 = fb_StrConcat( &TMP$497$1, (void*)&S$1, -1ll, (void*)vr$5, -1ll );
	fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$9, -1ll, 0 );
	fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)", ", 3ll, 0 );
	int64 vr$12 = FBGETBITS(  );
	FBSTRING* vr$13 = fb_LongintToStr( vr$12 );
	fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)vr$13, -1ll, 0 );
	fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"bit", 4ll, 0 );
	int64 vr$17 = fb_StrLen( (void*)((uint8*)&FBC$ + 2096ll), 129ll );
	if( vr$17 <= 0ll ) goto label$1038;
	{
		fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)" (", 3ll, 0 );
		fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)((uint8*)&FBC$ + 2096ll), 129ll, 0 );
		fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)")", 2ll, 0 );
	}
	label$1038:;
	label$1037:;
	FBSTRING* vr$22 = fb_StrAllocTempDescZEx( (char*)"target:", 7ll );
	fb_PrintString( 0, (FBSTRING*)vr$22, 2 );
	fb_PrintString( 0, (FBSTRING*)&S$1, 1 );
	FBSTRING* vr$24 = fb_StrAllocTempDescZEx( (char*)"backend:", 8ll );
	fb_PrintString( 0, (FBSTRING*)vr$24, 2 );
	int64 vr$25 = FBGETOPTION( 2ll );
	FBSTRING* vr$26 = FBGETBACKENDNAME( vr$25 );
	fb_PrintString( 0, (FBSTRING*)vr$26, 1 );
	fb_StrDelete( (FBSTRING*)&S$1 );
	label$1036:;
}

static void FBCDETERMINEMAINNAME( void )
{
	label$1039:;
	int64 vr$1 = fb_StrLen( (void*)((uint8*)&FBC$ + 1229ll), 261ll );
	if( vr$1 != 0ll ) goto label$1042;
	{
		FBSTRING TMP$504$2;
		struct $9FBCIOFILE* M$2;
		void* vr$3 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 144ll) );
		M$2 = (struct $9FBCIOFILE*)vr$3;
		if( M$2 == (struct $9FBCIOFILE*)0ull ) goto label$1044;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 1229ll), 261ll, (void*)M$2, -1ll, 0 );
		}
		goto label$1043;
		label$1044:;
		{
			FBSTRING* OBJF$3;
			void* vr$8 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 400ll) );
			OBJF$3 = (FBSTRING*)vr$8;
			if( OBJF$3 == (FBSTRING*)0ull ) goto label$1046;
			{
				fb_StrAssign( (void*)((uint8*)&FBC$ + 1229ll), 261ll, (void*)OBJF$3, -1ll, 0 );
			}
			goto label$1045;
			label$1046:;
			{
				fb_StrAssign( (void*)((uint8*)&FBC$ + 1229ll), 261ll, (void*)"unnamed", 8ll, 0 );
			}
			label$1045:;
		}
		label$1043:;
		__builtin_memset( &TMP$504$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$504$2, -1ll, (void*)((uint8*)&FBC$ + 1229ll), 261ll, 0 );
		FBSTRING* vr$15 = HSTRIPEXT( &TMP$504$2 );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 1229ll), 261ll, (void*)vr$15, -1ll, 0 );
		fb_StrDelete( (FBSTRING*)&TMP$504$2 );
	}
	label$1042:;
	label$1041:;
	label$1040:;
}

static FBSTRING* HGETASMNAME( struct $9FBCIOFILE* MODULE$1, int64 STAGE$1 )
{
	FBSTRING TMP$509$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$1047:;
	char* EXT$1;
	FBSTRING ASMFILE$1;
	__builtin_memset( &ASMFILE$1, 0, 24ll );
	FBSTRING* vr$3 = HSTRIPEXT( *(FBSTRING**)((uint8*)MODULE$1 + 24ll) );
	fb_StrAssign( (void*)&ASMFILE$1, -1ll, (void*)vr$3, -1ll, 0 );
	int64 vr$5 = FBGETOPTION( 3ll );
	if( vr$5 == 11ll ) goto label$1050;
	{
		EXT$1 = (char*)".asm";
	}
	goto label$1049;
	label$1050:;
	{
		EXT$1 = (char*)".o";
	}
	label$1049:;
	if( STAGE$1 != 1ll ) goto label$1052;
	{
		{
			int64 TMP$506$3;
			int64 vr$6 = FBGETOPTION( 2ll );
			TMP$506$3 = vr$6;
			if( TMP$506$3 != 1ll ) goto label$1054;
			label$1055:;
			{
				EXT$1 = (char*)".c";
			}
			goto label$1053;
			label$1054:;
			if( TMP$506$3 != 2ll ) goto label$1056;
			label$1057:;
			{
				EXT$1 = (char*)".ll";
			}
			label$1056:;
			label$1053:;
		}
	}
	label$1052:;
	label$1051:;
	__builtin_memset( &TMP$509$1, 0, 24ll );
	FBSTRING* vr$10 = fb_StrConcat( &TMP$509$1, (void*)&ASMFILE$1, -1ll, (void*)EXT$1, 0ll );
	fb_StrAssign( (void*)&ASMFILE$1, -1ll, (void*)vr$10, -1ll, 0 );
	fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&ASMFILE$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&ASMFILE$1 );
	label$1048:;
	FBSTRING* vr$16 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$16;
}

static void HCOMPILEBAS( struct $9FBCIOFILE* MODULE$1, int64 IS_MAIN$1, int64 IS_FBCTINF$1, int64 MODULE_COUNT$1 )
{
	label$1058:;
	int64 PREVLANG$1;
	int64 PREVOUTTYPE$1;
	FBSTRING ASMFILE$1;
	__builtin_memset( &ASMFILE$1, 0, 24ll );
	FBSTRING PPONLYFILE$1;
	__builtin_memset( &PPONLYFILE$1, 0, 24ll );
	FBSTRING* vr$2 = HGETASMNAME( MODULE$1, 1ll );
	fb_StrAssign( (void*)&ASMFILE$1, -1ll, (void*)vr$2, -1ll, 0 );
	int64 vr$4 = FBGETOPTION( 1ll );
	if( vr$4 == 0ll ) goto label$1061;
	{
		fb_StrAssign( (void*)&PPONLYFILE$1, -1ll, *(void**)((uint8*)MODULE$1 + 24ll), -1ll, 0 );
		if( *(int64*)((uint8*)MODULE$1 + 32ll) != 0ll ) goto label$1063;
		{
			FBSTRING TMP$511$3;
			FBSTRING* vr$9 = HSTRIPEXT( &PPONLYFILE$1 );
			__builtin_memset( &TMP$511$3, 0, 24ll );
			FBSTRING* vr$12 = fb_StrConcat( &TMP$511$3, (void*)vr$9, -1ll, (void*)".pp.bas", 8ll );
			fb_StrAssign( (void*)&PPONLYFILE$1, -1ll, (void*)vr$12, -1ll, 0 );
		}
		label$1063:;
		label$1062:;
	}
	label$1061:;
	label$1060:;
	if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$1065;
	{
		FBSTRING* vr$14 = fb_StrAllocTempDescZEx( (char*)"compiling: ", 11ll );
		fb_PrintString( 0, (FBSTRING*)vr$14, 2 );
		fb_PrintString( 0, (FBSTRING*)MODULE$1, 0 );
		FBSTRING* vr$17 = fb_StrAllocTempDescZEx( (char*)" -o ", 4ll );
		fb_PrintString( 0, (FBSTRING*)vr$17, 0 );
		fb_PrintString( 0, (FBSTRING*)&ASMFILE$1, 0 );
		int64 vr$19 = FBGETOPTION( 1ll );
		if( vr$19 == 0ll ) goto label$1067;
		{
			FBSTRING TMP$515$3;
			__builtin_memset( &TMP$515$3, 0, 24ll );
			FBSTRING* vr$23 = fb_StrConcat( &TMP$515$3, (void*)" -pp ", 6ll, (void*)&PPONLYFILE$1, -1ll );
			fb_PrintString( 0, (FBSTRING*)vr$23, 0 );
		}
		label$1067:;
		label$1066:;
		if( IS_MAIN$1 == 0ll ) goto label$1069;
		{
			FBSTRING* vr$24 = fb_StrAllocTempDescZEx( (char*)" (main module)", 14ll );
			fb_PrintString( 0, (FBSTRING*)vr$24, 0 );
		}
		goto label$1068;
		label$1069:;
		if( IS_FBCTINF$1 == 0ll ) goto label$1070;
		{
			FBSTRING* vr$25 = fb_StrAllocTempDescZEx( (char*)" (FB compile-time info)", 23ll );
			fb_PrintString( 0, (FBSTRING*)vr$25, 0 );
		}
		label$1070:;
		label$1068:;
		fb_PrintVoid( 0, 1 );
	}
	label$1065:;
	label$1064:;
	int64 vr$26 = FBGETOPTION( 12ll );
	if( vr$26 == -1ll ) goto label$1072;
	{
		int64 vr$27 = FBGETOPTION( 12ll );
		FBSETOPTION( 10ll, vr$27 );
	}
	label$1072:;
	label$1071:;
	int64 vr$28 = FBGETOPTION( 10ll );
	PREVLANG$1 = vr$28;
	int64 vr$29 = FBGETOPTION( 0ll );
	PREVOUTTYPE$1 = vr$29;
	if( IS_FBCTINF$1 == 0ll ) goto label$1074;
	{
		FBSETOPTION( 0ll, 3ll );
	}
	label$1074:;
	label$1073:;
	label$1075:;
	{
		int64 vr$31 = FBGETOPTION( 2ll );
		int64 vr$33 = FBGETOPTION( 2ll );
		if( (~(*(int64*)((uint8*)&FBC$ + 80ll)) & (((int64)-(vr$31 != 0ll) & (int64)-(vr$33 != 3ll)) | ~(*(int64*)((uint8*)&FBC$ + 96ll)))) == 0ll ) goto label$1079;
		{
			FBCADDTEMP( &ASMFILE$1 );
		}
		goto label$1078;
		label$1079:;
		if( MODULE_COUNT$1 != 1ll ) goto label$1080;
		{
			int64 vr$40 = FBRESTARTGETCOUNT(  );
			if( vr$40 <= 0ll ) goto label$1082;
			{
				FBCREMOVETEMP( &ASMFILE$1 );
			}
			label$1082:;
			label$1081:;
		}
		label$1080:;
		label$1078:;
		FBINIT( IS_MAIN$1, (char*)((uint8*)&FBC$ + 1490ll), MODULE_COUNT$1 );
		if( IS_FBCTINF$1 == 0ll ) goto label$1084;
		{
			FBSETLIBS( (struct $7TSTRSET*)((uint8*)&FBC$ + 792ll), (struct $7TSTRSET*)((uint8*)&FBC$ + 880ll) );
		}
		goto label$1083;
		label$1084:;
		{
			FBSETLIBS( (struct $7TSTRSET*)((uint8*)&FBC$ + 528ll), (struct $7TSTRSET*)((uint8*)&FBC$ + 616ll) );
		}
		label$1083:;
		FBCOMPILE( (char*)*(char**)MODULE$1, (char*)*(char**)&ASMFILE$1, &PPONLYFILE$1, IS_MAIN$1 );
		int64 vr$49 = ERRGETCOUNT(  );
		if( vr$49 <= 0ll ) goto label$1086;
		{
			FBCEND( 1ll );
		}
		label$1086:;
		label$1085:;
		int64 vr$50 = FBSHOULDRESTART(  );
		if( vr$50 != 0ll ) goto label$1088;
		{
			goto label$1076;
		}
		label$1088:;
		label$1087:;
		FBRESTARTENDREQUEST( 7ll );
		FBEND(  );
		int64 vr$51 = FBSHOULDRESTART(  );
		if( vr$51 == 0ll ) goto label$1090;
		{
			int64 vr$52 = FBGETOPTION( 12ll );
			if( vr$52 != -1ll ) goto label$1092;
			{
				FBSETOPTION( 10ll, PREVLANG$1 );
			}
			label$1092:;
			label$1091:;
			fb_StrDelete( (FBSTRING*)&PPONLYFILE$1 );
			fb_StrDelete( (FBSTRING*)&ASMFILE$1 );
			goto label$1059;
		}
		label$1090:;
		label$1089:;
	}
	label$1077:;
	goto label$1075;
	label$1076:;
	if( IS_FBCTINF$1 != 0ll ) goto label$1094;
	{
		FBGETLIBS( (struct $7TSTRSET*)((uint8*)&FBC$ + 792ll), (struct $7TSTRSET*)((uint8*)&FBC$ + 880ll) );
	}
	label$1094:;
	label$1093:;
	FBEND(  );
	if( IS_FBCTINF$1 == 0ll ) goto label$1096;
	{
		FBSETOPTION( 0ll, PREVOUTTYPE$1 );
	}
	label$1096:;
	label$1095:;
	FBSETOPTION( 10ll, PREVLANG$1 );
	fb_StrDelete( (FBSTRING*)&PPONLYFILE$1 );
	fb_StrDelete( (FBSTRING*)&ASMFILE$1 );
	label$1059:;
}

static void HCOMPILEMODULES( void )
{
	label$1097:;
	int64 ISMAIN$1;
	int64 CHECKMAIN$1;
	FBSTRING MAINFILE$1;
	__builtin_memset( &MAINFILE$1, 0, 24ll );
	struct $9FBCIOFILE* MODULE$1;
	ISMAIN$1 = 0ll;
	{
		int64 TMP$518$2;
		int64 vr$1 = FBGETOPTION( 0ll );
		TMP$518$2 = vr$1;
		if( TMP$518$2 == 0ll ) goto label$1101;
		label$1102:;
		if( TMP$518$2 != 2ll ) goto label$1100;
		label$1101:;
		{
			CHECKMAIN$1 = -1ll;
		}
		goto label$1099;
		label$1100:;
		{
			CHECKMAIN$1 = *(int64*)((uint8*)&FBC$ + 1624ll);
		}
		label$1103:;
		label$1099:;
	}
	if( CHECKMAIN$1 == 0ll ) goto label$1105;
	{
		FBSTRING* vr$3 = HSTRIPPATH( (char*)((uint8*)&FBC$ + 1229ll) );
		fb_StrAssign( (void*)&MAINFILE$1, -1ll, (void*)vr$3, -1ll, 0 );
	}
	label$1105:;
	label$1104:;
	void* vr$6 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 144ll) );
	MODULE$1 = (struct $9FBCIOFILE*)vr$6;
	if( MODULE$1 != (struct $9FBCIOFILE*)0ull ) goto label$1107;
	{
		STRSETCOPY( (struct $7TSTRSET*)((uint8*)&FBC$ + 792ll), (struct $7TSTRSET*)((uint8*)&FBC$ + 528ll) );
		STRSETCOPY( (struct $7TSTRSET*)((uint8*)&FBC$ + 880ll), (struct $7TSTRSET*)((uint8*)&FBC$ + 616ll) );
		fb_StrDelete( (FBSTRING*)&MAINFILE$1 );
		goto label$1098;
	}
	label$1107:;
	label$1106:;
	int64 MODULE_COUNT$1;
	MODULE_COUNT$1 = 0ll;
	label$1108:;
	{
		if( CHECKMAIN$1 == 0ll ) goto label$1112;
		{
			FBSTRING TMP$519$3;
			__builtin_memset( &TMP$519$3, 0, 24ll );
			FBSTRING* vr$15 = HSTRIPEXT( (FBSTRING*)MODULE$1 );
			fb_StrAssign( (void*)&TMP$519$3, -1ll, (void*)vr$15, -1ll, 0 );
			FBSTRING* vr$17 = HSTRIPPATH( (char*)*(char**)&TMP$519$3 );
			int32 vr$19 = fb_StrCompare( (void*)&MAINFILE$1, -1ll, (void*)vr$17, -1ll );
			ISMAIN$1 = (int64)-((int64)vr$19 == 0ll);
			fb_StrDelete( (FBSTRING*)&TMP$519$3 );
		}
		label$1112:;
		label$1111:;
		MODULE_COUNT$1 = MODULE_COUNT$1 + 1ll;
		HCOMPILEBAS( MODULE$1, ISMAIN$1, 0ll, MODULE_COUNT$1 );
		int64 vr$24 = FBSHOULDRESTART(  );
		if( vr$24 == 0ll ) goto label$1114;
		{
			fb_StrDelete( (FBSTRING*)&MAINFILE$1 );
			goto label$1098;
		}
		label$1114:;
		label$1113:;
		void* vr$26 = LISTGETNEXT( (void*)MODULE$1 );
		MODULE$1 = (struct $9FBCIOFILE*)vr$26;
	}
	label$1110:;
	if( MODULE$1 != (struct $9FBCIOFILE*)0ull ) goto label$1108;
	label$1109:;
	fb_StrDelete( (FBSTRING*)&MAINFILE$1 );
	label$1098:;
}

static int64 HPARSEXPM( FBSTRING* XPMFILE$1, FBSTRING* CODE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1115:;
	fb_StrConcatByref( (void*)CODE$1, -1ll, (void*)"\x0A" "dim shared as zstring ptr ", 28ll, 0 );
	fb_StrConcatByref( (void*)CODE$1, -1ll, (void*)"fb_program_icon_data", 21ll, 0 );
	fb_StrConcatByref( (void*)CODE$1, -1ll, (void*)"(0 to ...) = _\x0A{ _\x0A", 20ll, 0 );
	int64 F$1;
	int32 vr$1 = fb_FileFree(  );
	F$1 = (int64)vr$1;
	int32 vr$4 = fb_FileOpen( (FBSTRING*)XPMFILE$1, 2u, 0u, 0u, (int32)F$1, 0 );
	if( (int64)vr$4 == 0ll ) goto label$1118;
	{
		goto label$1116;
	}
	label$1118:;
	label$1117:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	fb_FileLineInput( (int32)F$1, (void*)&LN$1, -1ll, 0 );
	FBSTRING* vr$10 = fb_StrUcase2( (FBSTRING*)&LN$1, 0 );
	int32 vr$11 = fb_StrCompare( (void*)vr$10, -1ll, (void*)"/* XPM */", 10ll );
	if( (int64)vr$11 == 0ll ) goto label$1120;
	{
		int32 vr$14 = fb_FileClose( (int32)F$1 );
		if( (int64)vr$14 == 0ll ) goto label$1121;
		void* vr$16 = fb_ErrorThrowAt( 3294, (char*)"src/compiler/fbc.bas", (void*)0ull, (void*)0ull );
		goto *vr$16;
		label$1121:;
		fb_StrDelete( (FBSTRING*)&LN$1 );
		goto label$1116;
	}
	label$1120:;
	label$1119:;
	int64 SAW_ROWS$1;
	SAW_ROWS$1 = 0ll;
	label$1122:;
	int32 vr$19 = fb_FileEof( (int32)F$1 );
	if( (int64)vr$19 != 0ll ) goto label$1123;
	{
		fb_FileLineInput( (int32)F$1, (void*)&LN$1, -1ll, 0 );
		int64 vr$24 = fb_StrLen( (void*)&LN$1, -1ll );
		FBSTRING* vr$25 = fb_StrAllocTempDescZEx( (char*)"\x22", 1ll );
		int64 vr$27 = fb_StrInstr( 1ll, (FBSTRING*)&LN$1, (FBSTRING*)vr$25 );
		FBSTRING* vr$31 = fb_RIGHT( (FBSTRING*)&LN$1, (vr$24 - vr$27) + 1ll );
		fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$31, -1ll, 0 );
		FBSTRING* vr$33 = fb_StrAllocTempDescZEx( (char*)"\x22", 1ll );
		int64 vr$35 = fb_StrInstr( 2ll, (FBSTRING*)&LN$1, (FBSTRING*)vr$33 );
		FBSTRING* vr$37 = fb_LEFT( (FBSTRING*)&LN$1, vr$35 );
		fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$37, -1ll, 0 );
		int64 vr$40 = fb_StrLen( (void*)&LN$1, -1ll );
		if( vr$40 <= 0ll ) goto label$1125;
		{
			FBSTRING TMP$526$3;
			if( SAW_ROWS$1 == 0ll ) goto label$1127;
			{
				fb_StrConcatByref( (void*)CODE$1, -1ll, (void*)", _\x0A", 5ll, 0 );
			}
			label$1127:;
			label$1126:;
			__builtin_memset( &TMP$526$3, 0, 24ll );
			FBSTRING* vr$44 = fb_StrConcat( &TMP$526$3, (void*)"\x09@", 3ll, (void*)&LN$1, -1ll );
			fb_StrConcatByref( (void*)CODE$1, -1ll, (void*)vr$44, -1ll, 0 );
			SAW_ROWS$1 = -1ll;
		}
		label$1125:;
		label$1124:;
	}
	goto label$1122;
	label$1123:;
	int32 vr$46 = fb_FileClose( (int32)F$1 );
	if( (int64)vr$46 == 0ll ) goto label$1128;
	void* vr$48 = fb_ErrorThrowAt( 3324, (char*)"src/compiler/fbc.bas", (void*)0ull, (void*)0ull );
	goto *vr$48;
	label$1128:;
	if( SAW_ROWS$1 != 0ll ) goto label$1130;
	{
		fb_StrDelete( (FBSTRING*)&LN$1 );
		goto label$1116;
	}
	label$1130:;
	label$1129:;
	fb_StrConcatByref( (void*)CODE$1, -1ll, (void*)" _ \x0A", 5ll, 0 );
	fb_StrConcatByref( (void*)CODE$1, -1ll, (void*)"}\x0A\x0A", 4ll, 0 );
	fb_StrConcatByref( (void*)CODE$1, -1ll, (void*)"extern as zstring ptr ptr fb_program_icon alias \x22" "fb_program_icon\x22\x0A", 67ll, 0 );
	fb_StrConcatByref( (void*)CODE$1, -1ll, (void*)"dim shared as zstring ptr ptr fb_program_icon = @fb_program_icon_data(0)\x0A", 74ll, 0 );
	fb$result$1 = -1ll;
	fb_StrDelete( (FBSTRING*)&LN$1 );
	label$1116:;
	return fb$result$1;
}

static int64 HCOMPILEXPM( void )
{
	int64 TMP$537$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1131:;
	FBSTRING XPMFILE$1;
	__builtin_memset( &XPMFILE$1, 0, 24ll );
	FBSTRING CODE$1;
	__builtin_memset( &CODE$1, 0, 24ll );
	int64 FO$1;
	int64 vr$4 = fb_StrLen( (void*)((uint8*)&FBC$ + 272ll), -1ll );
	if( vr$4 != 0ll ) goto label$1134;
	{
		fb$result$1 = -1ll;
		fb_StrDelete( (FBSTRING*)&CODE$1 );
		fb_StrDelete( (FBSTRING*)&XPMFILE$1 );
		goto label$1132;
	}
	label$1134:;
	label$1133:;
	fb_StrAssign( (void*)&XPMFILE$1, -1ll, (void*)((uint8*)&FBC$ + 272ll), -1ll, 0 );
	int64 vr$9 = fb_StrLen( *(void**)((uint8*)&FBC$ + 296ll), -1ll );
	if( vr$9 <= 0ll ) goto label$1136;
	{
		FBSTRING* vr$10 = HSTRIPEXT( *(FBSTRING**)((uint8*)&FBC$ + 296ll) );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 272ll), -1ll, (void*)vr$10, -1ll, 0 );
	}
	label$1136:;
	label$1135:;
	fb_StrConcatByref( (void*)((uint8*)&FBC$ + 272ll), -1ll, (void*)".bas", 5ll, 0 );
	if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$1138;
	{
		FBSTRING TMP$535$2;
		FBSTRING TMP$536$2;
		FBSTRING* vr$13 = fb_StrAllocTempDescZEx( (char*)"parsing xpm: ", 13ll );
		fb_PrintString( 0, (FBSTRING*)vr$13, 2 );
		__builtin_memset( &TMP$535$2, 0, 24ll );
		FBSTRING* vr$18 = fb_StrConcat( &TMP$535$2, (void*)&XPMFILE$1, -1ll, (void*)" -o ", 5ll );
		__builtin_memset( &TMP$536$2, 0, 24ll );
		FBSTRING* vr$21 = fb_StrConcat( &TMP$536$2, (void*)vr$18, -1ll, (void*)((uint8*)&FBC$ + 272ll), -1ll );
		fb_PrintString( 0, (FBSTRING*)vr$21, 1 );
	}
	label$1138:;
	label$1137:;
	int64 vr$24 = HPARSEXPM( &XPMFILE$1, &CODE$1 );
	if( vr$24 != 0ll ) goto label$1140;
	{
		fb_StrDelete( (FBSTRING*)&CODE$1 );
		fb_StrDelete( (FBSTRING*)&XPMFILE$1 );
		goto label$1132;
	}
	label$1140:;
	label$1139:;
	int32 vr$27 = fb_FileFree(  );
	FO$1 = (int64)vr$27;
	int32 vr$31 = fb_FileOpen( (FBSTRING*)((uint8*)&FBC$ + 272ll), 3u, 0u, 0u, (int32)FO$1, 0 );
	if( (int64)vr$31 == 0ll ) goto label$1142;
	{
		fb_StrDelete( (FBSTRING*)&CODE$1 );
		fb_StrDelete( (FBSTRING*)&XPMFILE$1 );
		goto label$1132;
	}
	label$1142:;
	label$1141:;
	TMP$537$1 = FO$1;
	fb_PrintString( (int32)TMP$537$1, (FBSTRING*)&CODE$1, 0 );
	int32 vr$38 = fb_FileClose( (int32)FO$1 );
	if( (int64)vr$38 == 0ll ) goto label$1143;
	void* vr$40 = fb_ErrorThrowAt( 3380, (char*)"src/compiler/fbc.bas", (void*)0ull, (void*)0ull );
	goto *vr$40;
	label$1143:;
	if( *(int64*)((uint8*)&FBC$ + 80ll) != 0ll ) goto label$1145;
	{
		FBCADDTEMP( (FBSTRING*)((uint8*)&FBC$ + 272ll) );
	}
	label$1145:;
	label$1144:;
	HCOMPILEBAS( (struct $9FBCIOFILE*)((uint8*)&FBC$ + 272ll), 0ll, 0ll, -1ll );
	fb$result$1 = -1ll;
	fb_StrDelete( (FBSTRING*)&CODE$1 );
	fb_StrDelete( (FBSTRING*)&XPMFILE$1 );
	label$1132:;
	return fb$result$1;
}

static int64 HCOMPILESTAGE2MODULE( struct $9FBCIOFILE* MODULE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1146:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	FBSTRING ASMFILE$1;
	__builtin_memset( &ASMFILE$1, 0, 24ll );
	FBSTRING* vr$3 = HGETASMNAME( MODULE$1, 2ll );
	fb_StrAssign( (void*)&ASMFILE$1, -1ll, (void*)vr$3, -1ll, 0 );
	int64 vr$6 = FBGETOPTION( 3ll );
	if( (~(*(int64*)((uint8*)&FBC$ + 96ll)) & ((int64)-(vr$6 != 11ll) | ~(*(int64*)((uint8*)&FBC$ + 104ll)))) == 0ll ) goto label$1149;
	{
		FBCADDTEMP( &ASMFILE$1 );
	}
	label$1149:;
	label$1148:;
	{
		int64 TMP$538$2;
		int64 vr$12 = FBGETOPTION( 2ll );
		TMP$538$2 = vr$12;
		if( TMP$538$2 != 1ll ) goto label$1151;
		label$1152:;
		{
			boolean ISM64TARGET$3;
			ISM64TARGET$3 = (boolean)0ll;
			{
				int64 TMP$539$4;
				int64 vr$13 = FBGETCPUFAMILY(  );
				TMP$539$4 = vr$13;
				if( TMP$539$4 != 0ll ) goto label$1154;
				label$1155:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-m32 ", 6ll, 0 );
				}
				goto label$1153;
				label$1154:;
				if( TMP$539$4 != 1ll ) goto label$1156;
				label$1157:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-m64 ", 6ll, 0 );
					ISM64TARGET$3 = (boolean)1ll;
				}
				goto label$1153;
				label$1156:;
				if( TMP$539$4 != 4ll ) goto label$1158;
				label$1159:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-m32 ", 6ll, 0 );
				}
				goto label$1153;
				label$1158:;
				if( TMP$539$4 == 5ll ) goto label$1161;
				label$1162:;
				if( TMP$539$4 != 6ll ) goto label$1160;
				label$1161:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-m64 ", 6ll, 0 );
					ISM64TARGET$3 = (boolean)1ll;
				}
				label$1160:;
				label$1153:;
			}
			int64 vr$18 = FBGETOPTION( 3ll );
			if( vr$18 == 11ll ) goto label$1164;
			{
				int64 TMP$542$4;
				int64 TMP$543$4;
				int64 vr$19 = FBGETCPUFAMILY(  );
				if( vr$19 == 4ll ) goto label$1165;
				int64 vr$20 = FBGETCPUFAMILY(  );
				TMP$542$4 = (int64)-(vr$20 == 5ll);
				goto label$1465;
				label$1165:;
				TMP$542$4 = -1ll;
				label$1465:;
				if( TMP$542$4 != 0ll ) goto label$1166;
				int64 vr$22 = FBGETCPUFAMILY(  );
				TMP$543$4 = (int64)-(vr$22 == 6ll);
				goto label$1466;
				label$1166:;
				TMP$543$4 = -1ll;
				label$1466:;
				if( TMP$543$4 == 0ll ) goto label$1168;
				{
					if( *(int64*)((uint8*)&FBC$ + 56ll) == 0ll ) goto label$1170;
					{
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-mcpu=native ", 14ll, 0 );
					}
					goto label$1169;
					label$1170:;
					{
						FBSTRING TMP$546$6;
						FBSTRING TMP$547$6;
						FBSTRING TMP$548$6;
						char* vr$25 = FBGETGCCARCH(  );
						__builtin_memset( &TMP$546$6, 0, 24ll );
						FBSTRING* vr$28 = fb_StrConcat( &TMP$546$6, (void*)"-mcpu=", 7ll, (void*)vr$25, 0ll );
						__builtin_memset( &TMP$547$6, 0, 24ll );
						FBSTRING* vr$31 = fb_StrConcat( &TMP$547$6, (void*)vr$28, -1ll, (void*)" ", 2ll );
						__builtin_memset( &TMP$548$6, 0, 24ll );
						FBSTRING* vr$35 = fb_StrConcat( &TMP$548$6, (void*)&LN$1, -1ll, (void*)vr$31, -1ll );
						fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$35, -1ll, 0 );
					}
					label$1169:;
				}
				goto label$1167;
				label$1168:;
				{
					if( *(int64*)((uint8*)&FBC$ + 56ll) == 0ll ) goto label$1172;
					{
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-march=native ", 15ll, 0 );
					}
					goto label$1171;
					label$1172:;
					{
						FBSTRING TMP$551$6;
						FBSTRING TMP$552$6;
						FBSTRING TMP$553$6;
						char* vr$38 = FBGETGCCARCH(  );
						__builtin_memset( &TMP$551$6, 0, 24ll );
						FBSTRING* vr$41 = fb_StrConcat( &TMP$551$6, (void*)"-march=", 8ll, (void*)vr$38, 0ll );
						__builtin_memset( &TMP$552$6, 0, 24ll );
						FBSTRING* vr$44 = fb_StrConcat( &TMP$552$6, (void*)vr$41, -1ll, (void*)" ", 2ll );
						__builtin_memset( &TMP$553$6, 0, 24ll );
						FBSTRING* vr$48 = fb_StrConcat( &TMP$553$6, (void*)&LN$1, -1ll, (void*)vr$44, -1ll );
						fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$48, -1ll, 0 );
					}
					label$1171:;
				}
				label$1167:;
			}
			label$1164:;
			label$1163:;
			int64 vr$50 = FBGETOPTION( 37ll );
			if( vr$50 == 0ll ) goto label$1174;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-fPIC ", 7ll, 0 );
			}
			label$1174:;
			label$1173:;
			int64 vr$52 = FBGETOPTION( 3ll );
			if( vr$52 == 11ll ) goto label$1176;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-S -nostdlib -nostdinc -Wall ", 30ll, 0 );
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-Wno-unused ", 13ll, 0 );
			}
			goto label$1175;
			label$1176:;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-c -nostdlib -nostdinc -Wall -Wno-unused-label -Wno-unused-function -Wno-unused-variable ", 90ll, 0 );
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-Wno-warn-absolute-paths ", 26ll, 0 );
			}
			label$1175:;
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-Wno-main ", 11ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-Werror-implicit-function-declaration ", 39ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-O", 3ll, 0 );
			int64 vr$60 = FBGETOPTION( 8ll );
			FBSTRING* vr$61 = fb_LongintToStr( vr$60 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$61, -1ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" ", 2ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-fno-strict-aliasing ", 22ll, 0 );
			{
				uint64 TMP$565$4;
				int64 vr$65 = FBGETOPTION( 3ll );
				TMP$565$4 = (uint64)vr$65;
				goto label$1178;
				label$1179:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-fno-ident ", 12ll, 0 );
				}
				goto label$1177;
				label$1178:;
				static const void* tmp$807[1ll] = {
					&&label$1179,
				};
				if( TMP$565$4 > 0ull ) goto label$1177;
				goto *tmp$807[TMP$565$4 - 0ull];
				label$1177:;
			}
			int64 vr$67 = FBGETOPTION( 3ll );
			if( vr$67 == 11ll ) goto label$1181;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-frounding-math ", 17ll, 0 );
			}
			label$1181:;
			label$1180:;
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-fno-math-errno ", 17ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-fwrapv ", 9ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-fno-exceptions -fno-asynchronous-unwind-tables ", 49ll, 0 );
			int64 vr$74 = FBGETOPTION( 21ll );
			if( ((int64)-((int64)-ISM64TARGET$3 == -1ll) | (int64)-(vr$74 == -1ll)) == 0ll ) goto label$1183;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-funwind-tables ", 17ll, 0 );
			}
			goto label$1182;
			label$1183:;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-fno-unwind-tables ", 20ll, 0 );
			}
			label$1182:;
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-Wno-format ", 13ll, 0 );
			int64 vr$80 = FBGETOPTION( 14ll );
			if( vr$80 == 0ll ) goto label$1185;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-g ", 4ll, 0 );
			}
			label$1185:;
			label$1184:;
			int64 vr$82 = FBGETOPTION( 5ll );
			if( vr$82 != 1ll ) goto label$1187;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-mfpmath=sse -msse2 ", 21ll, 0 );
			}
			label$1187:;
			label$1186:;
			{
				int64 TMP$576$4;
				int64 vr$84 = FBGETCPUFAMILY(  );
				TMP$576$4 = vr$84;
				if( TMP$576$4 == 0ll ) goto label$1190;
				label$1191:;
				if( TMP$576$4 != 1ll ) goto label$1189;
				label$1190:;
				{
					int64 vr$85 = FBGETOPTION( 9ll );
					if( vr$85 != 0ll ) goto label$1193;
					{
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-masm=intel ", 13ll, 0 );
					}
					label$1193:;
					label$1192:;
				}
				label$1189:;
				label$1188:;
			}
		}
		goto label$1150;
		label$1151:;
		if( TMP$538$2 != 2ll ) goto label$1194;
		label$1195:;
		{
			{
				int64 TMP$578$4;
				int64 vr$87 = FBGETCPUFAMILY(  );
				TMP$578$4 = vr$87;
				if( TMP$578$4 != 0ll ) goto label$1197;
				label$1198:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-march=x86 ", 12ll, 0 );
				}
				goto label$1196;
				label$1197:;
				if( TMP$578$4 != 1ll ) goto label$1199;
				label$1200:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-march=x86-64 ", 15ll, 0 );
				}
				goto label$1196;
				label$1199:;
				if( TMP$578$4 != 2ll ) goto label$1201;
				label$1202:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-march=arm ", 12ll, 0 );
				}
				goto label$1196;
				label$1201:;
				if( TMP$578$4 != 3ll ) goto label$1203;
				label$1204:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-march=armv8-a ", 16ll, 0 );
				}
				goto label$1196;
				label$1203:;
				if( TMP$578$4 != 4ll ) goto label$1205;
				label$1206:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-mcpu=powerpc ", 15ll, 0 );
				}
				goto label$1196;
				label$1205:;
				if( TMP$578$4 != 5ll ) goto label$1207;
				label$1208:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-mcpu=powerpc64 ", 17ll, 0 );
				}
				goto label$1196;
				label$1207:;
				if( TMP$578$4 != 6ll ) goto label$1209;
				label$1210:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-mcpu=powerpc64le ", 19ll, 0 );
				}
				label$1209:;
				label$1196:;
			}
			int64 vr$95 = FBGETOPTION( 37ll );
			if( vr$95 == 0ll ) goto label$1212;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-relocation-model=pic ", 23ll, 0 );
			}
			label$1212:;
			label$1211:;
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-O", 3ll, 0 );
			int64 vr$98 = FBGETOPTION( 8ll );
			FBSTRING* vr$99 = fb_LongintToStr( vr$98 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$99, -1ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" ", 2ll, 0 );
			{
				int64 TMP$587$4;
				int64 vr$102 = FBGETCPUFAMILY(  );
				TMP$587$4 = vr$102;
				if( TMP$587$4 == 0ll ) goto label$1215;
				label$1216:;
				if( TMP$587$4 != 1ll ) goto label$1214;
				label$1215:;
				{
					int64 vr$103 = FBGETOPTION( 9ll );
					if( vr$103 != 0ll ) goto label$1218;
					{
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"--x86-asm-syntax=intel ", 24ll, 0 );
					}
					label$1218:;
					label$1217:;
				}
				label$1214:;
				label$1213:;
			}
		}
		label$1194:;
		label$1150:;
	}
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22", 2ll, 0 );
	FBSTRING* vr$106 = HGETASMNAME( MODULE$1, 1ll );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$106, -1ll, 0 );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22 ", 3ll, 0 );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-o \x22", 5ll, 0 );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)&ASMFILE$1, -1ll, 0 );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22", 2ll, 0 );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)((uint8*)&FBC$ + 2072ll), -1ll, 0 );
	{
		int64 TMP$591$2;
		int64 vr$115 = FBGETOPTION( 2ll );
		TMP$591$2 = vr$115;
		if( TMP$591$2 != 1ll ) goto label$1220;
		label$1221:;
		{
			$7FBCTOOL GCC$3;
			GCC$3 = 3ll;
			int64 vr$116 = FBGETOPTION( 3ll );
			if( vr$116 != 11ll ) goto label$1223;
			{
				GCC$3 = 14ll;
			}
			label$1223:;
			label$1222:;
			int64 vr$118 = FBCRUNBIN( (char*)"compiling C", GCC$3, &LN$1 );
			fb$result$1 = vr$118;
		}
		goto label$1219;
		label$1220:;
		if( TMP$591$2 != 2ll ) goto label$1224;
		label$1225:;
		{
			int64 vr$120 = FBCRUNBIN( (char*)"compiling LLVM IR", 4ll, &LN$1 );
			fb$result$1 = vr$120;
		}
		label$1224:;
		label$1219:;
	}
	fb_StrDelete( (FBSTRING*)&ASMFILE$1 );
	fb_StrDelete( (FBSTRING*)&LN$1 );
	label$1147:;
	return fb$result$1;
}

static void HCOMPILESTAGE2MODULES( void )
{
	label$1226:;
	struct $9FBCIOFILE* MODULE$1;
	void* vr$1 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 144ll) );
	MODULE$1 = (struct $9FBCIOFILE*)vr$1;
	label$1228:;
	if( MODULE$1 == (struct $9FBCIOFILE*)0ull ) goto label$1229;
	{
		int64 vr$2 = HCOMPILESTAGE2MODULE( MODULE$1 );
		if( vr$2 != 0ll ) goto label$1231;
		{
			FBCEND( 1ll );
		}
		label$1231:;
		label$1230:;
		void* vr$3 = LISTGETNEXT( (void*)MODULE$1 );
		MODULE$1 = (struct $9FBCIOFILE*)vr$3;
	}
	goto label$1228;
	label$1229:;
	label$1227:;
}

static int64 HASSEMBLEMODULE( struct $9FBCIOFILE* MODULE$1 )
{
	FBSTRING TMP$598$1;
	FBSTRING TMP$599$1;
	FBSTRING TMP$600$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1232:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	{
		int64 TMP$594$2;
		int64 vr$2 = FBGETCPUFAMILY(  );
		TMP$594$2 = vr$2;
		if( TMP$594$2 != 0ll ) goto label$1235;
		label$1236:;
		{
			int64 vr$3 = FBGETOPTION( 3ll );
			if( vr$3 != 9ll ) goto label$1238;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-arch i386 ", 12ll, 0 );
			}
			goto label$1237;
			label$1238:;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"--32 ", 6ll, 0 );
			}
			label$1237:;
		}
		goto label$1234;
		label$1235:;
		if( TMP$594$2 != 1ll ) goto label$1239;
		label$1240:;
		{
			int64 vr$6 = FBGETOPTION( 3ll );
			if( vr$6 != 9ll ) goto label$1242;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-arch x86_64 ", 14ll, 0 );
			}
			goto label$1241;
			label$1242:;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"--64 ", 6ll, 0 );
			}
			label$1241:;
		}
		label$1239:;
		label$1234:;
	}
	int64 vr$9 = FBGETOPTION( 14ll );
	if( vr$9 != 0ll ) goto label$1244;
	{
		int64 vr$10 = FBGETOPTION( 3ll );
		if( vr$10 == 9ll ) goto label$1246;
		{
			int64 vr$11 = FBGETOPTION( 3ll );
			if( vr$11 == 11ll ) goto label$1248;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"--strip-local-absolute ", 24ll, 0 );
			}
			label$1248:;
			label$1247:;
		}
		label$1246:;
		label$1245:;
	}
	label$1244:;
	label$1243:;
	int64 vr$13 = FBGETOPTION( 3ll );
	if( vr$13 != 11ll ) goto label$1250;
	{
		fb$result$1 = -1ll;
		fb_StrDelete( (FBSTRING*)&LN$1 );
		goto label$1233;
	}
	label$1250:;
	label$1249:;
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22", 2ll, 0 );
	FBSTRING* vr$16 = HGETASMNAME( MODULE$1, 2ll );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$16, -1ll, 0 );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22 ", 3ll, 0 );
	__builtin_memset( &TMP$598$1, 0, 24ll );
	FBSTRING* vr$22 = fb_StrConcat( &TMP$598$1, (void*)"-o \x22", 5ll, *(void**)((uint8*)MODULE$1 + 24ll), -1ll );
	__builtin_memset( &TMP$599$1, 0, 24ll );
	FBSTRING* vr$25 = fb_StrConcat( &TMP$599$1, (void*)vr$22, -1ll, (void*)"\x22", 2ll );
	__builtin_memset( &TMP$600$1, 0, 24ll );
	FBSTRING* vr$29 = fb_StrConcat( &TMP$600$1, (void*)&LN$1, -1ll, (void*)vr$25, -1ll );
	fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$29, -1ll, 0 );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)((uint8*)&FBC$ + 2024ll), -1ll, 0 );
	$7FBCTOOL GAS$1;
	GAS$1 = 0ll;
	int64 vr$33 = FBGETOPTION( 3ll );
	if( vr$33 != 11ll ) goto label$1252;
	{
		GAS$1 = 11ll;
	}
	label$1252:;
	label$1251:;
	int64 vr$35 = FBCRUNBIN( (char*)"assembling", GAS$1, &LN$1 );
	if( vr$35 != 0ll ) goto label$1254;
	{
		fb_StrDelete( (FBSTRING*)&LN$1 );
		goto label$1233;
	}
	label$1254:;
	label$1253:;
	if( *(int64*)((uint8*)&FBC$ + 104ll) != 0ll ) goto label$1256;
	{
		FBCADDTEMP( *(FBSTRING**)((uint8*)MODULE$1 + 24ll) );
	}
	label$1256:;
	label$1255:;
	fb$result$1 = -1ll;
	fb_StrDelete( (FBSTRING*)&LN$1 );
	label$1233:;
	return fb$result$1;
}

static void HASSEMBLEMODULES( void )
{
	label$1257:;
	struct $9FBCIOFILE* MODULE$1;
	void* vr$1 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 144ll) );
	MODULE$1 = (struct $9FBCIOFILE*)vr$1;
	label$1259:;
	if( MODULE$1 == (struct $9FBCIOFILE*)0ull ) goto label$1260;
	{
		int64 vr$2 = HASSEMBLEMODULE( MODULE$1 );
		if( vr$2 != 0ll ) goto label$1262;
		{
			FBCEND( 1ll );
		}
		label$1262:;
		label$1261:;
		void* vr$3 = LISTGETNEXT( (void*)MODULE$1 );
		MODULE$1 = (struct $9FBCIOFILE*)vr$3;
	}
	goto label$1259;
	label$1260:;
	label$1258:;
}

static int64 HASSEMBLERC( struct $9FBCIOFILE* RC$1 )
{
	FBSTRING TMP$603$1;
	FBSTRING TMP$604$1;
	FBSTRING TMP$605$1;
	FBSTRING TMP$606$1;
	FBSTRING TMP$607$1;
	FBSTRING TMP$608$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1263:;
	FBSTRING LN$1;
	fb_StrInit( (void*)&LN$1, -1ll, (void*)"--output-format=coff --include-dir=.", 37ll, 0 );
	__builtin_memset( &TMP$603$1, 0, 24ll );
	FBSTRING* vr$6 = fb_StrConcat( &TMP$603$1, (void*)" \x22", 3ll, (void*)RC$1, -1ll );
	__builtin_memset( &TMP$604$1, 0, 24ll );
	FBSTRING* vr$9 = fb_StrConcat( &TMP$604$1, (void*)vr$6, -1ll, (void*)"\x22", 2ll );
	__builtin_memset( &TMP$605$1, 0, 24ll );
	FBSTRING* vr$13 = fb_StrConcat( &TMP$605$1, (void*)&LN$1, -1ll, (void*)vr$9, -1ll );
	fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$13, -1ll, 0 );
	__builtin_memset( &TMP$606$1, 0, 24ll );
	FBSTRING* vr$18 = fb_StrConcat( &TMP$606$1, (void*)" \x22", 3ll, *(void**)((uint8*)RC$1 + 24ll), -1ll );
	__builtin_memset( &TMP$607$1, 0, 24ll );
	FBSTRING* vr$21 = fb_StrConcat( &TMP$607$1, (void*)vr$18, -1ll, (void*)"\x22", 2ll );
	__builtin_memset( &TMP$608$1, 0, 24ll );
	FBSTRING* vr$25 = fb_StrConcat( &TMP$608$1, (void*)&LN$1, -1ll, (void*)vr$21, -1ll );
	fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$25, -1ll, 0 );
	int64 vr$28 = FBCRUNBIN( (char*)"compiling rc", 8ll, &LN$1 );
	fb$result$1 = vr$28;
	if( *(int64*)((uint8*)&FBC$ + 104ll) != 0ll ) goto label$1266;
	{
		FBCADDTEMP( *(FBSTRING**)((uint8*)RC$1 + 24ll) );
	}
	label$1266:;
	label$1265:;
	fb_StrDelete( (FBSTRING*)&LN$1 );
	label$1264:;
	return fb$result$1;
}

static void HASSEMBLERCS( void )
{
	label$1267:;
	struct $9FBCIOFILE* RC$1;
	void* vr$1 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 208ll) );
	RC$1 = (struct $9FBCIOFILE*)vr$1;
	label$1269:;
	if( RC$1 == (struct $9FBCIOFILE*)0ull ) goto label$1270;
	{
		int64 vr$2 = HASSEMBLERC( RC$1 );
		if( vr$2 != 0ll ) goto label$1272;
		{
			FBCEND( 1ll );
		}
		label$1272:;
		label$1271:;
		void* vr$3 = LISTGETNEXT( (void*)RC$1 );
		RC$1 = (struct $9FBCIOFILE*)vr$3;
	}
	goto label$1269;
	label$1270:;
	label$1268:;
}

static void HASSEMBLEXPM( void )
{
	label$1273:;
	int64 vr$1 = fb_StrLen( (void*)((uint8*)&FBC$ + 272ll), -1ll );
	if( vr$1 <= 0ll ) goto label$1276;
	{
		int64 vr$2 = FBGETOPTION( 2ll );
		if( vr$2 == 0ll ) goto label$1278;
		{
			HCOMPILESTAGE2MODULE( (struct $9FBCIOFILE*)((uint8*)&FBC$ + 272ll) );
		}
		label$1278:;
		label$1277:;
		int64 vr$5 = HASSEMBLEMODULE( (struct $9FBCIOFILE*)((uint8*)&FBC$ + 272ll) );
		if( vr$5 != 0ll ) goto label$1280;
		{
			FBCEND( 1ll );
		}
		label$1280:;
		label$1279:;
	}
	label$1276:;
	label$1275:;
	label$1274:;
}

static int64 HCOMPILEFBCTINF( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1281:;
	struct $9FBCIOFILE FBCTINF$1;
	_ZN9FBCIOFILEC1Ev( &FBCTINF$1 );
	FBSTRING OBJFILE$1;
	__builtin_memset( &OBJFILE$1, 0, 24ll );
	int64 FO$1;
	fb_StrAssign( (void*)&FBCTINF$1, -1ll, (void*)"__fb_ct.inf.bas", 16ll, 0 );
	fb_StrAssign( (void*)&OBJFILE$1, -1ll, (void*)"__fb_ct.inf", 12ll, 0 );
	*(FBSTRING**)((uint8*)&FBCTINF$1 + 24ll) = &OBJFILE$1;
	if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$1284;
	{
		FBSTRING* vr$6 = fb_StrAllocTempDescZEx( (char*)"creating: ", 10ll );
		fb_PrintString( 0, (FBSTRING*)vr$6, 2 );
		fb_PrintString( 0, (FBSTRING*)&FBCTINF$1, 1 );
	}
	label$1284:;
	label$1283:;
	int32 vr$8 = fb_FileFree(  );
	FO$1 = (int64)vr$8;
	int32 vr$12 = fb_FileOpen( (FBSTRING*)&FBCTINF$1, 3u, 0u, 0u, (int32)FO$1, 0 );
	if( (int64)vr$12 == 0ll ) goto label$1286;
	{
		fb_StrDelete( (FBSTRING*)&OBJFILE$1 );
		_ZN9FBCIOFILED1Ev( &FBCTINF$1 );
		goto label$1282;
	}
	label$1286:;
	label$1285:;
	int32 vr$17 = fb_FileClose( (int32)FO$1 );
	if( (int64)vr$17 == 0ll ) goto label$1287;
	void* vr$19 = fb_ErrorThrowAt( 3790, (char*)"src/compiler/fbc.bas", (void*)0ull, (void*)0ull );
	goto *vr$19;
	label$1287:;
	if( *(int64*)((uint8*)&FBC$ + 80ll) != 0ll ) goto label$1289;
	{
		FBCADDTEMP( (FBSTRING*)&FBCTINF$1 );
	}
	label$1289:;
	label$1288:;
	HCOMPILEBAS( &FBCTINF$1, 0ll, -1ll, -1ll );
	int64 vr$22 = FBGETOPTION( 2ll );
	if( vr$22 == 0ll ) goto label$1291;
	{
		HCOMPILESTAGE2MODULE( &FBCTINF$1 );
	}
	label$1291:;
	label$1290:;
	int64 vr$25 = HASSEMBLEMODULE( &FBCTINF$1 );
	fb$result$1 = vr$25;
	fb_StrDelete( (FBSTRING*)&OBJFILE$1 );
	_ZN9FBCIOFILED1Ev( &FBCTINF$1 );
	label$1282:;
	return fb$result$1;
}

static int64 HARCHIVEFILES( void )
{
	FBSTRING TMP$613$1;
	FBSTRING TMP$614$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1292:;
	HSETOUTNAME(  );
	FBSTRING* vr$2 = fb_StrAllocTempDescZ( (char*)((uint8*)&FBC$ + 968ll) );
	int32 vr$3 = fb_FileKill( (FBSTRING*)vr$2 );
	if( (int64)vr$3 == 0ll ) goto label$1295;
	{
	}
	label$1295:;
	label$1294:;
	FBSTRING LN$1;
	__builtin_memset( &TMP$613$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$613$1, (void*)"-rsc \x22", 7ll, (void*)((uint8*)&FBC$ + 968ll), 261ll );
	__builtin_memset( &TMP$614$1, 0, 24ll );
	FBSTRING* vr$11 = fb_StrConcat( &TMP$614$1, (void*)vr$8, -1ll, (void*)"\x22 ", 3ll );
	fb_StrInit( (void*)&LN$1, -1ll, (void*)vr$11, -1ll, 0 );
	int64 vr$13 = FBGETOPTION( 39ll );
	int64 vr$14 = FBISCROSSCOMP(  );
	if( (vr$13 & ~vr$14) == 0ll ) goto label$1297;
	{
		FBSTRING TMP$618$2;
		int64 vr$17 = HCOMPILEFBCTINF(  );
		if( vr$17 == 0ll ) goto label$1299;
		{
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22__fb_ct.inf\x22 ", 15ll, 0 );
		}
		label$1299:;
		label$1298:;
		__builtin_memset( &TMP$618$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$618$2, -1ll, (void*)"__fb_ct.inf", 12ll, 0 );
		FBCADDTEMP( &TMP$618$2 );
		fb_StrDelete( (FBSTRING*)&TMP$618$2 );
	}
	label$1297:;
	label$1296:;
	FBSTRING* OBJFILE$1;
	void* vr$24 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 400ll) );
	OBJFILE$1 = (FBSTRING*)vr$24;
	label$1300:;
	if( OBJFILE$1 == (FBSTRING*)0ull ) goto label$1301;
	{
		FBSTRING TMP$619$2;
		FBSTRING TMP$620$2;
		FBSTRING TMP$621$2;
		__builtin_memset( &TMP$619$2, 0, 24ll );
		FBSTRING* vr$27 = fb_StrConcat( &TMP$619$2, (void*)"\x22", 2ll, (void*)OBJFILE$1, -1ll );
		__builtin_memset( &TMP$620$2, 0, 24ll );
		FBSTRING* vr$30 = fb_StrConcat( &TMP$620$2, (void*)vr$27, -1ll, (void*)"\x22 ", 3ll );
		__builtin_memset( &TMP$621$2, 0, 24ll );
		FBSTRING* vr$34 = fb_StrConcat( &TMP$621$2, (void*)&LN$1, -1ll, (void*)vr$30, -1ll );
		fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$34, -1ll, 0 );
		void* vr$36 = LISTGETNEXT( (void*)OBJFILE$1 );
		OBJFILE$1 = (FBSTRING*)vr$36;
	}
	goto label$1300;
	label$1301:;
	$7FBCTOOL AR$1;
	AR$1 = 1ll;
	int64 vr$37 = FBGETOPTION( 3ll );
	if( vr$37 != 11ll ) goto label$1303;
	{
		AR$1 = 12ll;
	}
	label$1303:;
	label$1302:;
	int64 vr$39 = FBCRUNBIN( (char*)"archiving", AR$1, &LN$1 );
	fb$result$1 = vr$39;
	fb_StrDelete( (FBSTRING*)&LN$1 );
	label$1293:;
	return fb$result$1;
}

static void HSETDEFAULTLIBPATHS( void )
{
	FBSTRING TMP$623$1;
	FBSTRING TMP$624$1;
	label$1304:;
	__builtin_memset( &TMP$623$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$623$1, -1ll, (void*)((uint8*)&FBC$ + 3295ll), 261ll, 0 );
	FBCADDDEFLIBPATH( &TMP$623$1 );
	fb_StrDelete( (FBSTRING*)&TMP$623$1 );
	__builtin_memset( &TMP$624$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$624$1, -1ll, (void*)".", 2ll, 0 );
	FBCADDDEFLIBPATH( &TMP$624$1 );
	fb_StrDelete( (FBSTRING*)&TMP$624$1 );
	int64 vr$9 = FBGETOPTION( 3ll );
	if( vr$9 == 11ll ) goto label$1307;
	{
		FBCADDLIBPATHFOR( (char*)"libgcc.a" );
		{
			int64 TMP$626$3;
			int64 vr$10 = FBGETOPTION( 3ll );
			TMP$626$3 = vr$10;
			if( TMP$626$3 != 5ll ) goto label$1309;
			label$1310:;
			{
				FBCADDLIBPATHFOR( (char*)"libc++.so" );
			}
			goto label$1308;
			label$1309:;
			if( TMP$626$3 != 3ll ) goto label$1311;
			label$1312:;
			{
				FBCADDLIBPATHFOR( (char*)"libstdcx.a" );
			}
			goto label$1308;
			label$1311:;
			{
				FBCADDLIBPATHFOR( (char*)"libstdc++.so" );
			}
			label$1313:;
			label$1308:;
		}
	}
	label$1307:;
	label$1306:;
	{
		int64 TMP$630$2;
		int64 vr$11 = FBGETOPTION( 3ll );
		TMP$630$2 = vr$11;
		if( TMP$630$2 != 3ll ) goto label$1315;
		label$1316:;
		{
			FBCADDLIBPATHFOR( (char*)"libm.a" );
		}
		goto label$1314;
		label$1315:;
		if( TMP$630$2 != 0ll ) goto label$1317;
		label$1318:;
		{
			FBCADDLIBPATHFOR( (char*)"libmingw32.a" );
		}
		label$1317:;
		label$1314:;
	}
	label$1305:;
}

static void FBCADDDEFLIB( char* LIBNAME$1 )
{
	FBSTRING TMP$633$1;
	label$1319:;
	__builtin_memset( &TMP$633$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$633$1, -1ll, (void*)LIBNAME$1, 0ll, 0 );
	STRSETADD( (struct $7TSTRSET*)((uint8*)&FBC$ + 792ll), &TMP$633$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$633$1 );
	label$1320:;
}

static FBSTRING* HGETFBLIBNAMESUFFIX( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$1321:;
	FBSTRING S$1;
	__builtin_memset( &S$1, 0, 24ll );
	int64 vr$2 = FBGETOPTION( 35ll );
	if( vr$2 == 0ll ) goto label$1324;
	{
		fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"mt", 3ll, 0 );
	}
	label$1324:;
	label$1323:;
	int64 vr$4 = FBGETOPTION( 37ll );
	if( vr$4 == 0ll ) goto label$1326;
	{
		fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"pic", 4ll, 0 );
	}
	label$1326:;
	label$1325:;
	fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&S$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&S$1 );
	label$1322:;
	FBSTRING* vr$10 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$10;
}

static void HADDDEFAULTLIBS( void )
{
	label$1327:;
	int64 vr$0 = FBGETOPTION( 32ll );
	if( vr$0 == 0ll ) goto label$1330;
	{
		FBSTRING TMP$634$2;
		FBSTRING TMP$635$2;
		__builtin_memset( &TMP$635$2, 0, 24ll );
		FBSTRING* vr$2 = HGETFBLIBNAMESUFFIX(  );
		__builtin_memset( &TMP$634$2, 0, 24ll );
		FBSTRING* vr$5 = fb_StrConcat( &TMP$634$2, (void*)"fbrt", 5ll, (void*)vr$2, -1ll );
		fb_StrAssign( (void*)&TMP$635$2, -1ll, (void*)vr$5, -1ll, 0 );
		FBCADDDEFLIB( (char*)*(char**)&TMP$635$2 );
		fb_StrDelete( (FBSTRING*)&TMP$635$2 );
	}
	goto label$1329;
	label$1330:;
	{
		FBSTRING TMP$636$2;
		FBSTRING TMP$637$2;
		__builtin_memset( &TMP$637$2, 0, 24ll );
		FBSTRING* vr$9 = HGETFBLIBNAMESUFFIX(  );
		__builtin_memset( &TMP$636$2, 0, 24ll );
		FBSTRING* vr$12 = fb_StrConcat( &TMP$636$2, (void*)"fb", 3ll, (void*)vr$9, -1ll );
		fb_StrAssign( (void*)&TMP$637$2, -1ll, (void*)vr$12, -1ll, 0 );
		FBCADDDEFLIB( (char*)*(char**)&TMP$637$2 );
		fb_StrDelete( (FBSTRING*)&TMP$637$2 );
	}
	label$1329:;
	int64 vr$15 = FBGETOPTION( 36ll );
	if( vr$15 == 0ll ) goto label$1332;
	{
		FBSTRING TMP$638$2;
		FBSTRING TMP$639$2;
		__builtin_memset( &TMP$639$2, 0, 24ll );
		FBSTRING* vr$17 = HGETFBLIBNAMESUFFIX(  );
		__builtin_memset( &TMP$638$2, 0, 24ll );
		FBSTRING* vr$20 = fb_StrConcat( &TMP$638$2, (void*)"fbgfx", 6ll, (void*)vr$17, -1ll );
		fb_StrAssign( (void*)&TMP$639$2, -1ll, (void*)vr$20, -1ll, 0 );
		FBCADDDEFLIB( (char*)*(char**)&TMP$639$2 );
		fb_StrDelete( (FBSTRING*)&TMP$639$2 );
		{
			uint64 TMP$640$3;
			int64 vr$23 = FBGETOPTION( 3ll );
			TMP$640$3 = (uint64)vr$23;
			goto label$1334;
			label$1335:;
			{
				FBCADDDEFLIB( (char*)"gdi32" );
				FBCADDDEFLIB( (char*)"winmm" );
			}
			goto label$1333;
			label$1336:;
			{
				FBSTRING TMP$644$4;
				__builtin_memset( &TMP$644$4, 0, 24ll );
				fb_StrAssign( (void*)&TMP$644$4, -1ll, (void*)"/usr/X11R6/lib", 15ll, 0 );
				FBCADDDEFLIBPATH( &TMP$644$4 );
				fb_StrDelete( (FBSTRING*)&TMP$644$4 );
				FBCADDDEFLIB( (char*)"X11" );
				FBCADDDEFLIB( (char*)"Xext" );
				FBCADDDEFLIB( (char*)"Xpm" );
				FBCADDDEFLIB( (char*)"Xrandr" );
				FBCADDDEFLIB( (char*)"Xrender" );
			}
			goto label$1333;
			label$1334:;
			static const void* tmp$808[11ll] = {
				&&label$1335,
				&&label$1335,
				&&label$1336,
				&&label$1333,
				&&label$1333,
				&&label$1336,
				&&label$1336,
				&&label$1336,
				&&label$1336,
				&&label$1336,
				&&label$1336,
			};
			if( TMP$640$3 > 10ull ) goto label$1333;
			goto *tmp$808[TMP$640$3 - 0ull];
			label$1333:;
		}
	}
	label$1332:;
	label$1331:;
	{
		uint64 TMP$650$2;
		int64 vr$28 = FBGETOPTION( 3ll );
		TMP$650$2 = (uint64)vr$28;
		goto label$1338;
		label$1339:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"cygwin" );
			FBCADDDEFLIB( (char*)"kernel32" );
			FBCADDDEFLIB( (char*)"user32" );
			int64 vr$29 = FBGETOPTION( 23ll );
			if( vr$29 == 0ll ) goto label$1341;
			{
				FBCADDDEFLIB( (char*)"gmon" );
			}
			label$1341:;
			label$1340:;
		}
		goto label$1337;
		label$1342:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"System" );
			FBCADDDEFLIB( (char*)"pthread" );
			FBCADDDEFLIB( (char*)"ncurses" );
		}
		goto label$1337;
		label$1343:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"c" );
			FBCADDDEFLIB( (char*)"m" );
			int64 vr$30 = FBGETOPTION( 35ll );
			if( vr$30 == 0ll ) goto label$1345;
			{
				FBCADDDEFLIB( (char*)"pthread" );
				FBCADDDEFLIB( (char*)"socket" );
			}
			label$1345:;
			label$1344:;
		}
		goto label$1337;
		label$1346:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"pthread" );
			FBCADDDEFLIB( (char*)"c" );
			FBCADDDEFLIB( (char*)"m" );
			FBCADDDEFLIB( (char*)"ncurses" );
		}
		goto label$1337;
		label$1347:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"pthread" );
			FBCADDDEFLIB( (char*)"c" );
			FBCADDDEFLIB( (char*)"m" );
			FBCADDDEFLIB( (char*)"ncurses" );
		}
		goto label$1337;
		label$1348:;
		{
			FBSTRING* vr$31 = FBCFINDLIBFILE( (char*)"libtinfo.a" );
			int64 vr$32 = fb_StrLen( (void*)vr$31, -1ll );
			FBSTRING* vr$34 = FBCFINDLIBFILE( (char*)"libtinfo.so" );
			int64 vr$35 = fb_StrLen( (void*)vr$34, -1ll );
			if( ((int64)-(vr$32 > 0ll) | (int64)-(vr$35 > 0ll)) == 0ll ) goto label$1350;
			{
				FBCADDDEFLIB( (char*)"tinfo" );
			}
			goto label$1349;
			label$1350:;
			{
				FBCADDDEFLIB( (char*)"ncurses" );
			}
			label$1349:;
			FBCADDDEFLIB( (char*)"m" );
			FBCADDDEFLIB( (char*)"dl" );
			FBCADDDEFLIB( (char*)"pthread" );
			FBCADDDEFLIB( (char*)"gcc" );
			FBSTRING* vr$38 = FBCFINDLIBFILE( (char*)"libgcc_eh.a" );
			int64 vr$39 = fb_StrLen( (void*)vr$38, -1ll );
			FBSTRING* vr$41 = FBCFINDLIBFILE( (char*)"libgcc_eh.so" );
			int64 vr$42 = fb_StrLen( (void*)vr$41, -1ll );
			if( ((int64)-(vr$39 > 0ll) | (int64)-(vr$42 > 0ll)) == 0ll ) goto label$1352;
			{
				FBCADDDEFLIB( (char*)"gcc_eh" );
			}
			label$1352:;
			label$1351:;
			FBCADDDEFLIB( (char*)"c" );
		}
		goto label$1337;
		label$1353:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"pthread" );
			FBCADDDEFLIB( (char*)"c" );
			FBCADDDEFLIB( (char*)"m" );
			FBCADDDEFLIB( (char*)"ncurses" );
		}
		goto label$1337;
		label$1354:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"pthread" );
			FBCADDDEFLIB( (char*)"c" );
			FBCADDDEFLIB( (char*)"m" );
			FBCADDDEFLIB( (char*)"ncurses" );
		}
		goto label$1337;
		label$1355:;
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
			if( ((int64)-(vr$46 > 0ll) | (int64)-(vr$49 > 0ll)) == 0ll ) goto label$1357;
			{
				FBCADDDEFLIB( (char*)"gcc_eh" );
			}
			label$1357:;
			label$1356:;
			int64 vr$52 = FBGETOPTION( 23ll );
			if( vr$52 == 0ll ) goto label$1359;
			{
				FBCADDDEFLIB( (char*)"gmon" );
			}
			label$1359:;
			label$1358:;
		}
		goto label$1337;
		label$1360:;
		{
			FBCADDDEFLIB( (char*)"gcc" );
			FBCADDDEFLIB( (char*)"fbgfx" );
			FBCADDDEFLIB( (char*)"openxdk" );
			FBCADDDEFLIB( (char*)"hal" );
			FBCADDDEFLIB( (char*)"c" );
			FBCADDDEFLIB( (char*)"usb" );
			FBCADDDEFLIB( (char*)"xboxkrnl" );
			FBCADDDEFLIB( (char*)"m" );
			int64 vr$53 = FBGETOPTION( 23ll );
			if( vr$53 == 0ll ) goto label$1362;
			{
				FBCADDDEFLIB( (char*)"gmon" );
			}
			label$1362:;
			label$1361:;
		}
		goto label$1337;
		label$1338:;
		static const void* tmp$809[11ll] = {
			&&label$1355,
			&&label$1339,
			&&label$1348,
			&&label$1343,
			&&label$1360,
			&&label$1346,
			&&label$1347,
			&&label$1347,
			&&label$1354,
			&&label$1342,
			&&label$1353,
		};
		if( TMP$650$2 > 10ull ) goto label$1337;
		goto *tmp$809[TMP$650$2 - 0ull];
		label$1337:;
	}
	label$1328:;
}

static void HEXCLUDELIBSFROMLINK( void )
{
	label$1363:;
	struct $11TSTRSETITEM* I$1;
	void* vr$1 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 704ll) );
	I$1 = (struct $11TSTRSETITEM*)vr$1;
	label$1365:;
	if( I$1 == (struct $11TSTRSETITEM*)0ull ) goto label$1366;
	{
		STRSETDEL( (struct $7TSTRSET*)((uint8*)&FBC$ + 792ll), (FBSTRING*)I$1 );
		void* vr$5 = LISTGETNEXT( (void*)I$1 );
		I$1 = (struct $11TSTRSETITEM*)vr$5;
	}
	goto label$1365;
	label$1366:;
	label$1364:;
}

static void HPRINTOPTIONS( int64 VERBOSE$1 )
{
	label$1367:;
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
	if( VERBOSE$1 == 0ll ) goto label$1370;
	{
		FBSTRING* vr$11 = fb_StrAllocTempDescZEx( (char*)"  -buildprefix <name>  specify prefix on tool names (as, ar, ld)", 64ll );
		fb_PrintString( 0, (FBSTRING*)vr$11, 1 );
	}
	label$1370:;
	label$1369:;
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
	if( VERBOSE$1 == 0ll ) goto label$1372;
	{
		FBSTRING* vr$18 = fb_StrAllocTempDescZEx( (char*)"  -earray          Enable array bounds checking", 47ll );
		fb_PrintString( 0, (FBSTRING*)vr$18, 1 );
		FBSTRING* vr$19 = fb_StrAllocTempDescZEx( (char*)"  -eassert         Enable assert() and assertwarn() checking", 60ll );
		fb_PrintString( 0, (FBSTRING*)vr$19, 1 );
		FBSTRING* vr$20 = fb_StrAllocTempDescZEx( (char*)"  -edebug          Enable __FB_DEBUG__", 38ll );
		fb_PrintString( 0, (FBSTRING*)vr$20, 1 );
		FBSTRING* vr$21 = fb_StrAllocTempDescZEx( (char*)"  -edebuginfo      Add debug info", 33ll );
		fb_PrintString( 0, (FBSTRING*)vr$21, 1 );
		FBSTRING* vr$22 = fb_StrAllocTempDescZEx( (char*)"  -elocation       Enable error location reporting", 50ll );
		fb_PrintString( 0, (FBSTRING*)vr$22, 1 );
		FBSTRING* vr$23 = fb_StrAllocTempDescZEx( (char*)"  -enullptr        Enable null-pointer checking", 47ll );
		fb_PrintString( 0, (FBSTRING*)vr$23, 1 );
		FBSTRING* vr$24 = fb_StrAllocTempDescZEx( (char*)"  -eunwind         Enable call stack unwind information", 55ll );
		fb_PrintString( 0, (FBSTRING*)vr$24, 1 );
		FBSTRING* vr$25 = fb_StrAllocTempDescZEx( (char*)"  -entry           Change the entry point of the program from main()", 68ll );
		fb_PrintString( 0, (FBSTRING*)vr$25, 1 );
	}
	label$1372:;
	label$1371:;
	FBSTRING* vr$26 = fb_StrAllocTempDescZEx( (char*)"  -ex              -e plus RESUME support", 41ll );
	fb_PrintString( 0, (FBSTRING*)vr$26, 1 );
	FBSTRING* vr$27 = fb_StrAllocTempDescZEx( (char*)"  -exx             -ex plus array bounds/null-pointer checking", 62ll );
	fb_PrintString( 0, (FBSTRING*)vr$27, 1 );
	FBSTRING* vr$28 = fb_StrAllocTempDescZEx( (char*)"  -export          Export symbols for dynamic linkage", 53ll );
	fb_PrintString( 0, (FBSTRING*)vr$28, 1 );
	if( VERBOSE$1 == 0ll ) goto label$1374;
	{
		FBSTRING* vr$29 = fb_StrAllocTempDescZEx( (char*)"  -fbgfx           Link to the appropriate libfbgfx variant (normally automatic)", 80ll );
		fb_PrintString( 0, (FBSTRING*)vr$29, 1 );
	}
	label$1374:;
	label$1373:;
	FBSTRING* vr$30 = fb_StrAllocTempDescZEx( (char*)"  -forcelang <name>  Override #lang statements in source code", 61ll );
	fb_PrintString( 0, (FBSTRING*)vr$30, 1 );
	if( VERBOSE$1 == 0ll ) goto label$1376;
	{
		FBSTRING* vr$31 = fb_StrAllocTempDescZEx( (char*)"  -fpmode fast|precise  Select floating-point math accuracy/speed", 65ll );
		fb_PrintString( 0, (FBSTRING*)vr$31, 1 );
		FBSTRING* vr$32 = fb_StrAllocTempDescZEx( (char*)"  -fpu x87|sse     Set target FPU", 33ll );
		fb_PrintString( 0, (FBSTRING*)vr$32, 1 );
	}
	label$1376:;
	label$1375:;
	FBSTRING* vr$33 = fb_StrAllocTempDescZEx( (char*)"  -g               Add debug info, enable __FB_DEBUG__, and enable assert()", 75ll );
	fb_PrintString( 0, (FBSTRING*)vr$33, 1 );
	if( VERBOSE$1 == 0ll ) goto label$1378;
	{
		FBSTRING* vr$34 = fb_StrAllocTempDescZEx( (char*)"  -gen gas         Select GNU gas 32-bit assembler backend", 58ll );
		fb_PrintString( 0, (FBSTRING*)vr$34, 1 );
		FBSTRING* vr$35 = fb_StrAllocTempDescZEx( (char*)"  -gen gas64       Select GNU gas 64-bit assembler backend", 58ll );
		fb_PrintString( 0, (FBSTRING*)vr$35, 1 );
		FBSTRING* vr$36 = fb_StrAllocTempDescZEx( (char*)"  -gen gcc         Select GNU gcc C backend", 43ll );
		fb_PrintString( 0, (FBSTRING*)vr$36, 1 );
		FBSTRING* vr$37 = fb_StrAllocTempDescZEx( (char*)"  -gen llvm        Select LLVM backend", 38ll );
		fb_PrintString( 0, (FBSTRING*)vr$37, 1 );
	}
	goto label$1377;
	label$1378:;
	{
		FBSTRING* vr$38 = fb_StrAllocTempDescZEx( (char*)"  -gen gas|gas64|gcc|llvm  Select code generation backend", 57ll );
		fb_PrintString( 0, (FBSTRING*)vr$38, 1 );
	}
	label$1377:;
	FBSTRING* vr$39 = fb_StrAllocTempDescZEx( (char*)"  [-]-help         Show this help output; use '-help -v' to show verbose help", 77ll );
	fb_PrintString( 0, (FBSTRING*)vr$39, 1 );
	FBSTRING* vr$40 = fb_StrAllocTempDescZEx( (char*)"  -i <path>        Add an include file search path", 50ll );
	fb_PrintString( 0, (FBSTRING*)vr$40, 1 );
	FBSTRING* vr$41 = fb_StrAllocTempDescZEx( (char*)"  -include <file>  Pre-#include a file for each input .bas", 58ll );
	fb_PrintString( 0, (FBSTRING*)vr$41, 1 );
	FBSTRING* vr$42 = fb_StrAllocTempDescZEx( (char*)"  -l <name>        Link in a library", 36ll );
	fb_PrintString( 0, (FBSTRING*)vr$42, 1 );
	FBSTRING* vr$43 = fb_StrAllocTempDescZEx( (char*)"  -lang <name>     Select FB dialect: fb, deprecated, fblite, qb", 64ll );
	fb_PrintString( 0, (FBSTRING*)vr$43, 1 );
	FBSTRING* vr$44 = fb_StrAllocTempDescZEx( (char*)"  -lib             Create a static library", 42ll );
	fb_PrintString( 0, (FBSTRING*)vr$44, 1 );
	FBSTRING* vr$45 = fb_StrAllocTempDescZEx( (char*)"  -m <name>        Specify main module (default if not -c: first input .bas)", 76ll );
	fb_PrintString( 0, (FBSTRING*)vr$45, 1 );
	FBSTRING* vr$46 = fb_StrAllocTempDescZEx( (char*)"  -map <file>      Save linking map to file", 43ll );
	fb_PrintString( 0, (FBSTRING*)vr$46, 1 );
	FBSTRING* vr$47 = fb_StrAllocTempDescZEx( (char*)"  -maxerr <n>      Only show <n> errors", 39ll );
	fb_PrintString( 0, (FBSTRING*)vr$47, 1 );
	FBSTRING* vr$48 = fb_StrAllocTempDescZEx( (char*)"  -mt              Use thread-safe FB runtime", 45ll );
	fb_PrintString( 0, (FBSTRING*)vr$48, 1 );
	FBSTRING* vr$49 = fb_StrAllocTempDescZEx( (char*)"  -nodeflibs       Do not include the default libraries when linking", 68ll );
	fb_PrintString( 0, (FBSTRING*)vr$49, 1 );
	FBSTRING* vr$50 = fb_StrAllocTempDescZEx( (char*)"  -noerrline       Do not show source context in error messages", 63ll );
	fb_PrintString( 0, (FBSTRING*)vr$50, 1 );
	FBSTRING* vr$51 = fb_StrAllocTempDescZEx( (char*)"  -nolib <a,b,c>   Do not include the specified libraries when linking", 70ll );
	fb_PrintString( 0, (FBSTRING*)vr$51, 1 );
	FBSTRING* vr$52 = fb_StrAllocTempDescZEx( (char*)"  -noobjinfo       Do not read/write compile-time info from/to .o and .a files", 78ll );
	fb_PrintString( 0, (FBSTRING*)vr$52, 1 );
	FBSTRING* vr$53 = fb_StrAllocTempDescZEx( (char*)"  -nostrip         Do not strip symbol information from the output file", 71ll );
	fb_PrintString( 0, (FBSTRING*)vr$53, 1 );
	FBSTRING* vr$54 = fb_StrAllocTempDescZEx( (char*)"  -o <file>        Set .o (or -pp .bas) file name for prev/next input file", 74ll );
	fb_PrintString( 0, (FBSTRING*)vr$54, 1 );
	FBSTRING* vr$55 = fb_StrAllocTempDescZEx( (char*)"  -O <value>       Optimization level (default: 0)", 50ll );
	fb_PrintString( 0, (FBSTRING*)vr$55, 1 );
	FBSTRING* vr$56 = fb_StrAllocTempDescZEx( (char*)"  -p <path>        Add a library search path", 44ll );
	fb_PrintString( 0, (FBSTRING*)vr$56, 1 );
	FBSTRING* vr$57 = fb_StrAllocTempDescZEx( (char*)"  -pic             Generate position-independent code (non-x86 Unix shared libs)", 80ll );
	fb_PrintString( 0, (FBSTRING*)vr$57, 1 );
	FBSTRING* vr$58 = fb_StrAllocTempDescZEx( (char*)"  -pp              Write out preprocessed input file (.pp.bas) only", 67ll );
	fb_PrintString( 0, (FBSTRING*)vr$58, 1 );
	FBSTRING* vr$59 = fb_StrAllocTempDescZEx( (char*)"  -prefix <path>   Set the compiler prefix path", 47ll );
	fb_PrintString( 0, (FBSTRING*)vr$59, 1 );
	FBSTRING* vr$60 = fb_StrAllocTempDescZEx( (char*)"  -print host|target  Display host/target system name", 53ll );
	fb_PrintString( 0, (FBSTRING*)vr$60, 1 );
	FBSTRING* vr$61 = fb_StrAllocTempDescZEx( (char*)"  -print fblibdir  Display the compiler's lib/ path", 51ll );
	fb_PrintString( 0, (FBSTRING*)vr$61, 1 );
	FBSTRING* vr$62 = fb_StrAllocTempDescZEx( (char*)"  -print x         Display output binary/library file name (if known)", 69ll );
	fb_PrintString( 0, (FBSTRING*)vr$62, 1 );
	if( VERBOSE$1 == 0ll ) goto label$1380;
	{
		FBSTRING* vr$63 = fb_StrAllocTempDescZEx( (char*)"  -print sha-1     Display compiler's source code commit sha-1 (if known)", 73ll );
		fb_PrintString( 0, (FBSTRING*)vr$63, 1 );
	}
	label$1380:;
	label$1379:;
	FBSTRING* vr$64 = fb_StrAllocTempDescZEx( (char*)"  -profile         Enable function profiling", 44ll );
	fb_PrintString( 0, (FBSTRING*)vr$64, 1 );
	FBSTRING* vr$65 = fb_StrAllocTempDescZEx( (char*)"  -r               Write out .asm/.c/.ll (-gen gas/gcc/llvm) only", 65ll );
	fb_PrintString( 0, (FBSTRING*)vr$65, 1 );
	FBSTRING* vr$66 = fb_StrAllocTempDescZEx( (char*)"  -rr              Write out the final .asm only", 48ll );
	fb_PrintString( 0, (FBSTRING*)vr$66, 1 );
	FBSTRING* vr$67 = fb_StrAllocTempDescZEx( (char*)"  -R               Preserve temporary .asm/.c/.ll/.def files", 60ll );
	fb_PrintString( 0, (FBSTRING*)vr$67, 1 );
	FBSTRING* vr$68 = fb_StrAllocTempDescZEx( (char*)"  -RR              Preserve the final .asm file", 47ll );
	fb_PrintString( 0, (FBSTRING*)vr$68, 1 );
	FBSTRING* vr$69 = fb_StrAllocTempDescZEx( (char*)"  -s console|gui   Select win32 subsystem", 41ll );
	fb_PrintString( 0, (FBSTRING*)vr$69, 1 );
	FBSTRING* vr$70 = fb_StrAllocTempDescZEx( (char*)"  -showincludes    Display a tree of file names of #included files", 66ll );
	fb_PrintString( 0, (FBSTRING*)vr$70, 1 );
	FBSTRING* vr$71 = fb_StrAllocTempDescZEx( (char*)"  -static          Prefer static libraries over dynamic ones when linking", 73ll );
	fb_PrintString( 0, (FBSTRING*)vr$71, 1 );
	FBSTRING* vr$72 = fb_StrAllocTempDescZEx( (char*)"  -strip           Omit all symbol information from the output file", 67ll );
	fb_PrintString( 0, (FBSTRING*)vr$72, 1 );
	FBSTRING* vr$73 = fb_StrAllocTempDescZEx( (char*)"  -t <value>       Set .exe stack size in kbytes, default: 1024 (win32/dos)", 75ll );
	fb_PrintString( 0, (FBSTRING*)vr$73, 1 );
	if( VERBOSE$1 == 0ll ) goto label$1382;
	{
		FBSTRING* vr$74 = fb_StrAllocTempDescZEx( (char*)"  -target <name>   Set cross-compilation target", 47ll );
		fb_PrintString( 0, (FBSTRING*)vr$74, 1 );
	}
	goto label$1381;
	label$1382:;
	{
		FBSTRING* vr$75 = fb_StrAllocTempDescZEx( (char*)"  -target <name>   Set cross-compilation target", 47ll );
		fb_PrintString( 0, (FBSTRING*)vr$75, 1 );
	}
	label$1381:;
	FBSTRING* vr$76 = fb_StrAllocTempDescZEx( (char*)"  -title <name>    Set XBE display title (xbox)", 47ll );
	fb_PrintString( 0, (FBSTRING*)vr$76, 1 );
	FBSTRING* vr$77 = fb_StrAllocTempDescZEx( (char*)"  -v               Be verbose", 29ll );
	fb_PrintString( 0, (FBSTRING*)vr$77, 1 );
	FBSTRING* vr$78 = fb_StrAllocTempDescZEx( (char*)"  -vec <n>         Automatic vectorization level (default: 0)", 61ll );
	fb_PrintString( 0, (FBSTRING*)vr$78, 1 );
	FBSTRING* vr$79 = fb_StrAllocTempDescZEx( (char*)"  [-]-version      Show compiler version", 40ll );
	fb_PrintString( 0, (FBSTRING*)vr$79, 1 );
	FBSTRING* vr$80 = fb_StrAllocTempDescZEx( (char*)"  -w all|pedantic|<n>  Set min warning level: all, pedantic or a value", 70ll );
	fb_PrintString( 0, (FBSTRING*)vr$80, 1 );
	if( VERBOSE$1 == 0ll ) goto label$1384;
	{
		FBSTRING* vr$81 = fb_StrAllocTempDescZEx( (char*)"  -w all           Enable all warnings", 38ll );
		fb_PrintString( 0, (FBSTRING*)vr$81, 1 );
		FBSTRING* vr$82 = fb_StrAllocTempDescZEx( (char*)"  -w none          Disable all warnings", 39ll );
		fb_PrintString( 0, (FBSTRING*)vr$82, 1 );
		FBSTRING* vr$83 = fb_StrAllocTempDescZEx( (char*)"  -w param         Enable parameter warnings", 44ll );
		fb_PrintString( 0, (FBSTRING*)vr$83, 1 );
		FBSTRING* vr$84 = fb_StrAllocTempDescZEx( (char*)"  -w escape        Enable string escape sequence warnings", 57ll );
		fb_PrintString( 0, (FBSTRING*)vr$84, 1 );
		FBSTRING* vr$85 = fb_StrAllocTempDescZEx( (char*)"  -w next          Enable next statement warnings", 49ll );
		fb_PrintString( 0, (FBSTRING*)vr$85, 1 );
		FBSTRING* vr$86 = fb_StrAllocTempDescZEx( (char*)"  -w signedness    Enable type signedness warnings", 50ll );
		fb_PrintString( 0, (FBSTRING*)vr$86, 1 );
		FBSTRING* vr$87 = fb_StrAllocTempDescZEx( (char*)"  -w constness     Enable const type warnings", 45ll );
		fb_PrintString( 0, (FBSTRING*)vr$87, 1 );
		FBSTRING* vr$88 = fb_StrAllocTempDescZEx( (char*)"  -w suffix        Enable invalid suffix warnings", 49ll );
		fb_PrintString( 0, (FBSTRING*)vr$88, 1 );
		FBSTRING* vr$89 = fb_StrAllocTempDescZEx( (char*)"  -w error         Report warnings as errors", 44ll );
		fb_PrintString( 0, (FBSTRING*)vr$89, 1 );
		FBSTRING* vr$90 = fb_StrAllocTempDescZEx( (char*)"  -w upcast        Enable warning when up-casting discards initializers", 71ll );
		fb_PrintString( 0, (FBSTRING*)vr$90, 1 );
	}
	label$1384:;
	label$1383:;
	FBSTRING* vr$91 = fb_StrAllocTempDescZEx( (char*)"  -Wa <a,b,c>      Pass options to 'as'", 39ll );
	fb_PrintString( 0, (FBSTRING*)vr$91, 1 );
	FBSTRING* vr$92 = fb_StrAllocTempDescZEx( (char*)"  -Wc <a,b,c>      Pass options to 'gcc' (-gen gcc) or 'llc' (-gen llvm)", 72ll );
	fb_PrintString( 0, (FBSTRING*)vr$92, 1 );
	FBSTRING* vr$93 = fb_StrAllocTempDescZEx( (char*)"  -Wl <a,b,c>      Pass options to 'ld'", 39ll );
	fb_PrintString( 0, (FBSTRING*)vr$93, 1 );
	FBSTRING* vr$94 = fb_StrAllocTempDescZEx( (char*)"  -x <file>        Set output executable/library file name", 58ll );
	fb_PrintString( 0, (FBSTRING*)vr$94, 1 );
	if( VERBOSE$1 == 0ll ) goto label$1386;
	{
		FBSTRING* vr$95 = fb_StrAllocTempDescZEx( (char*)"  -z gosub-setjmp  Use setjmp/longjmp to implement GOSUB", 56ll );
		fb_PrintString( 0, (FBSTRING*)vr$95, 1 );
		FBSTRING* vr$96 = fb_StrAllocTempDescZEx( (char*)"  -z valist-as-ptr Use pointer expressions to implement CVA_*() macros", 70ll );
		fb_PrintString( 0, (FBSTRING*)vr$96, 1 );
		FBSTRING* vr$97 = fb_StrAllocTempDescZEx( (char*)"  -z no-thiscall   Don't use '__thiscall' calling convention", 60ll );
		fb_PrintString( 0, (FBSTRING*)vr$97, 1 );
		FBSTRING* vr$98 = fb_StrAllocTempDescZEx( (char*)"  -z no-fastcall   Don't use '__fastcall' calling convention", 60ll );
		fb_PrintString( 0, (FBSTRING*)vr$98, 1 );
		FBSTRING* vr$99 = fb_StrAllocTempDescZEx( (char*)"  -z fbrt          Link with 'fbrt' instead of 'fb' runtime library", 67ll );
		fb_PrintString( 0, (FBSTRING*)vr$99, 1 );
		FBSTRING* vr$100 = fb_StrAllocTempDescZEx( (char*)"  -z nocmdline     Disable #cmdline source directives", 53ll );
		fb_PrintString( 0, (FBSTRING*)vr$100, 1 );
		FBSTRING* vr$101 = fb_StrAllocTempDescZEx( (char*)"  -z retinflts     Enable returning some types in floating point registers", 74ll );
		fb_PrintString( 0, (FBSTRING*)vr$101, 1 );
	}
	label$1386:;
	label$1385:;
	label$1368:;
}

static void HPRINTVERSION( int64 VERBOSE$1 )
{
	FBSTRING TMP$783$1;
	FBSTRING TMP$784$1;
	FBSTRING TMP$785$1;
	FBSTRING TMP$786$1;
	label$1391:;
	FBSTRING CONFIG$1;
	__builtin_memset( &CONFIG$1, 0, 24ll );
	int64 vr$1 = FBGETHOSTBITS(  );
	FBSTRING* vr$2 = fb_LongintToStr( vr$1 );
	FBSTRING* vr$3 = FBGETHOSTID(  );
	__builtin_memset( &TMP$783$1, 0, 24ll );
	FBSTRING* vr$6 = fb_StrConcat( &TMP$783$1, (void*)"FreeBASIC Compiler - Version 1.10.2 (2023-12-28), built for ", 61ll, (void*)vr$3, -1ll );
	__builtin_memset( &TMP$784$1, 0, 24ll );
	FBSTRING* vr$9 = fb_StrConcat( &TMP$784$1, (void*)vr$6, -1ll, (void*)" (", 3ll );
	__builtin_memset( &TMP$785$1, 0, 24ll );
	FBSTRING* vr$12 = fb_StrConcat( &TMP$785$1, (void*)vr$9, -1ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$786$1, 0, 24ll );
	FBSTRING* vr$15 = fb_StrConcat( &TMP$786$1, (void*)vr$12, -1ll, (void*)"bit)", 5ll );
	fb_PrintString( 0, (FBSTRING*)vr$15, 1 );
	FBSTRING* vr$16 = fb_StrAllocTempDescZEx( (char*)"Copyright (C) 2004-2023 The FreeBASIC development team.", 55ll );
	fb_PrintString( 0, (FBSTRING*)vr$16, 1 );
	int64 vr$18 = fb_StrLen( (void*)&CONFIG$1, -1ll );
	if( vr$18 <= 0ll ) goto label$1394;
	{
		fb_PrintString( 0, (FBSTRING*)&CONFIG$1, 1 );
	}
	label$1394:;
	label$1393:;
	if( VERBOSE$1 == 0ll ) goto label$1396;
	{
		FBCPRINTTARGETINFO(  );
		goto label$1398;
		{
			FBSTRING* vr$20 = fb_StrAllocTempDescZEx( (char*)"source sha-1: ", 14ll );
			fb_PrintString( 0, (FBSTRING*)vr$20, 1 );
		}
		label$1398:;
		label$1397:;
	}
	label$1396:;
	label$1395:;
	fb_StrDelete( (FBSTRING*)&CONFIG$1 );
	label$1392:;
}

__attribute__(( constructor )) static void _GLOBAL__I( void )
{
	label$1454:;
	_ZN6FBCCTXC1Ev( &FBC$ );
	label$1455:;
}

__attribute__(( destructor )) static void _GLOBAL__D( void )
{
	label$1457:;
	_ZN6FBCCTXD1Ev( &FBC$ );
	label$1458:;
}
