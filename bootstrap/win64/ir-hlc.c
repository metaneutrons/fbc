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
struct $8HASHITEM;
struct $8HASHITEM {
	char* NAME;
	void* DATA;
	struct $8HASHITEM* PREV;
	struct $8HASHITEM* NEXT;
};
#define __FB_STATIC_ASSERT( expr ) extern int __$fb_structsizecheck[(expr) ? 1 : -1]
__FB_STATIC_ASSERT( sizeof( struct $8HASHITEM ) == 32 );
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
	struct $8HASHITEM* HASHITEM;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 40 );
struct $12SECTIONENTRY {
	FBSTRING TEXT;
	int64 OLD;
	int64 INDENT;
};
__FB_STATIC_ASSERT( sizeof( struct $12SECTIONENTRY ) == 40 );
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
struct $8IRHLCCTX {
	struct $12SECTIONENTRY SECTIONS[129];
	int64 SECTION;
	int64 SECTIONGOSUBLEVEL;
	int64 LINENUM;
	FBSTRING ESCAPEDINPUTFILENAME;
	uint64 USEDBUILTINS;
	struct $5TLIST ANONSTACK;
	FBSTRING VARINI;
	int64 VARINISCOPELEVEL;
	FBSTRING FBCTINF;
	FBSTRING EXPORTS;
	struct $5TLIST EXPRNODES;
	FBSTRING EXPRTEXT;
	struct $5TLIST EXPRCACHE;
	int64 GLOBALVARPASS;
};
__FB_STATIC_ASSERT( sizeof( struct $8IRHLCCTX ) == 5520 );
typedef int64 $6IR_OPT;
typedef int64 $12FB_SYMBCLASS;
typedef int64 $13FB_SYMBATTRIB;
typedef int64 $13FB_PROCATTRIB;
typedef int64 $12FB_SYMBSTATS;
struct $9FB_SYMBID {
	char* NAME;
	char* ALIAS;
	char* MANGLED;
};
__FB_STATIC_ASSERT( sizeof( struct $9FB_SYMBID ) == 24 );
typedef int64 $11FB_DATATYPE;
struct $8FBSYMBOL;
typedef int64 $13AST_NODECLASS;
union $7FBVALUE {
	struct $8FBSYMBOL* S;
	int64 I;
	double F;
};
__FB_STATIC_ASSERT( sizeof( union $7FBVALUE ) == 8 );
struct $12AST_NODE_VAR {
	int64 OFS;
};
__FB_STATIC_ASSERT( sizeof( struct $12AST_NODE_VAR ) == 8 );
struct $12AST_NODE_IDX {
	int64 OFS;
	int64 MULT;
};
__FB_STATIC_ASSERT( sizeof( struct $12AST_NODE_IDX ) == 16 );
struct $12AST_NODE_PTR {
	int64 OFS;
};
__FB_STATIC_ASSERT( sizeof( struct $12AST_NODE_PTR ) == 8 );
struct $7ASTNODE;
struct $19AST_TMPSTRLIST_ITEM;
struct $19AST_TMPSTRLIST_ITEM {
	struct $8FBSYMBOL* SYM;
	struct $7ASTNODE* SRCTREE;
	struct $19AST_TMPSTRLIST_ITEM* PREV;
};
__FB_STATIC_ASSERT( sizeof( struct $19AST_TMPSTRLIST_ITEM ) == 24 );
struct $13AST_NODE_CALL {
	int64 ISRTL;
	int64 ARGS;
	struct $8FBSYMBOL* CURRARG;
	struct $7ASTNODE* ARGTAIL;
	struct $19AST_TMPSTRLIST_ITEM* STRTAIL;
	struct $8FBSYMBOL* TMPRES;
};
__FB_STATIC_ASSERT( sizeof( struct $13AST_NODE_CALL ) == 48 );
struct $12AST_NODE_ARG {
	int64 MODE;
	int64 LGT;
};
__FB_STATIC_ASSERT( sizeof( struct $12AST_NODE_ARG ) == 16 );
struct $12AST_NODE_IIF {
	struct $8FBSYMBOL* FALSELABEL;
};
__FB_STATIC_ASSERT( sizeof( struct $12AST_NODE_IIF ) == 8 );
typedef int64 $9AST_OPOPT;
struct $11AST_NODE_OP {
	int64 OP;
	$9AST_OPOPT OPTIONS;
	struct $8FBSYMBOL* EX;
};
__FB_STATIC_ASSERT( sizeof( struct $11AST_NODE_OP ) == 24 );
struct $13AST_NODE_LOAD {
	int64 ISRES;
};
__FB_STATIC_ASSERT( sizeof( struct $13AST_NODE_LOAD ) == 8 );
struct $14AST_NODE_LABEL {
	int64 FLUSH;
};
__FB_STATIC_ASSERT( sizeof( struct $14AST_NODE_LABEL ) == 8 );
struct $13AST_NODE_OFFS {
	int64 OFS;
};
__FB_STATIC_ASSERT( sizeof( struct $13AST_NODE_OFFS ) == 8 );
struct $12AST_NODE_LIT {
	char* TEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $12AST_NODE_LIT ) == 8 );
typedef int64 $14AST_ASMTOKTYPE;
struct $9ASTASMTOK;
struct $9ASTASMTOK {
	$14AST_ASMTOKTYPE TYPE;
	union {
		struct $8FBSYMBOL* SYM;
		char* TEXT;
	};
	struct $9ASTASMTOK* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $9ASTASMTOK ) == 24 );
struct $12AST_NODE_ASM {
	struct $9ASTASMTOK* TOKHEAD;
};
__FB_STATIC_ASSERT( sizeof( struct $12AST_NODE_ASM ) == 8 );
struct $14AST_NODE_JMPTB {
	uint64* VALUES;
	struct $8FBSYMBOL** LABELS;
	int64 LABELCOUNT;
	struct $8FBSYMBOL* DEFLABEL;
	uint64 BIAS;
	uint64 SPAN;
};
__FB_STATIC_ASSERT( sizeof( struct $14AST_NODE_JMPTB ) == 48 );
struct $12AST_NODE_DBG {
	int64 EX;
	char* FILENAME;
	int64 OP;
};
__FB_STATIC_ASSERT( sizeof( struct $12AST_NODE_DBG ) == 24 );
struct $12AST_NODE_MEM {
	int64 BYTES;
	int64 OP;
};
__FB_STATIC_ASSERT( sizeof( struct $12AST_NODE_MEM ) == 16 );
struct $14AST_NODE_STACK {
	int64 OP;
};
__FB_STATIC_ASSERT( sizeof( struct $14AST_NODE_STACK ) == 8 );
struct $16AST_NODE_TYPEINI {
	int64 OFS;
	union {
		int64 BYTES;
		int64 ELEMENTS;
	};
	struct $8FBSYMBOL* SCP;
	struct $8FBSYMBOL* LASTSCP;
};
__FB_STATIC_ASSERT( sizeof( struct $16AST_NODE_TYPEINI ) == 32 );
struct $21AST_NODE_TYPEINISCOPE {
	int64 IS_ARRAY;
};
__FB_STATIC_ASSERT( sizeof( struct $21AST_NODE_TYPEINISCOPE ) == 8 );
struct $13AST_BREAKLIST {
	struct $7ASTNODE* HEAD;
	struct $7ASTNODE* TAIL;
};
__FB_STATIC_ASSERT( sizeof( struct $13AST_BREAKLIST ) == 16 );
struct $13AST_NODE_PROC {
	int64 ISMAIN;
	struct $7ASTNODE* DECL_LAST;
};
__FB_STATIC_ASSERT( sizeof( struct $13AST_NODE_PROC ) == 16 );
struct $14AST_NODE_BLOCK {
	struct $7ASTNODE* PARENT;
	int64 INISTMT;
	int64 ENDSTMT;
	struct $8FBSYMBOL* INITLABEL;
	struct $8FBSYMBOL* EXITLABEL;
	struct $13AST_BREAKLIST BREAKLIST;
	struct $13AST_NODE_PROC PROC;
};
__FB_STATIC_ASSERT( sizeof( struct $14AST_NODE_BLOCK ) == 72 );
struct $14AST_NODE_BREAK {
	struct $7ASTNODE* PARENT;
	int64 SCOPE;
	int64 LINENUM;
	int64 STMTNUM;
};
__FB_STATIC_ASSERT( sizeof( struct $14AST_NODE_BREAK ) == 32 );
struct $17AST_NODE_DATASTMT {
	union {
		int64 ID;
		int64 ELMTS;
	};
};
__FB_STATIC_ASSERT( sizeof( struct $17AST_NODE_DATASTMT ) == 8 );
struct $13AST_NODE_LINK {
	int64 RET;
};
__FB_STATIC_ASSERT( sizeof( struct $13AST_NODE_LINK ) == 8 );
struct $13AST_NODE_CAST {
	int64 DOCONV;
	int64 DO_CONVFD2FS;
	int64 CONVCONST;
};
__FB_STATIC_ASSERT( sizeof( struct $13AST_NODE_CAST ) == 24 );
struct $7ASTNODE {
	$13AST_NODECLASS CLASS;
	int64 DTYPE;
	struct $8FBSYMBOL* SUBTYPE;
	struct $8FBSYMBOL* SYM;
	int64 VECTOR;
	union {
		union $7FBVALUE VAL;
		struct $12AST_NODE_VAR VAR_;
		struct $12AST_NODE_IDX IDX;
		struct $12AST_NODE_PTR PTR;
		struct $13AST_NODE_CALL CALL;
		struct $12AST_NODE_ARG ARG;
		struct $12AST_NODE_IIF IIF;
		struct $11AST_NODE_OP OP;
		struct $13AST_NODE_LOAD LOD;
		struct $14AST_NODE_LABEL LBL;
		struct $13AST_NODE_OFFS OFS;
		struct $12AST_NODE_LIT LIT;
		struct $12AST_NODE_ASM ASM;
		struct $14AST_NODE_JMPTB JMPTB;
		struct $12AST_NODE_DBG DBG;
		struct $12AST_NODE_MEM MEM;
		struct $14AST_NODE_STACK STACK;
		struct $16AST_NODE_TYPEINI TYPEINI;
		struct $21AST_NODE_TYPEINISCOPE TYPEINISCOPE;
		struct $14AST_NODE_BLOCK BLOCK;
		struct $14AST_NODE_BREAK BREAK;
		struct $17AST_NODE_DATASTMT DATA;
		struct $13AST_NODE_LINK LINK;
		struct $13AST_NODE_CAST CAST;
	};
	struct $7ASTNODE* L;
	struct $7ASTNODE* R;
	struct $7ASTNODE* PREV;
	struct $7ASTNODE* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $7ASTNODE ) == 144 );
struct $10FBARRAYDIM {
	int64 LOWER;
	int64 UPPER;
};
__FB_STATIC_ASSERT( sizeof( struct $10FBARRAYDIM ) == 16 );
struct $9FBS_ARRAY {
	int64 DIMENSIONS;
	struct $10FBARRAYDIM* DIMTB;
	int64 DIFF;
	int64 ELEMENTS;
	struct $8FBSYMBOL* DESC;
	struct $8FBSYMBOL* DESCTYPE;
};
__FB_STATIC_ASSERT( sizeof( struct $9FBS_ARRAY ) == 48 );
struct $10FBVAR_DESC {
	struct $8FBSYMBOL* ARRAY;
};
__FB_STATIC_ASSERT( sizeof( struct $10FBVAR_DESC ) == 8 );
struct $10FBVAR_DATA {
	struct $8FBSYMBOL* PREV;
};
__FB_STATIC_ASSERT( sizeof( struct $10FBVAR_DATA ) == 8 );
struct $7FBS_VAR {
	union {
		char* LITTEXT;
		uint16* LITTEXTW;
		struct $7ASTNODE* INITREE;
	};
	struct $9FBS_ARRAY ARRAY;
	struct $10FBVAR_DESC DESC;
	int64 STMTNUM;
	int64 ALIGN;
	struct $10FBVAR_DATA DATA;
	int64 BITPOS;
	int64 BITS;
};
__FB_STATIC_ASSERT( sizeof( struct $7FBS_VAR ) == 104 );
struct $10FBSYMBOLTB {
	struct $8FBSYMBOL* OWNER;
	struct $8FBSYMBOL* HEAD;
	struct $8FBSYMBOL* TAIL;
};
__FB_STATIC_ASSERT( sizeof( struct $10FBSYMBOLTB ) == 24 );
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
struct $8FBHASHTB;
struct $8FBHASHTB {
	struct $8FBSYMBOL* OWNER;
	struct $5THASH TB;
	struct $8FBHASHTB* PREV;
	struct $8FBHASHTB* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $8FBHASHTB ) == 48 );
struct $9FBSYMLIST {
	struct $8FBSYMBOL* HEAD;
	struct $8FBSYMBOL* TAIL;
};
__FB_STATIC_ASSERT( sizeof( struct $9FBSYMLIST ) == 16 );
struct $10FBSYMCHAIN;
struct $10FBSYMCHAIN {
	struct $8FBSYMBOL* SYM;
	struct $10FBSYMCHAIN* NEXT;
	int64 ISIMPORT;
	struct $10FBSYMCHAIN* PREV;
	struct $8HASHITEM* ITEM;
	struct $10FBSYMCHAIN* IMP_NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $10FBSYMCHAIN ) == 48 );
struct $13FBNAMESPC_EXT {
	struct $9FBSYMLIST IMPLIST;
	struct $9FBSYMLIST EXPLIST;
	int64 CNT;
	struct $10FBSYMCHAIN* IMPSYM_HEAD;
	struct $10FBSYMCHAIN* IMPSYM_TAIL;
};
__FB_STATIC_ASSERT( sizeof( struct $13FBNAMESPC_EXT ) == 56 );
struct $9FBNAMESPC {
	struct $10FBSYMBOLTB SYMTB;
	struct $8FBHASHTB HASHTB;
	struct $13FBNAMESPC_EXT* EXT;
};
__FB_STATIC_ASSERT( sizeof( struct $9FBNAMESPC ) == 80 );
typedef int64 $15FB_STRUCT_INREG;
struct $13FB_STRUCT_DBG {
	int64 TYPENUM;
};
__FB_STATIC_ASSERT( sizeof( struct $13FB_STRUCT_DBG ) == 8 );
struct $12FB_STRUCTEXT {
	struct $8FBSYMBOL* CTORHEAD;
	struct $8FBSYMBOL* DEFCTOR;
	struct $8FBSYMBOL* COPYCTOR;
	struct $8FBSYMBOL* COPYCTORCONST;
	struct $8FBSYMBOL* DTOR1;
	struct $8FBSYMBOL* DTOR0;
	struct $8FBSYMBOL* COPYLETOP;
	struct $8FBSYMBOL* COPYLETOPCONST;
	struct $8FBSYMBOL* OPOVLTB[28];
	int64 VTABLEELEMENTS;
	struct $8FBSYMBOL* VTABLE;
	struct $8FBSYMBOL* RTTI;
	int64 ABSTRACTCOUNT;
};
__FB_STATIC_ASSERT( sizeof( struct $12FB_STRUCTEXT ) == 320 );
struct $10FBS_STRUCT {
	struct $9FBNAMESPC NS;
	struct $8FBSYMBOL* BASE;
	struct $8FBSYMBOL* ANONPARENT;
	int64 NATALIGN;
	int64 UNPADLGT;
	int32 OPTIONS;
	uint8 BITPOS;
	uint8 ALIGN;
	$11FB_DATATYPE RETDTYPE;
	$15FB_STRUCT_INREG RETIN2REGS;
	struct $13FB_STRUCT_DBG DBG;
	struct $12FB_STRUCTEXT* EXT;
};
__FB_STATIC_ASSERT( sizeof( struct $10FBS_STRUCT ) == 152 );
struct $8FBS_ENUM {
	struct $9FBNAMESPC NS;
	int64 ELEMENTS;
	struct $13FB_STRUCT_DBG DBG;
};
__FB_STATIC_ASSERT( sizeof( struct $8FBS_ENUM ) == 96 );
typedef int64 $11FB_FUNCMODE;
typedef int64 $21FB_PROC_RETURN_METHOD;
typedef int64 (*tmp$35)( struct $8FBSYMBOL* );
struct $10FB_PROCRTL {
	tmp$35 CALLBACK;
};
__FB_STATIC_ASSERT( sizeof( struct $10FB_PROCRTL ) == 8 );
struct $10FB_PROCOVL {
	int16 MINPARAMS;
	int16 MAXPARAMS;
	struct $8FBSYMBOL* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $10FB_PROCOVL ) == 16 );
struct $10FB_PROCSTK {
	int64 ARGOFS;
	int64 LOCALOFS;
	int64 LOCALMAX;
};
__FB_STATIC_ASSERT( sizeof( struct $10FB_PROCSTK ) == 24 );
struct $10FB_PROCDBG {
	int64 INILINE;
	int64 ENDLINE;
	char* INCFILE;
};
__FB_STATIC_ASSERT( sizeof( struct $10FB_PROCDBG ) == 24 );
struct $10FB_PROCERR {
	struct $8FBSYMBOL* LASTHND;
	struct $8FBSYMBOL* LASTMOD;
	struct $8FBSYMBOL* LASTFUN;
};
__FB_STATIC_ASSERT( sizeof( struct $10FB_PROCERR ) == 24 );
typedef int64 $6AST_OP;
struct $12FB_PROCOPOVL {
	$6AST_OP OP;
};
__FB_STATIC_ASSERT( sizeof( struct $12FB_PROCOPOVL ) == 8 );
typedef int64 $12FB_PROCSTATS;
struct $10FB_PROCGSB {
	struct $8FBSYMBOL* CTX;
};
__FB_STATIC_ASSERT( sizeof( struct $10FB_PROCGSB ) == 8 );
struct $10FB_PROCEXT {
	struct $8FBSYMBOL* RES;
	struct $10FB_PROCSTK STK;
	struct $10FB_PROCDBG DBG;
	struct $10FB_PROCERR ERR;
	struct $12FB_PROCOPOVL OPOVL;
	struct $5TLIST* STATDTOR;
	$12FB_PROCSTATS STATS;
	int64 STMTNUM;
	int64 PRIORITY;
	struct $10FB_PROCGSB GOSUB;
	struct $7ASTNODE* BASE_INITREE;
	int64 VTABLEINDEX;
	struct $8FBSYMBOL* OVERRIDDEN;
};
__FB_STATIC_ASSERT( sizeof( struct $10FB_PROCEXT ) == 152 );
struct $8FBS_PROC {
	struct $10FBSYMBOLTB SYMTB;
	int16 PARAMS;
	int16 OPTPARAMS;
	struct $10FBSYMBOLTB PARAMTB;
	$11FB_FUNCMODE MODE;
	$11FB_DATATYPE REALDTYPE;
	struct $8FBSYMBOL* REALSUBTYPE;
	$21FB_PROC_RETURN_METHOD RETURNMETHOD;
	struct $10FB_PROCRTL RTL;
	struct $10FB_PROCOVL OVL;
	struct $10FB_PROCEXT* EXT;
};
__FB_STATIC_ASSERT( sizeof( struct $8FBS_PROC ) == 120 );
typedef int64 $12FB_PARAMMODE;
struct $9FBS_PARAM {
	$12FB_PARAMMODE MODE;
	struct $8FBSYMBOL* VAR;
	struct $7ASTNODE* OPTEXPR;
	int64 BYDESCDIMENSIONS;
	struct $8FBSYMBOL* BYDESCREALSUBTYPE;
	int64 REGNUM;
};
__FB_STATIC_ASSERT( sizeof( struct $9FBS_PARAM ) == 48 );
struct $9FBS_LABEL {
	struct $8FBSYMBOL* PARENT;
	int64 DECLARED;
	int64 STMTNUM;
	boolean GOSUB;
};
__FB_STATIC_ASSERT( sizeof( struct $9FBS_LABEL ) == 32 );
struct $11FB_DEFPARAM;
struct $11FB_DEFPARAM {
	char* NAME;
	int64 NUM;
	struct $11FB_DEFPARAM* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $11FB_DEFPARAM ) == 24 );
typedef int64 $14FB_DEFTOK_TYPE;
struct $9FB_DEFTOK;
struct $9FB_DEFTOK {
	$14FB_DEFTOK_TYPE TYPE;
	union {
		char* TEXT;
		uint16* TEXTW;
		int64 PARAMNUM;
	};
	struct $9FB_DEFTOK* PREV;
	struct $9FB_DEFTOK* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $9FB_DEFTOK ) == 32 );
typedef int64 $15FB_DEFINE_FLAGS;
typedef FBSTRING* (*tmp$29)( void );
struct $8DZSTRING {
	char* DATA;
	int64 LEN;
	int64 SIZE;
};
__FB_STATIC_ASSERT( sizeof( struct $8DZSTRING ) == 24 );
struct $8DWSTRING {
	uint16* DATA;
	int64 LEN;
	int64 SIZE;
};
__FB_STATIC_ASSERT( sizeof( struct $8DWSTRING ) == 24 );
struct $9LEXPP_ARG {
	union {
		struct $8DZSTRING TEXT;
		struct $8DWSTRING TEXTW;
	};
};
__FB_STATIC_ASSERT( sizeof( struct $9LEXPP_ARG ) == 24 );
struct $11LEXPP_ARGTB {
	struct $9LEXPP_ARG TB[32];
	int64 COUNT;
};
__FB_STATIC_ASSERT( sizeof( struct $11LEXPP_ARGTB ) == 776 );
typedef FBSTRING* (*tmp$30)( struct $11LEXPP_ARGTB*, int64* );
typedef uint16* (*tmp$31)( struct $11LEXPP_ARGTB*, int64* );
struct $10FBS_DEFINE {
	int64 PARAMS;
	struct $11FB_DEFPARAM* PARAMHEAD;
	union {
		struct $9FB_DEFTOK* TOKHEAD;
		char* TEXT;
		uint16* TEXTW;
	};
	int64 ISARGLESS;
	$15FB_DEFINE_FLAGS FLAGS;
	union {
		tmp$29 DPROCZ;
		tmp$30 MPROCZ;
	};
	union {
		tmp$31 MPROCW;
	};
};
__FB_STATIC_ASSERT( sizeof( struct $10FBS_DEFINE ) == 56 );
typedef int64 $10FB_TKCLASS;
struct $11FBS_KEYWORD {
	int64 ID;
	$10FB_TKCLASS TKCLASS;
};
__FB_STATIC_ASSERT( sizeof( struct $11FBS_KEYWORD ) == 16 );
struct $8FBFWDREF;
struct $8FBFWDREF {
	struct $8FBSYMBOL* REF;
	struct $8FBFWDREF* PREV;
};
__FB_STATIC_ASSERT( sizeof( struct $8FBFWDREF ) == 16 );
struct $10FBS_FWDREF {
	struct $8FBFWDREF* TAIL;
};
__FB_STATIC_ASSERT( sizeof( struct $10FBS_FWDREF ) == 8 );
struct $11FB_SCOPEDBG {
	int64 INILINE;
	int64 ENDLINE;
	struct $8FBSYMBOL* INILABEL;
	struct $8FBSYMBOL* ENDLABEL;
};
__FB_STATIC_ASSERT( sizeof( struct $11FB_SCOPEDBG ) == 32 );
struct $12FB_SCOPEEMIT {
	int64 BASEOFS;
};
__FB_STATIC_ASSERT( sizeof( struct $12FB_SCOPEEMIT ) == 8 );
struct $9FBS_SCOPE {
	struct $7ASTNODE* BACKNODE;
	struct $10FBSYMBOLTB SYMTB;
	struct $11FB_SCOPEDBG DBG;
	struct $12FB_SCOPEEMIT EMIT;
};
__FB_STATIC_ASSERT( sizeof( struct $9FBS_SCOPE ) == 72 );
struct $13FBS_NAMESPACE {
	struct $9FBNAMESPC NS;
	int64 CNT;
	struct $8FBSYMBOL* LAST_TAIL;
};
__FB_STATIC_ASSERT( sizeof( struct $13FBS_NAMESPACE ) == 96 );
struct $12FBS_NSIMPORT {
	struct $8FBSYMBOL* IMP_NS;
	struct $8FBSYMBOL* IMP_PREV;
	struct $8FBSYMBOL* IMP_NEXT;
	struct $8FBSYMBOL* EXP_NS;
	struct $8FBSYMBOL* EXP_PREV;
	struct $8FBSYMBOL* EXP_NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $12FBS_NSIMPORT ) == 48 );
struct $9FBSYMHASH {
	struct $8FBHASHTB* TB;
	struct $8HASHITEM* ITEM;
	uint64 INDEX;
	struct $8FBSYMBOL* PREV;
	struct $8FBSYMBOL* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $9FBSYMHASH ) == 40 );
struct $8FBSYMBOL {
	$12FB_SYMBCLASS CLASS;
	$13FB_SYMBATTRIB ATTRIB;
	$13FB_PROCATTRIB PATTRIB;
	$12FB_SYMBSTATS STATS;
	struct $9FB_SYMBID ID;
	$11FB_DATATYPE TYP;
	struct $8FBSYMBOL* SUBTYPE;
	uint16 SCOPE;
	int16 MANGLING;
	int64 LGT;
	int64 OFS;
	union {
		struct $7FBS_VAR VAR_;
		union $7FBVALUE VAL;
		struct $10FBS_STRUCT UDT;
		struct $8FBS_ENUM ENUM_;
		struct $8FBS_PROC PROC;
		struct $9FBS_PARAM PARAM;
		struct $9FBS_LABEL LBL;
		struct $10FBS_DEFINE DEF;
		struct $11FBS_KEYWORD KEY;
		struct $10FBS_FWDREF FWD;
		struct $9FBS_SCOPE SCP;
		struct $13FBS_NAMESPACE NSPC;
		struct $12FBS_NSIMPORT NSIMP;
	};
	struct $9FBSYMHASH HASH;
	struct $10FBSYMBOLTB* SYMTB;
	struct $8FBSYMBOL* PARENT;
	struct $8FBSYMBOL* PREV;
	struct $8FBSYMBOL* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $8FBSYMBOL ) == 320 );
typedef int64 $13FB_COMPTARGET;
typedef int64 $16EMITPROC_OPTIONS;
typedef int64 $19FB_CVA_LIST_TYPEDEF;
typedef int64 $12FB_DATACLASS;
struct $13SYMB_DATATYPE {
	$12FB_DATACLASS CLASS;
	int64 SIZE;
	int64 SIGNED;
	int64 INTRANK;
	$11FB_DATATYPE REMAPTYPE;
	int64 SIZETYPE;
	char* NAME;
};
__FB_STATIC_ASSERT( sizeof( struct $13SYMB_DATATYPE ) == 56 );
typedef void (*tmp$43)( struct $8FBSYMBOL* );
typedef int64 $14IR_OPTIONVALUE;
struct $7FBTOKEN;
struct $7FBTOKEN {
	int64 ID;
	int64 CLASS;
	int64 DTYPE;
	union {
		char TEXT[1025];
		uint16 TEXTW[1025];
	};
	int64 LEN;
	struct $10FBSYMCHAIN* SYM_CHAIN;
	union {
		int64 PRDPOS;
		int64 HASESC;
	};
	int64 SUFFIXCHAR;
	int64 AFTER_SPACE;
	struct $7FBTOKEN* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $7FBTOKEN ) == 2128 );
typedef int64 $17LEX_TKCTX_CONTEXT;
struct $9LEX_TKCTX {
	struct $7FBTOKEN TOKENTB[4];
	int64 K;
	struct $7FBTOKEN* HEAD;
	struct $7FBTOKEN* TAIL;
	uint64 CURRCHAR;
	uint64 LAHDCHAR1;
	uint64 LAHDCHAR2;
	int64 LINENUM;
	int64 LASTTK_ID;
	int64 RECLEVEL;
	struct $8FBSYMBOL* CURRMACRO;
	struct $8FBSYMBOL* KWDNS;
	$17LEX_TKCTX_CONTEXT KIND;
	int64 DEFLEN;
	union {
		struct {
			char* DEFPTR;
			struct $8DZSTRING DEFTEXT;
		};
		struct {
			uint16* DEFPTRW;
			struct $8DWSTRING DEFTEXTW;
		};
	};
	int64 BUFFLEN;
	union {
		struct {
			char* BUFFPTR;
			char BUFF[8193];
		};
		struct {
			uint16* BUFFPTRW;
			uint16 BUFFW[8193];
		};
	};
	int64 FILEPOS;
	int64 LASTFILEPOS;
	int64 PHYSFILEPOS;
	struct $8DZSTRING CURRLINE;
	int64 AFTER_SPACE;
};
__FB_STATIC_ASSERT( sizeof( struct $9LEX_TKCTX ) == 25112 );
typedef int64 $15IRVREGTYPE_ENUM;
typedef int64 $12IR_REGFAMILY;
struct $6IRVREG;
struct $9IRTACVREG;
struct $9IRTACVREG {
	struct $6IRVREG* VREG;
	struct $6IRVREG* PARENT;
	struct $9IRTACVREG* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $9IRTACVREG ) == 24 );
struct $13IRTACVREG_GRP {
	struct $9IRTACVREG REG;
	struct $9IRTACVREG IDX;
	struct $9IRTACVREG AUX;
};
__FB_STATIC_ASSERT( sizeof( struct $13IRTACVREG_GRP ) == 72 );
struct $5IRTAC {
	int64 POS;
	$6AST_OP OP;
	struct $13IRTACVREG_GRP VR;
	struct $13IRTACVREG_GRP V1;
	struct $13IRTACVREG_GRP V2;
	struct $8FBSYMBOL* EX1;
	int64 EX2;
	char* EX3;
};
__FB_STATIC_ASSERT( sizeof( struct $5IRTAC ) == 256 );
struct $6IRVREG {
	$15IRVREGTYPE_ENUM TYP;
	$11FB_DATATYPE DTYPE;
	struct $8FBSYMBOL* SUBTYPE;
	int64 REG;
	$12IR_REGFAMILY REGFAMILY;
	int64 VECTOR;
	union $7FBVALUE VALUE;
	struct $8FBSYMBOL* SYM;
	int64 OFS;
	int64 MULT;
	struct $6IRVREG* VIDX;
	struct $6IRVREG* VAUX;
	struct $9IRTACVREG* TACVHEAD;
	struct $9IRTACVREG* TACVTAIL;
	struct $5IRTAC* TACLAST;
};
__FB_STATIC_ASSERT( sizeof( struct $6IRVREG ) == 120 );
struct $8EXPRNODE;
struct $8EXPRNODE {
	int64 CLASS;
	int64 DTYPE;
	struct $8FBSYMBOL* SUBTYPE;
	struct $8EXPRNODE* L;
	struct $8EXPRNODE* R;
	union {
		char* TEXT;
		union $7FBVALUE VAL;
		struct $8FBSYMBOL* SYM;
		int64 OP;
	};
};
__FB_STATIC_ASSERT( sizeof( struct $8EXPRNODE ) == 48 );
typedef int64 $11AST_OPFLAGS;
struct $10AST_OPINFO {
	$13AST_NODECLASS CLASS;
	$11AST_OPFLAGS FLAGS;
	char* ID;
	$6AST_OP SELFOP;
};
__FB_STATIC_ASSERT( sizeof( struct $10AST_OPINFO ) == 32 );
struct $13EXPRCACHENODE {
	int64 VREGID;
	struct $8EXPRNODE* EXPR;
};
__FB_STATIC_ASSERT( sizeof( struct $13EXPRCACHENODE ) == 16 );
struct $9IRCALLARG {
	struct $8FBSYMBOL* PARAM;
	struct $6IRVREG* VR;
	int64 LEVEL;
};
__FB_STATIC_ASSERT( sizeof( struct $9IRCALLARG ) == 24 );
int32 fb_FileOpen( FBSTRING*, uint32, uint32, uint32, int32, int32 );
int32 fb_FileClose( int32 );
int32 fb_FilePutStrLarge( int32, int64, void*, int64 );
int32 fb_FileFree( void );
int32 fb_FileKill( FBSTRING* );
void free( void* );
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
FBSTRING* fb_UIntToStr( uint32 );
FBSTRING* fb_LongintToStr( int64 );
FBSTRING* fb_ULongintToStr( uint64 );
FBSTRING* fb_StrFill2( int64, FBSTRING* );
int64 fb_StrLen( void*, int64 );
FBSTRING* fb_CHR( int32, ... );
FBSTRING* fb_TRIM( FBSTRING* );
FBSTRING* fb_HEXEx_l( uint64, int32 );
FBSTRING* fb_LEFT( FBSTRING*, int64 );
void fb_LEFTSELF( FBSTRING*, int64 );
FBSTRING* fb_RIGHT( FBSTRING*, int64 );
static void fb_ctor__irzhlc( void ) __attribute__(( constructor ));
void LISTINIT( struct $5TLIST*, int64, int64, $10LIST_FLAGS );
void LISTEND( struct $5TLIST* );
void* LISTNEWNODE( struct $5TLIST* );
void LISTDELNODE( struct $5TLIST*, void* );
void* LISTGETHEAD( struct $5TLIST* );
void* LISTGETTAIL( struct $5TLIST* );
void* LISTGETPREV( void* );
void* LISTGETNEXT( void* );
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
typedef int64 $12FB_ERRMSGOPT;
void ERRREPORTEX( int64, char*, int64, $12FB_ERRMSGOPT, char* );
int64 FBGETOPTION( int64 );
int64 FBIS64BIT( void );
int64 FBGETCPUFAMILY( void );
int64 TYPECALCNATURALALIGN( int64, struct $8FBSYMBOL* );
void _Z21SYMBGETREALPARAMDTYPEP8FBSYMBOLRu7INTEGERRS0_( struct $8FBSYMBOL*, int64*, struct $8FBSYMBOL** );
int64 SYMBPROCRETURNSONSTACK( struct $8FBSYMBOL* );
int64 SYMBPROCCALCSTDCALLSUFFIXN( struct $8FBSYMBOL* );
void SYMBGETREALTYPE( struct $8FBSYMBOL*, int64*, struct $8FBSYMBOL** );
int64 SYMBHASDTOR( struct $8FBSYMBOL* );
int64 SYMBISDATADESC( struct $8FBSYMBOL* );
$19FB_CVA_LIST_TYPEDEF SYMBGETVALISTTYPE( int64, struct $8FBSYMBOL* );
int64 TYPETOUNSIGNED( int64 );
char* SYMBUNIQUEID( boolean );
char* SYMBGETMANGLEDNAME( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBUDTGETFIRSTFIELD( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBUDTGETNEXTFIELD( struct $8FBSYMBOL* );
void SYMBFOREACHGLOBAL( int64, tmp$43 );
int64 HFILEEXISTS( char* );
FBSTRING* HFLOATTOHEX_C99( double );
char* ZSTRDUP( char* );
char* HUNESCAPE( char*, int64* );
uint16* HUNESCAPEW( uint16*, int64* );
FBSTRING* HREPLACE( char*, char*, char* );
int64 HCHARNEEDSESCAPING( int64, int64 );
int64 HISVALIDHEXDIGIT( int64 );
void IRHLINIT( void );
void IRHLEND( void );
void IRHLEMITPROCBEGIN( void );
void IRHLEMITPROCEND( void );
void IRHLEMITPUSHARG( struct $8FBSYMBOL*, struct $6IRVREG*, int64, int64, struct $6IRVREG* );
struct $6IRVREG* IRHLALLOCVREG( int64, struct $8FBSYMBOL* );
struct $6IRVREG* IRHLALLOCVRIMM( int64, struct $8FBSYMBOL*, int64 );
struct $6IRVREG* IRHLALLOCVRIMMF( int64, struct $8FBSYMBOL*, double );
struct $6IRVREG* IRHLALLOCVRVAR( int64, struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
struct $6IRVREG* IRHLALLOCVRIDX( int64, struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64, int64, struct $6IRVREG* );
struct $6IRVREG* IRHLALLOCVRPTR( int64, struct $8FBSYMBOL*, int64, struct $6IRVREG* );
struct $6IRVREG* IRHLALLOCVROFS( int64, struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
void IRFOREACHDATASTMT( tmp$43 );
void IRHLFLUSHSTATICINITIALIZER( struct $8FBSYMBOL* );
static void _ZN12SECTIONENTRYC1Ev( struct $12SECTIONENTRY* );
static void _ZN12SECTIONENTRYaSERKS_( struct $12SECTIONENTRY*, struct $12SECTIONENTRY* );
static void _ZN12SECTIONENTRYD1Ev( struct $12SECTIONENTRY* );
static void _ZN8IRHLCCTXC1Ev( struct $8IRHLCCTX* );
static void _ZN8IRHLCCTXaSERKS_( struct $8IRHLCCTX*, struct $8IRHLCCTX* );
static void _ZN8IRHLCCTXD1Ev( struct $8IRHLCCTX* );
static FBSTRING* HEMITTYPE( int64, struct $8FBSYMBOL* );
static void HEMITSTRUCT( struct $8FBSYMBOL*, int64 );
static void _EMITDBG( int64, struct $8FBSYMBOL*, int64, char* );
static void EXPRFREENODE( struct $8EXPRNODE* );
static void _INIT( void );
static void _END( void );
static void SECTIONBEGIN( void );
static void SECTIONWRITELINE( FBSTRING* );
static void SECTIONINDENT( void );
static void SECTIONUNINDENT( void );
static int64 SECTIONINSIDEPROC( void );
static void SECTIONEND( void );
static int64 SECTIONGOSUB( int64 );
static void SECTIONRETURN( int64 );
static void HWRITELINE( FBSTRING*, int64 );
static void HUPDATECURRENTFILENAME( char* );
static void HWRITESTATICASSERT( FBSTRING* );
static void HAPPENDCTORATTRIB( FBSTRING*, struct $8FBSYMBOL*, int64 );
static FBSTRING* HGETMANGLEDNAMEFORASM( struct $8FBSYMBOL*, int64 );
static int64 HNEEDALIAS( struct $8FBSYMBOL* );
static FBSTRING* HEMITPROCHEADER( struct $8FBSYMBOL*, $16EMITPROC_OPTIONS );
static FBSTRING* HGETUDTTAG( struct $8FBSYMBOL* );
static FBSTRING* HGETUDTID( struct $8FBSYMBOL* );
static FBSTRING* HGETUDTNAME( struct $8FBSYMBOL* );
static void HEMITUDT( struct $8FBSYMBOL*, int64 );
static FBSTRING* HEMITARRAYDECL( struct $8FBSYMBOL* );
static void HEMITVARDECL( int64, struct $8FBSYMBOL*, char* );
static void HMAYBEEMITLOCALVAR( struct $8FBSYMBOL* );
static void HALLOCGLOBALVAR( struct $8FBSYMBOL* );
static void HMAYBEEMITGLOBALVAR( struct $8FBSYMBOL* );
static void HMAYBEEMITGLOBALVAREXCEPTDATASTMT( struct $8FBSYMBOL* );
static void HMAYBEEMITPROCPROTO( struct $8FBSYMBOL* );
static void HEMITFIELDTYPES( struct $8FBSYMBOL* );
static struct $8FBSYMBOL** HFINDPARENTANONALREADYONSTACK( struct $8FBSYMBOL* );
static void HPUSHANONPARENTS( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static void HPOPANONPARENTS( struct $8FBSYMBOL** );
static void HEMITSTRUCTWITHFIELDS( struct $8FBSYMBOL* );
static void HWRITEX86F2I( FBSTRING*, int64, int64 );
static void HWRITEGENERICF2I( FBSTRING*, int64, int64 );
static void HWRITEF2I( FBSTRING*, int64, int64 );
static void HMAYBEEMITPROCEXPORT( struct $8FBSYMBOL* );
static int64 _EMITBEGIN( void );
static void _EMITEND( void );
static int64 _GETOPTIONVALUE( $14IR_OPTIONVALUE );
static int64 _SUPPORTSOP( int64, int64 );
static void _PROCBEGIN( struct $8FBSYMBOL* );
static void _PROCEND( struct $8FBSYMBOL* );
static void _SCOPEBEGIN( struct $8FBSYMBOL* );
static void _SCOPEEND( struct $8FBSYMBOL* );
static int64 HISSTATICWITHDTOR( struct $8FBSYMBOL* );
static void _PROCALLOCSTATICVARS( struct $8FBSYMBOL* );
static void _SETVREGDATATYPE( struct $6IRVREG*, int64, struct $8FBSYMBOL* );
static struct $8EXPRNODE* EXPRNEW( int64, int64, struct $8FBSYMBOL* );
static void EXPRFREETREE( struct $8EXPRNODE* );
static struct $8EXPRNODE* EXPRNEWTEXT( int64, struct $8FBSYMBOL*, char* );
static struct $8EXPRNODE* EXPRNEWIMMI( int64, int64 );
static struct $8EXPRNODE* EXPRNEWIMMF( double, int64 );
static int64 SYMBISCARRAY( struct $8FBSYMBOL* );
static struct $8EXPRNODE* EXPRNEWCAST( int64, struct $8FBSYMBOL*, struct $8EXPRNODE* );
static struct $8EXPRNODE* EXPRNEWMACRO( $6AST_OP, int64, struct $8FBSYMBOL*, struct $8EXPRNODE*, struct $8EXPRNODE* );
static struct $8EXPRNODE* EXPRNEWSYM( struct $8FBSYMBOL* );
static int64 TYPECBOP( int64, int64, int64 );
static struct $8EXPRNODE* EXPRNEWUOP( int64, struct $8EXPRNODE* );
static struct $8EXPRNODE* EXPRNEWBOP( int64, struct $8EXPRNODE*, struct $8EXPRNODE* );
static void EXPRCACHE( int64, struct $8EXPRNODE* );
static struct $8EXPRNODE* EXPRLOOKUP( int64 );
static FBSTRING* HEMITINT( int64, int64 );
static FBSTRING* HEMITFLOAT( int64, double );
static void HBUILDSTRLIT( FBSTRING*, char*, int64 );
static void HBUILDWSTRLIT( FBSTRING*, uint16*, int64 );
static char* HBOPTOSTR( int64 );
static char* HUOPTOSTR( int64, int64, int64* );
static void HIMM2TEXT( FBSTRING*, struct $8EXPRNODE* );
static void HSYM2TEXT( FBSTRING*, struct $8FBSYMBOL* );
static void HEXPRFLUSH( struct $8EXPRNODE*, int64 );
static FBSTRING* EXPRFLUSH( struct $8EXPRNODE*, int64 );
static struct $8EXPRNODE* EXPRNEWOFFSET( struct $8FBSYMBOL*, int64 );
static struct $8EXPRNODE* EXPRNEWVREG( struct $6IRVREG*, int64 );
static void _EMITLABEL( struct $8FBSYMBOL* );
static void EXPRSTORE( struct $6IRVREG*, struct $8EXPRNODE*, int64 );
static void _EMITBOP( int64, struct $6IRVREG*, struct $6IRVREG*, struct $6IRVREG*, struct $8FBSYMBOL* );
static void _EMITUOP( int64, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCONVERT( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSTORE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSPILLREGS( void );
static void _EMITLOAD( struct $6IRVREG* );
static void _EMITLOADRES( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITADDR( int64, struct $6IRVREG*, struct $6IRVREG* );
static void HDOCALL( FBSTRING*, int64, struct $6IRVREG*, int64 );
static void _EMITCALL( struct $8FBSYMBOL*, int64, struct $6IRVREG*, int64 );
static void _EMITCALLPTR( struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG*, int64, int64 );
static void _EMITJUMPPTR( struct $6IRVREG* );
static void _EMITBRANCH( int64, struct $8FBSYMBOL* );
static void _EMITJMPTB( struct $6IRVREG*, struct $8FBSYMBOL*, uint64*, struct $8FBSYMBOL**, int64, struct $8FBSYMBOL*, uint64, uint64 );
static void _EMITMEM( int64, struct $6IRVREG*, struct $6IRVREG*, int64 );
static void _EMITMACRO( int64, struct $6IRVREG*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITDECL( struct $8FBSYMBOL* );
static void _EMITCOMMENT( char* );
static int32 HFINDLABELINSEENLIST( struct $5TLIST*, struct $8FBSYMBOL* );
static void _EMITASMLINE( struct $9ASTASMTOK* );
static void _EMITVARINIBEGIN( struct $8FBSYMBOL* );
static void _EMITVARINIEND( struct $8FBSYMBOL* );
static void HVARINISEPARATOR( void );
static void _EMITVARINII( struct $8FBSYMBOL*, int64 );
static void _EMITVARINIF( struct $8FBSYMBOL*, double );
static void _EMITVARINIOFS( struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
static void _EMITVARINISTR( int64, char*, int64 );
static void _EMITVARINIWSTR( int64, uint16*, int64 );
static void _EMITVARINIPAD( int64 );
static void _EMITVARINISCOPEBEGIN( struct $8FBSYMBOL*, int64 );
static void _EMITVARINISCOPEEND( void );
static void _EMITFBCTINFBEGIN( void );
static void _EMITFBCTINFSTRING( char* );
static void _EMITFBCTINFEND( void );
static void _EMITPROCBEGIN( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static void _EMITPROCEND( struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static void _EMITSCOPEBEGIN( struct $8FBSYMBOL* );
static void _EMITSCOPEEND( struct $8FBSYMBOL* );
static void _GLOBAL__I( void ) __attribute__(( constructor ));
static void _GLOBAL__D( void ) __attribute__(( destructor ));
typedef void (*tmp$39)( void );
typedef int64 (*tmp$40)( void );
typedef int64 (*tmp$41)( $14IR_OPTIONVALUE );
typedef int64 (*tmp$42)( int64, int64 );
typedef void (*tmp$44)( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef char* (*tmp$45)( void );
typedef void (*tmp$46)( struct $6IRVREG*, struct $6IRVREG* );
typedef void (*tmp$47)( int64 );
typedef void (*tmp$48)( struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef void (*tmp$49)( struct $8FBSYMBOL*, struct $6IRVREG*, int64, int64, struct $6IRVREG* );
typedef void (*tmp$50)( struct $9ASTASMTOK* );
typedef void (*tmp$51)( char* );
typedef void (*tmp$52)( int64, struct $6IRVREG*, struct $6IRVREG*, struct $6IRVREG*, struct $8FBSYMBOL* );
typedef void (*tmp$53)( int64, struct $6IRVREG*, struct $6IRVREG* );
typedef void (*tmp$54)( struct $6IRVREG* );
typedef void (*tmp$55)( struct $8FBSYMBOL*, int64, struct $6IRVREG*, int64 );
typedef void (*tmp$56)( struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG*, int64, int64 );
typedef void (*tmp$57)( int64, struct $8FBSYMBOL* );
typedef void (*tmp$58)( struct $6IRVREG*, struct $8FBSYMBOL*, uint64*, struct $8FBSYMBOL**, int64, struct $8FBSYMBOL*, uint64, uint64 );
typedef void (*tmp$59)( int64, struct $6IRVREG*, struct $6IRVREG*, int64 );
typedef void (*tmp$60)( int64, struct $6IRVREG*, struct $6IRVREG*, struct $6IRVREG* );
typedef void (*tmp$61)( int64, struct $8FBSYMBOL*, int64, char* );
typedef void (*tmp$62)( struct $8FBSYMBOL*, int64 );
typedef void (*tmp$63)( struct $8FBSYMBOL*, double );
typedef void (*tmp$64)( struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
typedef void (*tmp$65)( int64, char*, int64 );
typedef void (*tmp$66)( int64, uint16*, int64 );
typedef void (*tmp$67)( int64 );
typedef void (*tmp$68)( struct $8FBSYMBOL*, int64 );
typedef void (*tmp$69)( char* );
typedef struct $6IRVREG* (*tmp$70)( int64, struct $8FBSYMBOL* );
typedef struct $6IRVREG* (*tmp$71)( int64, struct $8FBSYMBOL*, int64 );
typedef struct $6IRVREG* (*tmp$72)( int64, struct $8FBSYMBOL*, double );
typedef struct $6IRVREG* (*tmp$73)( int64, struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
typedef struct $6IRVREG* (*tmp$74)( int64, struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64, int64, struct $6IRVREG* );
typedef struct $6IRVREG* (*tmp$75)( int64, struct $8FBSYMBOL*, int64, struct $6IRVREG* );
typedef void (*tmp$76)( struct $6IRVREG*, int64, struct $8FBSYMBOL* );
typedef uint64 (*tmp$77)( struct $6IRVREG* );
struct $7IR_VTBL {
	tmp$39 INIT;
	tmp$39 END;
	tmp$40 EMITBEGIN;
	tmp$39 EMITEND;
	tmp$41 GETOPTIONVALUE;
	tmp$42 SUPPORTSOP;
	tmp$43 PROCBEGIN;
	tmp$43 PROCEND;
	tmp$44 PROCALLOCARG;
	tmp$44 PROCALLOCLOCAL;
	tmp$45 PROCGETFRAMEREGNAME;
	tmp$43 SCOPEBEGIN;
	tmp$43 SCOPEEND;
	tmp$43 PROCALLOCSTATICVARS;
	tmp$46 EMITCONVERT;
	tmp$43 EMITLABEL;
	tmp$43 EMITLABELNF;
	tmp$47 EMITRETURN;
	tmp$44 EMITPROCBEGIN;
	tmp$48 EMITPROCEND;
	tmp$49 EMITPUSHARG;
	tmp$50 EMITASMLINE;
	tmp$51 EMITCOMMENT;
	tmp$52 EMITBOP;
	tmp$53 EMITUOP;
	tmp$46 EMITSTORE;
	tmp$39 EMITSPILLREGS;
	tmp$54 EMITLOAD;
	tmp$46 EMITLOADRES;
	tmp$53 EMITSTACK;
	tmp$53 EMITADDR;
	tmp$55 EMITCALL;
	tmp$56 EMITCALLPTR;
	tmp$47 EMITSTACKALIGN;
	tmp$54 EMITJUMPPTR;
	tmp$57 EMITBRANCH;
	tmp$58 EMITJMPTB;
	tmp$59 EMITMEM;
	tmp$60 EMITMACRO;
	tmp$43 EMITSCOPEBEGIN;
	tmp$43 EMITSCOPEEND;
	tmp$43 EMITDECL;
	tmp$61 EMITDBG;
	tmp$43 EMITVARINIBEGIN;
	tmp$43 EMITVARINIEND;
	tmp$62 EMITVARINII;
	tmp$63 EMITVARINIF;
	tmp$64 EMITVARINIOFS;
	tmp$65 EMITVARINISTR;
	tmp$66 EMITVARINIWSTR;
	tmp$67 EMITVARINIPAD;
	tmp$68 EMITVARINISCOPEBEGIN;
	tmp$39 EMITVARINISCOPEEND;
	tmp$39 EMITFBCTINFBEGIN;
	tmp$69 EMITFBCTINFSTRING;
	tmp$39 EMITFBCTINFEND;
	tmp$70 ALLOCVREG;
	tmp$71 ALLOCVRIMM;
	tmp$72 ALLOCVRIMMF;
	tmp$73 ALLOCVRVAR;
	tmp$74 ALLOCVRIDX;
	tmp$75 ALLOCVRPTR;
	tmp$73 ALLOCVROFS;
	tmp$76 SETVREGDATATYPE;
	tmp$77 GETDISTANCE;
	tmp$53 LOADVR;
	tmp$46 STOREVR;
	tmp$47 XCHGTOS;
};
__FB_STATIC_ASSERT( sizeof( struct $7IR_VTBL ) == 544 );
extern struct $7IR_VTBL IRHLC_VTBL$;
struct $5IRCTX {
	struct $7IR_VTBL VTBL;
	$6IR_OPT OPTIONS;
};
__FB_STATIC_ASSERT( sizeof( struct $5IRCTX ) == 552 );
extern struct $5IRCTX IR$;
extern struct $10AST_OPINFO AST_OPTB$[121];
struct $16__FB_ARRAYDIMTB$ {
	int64 ELEMENTS;
	int64 LBOUND;
	int64 UBOUND;
};
__FB_STATIC_ASSERT( sizeof( struct $16__FB_ARRAYDIMTB$ ) == 24 );
struct $8FBARRAY1I10AST_OPINFOE {
	struct $10AST_OPINFO* DATA;
	struct $10AST_OPINFO* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	int64 FLAGS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[1];
};
__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1I10AST_OPINFOE ) == 72 );
static struct $8FBARRAY1I10AST_OPINFOE tmp$81$;
struct $12FBHASHTBLIST {
	struct $8FBHASHTB* HEAD;
	struct $8FBHASHTB* TAIL;
};
__FB_STATIC_ASSERT( sizeof( struct $12FBHASHTBLIST ) == 16 );
struct $8TSTACKTB;
struct $10TSTACKNODE;
struct $10TSTACKNODE {
	struct $10TSTACKNODE* PREV;
	struct $10TSTACKNODE* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $10TSTACKNODE ) == 16 );
struct $8TSTACKTB {
	struct $8TSTACKTB* NEXT;
	struct $10TSTACKNODE* NODETB;
	int64 NODES;
};
__FB_STATIC_ASSERT( sizeof( struct $8TSTACKTB ) == 24 );
struct $6TSTACK {
	struct $8TSTACKTB* TBHEAD;
	struct $8TSTACKTB* TBTAIL;
	int64 NODES;
	int64 NODELEN;
	struct $10TSTACKNODE* TOS;
	int64 CLEAR;
};
__FB_STATIC_ASSERT( sizeof( struct $6TSTACK ) == 48 );
struct $5TPOOL {
	int64 CHUNKS;
	int64 CHUNKSIZE;
	struct $5TLIST* CHUNKTB;
};
__FB_STATIC_ASSERT( sizeof( struct $5TPOOL ) == 24 );
struct $17SYMB_DEF_UNIQUEID {
	struct $5THASH DICT;
};
__FB_STATIC_ASSERT( sizeof( struct $17SYMB_DEF_UNIQUEID ) == 24 );
struct $14SYMB_DEF_PARAM {
	struct $8HASHITEM* ITEM;
	uint64 INDEX;
};
__FB_STATIC_ASSERT( sizeof( struct $14SYMB_DEF_PARAM ) == 16 );
struct $12SYMB_DEF_CTX {
	struct $5TLIST PARAMLIST;
	struct $5TLIST TOKLIST;
	struct $17SYMB_DEF_UNIQUEID UNIQUEID;
	int64 PARAM;
	struct $5THASH PARAMHASH;
	struct $14SYMB_DEF_PARAM HASH[32];
};
__FB_STATIC_ASSERT( sizeof( struct $12SYMB_DEF_CTX ) == 696 );
struct $20FB_GLOBCTORLIST_ITEM;
struct $20FB_GLOBCTORLIST_ITEM {
	struct $8FBSYMBOL* SYM;
	struct $20FB_GLOBCTORLIST_ITEM* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $20FB_GLOBCTORLIST_ITEM ) == 16 );
struct $15FB_GLOBCTORLIST {
	struct $20FB_GLOBCTORLIST_ITEM* HEAD;
	struct $20FB_GLOBCTORLIST_ITEM* TAIL;
	struct $5TLIST LIST;
};
__FB_STATIC_ASSERT( sizeof( struct $15FB_GLOBCTORLIST ) == 80 );
struct $10SYMB_OVLOP {
	struct $8FBSYMBOL* HEAD;
};
__FB_STATIC_ASSERT( sizeof( struct $10SYMB_OVLOP ) == 8 );
struct $10FB_RTTICTX {
	struct $8FBSYMBOL* FB_RTTI;
	struct $8FBSYMBOL* FB_OBJECT;
};
__FB_STATIC_ASSERT( sizeof( struct $10FB_RTTICTX ) == 16 );
struct $7SYMBCTX {
	int64 INITED;
	struct $5TLIST SYMLIST;
	struct $12FBHASHTBLIST HASHLIST;
	struct $10FBSYMCHAIN CHAINPOOL[4096];
	int64 CHAINPOOLHEAD;
	struct $8FBSYMBOL GLOBNSPC;
	struct $8FBSYMBOL* NAMESPC;
	struct $8FBHASHTB* HASHTB;
	struct $10FBSYMBOLTB* SYMTB;
	struct $6TSTACK NESTSTK;
	struct $5THASH IMPHASHTB;
	struct $5TLIST IMPHASHLIST;
	struct $5TPOOL NAMEPOOL;
	struct $5TLIST FWDLIST;
	struct $5TLIST NSEXTLIST;
	int64 FWDREFCNT;
	struct $12SYMB_DEF_CTX DEF;
	struct $8FBSYMBOL* LASTLBL;
	struct $15FB_GLOBCTORLIST GLOBCTORLIST;
	struct $15FB_GLOBCTORLIST GLOBDTORLIST;
	struct $10SYMB_OVLOP GLOBOPOVLTB[121];
	int64 FBARRAY_DATA;
	int64 FBARRAY_PTR;
	int64 FBARRAY_SIZE;
	int64 FBARRAY_DIMTB;
	struct $8FBSYMBOL* FBARRAYDIM;
	int64 FBARRAYDIM_LBOUND;
	int64 FBARRAYDIM_UBOUND;
	struct $10FB_RTTICTX RTTI;
};
__FB_STATIC_ASSERT( sizeof( struct $7SYMBCTX ) == 199248 );
extern struct $7SYMBCTX SYMB$;
extern struct $13SYMB_DATATYPE SYMB_DTYPETB$[26];
struct $8FBARRAY1I13SYMB_DATATYPEE {
	struct $13SYMB_DATATYPE* DATA;
	struct $13SYMB_DATATYPE* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	int64 FLAGS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[1];
};
__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1I13SYMB_DATATYPEE ) == 72 );
static struct $8FBARRAY1I13SYMB_DATATYPEE tmp$82$;
struct $8FBARRAY2Iu7INTEGERE {
	int64* DATA;
	int64* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	int64 FLAGS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[2];
};
__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY2Iu7INTEGERE ) == 96 );
static struct $8FBARRAY2Iu7INTEGERE tmp$83$;
typedef int64 $10FB_OUTTYPE;
typedef int64 $10FB_BACKEND;
typedef int64 $10FB_CPUTYPE;
typedef int64 $10FB_FPUTYPE;
typedef int64 $9FB_FPMODE;
typedef int64 $17FB_VECTORIZELEVEL;
typedef int64 $12FB_ASMSYNTAX;
typedef int64 $7FB_LANG;
typedef int64 $10FB_PDCHECK;
typedef int64 $11FB_MODEVIEW;
struct $12FBCMMLINEOPT {
	$10FB_OUTTYPE OUTTYPE;
	int64 PPONLY;
	$10FB_BACKEND BACKEND;
	$13FB_COMPTARGET TARGET;
	$10FB_CPUTYPE CPUTYPE;
	$10FB_FPUTYPE FPUTYPE;
	$9FB_FPMODE FPMODE;
	$17FB_VECTORIZELEVEL VECTORIZE;
	int64 OPTLEVEL;
	$12FB_ASMSYNTAX ASMSYNTAX;
	$7FB_LANG LANG;
	int64 FORCELANG;
	int64 DEBUG;
	int64 DEBUGINFO;
	int64 ASSERTIONS;
	int64 ERRORCHECK;
	int64 RESUMEERR;
	int64 EXTRAERRCHK;
	int64 ERRLOCATION;
	int64 ARRAYBOUNDCHK;
	int64 NULLPTRCHK;
	int64 UNWINDINFO;
	int64 PROFILE;
	int64 WARNINGLEVEL;
	int64 SHOWERROR;
	int64 MAXERRORS;
	$10FB_PDCHECK PDCHECKOPT;
	int64 GOSUBSETJMP;
	int64 VALISTASPTR;
	int64 NOTHISCALL;
	int64 NOFASTCALL;
	int64 FBRT;
	int64 EXPORT;
	int64 MSBITFIELDS;
	int64 MULTITHREADED;
	int64 FBGFX;
	int64 PIC;
	int64 STACKSIZE;
	int64 OBJINFO;
	int64 SHOWINCLUDES;
	$11FB_MODEVIEW MODEVIEW;
	int64 NOCMDLINE;
	int64 RETURNINFLTS;
};
__FB_STATIC_ASSERT( sizeof( struct $12FBCMMLINEOPT ) == 344 );
typedef int64 $12FB_TARGETOPT;
struct $8FBTARGET {
	char* ID;
	$11FB_DATATYPE WCHAR;
	$11FB_FUNCMODE FBCALL;
	$11FB_FUNCMODE STDCALL;
	$12FB_TARGETOPT OPTIONS;
};
__FB_STATIC_ASSERT( sizeof( struct $8FBTARGET ) == 40 );
typedef int64 $12FB_WCHARCONV;
typedef int64 $13FBFILE_FORMAT;
struct $6FBFILE {
	int64 NUM;
	char NAME[261];
	char* INCFILE;
	int64 ISMAIN;
	$13FBFILE_FORMAT FORMAT;
};
__FB_STATIC_ASSERT( sizeof( struct $6FBFILE ) == 296 );
struct $6FBMAIN {
	struct $8FBSYMBOL* PROC;
	struct $7ASTNODE* INITNODE;
};
__FB_STATIC_ASSERT( sizeof( struct $6FBMAIN ) == 16 );
typedef int64 $11FB_LANG_OPT;
struct $11FB_LANG_CTX {
	$11FB_LANG_OPT OPT;
	$11FB_DATATYPE INTEGERKEYWORDDTYPE;
	$11FB_DATATYPE INT15LITERALDTYPE;
	$11FB_DATATYPE INT16LITERALDTYPE;
	$11FB_DATATYPE INT31LITERALDTYPE;
	$11FB_DATATYPE INT32LITERALDTYPE;
	$11FB_DATATYPE INT63LITERALDTYPE;
	$11FB_DATATYPE INT64LITERALDTYPE;
	$11FB_DATATYPE FLOATLITERALDTYPE;
};
__FB_STATIC_ASSERT( sizeof( struct $11FB_LANG_CTX ) == 72 );
struct $8FBOPTION {
	int64 BASE;
	int64 PARAMMODE;
	int64 EXPLICIT;
	int64 PROCPUBLIC;
	int64 ESCAPESTR;
	int64 DYNAMIC;
	int64 GOSUB;
};
__FB_STATIC_ASSERT( sizeof( struct $8FBOPTION ) == 56 );
typedef int64 $16FB_RESTART_FLAGS;
struct $7TSTRSET {
	struct $5TLIST LIST;
	struct $5THASH HASH;
};
__FB_STATIC_ASSERT( sizeof( struct $7TSTRSET ) == 88 );
struct $5FBENV {
	struct $5TLIST PREDEFINES;
	struct $5TLIST PREINCLUDES;
	struct $5TLIST INCLUDEPATHS;
	struct $12FBCMMLINEOPT CLOPT;
	struct $8FBTARGET TARGET;
	$12FB_WCHARCONV WCHARCONV;
	int64 UNDERSCOREPREFIX;
	int64 POINTERSIZE;
	struct $6FBFILE INF;
	struct $6FBFILE OUTF;
	int64 PPFILE_NUM;
	struct $5THASH FILENAMEHASH;
	struct $5THASH INCFILEHASH;
	struct $5THASH INCONCEHASH;
	int64 INCLUDEREC;
	char ENTRY[128];
	struct $6FBMAIN MAIN;
	struct $11FB_LANG_CTX LANG;
	struct $8FBOPTION OPT;
	int64 INITED;
	int64 MODULE_COUNT;
	$16FB_RESTART_FLAGS RESTART_REQUEST;
	$16FB_RESTART_FLAGS RESTART_ACTION;
	$16FB_RESTART_FLAGS RESTART_STATUS;
	int64 RESTART_COUNT;
	$7FB_LANG RESTART_LANG;
	struct $7TSTRSET LIBS;
	struct $7TSTRSET LIBPATHS;
	int64 FBCTINF_STARTED;
};
__FB_STATIC_ASSERT( sizeof( struct $5FBENV ) == 1792 );
extern struct $5FBENV ENV$;
struct $7LEX_CTX {
	struct $9LEX_TKCTX CTXTB[17];
	struct $9LEX_TKCTX* CTX;
	int64 INSIDEMACRO;
};
__FB_STATIC_ASSERT( sizeof( struct $7LEX_CTX ) == 426920 );
extern struct $7LEX_CTX LEX$;
struct $10TFLISTITEM;
struct $10TFLISTITEM {
	struct $10TFLISTITEM* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $10TFLISTITEM ) == 8 );
struct $6TFLIST {
	int64 TOTITEMS;
	int64 ITEMS;
	struct $10TFLISTITEM* ITEMTB;
	int64 INDEX;
	struct $10TFLISTITEM* LASTITEM;
	struct $5TLIST LIST;
	struct $7TLISTTB* LISTTB;
};
__FB_STATIC_ASSERT( sizeof( struct $6TFLIST ) == 112 );
struct $11IRHLCONTEXT {
	int64 REGCOUNT;
	struct $6TFLIST VREGS;
	struct $5TLIST CALLARGS;
};
__FB_STATIC_ASSERT( sizeof( struct $11IRHLCONTEXT ) == 184 );
extern struct $11IRHLCONTEXT IRHL$;
static struct $8IRHLCCTX CTX$;
static char* DTYPENAME$[26] = { (char*)"void", (char*)"boolean", (char*)"int8", (char*)"uint8", (char*)"char", (char*)"int16", (char*)"uint16", (char*)0ull, (char*)0ull, (char*)0ull, (char*)0ull, (char*)"int32", (char*)"uint32", (char*)"int64", (char*)"uint64", (char*)"float", (char*)"double", (char*)"FBSTRING", (char*)0ull, (char*)"__builtin_va_list", (char*)0ull, (char*)0ull, (char*)0ull, (char*)"void", (char*)0ull };
struct $7IR_VTBL IRHLC_VTBL$ = { (tmp$39)&_INIT, (tmp$39)&_END, (tmp$40)&_EMITBEGIN, (tmp$39)&_EMITEND, (tmp$41)&_GETOPTIONVALUE, (tmp$42)&_SUPPORTSOP, (tmp$43)&_PROCBEGIN, (tmp$43)&_PROCEND, (tmp$44)0ull, (tmp$44)0ull, (tmp$45)0ull, (tmp$43)&_SCOPEBEGIN, (tmp$43)&_SCOPEEND, (tmp$43)&_PROCALLOCSTATICVARS, (tmp$46)&_EMITCONVERT, (tmp$43)&_EMITLABEL, (tmp$43)&_EMITLABEL, (tmp$47)0ull, (tmp$44)&_EMITPROCBEGIN, (tmp$48)&_EMITPROCEND, (tmp$49)&IRHLEMITPUSHARG, (tmp$50)&_EMITASMLINE, (tmp$51)&_EMITCOMMENT, (tmp$52)&_EMITBOP, (tmp$53)&_EMITUOP, (tmp$46)&_EMITSTORE, (tmp$39)&_EMITSPILLREGS, (tmp$54)&_EMITLOAD, (tmp$46)&_EMITLOADRES, (tmp$53)0ull, (tmp$53)&_EMITADDR, (tmp$55)&_EMITCALL, (tmp$56)&_EMITCALLPTR, (tmp$47)0ull, (tmp$54)&_EMITJUMPPTR, (tmp$57)&_EMITBRANCH, (tmp$58)&_EMITJMPTB, (tmp$59)&_EMITMEM, (tmp$60)&_EMITMACRO, (tmp$43)&_EMITSCOPEBEGIN, (tmp$43)&_EMITSCOPEEND, (tmp$43)&_EMITDECL, (tmp$61)&_EMITDBG, (tmp$43)&_EMITVARINIBEGIN, (tmp$43)&_EMITVARINIEND, (tmp$62)&_EMITVARINII, (tmp$63)&_EMITVARINIF, (tmp$64)&_EMITVARINIOFS, (tmp$65)&_EMITVARINISTR, (tmp$66)&_EMITVARINIWSTR, (tmp$67)&_EMITVARINIPAD, (tmp$68)&_EMITVARINISCOPEBEGIN, (tmp$39)&_EMITVARINISCOPEEND, (tmp$39)&_EMITFBCTINFBEGIN, (tmp$69)&_EMITFBCTINFSTRING, (tmp$39)&_EMITFBCTINFEND, (tmp$70)&IRHLALLOCVREG, (tmp$71)&IRHLALLOCVRIMM, (tmp$72)&IRHLALLOCVRIMMF, (tmp$73)&IRHLALLOCVRVAR, (tmp$74)&IRHLALLOCVRIDX, (tmp$75)&IRHLALLOCVRPTR, (tmp$73)&IRHLALLOCVROFS, (tmp$76)&_SETVREGDATATYPE, (tmp$77)0ull, (tmp$53)0ull, (tmp$46)0ull, (tmp$47)0ull };

__attribute__(( constructor )) static void fb_ctor__irzhlc( void )
{
	label$0:;
	label$1:;
}

static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM* THIS$1, struct $11TSTRSETITEM* __FB_RHS__$1 )
{
	label$4:;
	fb_StrAssign( (void*)THIS$1, -1ll, (void*)__FB_RHS__$1, -1ll, 0 );
	*(int64*)((uint8*)THIS$1 + 24ll) = *(int64*)((uint8*)__FB_RHS__$1 + 24ll);
	*(struct $8HASHITEM**)((uint8*)THIS$1 + 32ll) = *(struct $8HASHITEM**)((uint8*)__FB_RHS__$1 + 32ll);
	label$5:;
}

static void _ZN12SECTIONENTRYC1Ev( struct $12SECTIONENTRY* THIS$1 )
{
	__builtin_memset( (FBSTRING*)THIS$1, 0, 24ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 32ll), 0, 8ll );
	label$10:;
	label$11:;
}

static void _ZN12SECTIONENTRYaSERKS_( struct $12SECTIONENTRY* THIS$1, struct $12SECTIONENTRY* __FB_RHS__$1 )
{
	label$12:;
	fb_StrAssign( (void*)THIS$1, -1ll, (void*)__FB_RHS__$1, -1ll, 0 );
	*(int64*)((uint8*)THIS$1 + 24ll) = *(int64*)((uint8*)__FB_RHS__$1 + 24ll);
	*(int64*)((uint8*)THIS$1 + 32ll) = *(int64*)((uint8*)__FB_RHS__$1 + 32ll);
	label$13:;
}

static void _ZN12SECTIONENTRYD1Ev( struct $12SECTIONENTRY* THIS$1 )
{
	label$16:;
	label$17:;
	fb_StrDelete( (FBSTRING*)THIS$1 );
}

static void _ZN8IRHLCCTXC1Ev( struct $8IRHLCCTX* THIS$1 )
{
	int64 TMP$97$1;
	struct $12SECTIONENTRY* TMP$98$1;
	TMP$98$1 = (struct $12SECTIONENTRY*)THIS$1;
	TMP$97$1 = 0ll;
	label$20:;
	_ZN12SECTIONENTRYC1Ev( TMP$98$1 );
	TMP$98$1 = (struct $12SECTIONENTRY*)((uint8*)TMP$98$1 + 40ll);
	TMP$97$1 = TMP$97$1 + 1ll;
	if( TMP$97$1 != 129ll ) goto label$20;
	__builtin_memset( (int64*)((uint8*)THIS$1 + 5160ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 5168ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 5176ll), 0, 8ll );
	__builtin_memset( (FBSTRING*)((uint8*)THIS$1 + 5184ll), 0, 24ll );
	__builtin_memset( (uint64*)((uint8*)THIS$1 + 5208ll), 0, 8ll );
	__builtin_memset( (struct $5TLIST*)((uint8*)THIS$1 + 5216ll), 0, 64ll );
	__builtin_memset( (FBSTRING*)((uint8*)THIS$1 + 5280ll), 0, 24ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 5304ll), 0, 8ll );
	__builtin_memset( (FBSTRING*)((uint8*)THIS$1 + 5312ll), 0, 24ll );
	__builtin_memset( (FBSTRING*)((uint8*)THIS$1 + 5336ll), 0, 24ll );
	__builtin_memset( (struct $5TLIST*)((uint8*)THIS$1 + 5360ll), 0, 64ll );
	__builtin_memset( (FBSTRING*)((uint8*)THIS$1 + 5424ll), 0, 24ll );
	__builtin_memset( (struct $5TLIST*)((uint8*)THIS$1 + 5448ll), 0, 64ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 5512ll), 0, 8ll );
	label$18:;
	label$19:;
}

static void _ZN8IRHLCCTXaSERKS_( struct $8IRHLCCTX* THIS$1, struct $8IRHLCCTX* __FB_RHS__$1 )
{
	int64 TMP$99$1;
	struct $12SECTIONENTRY* TMP$100$1;
	struct $12SECTIONENTRY* TMP$101$1;
	label$21:;
	TMP$100$1 = (struct $12SECTIONENTRY*)THIS$1;
	TMP$101$1 = (struct $12SECTIONENTRY*)__FB_RHS__$1;
	TMP$99$1 = 0ll;
	label$23:;
	_ZN12SECTIONENTRYaSERKS_( TMP$100$1, (struct $12SECTIONENTRY*)TMP$101$1 );
	TMP$100$1 = (struct $12SECTIONENTRY*)((uint8*)TMP$100$1 + 40ll);
	TMP$101$1 = (struct $12SECTIONENTRY*)((uint8*)TMP$101$1 + 40ll);
	TMP$99$1 = TMP$99$1 + 1ll;
	if( TMP$99$1 != 129ll ) goto label$23;
	*(int64*)((uint8*)THIS$1 + 5160ll) = *(int64*)((uint8*)__FB_RHS__$1 + 5160ll);
	*(int64*)((uint8*)THIS$1 + 5168ll) = *(int64*)((uint8*)__FB_RHS__$1 + 5168ll);
	*(int64*)((uint8*)THIS$1 + 5176ll) = *(int64*)((uint8*)__FB_RHS__$1 + 5176ll);
	fb_StrAssign( (void*)((uint8*)THIS$1 + 5184ll), -1ll, (void*)((uint8*)__FB_RHS__$1 + 5184ll), -1ll, 0 );
	*(uint64*)((uint8*)THIS$1 + 5208ll) = *(uint64*)((uint8*)__FB_RHS__$1 + 5208ll);
	__builtin_memcpy( (struct $5TLIST*)((uint8*)THIS$1 + 5216ll), (struct $5TLIST*)((uint8*)__FB_RHS__$1 + 5216ll), 64 );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 5280ll), -1ll, (void*)((uint8*)__FB_RHS__$1 + 5280ll), -1ll, 0 );
	*(int64*)((uint8*)THIS$1 + 5304ll) = *(int64*)((uint8*)__FB_RHS__$1 + 5304ll);
	fb_StrAssign( (void*)((uint8*)THIS$1 + 5312ll), -1ll, (void*)((uint8*)__FB_RHS__$1 + 5312ll), -1ll, 0 );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 5336ll), -1ll, (void*)((uint8*)__FB_RHS__$1 + 5336ll), -1ll, 0 );
	__builtin_memcpy( (struct $5TLIST*)((uint8*)THIS$1 + 5360ll), (struct $5TLIST*)((uint8*)__FB_RHS__$1 + 5360ll), 64 );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 5424ll), -1ll, (void*)((uint8*)__FB_RHS__$1 + 5424ll), -1ll, 0 );
	__builtin_memcpy( (struct $5TLIST*)((uint8*)THIS$1 + 5448ll), (struct $5TLIST*)((uint8*)__FB_RHS__$1 + 5448ll), 64 );
	*(int64*)((uint8*)THIS$1 + 5512ll) = *(int64*)((uint8*)__FB_RHS__$1 + 5512ll);
	label$22:;
}

static void _ZN8IRHLCCTXD1Ev( struct $8IRHLCCTX* THIS$1 )
{
	int64 TMP$104$1;
	struct $12SECTIONENTRY* TMP$105$1;
	label$27:;
	label$28:;
	fb_StrDelete( (FBSTRING*)((uint8*)THIS$1 + 5424ll) );
	fb_StrDelete( (FBSTRING*)((uint8*)THIS$1 + 5336ll) );
	fb_StrDelete( (FBSTRING*)((uint8*)THIS$1 + 5312ll) );
	fb_StrDelete( (FBSTRING*)((uint8*)THIS$1 + 5280ll) );
	fb_StrDelete( (FBSTRING*)((uint8*)THIS$1 + 5184ll) );
	TMP$105$1 = (struct $12SECTIONENTRY*)((uint8*)THIS$1 + 5120ll);
	TMP$104$1 = 0ll;
	label$29:;
	_ZN12SECTIONENTRYD1Ev( TMP$105$1 );
	TMP$105$1 = (struct $12SECTIONENTRY*)((uint8*)TMP$105$1 + -40ll);
	TMP$104$1 = TMP$104$1 + 1ll;
	if( TMP$104$1 != 129ll ) goto label$29;
}

static void _INIT( void )
{
	label$30:;
	IRHLINIT(  );
	LISTINIT( (struct $5TLIST*)((uint8*)&CTX$ + 5216ll), 8ll, 8ll, 6ll );
	LISTINIT( (struct $5TLIST*)((uint8*)&CTX$ + 5360ll), 32ll, 48ll, 7ll );
	LISTINIT( (struct $5TLIST*)((uint8*)&CTX$ + 5448ll), 8ll, 16ll, 6ll );
	*($6IR_OPT*)((uint8*)&IR$ + 544ll) = *(int64*)((uint8*)&IR$ + 544ll) | 131074ll;
	int64 vr$4 = FBIS64BIT(  );
	if( vr$4 == 0ll ) goto label$33;
	{
		*(char**)((int64)(char**)DTYPENAME$ + 64ll) = *(char**)((int64)(char**)DTYPENAME$ + 104ll);
		*(char**)((int64)(char**)DTYPENAME$ + 72ll) = *(char**)((int64)(char**)DTYPENAME$ + 112ll);
	}
	goto label$32;
	label$33:;
	{
		*(char**)((int64)(char**)DTYPENAME$ + 64ll) = *(char**)((int64)(char**)DTYPENAME$ + 88ll);
		*(char**)((int64)(char**)DTYPENAME$ + 72ll) = *(char**)((int64)(char**)DTYPENAME$ + 96ll);
	}
	label$32:;
	label$31:;
}

static void _END( void )
{
	label$34:;
	LISTEND( (struct $5TLIST*)((uint8*)&CTX$ + 5448ll) );
	LISTEND( (struct $5TLIST*)((uint8*)&CTX$ + 5360ll) );
	LISTEND( (struct $5TLIST*)((uint8*)&CTX$ + 5216ll) );
	IRHLEND(  );
	label$35:;
}

static void SECTIONBEGIN( void )
{
	label$36:;
	*(int64*)((uint8*)&CTX$ + 5160ll) = *(int64*)((uint8*)&CTX$ + 5160ll) + 1ll;
	{
		struct $12SECTIONENTRY* TMP$122$2;
		TMP$122$2 = (struct $12SECTIONENTRY*)((uint8*)&CTX$ + (*(int64*)((uint8*)&CTX$ + 5160ll) * 40ll));
		*(int64*)((uint8*)TMP$122$2 + 24ll) = -1ll;
		if( *(int64*)((uint8*)&CTX$ + 5160ll) <= 0ll ) goto label$39;
		{
			*(int64*)((uint8*)TMP$122$2 + 32ll) = *(int64*)((uint8*)((uint8*)&CTX$ + (*(int64*)((uint8*)&CTX$ + 5160ll) * 40ll)) + -8ll);
		}
		goto label$38;
		label$39:;
		{
			*(int64*)((uint8*)TMP$122$2 + 32ll) = 0ll;
		}
		label$38:;
	}
	label$37:;
}

static void SECTIONWRITELINE( FBSTRING* S$1 )
{
	label$40:;
	{
		FBSTRING TMP$129$2;
		struct $12SECTIONENTRY* TMP$123$2;
		TMP$123$2 = (struct $12SECTIONENTRY*)((uint8*)&CTX$ + (*(int64*)((uint8*)&CTX$ + 5160ll) * 40ll));
		if( *(int64*)((uint8*)TMP$123$2 + 24ll) == 0ll ) goto label$43;
		{
			if( *(int64*)((uint8*)TMP$123$2 + 32ll) <= 0ll ) goto label$45;
			{
				FBSTRING TMP$125$4;
				FBSTRING* vr$5 = fb_StrAllocTempDescZEx( (char*)"\x09", 1ll );
				FBSTRING* vr$7 = fb_StrFill2( *(int64*)((uint8*)TMP$123$2 + 32ll), (FBSTRING*)vr$5 );
				fb_StrAssign( (void*)TMP$123$2, -1ll, (void*)vr$7, -1ll, 0 );
				__builtin_memset( &TMP$125$4, 0, 24ll );
				FBSTRING* vr$14 = fb_StrConcat( &TMP$125$4, (void*)TMP$123$2, -1ll, (void*)S$1, -1ll );
				fb_StrAssign( (void*)TMP$123$2, -1ll, (void*)vr$14, -1ll, 0 );
			}
			goto label$44;
			label$45:;
			{
				fb_StrAssign( (void*)TMP$123$2, -1ll, (void*)S$1, -1ll, 0 );
			}
			label$44:;
			*(int64*)((uint8*)TMP$123$2 + 24ll) = 0ll;
		}
		goto label$42;
		label$43:;
		{
			FBSTRING TMP$127$3;
			if( *(int64*)((uint8*)TMP$123$2 + 32ll) <= 0ll ) goto label$47;
			{
				FBSTRING TMP$126$4;
				FBSTRING* vr$21 = fb_StrAllocTempDescZEx( (char*)"\x09", 1ll );
				FBSTRING* vr$23 = fb_StrFill2( *(int64*)((uint8*)TMP$123$2 + 32ll), (FBSTRING*)vr$21 );
				__builtin_memset( &TMP$126$4, 0, 24ll );
				FBSTRING* vr$28 = fb_StrConcat( &TMP$126$4, (void*)TMP$123$2, -1ll, (void*)vr$23, -1ll );
				fb_StrAssign( (void*)TMP$123$2, -1ll, (void*)vr$28, -1ll, 0 );
			}
			label$47:;
			label$46:;
			__builtin_memset( &TMP$127$3, 0, 24ll );
			FBSTRING* vr$35 = fb_StrConcat( &TMP$127$3, (void*)TMP$123$2, -1ll, (void*)S$1, -1ll );
			fb_StrAssign( (void*)TMP$123$2, -1ll, (void*)vr$35, -1ll, 0 );
		}
		label$42:;
		__builtin_memset( &TMP$129$2, 0, 24ll );
		FBSTRING* vr$42 = fb_StrConcat( &TMP$129$2, (void*)TMP$123$2, -1ll, (void*)"\x0D\x0A", 3ll );
		fb_StrAssign( (void*)TMP$123$2, -1ll, (void*)vr$42, -1ll, 0 );
	}
	label$41:;
}

static void SECTIONINDENT( void )
{
	label$48:;
	*(int64*)((uint8*)((uint8*)&CTX$ + (*(int64*)((uint8*)&CTX$ + 5160ll) * 40ll)) + 32ll) = *(int64*)((uint8*)((uint8*)&CTX$ + (*(int64*)((uint8*)&CTX$ + 5160ll) * 40ll)) + 32ll) + 1ll;
	label$49:;
}

static void SECTIONUNINDENT( void )
{
	label$50:;
	*(int64*)((uint8*)((uint8*)&CTX$ + (*(int64*)((uint8*)&CTX$ + 5160ll) * 40ll)) + 32ll) = *(int64*)((uint8*)((uint8*)&CTX$ + (*(int64*)((uint8*)&CTX$ + 5160ll) * 40ll)) + 32ll) + -1ll;
	label$51:;
}

static int64 SECTIONINSIDEPROC( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$52:;
	fb$result$1 = (int64)-(*(int64*)((uint8*)&CTX$ + 5160ll) >= 2ll);
	label$53:;
	return fb$result$1;
}

static void SECTIONEND( void )
{
	label$54:;
	struct $12SECTIONENTRY* PARENT$1;
	struct $12SECTIONENTRY* CHILD$1;
	if( *(int64*)((uint8*)&CTX$ + 5160ll) <= 0ll ) goto label$57;
	{
		PARENT$1 = (struct $12SECTIONENTRY*)((uint8*)((uint8*)&CTX$ + (*(int64*)((uint8*)&CTX$ + 5160ll) * 40ll)) + -40ll);
		CHILD$1 = (struct $12SECTIONENTRY*)((uint8*)&CTX$ + (*(int64*)((uint8*)&CTX$ + 5160ll) * 40ll));
		if( *(int64*)((uint8*)CHILD$1 + 24ll) != 0ll ) goto label$59;
		{
			if( *(int64*)((uint8*)PARENT$1 + 24ll) == 0ll ) goto label$61;
			{
				fb_StrAssign( (void*)PARENT$1, -1ll, (void*)CHILD$1, -1ll, 0 );
				*(int64*)((uint8*)PARENT$1 + 24ll) = 0ll;
			}
			goto label$60;
			label$61:;
			{
				FBSTRING TMP$130$4;
				__builtin_memset( &TMP$130$4, 0, 24ll );
				FBSTRING* vr$19 = fb_StrConcat( &TMP$130$4, (void*)PARENT$1, -1ll, (void*)CHILD$1, -1ll );
				fb_StrAssign( (void*)PARENT$1, -1ll, (void*)vr$19, -1ll, 0 );
			}
			label$60:;
		}
		label$59:;
		label$58:;
	}
	label$57:;
	label$56:;
	*(int64*)((uint8*)&CTX$ + 5160ll) = *(int64*)((uint8*)&CTX$ + 5160ll) + -1ll;
	label$55:;
}

static int64 SECTIONGOSUB( int64 SECTION$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$62:;
	fb$result$1 = *(int64*)((uint8*)&CTX$ + 5160ll);
	*(int64*)((uint8*)&CTX$ + 5160ll) = SECTION$1;
	*(int64*)((uint8*)&CTX$ + 5168ll) = *(int64*)((uint8*)&CTX$ + 5168ll) + 1ll;
	label$63:;
	return fb$result$1;
}

static void SECTIONRETURN( int64 SECTION$1 )
{
	label$64:;
	*(int64*)((uint8*)&CTX$ + 5168ll) = *(int64*)((uint8*)&CTX$ + 5168ll) + -1ll;
	*(int64*)((uint8*)&CTX$ + 5160ll) = SECTION$1;
	label$65:;
}

static void HWRITELINE( FBSTRING* S$1, int64 NOLINE$1 )
{
	label$66:;
	static FBSTRING LN$1;
	if( (*(int64*)((uint8*)&ENV$ + 296ll) & (int64)-(NOLINE$1 == 0ll)) == 0ll ) goto label$69;
	{
		fb_StrAssign( (void*)&LN$1, -1ll, (void*)"#line ", 7ll, 0 );
		FBSTRING* vr$2 = fb_LongintToStr( *(int64*)((uint8*)&CTX$ + 5176ll) );
		fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$2, -1ll, 0 );
		fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" \x22", 3ll, 0 );
		fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)((uint8*)&CTX$ + 5184ll), -1ll, 0 );
		fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22", 2ll, 0 );
		SECTIONWRITELINE( &LN$1 );
	}
	label$69:;
	label$68:;
	SECTIONWRITELINE( S$1 );
	label$67:;
}

static void HUPDATECURRENTFILENAME( char* FILENAME$1 )
{
	label$70:;
	FBSTRING* vr$0 = HREPLACE( FILENAME$1, (char*)"\x5C", (char*)"\x5C\x5C" );
	fb_StrAssign( (void*)((uint8*)&CTX$ + 5184ll), -1ll, (void*)vr$0, -1ll, 0 );
	label$71:;
}

static void HWRITESTATICASSERT( FBSTRING* EXPR$1 )
{
	FBSTRING TMP$140$1;
	FBSTRING TMP$141$1;
	FBSTRING TMP$142$1;
	label$72:;
	int64 SECTION$1;
	if( (*(uint64*)((uint8*)&CTX$ + 5208ll) & 64ull) != 0ull ) goto label$75;
	{
		FBSTRING TMP$137$2;
		*(uint64*)((uint8*)&CTX$ + 5208ll) = *(uint64*)((uint8*)&CTX$ + 5208ll) | 64ull;
		int64 vr$2 = SECTIONGOSUB( 0ll );
		SECTION$1 = vr$2;
		__builtin_memset( &TMP$137$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$137$2, -1ll, (void*)"#define __FB_STATIC_ASSERT( expr ) extern int __$fb_structsizecheck[(expr) ? 1 : -1]", 85ll, 0 );
		HWRITELINE( &TMP$137$2, -1ll );
		fb_StrDelete( (FBSTRING*)&TMP$137$2 );
		SECTIONRETURN( SECTION$1 );
	}
	label$75:;
	label$74:;
	__builtin_memset( &TMP$142$1, 0, 24ll );
	__builtin_memset( &TMP$140$1, 0, 24ll );
	FBSTRING* vr$10 = fb_StrConcat( &TMP$140$1, (void*)"__FB_STATIC_ASSERT( ", 21ll, (void*)EXPR$1, -1ll );
	__builtin_memset( &TMP$141$1, 0, 24ll );
	FBSTRING* vr$13 = fb_StrConcat( &TMP$141$1, (void*)vr$10, -1ll, (void*)" );", 4ll );
	fb_StrAssign( (void*)&TMP$142$1, -1ll, (void*)vr$13, -1ll, 0 );
	HWRITELINE( &TMP$142$1, 0ll );
	fb_StrDelete( (FBSTRING*)&TMP$142$1 );
	label$73:;
}

static void HAPPENDCTORATTRIB( FBSTRING* LN$1, struct $8FBSYMBOL* PROC$1, int64 IN_FRONT$1 )
{
	label$76:;
	int64 PRIORITY$1;
	if( (*(int64*)((uint8*)PROC$1 + 24ll) & 196608ll) == 0ll ) goto label$79;
	{
		if( IN_FRONT$1 != 0ll ) goto label$81;
		{
			fb_StrConcatByref( (void*)LN$1, -1ll, (void*)" ", 2ll, 0 );
		}
		label$81:;
		label$80:;
		fb_StrConcatByref( (void*)LN$1, -1ll, (void*)"__attribute__(( ", 17ll, 0 );
		if( (*(int64*)((uint8*)PROC$1 + 24ll) & 65536ll) == 0ll ) goto label$83;
		{
			fb_StrConcatByref( (void*)LN$1, -1ll, (void*)"constructor", 12ll, 0 );
		}
		goto label$82;
		label$83:;
		{
			fb_StrConcatByref( (void*)LN$1, -1ll, (void*)"destructor", 11ll, 0 );
		}
		label$82:;
		PRIORITY$1 = *(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 208ll) + 112ll);
		if( PRIORITY$1 == 0ll ) goto label$85;
		{
			FBSTRING TMP$149$3;
			FBSTRING TMP$150$3;
			FBSTRING* vr$6 = fb_LongintToStr( PRIORITY$1 );
			__builtin_memset( &TMP$149$3, 0, 24ll );
			FBSTRING* vr$9 = fb_StrConcat( &TMP$149$3, (void*)"( ", 3ll, (void*)vr$6, -1ll );
			__builtin_memset( &TMP$150$3, 0, 24ll );
			FBSTRING* vr$12 = fb_StrConcat( &TMP$150$3, (void*)vr$9, -1ll, (void*)" )", 3ll );
			fb_StrConcatByref( (void*)LN$1, -1ll, (void*)vr$12, -1ll, 0 );
		}
		label$85:;
		label$84:;
		fb_StrConcatByref( (void*)LN$1, -1ll, (void*)" ))", 4ll, 0 );
		if( IN_FRONT$1 == 0ll ) goto label$87;
		{
			fb_StrConcatByref( (void*)LN$1, -1ll, (void*)" ", 2ll, 0 );
		}
		label$87:;
		label$86:;
	}
	label$79:;
	label$78:;
	label$77:;
}

static FBSTRING* HGETMANGLEDNAMEFORASM( struct $8FBSYMBOL* SYM$1, int64 UNDERSCORE_PREFIX$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$88:;
	FBSTRING MANGLED$1;
	__builtin_memset( &MANGLED$1, 0, 24ll );
	char* vr$2 = SYMBGETMANGLEDNAME( SYM$1 );
	fb_StrAssign( (void*)&MANGLED$1, -1ll, (void*)vr$2, 0ll, 0 );
	if( (UNDERSCORE_PREFIX$1 & *(int64*)((uint8*)&ENV$ + 584ll)) == 0ll ) goto label$91;
	{
		FBSTRING TMP$153$2;
		__builtin_memset( &TMP$153$2, 0, 24ll );
		FBSTRING* vr$8 = fb_StrConcat( &TMP$153$2, (void*)"_", 2ll, (void*)&MANGLED$1, -1ll );
		fb_StrAssign( (void*)&MANGLED$1, -1ll, (void*)vr$8, -1ll, 0 );
	}
	label$91:;
	label$90:;
	int64 vr$10 = FBGETCPUFAMILY(  );
	if( ((int64)-(vr$10 == 0ll) & (int64)-(*(int64*)SYM$1 == 3ll)) == 0ll ) goto label$93;
	{
		if( *(int64*)((uint8*)SYM$1 + 152ll) != 1ll ) goto label$95;
		{
			fb_StrConcatAssign( (void*)&MANGLED$1, -1ll, (void*)"@", 2ll, 0 );
			int64 vr$17 = SYMBPROCCALCSTDCALLSUFFIXN( SYM$1 );
			FBSTRING* vr$18 = fb_LongintToStr( vr$17 );
			fb_StrConcatAssign( (void*)&MANGLED$1, -1ll, (void*)vr$18, -1ll, 0 );
		}
		label$95:;
		label$94:;
	}
	label$93:;
	label$92:;
	fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&MANGLED$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&MANGLED$1 );
	label$89:;
	FBSTRING* vr$24 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$24;
}

static int64 HNEEDALIAS( struct $8FBSYMBOL* PROC$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$96:;
	fb$result$1 = 0ll;
	int64 vr$1 = FBGETCPUFAMILY(  );
	if( vr$1 == 0ll ) goto label$99;
	{
		goto label$97;
	}
	label$99:;
	label$98:;
	{
		$13FB_COMPTARGET TMP$155$2;
		TMP$155$2 = *($13FB_COMPTARGET*)((uint8*)&ENV$ + 216ll);
		if( TMP$155$2 == 0ll ) goto label$102;
		label$103:;
		if( TMP$155$2 == 1ll ) goto label$102;
		label$104:;
		if( TMP$155$2 != 4ll ) goto label$101;
		label$102:;
		{
			if( *(int64*)((uint8*)PROC$1 + 152ll) != 6ll ) goto label$106;
			{
				goto label$97;
			}
			label$106:;
			label$105:;
		}
		goto label$100;
		label$101:;
		{
			goto label$97;
		}
		label$107:;
		label$100:;
	}
	{
		$11FB_FUNCMODE TMP$156$2;
		TMP$156$2 = *($11FB_FUNCMODE*)((uint8*)PROC$1 + 152ll);
		if( TMP$156$2 == 2ll ) goto label$110;
		label$111:;
		if( TMP$156$2 != 4ll ) goto label$109;
		label$110:;
		{
			fb$result$1 = -1ll;
		}
		goto label$108;
		label$109:;
		if( TMP$156$2 != 1ll ) goto label$112;
		label$113:;
		{
			fb$result$1 = -1ll;
		}
		label$112:;
		label$108:;
	}
	label$97:;
	return fb$result$1;
}

static FBSTRING* HEMITPROCHEADER( struct $8FBSYMBOL* PROC$1, $16EMITPROC_OPTIONS OPTIONS$1 )
{
	FBSTRING TMP$158$1;
	struct $8FBSYMBOL* TMP$176$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$114:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	FBSTRING MANGLED$1;
	__builtin_memset( &MANGLED$1, 0, 24ll );
	int64 DTYPE$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	if( OPTIONS$1 != 0ll ) goto label$117;
	{
		HAPPENDCTORATTRIB( &LN$1, PROC$1, -1ll );
	}
	label$117:;
	label$116:;
	if( (OPTIONS$1 & 2ll) != 0ll ) goto label$119;
	{
		if( (*(int64*)((uint8*)PROC$1 + 8ll) & 64ll) == 0ll ) goto label$121;
		{
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"static ", 8ll, 0 );
		}
		label$121:;
		label$120:;
	}
	label$119:;
	label$118:;
	FBSTRING* vr$10 = HEMITTYPE( *(int64*)((uint8*)PROC$1 + 160ll), *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 168ll) );
	__builtin_memset( &TMP$158$1, 0, 24ll );
	FBSTRING* vr$14 = fb_StrConcat( &TMP$158$1, (void*)&LN$1, -1ll, (void*)vr$10, -1ll );
	fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$14, -1ll, 0 );
	int64 vr$16 = FBGETCPUFAMILY(  );
	if( vr$16 != 0ll ) goto label$123;
	{
		{
			$11FB_FUNCMODE TMP$159$3;
			TMP$159$3 = *($11FB_FUNCMODE*)((uint8*)PROC$1 + 152ll);
			if( TMP$159$3 == 1ll ) goto label$126;
			label$127:;
			if( TMP$159$3 == 2ll ) goto label$126;
			label$128:;
			if( TMP$159$3 != 4ll ) goto label$125;
			label$126:;
			{
				{
					$13FB_COMPTARGET TMP$160$5;
					TMP$160$5 = *($13FB_COMPTARGET*)((uint8*)&ENV$ + 216ll);
					if( TMP$160$5 == 0ll ) goto label$131;
					label$132:;
					if( TMP$160$5 != 4ll ) goto label$130;
					label$131:;
					{
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" __stdcall", 11ll, 0 );
					}
					goto label$129;
					label$130:;
					{
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" __attribute__((stdcall))", 26ll, 0 );
					}
					label$133:;
					label$129:;
				}
			}
			goto label$124;
			label$125:;
			if( TMP$159$3 != 5ll ) goto label$134;
			label$135:;
			{
				{
					$13FB_COMPTARGET TMP$163$5;
					TMP$163$5 = *($13FB_COMPTARGET*)((uint8*)&ENV$ + 216ll);
					if( TMP$163$5 == 0ll ) goto label$138;
					label$139:;
					if( TMP$163$5 != 4ll ) goto label$137;
					label$138:;
					{
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" __thiscall", 12ll, 0 );
					}
					goto label$136;
					label$137:;
					{
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" __attribute__((thiscall))", 27ll, 0 );
					}
					label$140:;
					label$136:;
				}
			}
			goto label$124;
			label$134:;
			if( TMP$159$3 != 6ll ) goto label$141;
			label$142:;
			{
				{
					$13FB_COMPTARGET TMP$166$5;
					TMP$166$5 = *($13FB_COMPTARGET*)((uint8*)&ENV$ + 216ll);
					if( TMP$166$5 == 0ll ) goto label$145;
					label$146:;
					if( TMP$166$5 != 4ll ) goto label$144;
					label$145:;
					{
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" __fastcall", 12ll, 0 );
					}
					goto label$143;
					label$144:;
					{
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" __attribute__((fastcall))", 27ll, 0 );
					}
					label$147:;
					label$143:;
				}
			}
			label$141:;
			label$124:;
		}
	}
	label$123:;
	label$122:;
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" ", 2ll, 0 );
	char* vr$25 = SYMBGETMANGLEDNAME( PROC$1 );
	fb_StrAssign( (void*)&MANGLED$1, -1ll, (void*)vr$25, 0ll, 0 );
	if( (OPTIONS$1 & 2ll) == 0ll ) goto label$149;
	{
		fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"(*", 3ll, 0 );
		fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)&MANGLED$1, -1ll, 0 );
		fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)")", 2ll, 0 );
	}
	goto label$148;
	label$149:;
	{
		fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)&MANGLED$1, -1ll, 0 );
	}
	label$148:;
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"( ", 3ll, 0 );
	struct $8FBSYMBOL* HIDDEN$1;
	HIDDEN$1 = (struct $8FBSYMBOL*)0ull;
	int64 vr$35 = SYMBPROCRETURNSONSTACK( PROC$1 );
	if( vr$35 == 0ll ) goto label$151;
	{
		if( (OPTIONS$1 & 1ll) == 0ll ) goto label$153;
		{
			FBSTRING TMP$171$3;
			HIDDEN$1 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 64ll);
			FBSTRING* vr$55 = HEMITTYPE( ((((*(int64*)((uint8*)HIDDEN$1 + 56ll) & 511ll) & 31ll) | (((*(int64*)((uint8*)HIDDEN$1 + 56ll) & 511ll) & 480ll) + 32ll)) | (((*(int64*)((uint8*)HIDDEN$1 + 56ll) & 511ll) & 261632ll) << (1ll & 63ll))) | ((*(int64*)((uint8*)HIDDEN$1 + 56ll) & 511ll) & 32505856ll), HIDDEN$1 );
			__builtin_memset( &TMP$171$3, 0, 24ll );
			FBSTRING* vr$59 = fb_StrConcat( &TMP$171$3, (void*)&LN$1, -1ll, (void*)vr$55, -1ll );
			fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$59, -1ll, 0 );
		}
		goto label$152;
		label$153:;
		{
			FBSTRING TMP$172$3;
			FBSTRING TMP$173$3;
			FBSTRING TMP$174$3;
			HIDDEN$1 = *(struct $8FBSYMBOL**)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 208ll);
			FBSTRING* vr$81 = HEMITTYPE( ((((*(int64*)((uint8*)HIDDEN$1 + 56ll) & 511ll) & 31ll) | (((*(int64*)((uint8*)HIDDEN$1 + 56ll) & 511ll) & 480ll) + 32ll)) | (((*(int64*)((uint8*)HIDDEN$1 + 56ll) & 511ll) & 261632ll) << (1ll & 63ll))) | ((*(int64*)((uint8*)HIDDEN$1 + 56ll) & 511ll) & 32505856ll), *(struct $8FBSYMBOL**)((uint8*)HIDDEN$1 + 64ll) );
			__builtin_memset( &TMP$172$3, 0, 24ll );
			FBSTRING* vr$85 = fb_StrConcat( &TMP$172$3, (void*)&LN$1, -1ll, (void*)vr$81, -1ll );
			fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$85, -1ll, 0 );
			char* vr$87 = SYMBGETMANGLEDNAME( HIDDEN$1 );
			__builtin_memset( &TMP$173$3, 0, 24ll );
			FBSTRING* vr$90 = fb_StrConcat( &TMP$173$3, (void*)" ", 2ll, (void*)vr$87, 0ll );
			__builtin_memset( &TMP$174$3, 0, 24ll );
			FBSTRING* vr$94 = fb_StrConcat( &TMP$174$3, (void*)&LN$1, -1ll, (void*)vr$90, -1ll );
			fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$94, -1ll, 0 );
		}
		label$152:;
		if( (int64)*(int16*)((uint8*)PROC$1 + 120ll) <= 0ll ) goto label$155;
		{
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", ", 3ll, 0 );
		}
		label$155:;
		label$154:;
	}
	label$151:;
	label$150:;
	struct $8FBSYMBOL* PARAM$1;
	if( *(int64*)((uint8*)PROC$1 + 152ll) != 4ll ) goto label$156;
	TMP$176$1 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 144ll);
	goto label$1204;
	label$156:;
	TMP$176$1 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 136ll);
	label$1204:;
	PARAM$1 = TMP$176$1;
	if( ((int64)-(HIDDEN$1 == (struct $8FBSYMBOL*)0ull) & (int64)-(PARAM$1 == (struct $8FBSYMBOL*)0ull)) == 0ll ) goto label$158;
	{
		fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"void", 5ll, 0 );
	}
	label$158:;
	label$157:;
	label$159:;
	if( PARAM$1 == (struct $8FBSYMBOL*)0ull ) goto label$160;
	{
		struct $8FBSYMBOL* TMP$181$2;
		if( *(int64*)((uint8*)PARAM$1 + 96ll) != 4ll ) goto label$162;
		{
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"...", 4ll, 0 );
		}
		goto label$161;
		label$162:;
		{
			if( (*(int64*)((uint8*)PARAM$1 + 24ll) & 524288ll) == 0ll ) goto label$164;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"char**", 7ll, 0 );
			}
			goto label$163;
			label$164:;
			{
				_Z21SYMBGETREALPARAMDTYPEP8FBSYMBOLRu7INTEGERRS0_( PARAM$1, &DTYPE$1, &SUBTYPE$1 );
				FBSTRING* vr$113 = HEMITTYPE( DTYPE$1, SUBTYPE$1 );
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$113, -1ll, 0 );
			}
			label$163:;
			if( (OPTIONS$1 & 1ll) != 0ll ) goto label$166;
			{
				FBSTRING TMP$179$4;
				FBSTRING TMP$180$4;
				char* vr$117 = SYMBGETMANGLEDNAME( *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 104ll) );
				__builtin_memset( &TMP$179$4, 0, 24ll );
				FBSTRING* vr$120 = fb_StrConcat( &TMP$179$4, (void*)" ", 2ll, (void*)vr$117, 0ll );
				__builtin_memset( &TMP$180$4, 0, 24ll );
				FBSTRING* vr$124 = fb_StrConcat( &TMP$180$4, (void*)&LN$1, -1ll, (void*)vr$120, -1ll );
				fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$124, -1ll, 0 );
			}
			label$166:;
			label$165:;
		}
		label$161:;
		if( *(int64*)((uint8*)PROC$1 + 152ll) != 4ll ) goto label$167;
		TMP$181$2 = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 304ll);
		goto label$1205;
		label$167:;
		TMP$181$2 = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 312ll);
		label$1205:;
		PARAM$1 = TMP$181$2;
		if( PARAM$1 == (struct $8FBSYMBOL*)0ull ) goto label$169;
		{
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", ", 3ll, 0 );
		}
		label$169:;
		label$168:;
	}
	goto label$159;
	label$160:;
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" )", 3ll, 0 );
	if( ((int64)-((OPTIONS$1 & 2ll) == 0ll) & (int64)-((OPTIONS$1 & 1ll) != 0ll)) == 0ll ) goto label$171;
	{
		int64 vr$136 = HNEEDALIAS( PROC$1 );
		if( vr$136 == 0ll ) goto label$173;
		{
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" asm(\x22", 7ll, 0 );
			FBSTRING* vr$138 = HGETMANGLEDNAMEFORASM( PROC$1, -1ll );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$138, -1ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22)", 3ll, 0 );
		}
		label$173:;
		label$172:;
		HAPPENDCTORATTRIB( &LN$1, PROC$1, 0ll );
	}
	label$171:;
	label$170:;
	fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&LN$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&MANGLED$1 );
	fb_StrDelete( (FBSTRING*)&LN$1 );
	label$115:;
	FBSTRING* vr$147 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$147;
}

static FBSTRING* HGETUDTTAG( struct $8FBSYMBOL* SYM$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$174:;
	if( *(int64*)SYM$1 != 10ll ) goto label$177;
	{
		if( ((int64)*(int32*)((uint8*)SYM$1 + 208ll) & 1ll) == 0ll ) goto label$179;
		{
			fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)"union ", 7ll, 0 );
		}
		goto label$178;
		label$179:;
		{
			fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)"struct ", 8ll, 0 );
		}
		label$178:;
	}
	label$177:;
	label$176:;
	label$175:;
	FBSTRING* vr$8 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$8;
}

static FBSTRING* HGETUDTID( struct $8FBSYMBOL* SYM$1 )
{
	FBSTRING TMP$188$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$180:;
	if( ((*(int64*)((uint8*)SYM$1 + 56ll) & 32505856ll) >> (20ll & 63ll)) != 19ll ) goto label$183;
	{
		{
			$19FB_CVA_LIST_TYPEDEF TMP$186$3;
			$19FB_CVA_LIST_TYPEDEF vr$6 = SYMBGETVALISTTYPE( *(int64*)((uint8*)SYM$1 + 56ll), *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 64ll) );
			TMP$186$3 = vr$6;
			if( TMP$186$3 == 3ll ) goto label$186;
			label$187:;
			if( TMP$186$3 == 4ll ) goto label$186;
			label$188:;
			if( TMP$186$3 != 5ll ) goto label$185;
			label$186:;
			{
				fb_StrAssign( (void*)&fb$result$1, -1ll, *(void**)((uint8*)SYM$1 + 40ll), 0ll, 0 );
				goto label$181;
			}
			label$185:;
			label$184:;
		}
	}
	label$183:;
	label$182:;
	char* vr$9 = SYMBGETMANGLEDNAME( SYM$1 );
	__builtin_memset( &TMP$188$1, 0, 24ll );
	FBSTRING* vr$12 = fb_StrConcat( &TMP$188$1, (void*)"$", 2ll, (void*)vr$9, 0ll );
	fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$12, -1ll, 0 );
	label$181:;
	FBSTRING* vr$15 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$15;
}

static FBSTRING* HGETUDTNAME( struct $8FBSYMBOL* SYM$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$189:;
	FBSTRING* vr$1 = HGETUDTTAG( SYM$1 );
	fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$1, -1ll, 0 );
	FBSTRING* vr$3 = HGETUDTID( SYM$1 );
	fb_StrConcatAssign( (void*)&fb$result$1, -1ll, (void*)vr$3, -1ll, 0 );
	label$190:;
	FBSTRING* vr$6 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$6;
}

static void HEMITUDT( struct $8FBSYMBOL* S$1, int64 IS_PTR$1 )
{
	label$191:;
	int64 SECTION$1;
	if( S$1 != (struct $8FBSYMBOL*)0ull ) goto label$194;
	{
		goto label$192;
	}
	label$194:;
	label$193:;
	if( (*(int64*)((uint8*)S$1 + 24ll) & 67108864ll) == 0ll ) goto label$196;
	{
		goto label$192;
	}
	label$196:;
	label$195:;
	if( (*(int64*)((uint8*)S$1 + 8ll) & 128ll) == 0ll ) goto label$198;
	{
		SECTION$1 = (int64)*(uint16*)((uint8*)S$1 + 72ll) + 1ll;
		if( (int64)*(uint16*)((uint8*)S$1 + 72ll) != 0ll ) goto label$200;
		{
			SECTION$1 = SECTION$1 + 1ll;
		}
		goto label$199;
		label$200:;
		if( *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)S$1 + 248ll) != (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll) ) goto label$201;
		{
			SECTION$1 = SECTION$1 + 1ll;
		}
		label$201:;
		label$199:;
		if( SECTION$1 <= *(int64*)((uint8*)&CTX$ + 5160ll) ) goto label$203;
		{
			SECTION$1 = *(int64*)((uint8*)&CTX$ + 5160ll);
		}
		label$203:;
		label$202:;
	}
	goto label$197;
	label$198:;
	{
		SECTION$1 = 0ll;
	}
	label$197:;
	int64 vr$14 = SECTIONGOSUB( SECTION$1 );
	SECTION$1 = vr$14;
	{
		uint64 TMP$189$2;
		TMP$189$2 = *(uint64*)S$1;
		goto label$205;
		label$206:;
		{
			FBSTRING TMP$192$3;
			FBSTRING TMP$193$3;
			FBSTRING TMP$194$3;
			FBSTRING TMP$195$3;
			FBSTRING TMP$196$3;
			*($12FB_SYMBSTATS*)((uint8*)S$1 + 24ll) = *(int64*)((uint8*)S$1 + 24ll) | 67108864ll;
			__builtin_memset( &TMP$196$3, 0, 24ll );
			FBSTRING* vr$20 = HGETUDTNAME( S$1 );
			FBSTRING* vr$21 = HEMITTYPE( 10ll, (struct $8FBSYMBOL*)0ull );
			__builtin_memset( &TMP$192$3, 0, 24ll );
			FBSTRING* vr$24 = fb_StrConcat( &TMP$192$3, (void*)"typedef ", 9ll, (void*)vr$21, -1ll );
			__builtin_memset( &TMP$193$3, 0, 24ll );
			FBSTRING* vr$27 = fb_StrConcat( &TMP$193$3, (void*)vr$24, -1ll, (void*)" ", 2ll );
			__builtin_memset( &TMP$194$3, 0, 24ll );
			FBSTRING* vr$30 = fb_StrConcat( &TMP$194$3, (void*)vr$27, -1ll, (void*)vr$20, -1ll );
			__builtin_memset( &TMP$195$3, 0, 24ll );
			FBSTRING* vr$33 = fb_StrConcat( &TMP$195$3, (void*)vr$30, -1ll, (void*)";", 2ll );
			fb_StrAssign( (void*)&TMP$196$3, -1ll, (void*)vr$33, -1ll, 0 );
			HWRITELINE( &TMP$196$3, 0ll );
			fb_StrDelete( (FBSTRING*)&TMP$196$3 );
		}
		goto label$204;
		label$207:;
		{
			HEMITSTRUCT( S$1, IS_PTR$1 );
		}
		goto label$204;
		label$208:;
		{
			if( (*(int64*)((uint8*)S$1 + 24ll) & 16384ll) == 0ll ) goto label$210;
			{
				FBSTRING DECL$4;
				FBSTRING* vr$39 = HEMITPROCHEADER( S$1, 3ll );
				fb_StrInit( (void*)&DECL$4, -1ll, (void*)vr$39, -1ll, 0 );
				if( (*(int64*)((uint8*)S$1 + 24ll) & 67108864ll) != 0ll ) goto label$212;
				{
					FBSTRING TMP$197$5;
					FBSTRING TMP$198$5;
					FBSTRING TMP$199$5;
					__builtin_memset( &TMP$199$5, 0, 24ll );
					__builtin_memset( &TMP$197$5, 0, 24ll );
					FBSTRING* vr$47 = fb_StrConcat( &TMP$197$5, (void*)"typedef ", 9ll, (void*)&DECL$4, -1ll );
					__builtin_memset( &TMP$198$5, 0, 24ll );
					FBSTRING* vr$50 = fb_StrConcat( &TMP$198$5, (void*)vr$47, -1ll, (void*)";", 2ll );
					fb_StrAssign( (void*)&TMP$199$5, -1ll, (void*)vr$50, -1ll, 0 );
					HWRITELINE( &TMP$199$5, 0ll );
					fb_StrDelete( (FBSTRING*)&TMP$199$5 );
					*($12FB_SYMBSTATS*)((uint8*)S$1 + 24ll) = *(int64*)((uint8*)S$1 + 24ll) | 67108864ll;
				}
				label$212:;
				label$211:;
				fb_StrDelete( (FBSTRING*)&DECL$4 );
			}
			label$210:;
			label$209:;
		}
		goto label$204;
		label$205:;
		static const void* tmp$681[8ll] = {
			&&label$208,
			&&label$204,
			&&label$204,
			&&label$204,
			&&label$204,
			&&label$204,
			&&label$206,
			&&label$207,
		};
		if( (TMP$189$2 - 3ull) > 7ull ) goto label$204;
		goto *tmp$681[TMP$189$2 - 3ull];
		label$204:;
	}
	SECTIONRETURN( SECTION$1 );
	label$192:;
}

static FBSTRING* HEMITARRAYDECL( struct $8FBSYMBOL* SYM$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$213:;
	FBSTRING S$1;
	__builtin_memset( &S$1, 0, 24ll );
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 512ll) == 0ll ) goto label$216;
	{
		fb_StrDelete( (FBSTRING*)&S$1 );
		goto label$214;
	}
	label$216:;
	label$215:;
	{
		$12FB_SYMBCLASS TMP$200$2;
		TMP$200$2 = *($12FB_SYMBCLASS*)SYM$1;
		if( TMP$200$2 == 1ll ) goto label$219;
		label$220:;
		if( TMP$200$2 != 12ll ) goto label$218;
		label$219:;
		{
			if( (*(int64*)((uint8*)SYM$1 + 8ll) & 16388ll) != 0ll ) goto label$222;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$201$5;
					TMP$201$5 = *(int64*)((uint8*)SYM$1 + 104ll) + -1ll;
					goto label$223;
					label$226:;
					{
						FBSTRING TMP$204$6;
						FBSTRING TMP$205$6;
						FBSTRING TMP$206$6;
						FBSTRING* vr$18 = fb_LongintToStr( (*(int64*)((uint8*)((uint8*)*(struct $10FBARRAYDIM**)((uint8*)SYM$1 + 112ll) + (I$5 << (4ll & 63ll))) + 8ll) - *(int64*)((uint8*)*(struct $10FBARRAYDIM**)((uint8*)SYM$1 + 112ll) + (I$5 << (4ll & 63ll)))) + 1ll );
						__builtin_memset( &TMP$204$6, 0, 24ll );
						FBSTRING* vr$21 = fb_StrConcat( &TMP$204$6, (void*)"[", 2ll, (void*)vr$18, -1ll );
						__builtin_memset( &TMP$205$6, 0, 24ll );
						FBSTRING* vr$24 = fb_StrConcat( &TMP$205$6, (void*)vr$21, -1ll, (void*)"]", 2ll );
						__builtin_memset( &TMP$206$6, 0, 24ll );
						FBSTRING* vr$28 = fb_StrConcat( &TMP$206$6, (void*)&S$1, -1ll, (void*)vr$24, -1ll );
						fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$28, -1ll, 0 );
					}
					label$224:;
					I$5 = I$5 + 1ll;
					label$223:;
					if( I$5 <= TMP$201$5 ) goto label$226;
					label$225:;
				}
			}
			label$222:;
			label$221:;
		}
		label$218:;
		label$217:;
	}
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 262144ll) != 0ll ) goto label$228;
	{
		int64 LENGTH$2;
		LENGTH$2 = 0ll;
		{
			int64 TMP$207$3;
			TMP$207$3 = *(int64*)((uint8*)SYM$1 + 56ll) & 511ll;
			if( TMP$207$3 == 18ll ) goto label$231;
			label$232:;
			if( TMP$207$3 != 4ll ) goto label$230;
			label$231:;
			{
				LENGTH$2 = *(int64*)((uint8*)SYM$1 + 80ll);
			}
			goto label$229;
			label$230:;
			if( TMP$207$3 != 7ll ) goto label$233;
			label$234:;
			{
				LENGTH$2 = *(int64*)((uint8*)SYM$1 + 80ll) / *(int64*)((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + 400ll);
			}
			label$233:;
			label$229:;
		}
		if( LENGTH$2 <= 0ll ) goto label$236;
		{
			fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"[", 2ll, 0 );
			FBSTRING* vr$39 = fb_LongintToStr( LENGTH$2 );
			fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)vr$39, -1ll, 0 );
			fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"]", 2ll, 0 );
		}
		label$236:;
		label$235:;
	}
	label$228:;
	label$227:;
	fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&S$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&S$1 );
	label$214:;
	FBSTRING* vr$46 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$46;
}

static void HEMITVARDECL( int64 USE_EXTERN$1, struct $8FBSYMBOL* SYM$1, char* VARINI$1 )
{
	FBSTRING TMP$209$1;
	FBSTRING TMP$210$1;
	FBSTRING TMP$211$1;
	label$237:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	if( USE_EXTERN$1 == 0ll ) goto label$240;
	{
		fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"extern ", 8ll, 0 );
	}
	goto label$239;
	label$240:;
	if( ((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 2ll) != 0ll) & (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 56ll) == 0ll)) == 0ll ) goto label$241;
	{
		fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"static ", 8ll, 0 );
	}
	label$241:;
	label$239:;
	int64 DTYPE$1;
	__builtin_memset( &DTYPE$1, 0, 8ll );
	struct $8FBSYMBOL* SUBTYPE$1;
	__builtin_memset( &SUBTYPE$1, 0, 8ll );
	SYMBGETREALTYPE( SYM$1, &DTYPE$1, &SUBTYPE$1 );
	FBSTRING* vr$15 = HEMITTYPE( DTYPE$1, *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 64ll) );
	__builtin_memset( &TMP$209$1, 0, 24ll );
	FBSTRING* vr$19 = fb_StrConcat( &TMP$209$1, (void*)&LN$1, -1ll, (void*)vr$15, -1ll );
	fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$19, -1ll, 0 );
	char* vr$21 = SYMBGETMANGLEDNAME( SYM$1 );
	__builtin_memset( &TMP$210$1, 0, 24ll );
	FBSTRING* vr$24 = fb_StrConcat( &TMP$210$1, (void*)" ", 2ll, (void*)vr$21, 0ll );
	__builtin_memset( &TMP$211$1, 0, 24ll );
	FBSTRING* vr$28 = fb_StrConcat( &TMP$211$1, (void*)&LN$1, -1ll, (void*)vr$24, -1ll );
	fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$28, -1ll, 0 );
	FBSTRING* vr$30 = HEMITARRAYDECL( SYM$1 );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$30, -1ll, 0 );
	if( ((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 8ll) != 0ll) & ~USE_EXTERN$1) == 0ll ) goto label$243;
	{
		fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" __attribute__((common))", 25ll, 0 );
	}
	label$243:;
	label$242:;
	if( VARINI$1 == (char*)0ull ) goto label$245;
	{
		FBSTRING TMP$214$2;
		FBSTRING TMP$215$2;
		__builtin_memset( &TMP$214$2, 0, 24ll );
		FBSTRING* vr$40 = fb_StrConcat( &TMP$214$2, (void*)" = ", 4ll, (void*)VARINI$1, 0ll );
		__builtin_memset( &TMP$215$2, 0, 24ll );
		FBSTRING* vr$44 = fb_StrConcat( &TMP$215$2, (void*)&LN$1, -1ll, (void*)vr$40, -1ll );
		fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$44, -1ll, 0 );
	}
	label$245:;
	label$244:;
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)";", 2ll, 0 );
	HWRITELINE( &LN$1, 0ll );
	fb_StrDelete( (FBSTRING*)&LN$1 );
	label$238:;
}

static void HMAYBEEMITLOCALVAR( struct $8FBSYMBOL* SYM$1 )
{
	label$246:;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 16388ll) == 0ll ) goto label$249;
	{
		goto label$247;
	}
	label$249:;
	label$248:;
	if( ((int64)-(*(struct $7ASTNODE**)((uint8*)SYM$1 + 96ll) != (struct $7ASTNODE*)0ull) & (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 2ll) != 0ll)) == 0ll ) goto label$251;
	{
		IRHLFLUSHSTATICINITIALIZER( SYM$1 );
	}
	goto label$250;
	label$251:;
	{
		HEMITVARDECL( 0ll, SYM$1, (char*)0ull );
	}
	label$250:;
	label$247:;
}

static void HALLOCGLOBALVAR( struct $8FBSYMBOL* SYM$1 )
{
	label$252:;
	if( *(struct $7ASTNODE**)((uint8*)SYM$1 + 96ll) == (struct $7ASTNODE*)0ull ) goto label$255;
	{
		if( ((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 32ll) == 0ll) & (int64)-((*(int64*)((uint8*)SYM$1 + 24ll) & 2ll) == 0ll)) == 0ll ) goto label$257;
		{
			goto label$253;
		}
		label$257:;
		label$256:;
		IRHLFLUSHSTATICINITIALIZER( SYM$1 );
	}
	goto label$254;
	label$255:;
	{
		HEMITVARDECL( 0ll, SYM$1, (char*)0ull );
	}
	label$254:;
	label$253:;
}

static void HMAYBEEMITGLOBALVAR( struct $8FBSYMBOL* SYM$1 )
{
	label$258:;
	if( (((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 1024ll) != 0ll) | ((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 16ll) != 0ll) & (int64)-((*(int64*)((uint8*)SYM$1 + 24ll) & 2ll) == 0ll))) | (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 16388ll) != 0ll)) == 0ll ) goto label$261;
	{
		goto label$259;
	}
	label$261:;
	label$260:;
	{
		int64 TMP$216$2;
		TMP$216$2 = *(int64*)((uint8*)&CTX$ + 5512ll);
		if( TMP$216$2 != 1ll ) goto label$263;
		label$264:;
		{
			if( (*(int64*)((uint8*)SYM$1 + 8ll) & 56ll) == 0ll ) goto label$266;
			{
				HEMITVARDECL( -1ll, SYM$1, (char*)0ull );
			}
			goto label$265;
			label$266:;
			{
				HALLOCGLOBALVAR( SYM$1 );
			}
			label$265:;
		}
		goto label$262;
		label$263:;
		if( TMP$216$2 != 2ll ) goto label$267;
		label$268:;
		{
			if( (*(int64*)((uint8*)SYM$1 + 8ll) & 40ll) == 0ll ) goto label$270;
			{
				HALLOCGLOBALVAR( SYM$1 );
			}
			label$270:;
			label$269:;
		}
		label$267:;
		label$262:;
	}
	label$259:;
}

static void HMAYBEEMITGLOBALVAREXCEPTDATASTMT( struct $8FBSYMBOL* SYM$1 )
{
	label$271:;
	int64 vr$0 = SYMBISDATADESC( SYM$1 );
	if( vr$0 == 0ll ) goto label$274;
	{
		goto label$272;
	}
	label$274:;
	label$273:;
	HMAYBEEMITGLOBALVAR( SYM$1 );
	label$272:;
}

static void HMAYBEEMITPROCPROTO( struct $8FBSYMBOL* S$1 )
{
	FBSTRING TMP$217$1;
	FBSTRING TMP$218$1;
	label$275:;
	int64 SECTION$1;
	if( ((int64)-((*(int64*)((uint8*)S$1 + 24ll) & 16384ll) != 0ll) | (int64)-((*(int64*)((uint8*)S$1 + 24ll) & 2ll) == 0ll)) == 0ll ) goto label$278;
	{
		goto label$276;
	}
	label$278:;
	label$277:;
	char* vr$7 = SYMBGETMANGLEDNAME( S$1 );
	if( vr$7 != (char*)0ull ) goto label$280;
	{
		goto label$276;
	}
	label$280:;
	label$279:;
	int64 vr$8 = SECTIONGOSUB( 0ll );
	SECTION$1 = vr$8;
	__builtin_memset( &TMP$218$1, 0, 24ll );
	FBSTRING* vr$10 = HEMITPROCHEADER( S$1, 1ll );
	__builtin_memset( &TMP$217$1, 0, 24ll );
	FBSTRING* vr$13 = fb_StrConcat( &TMP$217$1, (void*)vr$10, -1ll, (void*)";", 2ll );
	fb_StrAssign( (void*)&TMP$218$1, -1ll, (void*)vr$13, -1ll, 0 );
	HWRITELINE( &TMP$218$1, 0ll );
	fb_StrDelete( (FBSTRING*)&TMP$218$1 );
	SECTIONRETURN( SECTION$1 );
	label$276:;
}

static void HEMITFIELDTYPES( struct $8FBSYMBOL* UDT$1 )
{
	label$281:;
	struct $8FBSYMBOL* FLD$1;
	struct $8FBSYMBOL* vr$0 = SYMBUDTGETFIRSTFIELD( UDT$1 );
	FLD$1 = vr$0;
	label$283:;
	if( FLD$1 == (struct $8FBSYMBOL*)0ull ) goto label$284;
	{
		HEMITUDT( *(struct $8FBSYMBOL**)((uint8*)FLD$1 + 64ll), (int64)-(((*(int64*)((uint8*)FLD$1 + 56ll) & 511ll) & 480ll) != 0ll) );
		struct $8FBSYMBOL* vr$6 = SYMBUDTGETNEXTFIELD( FLD$1 );
		FLD$1 = vr$6;
	}
	goto label$283;
	label$284:;
	label$282:;
}

static struct $8FBSYMBOL** HFINDPARENTANONALREADYONSTACK( struct $8FBSYMBOL* FLD$1 )
{
	struct $8FBSYMBOL** fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$285:;
	struct $8FBSYMBOL** ANONNODE$1;
	struct $8FBSYMBOL* PARENT$1;
	PARENT$1 = *(struct $8FBSYMBOL**)((uint8*)FLD$1 + 296ll);
	label$287:;
	{
		void* vr$3 = LISTGETTAIL( (struct $5TLIST*)((uint8*)&CTX$ + 5216ll) );
		ANONNODE$1 = (struct $8FBSYMBOL**)vr$3;
		label$290:;
		if( ANONNODE$1 == (struct $8FBSYMBOL**)0ull ) goto label$291;
		{
			if( *ANONNODE$1 != PARENT$1 ) goto label$293;
			{
				fb$result$1 = ANONNODE$1;
				goto label$286;
			}
			label$293:;
			label$292:;
			void* vr$5 = LISTGETPREV( (void*)ANONNODE$1 );
			ANONNODE$1 = (struct $8FBSYMBOL**)vr$5;
		}
		goto label$290;
		label$291:;
		PARENT$1 = *(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 296ll);
	}
	label$289:;
	if( PARENT$1 != (struct $8FBSYMBOL*)0ull ) goto label$287;
	label$288:;
	fb$result$1 = (struct $8FBSYMBOL**)0ull;
	label$286:;
	return fb$result$1;
}

static void HPUSHANONPARENTS( struct $8FBSYMBOL* BASEPARENT$1, struct $8FBSYMBOL* PARENT$1 )
{
	label$294:;
	if( PARENT$1 != BASEPARENT$1 ) goto label$297;
	{
		goto label$295;
	}
	label$297:;
	label$296:;
	HPUSHANONPARENTS( BASEPARENT$1, *(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 296ll) );
	if( ((int64)*(int32*)((uint8*)PARENT$1 + 208ll) & 1ll) == 0ll ) goto label$299;
	{
		FBSTRING TMP$220$2;
		__builtin_memset( &TMP$220$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$220$2, -1ll, (void*)"union {", 8ll, 0 );
		HWRITELINE( &TMP$220$2, -1ll );
		fb_StrDelete( (FBSTRING*)&TMP$220$2 );
	}
	goto label$298;
	label$299:;
	{
		FBSTRING TMP$222$2;
		__builtin_memset( &TMP$222$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$222$2, -1ll, (void*)"struct {", 9ll, 0 );
		HWRITELINE( &TMP$222$2, -1ll );
		fb_StrDelete( (FBSTRING*)&TMP$222$2 );
	}
	label$298:;
	SECTIONINDENT(  );
	void* vr$13 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&CTX$ + 5216ll) );
	*(struct $8FBSYMBOL**)vr$13 = PARENT$1;
	label$295:;
}

static void HPOPANONPARENTS( struct $8FBSYMBOL** ANONNODE$1 )
{
	label$300:;
	label$302:;
	void* vr$1 = LISTGETTAIL( (struct $5TLIST*)((uint8*)&CTX$ + 5216ll) );
	if( (uint64)vr$1 == (uint64)ANONNODE$1 ) goto label$303;
	{
		FBSTRING TMP$224$2;
		SECTIONUNINDENT(  );
		__builtin_memset( &TMP$224$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$224$2, -1ll, (void*)"};", 3ll, 0 );
		HWRITELINE( &TMP$224$2, -1ll );
		fb_StrDelete( (FBSTRING*)&TMP$224$2 );
		void* vr$7 = LISTGETTAIL( (struct $5TLIST*)((uint8*)&CTX$ + 5216ll) );
		LISTDELNODE( (struct $5TLIST*)((uint8*)&CTX$ + 5216ll), vr$7 );
	}
	goto label$302;
	label$303:;
	label$301:;
}

static void HEMITSTRUCTWITHFIELDS( struct $8FBSYMBOL* S$1 )
{
	label$304:;
	int64 SKIP$1;
	int64 DTYPE$1;
	int64 ALIGN$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	struct $8FBSYMBOL* FLD$1;
	struct $8FBSYMBOL** ANONNODE$1;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	struct $8FBSYMBOL* vr$1 = SYMBUDTGETFIRSTFIELD( S$1 );
	FLD$1 = vr$1;
	label$306:;
	if( FLD$1 == (struct $8FBSYMBOL*)0ull ) goto label$307;
	{
		if( *(struct $8FBSYMBOL**)((uint8*)FLD$1 + 296ll) != S$1 ) goto label$309;
		{
			HPOPANONPARENTS( (struct $8FBSYMBOL**)0ull );
		}
		goto label$308;
		label$309:;
		{
			struct $8FBSYMBOL* TMP$225$3;
			struct $8FBSYMBOL** vr$3 = HFINDPARENTANONALREADYONSTACK( FLD$1 );
			ANONNODE$1 = vr$3;
			HPOPANONPARENTS( ANONNODE$1 );
			if( ANONNODE$1 == (struct $8FBSYMBOL**)0ull ) goto label$310;
			TMP$225$3 = *ANONNODE$1;
			goto label$1206;
			label$310:;
			TMP$225$3 = S$1;
			label$1206:;
			HPUSHANONPARENTS( TMP$225$3, *(struct $8FBSYMBOL**)((uint8*)FLD$1 + 296ll) );
		}
		label$308:;
		SKIP$1 = (int64)-((*(int64*)((uint8*)FLD$1 + 8ll) & 4ll) != 0ll);
		if( SKIP$1 != 0ll ) goto label$312;
		{
			FBSTRING TMP$226$3;
			FBSTRING TMP$227$3;
			int64 TMP$231$3;
			DTYPE$1 = *(int64*)((uint8*)FLD$1 + 56ll) & 511ll;
			SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)FLD$1 + 64ll);
			FBSTRING* vr$12 = HEMITTYPE( DTYPE$1, SUBTYPE$1 );
			fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$12, -1ll, 0 );
			__builtin_memset( &TMP$226$3, 0, 24ll );
			FBSTRING* vr$17 = fb_StrConcat( &TMP$226$3, (void*)" ", 2ll, *(void**)((uint8*)FLD$1 + 32ll), 0ll );
			__builtin_memset( &TMP$227$3, 0, 24ll );
			FBSTRING* vr$21 = fb_StrConcat( &TMP$227$3, (void*)&LN$1, -1ll, (void*)vr$17, -1ll );
			fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$21, -1ll, 0 );
			FBSTRING* vr$23 = HEMITARRAYDECL( FLD$1 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$23, -1ll, 0 );
			ALIGN$1 = (int64)*(uint8*)((uint8*)S$1 + 213ll);
			if( ALIGN$1 <= 0ll ) goto label$314;
			{
				int64 TMP$228$4;
				int64 vr$27 = TYPECALCNATURALALIGN( DTYPE$1, SUBTYPE$1 );
				SKIP$1 = (int64)-(ALIGN$1 >= vr$27);
				if( (DTYPE$1 & 480ll) == 0ll ) goto label$315;
				TMP$228$4 = 24ll;
				goto label$1207;
				label$315:;
				TMP$228$4 = DTYPE$1 & 31ll;
				label$1207:;
				if( TMP$228$4 != 20ll ) goto label$317;
				{
					uint8 FIELDUDTALIGN$5;
					FIELDUDTALIGN$5 = *(uint8*)((uint8*)SUBTYPE$1 + 213ll);
					if( (int64)FIELDUDTALIGN$5 <= 0ll ) goto label$319;
					{
						SKIP$1 = SKIP$1 | (int64)-(ALIGN$1 >= (int64)FIELDUDTALIGN$5);
					}
					label$319:;
					label$318:;
				}
				label$317:;
				label$316:;
				if( SKIP$1 != 0ll ) goto label$321;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" __attribute__((packed, aligned(", 33ll, 0 );
					FBSTRING* vr$37 = fb_LongintToStr( ALIGN$1 );
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$37, -1ll, 0 );
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)")))", 4ll, 0 );
				}
				label$321:;
				label$320:;
			}
			label$314:;
			label$313:;
			if( ALIGN$1 <= 0ll ) goto label$322;
			TMP$231$3 = (int64)-(SKIP$1 != 0ll);
			goto label$1208;
			label$322:;
			TMP$231$3 = -1ll;
			label$1208:;
			if( TMP$231$3 == 0ll ) goto label$324;
			{
				int64 TMP$232$4;
				if( (DTYPE$1 & 480ll) == 0ll ) goto label$325;
				TMP$232$4 = 24ll;
				goto label$1209;
				label$325:;
				TMP$232$4 = DTYPE$1 & 31ll;
				label$1209:;
				if( TMP$232$4 != 20ll ) goto label$327;
				{
					int64 TMP$233$5;
					int64 TMP$234$5;
					int64 EFFECTIVEALIGN$5;
					int64 vr$43 = TYPECALCNATURALALIGN( DTYPE$1, SUBTYPE$1 );
					EFFECTIVEALIGN$5 = vr$43;
					if( ALIGN$1 <= 0ll ) goto label$328;
					TMP$233$5 = (int64)-(ALIGN$1 < EFFECTIVEALIGN$5);
					goto label$1210;
					label$328:;
					TMP$233$5 = 0ll;
					label$1210:;
					if( TMP$233$5 == 0ll ) goto label$330;
					{
						EFFECTIVEALIGN$5 = ALIGN$1;
					}
					label$330:;
					label$329:;
					uint8 FIELDUDTALIGN$5;
					FIELDUDTALIGN$5 = *(uint8*)((uint8*)SUBTYPE$1 + 213ll);
					if( (int64)FIELDUDTALIGN$5 <= 0ll ) goto label$331;
					TMP$234$5 = (int64)-(EFFECTIVEALIGN$5 > (int64)FIELDUDTALIGN$5);
					goto label$1211;
					label$331:;
					TMP$234$5 = 0ll;
					label$1211:;
					if( TMP$234$5 == 0ll ) goto label$333;
					{
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" __attribute__((aligned(", 25ll, 0 );
						FBSTRING* vr$50 = fb_LongintToStr( EFFECTIVEALIGN$5 );
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$50, -1ll, 0 );
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)")))", 4ll, 0 );
					}
					label$333:;
					label$332:;
				}
				label$327:;
				label$326:;
			}
			label$324:;
			label$323:;
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)";", 2ll, 0 );
			HWRITELINE( &LN$1, -1ll );
		}
		label$312:;
		label$311:;
		struct $8FBSYMBOL* vr$55 = SYMBUDTGETNEXTFIELD( FLD$1 );
		FLD$1 = vr$55;
	}
	goto label$306;
	label$307:;
	HPOPANONPARENTS( (struct $8FBSYMBOL**)0ull );
	fb_StrDelete( (FBSTRING*)&LN$1 );
	label$305:;
}

static void HEMITSTRUCT( struct $8FBSYMBOL* S$1, int64 IS_PTR$1 )
{
	FBSTRING TMP$245$1;
	FBSTRING TMP$248$1;
	FBSTRING TMP$249$1;
	FBSTRING TMP$250$1;
	FBSTRING TMP$251$1;
	FBSTRING TMP$252$1;
	label$334:;
	int64 EMIT_FIELDS$1;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	if( (*(int64*)((uint8*)S$1 + 24ll) & 134217728ll) == 0ll ) goto label$337;
	{
		if( IS_PTR$1 == 0ll ) goto label$339;
		{
			if( (*(int64*)((uint8*)S$1 + 24ll) & 2ll) != 0ll ) goto label$341;
			{
				FBSTRING TMP$236$4;
				FBSTRING TMP$237$4;
				*($12FB_SYMBSTATS*)((uint8*)S$1 + 24ll) = *(int64*)((uint8*)S$1 + 24ll) | 2ll;
				__builtin_memset( &TMP$237$4, 0, 24ll );
				FBSTRING* vr$9 = HGETUDTNAME( S$1 );
				__builtin_memset( &TMP$236$4, 0, 24ll );
				FBSTRING* vr$12 = fb_StrConcat( &TMP$236$4, (void*)vr$9, -1ll, (void*)";", 2ll );
				fb_StrAssign( (void*)&TMP$237$4, -1ll, (void*)vr$12, -1ll, 0 );
				HWRITELINE( &TMP$237$4, 0ll );
				fb_StrDelete( (FBSTRING*)&TMP$237$4 );
			}
			label$341:;
			label$340:;
			fb_StrDelete( (FBSTRING*)&LN$1 );
			goto label$335;
		}
		label$339:;
		label$338:;
	}
	label$337:;
	label$336:;
	*($12FB_SYMBSTATS*)((uint8*)S$1 + 24ll) = *(int64*)((uint8*)S$1 + 24ll) | 134217728ll;
	EMIT_FIELDS$1 = (int64)-(((int64)*(int32*)((uint8*)S$1 + 208ll) & 32768ll) == 0ll);
	if( EMIT_FIELDS$1 == 0ll ) goto label$343;
	{
		HEMITFIELDTYPES( S$1 );
	}
	label$343:;
	label$342:;
	if( (*(int64*)((uint8*)S$1 + 24ll) & 67108864ll) == 0ll ) goto label$345;
	{
		fb_StrDelete( (FBSTRING*)&LN$1 );
		goto label$335;
	}
	label$345:;
	label$344:;
	*($12FB_SYMBSTATS*)((uint8*)S$1 + 24ll) = *(int64*)((uint8*)S$1 + 24ll) | 67108864ll;
	FBSTRING* vr$30 = HGETUDTTAG( S$1 );
	fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$30, -1ll, 0 );
	if( ((int64)-(*(int64*)((uint8*)&ENV$ + 216ll) == 0ll) & (int64)-((int64)*(uint8*)((uint8*)S$1 + 213ll) > 0ll)) == 0ll ) goto label$347;
	{
		fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"__attribute__((gcc_struct)) ", 29ll, 0 );
	}
	label$347:;
	label$346:;
	FBSTRING* vr$38 = HGETUDTID( S$1 );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$38, -1ll, 0 );
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" {", 3ll, 0 );
	HWRITELINE( &LN$1, -1ll );
	SECTIONINDENT(  );
	if( EMIT_FIELDS$1 == 0ll ) goto label$349;
	{
		HEMITSTRUCTWITHFIELDS( S$1 );
	}
	goto label$348;
	label$349:;
	{
		FBSTRING TMP$242$2;
		FBSTRING TMP$243$2;
		FBSTRING TMP$244$2;
		__builtin_memset( &TMP$244$2, 0, 24ll );
		FBSTRING* vr$44 = fb_LongintToStr( *(int64*)((uint8*)S$1 + 80ll) );
		__builtin_memset( &TMP$242$2, 0, 24ll );
		FBSTRING* vr$47 = fb_StrConcat( &TMP$242$2, (void*)"uint8 __fb_struct_body[", 24ll, (void*)vr$44, -1ll );
		__builtin_memset( &TMP$243$2, 0, 24ll );
		FBSTRING* vr$50 = fb_StrConcat( &TMP$243$2, (void*)vr$47, -1ll, (void*)"];", 3ll );
		fb_StrAssign( (void*)&TMP$244$2, -1ll, (void*)vr$50, -1ll, 0 );
		HWRITELINE( &TMP$244$2, -1ll );
		fb_StrDelete( (FBSTRING*)&TMP$244$2 );
	}
	label$348:;
	SECTIONUNINDENT(  );
	__builtin_memset( &TMP$245$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$245$1, -1ll, (void*)"};", 3ll, 0 );
	HWRITELINE( &TMP$245$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$245$1 );
	*($12FB_SYMBSTATS*)((uint8*)S$1 + 24ll) = *(int64*)((uint8*)S$1 + 24ll) & -134217729ll;
	__builtin_memset( &TMP$252$1, 0, 24ll );
	FBSTRING* vr$63 = fb_ULongintToStr( *(uint64*)((uint8*)S$1 + 80ll) );
	FBSTRING* vr$64 = HGETUDTID( S$1 );
	FBSTRING* vr$65 = HGETUDTTAG( S$1 );
	__builtin_memset( &TMP$248$1, 0, 24ll );
	FBSTRING* vr$68 = fb_StrConcat( &TMP$248$1, (void*)"sizeof( ", 9ll, (void*)vr$65, -1ll );
	__builtin_memset( &TMP$249$1, 0, 24ll );
	FBSTRING* vr$71 = fb_StrConcat( &TMP$249$1, (void*)vr$68, -1ll, (void*)vr$64, -1ll );
	__builtin_memset( &TMP$250$1, 0, 24ll );
	FBSTRING* vr$74 = fb_StrConcat( &TMP$250$1, (void*)vr$71, -1ll, (void*)" ) == ", 7ll );
	__builtin_memset( &TMP$251$1, 0, 24ll );
	FBSTRING* vr$77 = fb_StrConcat( &TMP$251$1, (void*)vr$74, -1ll, (void*)vr$63, -1ll );
	fb_StrAssign( (void*)&TMP$252$1, -1ll, (void*)vr$77, -1ll, 0 );
	HWRITESTATICASSERT( &TMP$252$1 );
	fb_StrDelete( (FBSTRING*)&TMP$252$1 );
	fb_StrDelete( (FBSTRING*)&LN$1 );
	label$335:;
}

static void HWRITEX86F2I( FBSTRING* FNAME$1, int64 RTYPE$1, int64 PTYPE$1 )
{
	FBSTRING TMP$258$1;
	FBSTRING TMP$262$1;
	FBSTRING TMP$263$1;
	FBSTRING TMP$264$1;
	FBSTRING TMP$265$1;
	FBSTRING TMP$266$1;
	FBSTRING TMP$267$1;
	FBSTRING TMP$268$1;
	FBSTRING TMP$270$1;
	FBSTRING TMP$273$1;
	FBSTRING TMP$274$1;
	FBSTRING TMP$275$1;
	FBSTRING TMP$277$1;
	FBSTRING TMP$280$1;
	FBSTRING TMP$281$1;
	FBSTRING TMP$282$1;
	FBSTRING TMP$285$1;
	FBSTRING TMP$286$1;
	FBSTRING TMP$287$1;
	FBSTRING TMP$289$1;
	FBSTRING TMP$291$1;
	FBSTRING TMP$293$1;
	FBSTRING TMP$295$1;
	FBSTRING TMP$297$1;
	FBSTRING TMP$299$1;
	label$350:;
	FBSTRING RTYPE_STR$1;
	FBSTRING* vr$0 = HEMITTYPE( RTYPE$1, (struct $8FBSYMBOL*)0ull );
	fb_StrInit( (void*)&RTYPE_STR$1, -1ll, (void*)vr$0, -1ll, 0 );
	FBSTRING PTYPE_STR$1;
	FBSTRING* vr$2 = HEMITTYPE( PTYPE$1, (struct $8FBSYMBOL*)0ull );
	fb_StrInit( (void*)&PTYPE_STR$1, -1ll, (void*)vr$2, -1ll, 0 );
	FBSTRING RTYPE_SUFFIX$1;
	__builtin_memset( &RTYPE_SUFFIX$1, 0, 24ll );
	FBSTRING PTYPE_SUFFIX$1;
	__builtin_memset( &PTYPE_SUFFIX$1, 0, 24ll );
	if( *(int64*)((uint8*)&ENV$ + 264ll) != 1ll ) goto label$353;
	{
		{
			int64 TMP$253$3;
			int64 TMP$254$3;
			if( (RTYPE$1 & 480ll) == 0ll ) goto label$354;
			TMP$253$3 = 24ll;
			goto label$1212;
			label$354:;
			TMP$253$3 = RTYPE$1 & 31ll;
			label$1212:;
			TMP$254$3 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$253$3 * 56ll)) + 8ll);
			if( TMP$254$3 != 4ll ) goto label$356;
			label$357:;
			{
				fb_StrAssign( (void*)&RTYPE_SUFFIX$1, -1ll, (void*)"l", 2ll, 0 );
			}
			goto label$355;
			label$356:;
			if( TMP$254$3 != 8ll ) goto label$358;
			label$359:;
			{
				fb_StrAssign( (void*)&RTYPE_SUFFIX$1, -1ll, (void*)"q", 2ll, 0 );
			}
			label$358:;
			label$355:;
		}
		if( PTYPE$1 != 15ll ) goto label$361;
		{
			fb_StrAssign( (void*)&PTYPE_SUFFIX$1, -1ll, (void*)"s", 2ll, 0 );
		}
		goto label$360;
		label$361:;
		{
			fb_StrAssign( (void*)&PTYPE_SUFFIX$1, -1ll, (void*)"l", 2ll, 0 );
		}
		label$360:;
	}
	label$353:;
	label$352:;
	__builtin_memset( &TMP$258$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$258$1, -1ll, (void*)"", 1ll, 0 );
	HWRITELINE( &TMP$258$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$258$1 );
	__builtin_memset( &TMP$268$1, 0, 24ll );
	__builtin_memset( &TMP$262$1, 0, 24ll );
	FBSTRING* vr$22 = fb_StrConcat( &TMP$262$1, (void*)"static inline ", 15ll, (void*)&RTYPE_STR$1, -1ll );
	__builtin_memset( &TMP$263$1, 0, 24ll );
	FBSTRING* vr$25 = fb_StrConcat( &TMP$263$1, (void*)vr$22, -1ll, (void*)" fb_", 5ll );
	__builtin_memset( &TMP$264$1, 0, 24ll );
	FBSTRING* vr$28 = fb_StrConcat( &TMP$264$1, (void*)vr$25, -1ll, (void*)FNAME$1, -1ll );
	__builtin_memset( &TMP$265$1, 0, 24ll );
	FBSTRING* vr$31 = fb_StrConcat( &TMP$265$1, (void*)vr$28, -1ll, (void*)"( ", 3ll );
	__builtin_memset( &TMP$266$1, 0, 24ll );
	FBSTRING* vr$34 = fb_StrConcat( &TMP$266$1, (void*)vr$31, -1ll, (void*)&PTYPE_STR$1, -1ll );
	__builtin_memset( &TMP$267$1, 0, 24ll );
	FBSTRING* vr$37 = fb_StrConcat( &TMP$267$1, (void*)vr$34, -1ll, (void*)" value )", 9ll );
	fb_StrAssign( (void*)&TMP$268$1, -1ll, (void*)vr$37, -1ll, 0 );
	HWRITELINE( &TMP$268$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$268$1 );
	__builtin_memset( &TMP$270$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$270$1, -1ll, (void*)"{", 2ll, 0 );
	HWRITELINE( &TMP$270$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$270$1 );
	SECTIONINDENT(  );
	__builtin_memset( &TMP$275$1, 0, 24ll );
	__builtin_memset( &TMP$273$1, 0, 24ll );
	FBSTRING* vr$49 = fb_StrConcat( &TMP$273$1, (void*)"volatile ", 10ll, (void*)&RTYPE_STR$1, -1ll );
	__builtin_memset( &TMP$274$1, 0, 24ll );
	FBSTRING* vr$52 = fb_StrConcat( &TMP$274$1, (void*)vr$49, -1ll, (void*)" result;", 9ll );
	fb_StrAssign( (void*)&TMP$275$1, -1ll, (void*)vr$52, -1ll, 0 );
	HWRITELINE( &TMP$275$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$275$1 );
	__builtin_memset( &TMP$277$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$277$1, -1ll, (void*)"__asm__(", 9ll, 0 );
	HWRITELINE( &TMP$277$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$277$1 );
	SECTIONINDENT(  );
	__builtin_memset( &TMP$282$1, 0, 24ll );
	__builtin_memset( &TMP$280$1, 0, 24ll );
	FBSTRING* vr$64 = fb_StrConcat( &TMP$280$1, (void*)"\x22" "fld", 5ll, (void*)&PTYPE_SUFFIX$1, -1ll );
	__builtin_memset( &TMP$281$1, 0, 24ll );
	FBSTRING* vr$67 = fb_StrConcat( &TMP$281$1, (void*)vr$64, -1ll, (void*)" %1;\x22", 6ll );
	fb_StrAssign( (void*)&TMP$282$1, -1ll, (void*)vr$67, -1ll, 0 );
	HWRITELINE( &TMP$282$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$282$1 );
	__builtin_memset( &TMP$287$1, 0, 24ll );
	__builtin_memset( &TMP$285$1, 0, 24ll );
	FBSTRING* vr$75 = fb_StrConcat( &TMP$285$1, (void*)"\x22" "fistp", 7ll, (void*)&RTYPE_SUFFIX$1, -1ll );
	__builtin_memset( &TMP$286$1, 0, 24ll );
	FBSTRING* vr$78 = fb_StrConcat( &TMP$286$1, (void*)vr$75, -1ll, (void*)" %0;\x22", 6ll );
	fb_StrAssign( (void*)&TMP$287$1, -1ll, (void*)vr$78, -1ll, 0 );
	HWRITELINE( &TMP$287$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$287$1 );
	__builtin_memset( &TMP$289$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$289$1, -1ll, (void*)":\x22=m\x22 (result)", 15ll, 0 );
	HWRITELINE( &TMP$289$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$289$1 );
	__builtin_memset( &TMP$291$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$291$1, -1ll, (void*)":\x22m\x22 (value)", 13ll, 0 );
	HWRITELINE( &TMP$291$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$291$1 );
	__builtin_memset( &TMP$293$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$293$1, -1ll, (void*)":\x22st\x22", 6ll, 0 );
	HWRITELINE( &TMP$293$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$293$1 );
	SECTIONUNINDENT(  );
	__builtin_memset( &TMP$295$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$295$1, -1ll, (void*)");", 3ll, 0 );
	HWRITELINE( &TMP$295$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$295$1 );
	__builtin_memset( &TMP$297$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$297$1, -1ll, (void*)"return result;", 15ll, 0 );
	HWRITELINE( &TMP$297$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$297$1 );
	SECTIONUNINDENT(  );
	__builtin_memset( &TMP$299$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$299$1, -1ll, (void*)"}", 2ll, 0 );
	HWRITELINE( &TMP$299$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$299$1 );
	fb_StrDelete( (FBSTRING*)&PTYPE_SUFFIX$1 );
	fb_StrDelete( (FBSTRING*)&RTYPE_SUFFIX$1 );
	fb_StrDelete( (FBSTRING*)&PTYPE_STR$1 );
	fb_StrDelete( (FBSTRING*)&RTYPE_STR$1 );
	label$351:;
}

static void HWRITEGENERICF2I( FBSTRING* FNAME$1, int64 RTYPE$1, int64 PTYPE$1 )
{
	FBSTRING TMP$306$1;
	FBSTRING TMP$307$1;
	FBSTRING TMP$308$1;
	FBSTRING TMP$309$1;
	FBSTRING TMP$310$1;
	FBSTRING TMP$311$1;
	FBSTRING TMP$312$1;
	label$362:;
	FBSTRING CALLNAME$1;
	__builtin_memset( &CALLNAME$1, 0, 24ll );
	if( PTYPE$1 != 15ll ) goto label$365;
	{
		fb_StrAssign( (void*)&CALLNAME$1, -1ll, (void*)"nearbyintf", 11ll, 0 );
	}
	goto label$364;
	label$365:;
	{
		fb_StrAssign( (void*)&CALLNAME$1, -1ll, (void*)"nearbyint", 10ll, 0 );
	}
	label$364:;
	__builtin_memset( &TMP$312$1, 0, 24ll );
	FBSTRING* vr$5 = HEMITTYPE( RTYPE$1, (struct $8FBSYMBOL*)0ull );
	__builtin_memset( &TMP$306$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$306$1, (void*)"#define fb_", 12ll, (void*)FNAME$1, -1ll );
	__builtin_memset( &TMP$307$1, 0, 24ll );
	FBSTRING* vr$11 = fb_StrConcat( &TMP$307$1, (void*)vr$8, -1ll, (void*)"( value ) ((", 13ll );
	__builtin_memset( &TMP$308$1, 0, 24ll );
	FBSTRING* vr$14 = fb_StrConcat( &TMP$308$1, (void*)vr$11, -1ll, (void*)vr$5, -1ll );
	__builtin_memset( &TMP$309$1, 0, 24ll );
	FBSTRING* vr$17 = fb_StrConcat( &TMP$309$1, (void*)vr$14, -1ll, (void*)")__builtin_", 12ll );
	__builtin_memset( &TMP$310$1, 0, 24ll );
	FBSTRING* vr$20 = fb_StrConcat( &TMP$310$1, (void*)vr$17, -1ll, (void*)&CALLNAME$1, -1ll );
	__builtin_memset( &TMP$311$1, 0, 24ll );
	FBSTRING* vr$23 = fb_StrConcat( &TMP$311$1, (void*)vr$20, -1ll, (void*)"( value ))", 11ll );
	fb_StrAssign( (void*)&TMP$312$1, -1ll, (void*)vr$23, -1ll, 0 );
	HWRITELINE( &TMP$312$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$312$1 );
	fb_StrDelete( (FBSTRING*)&CALLNAME$1 );
	label$363:;
}

static void HWRITEF2I( FBSTRING* FNAME$1, int64 RTYPE$1, int64 PTYPE$1 )
{
	label$366:;
	int64 vr$0 = FBGETCPUFAMILY(  );
	if( vr$0 != 0ll ) goto label$369;
	{
		{
			if( RTYPE$1 == 11ll ) goto label$372;
			label$373:;
			if( RTYPE$1 != 13ll ) goto label$371;
			label$372:;
			{
				HWRITEX86F2I( FNAME$1, RTYPE$1, PTYPE$1 );
				goto label$367;
			}
			label$371:;
			label$370:;
		}
	}
	label$369:;
	label$368:;
	HWRITEGENERICF2I( FNAME$1, RTYPE$1, PTYPE$1 );
	label$367:;
}

static void HMAYBEEMITPROCEXPORT( struct $8FBSYMBOL* PROC$1 )
{
	label$374:;
	if( (*(int64*)((uint8*)PROC$1 + 8ll) & 256ll) != 0ll ) goto label$377;
	{
		goto label$375;
	}
	label$377:;
	label$376:;
	fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5336ll), -1ll, (void*)"\x09\x22", 3ll, 0 );
	fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5336ll), -1ll, (void*)"\x5Ct.ascii ", 10ll, 0 );
	fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5336ll), -1ll, (void*)"\x5C\x22 -export:\x5C\x5C\x5C\x22", 16ll, 0 );
	FBSTRING* vr$5 = HGETMANGLEDNAMEFORASM( PROC$1, 0ll );
	fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5336ll), -1ll, (void*)vr$5, -1ll, 0 );
	fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5336ll), -1ll, (void*)"\x5C\x5C\x5C\x22\x5C\x22", 7ll, 0 );
	fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5336ll), -1ll, (void*)"\x5Cn", 3ll, 0 );
	fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5336ll), -1ll, (void*)"\x22\x0A", 3ll, 0 );
	label$375:;
}

static int64 _EMITBEGIN( void )
{
	FBSTRING TMP$320$1;
	FBSTRING TMP$322$1;
	FBSTRING TMP$324$1;
	FBSTRING TMP$326$1;
	FBSTRING TMP$328$1;
	FBSTRING TMP$330$1;
	FBSTRING TMP$332$1;
	FBSTRING TMP$334$1;
	FBSTRING TMP$340$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$378:;
	int64 vr$2 = HFILEEXISTS( (char*)((uint8*)&ENV$ + 904ll) );
	if( vr$2 == 0ll ) goto label$381;
	{
		FBSTRING* vr$4 = fb_StrAllocTempDescZ( (char*)((uint8*)&ENV$ + 904ll) );
		fb_FileKill( (FBSTRING*)vr$4 );
	}
	label$381:;
	label$380:;
	int32 vr$5 = fb_FileFree(  );
	*(int64*)((uint8*)&ENV$ + 896ll) = (int64)vr$5;
	FBSTRING* vr$9 = fb_StrAllocTempDescZ( (char*)((uint8*)&ENV$ + 904ll) );
	int32 vr$10 = fb_FileOpen( (FBSTRING*)vr$9, 0u, 3u, 0u, (int32)*(int64*)((uint8*)&ENV$ + 896ll), 0 );
	if( (int64)vr$10 == 0ll ) goto label$383;
	{
		fb$result$1 = 0ll;
		goto label$379;
	}
	label$383:;
	label$382:;
	*(int64*)((uint8*)&CTX$ + 5160ll) = -1ll;
	*(int64*)((uint8*)&CTX$ + 5168ll) = 0ll;
	*(int64*)((uint8*)&CTX$ + 5176ll) = 0ll;
	*(uint64*)((uint8*)&CTX$ + 5208ll) = 0ull;
	*(int64*)((uint8*)&CTX$ + 5512ll) = 0ll;
	HUPDATECURRENTFILENAME( (char*)((uint8*)&ENV$ + 608ll) );
	SECTIONBEGIN(  );
	if( *(int64*)((uint8*)&ENV$ + 296ll) == 0ll ) goto label$385;
	{
		_EMITDBG( 113ll, (struct $8FBSYMBOL*)0ull, 0ll, (char*)0ull );
	}
	label$385:;
	label$384:;
	__builtin_memset( &TMP$320$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$320$1, -1ll, (void*)"typedef   signed char       int8;", 34ll, 0 );
	HWRITELINE( &TMP$320$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$320$1 );
	__builtin_memset( &TMP$322$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$322$1, -1ll, (void*)"typedef unsigned char      uint8;", 34ll, 0 );
	HWRITELINE( &TMP$322$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$322$1 );
	__builtin_memset( &TMP$324$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$324$1, -1ll, (void*)"typedef   signed short      int16;", 35ll, 0 );
	HWRITELINE( &TMP$324$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$324$1 );
	__builtin_memset( &TMP$326$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$326$1, -1ll, (void*)"typedef unsigned short     uint16;", 35ll, 0 );
	HWRITELINE( &TMP$326$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$326$1 );
	__builtin_memset( &TMP$328$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$328$1, -1ll, (void*)"typedef   signed int        int32;", 35ll, 0 );
	HWRITELINE( &TMP$328$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$328$1 );
	__builtin_memset( &TMP$330$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$330$1, -1ll, (void*)"typedef unsigned int       uint32;", 35ll, 0 );
	HWRITELINE( &TMP$330$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$330$1 );
	__builtin_memset( &TMP$332$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$332$1, -1ll, (void*)"typedef   signed long long  int64;", 35ll, 0 );
	HWRITELINE( &TMP$332$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$332$1 );
	__builtin_memset( &TMP$334$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$334$1, -1ll, (void*)"typedef unsigned long long uint64;", 35ll, 0 );
	HWRITELINE( &TMP$334$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$334$1 );
	int64 vr$45 = FBIS64BIT(  );
	if( vr$45 == 0ll ) goto label$387;
	{
		FBSTRING TMP$336$2;
		__builtin_memset( &TMP$336$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$336$2, -1ll, (void*)"typedef struct { char *data; int64 len; int64 size; } FBSTRING;", 64ll, 0 );
		HWRITELINE( &TMP$336$2, -1ll );
		fb_StrDelete( (FBSTRING*)&TMP$336$2 );
	}
	goto label$386;
	label$387:;
	{
		FBSTRING TMP$338$2;
		__builtin_memset( &TMP$338$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$338$2, -1ll, (void*)"typedef struct { char *data; int32 len; int32 size; } FBSTRING;", 64ll, 0 );
		HWRITELINE( &TMP$338$2, -1ll );
		fb_StrDelete( (FBSTRING*)&TMP$338$2 );
	}
	label$386:;
	__builtin_memset( &TMP$340$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$340$1, -1ll, (void*)"typedef int8 boolean;", 22ll, 0 );
	HWRITELINE( &TMP$340$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$340$1 );
	SECTIONBEGIN(  );
	fb$result$1 = -1ll;
	label$379:;
	return fb$result$1;
}

static void _EMITEND( void )
{
	label$388:;
	int64 SECTION$1;
	HUPDATECURRENTFILENAME( (char*)((uint8*)&ENV$ + 608ll) );
	int64 vr$1 = SECTIONGOSUB( 0ll );
	SECTION$1 = vr$1;
	if( (*(uint64*)((uint8*)&CTX$ + 5208ll) & 1ull) == 0ull ) goto label$391;
	{
		FBSTRING TMP$342$2;
		__builtin_memset( &TMP$342$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$342$2, -1ll, (void*)"F2I", 4ll, 0 );
		HWRITEF2I( &TMP$342$2, 11ll, 15ll );
		fb_StrDelete( (FBSTRING*)&TMP$342$2 );
		label$391:;
	}
	if( (*(uint64*)((uint8*)&CTX$ + 5208ll) & 2ull) == 0ull ) goto label$393;
	{
		FBSTRING TMP$344$2;
		__builtin_memset( &TMP$344$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$344$2, -1ll, (void*)"F2L", 4ll, 0 );
		HWRITEF2I( &TMP$344$2, 13ll, 15ll );
		fb_StrDelete( (FBSTRING*)&TMP$344$2 );
		label$393:;
	}
	if( (*(uint64*)((uint8*)&CTX$ + 5208ll) & 4ull) == 0ull ) goto label$395;
	{
		FBSTRING TMP$346$2;
		__builtin_memset( &TMP$346$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$346$2, -1ll, (void*)"F2UL", 5ll, 0 );
		HWRITEF2I( &TMP$346$2, 14ll, 15ll );
		fb_StrDelete( (FBSTRING*)&TMP$346$2 );
		label$395:;
	}
	if( (*(uint64*)((uint8*)&CTX$ + 5208ll) & 8ull) == 0ull ) goto label$397;
	{
		FBSTRING TMP$348$2;
		__builtin_memset( &TMP$348$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$348$2, -1ll, (void*)"D2I", 4ll, 0 );
		HWRITEF2I( &TMP$348$2, 11ll, 16ll );
		fb_StrDelete( (FBSTRING*)&TMP$348$2 );
		label$397:;
	}
	if( (*(uint64*)((uint8*)&CTX$ + 5208ll) & 16ull) == 0ull ) goto label$399;
	{
		FBSTRING TMP$350$2;
		__builtin_memset( &TMP$350$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$350$2, -1ll, (void*)"D2L", 4ll, 0 );
		HWRITEF2I( &TMP$350$2, 13ll, 16ll );
		fb_StrDelete( (FBSTRING*)&TMP$350$2 );
		label$399:;
	}
	if( (*(uint64*)((uint8*)&CTX$ + 5208ll) & 32ull) == 0ull ) goto label$401;
	{
		FBSTRING TMP$352$2;
		__builtin_memset( &TMP$352$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$352$2, -1ll, (void*)"D2UL", 5ll, 0 );
		HWRITEF2I( &TMP$352$2, 14ll, 16ll );
		fb_StrDelete( (FBSTRING*)&TMP$352$2 );
		label$401:;
	}
	SYMBFOREACHGLOBAL( 3ll, (tmp$43)&HMAYBEEMITPROCPROTO );
	*(int64*)((uint8*)&CTX$ + 5512ll) = 1ll;
	SYMBFOREACHGLOBAL( 1ll, (tmp$43)&HMAYBEEMITGLOBALVAREXCEPTDATASTMT );
	IRFOREACHDATASTMT( (tmp$43)&HMAYBEEMITGLOBALVAR );
	*(int64*)((uint8*)&CTX$ + 5512ll) = 2ll;
	SYMBFOREACHGLOBAL( 1ll, (tmp$43)&HMAYBEEMITGLOBALVAREXCEPTDATASTMT );
	IRFOREACHDATASTMT( (tmp$43)&HMAYBEEMITGLOBALVAR );
	SECTIONRETURN( SECTION$1 );
	if( (*(int64*)((uint8*)&ENV$ + 448ll) & (*(int64*)((uint8*)&ENV$ + 568ll) & 4ll)) == 0ll ) goto label$403;
	{
		SYMBFOREACHGLOBAL( 3ll, (tmp$43)&HMAYBEEMITPROCEXPORT );
		int64 vr$35 = fb_StrLen( (void*)((uint8*)&CTX$ + 5336ll), -1ll );
		if( vr$35 <= 0ll ) goto label$405;
		{
			FBSTRING TMP$354$3;
			FBSTRING TMP$355$3;
			FBSTRING TMP$356$3;
			FBSTRING TMP$358$3;
			__builtin_memset( &TMP$356$3, 0, 24ll );
			__builtin_memset( &TMP$354$3, 0, 24ll );
			FBSTRING* vr$40 = fb_StrConcat( &TMP$354$3, (void*)"\x0A__asm__( \x0A\x09\x22.section .drectve\x5Cn\x22\x0A", 35ll, (void*)((uint8*)&CTX$ + 5336ll), -1ll );
			__builtin_memset( &TMP$355$3, 0, 24ll );
			FBSTRING* vr$43 = fb_StrConcat( &TMP$355$3, (void*)vr$40, -1ll, (void*)");", 3ll );
			fb_StrAssign( (void*)&TMP$356$3, -1ll, (void*)vr$43, -1ll, 0 );
			HWRITELINE( &TMP$356$3, -1ll );
			fb_StrDelete( (FBSTRING*)&TMP$356$3 );
			__builtin_memset( &TMP$358$3, 0, 24ll );
			fb_StrAssign( (void*)&TMP$358$3, -1ll, (void*)"__asm__( \x22.text\x22 );", 20ll, 0 );
			HWRITELINE( &TMP$358$3, 0ll );
			fb_StrDelete( (FBSTRING*)&TMP$358$3 );
		}
		label$405:;
		label$404:;
		fb_StrAssign( (void*)((uint8*)&CTX$ + 5336ll), -1ll, (void*)"", 1ll, 0 );
	}
	label$403:;
	label$402:;
	SECTIONEND(  );
	if( *(int64*)((uint8*)&CTX$ + 24ll) != 0ll ) goto label$407;
	{
		int32 vr$54 = fb_FilePutStrLarge( (int32)*(int64*)((uint8*)&ENV$ + 896ll), 0ll, (void*)&CTX$, -1ll );
		if( (int64)vr$54 == 0ll ) goto label$409;
		{
		}
		label$409:;
		label$408:;
	}
	label$407:;
	label$406:;
	SECTIONEND(  );
	int32 vr$57 = fb_FileClose( (int32)*(int64*)((uint8*)&ENV$ + 896ll) );
	if( (int64)vr$57 == 0ll ) goto label$411;
	{
	}
	label$411:;
	label$410:;
	*(int64*)((uint8*)&ENV$ + 896ll) = 0ll;
	label$389:;
}

static int64 _GETOPTIONVALUE( $14IR_OPTIONVALUE OPT$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$412:;
	{
		if( OPT$1 != 1ll ) goto label$415;
		label$416:;
		{
			fb$result$1 = 0ll;
			goto label$413;
		}
		goto label$414;
		label$415:;
		{
			ERRREPORTEX( 21ll, (char*)"_GETOPTIONVALUE", 0ll, 1ll, (char*)0ull );
		}
		label$417:;
		label$414:;
	}
	label$413:;
	return fb$result$1;
}

static int64 _SUPPORTSOP( int64 OP$1, int64 DTYPE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$418:;
	{
		uint64 TMP$360$2;
		TMP$360$2 = (uint64)OP$1;
		goto label$421;
		label$422:;
		{
			fb$result$1 = 0ll;
		}
		goto label$420;
		label$423:;
		{
			fb$result$1 = -1ll;
		}
		goto label$420;
		label$421:;
		static const void* tmp$682[16ll] = {
			&&label$422,
			&&label$423,
			&&label$423,
			&&label$423,
			&&label$423,
			&&label$423,
			&&label$423,
			&&label$423,
			&&label$423,
			&&label$422,
			&&label$422,
			&&label$423,
			&&label$423,
			&&label$423,
			&&label$422,
			&&label$422,
		};
		if( (TMP$360$2 - 57ull) > 15ull ) goto label$423;
		goto *tmp$682[TMP$360$2 - 57ull];
		label$420:;
	}
	label$419:;
	return fb$result$1;
}

static void _PROCBEGIN( struct $8FBSYMBOL* PROC$1 )
{
	label$424:;
	*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 208ll) + 32ll) = *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 426904ll) + 8560ll);
	label$425:;
}

static void _PROCEND( struct $8FBSYMBOL* PROC$1 )
{
	label$426:;
	*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 208ll) + 40ll) = *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 426904ll) + 8560ll);
	label$427:;
}

static void _SCOPEBEGIN( struct $8FBSYMBOL* S$1 )
{
	label$428:;
	label$429:;
}

static void _SCOPEEND( struct $8FBSYMBOL* S$1 )
{
	label$430:;
	label$431:;
}

static int64 HISSTATICWITHDTOR( struct $8FBSYMBOL* SYM$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$432:;
	int64 vr$8 = SYMBHASDTOR( SYM$1 );
	fb$result$1 = ((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 2ll) != 0ll) & (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 262144ll) == 0ll)) & vr$8;
	label$433:;
	return fb$result$1;
}

static void _PROCALLOCSTATICVARS( struct $8FBSYMBOL* SYM$1 )
{
	label$434:;
	struct $8FBSYMBOL* DESC$1;
	int64 SECTION$1;
	int64 vr$0 = SECTIONGOSUB( 0ll );
	SECTION$1 = vr$0;
	label$436:;
	if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$437;
	{
		{
			$12FB_SYMBCLASS TMP$361$3;
			TMP$361$3 = *($12FB_SYMBCLASS*)SYM$1;
			if( TMP$361$3 != 15ll ) goto label$439;
			label$440:;
			{
				_PROCALLOCSTATICVARS( *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 112ll) );
			}
			goto label$438;
			label$439:;
			if( TMP$361$3 != 1ll ) goto label$441;
			label$442:;
			{
				int64 vr$3 = HISSTATICWITHDTOR( SYM$1 );
				if( vr$3 == 0ll ) goto label$444;
				{
					HMAYBEEMITLOCALVAR( SYM$1 );
					DESC$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 136ll);
					if( DESC$1 == (struct $8FBSYMBOL*)0ull ) goto label$446;
					{
						HMAYBEEMITLOCALVAR( DESC$1 );
					}
					label$446:;
					label$445:;
				}
				label$444:;
				label$443:;
			}
			label$441:;
			label$438:;
		}
		SYM$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 312ll);
	}
	goto label$436;
	label$437:;
	SECTIONRETURN( SECTION$1 );
	label$435:;
}

static void _SETVREGDATATYPE( struct $6IRVREG* VREG$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	label$447:;
	if( VREG$1 == (struct $6IRVREG*)0ull ) goto label$450;
	{
		*($11FB_DATATYPE*)((uint8*)VREG$1 + 8ll) = DTYPE$1;
		*(struct $8FBSYMBOL**)((uint8*)VREG$1 + 16ll) = SUBTYPE$1;
	}
	label$450:;
	label$449:;
	label$448:;
}

static FBSTRING* HEMITTYPE( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$451:;
	FBSTRING S$1;
	__builtin_memset( &S$1, 0, 24ll );
	int64 PTRCOUNT$1;
	$19FB_CVA_LIST_TYPEDEF vr$2 = SYMBGETVALISTTYPE( DTYPE$1, SUBTYPE$1 );
	if( vr$2 <= 1ll ) goto label$454;
	{
		{
			$19FB_CVA_LIST_TYPEDEF TMP$362$3;
			$19FB_CVA_LIST_TYPEDEF vr$3 = SYMBGETVALISTTYPE( DTYPE$1, SUBTYPE$1 );
			TMP$362$3 = vr$3;
			if( TMP$362$3 != 2ll ) goto label$456;
			label$457:;
			{
				DTYPE$1 = (((((DTYPE$1 & 31ll) | ((DTYPE$1 & 480ll) + -32ll)) | (((DTYPE$1 & 261632ll) >> (1ll & 63ll)) & 261632ll)) | (DTYPE$1 & 32505856ll)) & -32ll) | 19ll;
			}
			goto label$455;
			label$456:;
			{
				DTYPE$1 = (DTYPE$1 & -32ll) | 19ll;
			}
			label$458:;
			label$455:;
		}
	}
	label$454:;
	label$453:;
	PTRCOUNT$1 = (DTYPE$1 & 480ll) >> (5ll & 63ll);
	DTYPE$1 = DTYPE$1 & 31ll;
	{
		uint64 TMP$363$2;
		TMP$363$2 = (uint64)DTYPE$1;
		goto label$460;
		label$461:;
		{
			if( SUBTYPE$1 == (struct $8FBSYMBOL*)0ull ) goto label$463;
			{
				HEMITUDT( SUBTYPE$1, (int64)-(PTRCOUNT$1 > 0ll) );
				FBSTRING* vr$22 = HGETUDTNAME( SUBTYPE$1 );
				fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$22, -1ll, 0 );
			}
			goto label$462;
			label$463:;
			if( DTYPE$1 != 10ll ) goto label$464;
			{
				int64 TMP$364$4;
				if( (DTYPE$1 & 480ll) == 0ll ) goto label$465;
				TMP$364$4 = 24ll;
				goto label$1213;
				label$465:;
				TMP$364$4 = DTYPE$1 & 31ll;
				label$1213:;
				fb_StrAssign( (void*)&S$1, -1ll, *(void**)((int64)(char**)DTYPENAME$ + (*(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$364$4 * 56ll)) + 32ll) << (3ll & 63ll))), 0ll, 0 );
			}
			goto label$462;
			label$464:;
			{
				fb_StrAssign( (void*)&S$1, -1ll, *(void**)DTYPENAME$, 0ll, 0 );
			}
			label$462:;
		}
		goto label$459;
		label$466:;
		{
			PTRCOUNT$1 = PTRCOUNT$1 + -1ll;
			HEMITUDT( SUBTYPE$1, (int64)-(PTRCOUNT$1 > 0ll) );
			char* vr$32 = SYMBGETMANGLEDNAME( SUBTYPE$1 );
			fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$32, 0ll, 0 );
		}
		goto label$459;
		label$467:;
		{
			int64 TMP$365$3;
			if( (DTYPE$1 & 480ll) == 0ll ) goto label$468;
			TMP$365$3 = 24ll;
			goto label$1214;
			label$468:;
			TMP$365$3 = DTYPE$1 & 31ll;
			label$1214:;
			fb_StrAssign( (void*)&S$1, -1ll, *(void**)((int64)(char**)DTYPENAME$ + (*(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$365$3 * 56ll)) + 32ll) << (3ll & 63ll))), 0ll, 0 );
		}
		goto label$459;
		label$469:;
		{
			fb_StrAssign( (void*)&S$1, -1ll, *(void**)((int64)(char**)DTYPENAME$ + 24ll), 0ll, 0 );
		}
		goto label$459;
		label$470:;
		{
			fb_StrAssign( (void*)&S$1, -1ll, *(void**)((int64)(char**)DTYPENAME$ + (DTYPE$1 << (3ll & 63ll))), 0ll, 0 );
		}
		goto label$459;
		label$460:;
		static const void* tmp$683[16ll] = {
			&&label$467,
			&&label$470,
			&&label$470,
			&&label$461,
			&&label$470,
			&&label$470,
			&&label$470,
			&&label$470,
			&&label$470,
			&&label$470,
			&&label$470,
			&&label$469,
			&&label$470,
			&&label$461,
			&&label$470,
			&&label$466,
		};
		if( (TMP$363$2 - 7ull) > 15ull ) goto label$470;
		goto *tmp$683[TMP$363$2 - 7ull];
		label$459:;
	}
	if( PTRCOUNT$1 <= 0ll ) goto label$472;
	{
		FBSTRING* vr$42 = fb_StrAllocTempDescZEx( (char*)"*", 1ll );
		FBSTRING* vr$43 = fb_StrFill2( PTRCOUNT$1, (FBSTRING*)vr$42 );
		fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)vr$43, -1ll, 0 );
	}
	label$472:;
	label$471:;
	fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&S$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&S$1 );
	label$452:;
	FBSTRING* vr$49 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$49;
}

static struct $8EXPRNODE* EXPRNEW( int64 CLASS_$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	struct $8EXPRNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$473:;
	struct $8EXPRNODE* N$1;
	void* vr$2 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&CTX$ + 5360ll) );
	N$1 = (struct $8EXPRNODE*)vr$2;
	*(int64*)N$1 = CLASS_$1;
	*(int64*)((uint8*)N$1 + 8ll) = DTYPE$1;
	*(struct $8FBSYMBOL**)((uint8*)N$1 + 16ll) = SUBTYPE$1;
	fb$result$1 = N$1;
	label$474:;
	return fb$result$1;
}

static void EXPRFREENODE( struct $8EXPRNODE* N$1 )
{
	label$475:;
	if( *(int64*)N$1 != 0ll ) goto label$478;
	{
		if( *(char**)((uint8*)N$1 + 40ll) == (char*)0ull ) goto label$480;
		{
			free( *(void**)((uint8*)N$1 + 40ll) );
		}
		label$480:;
		label$479:;
	}
	label$478:;
	label$477:;
	LISTDELNODE( (struct $5TLIST*)((uint8*)&CTX$ + 5360ll), (void*)N$1 );
	label$476:;
}

static void EXPRFREETREE( struct $8EXPRNODE* N$1 )
{
	label$481:;
	if( *(struct $8EXPRNODE**)((uint8*)N$1 + 24ll) == (struct $8EXPRNODE*)0ull ) goto label$484;
	{
		EXPRFREETREE( *(struct $8EXPRNODE**)((uint8*)N$1 + 24ll) );
	}
	label$484:;
	label$483:;
	if( *(struct $8EXPRNODE**)((uint8*)N$1 + 32ll) == (struct $8EXPRNODE*)0ull ) goto label$486;
	{
		EXPRFREETREE( *(struct $8EXPRNODE**)((uint8*)N$1 + 32ll) );
	}
	label$486:;
	label$485:;
	EXPRFREENODE( N$1 );
	label$482:;
}

static struct $8EXPRNODE* EXPRNEWTEXT( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, char* S$1 )
{
	struct $8EXPRNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$487:;
	struct $8EXPRNODE* N$1;
	struct $8EXPRNODE* vr$1 = EXPRNEW( 0ll, DTYPE$1, SUBTYPE$1 );
	N$1 = vr$1;
	char* vr$2 = ZSTRDUP( S$1 );
	*(char**)((uint8*)N$1 + 40ll) = vr$2;
	fb$result$1 = N$1;
	label$488:;
	return fb$result$1;
}

static struct $8EXPRNODE* EXPRNEWIMMI( int64 I$1, int64 DTYPE$1 )
{
	int64 TMP$367$1;
	struct $8EXPRNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$489:;
	struct $8EXPRNODE* N$1;
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$491;
	TMP$367$1 = 24ll;
	goto label$1215;
	label$491:;
	TMP$367$1 = DTYPE$1 & 31ll;
	label$1215:;
	if( *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$367$1 * 56ll)) + 8ll) != 8ll ) goto label$493;
	{
		int64 TMP$368$2;
		$11FB_DATATYPE TMP$369$2;
		if( (DTYPE$1 & 480ll) == 0ll ) goto label$494;
		TMP$368$2 = 24ll;
		goto label$1216;
		label$494:;
		TMP$368$2 = DTYPE$1 & 31ll;
		label$1216:;
		if( *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$368$2 * 56ll)) + 16ll) == 0ll ) goto label$495;
		TMP$369$2 = 13ll;
		goto label$1217;
		label$495:;
		TMP$369$2 = 14ll;
		label$1217:;
		DTYPE$1 = TMP$369$2;
	}
	goto label$492;
	label$493:;
	{
		int64 TMP$370$2;
		$11FB_DATATYPE TMP$371$2;
		if( (DTYPE$1 & 480ll) == 0ll ) goto label$496;
		TMP$370$2 = 24ll;
		goto label$1218;
		label$496:;
		TMP$370$2 = DTYPE$1 & 31ll;
		label$1218:;
		if( *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$370$2 * 56ll)) + 16ll) == 0ll ) goto label$497;
		TMP$371$2 = 11ll;
		goto label$1219;
		label$497:;
		TMP$371$2 = 12ll;
		label$1219:;
		DTYPE$1 = TMP$371$2;
	}
	label$492:;
	struct $8EXPRNODE* vr$10 = EXPRNEW( 1ll, DTYPE$1, (struct $8FBSYMBOL*)0ull );
	N$1 = vr$10;
	*(int64*)((uint8*)N$1 + 40ll) = I$1;
	fb$result$1 = N$1;
	label$490:;
	return fb$result$1;
}

static struct $8EXPRNODE* EXPRNEWIMMF( double F$1, int64 DTYPE$1 )
{
	struct $8EXPRNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$498:;
	struct $8EXPRNODE* N$1;
	struct $8EXPRNODE* vr$1 = EXPRNEW( 1ll, DTYPE$1, (struct $8FBSYMBOL*)0ull );
	N$1 = vr$1;
	*(double*)((uint8*)N$1 + 40ll) = F$1;
	fb$result$1 = N$1;
	label$499:;
	return fb$result$1;
}

static int64 SYMBISCARRAY( struct $8FBSYMBOL* SYM$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$500:;
	if( (((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 262144ll) != 0ll) | (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 81920ll) != 0ll)) | (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 512ll) != 0ll)) == 0ll ) goto label$503;
	{
		fb$result$1 = 0ll;
		goto label$501;
	}
	label$503:;
	label$502:;
	{
		$12FB_SYMBCLASS TMP$372$2;
		TMP$372$2 = *($12FB_SYMBCLASS*)SYM$1;
		if( TMP$372$2 == 1ll ) goto label$506;
		label$507:;
		if( TMP$372$2 != 12ll ) goto label$505;
		label$506:;
		{
			if( (*(int64*)((uint8*)SYM$1 + 8ll) & 4ll) == 0ll ) goto label$509;
			{
				fb$result$1 = 0ll;
				goto label$501;
			}
			label$509:;
			label$508:;
			if( *(int64*)((uint8*)SYM$1 + 104ll) == 0ll ) goto label$511;
			{
				fb$result$1 = -1ll;
				goto label$501;
			}
			label$511:;
			label$510:;
		}
		label$505:;
		label$504:;
	}
	{
		int64 TMP$373$2;
		TMP$373$2 = *(int64*)((uint8*)SYM$1 + 56ll) & 511ll;
		if( TMP$373$2 == 18ll ) goto label$514;
		label$515:;
		if( TMP$373$2 == 4ll ) goto label$514;
		label$516:;
		if( TMP$373$2 != 7ll ) goto label$513;
		label$514:;
		{
			fb$result$1 = -1ll;
			goto label$501;
		}
		label$513:;
		label$512:;
	}
	fb$result$1 = 0ll;
	goto label$501;
	label$501:;
	return fb$result$1;
}

static struct $8EXPRNODE* EXPRNEWCAST( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, struct $8EXPRNODE* L$1 )
{
	int64 TMP$374$1;
	int64 TMP$375$1;
	struct $8EXPRNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$517:;
	if( ((int64)-(DTYPE$1 == *(int64*)((uint8*)L$1 + 8ll)) & (int64)-(SUBTYPE$1 == *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll))) == 0ll ) goto label$520;
	{
		fb$result$1 = L$1;
		goto label$518;
	}
	label$520:;
	label$519:;
	if( (*(int64*)((uint8*)L$1 + 8ll) & 480ll) == 0ll ) goto label$521;
	TMP$374$1 = 24ll;
	goto label$1220;
	label$521:;
	TMP$374$1 = *(int64*)((uint8*)L$1 + 8ll) & 31ll;
	label$1220:;
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$522;
	TMP$375$1 = 24ll;
	goto label$1221;
	label$522:;
	TMP$375$1 = DTYPE$1 & 31ll;
	label$1221:;
	if( (((int64)-(*(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$374$1 * 56ll)) + 40ll) == *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$375$1 * 56ll)) + 40ll)) & (int64)-((*(int64*)((uint8*)L$1 + 8ll) & 480ll) == 0ll)) & (int64)-((DTYPE$1 & 480ll) == 0ll)) == 0ll ) goto label$524;
	{
		fb$result$1 = L$1;
		goto label$518;
	}
	label$524:;
	label$523:;
	if( *(int64*)L$1 != 3ll ) goto label$526;
	{
		if( ((int64)-(((DTYPE$1 & 480ll) >> (5ll & 63ll)) > 0ll) & (int64)-(((*(int64*)((uint8*)L$1 + 8ll) & 480ll) >> (5ll & 63ll)) > 0ll)) == 0ll ) goto label$528;
		{
			*(int64*)((uint8*)L$1 + 8ll) = DTYPE$1;
			*(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll) = SUBTYPE$1;
			fb$result$1 = L$1;
			goto label$518;
		}
		label$528:;
		label$527:;
	}
	label$526:;
	label$525:;
	if( (*(int64*)((uint8*)L$1 + 8ll) & 511ll) != 4ll ) goto label$530;
	{
		struct $8EXPRNODE* N$2;
		struct $8EXPRNODE* vr$35 = EXPRNEW( 3ll, 3ll, (struct $8FBSYMBOL*)0ull );
		N$2 = vr$35;
		*(struct $8EXPRNODE**)((uint8*)N$2 + 24ll) = L$1;
		L$1 = N$2;
	}
	label$530:;
	label$529:;
	struct $8EXPRNODE* N$1;
	struct $8EXPRNODE* vr$37 = EXPRNEW( 3ll, DTYPE$1, SUBTYPE$1 );
	N$1 = vr$37;
	*(struct $8EXPRNODE**)((uint8*)N$1 + 24ll) = L$1;
	fb$result$1 = N$1;
	label$518:;
	return fb$result$1;
}

static struct $8EXPRNODE* EXPRNEWMACRO( $6AST_OP OP$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, struct $8EXPRNODE* L$1, struct $8EXPRNODE* R$1 )
{
	struct $8EXPRNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$531:;
	struct $8EXPRNODE* N$1;
	struct $8EXPRNODE* vr$1 = EXPRNEW( 6ll, DTYPE$1, SUBTYPE$1 );
	N$1 = vr$1;
	*(int64*)((uint8*)N$1 + 40ll) = OP$1;
	*(struct $8EXPRNODE**)((uint8*)N$1 + 24ll) = L$1;
	*(struct $8EXPRNODE**)((uint8*)N$1 + 32ll) = R$1;
	fb$result$1 = N$1;
	label$532:;
	return fb$result$1;
}

static struct $8EXPRNODE* EXPRNEWSYM( struct $8FBSYMBOL* SYM$1 )
{
	struct $8EXPRNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$533:;
	struct $8EXPRNODE* N$1;
	int64 DTYPE$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	if( ((int64)-(*(int64*)SYM$1 == 1ll) & (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 4ll) != 0ll)) == 0ll ) goto label$536;
	{
		SYM$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 136ll);
	}
	label$536:;
	label$535:;
	if( *(int64*)SYM$1 != 7ll ) goto label$538;
	{
		struct $8EXPRNODE* vr$9 = EXPRNEW( 2ll, 32ll, (struct $8FBSYMBOL*)0ull );
		N$1 = vr$9;
		*(struct $8FBSYMBOL**)((uint8*)N$1 + 40ll) = SYM$1;
	}
	goto label$537;
	label$538:;
	if( *(int64*)SYM$1 != 3ll ) goto label$539;
	{
		struct $8EXPRNODE* vr$12 = EXPRNEW( 2ll, 54ll, SYM$1 );
		N$1 = vr$12;
		*(struct $8FBSYMBOL**)((uint8*)N$1 + 40ll) = SYM$1;
	}
	goto label$537;
	label$539:;
	int64 vr$14 = SYMBISCARRAY( SYM$1 );
	if( vr$14 == 0ll ) goto label$540;
	{
		struct $8EXPRNODE* vr$15 = EXPRNEW( 2ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		N$1 = vr$15;
		*(struct $8FBSYMBOL**)((uint8*)N$1 + 40ll) = SYM$1;
		struct $8EXPRNODE* vr$35 = EXPRNEWCAST( ((((*(int64*)((uint8*)SYM$1 + 56ll) & 511ll) & 31ll) | (((*(int64*)((uint8*)SYM$1 + 56ll) & 511ll) & 480ll) + 32ll)) | (((*(int64*)((uint8*)SYM$1 + 56ll) & 511ll) & 261632ll) << (1ll & 63ll))) | ((*(int64*)((uint8*)SYM$1 + 56ll) & 511ll) & 32505856ll), *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 64ll), N$1 );
		N$1 = vr$35;
	}
	goto label$537;
	label$540:;
	if( (((int64)-(*(int64*)SYM$1 == 1ll) | (int64)-(*(int64*)SYM$1 == 4ll)) & (int64)-((*(int64*)((uint8*)SYM$1 + 24ll) & 524288ll) != 0ll)) == 0ll ) goto label$541;
	{
		struct $8EXPRNODE* vr$45 = EXPRNEW( 2ll, 66ll, (struct $8FBSYMBOL*)0ull );
		N$1 = vr$45;
		*(struct $8FBSYMBOL**)((uint8*)N$1 + 40ll) = SYM$1;
	}
	goto label$537;
	label$541:;
	{
		SYMBGETREALTYPE( SYM$1, &DTYPE$1, &SUBTYPE$1 );
		struct $8EXPRNODE* vr$49 = EXPRNEW( 2ll, DTYPE$1, SUBTYPE$1 );
		N$1 = vr$49;
		*(struct $8FBSYMBOL**)((uint8*)N$1 + 40ll) = SYM$1;
	}
	label$537:;
	fb$result$1 = N$1;
	label$534:;
	return fb$result$1;
}

static int64 TYPECBOP( int64 OP$1, int64 A$1, int64 B$1 )
{
	int64 TMP$376$1;
	int64 TMP$377$1;
	int64 TMP$378$1;
	int64 TMP$381$1;
	int64 TMP$384$1;
	int64 TMP$385$1;
	int64 TMP$386$1;
	int64 TMP$387$1;
	int64 TMP$392$1;
	int64 TMP$393$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$542:;
	if( (*(int64*)(((int64)(struct $10AST_OPINFO*)AST_OPTB$ + (OP$1 << (5ll & 63ll))) + 8ll) & 8ll) == 0ll ) goto label$545;
	{
		fb$result$1 = 11ll;
		goto label$543;
	}
	label$545:;
	label$544:;
	if( (A$1 & 480ll) == 0ll ) goto label$546;
	TMP$376$1 = 24ll;
	goto label$1222;
	label$546:;
	TMP$376$1 = A$1 & 31ll;
	label$1222:;
	A$1 = TMP$376$1;
	if( (B$1 & 480ll) == 0ll ) goto label$547;
	TMP$377$1 = 24ll;
	goto label$1223;
	label$547:;
	TMP$377$1 = B$1 & 31ll;
	label$1223:;
	B$1 = TMP$377$1;
	if( ((int64)-(A$1 == 16ll) | (int64)-(B$1 == 16ll)) == 0ll ) goto label$549;
	{
		fb$result$1 = 16ll;
		goto label$543;
	}
	label$549:;
	label$548:;
	if( ((int64)-(A$1 == 15ll) | (int64)-(B$1 == 15ll)) == 0ll ) goto label$551;
	{
		fb$result$1 = 15ll;
		goto label$543;
	}
	label$551:;
	label$550:;
	if( (A$1 & 480ll) == 0ll ) goto label$552;
	TMP$378$1 = 24ll;
	goto label$1224;
	label$552:;
	TMP$378$1 = A$1 & 31ll;
	label$1224:;
	if( *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$378$1 * 56ll)) + 8ll) > 4ll ) goto label$554;
	{
		int64 TMP$379$2;
		$11FB_DATATYPE TMP$380$2;
		if( (A$1 & 480ll) == 0ll ) goto label$555;
		TMP$379$2 = 24ll;
		goto label$1225;
		label$555:;
		TMP$379$2 = A$1 & 31ll;
		label$1225:;
		if( *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$379$2 * 56ll)) + 16ll) == 0ll ) goto label$556;
		TMP$380$2 = 11ll;
		goto label$1226;
		label$556:;
		TMP$380$2 = 12ll;
		label$1226:;
		A$1 = TMP$380$2;
	}
	label$554:;
	label$553:;
	if( (B$1 & 480ll) == 0ll ) goto label$557;
	TMP$381$1 = 24ll;
	goto label$1227;
	label$557:;
	TMP$381$1 = B$1 & 31ll;
	label$1227:;
	if( *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$381$1 * 56ll)) + 8ll) > 4ll ) goto label$559;
	{
		int64 TMP$382$2;
		$11FB_DATATYPE TMP$383$2;
		if( (B$1 & 480ll) == 0ll ) goto label$560;
		TMP$382$2 = 24ll;
		goto label$1228;
		label$560:;
		TMP$382$2 = B$1 & 31ll;
		label$1228:;
		if( *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$382$2 * 56ll)) + 16ll) == 0ll ) goto label$561;
		TMP$383$2 = 11ll;
		goto label$1229;
		label$561:;
		TMP$383$2 = 12ll;
		label$1229:;
		B$1 = TMP$383$2;
	}
	label$559:;
	label$558:;
	if( (A$1 & 480ll) == 0ll ) goto label$562;
	TMP$384$1 = 24ll;
	goto label$1230;
	label$562:;
	TMP$384$1 = A$1 & 31ll;
	label$1230:;
	if( (B$1 & 480ll) == 0ll ) goto label$563;
	TMP$385$1 = 24ll;
	goto label$1231;
	label$563:;
	TMP$385$1 = B$1 & 31ll;
	label$1231:;
	if( ~(*(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$384$1 * 56ll)) + 16ll) & *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$385$1 * 56ll)) + 16ll)) == 0ll ) goto label$565;
	{
		int64 vr$33 = TYPETOUNSIGNED( A$1 );
		A$1 = vr$33;
		int64 vr$34 = TYPETOUNSIGNED( B$1 );
		B$1 = vr$34;
	}
	label$565:;
	label$564:;
	if( (A$1 & 480ll) == 0ll ) goto label$566;
	TMP$386$1 = 24ll;
	goto label$1232;
	label$566:;
	TMP$386$1 = A$1 & 31ll;
	label$1232:;
	if( (B$1 & 480ll) == 0ll ) goto label$567;
	TMP$387$1 = 24ll;
	goto label$1233;
	label$567:;
	TMP$387$1 = B$1 & 31ll;
	label$1233:;
	if( ((int64)-(*(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$386$1 * 56ll)) + 8ll) == 8ll) | (int64)-(*(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$387$1 * 56ll)) + 8ll) == 8ll)) == 0ll ) goto label$569;
	{
		int64 TMP$388$2;
		$11FB_DATATYPE TMP$389$2;
		int64 TMP$390$2;
		$11FB_DATATYPE TMP$391$2;
		if( (A$1 & 480ll) == 0ll ) goto label$570;
		TMP$388$2 = 24ll;
		goto label$1234;
		label$570:;
		TMP$388$2 = A$1 & 31ll;
		label$1234:;
		if( *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$388$2 * 56ll)) + 16ll) == 0ll ) goto label$571;
		TMP$389$2 = 13ll;
		goto label$1235;
		label$571:;
		TMP$389$2 = 14ll;
		label$1235:;
		A$1 = TMP$389$2;
		if( (B$1 & 480ll) == 0ll ) goto label$572;
		TMP$390$2 = 24ll;
		goto label$1236;
		label$572:;
		TMP$390$2 = B$1 & 31ll;
		label$1236:;
		if( *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$390$2 * 56ll)) + 16ll) == 0ll ) goto label$573;
		TMP$391$2 = 13ll;
		goto label$1237;
		label$573:;
		TMP$391$2 = 14ll;
		label$1237:;
		B$1 = TMP$391$2;
	}
	label$569:;
	label$568:;
	if( (A$1 & 480ll) == 0ll ) goto label$574;
	TMP$392$1 = 24ll;
	goto label$1238;
	label$574:;
	TMP$392$1 = A$1 & 31ll;
	label$1238:;
	if( (B$1 & 480ll) == 0ll ) goto label$575;
	TMP$393$1 = 24ll;
	goto label$1239;
	label$575:;
	TMP$393$1 = B$1 & 31ll;
	label$1239:;
	if( ~(*(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$392$1 * 56ll)) + 16ll) & *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$393$1 * 56ll)) + 16ll)) == 0ll ) goto label$577;
	{
		int64 vr$58 = TYPETOUNSIGNED( A$1 );
		A$1 = vr$58;
		int64 vr$59 = TYPETOUNSIGNED( B$1 );
		B$1 = vr$59;
	}
	label$577:;
	label$576:;
	fb$result$1 = A$1;
	label$543:;
	return fb$result$1;
}

static struct $8EXPRNODE* EXPRNEWUOP( int64 OP$1, struct $8EXPRNODE* L$1 )
{
	struct $8EXPRNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$578:;
	struct $8EXPRNODE* N$1;
	int64 DTYPE$1;
	int64 SOLVED_OUT$1;
	SOLVED_OUT$1 = 0ll;
	{
		uint64 TMP$394$2;
		TMP$394$2 = (uint64)OP$1;
		goto label$581;
		label$582:;
		{
			if( *(int64*)L$1 != 4ll ) goto label$584;
			{
				SOLVED_OUT$1 = (int64)-(*(int64*)((uint8*)L$1 + 40ll) == 76ll);
			}
			label$584:;
			label$583:;
			DTYPE$1 = *(int64*)((uint8*)L$1 + 8ll);
			DTYPE$1 = (((DTYPE$1 & 31ll) | ((DTYPE$1 & 480ll) + 32ll)) | ((DTYPE$1 & 261632ll) << (1ll & 63ll))) | (DTYPE$1 & 32505856ll);
		}
		goto label$580;
		label$585:;
		{
			if( *(int64*)L$1 != 4ll ) goto label$587;
			{
				SOLVED_OUT$1 = (int64)-(*(int64*)((uint8*)L$1 + 40ll) == 22ll);
			}
			label$587:;
			label$586:;
			DTYPE$1 = *(int64*)((uint8*)L$1 + 8ll);
			DTYPE$1 = (((DTYPE$1 & 31ll) | ((DTYPE$1 & 480ll) + -32ll)) | (((DTYPE$1 & 261632ll) >> (1ll & 63ll)) & 261632ll)) | (DTYPE$1 & 32505856ll);
		}
		goto label$580;
		label$588:;
		{
			if( *(int64*)L$1 != 4ll ) goto label$590;
			{
				SOLVED_OUT$1 = (int64)-(*(int64*)((uint8*)L$1 + 40ll) == OP$1);
			}
			label$590:;
			label$589:;
			int64 vr$33 = TYPECBOP( OP$1, *(int64*)((uint8*)L$1 + 8ll), *(int64*)((uint8*)L$1 + 8ll) );
			DTYPE$1 = vr$33;
		}
		goto label$580;
		label$591:;
		{
			DTYPE$1 = *(int64*)((uint8*)L$1 + 8ll);
		}
		goto label$580;
		label$592:;
		{
		}
		goto label$580;
		label$581:;
		static const void* tmp$684[55ll] = {
			&&label$582,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$588,
			&&label$592,
			&&label$588,
			&&label$592,
			&&label$591,
			&&label$592,
			&&label$591,
			&&label$591,
			&&label$591,
			&&label$591,
			&&label$591,
			&&label$591,
			&&label$592,
			&&label$591,
			&&label$592,
			&&label$592,
			&&label$591,
			&&label$591,
			&&label$591,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$592,
			&&label$585,
		};
		if( (TMP$394$2 - 22ull) > 54ull ) goto label$592;
		goto *tmp$684[TMP$394$2 - 22ull];
		label$580:;
	}
	if( SOLVED_OUT$1 == 0ll ) goto label$594;
	{
		N$1 = *(struct $8EXPRNODE**)((uint8*)L$1 + 24ll);
		EXPRFREENODE( L$1 );
		fb$result$1 = N$1;
		goto label$579;
	}
	label$594:;
	label$593:;
	struct $8EXPRNODE* vr$37 = EXPRNEW( 4ll, DTYPE$1, *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll) );
	N$1 = vr$37;
	*(struct $8EXPRNODE**)((uint8*)N$1 + 24ll) = L$1;
	*(int64*)((uint8*)N$1 + 40ll) = OP$1;
	fb$result$1 = N$1;
	label$579:;
	return fb$result$1;
}

static struct $8EXPRNODE* EXPRNEWBOP( int64 OP$1, struct $8EXPRNODE* L$1, struct $8EXPRNODE* R$1 )
{
	struct $8EXPRNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$595:;
	struct $8EXPRNODE* N$1;
	int64 DTYPE$1;
	int64 vr$3 = TYPECBOP( OP$1, *(int64*)((uint8*)L$1 + 8ll), *(int64*)((uint8*)R$1 + 8ll) );
	DTYPE$1 = vr$3;
	{
		uint64 TMP$395$2;
		TMP$395$2 = (uint64)OP$1;
		goto label$598;
		label$599:;
		{
			if( ((int64)-((*(int64*)((uint8*)L$1 + 8ll) & 480ll) != 0ll) & (int64)-((*(int64*)((uint8*)R$1 + 8ll) & 480ll) != 0ll)) == 0ll ) goto label$601;
			{
				if( ((int64)-(((*(int64*)((uint8*)L$1 + 8ll) & 32505856ll) >> (20ll & 63ll)) == 19ll) | (int64)-(((*(int64*)((uint8*)R$1 + 8ll) & 32505856ll) >> (20ll & 63ll)) == 19ll)) == 0ll ) goto label$603;
				{
					struct $8EXPRNODE* vr$20 = EXPRNEWCAST( 35ll, (struct $8FBSYMBOL*)0ull, L$1 );
					L$1 = vr$20;
					struct $8EXPRNODE* vr$21 = EXPRNEWCAST( 35ll, (struct $8FBSYMBOL*)0ull, R$1 );
					R$1 = vr$21;
				}
				label$603:;
				label$602:;
			}
			label$601:;
			label$600:;
		}
		goto label$597;
		label$598:;
		static const void* tmp$685[6ll] = {
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
		};
		if( (TMP$395$2 - 45ull) > 5ull ) goto label$597;
		goto *tmp$685[TMP$395$2 - 45ull];
		label$597:;
	}
	struct $8EXPRNODE* vr$22 = EXPRNEW( 5ll, DTYPE$1, (struct $8FBSYMBOL*)0ull );
	N$1 = vr$22;
	*(struct $8EXPRNODE**)((uint8*)N$1 + 24ll) = L$1;
	*(struct $8EXPRNODE**)((uint8*)N$1 + 32ll) = R$1;
	*(int64*)((uint8*)N$1 + 40ll) = OP$1;
	fb$result$1 = N$1;
	label$596:;
	return fb$result$1;
}

static void EXPRCACHE( int64 VREGID$1, struct $8EXPRNODE* EXPR$1 )
{
	label$604:;
	struct $13EXPRCACHENODE* ENTRY$1;
	void* vr$1 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&CTX$ + 5448ll) );
	ENTRY$1 = (struct $13EXPRCACHENODE*)vr$1;
	*(int64*)ENTRY$1 = VREGID$1;
	*(struct $8EXPRNODE**)((uint8*)ENTRY$1 + 8ll) = EXPR$1;
	label$605:;
}

static struct $8EXPRNODE* EXPRLOOKUP( int64 VREGID$1 )
{
	struct $8EXPRNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$606:;
	struct $13EXPRCACHENODE* ENTRY$1;
	void* vr$2 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&CTX$ + 5448ll) );
	ENTRY$1 = (struct $13EXPRCACHENODE*)vr$2;
	label$608:;
	if( ENTRY$1 == (struct $13EXPRCACHENODE*)0ull ) goto label$609;
	{
		if( *(int64*)ENTRY$1 != VREGID$1 ) goto label$611;
		{
			goto label$609;
		}
		label$611:;
		label$610:;
		void* vr$4 = LISTGETNEXT( (void*)ENTRY$1 );
		ENTRY$1 = (struct $13EXPRCACHENODE*)vr$4;
	}
	goto label$608;
	label$609:;
	if( ENTRY$1 == (struct $13EXPRCACHENODE*)0ull ) goto label$613;
	{
		fb$result$1 = *(struct $8EXPRNODE**)((uint8*)ENTRY$1 + 8ll);
		LISTDELNODE( (struct $5TLIST*)((uint8*)&CTX$ + 5448ll), (void*)ENTRY$1 );
	}
	goto label$612;
	label$613:;
	{
		fb$result$1 = (struct $8EXPRNODE*)0ull;
	}
	label$612:;
	label$607:;
	return fb$result$1;
}

static FBSTRING* HEMITINT( int64 DTYPE$1, int64 VALUE$1 )
{
	int64 TMP$396$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$614:;
	FBSTRING S$1;
	__builtin_memset( &S$1, 0, 24ll );
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$616;
	TMP$396$1 = 24ll;
	goto label$1240;
	label$616:;
	TMP$396$1 = DTYPE$1 & 31ll;
	label$1240:;
	if( *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$396$1 * 56ll)) + 16ll) == 0ll ) goto label$618;
	{
		int64 TMP$397$2;
		FBSTRING* vr$5 = fb_LongintToStr( VALUE$1 );
		fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$5, -1ll, 0 );
		if( (DTYPE$1 & 480ll) == 0ll ) goto label$619;
		TMP$397$2 = 24ll;
		goto label$1241;
		label$619:;
		TMP$397$2 = DTYPE$1 & 31ll;
		label$1241:;
		if( *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$397$2 * 56ll)) + 8ll) != 8ll ) goto label$621;
		{
			if( VALUE$1 != -9223372036854775808ull ) goto label$623;
			{
				fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"u", 2ll, 0 );
			}
			label$623:;
			label$622:;
			fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"ll", 3ll, 0 );
		}
		goto label$620;
		label$621:;
		{
			if( VALUE$1 != -2147483648ll ) goto label$625;
			{
				fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"u", 2ll, 0 );
			}
			label$625:;
			label$624:;
		}
		label$620:;
	}
	goto label$617;
	label$618:;
	{
		int64 TMP$400$2;
		if( (DTYPE$1 & 480ll) == 0ll ) goto label$626;
		TMP$400$2 = 24ll;
		goto label$1242;
		label$626:;
		TMP$400$2 = DTYPE$1 & 31ll;
		label$1242:;
		if( *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$400$2 * 56ll)) + 8ll) != 8ll ) goto label$628;
		{
			FBSTRING* vr$16 = fb_ULongintToStr( (uint64)VALUE$1 );
			fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$16, -1ll, 0 );
			fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"ull", 4ll, 0 );
		}
		goto label$627;
		label$628:;
		{
			FBSTRING* vr$20 = fb_UIntToStr( (uint32)VALUE$1 );
			fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$20, -1ll, 0 );
			fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"u", 2ll, 0 );
		}
		label$627:;
	}
	label$617:;
	fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&S$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&S$1 );
	label$615:;
	FBSTRING* vr$27 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$27;
}

static FBSTRING* HEMITFLOAT( int64 DTYPE$1, double VALUE$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$629:;
	FBSTRING S$1;
	__builtin_memset( &S$1, 0, 24ll );
	uint32 EXPVAL$1;
	EXPVAL$1 = *(uint32*)((uint8*)&VALUE$1 + 4ll);
	{
		if( (int64)EXPVAL$1 == 2146435072ll ) goto label$633;
		label$634:;
		if( (int64)EXPVAL$1 != 4293918720ll ) goto label$632;
		label$633:;
		{
			if( DTYPE$1 != 16ll ) goto label$636;
			{
				if( ((int64)EXPVAL$1 & 2147483648ll) == 0ll ) goto label$638;
				{
					fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"(-__builtin_inf())", 19ll, 0 );
				}
				goto label$637;
				label$638:;
				{
					fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"__builtin_inf()", 16ll, 0 );
				}
				label$637:;
			}
			goto label$635;
			label$636:;
			{
				if( ((int64)EXPVAL$1 & 2147483648ll) == 0ll ) goto label$640;
				{
					fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"(-__builtin_inff())", 20ll, 0 );
				}
				goto label$639;
				label$640:;
				{
					fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"__builtin_inff()", 17ll, 0 );
				}
				label$639:;
			}
			label$635:;
		}
		goto label$631;
		label$632:;
		if( (int64)EXPVAL$1 == 2146959360ll ) goto label$642;
		label$643:;
		if( (int64)EXPVAL$1 != 4294443008ll ) goto label$641;
		label$642:;
		{
			if( DTYPE$1 != 16ll ) goto label$645;
			{
				if( ((int64)EXPVAL$1 & 2147483648ll) == 0ll ) goto label$647;
				{
					fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"(-__builtin_nan( \x22\x22 ))", 23ll, 0 );
				}
				goto label$646;
				label$647:;
				{
					fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"__builtin_nan( \x22\x22 )", 20ll, 0 );
				}
				label$646:;
			}
			goto label$644;
			label$645:;
			{
				if( ((int64)EXPVAL$1 & 2147483648ll) == 0ll ) goto label$649;
				{
					fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"(-__builtin_nanf( \x22\x22 ))", 24ll, 0 );
				}
				goto label$648;
				label$649:;
				{
					fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"__builtin_nanf( \x22\x22 )", 21ll, 0 );
				}
				label$648:;
			}
			label$644:;
		}
		goto label$631;
		label$641:;
		{
			FBSTRING* vr$23 = HFLOATTOHEX_C99( VALUE$1 );
			fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$23, -1ll, 0 );
			if( DTYPE$1 != 15ll ) goto label$652;
			{
				fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"f", 2ll, 0 );
			}
			label$652:;
			label$651:;
		}
		label$650:;
		label$631:;
	}
	fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&S$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&S$1 );
	label$630:;
	FBSTRING* vr$30 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$30;
}

static void HBUILDSTRLIT( FBSTRING* LN$1, char* Z$1, int64 LENGTH$1 )
{
	label$653:;
	int64 CH$1;
	fb_StrConcatByref( (void*)LN$1, -1ll, (void*)"\x22", 2ll, 0 );
	{
		int64 I$2;
		I$2 = 0ll;
		int64 TMP$411$2;
		TMP$411$2 = LENGTH$1 + -2ll;
		goto label$655;
		label$658:;
		{
			CH$1 = (int64)*(uint8*)((uint8*)Z$1 + I$2);
			int64 vr$3 = HCHARNEEDSESCAPING( CH$1, 34ll );
			if( vr$3 == 0ll ) goto label$660;
			{
				FBSTRING TMP$413$4;
				FBSTRING* vr$4 = fb_HEXEx_l( (uint64)CH$1, 2 );
				__builtin_memset( &TMP$413$4, 0, 24ll );
				FBSTRING* vr$7 = fb_StrConcat( &TMP$413$4, (void*)"\x5Cx", 3ll, (void*)vr$4, -1ll );
				fb_StrConcatByref( (void*)LN$1, -1ll, (void*)vr$7, -1ll, 0 );
				int64 vr$10 = HISVALIDHEXDIGIT( (int64)*(uint8*)((uint8*)((uint8*)Z$1 + I$2) + 1ll) );
				if( vr$10 == 0ll ) goto label$662;
				{
					fb_StrConcatByref( (void*)LN$1, -1ll, (void*)"\x22 \x22", 4ll, 0 );
				}
				label$662:;
				label$661:;
			}
			goto label$659;
			label$660:;
			if( (uint64)CH$1 != 63ull ) goto label$663;
			{
				fb_StrConcatByref( (void*)LN$1, -1ll, (void*)"?", 2ll, 0 );
				if( (uint64)(int64)*(uint8*)((uint8*)((uint8*)Z$1 + I$2) + 1ll) != 63ull ) goto label$665;
				{
					{
						uint8 TMP$416$6;
						TMP$416$6 = *(uint8*)((uint8*)((uint8*)Z$1 + I$2) + 2ll);
						if( (uint64)(int64)TMP$416$6 == 61ull ) goto label$668;
						label$669:;
						if( (uint64)(int64)TMP$416$6 == 47ull ) goto label$668;
						label$670:;
						if( (uint64)(int64)TMP$416$6 == 39ull ) goto label$668;
						label$671:;
						if( (uint64)(int64)TMP$416$6 == 40ull ) goto label$668;
						label$672:;
						if( (uint64)(int64)TMP$416$6 == 41ull ) goto label$668;
						label$673:;
						if( (uint64)(int64)TMP$416$6 == 33ull ) goto label$668;
						label$674:;
						if( (uint64)(int64)TMP$416$6 == 60ull ) goto label$668;
						label$675:;
						if( (uint64)(int64)TMP$416$6 == 62ull ) goto label$668;
						label$676:;
						if( (uint64)(int64)TMP$416$6 != 45ull ) goto label$667;
						label$668:;
						{
							fb_StrConcatByref( (void*)LN$1, -1ll, (void*)"\x22 \x22", 4ll, 0 );
						}
						label$667:;
						label$666:;
					}
				}
				label$665:;
				label$664:;
			}
			goto label$659;
			label$663:;
			{
				FBSTRING* vr$23 = fb_CHR( 1, CH$1 );
				fb_StrConcatByref( (void*)LN$1, -1ll, (void*)vr$23, -1ll, 0 );
			}
			label$659:;
		}
		label$656:;
		I$2 = I$2 + 1ll;
		label$655:;
		if( I$2 <= TMP$411$2 ) goto label$658;
		label$657:;
	}
	fb_StrConcatByref( (void*)LN$1, -1ll, (void*)"\x22", 2ll, 0 );
	label$654:;
}

static void HBUILDWSTRLIT( FBSTRING* LN$1, uint16* W$1, int64 LENGTH$1 )
{
	label$677:;
	int64 CH$1;
	int64 WCHARSIZE$1;
	fb_StrConcatByref( (void*)LN$1, -1ll, (void*)"L\x22", 3ll, 0 );
	WCHARSIZE$1 = *(int64*)((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + 400ll);
	{
		int64 I$2;
		I$2 = 0ll;
		int64 TMP$426$2;
		TMP$426$2 = LENGTH$1 + -2ll;
		goto label$679;
		label$682:;
		{
			CH$1 = (int64)*(uint16*)((uint8*)W$1 + (I$2 << (1ll & 63ll)));
			int64 vr$4 = HCHARNEEDSESCAPING( CH$1, 34ll );
			if( vr$4 == 0ll ) goto label$684;
			{
				FBSTRING TMP$427$4;
				FBSTRING* vr$7 = fb_HEXEx_l( (uint64)CH$1, (int32)(WCHARSIZE$1 << (1ll & 63ll)) );
				__builtin_memset( &TMP$427$4, 0, 24ll );
				FBSTRING* vr$10 = fb_StrConcat( &TMP$427$4, (void*)"\x5Cx", 3ll, (void*)vr$7, -1ll );
				fb_StrConcatByref( (void*)LN$1, -1ll, (void*)vr$10, -1ll, 0 );
				int64 vr$14 = HISVALIDHEXDIGIT( (int64)*(uint16*)((uint8*)((uint8*)W$1 + (I$2 << (1ll & 63ll))) + 2ll) );
				if( vr$14 == 0ll ) goto label$686;
				{
					fb_StrConcatByref( (void*)LN$1, -1ll, (void*)"\x22 L\x22", 5ll, 0 );
				}
				label$686:;
				label$685:;
			}
			goto label$683;
			label$684:;
			if( (uint64)CH$1 != 63ull ) goto label$687;
			{
				fb_StrConcatByref( (void*)LN$1, -1ll, (void*)"?", 2ll, 0 );
				if( (uint64)(int64)*(uint16*)((uint8*)((uint8*)W$1 + (I$2 << (1ll & 63ll))) + 2ll) != 63ull ) goto label$689;
				{
					{
						uint16 TMP$429$6;
						TMP$429$6 = *(uint16*)((uint8*)((uint8*)W$1 + (I$2 << (1ll & 63ll))) + 4ll);
						if( (uint64)(int64)TMP$429$6 == 61ull ) goto label$692;
						label$693:;
						if( (uint64)(int64)TMP$429$6 == 47ull ) goto label$692;
						label$694:;
						if( (uint64)(int64)TMP$429$6 == 39ull ) goto label$692;
						label$695:;
						if( (uint64)(int64)TMP$429$6 == 40ull ) goto label$692;
						label$696:;
						if( (uint64)(int64)TMP$429$6 == 41ull ) goto label$692;
						label$697:;
						if( (uint64)(int64)TMP$429$6 == 33ull ) goto label$692;
						label$698:;
						if( (uint64)(int64)TMP$429$6 == 60ull ) goto label$692;
						label$699:;
						if( (uint64)(int64)TMP$429$6 == 62ull ) goto label$692;
						label$700:;
						if( (uint64)(int64)TMP$429$6 != 45ull ) goto label$691;
						label$692:;
						{
							fb_StrConcatByref( (void*)LN$1, -1ll, (void*)"\x22 L\x22", 5ll, 0 );
						}
						label$691:;
						label$690:;
					}
				}
				label$689:;
				label$688:;
			}
			goto label$683;
			label$687:;
			{
				FBSTRING* vr$29 = fb_CHR( 1, CH$1 );
				fb_StrConcatByref( (void*)LN$1, -1ll, (void*)vr$29, -1ll, 0 );
			}
			label$683:;
		}
		label$680:;
		I$2 = I$2 + 1ll;
		label$679:;
		if( I$2 <= TMP$426$2 ) goto label$682;
		label$681:;
	}
	fb_StrConcatByref( (void*)LN$1, -1ll, (void*)"\x22", 2ll, 0 );
	label$678:;
}

static char* HBOPTOSTR( int64 OP$1 )
{
	char* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$701:;
	{
		uint64 TMP$430$2;
		TMP$430$2 = (uint64)OP$1;
		goto label$704;
		label$705:;
		{
			fb$result$1 = (char*)" + ";
		}
		goto label$703;
		label$706:;
		{
			fb$result$1 = (char*)" - ";
		}
		goto label$703;
		label$707:;
		{
			fb$result$1 = (char*)" * ";
		}
		goto label$703;
		label$708:;
		{
			fb$result$1 = (char*)" / ";
		}
		goto label$703;
		label$709:;
		{
			fb$result$1 = (char*)" / ";
		}
		goto label$703;
		label$710:;
		{
			fb$result$1 = (char*)" % ";
		}
		goto label$703;
		label$711:;
		{
			fb$result$1 = (char*)" << ";
		}
		goto label$703;
		label$712:;
		{
			fb$result$1 = (char*)" >> ";
		}
		goto label$703;
		label$713:;
		{
			fb$result$1 = (char*)" & ";
		}
		goto label$703;
		label$714:;
		{
			fb$result$1 = (char*)" | ";
		}
		goto label$703;
		label$715:;
		{
			fb$result$1 = (char*)" ^ ";
		}
		goto label$703;
		label$716:;
		{
			fb$result$1 = (char*)" == ";
		}
		goto label$703;
		label$717:;
		{
			fb$result$1 = (char*)" > ";
		}
		goto label$703;
		label$718:;
		{
			fb$result$1 = (char*)" < ";
		}
		goto label$703;
		label$719:;
		{
			fb$result$1 = (char*)" != ";
		}
		goto label$703;
		label$720:;
		{
			fb$result$1 = (char*)" >= ";
		}
		goto label$703;
		label$721:;
		{
			fb$result$1 = (char*)" <= ";
		}
		goto label$703;
		label$704:;
		static const void* tmp$686[23ll] = {
			&&label$705,
			&&label$706,
			&&label$707,
			&&label$708,
			&&label$709,
			&&label$710,
			&&label$713,
			&&label$714,
			&&label$703,
			&&label$703,
			&&label$715,
			&&label$703,
			&&label$703,
			&&label$711,
			&&label$712,
			&&label$703,
			&&label$703,
			&&label$716,
			&&label$717,
			&&label$718,
			&&label$719,
			&&label$720,
			&&label$721,
		};
		if( (TMP$430$2 - 28ull) > 22ull ) goto label$703;
		goto *tmp$686[TMP$430$2 - 28ull];
		label$703:;
	}
	label$702:;
	return fb$result$1;
}

static char* HUOPTOSTR( int64 OP$1, int64 DTYPE$1, int64* IS_BUILTIN$1 )
{
	char* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$722:;
	*IS_BUILTIN$1 = 0ll;
	{
		if( OP$1 != 22ll ) goto label$725;
		label$726:;
		{
			fb$result$1 = (char*)"&";
		}
		goto label$724;
		label$725:;
		if( OP$1 != 76ll ) goto label$727;
		label$728:;
		{
			fb$result$1 = (char*)"*";
		}
		goto label$724;
		label$727:;
		if( OP$1 != 54ll ) goto label$729;
		label$730:;
		{
			fb$result$1 = (char*)"-";
		}
		goto label$724;
		label$729:;
		if( OP$1 != 52ll ) goto label$731;
		label$732:;
		{
			fb$result$1 = (char*)"~";
		}
		goto label$724;
		label$731:;
		if( OP$1 != 56ll ) goto label$733;
		label$734:;
		{
			*IS_BUILTIN$1 = -1ll;
			{
				int64 TMP$449$4;
				uint64 TMP$450$4;
				if( (DTYPE$1 & 480ll) == 0ll ) goto label$735;
				TMP$449$4 = 24ll;
				goto label$1243;
				label$735:;
				TMP$449$4 = DTYPE$1 & 31ll;
				label$1243:;
				TMP$450$4 = *(uint64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$449$4 * 56ll)) + 40ll);
				goto label$737;
				label$738:;
				{
					fb$result$1 = (char*)"__builtin_fabsf";
				}
				goto label$736;
				label$739:;
				{
					fb$result$1 = (char*)"__builtin_fabs";
				}
				goto label$736;
				label$740:;
				{
					fb$result$1 = (char*)"__builtin_llabs";
				}
				goto label$736;
				label$741:;
				{
					fb$result$1 = (char*)"__builtin_abs";
				}
				goto label$736;
				label$737:;
				static const void* tmp$687[4ll] = {
					&&label$740,
					&&label$740,
					&&label$738,
					&&label$739,
				};
				if( (TMP$450$4 - 7ull) > 3ull ) goto label$741;
				goto *tmp$687[TMP$450$4 - 7ull];
				label$736:;
			}
		}
		goto label$724;
		label$733:;
		{
			*IS_BUILTIN$1 = -1ll;
			if( (DTYPE$1 & 511ll) != 15ll ) goto label$744;
			{
				{
					uint64 TMP$455$5;
					TMP$455$5 = (uint64)OP$1;
					goto label$746;
					label$747:;
					{
						fb$result$1 = (char*)"__builtin_sinf";
					}
					goto label$745;
					label$748:;
					{
						fb$result$1 = (char*)"__builtin_asinf";
					}
					goto label$745;
					label$749:;
					{
						fb$result$1 = (char*)"__builtin_cosf";
					}
					goto label$745;
					label$750:;
					{
						fb$result$1 = (char*)"__builtin_acosf";
					}
					goto label$745;
					label$751:;
					{
						fb$result$1 = (char*)"__builtin_tanf";
					}
					goto label$745;
					label$752:;
					{
						fb$result$1 = (char*)"__builtin_atanf";
					}
					goto label$745;
					label$753:;
					{
						fb$result$1 = (char*)"__builtin_sqrtf";
					}
					goto label$745;
					label$754:;
					{
						fb$result$1 = (char*)"__builtin_logf";
					}
					goto label$745;
					label$755:;
					{
						fb$result$1 = (char*)"__builtin_expf";
					}
					goto label$745;
					label$756:;
					{
						fb$result$1 = (char*)"__builtin_floorf";
					}
					goto label$745;
					label$757:;
					{
					}
					goto label$745;
					label$746:;
					static const void* tmp$688[13ll] = {
						&&label$747,
						&&label$748,
						&&label$749,
						&&label$750,
						&&label$751,
						&&label$752,
						&&label$757,
						&&label$753,
						&&label$757,
						&&label$757,
						&&label$754,
						&&label$755,
						&&label$756,
					};
					if( (TMP$455$5 - 58ull) > 12ull ) goto label$757;
					goto *tmp$688[TMP$455$5 - 58ull];
					label$745:;
				}
			}
			goto label$743;
			label$744:;
			{
				{
					uint64 TMP$466$5;
					TMP$466$5 = (uint64)OP$1;
					goto label$759;
					label$760:;
					{
						fb$result$1 = (char*)"__builtin_sin";
					}
					goto label$758;
					label$761:;
					{
						fb$result$1 = (char*)"__builtin_asin";
					}
					goto label$758;
					label$762:;
					{
						fb$result$1 = (char*)"__builtin_cos";
					}
					goto label$758;
					label$763:;
					{
						fb$result$1 = (char*)"__builtin_acos";
					}
					goto label$758;
					label$764:;
					{
						fb$result$1 = (char*)"__builtin_tan";
					}
					goto label$758;
					label$765:;
					{
						fb$result$1 = (char*)"__builtin_atan";
					}
					goto label$758;
					label$766:;
					{
						fb$result$1 = (char*)"__builtin_sqrt";
					}
					goto label$758;
					label$767:;
					{
						fb$result$1 = (char*)"__builtin_log";
					}
					goto label$758;
					label$768:;
					{
						fb$result$1 = (char*)"__builtin_exp";
					}
					goto label$758;
					label$769:;
					{
						fb$result$1 = (char*)"__builtin_floor";
					}
					goto label$758;
					label$770:;
					{
					}
					goto label$758;
					label$759:;
					static const void* tmp$689[13ll] = {
						&&label$760,
						&&label$761,
						&&label$762,
						&&label$763,
						&&label$764,
						&&label$765,
						&&label$770,
						&&label$766,
						&&label$770,
						&&label$770,
						&&label$767,
						&&label$768,
						&&label$769,
					};
					if( (TMP$466$5 - 58ull) > 12ull ) goto label$770;
					goto *tmp$689[TMP$466$5 - 58ull];
					label$758:;
				}
			}
			label$743:;
		}
		label$742:;
		label$724:;
	}
	label$723:;
	return fb$result$1;
}

static void HIMM2TEXT( FBSTRING* S$1, struct $8EXPRNODE* N$1 )
{
	int64 TMP$477$1;
	label$771:;
	if( (*(int64*)((uint8*)N$1 + 8ll) & 480ll) == 0ll ) goto label$773;
	TMP$477$1 = 24ll;
	goto label$1244;
	label$773:;
	TMP$477$1 = *(int64*)((uint8*)N$1 + 8ll) & 31ll;
	label$1244:;
	if( *(int64*)((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$477$1 * 56ll)) != 1ll ) goto label$775;
	{
		FBSTRING TMP$478$2;
		FBSTRING* vr$7 = HEMITFLOAT( *(int64*)((uint8*)N$1 + 8ll), *(double*)((uint8*)N$1 + 40ll) );
		__builtin_memset( &TMP$478$2, 0, 24ll );
		FBSTRING* vr$10 = fb_StrConcat( &TMP$478$2, (void*)S$1, -1ll, (void*)vr$7, -1ll );
		fb_StrAssign( (void*)S$1, -1ll, (void*)vr$10, -1ll, 0 );
	}
	goto label$774;
	label$775:;
	{
		FBSTRING TMP$479$2;
		FBSTRING* vr$13 = HEMITINT( *(int64*)((uint8*)N$1 + 8ll), *(int64*)((uint8*)N$1 + 40ll) );
		__builtin_memset( &TMP$479$2, 0, 24ll );
		FBSTRING* vr$16 = fb_StrConcat( &TMP$479$2, (void*)S$1, -1ll, (void*)vr$13, -1ll );
		fb_StrAssign( (void*)S$1, -1ll, (void*)vr$16, -1ll, 0 );
	}
	label$774:;
	label$772:;
}

static void HSYM2TEXT( FBSTRING* S$1, struct $8FBSYMBOL* SYM$1 )
{
	label$776:;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 1024ll) == 0ll ) goto label$779;
	{
		if( (*(int64*)((uint8*)SYM$1 + 56ll) & 511ll) != 7ll ) goto label$781;
		{
			int64 TMP$480$3;
			TMP$480$3 = 0ll;
			uint16* vr$8 = HUNESCAPEW( *(uint16**)((uint8*)SYM$1 + 96ll), &TMP$480$3 );
			HBUILDWSTRLIT( S$1, vr$8, *(int64*)((uint8*)SYM$1 + 80ll) / *(int64*)((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + 400ll) );
		}
		goto label$780;
		label$781:;
		{
			int64 TMP$481$3;
			TMP$481$3 = 0ll;
			char* vr$12 = HUNESCAPE( *(char**)((uint8*)SYM$1 + 96ll), &TMP$481$3 );
			HBUILDSTRLIT( S$1, vr$12, *(int64*)((uint8*)SYM$1 + 80ll) );
		}
		label$780:;
	}
	goto label$778;
	label$779:;
	{
		FBSTRING TMP$483$2;
		if( *(int64*)SYM$1 != 7ll ) goto label$783;
		{
			fb_StrConcatByref( (void*)S$1, -1ll, (void*)"&&", 3ll, 0 );
		}
		goto label$782;
		label$783:;
		if( *(int64*)SYM$1 != 3ll ) goto label$784;
		{
			fb_StrConcatByref( (void*)S$1, -1ll, (void*)"&", 2ll, 0 );
		}
		label$784:;
		label$782:;
		char* vr$15 = SYMBGETMANGLEDNAME( SYM$1 );
		__builtin_memset( &TMP$483$2, 0, 24ll );
		FBSTRING* vr$18 = fb_StrConcat( &TMP$483$2, (void*)S$1, -1ll, (void*)vr$15, 0ll );
		fb_StrAssign( (void*)S$1, -1ll, (void*)vr$18, -1ll, 0 );
	}
	label$778:;
	label$777:;
}

static void HEXPRFLUSH( struct $8EXPRNODE* N$1, int64 NEED_PARENS$1 )
{
	label$785:;
	struct $8EXPRNODE* L$1;
	struct $8FBSYMBOL* SYM$1;
	int64 IS_BUILTIN$1;
	{
		uint64 TMP$484$2;
		TMP$484$2 = *(uint64*)N$1;
		goto label$788;
		label$789:;
		{
			FBSTRING TMP$485$3;
			__builtin_memset( &TMP$485$3, 0, 24ll );
			FBSTRING* vr$5 = fb_StrConcat( &TMP$485$3, (void*)((uint8*)&CTX$ + 5424ll), -1ll, *(void**)((uint8*)N$1 + 40ll), 0ll );
			fb_StrAssign( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)vr$5, -1ll, 0 );
		}
		goto label$787;
		label$790:;
		{
			HIMM2TEXT( (FBSTRING*)((uint8*)&CTX$ + 5424ll), N$1 );
		}
		goto label$787;
		label$791:;
		{
			HSYM2TEXT( (FBSTRING*)((uint8*)&CTX$ + 5424ll), *(struct $8FBSYMBOL**)((uint8*)N$1 + 40ll) );
		}
		goto label$787;
		label$792:;
		{
			FBSTRING TMP$486$3;
			FBSTRING TMP$487$3;
			FBSTRING TMP$488$3;
			FBSTRING* vr$12 = HEMITTYPE( *(int64*)((uint8*)N$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)N$1 + 16ll) );
			__builtin_memset( &TMP$486$3, 0, 24ll );
			FBSTRING* vr$15 = fb_StrConcat( &TMP$486$3, (void*)"(", 2ll, (void*)vr$12, -1ll );
			__builtin_memset( &TMP$487$3, 0, 24ll );
			FBSTRING* vr$18 = fb_StrConcat( &TMP$487$3, (void*)vr$15, -1ll, (void*)")", 2ll );
			__builtin_memset( &TMP$488$3, 0, 24ll );
			FBSTRING* vr$22 = fb_StrConcat( &TMP$488$3, (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)vr$18, -1ll );
			fb_StrAssign( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)vr$22, -1ll, 0 );
			HEXPRFLUSH( *(struct $8EXPRNODE**)((uint8*)N$1 + 24ll), -1ll );
		}
		goto label$787;
		label$793:;
		{
			{
				int64 TMP$489$4;
				TMP$489$4 = *(int64*)((uint8*)N$1 + 40ll);
				if( TMP$489$4 != 112ll ) goto label$795;
				label$796:;
				{
					FBSTRING TMP$491$5;
					fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)"__builtin_va_arg( ", 19ll, 0 );
					HEXPRFLUSH( *(struct $8EXPRNODE**)((uint8*)N$1 + 24ll), -1ll );
					fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)", ", 3ll, 0 );
					FBSTRING* vr$31 = HEMITTYPE( *(int64*)((uint8*)N$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)N$1 + 16ll) );
					__builtin_memset( &TMP$491$5, 0, 24ll );
					FBSTRING* vr$35 = fb_StrConcat( &TMP$491$5, (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)vr$31, -1ll );
					fb_StrAssign( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)vr$35, -1ll, 0 );
					fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)")", 2ll, 0 );
				}
				goto label$794;
				label$795:;
				if( TMP$489$4 != 109ll ) goto label$797;
				label$798:;
				{
					fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)"__builtin_va_start( ", 21ll, 0 );
					HEXPRFLUSH( *(struct $8EXPRNODE**)((uint8*)N$1 + 24ll), -1ll );
					fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)", ", 3ll, 0 );
					HEXPRFLUSH( *(struct $8EXPRNODE**)((uint8*)N$1 + 32ll), -1ll );
					fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)")", 2ll, 0 );
				}
				goto label$794;
				label$797:;
				if( TMP$489$4 != 110ll ) goto label$799;
				label$800:;
				{
					fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)"__builtin_va_end( ", 19ll, 0 );
					HEXPRFLUSH( *(struct $8EXPRNODE**)((uint8*)N$1 + 24ll), -1ll );
					fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)")", 2ll, 0 );
				}
				goto label$794;
				label$799:;
				if( TMP$489$4 != 111ll ) goto label$801;
				label$802:;
				{
					fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)"__builtin_va_copy( ", 20ll, 0 );
					HEXPRFLUSH( *(struct $8EXPRNODE**)((uint8*)N$1 + 24ll), -1ll );
					fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)", ", 3ll, 0 );
					HEXPRFLUSH( *(struct $8EXPRNODE**)((uint8*)N$1 + 32ll), -1ll );
					fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)")", 2ll, 0 );
				}
				goto label$794;
				label$801:;
				{
				}
				label$803:;
				label$794:;
			}
		}
		goto label$787;
		label$804:;
		{
			FBSTRING TMP$495$3;
			char* vr$54 = HUOPTOSTR( *(int64*)((uint8*)N$1 + 40ll), *(int64*)((uint8*)N$1 + 8ll), &IS_BUILTIN$1 );
			__builtin_memset( &TMP$495$3, 0, 24ll );
			FBSTRING* vr$58 = fb_StrConcat( &TMP$495$3, (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)vr$54, 0ll );
			fb_StrAssign( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)vr$58, -1ll, 0 );
			NEED_PARENS$1 = (int64)-(*(int64*)*(struct $8EXPRNODE**)((uint8*)N$1 + 24ll) == 4ll) | IS_BUILTIN$1;
			if( NEED_PARENS$1 == 0ll ) goto label$806;
			{
				fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)"(", 2ll, 0 );
				if( IS_BUILTIN$1 == 0ll ) goto label$808;
				{
					fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)" ", 2ll, 0 );
				}
				label$808:;
				label$807:;
			}
			label$806:;
			label$805:;
			HEXPRFLUSH( *(struct $8EXPRNODE**)((uint8*)N$1 + 24ll), -1ll );
			if( NEED_PARENS$1 == 0ll ) goto label$810;
			{
				if( IS_BUILTIN$1 == 0ll ) goto label$812;
				{
					fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)" ", 2ll, 0 );
				}
				label$812:;
				label$811:;
				fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)")", 2ll, 0 );
			}
			label$810:;
			label$809:;
		}
		goto label$787;
		label$813:;
		{
			{
				int64 TMP$496$4;
				TMP$496$4 = *(int64*)((uint8*)N$1 + 40ll);
				if( TMP$496$4 != 64ll ) goto label$815;
				label$816:;
				{
					if( *(int64*)((uint8*)N$1 + 8ll) != 15ll ) goto label$818;
					{
						fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)"__builtin_atan2f", 17ll, 0 );
					}
					goto label$817;
					label$818:;
					{
						fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)"__builtin_atan2", 16ll, 0 );
					}
					label$817:;
					fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)"(", 2ll, 0 );
					HEXPRFLUSH( *(struct $8EXPRNODE**)((uint8*)N$1 + 24ll), 0ll );
					fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)", ", 3ll, 0 );
					HEXPRFLUSH( *(struct $8EXPRNODE**)((uint8*)N$1 + 32ll), 0ll );
					fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)")", 2ll, 0 );
				}
				goto label$814;
				label$815:;
				{
					FBSTRING TMP$499$5;
					if( NEED_PARENS$1 == 0ll ) goto label$821;
					{
						fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)"(", 2ll, 0 );
					}
					label$821:;
					label$820:;
					HEXPRFLUSH( *(struct $8EXPRNODE**)((uint8*)N$1 + 24ll), -1ll );
					char* vr$81 = HBOPTOSTR( *(int64*)((uint8*)N$1 + 40ll) );
					__builtin_memset( &TMP$499$5, 0, 24ll );
					FBSTRING* vr$85 = fb_StrConcat( &TMP$499$5, (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)vr$81, 0ll );
					fb_StrAssign( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)vr$85, -1ll, 0 );
					HEXPRFLUSH( *(struct $8EXPRNODE**)((uint8*)N$1 + 32ll), -1ll );
					if( NEED_PARENS$1 == 0ll ) goto label$823;
					{
						fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)")", 2ll, 0 );
					}
					label$823:;
					label$822:;
				}
				label$819:;
				label$814:;
			}
		}
		goto label$787;
		label$788:;
		static const void* tmp$690[7ll] = {
			&&label$789,
			&&label$790,
			&&label$791,
			&&label$792,
			&&label$804,
			&&label$813,
			&&label$793,
		};
		if( TMP$484$2 > 6ull ) goto label$787;
		goto *tmp$690[TMP$484$2 - 0ull];
		label$787:;
	}
	label$786:;
}

static FBSTRING* EXPRFLUSH( struct $8EXPRNODE* N$1, int64 NEED_PARENS$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$824:;
	HEXPRFLUSH( N$1, NEED_PARENS$1 );
	fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)((uint8*)&CTX$ + 5424ll), -1ll, 0 );
	fb_StrAssign( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)"", 1ll, 0 );
	EXPRFREETREE( N$1 );
	label$825:;
	FBSTRING* vr$5 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$5;
}

static struct $8EXPRNODE* EXPRNEWOFFSET( struct $8FBSYMBOL* SYM$1, int64 OFS$1 )
{
	struct $8EXPRNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$826:;
	struct $8EXPRNODE* L$1;
	struct $8EXPRNODE* vr$1 = EXPRNEWSYM( SYM$1 );
	L$1 = vr$1;
	int64 vr$5 = SYMBISCARRAY( SYM$1 );
	if( ((((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 512ll) != 0ll) | vr$5) | (int64)-(*(int64*)SYM$1 == 3ll)) | (int64)-(*(int64*)SYM$1 == 7ll)) != 0ll ) goto label$829;
	{
		struct $8EXPRNODE* vr$13 = EXPRNEWUOP( 22ll, L$1 );
		L$1 = vr$13;
	}
	label$829:;
	label$828:;
	if( OFS$1 == 0ll ) goto label$831;
	{
		struct $8EXPRNODE* vr$14 = EXPRNEWCAST( 35ll, (struct $8FBSYMBOL*)0ull, L$1 );
		L$1 = vr$14;
		struct $8EXPRNODE* vr$15 = EXPRNEWIMMI( OFS$1, 8ll );
		struct $8EXPRNODE* vr$16 = EXPRNEWBOP( 28ll, L$1, vr$15 );
		L$1 = vr$16;
	}
	label$831:;
	label$830:;
	fb$result$1 = L$1;
	label$827:;
	return fb$result$1;
}

static struct $8EXPRNODE* EXPRNEWVREG( struct $6IRVREG* VREG$1, int64 IS_LVALUE$1 )
{
	struct $8EXPRNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$832:;
	struct $8EXPRNODE* L$1;
	int64 DTYPE$1;
	int64 HAVE_OFFSET$1;
	{
		uint64 TMP$500$2;
		TMP$500$2 = *(uint64*)VREG$1;
		goto label$835;
		label$836:;
		{
			if( *(struct $8FBSYMBOL**)((uint8*)VREG$1 + 56ll) != (struct $8FBSYMBOL*)0ull ) goto label$838;
			{
				if( *(struct $6IRVREG**)((uint8*)VREG$1 + 80ll) == (struct $6IRVREG*)0ull ) goto label$840;
				{
					struct $8EXPRNODE* vr$5 = EXPRNEWVREG( *(struct $6IRVREG**)((uint8*)VREG$1 + 80ll), 0ll );
					L$1 = vr$5;
					if( *(int64*)((uint8*)VREG$1 + 64ll) == 0ll ) goto label$842;
					{
						struct $8EXPRNODE* vr$7 = EXPRNEWCAST( 35ll, (struct $8FBSYMBOL*)0ull, L$1 );
						L$1 = vr$7;
						struct $8EXPRNODE* vr$9 = EXPRNEWIMMI( *(int64*)((uint8*)VREG$1 + 64ll), 8ll );
						struct $8EXPRNODE* vr$10 = EXPRNEWBOP( 28ll, L$1, vr$9 );
						L$1 = vr$10;
					}
					label$842:;
					label$841:;
				}
				goto label$839;
				label$840:;
				{
					struct $8EXPRNODE* vr$12 = EXPRNEWIMMI( *(int64*)((uint8*)VREG$1 + 64ll), 8ll );
					L$1 = vr$12;
				}
				label$839:;
				struct $8EXPRNODE* vr$27 = EXPRNEWCAST( (((*(int64*)((uint8*)VREG$1 + 8ll) & 31ll) | ((*(int64*)((uint8*)VREG$1 + 8ll) & 480ll) + 32ll)) | ((*(int64*)((uint8*)VREG$1 + 8ll) & 261632ll) << (1ll & 63ll))) | (*(int64*)((uint8*)VREG$1 + 8ll) & 32505856ll), *(struct $8FBSYMBOL**)((uint8*)VREG$1 + 16ll), L$1 );
				L$1 = vr$27;
				struct $8EXPRNODE* vr$28 = EXPRNEWUOP( 76ll, L$1 );
				L$1 = vr$28;
				goto label$834;
			}
			label$838:;
			label$837:;
			HAVE_OFFSET$1 = (int64)-(*(int64*)((uint8*)VREG$1 + 64ll) != 0ll) | (int64)-(*(struct $6IRVREG**)((uint8*)VREG$1 + 80ll) != (struct $6IRVREG*)0ull);
			int64 IS_C_ARRAY$3;
			int64 vr$35 = SYMBISCARRAY( *(struct $8FBSYMBOL**)((uint8*)VREG$1 + 56ll) );
			IS_C_ARRAY$3 = vr$35;
			int64 DO_DEREF$3;
			DO_DEREF$3 = HAVE_OFFSET$1 | IS_C_ARRAY$3;
			struct $8EXPRNODE* vr$38 = EXPRNEWSYM( *(struct $8FBSYMBOL**)((uint8*)VREG$1 + 56ll) );
			L$1 = vr$38;
			int64 SYMDTYPE$3;
			SYMDTYPE$3 = *(int64*)((uint8*)L$1 + 8ll);
			struct $8FBSYMBOL* SYMSUBTYPE$3;
			SYMSUBTYPE$3 = *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll);
			if( ((int64)-(*(int64*)((uint8*)VREG$1 + 8ll) != SYMDTYPE$3) | (int64)-(*(struct $8FBSYMBOL**)((uint8*)VREG$1 + 16ll) != SYMSUBTYPE$3)) == 0ll ) goto label$844;
			{
				int64 TMP$501$4;
				int64 TMP$502$4;
				if( (*(int64*)((uint8*)VREG$1 + 8ll) & 480ll) == 0ll ) goto label$845;
				TMP$501$4 = 24ll;
				goto label$1245;
				label$845:;
				TMP$501$4 = *(int64*)((uint8*)VREG$1 + 8ll) & 31ll;
				label$1245:;
				if( (SYMDTYPE$3 & 480ll) == 0ll ) goto label$846;
				TMP$502$4 = 24ll;
				goto label$1246;
				label$846:;
				TMP$502$4 = SYMDTYPE$3 & 31ll;
				label$1246:;
				DO_DEREF$3 = DO_DEREF$3 | (int64)-(*(int64*)((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$501$4 * 56ll)) != *(int64*)((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$502$4 * 56ll)));
				{
					int64 TMP$503$5;
					int64 TMP$504$5;
					if( (*(int64*)((uint8*)VREG$1 + 8ll) & 480ll) == 0ll ) goto label$847;
					TMP$503$5 = 24ll;
					goto label$1247;
					label$847:;
					TMP$503$5 = *(int64*)((uint8*)VREG$1 + 8ll) & 31ll;
					label$1247:;
					TMP$504$5 = TMP$503$5;
					if( TMP$504$5 != 17ll ) goto label$849;
					label$850:;
					{
						DO_DEREF$3 = -1ll;
					}
					goto label$848;
					label$849:;
					if( TMP$504$5 != 20ll ) goto label$851;
					label$852:;
					{
						$19FB_CVA_LIST_TYPEDEF vr$64 = SYMBGETVALISTTYPE( *(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)VREG$1 + 56ll) + 56ll), *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)VREG$1 + 56ll) + 64ll) );
						DO_DEREF$3 = DO_DEREF$3 | (int64)-(vr$64 != 3ll);
					}
					goto label$848;
					label$851:;
					{
						{
							int64 TMP$505$7;
							int64 TMP$506$7;
							if( (SYMDTYPE$3 & 480ll) == 0ll ) goto label$854;
							TMP$505$7 = 24ll;
							goto label$1248;
							label$854:;
							TMP$505$7 = SYMDTYPE$3 & 31ll;
							label$1248:;
							TMP$506$7 = TMP$505$7;
							if( TMP$506$7 != 17ll ) goto label$856;
							label$857:;
							{
								DO_DEREF$3 = -1ll;
							}
							goto label$855;
							label$856:;
							if( TMP$506$7 != 20ll ) goto label$858;
							label$859:;
							{
								$19FB_CVA_LIST_TYPEDEF vr$73 = SYMBGETVALISTTYPE( *(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)VREG$1 + 56ll) + 56ll), *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)VREG$1 + 56ll) + 64ll) );
								DO_DEREF$3 = DO_DEREF$3 | (int64)-(vr$73 != 3ll);
							}
							label$858:;
							label$855:;
						}
					}
					label$853:;
					label$848:;
				}
			}
			label$844:;
			label$843:;
			if( DO_DEREF$3 != 0ll ) goto label$861;
			{
				goto label$834;
			}
			label$861:;
			label$860:;
			if( IS_C_ARRAY$3 != 0ll ) goto label$863;
			{
				struct $8EXPRNODE* vr$76 = EXPRNEWUOP( 22ll, L$1 );
				L$1 = vr$76;
			}
			label$863:;
			label$862:;
			if( HAVE_OFFSET$1 == 0ll ) goto label$865;
			{
				if( IS_C_ARRAY$3 == 0ll ) goto label$867;
				{
					struct $8EXPRNODE* vr$77 = EXPRNEWCAST( 8ll, (struct $8FBSYMBOL*)0ull, L$1 );
					L$1 = vr$77;
				}
				goto label$866;
				label$867:;
				{
					struct $8EXPRNODE* vr$78 = EXPRNEWCAST( 35ll, (struct $8FBSYMBOL*)0ull, L$1 );
					L$1 = vr$78;
				}
				label$866:;
				if( *(struct $6IRVREG**)((uint8*)VREG$1 + 80ll) == (struct $6IRVREG*)0ull ) goto label$869;
				{
					struct $8EXPRNODE* vr$81 = EXPRNEWVREG( *(struct $6IRVREG**)((uint8*)VREG$1 + 80ll), 0ll );
					struct $8EXPRNODE* vr$82 = EXPRNEWBOP( 28ll, L$1, vr$81 );
					L$1 = vr$82;
				}
				label$869:;
				label$868:;
				if( *(int64*)((uint8*)VREG$1 + 64ll) == 0ll ) goto label$871;
				{
					struct $8EXPRNODE* vr$85 = EXPRNEWIMMI( *(int64*)((uint8*)VREG$1 + 64ll), 8ll );
					struct $8EXPRNODE* vr$86 = EXPRNEWBOP( 28ll, L$1, vr$85 );
					L$1 = vr$86;
				}
				label$871:;
				label$870:;
			}
			label$865:;
			label$864:;
			struct $8EXPRNODE* vr$101 = EXPRNEWCAST( (((*(int64*)((uint8*)VREG$1 + 8ll) & 31ll) | ((*(int64*)((uint8*)VREG$1 + 8ll) & 480ll) + 32ll)) | ((*(int64*)((uint8*)VREG$1 + 8ll) & 261632ll) << (1ll & 63ll))) | (*(int64*)((uint8*)VREG$1 + 8ll) & 32505856ll), *(struct $8FBSYMBOL**)((uint8*)VREG$1 + 16ll), L$1 );
			L$1 = vr$101;
			struct $8EXPRNODE* vr$102 = EXPRNEWUOP( 76ll, L$1 );
			L$1 = vr$102;
		}
		goto label$834;
		label$872:;
		{
			struct $8EXPRNODE* vr$105 = EXPRNEWOFFSET( *(struct $8FBSYMBOL**)((uint8*)VREG$1 + 56ll), *(int64*)((uint8*)VREG$1 + 64ll) );
			L$1 = vr$105;
		}
		goto label$834;
		label$873:;
		{
			int64 TMP$507$3;
			DTYPE$1 = *(int64*)((uint8*)VREG$1 + 8ll);
			if( (DTYPE$1 & 480ll) == 0ll ) goto label$874;
			TMP$507$3 = 24ll;
			goto label$1249;
			label$874:;
			TMP$507$3 = DTYPE$1 & 31ll;
			label$1249:;
			if( *(int64*)((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$507$3 * 56ll)) != 1ll ) goto label$876;
			{
				struct $8EXPRNODE* vr$111 = EXPRNEWIMMF( *(double*)((uint8*)VREG$1 + 48ll), DTYPE$1 );
				L$1 = vr$111;
			}
			goto label$875;
			label$876:;
			if( DTYPE$1 != 1ll ) goto label$877;
			{
				int64 TMP$508$4;
				if( *(int64*)((uint8*)VREG$1 + 48ll) == 0ll ) goto label$878;
				TMP$508$4 = 1ll;
				goto label$1250;
				label$878:;
				TMP$508$4 = 0ll;
				label$1250:;
				struct $8EXPRNODE* vr$113 = EXPRNEWIMMI( TMP$508$4, 8ll );
				L$1 = vr$113;
			}
			goto label$875;
			label$877:;
			{
				struct $8EXPRNODE* vr$115 = EXPRNEWIMMI( *(int64*)((uint8*)VREG$1 + 48ll), DTYPE$1 );
				L$1 = vr$115;
			}
			label$875:;
		}
		goto label$834;
		label$879:;
		{
			struct $8EXPRNODE* vr$117 = EXPRLOOKUP( *(int64*)((uint8*)VREG$1 + 24ll) );
			L$1 = vr$117;
			if( L$1 != (struct $8EXPRNODE*)0ull ) goto label$881;
			{
				FBSTRING TMP$510$4;
				FBSTRING TMP$511$4;
				__builtin_memset( &TMP$511$4, 0, 24ll );
				FBSTRING* vr$120 = fb_LongintToStr( *(int64*)((uint8*)VREG$1 + 24ll) );
				__builtin_memset( &TMP$510$4, 0, 24ll );
				FBSTRING* vr$123 = fb_StrConcat( &TMP$510$4, (void*)"vr$", 4ll, (void*)vr$120, -1ll );
				fb_StrAssign( (void*)&TMP$511$4, -1ll, (void*)vr$123, -1ll, 0 );
				struct $8EXPRNODE* vr$127 = EXPRNEWTEXT( *(int64*)((uint8*)VREG$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)VREG$1 + 16ll), (char*)*(char**)&TMP$511$4 );
				L$1 = vr$127;
				fb_StrDelete( (FBSTRING*)&TMP$511$4 );
			}
			label$881:;
			label$880:;
		}
		goto label$834;
		label$835:;
		static const void* tmp$691[6ll] = {
			&&label$873,
			&&label$836,
			&&label$836,
			&&label$836,
			&&label$879,
			&&label$872,
		};
		if( TMP$500$2 > 5ull ) goto label$834;
		goto *tmp$691[TMP$500$2 - 0ull];
		label$834:;
	}
	if( IS_LVALUE$1 != 0ll ) goto label$883;
	{
		struct $8EXPRNODE* vr$131 = EXPRNEWCAST( *(int64*)((uint8*)VREG$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)VREG$1 + 16ll), L$1 );
		L$1 = vr$131;
	}
	label$883:;
	label$882:;
	fb$result$1 = L$1;
	label$833:;
	return fb$result$1;
}

static void _EMITLABEL( struct $8FBSYMBOL* LABEL$1 )
{
	label$884:;
	int64 vr$0 = SECTIONINSIDEPROC(  );
	if( vr$0 == 0ll ) goto label$887;
	{
		FBSTRING TMP$513$2;
		FBSTRING TMP$514$2;
		__builtin_memset( &TMP$514$2, 0, 24ll );
		char* vr$2 = SYMBGETMANGLEDNAME( LABEL$1 );
		__builtin_memset( &TMP$513$2, 0, 24ll );
		FBSTRING* vr$5 = fb_StrConcat( &TMP$513$2, (void*)vr$2, 0ll, (void*)":;", 3ll );
		fb_StrAssign( (void*)&TMP$514$2, -1ll, (void*)vr$5, -1ll, 0 );
		HWRITELINE( &TMP$514$2, 0ll );
		fb_StrDelete( (FBSTRING*)&TMP$514$2 );
	}
	label$887:;
	label$886:;
	label$885:;
}

static void EXPRSTORE( struct $6IRVREG* VR$1, struct $8EXPRNODE* R$1, int64 HAS_SIDEFX$1 )
{
	label$888:;
	static FBSTRING LN$1;
	static FBSTRING TEMPVAR$1;
	struct $8EXPRNODE* L$1;
	if( *(int64*)VR$1 != 4ll ) goto label$891;
	{
		if( HAS_SIDEFX$1 == 0ll ) goto label$893;
		{
			FBSTRING TMP$515$3;
			FBSTRING* vr$2 = fb_LongintToStr( *(int64*)((uint8*)VR$1 + 24ll) );
			__builtin_memset( &TMP$515$3, 0, 24ll );
			FBSTRING* vr$5 = fb_StrConcat( &TMP$515$3, (void*)"vr$", 4ll, (void*)vr$2, -1ll );
			fb_StrAssign( (void*)&TEMPVAR$1, -1ll, (void*)vr$5, -1ll, 0 );
			FBSTRING* vr$8 = HEMITTYPE( *(int64*)((uint8*)VR$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)VR$1 + 16ll) );
			fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$8, -1ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" ", 2ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)&TEMPVAR$1, -1ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" = ", 4ll, 0 );
			FBSTRING* vr$9 = EXPRFLUSH( R$1, 0ll );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$9, -1ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)";", 2ll, 0 );
			HWRITELINE( &LN$1, 0ll );
			struct $8EXPRNODE* vr$12 = EXPRNEWTEXT( *(int64*)((uint8*)VR$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)VR$1 + 16ll), (char*)*(char**)&TEMPVAR$1 );
			R$1 = vr$12;
		}
		goto label$892;
		label$893:;
		{
			struct $8EXPRNODE* vr$15 = EXPRNEWCAST( *(int64*)((uint8*)VR$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)VR$1 + 16ll), R$1 );
			R$1 = vr$15;
		}
		label$892:;
		EXPRCACHE( *(int64*)((uint8*)VR$1 + 24ll), R$1 );
	}
	goto label$890;
	label$891:;
	{
		struct $8EXPRNODE* vr$17 = EXPRNEWVREG( VR$1, -1ll );
		L$1 = vr$17;
		struct $8EXPRNODE* vr$20 = EXPRNEWCAST( *(int64*)((uint8*)VR$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)VR$1 + 16ll), R$1 );
		R$1 = vr$20;
		if( ((int64)-((*(int64*)((uint8*)L$1 + 8ll) & 480ll) != 0ll) | (int64)-((*(int64*)((uint8*)R$1 + 8ll) & 480ll) != 0ll)) == 0ll ) goto label$895;
		{
			struct $8EXPRNODE* vr$30 = EXPRNEWCAST( *(int64*)((uint8*)L$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll), R$1 );
			R$1 = vr$30;
		}
		label$895:;
		label$894:;
		FBSTRING* vr$31 = EXPRFLUSH( L$1, 0ll );
		fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$31, -1ll, 0 );
		fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" = ", 4ll, 0 );
		FBSTRING* vr$32 = EXPRFLUSH( R$1, 0ll );
		fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$32, -1ll, 0 );
		fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)";", 2ll, 0 );
		HWRITELINE( &LN$1, 0ll );
	}
	label$890:;
	label$889:;
}

static void _EMITBOP( int64 OP$1, struct $6IRVREG* V1$1, struct $6IRVREG* V2$1, struct $6IRVREG* VR$1, struct $8FBSYMBOL* LABEL$1 )
{
	label$896:;
	struct $8EXPRNODE* L$1;
	struct $8EXPRNODE* R$1;
	struct $8EXPRNODE* vr$0 = EXPRNEWVREG( V1$1, 0ll );
	L$1 = vr$0;
	struct $8EXPRNODE* vr$1 = EXPRNEWVREG( V2$1, 0ll );
	R$1 = vr$1;
	if( LABEL$1 == (struct $8FBSYMBOL*)0ull ) goto label$899;
	{
		FBSTRING TMP$518$2;
		static FBSTRING S$2;
		fb_StrAssign( (void*)&S$2, -1ll, (void*)"if( ", 5ll, 0 );
		struct $8EXPRNODE* vr$2 = EXPRNEWBOP( OP$1, L$1, R$1 );
		FBSTRING* vr$3 = EXPRFLUSH( vr$2, 0ll );
		fb_StrConcatAssign( (void*)&S$2, -1ll, (void*)vr$3, -1ll, 0 );
		fb_StrConcatAssign( (void*)&S$2, -1ll, (void*)" ) goto ", 9ll, 0 );
		char* vr$4 = SYMBGETMANGLEDNAME( LABEL$1 );
		__builtin_memset( &TMP$518$2, 0, 24ll );
		FBSTRING* vr$7 = fb_StrConcat( &TMP$518$2, (void*)&S$2, -1ll, (void*)vr$4, 0ll );
		fb_StrAssign( (void*)&S$2, -1ll, (void*)vr$7, -1ll, 0 );
		fb_StrConcatAssign( (void*)&S$2, -1ll, (void*)";", 2ll, 0 );
		HWRITELINE( &S$2, 0ll );
		goto label$897;
	}
	label$899:;
	label$898:;
	if( VR$1 != (struct $6IRVREG*)0ull ) goto label$901;
	{
		VR$1 = V1$1;
	}
	label$901:;
	label$900:;
	{
		uint64 TMP$519$2;
		TMP$519$2 = (uint64)OP$1;
		goto label$903;
		label$904:;
		{
			struct $8EXPRNODE* vr$8 = EXPRNEWBOP( OP$1, L$1, R$1 );
			L$1 = vr$8;
			if( *(int64*)((uint8*)VR$1 + 8ll) == 1ll ) goto label$906;
			{
				struct $8EXPRNODE* vr$10 = EXPRNEWUOP( 54ll, L$1 );
				L$1 = vr$10;
			}
			label$906:;
			label$905:;
		}
		goto label$902;
		label$907:;
		{
			if( (*(int64*)((uint8*)V1$1 + 8ll) & 480ll) == 0ll ) goto label$909;
			{
				struct $8EXPRNODE* vr$13 = EXPRNEWCAST( 35ll, (struct $8FBSYMBOL*)0ull, L$1 );
				L$1 = vr$13;
			}
			label$909:;
			label$908:;
			if( (*(int64*)((uint8*)V2$1 + 8ll) & 480ll) == 0ll ) goto label$911;
			{
				struct $8EXPRNODE* vr$16 = EXPRNEWCAST( 35ll, (struct $8FBSYMBOL*)0ull, R$1 );
				R$1 = vr$16;
			}
			label$911:;
			label$910:;
			struct $8EXPRNODE* vr$17 = EXPRNEWBOP( OP$1, L$1, R$1 );
			L$1 = vr$17;
		}
		goto label$902;
		label$912:;
		{
			struct $8EXPRNODE* vr$18 = EXPRNEWCAST( 16ll, (struct $8FBSYMBOL*)0ull, L$1 );
			L$1 = vr$18;
			struct $8EXPRNODE* vr$19 = EXPRNEWCAST( 16ll, (struct $8FBSYMBOL*)0ull, R$1 );
			R$1 = vr$19;
			struct $8EXPRNODE* vr$20 = EXPRNEWBOP( OP$1, L$1, R$1 );
			L$1 = vr$20;
		}
		goto label$902;
		label$913:;
		{
			struct $8EXPRNODE* vr$21 = EXPRNEWBOP( OP$1, L$1, R$1 );
			L$1 = vr$21;
		}
		goto label$902;
		label$914:;
		{
			int64 TMP$520$3;
			if( (*(int64*)((uint8*)L$1 + 8ll) & 480ll) == 0ll ) goto label$915;
			TMP$520$3 = 24ll;
			goto label$1251;
			label$915:;
			TMP$520$3 = *(int64*)((uint8*)L$1 + 8ll) & 31ll;
			label$1251:;
			struct $8EXPRNODE* vr$29 = EXPRNEWIMMI( (*(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$520$3 * 56ll)) + 8ll) << (3ll & 63ll)) + -1ll, 8ll );
			struct $8EXPRNODE* vr$30 = EXPRNEWBOP( 34ll, R$1, vr$29 );
			R$1 = vr$30;
			struct $8EXPRNODE* vr$31 = EXPRNEWBOP( OP$1, L$1, R$1 );
			L$1 = vr$31;
		}
		goto label$902;
		label$916:;
		{
			struct $8EXPRNODE* vr$32 = EXPRNEWBOP( 38ll, L$1, R$1 );
			L$1 = vr$32;
			if( *(int64*)((uint8*)VR$1 + 8ll) != 1ll ) goto label$918;
			{
				struct $8EXPRNODE* vr$34 = EXPRNEWIMMI( 1ll, 8ll );
				struct $8EXPRNODE* vr$35 = EXPRNEWBOP( 38ll, L$1, vr$34 );
				L$1 = vr$35;
			}
			goto label$917;
			label$918:;
			{
				struct $8EXPRNODE* vr$36 = EXPRNEWUOP( 52ll, L$1 );
				L$1 = vr$36;
			}
			label$917:;
		}
		goto label$902;
		label$919:;
		{
			if( *(int64*)((uint8*)VR$1 + 8ll) != 1ll ) goto label$921;
			{
				struct $8EXPRNODE* vr$38 = EXPRNEWIMMI( 1ll, 8ll );
				struct $8EXPRNODE* vr$39 = EXPRNEWBOP( 38ll, L$1, vr$38 );
				L$1 = vr$39;
			}
			goto label$920;
			label$921:;
			{
				struct $8EXPRNODE* vr$40 = EXPRNEWUOP( 52ll, L$1 );
				L$1 = vr$40;
			}
			label$920:;
			struct $8EXPRNODE* vr$41 = EXPRNEWBOP( 35ll, L$1, R$1 );
			L$1 = vr$41;
		}
		goto label$902;
		label$903:;
		static const void* tmp$692[23ll] = {
			&&label$907,
			&&label$907,
			&&label$913,
			&&label$912,
			&&label$913,
			&&label$913,
			&&label$913,
			&&label$913,
			&&label$902,
			&&label$902,
			&&label$913,
			&&label$916,
			&&label$919,
			&&label$914,
			&&label$914,
			&&label$902,
			&&label$902,
			&&label$904,
			&&label$904,
			&&label$904,
			&&label$904,
			&&label$904,
			&&label$904,
		};
		if( (TMP$519$2 - 28ull) > 22ull ) goto label$902;
		goto *tmp$692[TMP$519$2 - 28ull];
		label$902:;
	}
	EXPRSTORE( VR$1, L$1, 0ll );
	label$897:;
}

static void _EMITUOP( int64 OP$1, struct $6IRVREG* V1$1, struct $6IRVREG* VR$1 )
{
	label$922:;
	if( VR$1 != (struct $6IRVREG*)0ull ) goto label$925;
	{
		VR$1 = V1$1;
	}
	label$925:;
	label$924:;
	struct $8EXPRNODE* EXPR$1;
	struct $8EXPRNODE* vr$0 = EXPRNEWVREG( V1$1, 0ll );
	EXPR$1 = vr$0;
	if( ((int64)-(OP$1 == 52ll) & (int64)-(*(int64*)((uint8*)VR$1 + 8ll) == 1ll)) == 0ll ) goto label$927;
	{
		struct $8EXPRNODE* vr$5 = EXPRNEWIMMI( 0ll, 8ll );
		struct $8EXPRNODE* vr$6 = EXPRNEWBOP( 45ll, EXPR$1, vr$5 );
		EXPR$1 = vr$6;
	}
	goto label$926;
	label$927:;
	{
		struct $8EXPRNODE* vr$7 = EXPRNEWUOP( OP$1, EXPR$1 );
		EXPR$1 = vr$7;
	}
	label$926:;
	EXPRSTORE( VR$1, EXPR$1, 0ll );
	label$923:;
}

static void _EMITCONVERT( struct $6IRVREG* V1$1, struct $6IRVREG* V2$1 )
{
	int64 TMP$523$1;
	int64 TMP$524$1;
	label$928:;
	struct $8EXPRNODE* R$1;
	struct $8EXPRNODE* vr$0 = EXPRNEWVREG( V2$1, 0ll );
	R$1 = vr$0;
	if( ((int64)-(*(int64*)((uint8*)V1$1 + 8ll) != 1ll) & (int64)-(*(int64*)((uint8*)R$1 + 8ll) == 1ll)) == 0ll ) goto label$931;
	{
		if( *(int64*)R$1 != 1ll ) goto label$933;
		{
			*(int64*)((uint8*)R$1 + 40ll) = (int64)-(*(int64*)((uint8*)R$1 + 40ll) != 0ll);
			*(int64*)((uint8*)R$1 + 8ll) = 11ll;
		}
		goto label$932;
		label$933:;
		{
			struct $8EXPRNODE* vr$11 = EXPRNEWUOP( 54ll, R$1 );
			R$1 = vr$11;
		}
		label$932:;
	}
	goto label$930;
	label$931:;
	if( ((int64)-(*(int64*)((uint8*)V1$1 + 8ll) == 1ll) & (int64)-(*(int64*)((uint8*)R$1 + 8ll) != 1ll)) == 0ll ) goto label$934;
	{
		if( *(int64*)R$1 != 1ll ) goto label$936;
		{
			int64 TMP$521$3;
			int64 TMP$522$3;
			if( (*(int64*)((uint8*)R$1 + 8ll) & 480ll) == 0ll ) goto label$937;
			TMP$521$3 = 24ll;
			goto label$1252;
			label$937:;
			TMP$521$3 = *(int64*)((uint8*)R$1 + 8ll) & 31ll;
			label$1252:;
			if( *(int64*)((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$521$3 * 56ll)) != 1ll ) goto label$938;
			TMP$522$3 = (int64)-(*(double*)((uint8*)R$1 + 40ll) != 0x0p+0);
			goto label$1253;
			label$938:;
			TMP$522$3 = (int64)-(*(int64*)((uint8*)R$1 + 40ll) != 0ll);
			label$1253:;
			*(int64*)((uint8*)R$1 + 40ll) = -TMP$522$3;
			*(int64*)((uint8*)R$1 + 8ll) = 11ll;
		}
		goto label$935;
		label$936:;
		{
			struct $8EXPRNODE* vr$30 = EXPRNEWIMMI( 0ll, 8ll );
			struct $8EXPRNODE* vr$31 = EXPRNEWBOP( 48ll, R$1, vr$30 );
			R$1 = vr$31;
		}
		label$935:;
	}
	goto label$930;
	label$934:;
	if( (*(int64*)((uint8*)V1$1 + 8ll) & 480ll) == 0ll ) goto label$940;
	TMP$523$1 = 24ll;
	goto label$1254;
	label$940:;
	TMP$523$1 = *(int64*)((uint8*)V1$1 + 8ll) & 31ll;
	label$1254:;
	if( (*(int64*)((uint8*)R$1 + 8ll) & 480ll) == 0ll ) goto label$941;
	TMP$524$1 = 24ll;
	goto label$1255;
	label$941:;
	TMP$524$1 = *(int64*)((uint8*)R$1 + 8ll) & 31ll;
	label$1255:;
	if( ((int64)-(*(int64*)((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$523$1 * 56ll)) == 0ll) & (int64)-(*(int64*)((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$524$1 * 56ll)) == 1ll)) == 0ll ) goto label$939;
	{
		FBSTRING S$2;
		__builtin_memset( &S$2, 0, 24ll );
		int64 TEMPDTYPE$2;
		__builtin_memset( &TEMPDTYPE$2, 0, 8ll );
		{
			int64 TMP$525$3;
			int64 TMP$526$3;
			if( (*(int64*)((uint8*)V1$1 + 8ll) & 480ll) == 0ll ) goto label$942;
			TMP$525$3 = 24ll;
			goto label$1256;
			label$942:;
			TMP$525$3 = *(int64*)((uint8*)V1$1 + 8ll) & 31ll;
			label$1256:;
			TMP$526$3 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$525$3 * 56ll)) + 40ll);
			if( TMP$526$3 > 5ll ) goto label$944;
			label$945:;
			{
				if( *(int64*)((uint8*)R$1 + 8ll) != 15ll ) goto label$947;
				{
					fb_StrAssign( (void*)&S$2, -1ll, (void*)"fb_F2I", 7ll, 0 );
					*(uint64*)((uint8*)&CTX$ + 5208ll) = *(uint64*)((uint8*)&CTX$ + 5208ll) | 1ull;
				}
				goto label$946;
				label$947:;
				{
					fb_StrAssign( (void*)&S$2, -1ll, (void*)"fb_D2I", 7ll, 0 );
					*(uint64*)((uint8*)&CTX$ + 5208ll) = *(uint64*)((uint8*)&CTX$ + 5208ll) | 8ull;
				}
				label$946:;
				TEMPDTYPE$2 = 11ll;
			}
			goto label$943;
			label$944:;
			if( TMP$526$3 > 7ll ) goto label$948;
			label$949:;
			{
				if( *(int64*)((uint8*)R$1 + 8ll) != 15ll ) goto label$951;
				{
					fb_StrAssign( (void*)&S$2, -1ll, (void*)"fb_F2L", 7ll, 0 );
					*(uint64*)((uint8*)&CTX$ + 5208ll) = *(uint64*)((uint8*)&CTX$ + 5208ll) | 2ull;
				}
				goto label$950;
				label$951:;
				{
					fb_StrAssign( (void*)&S$2, -1ll, (void*)"fb_D2L", 7ll, 0 );
					*(uint64*)((uint8*)&CTX$ + 5208ll) = *(uint64*)((uint8*)&CTX$ + 5208ll) | 16ull;
				}
				label$950:;
				TEMPDTYPE$2 = 13ll;
			}
			goto label$943;
			label$948:;
			{
				if( *(int64*)((uint8*)R$1 + 8ll) != 15ll ) goto label$954;
				{
					fb_StrAssign( (void*)&S$2, -1ll, (void*)"fb_F2UL", 8ll, 0 );
					*(uint64*)((uint8*)&CTX$ + 5208ll) = *(uint64*)((uint8*)&CTX$ + 5208ll) | 4ull;
				}
				goto label$953;
				label$954:;
				{
					fb_StrAssign( (void*)&S$2, -1ll, (void*)"fb_D2UL", 8ll, 0 );
					*(uint64*)((uint8*)&CTX$ + 5208ll) = *(uint64*)((uint8*)&CTX$ + 5208ll) | 32ull;
				}
				label$953:;
				TEMPDTYPE$2 = 14ll;
			}
			label$952:;
			label$943:;
		}
		fb_StrConcatAssign( (void*)&S$2, -1ll, (void*)"( ", 3ll, 0 );
		FBSTRING* vr$68 = EXPRFLUSH( R$1, 0ll );
		fb_StrConcatAssign( (void*)&S$2, -1ll, (void*)vr$68, -1ll, 0 );
		fb_StrConcatAssign( (void*)&S$2, -1ll, (void*)" )", 3ll, 0 );
		struct $8EXPRNODE* vr$71 = EXPRNEWTEXT( TEMPDTYPE$2, (struct $8FBSYMBOL*)0ull, (char*)*(char**)&S$2 );
		R$1 = vr$71;
		fb_StrDelete( (FBSTRING*)&S$2 );
	}
	label$939:;
	label$930:;
	EXPRSTORE( V1$1, R$1, 0ll );
	label$929:;
}

static void _EMITSTORE( struct $6IRVREG* V1$1, struct $6IRVREG* V2$1 )
{
	label$955:;
	struct $8EXPRNODE* vr$0 = EXPRNEWVREG( V2$1, 0ll );
	EXPRSTORE( V1$1, vr$0, 0ll );
	label$956:;
}

static void _EMITSPILLREGS( void )
{
	label$957:;
	label$958:;
}

static void _EMITLOAD( struct $6IRVREG* V1$1 )
{
	label$959:;
	label$960:;
}

static void _EMITLOADRES( struct $6IRVREG* V1$1, struct $6IRVREG* VR$1 )
{
	FBSTRING TMP$534$1;
	FBSTRING TMP$535$1;
	FBSTRING TMP$536$1;
	label$961:;
	_EMITSTORE( VR$1, V1$1 );
	__builtin_memset( &TMP$536$1, 0, 24ll );
	struct $8EXPRNODE* vr$1 = EXPRNEWVREG( VR$1, 0ll );
	FBSTRING* vr$2 = EXPRFLUSH( vr$1, 0ll );
	__builtin_memset( &TMP$534$1, 0, 24ll );
	FBSTRING* vr$5 = fb_StrConcat( &TMP$534$1, (void*)"return ", 8ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$535$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$535$1, (void*)vr$5, -1ll, (void*)";", 2ll );
	fb_StrAssign( (void*)&TMP$536$1, -1ll, (void*)vr$8, -1ll, 0 );
	HWRITELINE( &TMP$536$1, 0ll );
	fb_StrDelete( (FBSTRING*)&TMP$536$1 );
	label$962:;
}

static void _EMITADDR( int64 OP$1, struct $6IRVREG* V1$1, struct $6IRVREG* VR$1 )
{
	label$963:;
	struct $8EXPRNODE* L$1;
	L$1 = (struct $8EXPRNODE*)0ull;
	{
		if( OP$1 != 22ll ) goto label$966;
		label$967:;
		{
			if( ((int64)-(*(int64*)V1$1 == 1ll) & (int64)-(*(struct $8FBSYMBOL**)((uint8*)V1$1 + 56ll) != (struct $8FBSYMBOL*)0ull)) == 0ll ) goto label$969;
			{
				if( *(int64*)*(struct $8FBSYMBOL**)((uint8*)V1$1 + 56ll) != 7ll ) goto label$971;
				{
					struct $8EXPRNODE* vr$8 = EXPRNEWSYM( *(struct $8FBSYMBOL**)((uint8*)V1$1 + 56ll) );
					L$1 = vr$8;
					struct $8EXPRNODE* vr$11 = EXPRNEWCAST( *(int64*)((uint8*)VR$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)VR$1 + 16ll), L$1 );
					L$1 = vr$11;
					goto label$965;
				}
				label$971:;
				label$970:;
			}
			label$969:;
			label$968:;
			struct $8EXPRNODE* vr$12 = EXPRNEWVREG( V1$1, -1ll );
			struct $8EXPRNODE* vr$13 = EXPRNEWUOP( 22ll, vr$12 );
			L$1 = vr$13;
		}
		goto label$965;
		label$966:;
		if( OP$1 != 76ll ) goto label$972;
		label$973:;
		{
			struct $8EXPRNODE* vr$14 = EXPRNEWVREG( V1$1, 0ll );
			L$1 = vr$14;
		}
		label$972:;
		label$965:;
	}
	EXPRSTORE( VR$1, L$1, 0ll );
	label$964:;
}

static void HDOCALL( FBSTRING* S$1, int64 BYTESTOPOP$1, struct $6IRVREG* VR$1, int64 LEVEL$1 )
{
	int64 TMP$537$1;
	label$974:;
	struct $9IRCALLARG* ARG$1;
	int64 DTYPE$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	fb_StrConcatByref( (void*)S$1, -1ll, (void*)"( ", 3ll, 0 );
	void* vr$1 = LISTGETTAIL( (struct $5TLIST*)((uint8*)&IRHL$ + 120ll) );
	ARG$1 = (struct $9IRCALLARG*)vr$1;
	label$976:;
	if( ARG$1 == (struct $9IRCALLARG*)0ull ) goto label$978;
	TMP$537$1 = (int64)-((struct $9IRCALLARG*)(int64)-(*(int64*)((uint8*)ARG$1 + 16ll) == LEVEL$1) != (struct $9IRCALLARG*)0ull);
	goto label$1257;
	label$978:;
	TMP$537$1 = 0ll;
	label$1257:;
	if( TMP$537$1 == 0ll ) goto label$977;
	{
		int64 TMP$538$2;
		struct $9IRCALLARG* PREV$2;
		void* vr$5 = LISTGETPREV( (void*)ARG$1 );
		PREV$2 = (struct $9IRCALLARG*)vr$5;
		struct $8EXPRNODE* EXPR$2;
		struct $8EXPRNODE* vr$7 = EXPRNEWVREG( *(struct $6IRVREG**)((uint8*)ARG$1 + 8ll), 0ll );
		EXPR$2 = vr$7;
		if( *(struct $8FBSYMBOL**)ARG$1 == (struct $8FBSYMBOL*)0ull ) goto label$979;
		TMP$538$2 = (int64)-((struct $8FBSYMBOL*)(int64)-(*(int64*)((uint8*)*(struct $8FBSYMBOL**)ARG$1 + 96ll) != 4ll) != (struct $8FBSYMBOL*)0ull);
		goto label$1258;
		label$979:;
		TMP$538$2 = 0ll;
		label$1258:;
		if( TMP$538$2 == 0ll ) goto label$981;
		{
			_Z21SYMBGETREALPARAMDTYPEP8FBSYMBOLRu7INTEGERRS0_( *(struct $8FBSYMBOL**)ARG$1, &DTYPE$1, &SUBTYPE$1 );
			struct $8EXPRNODE* vr$16 = EXPRNEWCAST( DTYPE$1, SUBTYPE$1, EXPR$2 );
			EXPR$2 = vr$16;
		}
		label$981:;
		label$980:;
		FBSTRING* vr$17 = EXPRFLUSH( EXPR$2, 0ll );
		fb_StrConcatByref( (void*)S$1, -1ll, (void*)vr$17, -1ll, 0 );
		LISTDELNODE( (struct $5TLIST*)((uint8*)&IRHL$ + 120ll), (void*)ARG$1 );
		if( PREV$2 == (struct $9IRCALLARG*)0ull ) goto label$983;
		{
			if( *(int64*)((uint8*)PREV$2 + 16ll) != LEVEL$1 ) goto label$985;
			{
				fb_StrConcatByref( (void*)S$1, -1ll, (void*)", ", 3ll, 0 );
			}
			label$985:;
			label$984:;
		}
		label$983:;
		label$982:;
		ARG$1 = PREV$2;
	}
	goto label$976;
	label$977:;
	fb_StrConcatByref( (void*)S$1, -1ll, (void*)" )", 3ll, 0 );
	if( VR$1 != (struct $6IRVREG*)0ull ) goto label$987;
	{
		fb_StrConcatByref( (void*)S$1, -1ll, (void*)";", 2ll, 0 );
		HWRITELINE( S$1, 0ll );
	}
	goto label$986;
	label$987:;
	{
		struct $8EXPRNODE* vr$23 = EXPRNEWTEXT( *(int64*)((uint8*)VR$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)VR$1 + 16ll), (char*)*(char**)S$1 );
		EXPRSTORE( VR$1, vr$23, -1ll );
	}
	label$986:;
	label$975:;
}

static void _EMITCALL( struct $8FBSYMBOL* PROC$1, int64 BYTESTOPOP$1, struct $6IRVREG* VR$1, int64 LEVEL$1 )
{
	label$988:;
	static FBSTRING S$1;
	char* vr$0 = SYMBGETMANGLEDNAME( PROC$1 );
	fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$0, 0ll, 0 );
	HDOCALL( &S$1, BYTESTOPOP$1, VR$1, LEVEL$1 );
	label$989:;
}

static void _EMITCALLPTR( struct $8FBSYMBOL* PROC$1, struct $6IRVREG* V1$1, struct $6IRVREG* VR$1, int64 BYTESTOPOP$1, int64 LEVEL$1 )
{
	label$990:;
	static FBSTRING S$1;
	fb_StrAssign( (void*)&S$1, -1ll, (void*)"(", 2ll, 0 );
	struct $8EXPRNODE* vr$0 = EXPRNEWVREG( V1$1, 0ll );
	FBSTRING* vr$1 = EXPRFLUSH( vr$0, 0ll );
	fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)vr$1, -1ll, 0 );
	fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)")", 2ll, 0 );
	HDOCALL( &S$1, BYTESTOPOP$1, VR$1, LEVEL$1 );
	label$991:;
}

static void _EMITJUMPPTR( struct $6IRVREG* V1$1 )
{
	FBSTRING TMP$540$1;
	FBSTRING TMP$541$1;
	FBSTRING TMP$542$1;
	label$992:;
	__builtin_memset( &TMP$542$1, 0, 24ll );
	struct $8EXPRNODE* vr$1 = EXPRNEWVREG( V1$1, 0ll );
	FBSTRING* vr$2 = EXPRFLUSH( vr$1, -1ll );
	__builtin_memset( &TMP$540$1, 0, 24ll );
	FBSTRING* vr$5 = fb_StrConcat( &TMP$540$1, (void*)"goto *", 7ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$541$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$541$1, (void*)vr$5, -1ll, (void*)";", 2ll );
	fb_StrAssign( (void*)&TMP$542$1, -1ll, (void*)vr$8, -1ll, 0 );
	HWRITELINE( &TMP$542$1, 0ll );
	fb_StrDelete( (FBSTRING*)&TMP$542$1 );
	label$993:;
}

static void _EMITBRANCH( int64 OP$1, struct $8FBSYMBOL* LABEL$1 )
{
	FBSTRING TMP$544$1;
	FBSTRING TMP$545$1;
	FBSTRING TMP$546$1;
	label$994:;
	__builtin_memset( &TMP$546$1, 0, 24ll );
	char* vr$1 = SYMBGETMANGLEDNAME( LABEL$1 );
	__builtin_memset( &TMP$544$1, 0, 24ll );
	FBSTRING* vr$4 = fb_StrConcat( &TMP$544$1, (void*)"goto ", 6ll, (void*)vr$1, 0ll );
	__builtin_memset( &TMP$545$1, 0, 24ll );
	FBSTRING* vr$7 = fb_StrConcat( &TMP$545$1, (void*)vr$4, -1ll, (void*)";", 2ll );
	fb_StrAssign( (void*)&TMP$546$1, -1ll, (void*)vr$7, -1ll, 0 );
	HWRITELINE( &TMP$546$1, 0ll );
	fb_StrDelete( (FBSTRING*)&TMP$546$1 );
	label$995:;
}

static void _EMITJMPTB( struct $6IRVREG* V1$1, struct $8FBSYMBOL* TBSYM$1, uint64* VALUES$1, struct $8FBSYMBOL** LABELS$1, int64 LABELCOUNT$1, struct $8FBSYMBOL* DEFLABEL$1, uint64 BIAS$1, uint64 SPAN$1 )
{
	FBSTRING TMP$556$1;
	FBSTRING TMP$557$1;
	FBSTRING TMP$558$1;
	FBSTRING TMP$559$1;
	FBSTRING TMP$560$1;
	FBSTRING TMP$565$1;
	FBSTRING TMP$566$1;
	FBSTRING TMP$567$1;
	FBSTRING TMP$568$1;
	FBSTRING TMP$569$1;
	FBSTRING TMP$570$1;
	FBSTRING TMP$571$1;
	FBSTRING TMP$572$1;
	FBSTRING TMP$573$1;
	FBSTRING TMP$574$1;
	FBSTRING TMP$575$1;
	label$996:;
	FBSTRING TB$1;
	__builtin_memset( &TB$1, 0, 24ll );
	FBSTRING TEMP$1;
	__builtin_memset( &TEMP$1, 0, 24ll );
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	struct $8EXPRNODE* L$1;
	$11FB_DATATYPE DTYPE$1;
	DTYPE$1 = *($11FB_DATATYPE*)((uint8*)V1$1 + 8ll);
	struct $8EXPRNODE* vr$4 = EXPRNEWVREG( V1$1, 0ll );
	FBSTRING* vr$5 = EXPRFLUSH( vr$4, 0ll );
	fb_StrAssign( (void*)&TEMP$1, -1ll, (void*)vr$5, -1ll, 0 );
	if( LABELCOUNT$1 > 0ll ) goto label$999;
	{
		FBSTRING TMP$547$2;
		FBSTRING TMP$548$2;
		FBSTRING TMP$549$2;
		FBSTRING TMP$551$2;
		FBSTRING TMP$552$2;
		FBSTRING TMP$553$2;
		__builtin_memset( &TMP$549$2, 0, 24ll );
		char* vr$8 = SYMBGETMANGLEDNAME( DEFLABEL$1 );
		__builtin_memset( &TMP$547$2, 0, 24ll );
		FBSTRING* vr$11 = fb_StrConcat( &TMP$547$2, (void*)"goto ", 6ll, (void*)vr$8, 0ll );
		__builtin_memset( &TMP$548$2, 0, 24ll );
		FBSTRING* vr$14 = fb_StrConcat( &TMP$548$2, (void*)vr$11, -1ll, (void*)";", 2ll );
		fb_StrAssign( (void*)&TMP$549$2, -1ll, (void*)vr$14, -1ll, 0 );
		HWRITELINE( &TMP$549$2, -1ll );
		fb_StrDelete( (FBSTRING*)&TMP$549$2 );
		__builtin_memset( &TMP$553$2, 0, 24ll );
		__builtin_memset( &TMP$551$2, 0, 24ll );
		FBSTRING* vr$22 = fb_StrConcat( &TMP$551$2, (void*)"(void)", 7ll, (void*)&TEMP$1, -1ll );
		__builtin_memset( &TMP$552$2, 0, 24ll );
		FBSTRING* vr$25 = fb_StrConcat( &TMP$552$2, (void*)vr$22, -1ll, (void*)";", 2ll );
		fb_StrAssign( (void*)&TMP$553$2, -1ll, (void*)vr$25, -1ll, 0 );
		HWRITELINE( &TMP$553$2, -1ll );
		fb_StrDelete( (FBSTRING*)&TMP$553$2 );
		fb_StrDelete( (FBSTRING*)&LN$1 );
		fb_StrDelete( (FBSTRING*)&TEMP$1 );
		fb_StrDelete( (FBSTRING*)&TB$1 );
		goto label$997;
	}
	label$999:;
	label$998:;
	char* vr$32 = SYMBUNIQUEID( (boolean)0ll );
	fb_StrAssign( (void*)&TB$1, -1ll, (void*)vr$32, 0ll, 0 );
	struct $8EXPRNODE* vr$35 = EXPRNEWIMMI( (int64)(SPAN$1 + 1ull), 8ll );
	L$1 = vr$35;
	__builtin_memset( &TMP$560$1, 0, 24ll );
	FBSTRING* vr$37 = EXPRFLUSH( L$1, 0ll );
	__builtin_memset( &TMP$556$1, 0, 24ll );
	FBSTRING* vr$41 = fb_StrConcat( &TMP$556$1, (void*)"static const void* ", 20ll, (void*)&TB$1, -1ll );
	__builtin_memset( &TMP$557$1, 0, 24ll );
	FBSTRING* vr$44 = fb_StrConcat( &TMP$557$1, (void*)vr$41, -1ll, (void*)"[", 2ll );
	__builtin_memset( &TMP$558$1, 0, 24ll );
	FBSTRING* vr$47 = fb_StrConcat( &TMP$558$1, (void*)vr$44, -1ll, (void*)vr$37, -1ll );
	__builtin_memset( &TMP$559$1, 0, 24ll );
	FBSTRING* vr$50 = fb_StrConcat( &TMP$559$1, (void*)vr$47, -1ll, (void*)"] = {", 6ll );
	fb_StrAssign( (void*)&TMP$560$1, -1ll, (void*)vr$50, -1ll, 0 );
	HWRITELINE( &TMP$560$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$560$1 );
	SECTIONINDENT(  );
	int64 I$1;
	I$1 = 0ll;
	int64 VALUE$1;
	VALUE$1 = 0ll;
	label$1000:;
	{
		FBSTRING TMP$562$2;
		FBSTRING TMP$563$2;
		FBSTRING TMP$564$2;
		struct $8FBSYMBOL* LABEL$2;
		__builtin_memset( &LABEL$2, 0, 8ll );
		if( (uint64)VALUE$1 != *(uint64*)((uint8*)VALUES$1 + (I$1 << (3ll & 63ll))) ) goto label$1004;
		{
			LABEL$2 = *(struct $8FBSYMBOL**)((uint8*)LABELS$1 + (I$1 << (3ll & 63ll)));
			I$1 = I$1 + 1ll;
		}
		goto label$1003;
		label$1004:;
		{
			LABEL$2 = DEFLABEL$1;
		}
		label$1003:;
		__builtin_memset( &TMP$564$2, 0, 24ll );
		char* vr$61 = SYMBGETMANGLEDNAME( LABEL$2 );
		__builtin_memset( &TMP$562$2, 0, 24ll );
		FBSTRING* vr$64 = fb_StrConcat( &TMP$562$2, (void*)"&&", 3ll, (void*)vr$61, 0ll );
		__builtin_memset( &TMP$563$2, 0, 24ll );
		FBSTRING* vr$67 = fb_StrConcat( &TMP$563$2, (void*)vr$64, -1ll, (void*)",", 2ll );
		fb_StrAssign( (void*)&TMP$564$2, -1ll, (void*)vr$67, -1ll, 0 );
		HWRITELINE( &TMP$564$2, -1ll );
		fb_StrDelete( (FBSTRING*)&TMP$564$2 );
		if( (uint64)VALUE$1 != SPAN$1 ) goto label$1006;
		{
			goto label$1001;
		}
		label$1006:;
		label$1005:;
		VALUE$1 = VALUE$1 + 1ll;
	}
	label$1002:;
	goto label$1000;
	label$1001:;
	SECTIONUNINDENT(  );
	__builtin_memset( &TMP$565$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$565$1, -1ll, (void*)"};", 3ll, 0 );
	HWRITELINE( &TMP$565$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$565$1 );
	struct $8EXPRNODE* vr$76 = EXPRNEWTEXT( DTYPE$1, (struct $8FBSYMBOL*)0ull, (char*)*(char**)&TEMP$1 );
	L$1 = vr$76;
	if( BIAS$1 == 0ull ) goto label$1008;
	{
		struct $8EXPRNODE* vr$77 = EXPRNEWIMMI( (int64)BIAS$1, DTYPE$1 );
		struct $8EXPRNODE* vr$78 = EXPRNEWBOP( 29ll, L$1, vr$77 );
		L$1 = vr$78;
	}
	label$1008:;
	label$1007:;
	struct $8EXPRNODE* vr$79 = EXPRNEWIMMI( (int64)SPAN$1, DTYPE$1 );
	struct $8EXPRNODE* vr$80 = EXPRNEWBOP( 46ll, L$1, vr$79 );
	L$1 = vr$80;
	__builtin_memset( &TMP$570$1, 0, 24ll );
	char* vr$82 = SYMBGETMANGLEDNAME( DEFLABEL$1 );
	FBSTRING* vr$83 = EXPRFLUSH( L$1, 0ll );
	__builtin_memset( &TMP$566$1, 0, 24ll );
	FBSTRING* vr$86 = fb_StrConcat( &TMP$566$1, (void*)"if( ", 5ll, (void*)vr$83, -1ll );
	__builtin_memset( &TMP$567$1, 0, 24ll );
	FBSTRING* vr$89 = fb_StrConcat( &TMP$567$1, (void*)vr$86, -1ll, (void*)" ) goto ", 9ll );
	__builtin_memset( &TMP$568$1, 0, 24ll );
	FBSTRING* vr$92 = fb_StrConcat( &TMP$568$1, (void*)vr$89, -1ll, (void*)vr$82, 0ll );
	__builtin_memset( &TMP$569$1, 0, 24ll );
	FBSTRING* vr$95 = fb_StrConcat( &TMP$569$1, (void*)vr$92, -1ll, (void*)";", 2ll );
	fb_StrAssign( (void*)&TMP$570$1, -1ll, (void*)vr$95, -1ll, 0 );
	HWRITELINE( &TMP$570$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$570$1 );
	struct $8EXPRNODE* vr$99 = EXPRNEWTEXT( DTYPE$1, (struct $8FBSYMBOL*)0ull, (char*)*(char**)&TEMP$1 );
	L$1 = vr$99;
	struct $8EXPRNODE* vr$100 = EXPRNEWIMMI( (int64)BIAS$1, DTYPE$1 );
	struct $8EXPRNODE* vr$101 = EXPRNEWBOP( 29ll, L$1, vr$100 );
	L$1 = vr$101;
	__builtin_memset( &TMP$575$1, 0, 24ll );
	FBSTRING* vr$103 = EXPRFLUSH( L$1, 0ll );
	__builtin_memset( &TMP$571$1, 0, 24ll );
	FBSTRING* vr$107 = fb_StrConcat( &TMP$571$1, (void*)"goto *", 7ll, (void*)&TB$1, -1ll );
	__builtin_memset( &TMP$572$1, 0, 24ll );
	FBSTRING* vr$110 = fb_StrConcat( &TMP$572$1, (void*)vr$107, -1ll, (void*)"[", 2ll );
	__builtin_memset( &TMP$573$1, 0, 24ll );
	FBSTRING* vr$113 = fb_StrConcat( &TMP$573$1, (void*)vr$110, -1ll, (void*)vr$103, -1ll );
	__builtin_memset( &TMP$574$1, 0, 24ll );
	FBSTRING* vr$116 = fb_StrConcat( &TMP$574$1, (void*)vr$113, -1ll, (void*)"];", 3ll );
	fb_StrAssign( (void*)&TMP$575$1, -1ll, (void*)vr$116, -1ll, 0 );
	HWRITELINE( &TMP$575$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$575$1 );
	fb_StrDelete( (FBSTRING*)&LN$1 );
	fb_StrDelete( (FBSTRING*)&TEMP$1 );
	fb_StrDelete( (FBSTRING*)&TB$1 );
	label$997:;
}

static void _EMITMEM( int64 OP$1, struct $6IRVREG* V1$1, struct $6IRVREG* V2$1, int64 BYTES$1 )
{
	label$1009:;
	{
		if( OP$1 != 107ll ) goto label$1012;
		label$1013:;
		{
			FBSTRING TMP$578$3;
			FBSTRING TMP$579$3;
			FBSTRING TMP$580$3;
			FBSTRING TMP$581$3;
			FBSTRING TMP$582$3;
			__builtin_memset( &TMP$582$3, 0, 24ll );
			struct $8EXPRNODE* vr$1 = EXPRNEWVREG( V2$1, 0ll );
			FBSTRING* vr$2 = EXPRFLUSH( vr$1, 0ll );
			struct $8EXPRNODE* vr$3 = EXPRNEWVREG( V1$1, 0ll );
			FBSTRING* vr$4 = EXPRFLUSH( vr$3, 0ll );
			__builtin_memset( &TMP$578$3, 0, 24ll );
			FBSTRING* vr$7 = fb_StrConcat( &TMP$578$3, (void*)"__builtin_memset( ", 19ll, (void*)vr$4, -1ll );
			__builtin_memset( &TMP$579$3, 0, 24ll );
			FBSTRING* vr$10 = fb_StrConcat( &TMP$579$3, (void*)vr$7, -1ll, (void*)", 0, ", 6ll );
			__builtin_memset( &TMP$580$3, 0, 24ll );
			FBSTRING* vr$13 = fb_StrConcat( &TMP$580$3, (void*)vr$10, -1ll, (void*)vr$2, -1ll );
			__builtin_memset( &TMP$581$3, 0, 24ll );
			FBSTRING* vr$16 = fb_StrConcat( &TMP$581$3, (void*)vr$13, -1ll, (void*)" );", 4ll );
			fb_StrAssign( (void*)&TMP$582$3, -1ll, (void*)vr$16, -1ll, 0 );
			HWRITELINE( &TMP$582$3, 0ll );
			fb_StrDelete( (FBSTRING*)&TMP$582$3 );
		}
		goto label$1011;
		label$1012:;
		if( OP$1 != 105ll ) goto label$1014;
		label$1015:;
		{
			FBSTRING TMP$584$3;
			FBSTRING TMP$585$3;
			FBSTRING TMP$586$3;
			FBSTRING TMP$587$3;
			FBSTRING TMP$588$3;
			FBSTRING TMP$589$3;
			FBSTRING TMP$590$3;
			__builtin_memset( &TMP$590$3, 0, 24ll );
			FBSTRING* vr$21 = fb_ULongintToStr( (uint64)BYTES$1 );
			struct $8EXPRNODE* vr$22 = EXPRNEWVREG( V2$1, 0ll );
			FBSTRING* vr$23 = EXPRFLUSH( vr$22, 0ll );
			struct $8EXPRNODE* vr$24 = EXPRNEWVREG( V1$1, 0ll );
			FBSTRING* vr$25 = EXPRFLUSH( vr$24, 0ll );
			__builtin_memset( &TMP$584$3, 0, 24ll );
			FBSTRING* vr$28 = fb_StrConcat( &TMP$584$3, (void*)"__builtin_memcpy( ", 19ll, (void*)vr$25, -1ll );
			__builtin_memset( &TMP$585$3, 0, 24ll );
			FBSTRING* vr$31 = fb_StrConcat( &TMP$585$3, (void*)vr$28, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$586$3, 0, 24ll );
			FBSTRING* vr$34 = fb_StrConcat( &TMP$586$3, (void*)vr$31, -1ll, (void*)vr$23, -1ll );
			__builtin_memset( &TMP$587$3, 0, 24ll );
			FBSTRING* vr$37 = fb_StrConcat( &TMP$587$3, (void*)vr$34, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$588$3, 0, 24ll );
			FBSTRING* vr$40 = fb_StrConcat( &TMP$588$3, (void*)vr$37, -1ll, (void*)vr$21, -1ll );
			__builtin_memset( &TMP$589$3, 0, 24ll );
			FBSTRING* vr$43 = fb_StrConcat( &TMP$589$3, (void*)vr$40, -1ll, (void*)" );", 4ll );
			fb_StrAssign( (void*)&TMP$590$3, -1ll, (void*)vr$43, -1ll, 0 );
			HWRITELINE( &TMP$590$3, 0ll );
			fb_StrDelete( (FBSTRING*)&TMP$590$3 );
		}
		label$1014:;
		label$1011:;
	}
	label$1010:;
}

static void _EMITMACRO( int64 OP$1, struct $6IRVREG* V1$1, struct $6IRVREG* V2$1, struct $6IRVREG* VR$1 )
{
	label$1016:;
	struct $8EXPRNODE* L$1;
	struct $8EXPRNODE* R$1;
	{
		if( OP$1 != 109ll ) goto label$1019;
		label$1020:;
		{
			FBSTRING TMP$591$3;
			FBSTRING TMP$592$3;
			struct $8EXPRNODE* vr$0 = EXPRNEWVREG( V1$1, 0ll );
			L$1 = vr$0;
			struct $8EXPRNODE* vr$1 = EXPRNEWVREG( V2$1, 0ll );
			R$1 = vr$1;
			__builtin_memset( &TMP$592$3, 0, 24ll );
			struct $8EXPRNODE* vr$3 = EXPRNEWMACRO( OP$1, 2147483648ll, (struct $8FBSYMBOL*)0ull, L$1, R$1 );
			FBSTRING* vr$4 = EXPRFLUSH( vr$3, 0ll );
			__builtin_memset( &TMP$591$3, 0, 24ll );
			FBSTRING* vr$7 = fb_StrConcat( &TMP$591$3, (void*)vr$4, -1ll, (void*)";", 2ll );
			fb_StrAssign( (void*)&TMP$592$3, -1ll, (void*)vr$7, -1ll, 0 );
			HWRITELINE( &TMP$592$3, 0ll );
			fb_StrDelete( (FBSTRING*)&TMP$592$3 );
		}
		goto label$1018;
		label$1019:;
		if( OP$1 != 110ll ) goto label$1021;
		label$1022:;
		{
			FBSTRING TMP$593$3;
			FBSTRING TMP$594$3;
			struct $8EXPRNODE* vr$11 = EXPRNEWVREG( V1$1, 0ll );
			L$1 = vr$11;
			__builtin_memset( &TMP$594$3, 0, 24ll );
			struct $8EXPRNODE* vr$13 = EXPRNEWMACRO( OP$1, 2147483648ll, (struct $8FBSYMBOL*)0ull, L$1, (struct $8EXPRNODE*)0ull );
			FBSTRING* vr$14 = EXPRFLUSH( vr$13, 0ll );
			__builtin_memset( &TMP$593$3, 0, 24ll );
			FBSTRING* vr$17 = fb_StrConcat( &TMP$593$3, (void*)vr$14, -1ll, (void*)";", 2ll );
			fb_StrAssign( (void*)&TMP$594$3, -1ll, (void*)vr$17, -1ll, 0 );
			HWRITELINE( &TMP$594$3, 0ll );
			fb_StrDelete( (FBSTRING*)&TMP$594$3 );
		}
		goto label$1018;
		label$1021:;
		if( OP$1 != 112ll ) goto label$1023;
		label$1024:;
		{
			struct $8EXPRNODE* vr$21 = EXPRNEWVREG( V1$1, 0ll );
			L$1 = vr$21;
			struct $8EXPRNODE* vr$24 = EXPRNEWMACRO( OP$1, *(int64*)((uint8*)VR$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)VR$1 + 56ll), L$1, (struct $8EXPRNODE*)0ull );
			L$1 = vr$24;
			EXPRSTORE( VR$1, L$1, 0ll );
		}
		goto label$1018;
		label$1023:;
		if( OP$1 != 111ll ) goto label$1025;
		label$1026:;
		{
			FBSTRING TMP$595$3;
			FBSTRING TMP$596$3;
			struct $8EXPRNODE* vr$25 = EXPRNEWVREG( V1$1, 0ll );
			L$1 = vr$25;
			struct $8EXPRNODE* vr$26 = EXPRNEWVREG( V2$1, 0ll );
			R$1 = vr$26;
			__builtin_memset( &TMP$596$3, 0, 24ll );
			struct $8EXPRNODE* vr$28 = EXPRNEWMACRO( OP$1, 2147483648ll, (struct $8FBSYMBOL*)0ull, L$1, R$1 );
			FBSTRING* vr$29 = EXPRFLUSH( vr$28, 0ll );
			__builtin_memset( &TMP$595$3, 0, 24ll );
			FBSTRING* vr$32 = fb_StrConcat( &TMP$595$3, (void*)vr$29, -1ll, (void*)";", 2ll );
			fb_StrAssign( (void*)&TMP$596$3, -1ll, (void*)vr$32, -1ll, 0 );
			HWRITELINE( &TMP$596$3, 0ll );
			fb_StrDelete( (FBSTRING*)&TMP$596$3 );
		}
		label$1025:;
		label$1018:;
	}
	label$1017:;
}

static void _EMITDECL( struct $8FBSYMBOL* SYM$1 )
{
	label$1027:;
	struct $8FBSYMBOL* ARRAY$1;
	int64 vr$0 = HISSTATICWITHDTOR( SYM$1 );
	if( vr$0 == 0ll ) goto label$1030;
	{
		goto label$1028;
	}
	label$1030:;
	label$1029:;
	ARRAY$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 152ll);
	if( ARRAY$1 == (struct $8FBSYMBOL*)0ull ) goto label$1032;
	{
		int64 vr$2 = HISSTATICWITHDTOR( ARRAY$1 );
		if( vr$2 == 0ll ) goto label$1034;
		{
			goto label$1028;
		}
		label$1034:;
		label$1033:;
	}
	label$1032:;
	label$1031:;
	HMAYBEEMITLOCALVAR( SYM$1 );
	label$1028:;
}

static void _EMITDBG( int64 OP$1, struct $8FBSYMBOL* PROC$1, int64 LNUM$1, char* FILENAME$1 )
{
	label$1035:;
	if( OP$1 != 113ll ) goto label$1038;
	{
		*(int64*)((uint8*)&CTX$ + 5176ll) = LNUM$1;
		if( FILENAME$1 == (char*)0ull ) goto label$1040;
		{
			HUPDATECURRENTFILENAME( FILENAME$1 );
		}
		label$1040:;
		label$1039:;
	}
	label$1038:;
	label$1037:;
	label$1036:;
}

static void _EMITCOMMENT( char* TEXT$1 )
{
	label$1041:;
	int64 LENGTH$1;
	static FBSTRING S$1;
	fb_StrAssign( (void*)&S$1, -1ll, (void*)TEXT$1, 0ll, 0 );
	FBSTRING* vr$0 = fb_TRIM( (FBSTRING*)&S$1 );
	fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$0, -1ll, 0 );
	int64 vr$1 = fb_StrLen( (void*)&S$1, -1ll );
	LENGTH$1 = vr$1;
	if( LENGTH$1 <= 0ll ) goto label$1044;
	{
		FBSTRING TMP$599$2;
		FBSTRING TMP$600$2;
		if( (uint64)(int64)*(uint8*)((uint8*)((uint8*)*(char**)&S$1 + LENGTH$1) + -1ll) != 92ull ) goto label$1046;
		{
			fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"not_an_escape", 14ll, 0 );
		}
		label$1046:;
		label$1045:;
		__builtin_memset( &TMP$600$2, 0, 24ll );
		__builtin_memset( &TMP$599$2, 0, 24ll );
		FBSTRING* vr$7 = fb_StrConcat( &TMP$599$2, (void*)"// ", 4ll, (void*)&S$1, -1ll );
		fb_StrAssign( (void*)&TMP$600$2, -1ll, (void*)vr$7, -1ll, 0 );
		HWRITELINE( &TMP$600$2, -1ll );
		fb_StrDelete( (FBSTRING*)&TMP$600$2 );
	}
	label$1044:;
	label$1043:;
	label$1042:;
}

static int32 HFINDLABELINSEENLIST( struct $5TLIST* LABELLIST$1, struct $8FBSYMBOL* LABELSYM$1 )
{
	int32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$1047:;
	struct $8FBSYMBOL** SYMNODE$1;
	void* vr$1 = LISTGETHEAD( LABELLIST$1 );
	SYMNODE$1 = (struct $8FBSYMBOL**)vr$1;
	int32 INDEX$1;
	INDEX$1 = -1;
	int32 CURINDEX$1;
	CURINDEX$1 = 0;
	label$1049:;
	{
		if( SYMNODE$1 != (struct $8FBSYMBOL**)0ull ) goto label$1053;
		{
			goto label$1050;
			label$1053:;
		}
		if( *SYMNODE$1 != LABELSYM$1 ) goto label$1055;
		{
			INDEX$1 = CURINDEX$1;
			goto label$1050;
		}
		label$1055:;
		label$1054:;
		void* vr$3 = LISTGETNEXT( (void*)SYMNODE$1 );
		SYMNODE$1 = (struct $8FBSYMBOL**)vr$3;
		CURINDEX$1 = (int32)((int64)CURINDEX$1 + 1ll);
	}
	label$1051:;
	goto label$1049;
	label$1050:;
	fb$result$1 = INDEX$1;
	goto label$1048;
	label$1048:;
	return fb$result$1;
}

static void _EMITASMLINE( struct $9ASTASMTOK* ASMTOKENHEAD$1 )
{
	label$1056:;
	int64 USES_LABEL$1;
	__builtin_memset( &USES_LABEL$1, 0, 8ll );
	int64 LABELINDEX$1;
	__builtin_memset( &LABELINDEX$1, 0, 8ll );
	int64 LABELINDEXBASE$1;
	__builtin_memset( &LABELINDEXBASE$1, 0, 8ll );
	struct $5TLIST SEENLABELLIST$1;
	__builtin_memset( &SEENLABELLIST$1, 0, 64ll );
	LISTINIT( &SEENLABELLIST$1, 8ll, 8ll, 4294967295ll );
	struct $9ASTASMTOK* N$1;
	N$1 = ASMTOKENHEAD$1;
	label$1058:;
	if( N$1 == (struct $9ASTASMTOK*)0ull ) goto label$1059;
	{
		if( *(int64*)N$1 != 1ll ) goto label$1061;
		{
			{
				$12FB_SYMBCLASS TMP$601$4;
				TMP$601$4 = *($12FB_SYMBCLASS*)*(struct $8FBSYMBOL**)((uint8*)N$1 + 8ll);
				if( TMP$601$4 != 7ll ) goto label$1063;
				label$1064:;
				{
					USES_LABEL$1 = -1ll;
				}
				goto label$1062;
				label$1063:;
				if( TMP$601$4 != 1ll ) goto label$1065;
				label$1066:;
				{
					LABELINDEX$1 = LABELINDEX$1 + 1ll;
				}
				label$1065:;
				label$1062:;
			}
		}
		label$1061:;
		label$1060:;
		N$1 = *(struct $9ASTASMTOK**)((uint8*)N$1 + 16ll);
	}
	goto label$1058;
	label$1059:;
	LABELINDEXBASE$1 = LABELINDEX$1;
	FBSTRING LN$1;
	fb_StrInit( (void*)&LN$1, -1ll, (void*)"__asm__", 8ll, 0 );
	int64 vr$11 = SECTIONINSIDEPROC(  );
	if( vr$11 == 0ll ) goto label$1068;
	{
		fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" __volatile__", 14ll, 0 );
	}
	label$1068:;
	label$1067:;
	if( USES_LABEL$1 == 0ll ) goto label$1070;
	{
		fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" goto", 6ll, 0 );
	}
	label$1070:;
	label$1069:;
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"( ", 3ll, 0 );
	FBSTRING ASMCODE$1;
	__builtin_memset( &ASMCODE$1, 0, 24ll );
	int64 OPERANDINDEX$1;
	__builtin_memset( &OPERANDINDEX$1, 0, 8ll );
	FBSTRING OUTPUTCONSTRAINTS$1;
	__builtin_memset( &OUTPUTCONSTRAINTS$1, 0, 24ll );
	FBSTRING INPUTCONSTRAINTS$1;
	__builtin_memset( &INPUTCONSTRAINTS$1, 0, 24ll );
	FBSTRING LABELLIST$1;
	__builtin_memset( &LABELLIST$1, 0, 24ll );
	N$1 = ASMTOKENHEAD$1;
	label$1071:;
	if( N$1 == (struct $9ASTASMTOK*)0ull ) goto label$1072;
	{
		{
			$14AST_ASMTOKTYPE TMP$605$3;
			TMP$605$3 = *($14AST_ASMTOKTYPE*)N$1;
			if( TMP$605$3 != 0ll ) goto label$1074;
			label$1075:;
			{
				FBSTRING TMP$606$4;
				__builtin_memset( &TMP$606$4, 0, 24ll );
				FBSTRING* vr$25 = fb_StrConcat( &TMP$606$4, (void*)&ASMCODE$1, -1ll, *(void**)((uint8*)N$1 + 8ll), 0ll );
				fb_StrAssign( (void*)&ASMCODE$1, -1ll, (void*)vr$25, -1ll, 0 );
			}
			goto label$1073;
			label$1074:;
			if( TMP$605$3 != 1ll ) goto label$1076;
			label$1077:;
			{
				if( *(int64*)((uint8*)&ENV$ + 264ll) != 0ll ) goto label$1079;
				{
					int64 vr$27 = SECTIONINSIDEPROC(  );
					if( vr$27 == 0ll ) goto label$1081;
					{
						{
							$12FB_SYMBCLASS TMP$607$7;
							TMP$607$7 = *($12FB_SYMBCLASS*)*(struct $8FBSYMBOL**)((uint8*)N$1 + 8ll);
							if( TMP$607$7 != 1ll ) goto label$1083;
							label$1084:;
							{
								fb_StrConcatAssign( (void*)&ASMCODE$1, -1ll, (void*)"%", 2ll, 0 );
								FBSTRING* vr$31 = fb_LongintToStr( OPERANDINDEX$1 );
								fb_StrConcatAssign( (void*)&ASMCODE$1, -1ll, (void*)vr$31, -1ll, 0 );
								OPERANDINDEX$1 = OPERANDINDEX$1 + 1ll;
								if( USES_LABEL$1 == 0ll ) goto label$1086;
								{
									FBSTRING TMP$610$9;
									FBSTRING TMP$611$9;
									FBSTRING TMP$612$9;
									int64 vr$35 = fb_StrLen( (void*)&INPUTCONSTRAINTS$1, -1ll );
									if( vr$35 <= 0ll ) goto label$1088;
									{
										fb_StrConcatAssign( (void*)&INPUTCONSTRAINTS$1, -1ll, (void*)", ", 3ll, 0 );
									}
									label$1088:;
									label$1087:;
									char* vr$38 = SYMBGETMANGLEDNAME( *(struct $8FBSYMBOL**)((uint8*)N$1 + 8ll) );
									__builtin_memset( &TMP$610$9, 0, 24ll );
									FBSTRING* vr$41 = fb_StrConcat( &TMP$610$9, (void*)"\x22m\x22 (", 6ll, (void*)vr$38, 0ll );
									__builtin_memset( &TMP$611$9, 0, 24ll );
									FBSTRING* vr$44 = fb_StrConcat( &TMP$611$9, (void*)vr$41, -1ll, (void*)")", 2ll );
									__builtin_memset( &TMP$612$9, 0, 24ll );
									FBSTRING* vr$48 = fb_StrConcat( &TMP$612$9, (void*)&INPUTCONSTRAINTS$1, -1ll, (void*)vr$44, -1ll );
									fb_StrAssign( (void*)&INPUTCONSTRAINTS$1, -1ll, (void*)vr$48, -1ll, 0 );
								}
								goto label$1085;
								label$1086:;
								{
									FBSTRING TMP$614$9;
									FBSTRING TMP$615$9;
									FBSTRING TMP$616$9;
									int64 vr$51 = fb_StrLen( (void*)&OUTPUTCONSTRAINTS$1, -1ll );
									if( vr$51 <= 0ll ) goto label$1090;
									{
										fb_StrConcatAssign( (void*)&OUTPUTCONSTRAINTS$1, -1ll, (void*)", ", 3ll, 0 );
									}
									label$1090:;
									label$1089:;
									char* vr$54 = SYMBGETMANGLEDNAME( *(struct $8FBSYMBOL**)((uint8*)N$1 + 8ll) );
									__builtin_memset( &TMP$614$9, 0, 24ll );
									FBSTRING* vr$57 = fb_StrConcat( &TMP$614$9, (void*)"\x22+m\x22 (", 7ll, (void*)vr$54, 0ll );
									__builtin_memset( &TMP$615$9, 0, 24ll );
									FBSTRING* vr$60 = fb_StrConcat( &TMP$615$9, (void*)vr$57, -1ll, (void*)")", 2ll );
									__builtin_memset( &TMP$616$9, 0, 24ll );
									FBSTRING* vr$64 = fb_StrConcat( &TMP$616$9, (void*)&OUTPUTCONSTRAINTS$1, -1ll, (void*)vr$60, -1ll );
									fb_StrAssign( (void*)&OUTPUTCONSTRAINTS$1, -1ll, (void*)vr$64, -1ll, 0 );
								}
								label$1085:;
							}
							goto label$1082;
							label$1083:;
							if( TMP$607$7 != 7ll ) goto label$1091;
							label$1092:;
							{
								int64 LABELNUM$8;
								struct $8FBSYMBOL* LABELSYM$8;
								LABELSYM$8 = *(struct $8FBSYMBOL**)((uint8*)N$1 + 8ll);
								int32 SEENLABELINDEX$8;
								int32 vr$68 = HFINDLABELINSEENLIST( &SEENLABELLIST$1, LABELSYM$8 );
								SEENLABELINDEX$8 = vr$68;
								if( (int64)SEENLABELINDEX$8 == -1ll ) goto label$1094;
								{
									LABELNUM$8 = (int64)SEENLABELINDEX$8 + LABELINDEXBASE$1;
								}
								goto label$1093;
								label$1094:;
								{
									FBSTRING TMP$617$9;
									LABELNUM$8 = LABELINDEX$1;
									LABELINDEX$1 = LABELINDEX$1 + 1ll;
									void* vr$74 = LISTNEWNODE( &SEENLABELLIST$1 );
									*(struct $8FBSYMBOL**)vr$74 = LABELSYM$8;
									int64 vr$76 = fb_StrLen( (void*)&LABELLIST$1, -1ll );
									if( vr$76 <= 0ll ) goto label$1096;
									{
										fb_StrConcatAssign( (void*)&LABELLIST$1, -1ll, (void*)", ", 3ll, 0 );
									}
									label$1096:;
									label$1095:;
									char* vr$78 = SYMBGETMANGLEDNAME( LABELSYM$8 );
									__builtin_memset( &TMP$617$9, 0, 24ll );
									FBSTRING* vr$82 = fb_StrConcat( &TMP$617$9, (void*)&LABELLIST$1, -1ll, (void*)vr$78, 0ll );
									fb_StrAssign( (void*)&LABELLIST$1, -1ll, (void*)vr$82, -1ll, 0 );
								}
								label$1093:;
								fb_StrConcatAssign( (void*)&ASMCODE$1, -1ll, (void*)"%l", 3ll, 0 );
								FBSTRING* vr$85 = fb_LongintToStr( LABELNUM$8 );
								fb_StrConcatAssign( (void*)&ASMCODE$1, -1ll, (void*)vr$85, -1ll, 0 );
							}
							goto label$1082;
							label$1091:;
							{
								FBSTRING TMP$619$8;
								FBSTRING* vr$88 = HGETMANGLEDNAMEFORASM( *(struct $8FBSYMBOL**)((uint8*)N$1 + 8ll), -1ll );
								__builtin_memset( &TMP$619$8, 0, 24ll );
								FBSTRING* vr$92 = fb_StrConcat( &TMP$619$8, (void*)&ASMCODE$1, -1ll, (void*)vr$88, -1ll );
								fb_StrAssign( (void*)&ASMCODE$1, -1ll, (void*)vr$92, -1ll, 0 );
							}
							label$1097:;
							label$1082:;
						}
					}
					goto label$1080;
					label$1081:;
					{
						FBSTRING TMP$620$6;
						FBSTRING* vr$95 = HGETMANGLEDNAMEFORASM( *(struct $8FBSYMBOL**)((uint8*)N$1 + 8ll), -1ll );
						__builtin_memset( &TMP$620$6, 0, 24ll );
						FBSTRING* vr$99 = fb_StrConcat( &TMP$620$6, (void*)&ASMCODE$1, -1ll, (void*)vr$95, -1ll );
						fb_StrAssign( (void*)&ASMCODE$1, -1ll, (void*)vr$99, -1ll, 0 );
					}
					label$1080:;
				}
				goto label$1078;
				label$1079:;
				{
					FBSTRING TMP$621$5;
					char* vr$102 = SYMBGETMANGLEDNAME( *(struct $8FBSYMBOL**)((uint8*)N$1 + 8ll) );
					__builtin_memset( &TMP$621$5, 0, 24ll );
					FBSTRING* vr$106 = fb_StrConcat( &TMP$621$5, (void*)&ASMCODE$1, -1ll, (void*)vr$102, 0ll );
					fb_StrAssign( (void*)&ASMCODE$1, -1ll, (void*)vr$106, -1ll, 0 );
				}
				label$1078:;
			}
			label$1076:;
			label$1073:;
		}
		N$1 = *(struct $9ASTASMTOK**)((uint8*)N$1 + 16ll);
	}
	goto label$1071;
	label$1072:;
	LISTEND( &SEENLABELLIST$1 );
	if( *(int64*)((uint8*)&ENV$ + 264ll) != 0ll ) goto label$1099;
	{
		int64 vr$111 = fb_StrLen( (void*)&ASMCODE$1, -1ll );
		HBUILDSTRLIT( &LN$1, (char*)*(char**)&ASMCODE$1, vr$111 + 1ll );
		int64 vr$114 = SECTIONINSIDEPROC(  );
		if( vr$114 == 0ll ) goto label$1101;
		{
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" : ", 4ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)&OUTPUTCONSTRAINTS$1, -1ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" : ", 4ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)&INPUTCONSTRAINTS$1, -1ll, 0 );
			fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" : \x22" "cc\x22, \x22memory\x22", 18ll, 0 );
			{
				int64 TMP$624$4;
				int64 vr$122 = FBGETCPUFAMILY(  );
				TMP$624$4 = vr$122;
				if( TMP$624$4 == 0ll ) goto label$1104;
				label$1105:;
				if( TMP$624$4 != 1ll ) goto label$1103;
				label$1104:;
				{
					int64 vr$123 = FBGETCPUFAMILY(  );
					if( vr$123 != 0ll ) goto label$1107;
					{
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", \x22" "eax\x22, \x22" "ebx\x22, \x22" "ecx\x22, \x22" "edx\x22, \x22" "edi\x22, \x22" "esi\x22", 43ll, 0 );
					}
					goto label$1106;
					label$1107:;
					{
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", \x22rax\x22, \x22rbx\x22, \x22rcx\x22, \x22rdx\x22, \x22rdi\x22, \x22rsi\x22", 43ll, 0 );
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", \x22r8\x22, \x22r9\x22, \x22r10\x22, \x22r11\x22, \x22r12\x22, \x22r13\x22, \x22r14\x22, \x22r15\x22", 55ll, 0 );
					}
					label$1106:;
					if( *(int64*)((uint8*)&ENV$ + 232ll) != 1ll ) goto label$1109;
					{
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", \x22mm0\x22, \x22mm1\x22, \x22mm2\x22, \x22mm3\x22, \x22mm4\x22, \x22mm5\x22, \x22mm6\x22, \x22mm7\x22", 57ll, 0 );
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", \x22xmm0\x22, \x22xmm1\x22, \x22xmm2\x22, \x22xmm3\x22, \x22xmm4\x22, \x22xmm5\x22, \x22xmm6\x22, \x22xmm7\x22", 65ll, 0 );
						int64 vr$129 = FBGETCPUFAMILY(  );
						if( vr$129 != 1ll ) goto label$1111;
						{
							fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", \x22xmm8\x22, \x22xmm9\x22, \x22xmm10\x22, \x22xmm11\x22, \x22xmm12\x22, \x22xmm13\x22, \x22xmm14\x22, \x22xmm15\x22", 71ll, 0 );
						}
						label$1111:;
						label$1110:;
					}
					label$1109:;
					label$1108:;
				}
				goto label$1102;
				label$1103:;
				if( TMP$624$4 == 2ll ) goto label$1113;
				label$1114:;
				if( TMP$624$4 != 3ll ) goto label$1112;
				label$1113:;
				{
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", \x22r0\x22, \x22r1\x22, \x22r2\x22, \x22r3\x22, \x22r4\x22, \x22r5\x22, \x22r6\x22", 43ll, 0 );
					fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", \x22r8\x22, \x22r9\x22, \x22r10\x22, \x22r11\x22, \x22r12\x22, \x22r13\x22, \x22r14\x22, \x22r15\x22", 55ll, 0 );
					int64 vr$133 = FBGETCPUFAMILY(  );
					if( vr$133 != 3ll ) goto label$1116;
					{
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", \x22r16\x22, \x22r17\x22, \x22r18\x22, \x22r19\x22", 29ll, 0 );
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", \x22r20\x22, \x22r21\x22, \x22r22\x22, \x22r23\x22, \x22r24\x22, \x22r25\x22, \x22r26\x22, \x22r27\x22, \x22r28\x22", 64ll, 0 );
						fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", \x22r30\x22", 8ll, 0 );
					}
					label$1116:;
					label$1115:;
				}
				label$1112:;
				label$1102:;
			}
			if( USES_LABEL$1 == 0ll ) goto label$1118;
			{
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" : ", 4ll, 0 );
				fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)&LABELLIST$1, -1ll, 0 );
			}
			label$1118:;
			label$1117:;
		}
		label$1101:;
		label$1100:;
	}
	goto label$1098;
	label$1099:;
	{
		fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)&ASMCODE$1, -1ll, 0 );
	}
	label$1098:;
	fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" );", 4ll, 0 );
	HWRITELINE( &LN$1, 0ll );
	fb_StrDelete( (FBSTRING*)&LABELLIST$1 );
	fb_StrDelete( (FBSTRING*)&INPUTCONSTRAINTS$1 );
	fb_StrDelete( (FBSTRING*)&OUTPUTCONSTRAINTS$1 );
	fb_StrDelete( (FBSTRING*)&ASMCODE$1 );
	fb_StrDelete( (FBSTRING*)&LN$1 );
	label$1057:;
}

static void _EMITVARINIBEGIN( struct $8FBSYMBOL* SYM$1 )
{
	label$1119:;
	fb_StrAssign( (void*)((uint8*)&CTX$ + 5280ll), -1ll, (void*)"", 1ll, 0 );
	*(int64*)((uint8*)&CTX$ + 5304ll) = 0ll;
	label$1120:;
}

static void _EMITVARINIEND( struct $8FBSYMBOL* SYM$1 )
{
	label$1121:;
	HEMITVARDECL( 0ll, SYM$1, (char*)*(char**)((uint8*)&CTX$ + 5280ll) );
	fb_StrAssign( (void*)((uint8*)&CTX$ + 5280ll), -1ll, (void*)"", 1ll, 0 );
	label$1122:;
}

static void HVARINISEPARATOR( void )
{
	label$1123:;
	if( *(int64*)((uint8*)&CTX$ + 5304ll) <= 0ll ) goto label$1126;
	{
		fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5280ll), -1ll, (void*)", ", 3ll, 0 );
	}
	label$1126:;
	label$1125:;
	label$1124:;
}

static void _EMITVARINII( struct $8FBSYMBOL* SYM$1, int64 VALUE$1 )
{
	label$1127:;
	int64 DTYPE$1;
	DTYPE$1 = *(int64*)((uint8*)SYM$1 + 56ll) & 511ll;
	if( ((int64)-(DTYPE$1 == 1ll) & (int64)-(VALUE$1 != 0ll)) == 0ll ) goto label$1130;
	{
		VALUE$1 = 1ll;
	}
	label$1130:;
	label$1129:;
	struct $8EXPRNODE* L$1;
	struct $8EXPRNODE* vr$5 = EXPRNEWIMMI( VALUE$1, DTYPE$1 );
	L$1 = vr$5;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 262144ll) == 0ll ) goto label$1132;
	{
		DTYPE$1 = (((DTYPE$1 & 31ll) | ((DTYPE$1 & 480ll) + 32ll)) | ((DTYPE$1 & 261632ll) << (1ll & 63ll))) | (DTYPE$1 & 32505856ll);
	}
	label$1132:;
	label$1131:;
	struct $8EXPRNODE* vr$18 = EXPRNEWCAST( DTYPE$1, *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 64ll), L$1 );
	L$1 = vr$18;
	FBSTRING* vr$19 = EXPRFLUSH( L$1, 0ll );
	fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5280ll), -1ll, (void*)vr$19, -1ll, 0 );
	HVARINISEPARATOR(  );
	label$1128:;
}

static void _EMITVARINIF( struct $8FBSYMBOL* SYM$1, double VALUE$1 )
{
	label$1133:;
	int64 DTYPE$1;
	DTYPE$1 = *(int64*)((uint8*)SYM$1 + 56ll) & 511ll;
	struct $8EXPRNODE* L$1;
	struct $8EXPRNODE* vr$2 = EXPRNEWIMMF( VALUE$1, DTYPE$1 );
	L$1 = vr$2;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 262144ll) == 0ll ) goto label$1136;
	{
		DTYPE$1 = (((DTYPE$1 & 31ll) | ((DTYPE$1 & 480ll) + 32ll)) | ((DTYPE$1 & 261632ll) << (1ll & 63ll))) | (DTYPE$1 & 32505856ll);
	}
	label$1136:;
	label$1135:;
	struct $8EXPRNODE* vr$15 = EXPRNEWCAST( DTYPE$1, *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 64ll), L$1 );
	L$1 = vr$15;
	FBSTRING* vr$16 = EXPRFLUSH( L$1, 0ll );
	fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5280ll), -1ll, (void*)vr$16, -1ll, 0 );
	HVARINISEPARATOR(  );
	label$1134:;
}

static void _EMITVARINIOFS( struct $8FBSYMBOL* SYM$1, struct $8FBSYMBOL* RHS$1, int64 OFS$1 )
{
	label$1137:;
	struct $8EXPRNODE* L$1;
	struct $8EXPRNODE* vr$0 = EXPRNEWOFFSET( RHS$1, OFS$1 );
	L$1 = vr$0;
	int64 DTYPE$1;
	DTYPE$1 = *(int64*)((uint8*)SYM$1 + 56ll) & 511ll;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 262144ll) == 0ll ) goto label$1140;
	{
		DTYPE$1 = (((DTYPE$1 & 31ll) | ((DTYPE$1 & 480ll) + 32ll)) | ((DTYPE$1 & 261632ll) << (1ll & 63ll))) | (DTYPE$1 & 32505856ll);
	}
	label$1140:;
	label$1139:;
	struct $8EXPRNODE* vr$15 = EXPRNEWCAST( DTYPE$1, *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 64ll), L$1 );
	L$1 = vr$15;
	FBSTRING* vr$16 = EXPRFLUSH( L$1, 0ll );
	fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5280ll), -1ll, (void*)vr$16, -1ll, 0 );
	HVARINISEPARATOR(  );
	label$1138:;
}

static void _EMITVARINISTR( int64 VARLENGTH$1, char* LITERAL$1, int64 LITLENGTH$1 )
{
	int64 TMP$635$1;
	label$1141:;
	if( LITLENGTH$1 <= VARLENGTH$1 ) goto label$1144;
	{
		LITLENGTH$1 = VARLENGTH$1;
	}
	label$1144:;
	label$1143:;
	TMP$635$1 = 0ll;
	char* vr$2 = HUNESCAPE( LITERAL$1, &TMP$635$1 );
	HBUILDSTRLIT( (FBSTRING*)((uint8*)&CTX$ + 5280ll), vr$2, LITLENGTH$1 + 1ll );
	HVARINISEPARATOR(  );
	label$1142:;
}

static void _EMITVARINIWSTR( int64 VARLENGTH$1, uint16* LITERAL$1, int64 LITLENGTH$1 )
{
	int64 TMP$637$1;
	label$1145:;
	uint64 CH$1;
	int64 WCHARSIZE$1;
	fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5280ll), -1ll, (void*)"{ ", 3ll, 0 );
	TMP$637$1 = 0ll;
	uint16* vr$2 = HUNESCAPEW( LITERAL$1, &TMP$637$1 );
	LITERAL$1 = vr$2;
	WCHARSIZE$1 = *(int64*)((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + 400ll);
	if( LITLENGTH$1 <= VARLENGTH$1 ) goto label$1148;
	{
		LITLENGTH$1 = VARLENGTH$1;
	}
	label$1148:;
	label$1147:;
	{
		int64 I$2;
		I$2 = 0ll;
		int64 TMP$638$2;
		TMP$638$2 = LITLENGTH$1 + -1ll;
		goto label$1149;
		label$1152:;
		{
			if( I$2 <= 0ll ) goto label$1154;
			{
				fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5280ll), -1ll, (void*)", ", 3ll, 0 );
			}
			label$1154:;
			label$1153:;
			fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5280ll), -1ll, (void*)"L'", 3ll, 0 );
			CH$1 = (uint64)*(uint16*)((uint8*)LITERAL$1 + (I$2 << (1ll & 63ll)));
			int64 vr$9 = HCHARNEEDSESCAPING( (int64)CH$1, 39ll );
			if( vr$9 == 0ll ) goto label$1156;
			{
				fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5280ll), -1ll, (void*)"\x5Cx", 3ll, 0 );
				FBSTRING* vr$13 = fb_HEXEx_l( CH$1, (int32)(WCHARSIZE$1 << (1ll & 63ll)) );
				fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5280ll), -1ll, (void*)vr$13, -1ll, 0 );
			}
			goto label$1155;
			label$1156:;
			{
				FBSTRING* vr$15 = fb_CHR( 1, (int64)CH$1 );
				fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5280ll), -1ll, (void*)vr$15, -1ll, 0 );
			}
			label$1155:;
			fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5280ll), -1ll, (void*)"'", 2ll, 0 );
		}
		label$1150:;
		I$2 = I$2 + 1ll;
		label$1149:;
		if( I$2 <= TMP$638$2 ) goto label$1152;
		label$1151:;
	}
	fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5280ll), -1ll, (void*)" }", 3ll, 0 );
	HVARINISEPARATOR(  );
	label$1146:;
}

static void _EMITVARINIPAD( int64 BYTES$1 )
{
	label$1157:;
	label$1158:;
}

static void _EMITVARINISCOPEBEGIN( struct $8FBSYMBOL* SYM$1, int64 IS_ARRAY$1 )
{
	label$1159:;
	*(int64*)((uint8*)&CTX$ + 5304ll) = *(int64*)((uint8*)&CTX$ + 5304ll) + 1ll;
	fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5280ll), -1ll, (void*)"{ ", 3ll, 0 );
	label$1160:;
}

static void _EMITVARINISCOPEEND( void )
{
	label$1161:;
	FBSTRING* vr$1 = fb_RIGHT( (FBSTRING*)((uint8*)&CTX$ + 5280ll), 2ll );
	int32 vr$2 = fb_StrCompare( (void*)vr$1, -1ll, (void*)", ", 3ll );
	if( (int64)vr$2 != 0ll ) goto label$1164;
	{
		int64 vr$5 = fb_StrLen( (void*)((uint8*)&CTX$ + 5280ll), -1ll );
		fb_LEFTSELF( (FBSTRING*)((uint8*)&CTX$ + 5280ll), vr$5 + -2ll );
	}
	label$1164:;
	label$1163:;
	fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5280ll), -1ll, (void*)" }", 3ll, 0 );
	*(int64*)((uint8*)&CTX$ + 5304ll) = *(int64*)((uint8*)&CTX$ + 5304ll) + -1ll;
	HVARINISEPARATOR(  );
	label$1162:;
}

static void _EMITFBCTINFBEGIN( void )
{
	FBSTRING TMP$641$1;
	label$1165:;
	__builtin_memset( &TMP$641$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$641$1, -1ll, (void*)"", 1ll, 0 );
	HWRITELINE( &TMP$641$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$641$1 );
	fb_StrAssign( (void*)((uint8*)&CTX$ + 5312ll), -1ll, (void*)"static const char ", 19ll, 0 );
	int64 vr$5 = FBGETOPTION( 3ll );
	if( vr$5 != 9ll ) goto label$1168;
	{
		fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5312ll), -1ll, (void*)"__attribute__((used, section(\x22__DATA,fbctinf\x22))) ", 50ll, 0 );
	}
	goto label$1167;
	label$1168:;
	{
		fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5312ll), -1ll, (void*)"__attribute__((used, section(\x22.fbctinf\x22))) ", 44ll, 0 );
	}
	label$1167:;
	fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5312ll), -1ll, (void*)"__fbctinf[] = \x22", 16ll, 0 );
	label$1166:;
}

static void _EMITFBCTINFSTRING( char* S$1 )
{
	FBSTRING TMP$652$1;
	FBSTRING TMP$653$1;
	label$1169:;
	__builtin_memset( &TMP$652$1, 0, 24ll );
	FBSTRING* vr$2 = fb_StrConcat( &TMP$652$1, (void*)S$1, 0ll, (void*)"\x5C" "0", 3ll );
	__builtin_memset( &TMP$653$1, 0, 24ll );
	FBSTRING* vr$6 = fb_StrConcat( &TMP$653$1, (void*)((uint8*)&CTX$ + 5312ll), -1ll, (void*)vr$2, -1ll );
	fb_StrAssign( (void*)((uint8*)&CTX$ + 5312ll), -1ll, (void*)vr$6, -1ll, 0 );
	label$1170:;
}

static void _EMITFBCTINFEND( void )
{
	label$1171:;
	FBSTRING* vr$1 = fb_RIGHT( (FBSTRING*)((uint8*)&CTX$ + 5312ll), 2ll );
	int32 vr$2 = fb_StrCompare( (void*)vr$1, -1ll, (void*)"\x5C" "0", 3ll );
	if( (int64)vr$2 != 0ll ) goto label$1174;
	{
		int64 vr$5 = fb_StrLen( (void*)((uint8*)&CTX$ + 5312ll), -1ll );
		FBSTRING* vr$8 = fb_LEFT( (FBSTRING*)((uint8*)&CTX$ + 5312ll), vr$5 + -2ll );
		fb_StrAssign( (void*)((uint8*)&CTX$ + 5312ll), -1ll, (void*)vr$8, -1ll, 0 );
	}
	label$1174:;
	label$1173:;
	fb_StrConcatByref( (void*)((uint8*)&CTX$ + 5312ll), -1ll, (void*)"\x22;", 3ll, 0 );
	HWRITELINE( (FBSTRING*)((uint8*)&CTX$ + 5312ll), -1ll );
	label$1172:;
}

static void _EMITPROCBEGIN( struct $8FBSYMBOL* PROC$1, struct $8FBSYMBOL* INITLABEL$1 )
{
	FBSTRING TMP$655$1;
	FBSTRING TMP$669$1;
	FBSTRING TMP$670$1;
	label$1175:;
	HUPDATECURRENTFILENAME( *(char**)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 208ll) + 48ll) );
	IRHLEMITPROCBEGIN(  );
	FBSTRING MANGLED$1;
	__builtin_memset( &MANGLED$1, 0, 24ll );
	__builtin_memset( &TMP$655$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$655$1, -1ll, (void*)"", 1ll, 0 );
	HWRITELINE( &TMP$655$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$655$1 );
	if( *(int64*)((uint8*)&ENV$ + 296ll) == 0ll ) goto label$1178;
	{
		_EMITDBG( 113ll, PROC$1, *(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 208ll) + 32ll), (char*)0ull );
	}
	label$1178:;
	label$1177:;
	if( (*(int64*)((uint8*)PROC$1 + 16ll) & 128ll) == 0ll ) goto label$1180;
	{
		FBSTRING TMP$656$2;
		FBSTRING TMP$659$2;
		FBSTRING TMP$660$2;
		FBSTRING TMP$661$2;
		FBSTRING TMP$664$2;
		FBSTRING TMP$665$2;
		FBSTRING TMP$666$2;
		FBSTRING* vr$11 = HGETMANGLEDNAMEFORASM( PROC$1, -1ll );
		fb_StrAssign( (void*)&MANGLED$1, -1ll, (void*)vr$11, -1ll, 0 );
		__builtin_memset( &TMP$656$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$656$2, -1ll, (void*)"__asm__( \x22.text\x22 );", 20ll, 0 );
		HWRITELINE( &TMP$656$2, 0ll );
		fb_StrDelete( (FBSTRING*)&TMP$656$2 );
		__builtin_memset( &TMP$661$2, 0, 24ll );
		__builtin_memset( &TMP$659$2, 0, 24ll );
		FBSTRING* vr$21 = fb_StrConcat( &TMP$659$2, (void*)"__asm__( \x22.globl ", 18ll, (void*)&MANGLED$1, -1ll );
		__builtin_memset( &TMP$660$2, 0, 24ll );
		FBSTRING* vr$24 = fb_StrConcat( &TMP$660$2, (void*)vr$21, -1ll, (void*)"\x22 );", 5ll );
		fb_StrAssign( (void*)&TMP$661$2, -1ll, (void*)vr$24, -1ll, 0 );
		HWRITELINE( &TMP$661$2, 0ll );
		fb_StrDelete( (FBSTRING*)&TMP$661$2 );
		__builtin_memset( &TMP$666$2, 0, 24ll );
		__builtin_memset( &TMP$664$2, 0, 24ll );
		FBSTRING* vr$32 = fb_StrConcat( &TMP$664$2, (void*)"__asm__( \x22", 11ll, (void*)&MANGLED$1, -1ll );
		__builtin_memset( &TMP$665$2, 0, 24ll );
		FBSTRING* vr$35 = fb_StrConcat( &TMP$665$2, (void*)vr$32, -1ll, (void*)":\x22 );", 6ll );
		fb_StrAssign( (void*)&TMP$666$2, -1ll, (void*)vr$35, -1ll, 0 );
		HWRITELINE( &TMP$666$2, 0ll );
		fb_StrDelete( (FBSTRING*)&TMP$666$2 );
		fb_StrDelete( (FBSTRING*)&MANGLED$1 );
		goto label$1176;
	}
	label$1180:;
	label$1179:;
	SECTIONBEGIN(  );
	int64 vr$40 = HNEEDALIAS( PROC$1 );
	if( vr$40 == 0ll ) goto label$1182;
	{
		FBSTRING TMP$667$2;
		FBSTRING TMP$668$2;
		__builtin_memset( &TMP$668$2, 0, 24ll );
		FBSTRING* vr$42 = HEMITPROCHEADER( PROC$1, 1ll );
		__builtin_memset( &TMP$667$2, 0, 24ll );
		FBSTRING* vr$45 = fb_StrConcat( &TMP$667$2, (void*)vr$42, -1ll, (void*)";", 2ll );
		fb_StrAssign( (void*)&TMP$668$2, -1ll, (void*)vr$45, -1ll, 0 );
		HWRITELINE( &TMP$668$2, 0ll );
		fb_StrDelete( (FBSTRING*)&TMP$668$2 );
	}
	label$1182:;
	label$1181:;
	__builtin_memset( &TMP$669$1, 0, 24ll );
	FBSTRING* vr$50 = HEMITPROCHEADER( PROC$1, 0ll );
	fb_StrAssign( (void*)&TMP$669$1, -1ll, (void*)vr$50, -1ll, 0 );
	HWRITELINE( &TMP$669$1, 0ll );
	fb_StrDelete( (FBSTRING*)&TMP$669$1 );
	__builtin_memset( &TMP$670$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$670$1, -1ll, (void*)"{", 2ll, 0 );
	HWRITELINE( &TMP$670$1, 0ll );
	fb_StrDelete( (FBSTRING*)&TMP$670$1 );
	SECTIONINDENT(  );
	fb_StrDelete( (FBSTRING*)&MANGLED$1 );
	label$1176:;
}

static void _EMITPROCEND( struct $8FBSYMBOL* PROC$1, struct $8FBSYMBOL* INITLABEL$1, struct $8FBSYMBOL* EXITLABEL$1 )
{
	FBSTRING TMP$678$1;
	label$1183:;
	FBSTRING MANGLED$1;
	__builtin_memset( &MANGLED$1, 0, 24ll );
	struct $13EXPRCACHENODE* CACHENODE$1;
	if( (*(int64*)((uint8*)PROC$1 + 16ll) & 128ll) == 0ll ) goto label$1186;
	{
		if( *(int64*)((uint8*)&ENV$ + 216ll) != 2ll ) goto label$1188;
		{
			FBSTRING TMP$673$3;
			FBSTRING TMP$674$3;
			FBSTRING TMP$675$3;
			FBSTRING TMP$676$3;
			FBSTRING TMP$677$3;
			FBSTRING* vr$3 = HGETMANGLEDNAMEFORASM( PROC$1, -1ll );
			fb_StrAssign( (void*)&MANGLED$1, -1ll, (void*)vr$3, -1ll, 0 );
			__builtin_memset( &TMP$677$3, 0, 24ll );
			__builtin_memset( &TMP$673$3, 0, 24ll );
			FBSTRING* vr$10 = fb_StrConcat( &TMP$673$3, (void*)"__asm__( \x22.size ", 17ll, (void*)&MANGLED$1, -1ll );
			__builtin_memset( &TMP$674$3, 0, 24ll );
			FBSTRING* vr$13 = fb_StrConcat( &TMP$674$3, (void*)vr$10, -1ll, (void*)", .-", 5ll );
			__builtin_memset( &TMP$675$3, 0, 24ll );
			FBSTRING* vr$16 = fb_StrConcat( &TMP$675$3, (void*)vr$13, -1ll, (void*)&MANGLED$1, -1ll );
			__builtin_memset( &TMP$676$3, 0, 24ll );
			FBSTRING* vr$19 = fb_StrConcat( &TMP$676$3, (void*)vr$16, -1ll, (void*)"\x22 );", 5ll );
			fb_StrAssign( (void*)&TMP$677$3, -1ll, (void*)vr$19, -1ll, 0 );
			HWRITELINE( &TMP$677$3, -1ll );
			fb_StrDelete( (FBSTRING*)&TMP$677$3 );
		}
		label$1188:;
		label$1187:;
		fb_StrDelete( (FBSTRING*)&MANGLED$1 );
		goto label$1184;
	}
	label$1186:;
	label$1185:;
	SECTIONUNINDENT(  );
	__builtin_memset( &TMP$678$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$678$1, -1ll, (void*)"}", 2ll, 0 );
	HWRITELINE( &TMP$678$1, 0ll );
	fb_StrDelete( (FBSTRING*)&TMP$678$1 );
	SECTIONEND(  );
	label$1189:;
	{
		void* vr$29 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&CTX$ + 5448ll) );
		CACHENODE$1 = (struct $13EXPRCACHENODE*)vr$29;
		if( CACHENODE$1 != (struct $13EXPRCACHENODE*)0ull ) goto label$1193;
		{
			goto label$1190;
		}
		label$1193:;
		label$1192:;
		EXPRFREETREE( *(struct $8EXPRNODE**)((uint8*)CACHENODE$1 + 8ll) );
		LISTDELNODE( (struct $5TLIST*)((uint8*)&CTX$ + 5448ll), (void*)CACHENODE$1 );
	}
	label$1191:;
	goto label$1189;
	label$1190:;
	IRHLEMITPROCEND(  );
	fb_StrDelete( (FBSTRING*)&MANGLED$1 );
	label$1184:;
}

static void _EMITSCOPEBEGIN( struct $8FBSYMBOL* S$1 )
{
	FBSTRING TMP$679$1;
	label$1194:;
	SECTIONBEGIN(  );
	__builtin_memset( &TMP$679$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$679$1, -1ll, (void*)"{", 2ll, 0 );
	HWRITELINE( &TMP$679$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$679$1 );
	SECTIONINDENT(  );
	label$1195:;
}

static void _EMITSCOPEEND( struct $8FBSYMBOL* S$1 )
{
	FBSTRING TMP$680$1;
	label$1196:;
	SECTIONUNINDENT(  );
	__builtin_memset( &TMP$680$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$680$1, -1ll, (void*)"}", 2ll, 0 );
	HWRITELINE( &TMP$680$1, -1ll );
	fb_StrDelete( (FBSTRING*)&TMP$680$1 );
	SECTIONEND(  );
	label$1197:;
}

__attribute__(( constructor )) static void _GLOBAL__I( void )
{
	label$1199:;
	_ZN8IRHLCCTXC1Ev( &CTX$ );
	label$1200:;
}

__attribute__(( destructor )) static void _GLOBAL__D( void )
{
	label$1202:;
	_ZN8IRHLCCTXD1Ev( &CTX$ );
	label$1203:;
}
