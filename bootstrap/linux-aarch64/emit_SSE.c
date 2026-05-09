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
typedef int64 $15IRVREGTYPE_ENUM;
typedef int64 $11FB_DATATYPE;
typedef int64 $12FB_SYMBCLASS;
typedef int64 $13FB_SYMBATTRIB;
typedef int64 $13FB_PROCATTRIB;
typedef int64 $12FB_SYMBSTATS;
struct $9FB_SYMBID {
	char* NAME;
	char* ALIAS;
	char* MANGLED;
};
#define __FB_STATIC_ASSERT( expr ) extern int __$fb_structsizecheck[(expr) ? 1 : -1]
__FB_STATIC_ASSERT( sizeof( struct $9FB_SYMBID ) == 24 );
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
		uint32* LITTEXTW;
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
struct $8HASHITEM;
struct $8HASHITEM {
	char* NAME;
	void* DATA;
	struct $8HASHITEM* PREV;
	struct $8HASHITEM* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $8HASHITEM ) == 32 );
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
typedef int64 (*tmp$34)( struct $8FBSYMBOL* );
struct $10FB_PROCRTL {
	tmp$34 CALLBACK;
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
		uint32* TEXTW;
		int64 PARAMNUM;
	};
	struct $9FB_DEFTOK* PREV;
	struct $9FB_DEFTOK* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $9FB_DEFTOK ) == 32 );
typedef int64 $15FB_DEFINE_FLAGS;
typedef FBSTRING* (*tmp$28)( void );
typedef FBSTRING* (*tmp$29)( void*, int64* );
typedef uint32* (*tmp$30)( void*, int64* );
struct $10FBS_DEFINE {
	int64 PARAMS;
	struct $11FB_DEFPARAM* PARAMHEAD;
	union {
		struct $9FB_DEFTOK* TOKHEAD;
		char* TEXT;
		uint32* TEXTW;
	};
	int64 ISARGLESS;
	$15FB_DEFINE_FLAGS FLAGS;
	union {
		tmp$28 DPROCZ;
		tmp$29 MPROCZ;
	};
	union {
		tmp$30 MPROCW;
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
typedef void (*tmp$45)( struct $6IRVREG*, struct $6IRVREG* );
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
	struct $8HASHITEM* HASHITEM;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 40 );
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
struct $12EMITDATATYPE {
	int64 RNAMETB;
	char MNAME[12];
};
__FB_STATIC_ASSERT( sizeof( struct $12EMITDATATYPE ) == 24 );
typedef struct $6IRVREG* (*tmp$72)( int64, struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
struct $16__FB_ARRAYDIMTB$ {
	int64 ELEMENTS;
	int64 LBOUND;
	int64 UBOUND;
};
__FB_STATIC_ASSERT( sizeof( struct $16__FB_ARRAYDIMTB$ ) == 24 );
struct $8FBARRAY1IlE {
	int64* DATA;
	int64* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	int64 FLAGS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[1];
};
__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1IlE ) == 72 );
struct $8FBARRAY1I8FBSTRINGE {
	FBSTRING* DATA;
	FBSTRING* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	int64 FLAGS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[1];
};
__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1I8FBSTRINGE ) == 72 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
FBSTRING* fb_StrConcatAssign( void*, int64, void*, int64, int32 );
FBSTRING* fb_LongintToStr( int64 );
FBSTRING* fb_CHR( int32, ... );
static void fb_ctor__emit_SSE( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
struct $8FBSYMBOL* SYMBALLOCINTCONST( int64, int64 );
char* SYMBUNIQUELABEL( void );
char* SYMBGETMANGLEDNAME( struct $8FBSYMBOL* );
void HPREPOPERAND( struct $6IRVREG*, FBSTRING*, $11FB_DATATYPE, int64, int64, int64 );
void HPREPOPERAND64( struct $6IRVREG*, FBSTRING*, FBSTRING* );
void HPUSH( char* );
void HPOP( char* );
int64 HFINDREGNOTINVREG( struct $6IRVREG*, int64 );
int64 HFINDFREEREG( int64 );
int64 HISREGFREE( int64, int64 );
char* HGETREGNAME( int64, int64 );
void OUTP( char* );
void HLABEL( char* );
void HBRANCH( char*, char* );
void HMOV( char*, char* );
static void HULONG2DBL( struct $6IRVREG* );
static void _EMITLOADB2F_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSTORF2L_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSTORF2I_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSTORL2F_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSTORI2F_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void HEMITSTOREFREG2F_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSTORF2F_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITLOADF2L_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITLOADF2I_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITLOADL2F_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITLOADI2F_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITLOADF2F_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITMOVF_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSWZREPF_SSE( struct $6IRVREG* );
static int64 HEMITCONVERTOPERANDS_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITADDF_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSUBF_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITMULF_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITDIVF_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITATN2_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITPOW_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void HCMPF_SSE( struct $6IRVREG*, struct $8FBSYMBOL*, char*, char*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCGTF_SSE( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCLTF_SSE( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCEQF_SSE( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCNEF_SSE( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCLEF_SSE( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCGEF_SSE( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITNEGF_SSE( struct $6IRVREG* );
static void _EMITHADDF_SSE( struct $6IRVREG* );
static void _EMITABSF_SSE( struct $6IRVREG* );
static void _EMITSGNF_SSE( struct $6IRVREG* );
static void HSINCOS_FAST_SSE( struct $6IRVREG*, int64 );
static void _EMITSIN_SSE( struct $6IRVREG* );
static void _EMITASIN_SSE( struct $6IRVREG* );
static void _EMITCOS_SSE( struct $6IRVREG* );
static void _EMITACOS_SSE( struct $6IRVREG* );
static void _EMITTAN_SSE( struct $6IRVREG* );
static void _EMITATAN_SSE( struct $6IRVREG* );
static void _EMITSQRT_SSE( struct $6IRVREG* );
static void _EMITRSQRT_SSE( struct $6IRVREG* );
static void _EMITRCP_SSE( struct $6IRVREG* );
static void _EMITLOG_SSE( struct $6IRVREG* );
static void _EMITEXP_SSE( struct $6IRVREG* );
static void _EMITFLOOR_SSE( struct $6IRVREG* );
static void _EMITFIX_SSE( struct $6IRVREG* );
static void _EMITFRAC_SSE( struct $6IRVREG* );
static void _EMITPUSHF_SSE( struct $6IRVREG*, int64 );
static void _EMITPOPF_SSE( struct $6IRVREG*, int64 );
typedef void (*tmp$38)( void );
typedef int64 (*tmp$39)( void );
typedef int64 $14IR_OPTIONVALUE;
typedef int64 (*tmp$40)( $14IR_OPTIONVALUE );
typedef int64 (*tmp$41)( int64, int64 );
typedef void (*tmp$42)( struct $8FBSYMBOL* );
typedef void (*tmp$43)( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef char* (*tmp$44)( void );
typedef void (*tmp$46)( int64 );
typedef void (*tmp$47)( struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef void (*tmp$48)( struct $8FBSYMBOL*, struct $6IRVREG*, int64, int64, struct $6IRVREG* );
typedef void (*tmp$49)( struct $9ASTASMTOK* );
typedef void (*tmp$50)( char* );
typedef void (*tmp$51)( int64, struct $6IRVREG*, struct $6IRVREG*, struct $6IRVREG*, struct $8FBSYMBOL* );
typedef void (*tmp$52)( int64, struct $6IRVREG*, struct $6IRVREG* );
typedef void (*tmp$53)( struct $6IRVREG* );
typedef void (*tmp$54)( struct $8FBSYMBOL*, int64, struct $6IRVREG*, int64 );
typedef void (*tmp$55)( struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG*, int64, int64 );
typedef void (*tmp$56)( int64, struct $8FBSYMBOL* );
typedef void (*tmp$57)( struct $6IRVREG*, struct $8FBSYMBOL*, uint64*, struct $8FBSYMBOL**, int64, struct $8FBSYMBOL*, uint64, uint64 );
typedef void (*tmp$58)( int64, struct $6IRVREG*, struct $6IRVREG*, int64 );
typedef void (*tmp$59)( int64, struct $6IRVREG*, struct $6IRVREG*, struct $6IRVREG* );
typedef void (*tmp$60)( int64, struct $8FBSYMBOL*, int64, char* );
typedef void (*tmp$61)( struct $8FBSYMBOL*, int64 );
typedef void (*tmp$62)( struct $8FBSYMBOL*, double );
typedef void (*tmp$63)( struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
typedef void (*tmp$64)( int64, char*, int64 );
typedef void (*tmp$65)( int64, uint32*, int64 );
typedef void (*tmp$66)( int64 );
typedef void (*tmp$67)( struct $8FBSYMBOL*, int64 );
typedef void (*tmp$68)( char* );
typedef struct $6IRVREG* (*tmp$69)( int64, struct $8FBSYMBOL* );
typedef struct $6IRVREG* (*tmp$70)( int64, struct $8FBSYMBOL*, int64 );
typedef struct $6IRVREG* (*tmp$71)( int64, struct $8FBSYMBOL*, double );
typedef struct $6IRVREG* (*tmp$73)( int64, struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64, int64, struct $6IRVREG* );
typedef struct $6IRVREG* (*tmp$74)( int64, struct $8FBSYMBOL*, int64, struct $6IRVREG* );
typedef void (*tmp$75)( struct $6IRVREG*, int64, struct $8FBSYMBOL* );
typedef uint64 (*tmp$76)( struct $6IRVREG* );
struct $7IR_VTBL {
	tmp$38 INIT;
	tmp$38 END;
	tmp$39 EMITBEGIN;
	tmp$38 EMITEND;
	tmp$40 GETOPTIONVALUE;
	tmp$41 SUPPORTSOP;
	tmp$42 PROCBEGIN;
	tmp$42 PROCEND;
	tmp$43 PROCALLOCARG;
	tmp$43 PROCALLOCLOCAL;
	tmp$44 PROCGETFRAMEREGNAME;
	tmp$42 SCOPEBEGIN;
	tmp$42 SCOPEEND;
	tmp$42 PROCALLOCSTATICVARS;
	tmp$45 EMITCONVERT;
	tmp$42 EMITLABEL;
	tmp$42 EMITLABELNF;
	tmp$46 EMITRETURN;
	tmp$43 EMITPROCBEGIN;
	tmp$47 EMITPROCEND;
	tmp$48 EMITPUSHARG;
	tmp$49 EMITASMLINE;
	tmp$50 EMITCOMMENT;
	tmp$51 EMITBOP;
	tmp$52 EMITUOP;
	tmp$45 EMITSTORE;
	tmp$38 EMITSPILLREGS;
	tmp$53 EMITLOAD;
	tmp$45 EMITLOADRES;
	tmp$52 EMITSTACK;
	tmp$52 EMITADDR;
	tmp$54 EMITCALL;
	tmp$55 EMITCALLPTR;
	tmp$46 EMITSTACKALIGN;
	tmp$53 EMITJUMPPTR;
	tmp$56 EMITBRANCH;
	tmp$57 EMITJMPTB;
	tmp$58 EMITMEM;
	tmp$59 EMITMACRO;
	tmp$42 EMITSCOPEBEGIN;
	tmp$42 EMITSCOPEEND;
	tmp$42 EMITDECL;
	tmp$60 EMITDBG;
	tmp$42 EMITVARINIBEGIN;
	tmp$42 EMITVARINIEND;
	tmp$61 EMITVARINII;
	tmp$62 EMITVARINIF;
	tmp$63 EMITVARINIOFS;
	tmp$64 EMITVARINISTR;
	tmp$65 EMITVARINIWSTR;
	tmp$66 EMITVARINIPAD;
	tmp$67 EMITVARINISCOPEBEGIN;
	tmp$38 EMITVARINISCOPEEND;
	tmp$38 EMITFBCTINFBEGIN;
	tmp$68 EMITFBCTINFSTRING;
	tmp$38 EMITFBCTINFEND;
	tmp$69 ALLOCVREG;
	tmp$70 ALLOCVRIMM;
	tmp$71 ALLOCVRIMMF;
	tmp$72 ALLOCVRVAR;
	tmp$73 ALLOCVRIDX;
	tmp$74 ALLOCVRPTR;
	tmp$72 ALLOCVROFS;
	tmp$75 SETVREGDATATYPE;
	tmp$76 GETDISTANCE;
	tmp$52 LOADVR;
	tmp$45 STOREVR;
	tmp$46 XCHGTOS;
};
__FB_STATIC_ASSERT( sizeof( struct $7IR_VTBL ) == 544 );
typedef int64 $6IR_OPT;
struct $5IRCTX {
	struct $7IR_VTBL VTBL;
	$6IR_OPT OPTIONS;
};
__FB_STATIC_ASSERT( sizeof( struct $5IRCTX ) == 552 );
extern struct $5IRCTX IR$;
typedef int64 $11AST_OPFLAGS;
struct $10AST_OPINFO {
	$13AST_NODECLASS CLASS;
	$11AST_OPFLAGS FLAGS;
	char* ID;
	$6AST_OP SELFOP;
};
__FB_STATIC_ASSERT( sizeof( struct $10AST_OPINFO ) == 32 );
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
static struct $8FBARRAY1I10AST_OPINFOE tmp$80$;
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
static struct $8FBARRAY1I13SYMB_DATATYPEE tmp$81$;
struct $8FBARRAY2IlE {
	int64* DATA;
	int64* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	int64 FLAGS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[2];
};
__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY2IlE ) == 96 );
static struct $8FBARRAY2IlE tmp$82$;
typedef int64 $10FB_OUTTYPE;
typedef int64 $10FB_BACKEND;
typedef int64 $13FB_COMPTARGET;
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
struct $8FBARRAY1IPvE {
	void** DATA;
	void** PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	int64 FLAGS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[1];
};
__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1IPvE ) == 72 );
static struct $8FBARRAY1IPvE tmp$105$;
extern struct $12EMITDATATYPE DTYPETB$[26];
struct $8FBARRAY1I12EMITDATATYPEE {
	struct $12EMITDATATYPE* DATA;
	struct $12EMITDATATYPE* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	int64 FLAGS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[1];
};
__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1I12EMITDATATYPEE ) == 72 );
static struct $8FBARRAY1I12EMITDATATYPEE tmp$107$;
static tmp$45 _EMITLOADB2F_X86$;

int64 _INIT_OPFNTB_SSE( void** _OPFNTB_SSE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$738:;
	_EMITLOADB2F_X86$ = *(tmp$45*)((uint8*)_OPFNTB_SSE$1 + 64ll);
	*(void**)((uint8*)_OPFNTB_SSE$1 + 16ll) = (void*)&_EMITLOADF2I_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 40ll) = (void*)&_EMITLOADI2F_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 80ll) = (void*)&_EMITLOADF2L_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 56ll) = (void*)&_EMITLOADL2F_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 48ll) = (void*)&_EMITLOADF2F_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 64ll) = (void*)&_EMITLOADB2F_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 144ll) = (void*)&_EMITSTORF2I_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 168ll) = (void*)&_EMITSTORI2F_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 208ll) = (void*)&_EMITSTORF2L_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 184ll) = (void*)&_EMITSTORL2F_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 176ll) = (void*)&_EMITSTORF2F_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 272ll) = (void*)&_EMITMOVF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 296ll) = (void*)&_EMITADDF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 320ll) = (void*)&_EMITSUBF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 344ll) = (void*)&_EMITMULF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 368ll) = (void*)&_EMITDIVF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 520ll) = (void*)&_EMITATN2_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 528ll) = (void*)&_EMITPOW_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 560ll) = (void*)&_EMITCGTF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 584ll) = (void*)&_EMITCLTF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 608ll) = (void*)&_EMITCEQF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 632ll) = (void*)&_EMITCNEF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 656ll) = (void*)&_EMITCGEF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 680ll) = (void*)&_EMITCLEF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 704ll) = (void*)&_EMITNEGF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 736ll) = (void*)&_EMITHADDF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 752ll) = (void*)&_EMITABSF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 776ll) = (void*)&_EMITSGNF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 792ll) = (void*)&_EMITFIX_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 800ll) = (void*)&_EMITFRAC_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 824ll) = (void*)&_EMITSIN_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 832ll) = (void*)&_EMITASIN_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 840ll) = (void*)&_EMITCOS_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 848ll) = (void*)&_EMITACOS_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 856ll) = (void*)&_EMITTAN_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 864ll) = (void*)&_EMITATAN_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 872ll) = (void*)&_EMITSQRT_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 880ll) = (void*)&_EMITRSQRT_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 888ll) = (void*)&_EMITRCP_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 896ll) = (void*)&_EMITLOG_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 904ll) = (void*)&_EMITEXP_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 912ll) = (void*)&_EMITFLOOR_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 816ll) = (void*)&_EMITSWZREPF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 944ll) = (void*)&_EMITPUSHF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 968ll) = (void*)&_EMITPOPF_SSE;
	fb$result$1 = -1ll;
	label$739:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__emit_SSE( void )
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

static void HULONG2DBL( struct $6IRVREG* SVREG$1 )
{
	label$10:;
	static FBSTRING LABEL$1;
	static FBSTRING AUX$1;
	static FBSTRING OSTR$1;
	char* vr$0 = SYMBUNIQUELABEL(  );
	fb_StrAssign( (void*)&LABEL$1, -1ll, (void*)vr$0, 0ll, 0 );
	HPREPOPERAND( SVREG$1, &AUX$1, 8ll, 0ll, -1ll, -1ll );
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"cmp ", 5ll, 0 );
	fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&AUX$1, -1ll, 0 );
	fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", 0", 4ll, 0 );
	OUTP( (char*)*(char**)&OSTR$1 );
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"jns ", 5ll, 0 );
	fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&LABEL$1, -1ll, 0 );
	OUTP( (char*)*(char**)&OSTR$1 );
	HPUSH( (char*)"0x403f" );
	HPUSH( (char*)"0x80000000" );
	HPUSH( (char*)"0" );
	OUTP( (char*)"fldt [esp]" );
	OUTP( (char*)"add esp, 12" );
	OUTP( (char*)"faddp" );
	HLABEL( (char*)*(char**)&LABEL$1 );
	label$11:;
}

static void _EMITLOADB2F_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$119$1;
	FBSTRING TMP$122$1;
	FBSTRING TMP$123$1;
	FBSTRING TMP$140$1;
	FBSTRING TMP$141$1;
	label$12:;
	FBSTRING DST$1;
	__builtin_memset( &DST$1, 0, 24ll );
	int64 DDSIZE$1;
	(_EMITLOADB2F_X86$)( DVREG$1, SVREG$1 );
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$14;
	TMP$119$1 = 24ll;
	goto label$740;
	label$14:;
	TMP$119$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$740:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$119$1 * 56ll)) + 8ll);
	__builtin_memset( &TMP$123$1, 0, 24ll );
	FBSTRING* vr$8 = fb_LongintToStr( DDSIZE$1 );
	__builtin_memset( &TMP$122$1, 0, 24ll );
	FBSTRING* vr$11 = fb_StrConcat( &TMP$122$1, (void*)"sub esp, ", 10ll, (void*)vr$8, -1ll );
	fb_StrAssign( (void*)&TMP$123$1, -1ll, (void*)vr$11, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$123$1 );
	fb_StrDelete( (FBSTRING*)&TMP$123$1 );
	if( DDSIZE$1 <= 4ll ) goto label$16;
	{
		FBSTRING TMP$127$2;
		FBSTRING TMP$128$2;
		FBSTRING TMP$129$2;
		FBSTRING TMP$130$2;
		OUTP( (char*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$130$2, 0, 24ll );
		__builtin_memset( &TMP$127$2, 0, 24ll );
		FBSTRING* vr$18 = fb_StrConcat( &TMP$127$2, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$128$2, 0, 24ll );
		FBSTRING* vr$21 = fb_StrConcat( &TMP$128$2, (void*)vr$18, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$129$2, 0, 24ll );
		FBSTRING* vr$24 = fb_StrConcat( &TMP$129$2, (void*)vr$21, -1ll, (void*)"qword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$130$2, -1ll, (void*)vr$24, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$130$2 );
		fb_StrDelete( (FBSTRING*)&TMP$130$2 );
	}
	goto label$15;
	label$16:;
	{
		FBSTRING TMP$134$2;
		FBSTRING TMP$135$2;
		FBSTRING TMP$136$2;
		FBSTRING TMP$137$2;
		OUTP( (char*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$137$2, 0, 24ll );
		__builtin_memset( &TMP$134$2, 0, 24ll );
		FBSTRING* vr$31 = fb_StrConcat( &TMP$134$2, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$135$2, 0, 24ll );
		FBSTRING* vr$34 = fb_StrConcat( &TMP$135$2, (void*)vr$31, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$136$2, 0, 24ll );
		FBSTRING* vr$37 = fb_StrConcat( &TMP$136$2, (void*)vr$34, -1ll, (void*)"dword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$137$2, -1ll, (void*)vr$37, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$137$2 );
		fb_StrDelete( (FBSTRING*)&TMP$137$2 );
	}
	label$15:;
	__builtin_memset( &TMP$141$1, 0, 24ll );
	FBSTRING* vr$41 = fb_LongintToStr( DDSIZE$1 );
	__builtin_memset( &TMP$140$1, 0, 24ll );
	FBSTRING* vr$44 = fb_StrConcat( &TMP$140$1, (void*)"add esp, ", 10ll, (void*)vr$41, -1ll );
	fb_StrAssign( (void*)&TMP$141$1, -1ll, (void*)vr$44, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$141$1 );
	fb_StrDelete( (FBSTRING*)&TMP$141$1 );
	fb_StrDelete( (FBSTRING*)&DST$1 );
	label$13:;
}

static void _EMITSTORF2L_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$142$1;
	FBSTRING TMP$159$1;
	FBSTRING TMP$160$1;
	label$17:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static int64 SDSIZE$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$19;
	TMP$142$1 = 24ll;
	goto label$741;
	label$19:;
	TMP$142$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$741:;
	if( *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$142$1 * 56ll)) + 16ll) != 0ll ) goto label$21;
	{
		goto label$18;
		label$21:;
	}
	if( *(int64*)((uint8*)SVREG$1 + 32ll) != 1ll ) goto label$23;
	{
		int64 TMP$143$2;
		FBSTRING TMP$144$2;
		FBSTRING TMP$145$2;
		FBSTRING TMP$156$2;
		FBSTRING TMP$157$2;
		if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$24;
		TMP$143$2 = 24ll;
		goto label$742;
		label$24:;
		TMP$143$2 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
		label$742:;
		SDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$143$2 * 56ll)) + 8ll);
		__builtin_memset( &TMP$145$2, 0, 24ll );
		FBSTRING* vr$12 = fb_LongintToStr( SDSIZE$1 );
		__builtin_memset( &TMP$144$2, 0, 24ll );
		FBSTRING* vr$15 = fb_StrConcat( &TMP$144$2, (void*)"sub esp, ", 10ll, (void*)vr$12, -1ll );
		fb_StrAssign( (void*)&TMP$145$2, -1ll, (void*)vr$15, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$145$2 );
		fb_StrDelete( (FBSTRING*)&TMP$145$2 );
		HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
		if( SDSIZE$1 <= 4ll ) goto label$26;
		{
			FBSTRING TMP$148$3;
			FBSTRING TMP$149$3;
			__builtin_memset( &TMP$149$3, 0, 24ll );
			__builtin_memset( &TMP$148$3, 0, 24ll );
			FBSTRING* vr$21 = fb_StrConcat( &TMP$148$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$149$3, -1ll, (void*)vr$21, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$149$3 );
			fb_StrDelete( (FBSTRING*)&TMP$149$3 );
			OUTP( (char*)"fld qword ptr [esp]" );
		}
		goto label$25;
		label$26:;
		{
			FBSTRING TMP$153$3;
			FBSTRING TMP$154$3;
			__builtin_memset( &TMP$154$3, 0, 24ll );
			__builtin_memset( &TMP$153$3, 0, 24ll );
			FBSTRING* vr$27 = fb_StrConcat( &TMP$153$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$154$3, -1ll, (void*)vr$27, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$154$3 );
			fb_StrDelete( (FBSTRING*)&TMP$154$3 );
			OUTP( (char*)"fld dword ptr [esp]" );
		}
		label$25:;
		__builtin_memset( &TMP$157$2, 0, 24ll );
		FBSTRING* vr$31 = fb_LongintToStr( SDSIZE$1 );
		__builtin_memset( &TMP$156$2, 0, 24ll );
		FBSTRING* vr$34 = fb_StrConcat( &TMP$156$2, (void*)"add esp, ", 10ll, (void*)vr$31, -1ll );
		fb_StrAssign( (void*)&TMP$157$2, -1ll, (void*)vr$34, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$157$2 );
		fb_StrDelete( (FBSTRING*)&TMP$157$2 );
	}
	label$23:;
	label$22:;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	__builtin_memset( &TMP$160$1, 0, 24ll );
	__builtin_memset( &TMP$159$1, 0, 24ll );
	FBSTRING* vr$40 = fb_StrConcat( &TMP$159$1, (void*)"fistp ", 7ll, (void*)&DST$1, -1ll );
	fb_StrAssign( (void*)&TMP$160$1, -1ll, (void*)vr$40, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$160$1 );
	fb_StrDelete( (FBSTRING*)&TMP$160$1 );
	label$18:;
}

static void _EMITSTORF2I_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$161$1;
	int64 TMP$162$1;
	int64 TMP$163$1;
	int64 TMP$174$1;
	label$27:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static int64 SDSIZE$1;
	static int64 DDSIZE$1;
	static FBSTRING OSTR$1;
	static FBSTRING AUX$1;
	static FBSTRING AUX8$1;
	static FBSTRING AUX16$1;
	static int64 ISFREE$1;
	static int64 REG$1;
	static int64 WASREG$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$29;
	TMP$161$1 = 24ll;
	goto label$743;
	label$29:;
	TMP$161$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$743:;
	SDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$161$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$30;
	TMP$162$1 = 24ll;
	goto label$744;
	label$30:;
	TMP$162$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$744:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$162$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$31;
	TMP$163$1 = 24ll;
	goto label$745;
	label$31:;
	TMP$163$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$745:;
	if( ((int64)-(DDSIZE$1 == 4ll) & (int64)-(*(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$163$1 * 56ll)) + 16ll) == 0ll)) == 0ll ) goto label$33;
	{
		OUTP( (char*)"sub esp, 8" );
		if( *(int64*)SVREG$1 == 4ll ) goto label$35;
		{
			FBSTRING TMP$166$3;
			FBSTRING TMP$167$3;
			__builtin_memset( &TMP$167$3, 0, 24ll );
			__builtin_memset( &TMP$166$3, 0, 24ll );
			FBSTRING* vr$22 = fb_StrConcat( &TMP$166$3, (void*)"fld ", 5ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$167$3, -1ll, (void*)vr$22, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$167$3 );
			fb_StrDelete( (FBSTRING*)&TMP$167$3 );
		}
		goto label$34;
		label$35:;
		if( *(int64*)((uint8*)SVREG$1 + 32ll) != 1ll ) goto label$36;
		{
			if( SDSIZE$1 <= 4ll ) goto label$38;
			{
				FBSTRING TMP$168$4;
				FBSTRING TMP$169$4;
				__builtin_memset( &TMP$169$4, 0, 24ll );
				__builtin_memset( &TMP$168$4, 0, 24ll );
				FBSTRING* vr$29 = fb_StrConcat( &TMP$168$4, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&SRC$1, -1ll );
				fb_StrAssign( (void*)&TMP$169$4, -1ll, (void*)vr$29, -1ll, 0 );
				OUTP( (char*)*(char**)&TMP$169$4 );
				fb_StrDelete( (FBSTRING*)&TMP$169$4 );
				OUTP( (char*)"fld qword ptr [esp]" );
			}
			goto label$37;
			label$38:;
			{
				FBSTRING TMP$170$4;
				FBSTRING TMP$171$4;
				__builtin_memset( &TMP$171$4, 0, 24ll );
				__builtin_memset( &TMP$170$4, 0, 24ll );
				FBSTRING* vr$35 = fb_StrConcat( &TMP$170$4, (void*)"movss dword ptr [esp], ", 24ll, (void*)&SRC$1, -1ll );
				fb_StrAssign( (void*)&TMP$171$4, -1ll, (void*)vr$35, -1ll, 0 );
				OUTP( (char*)*(char**)&TMP$171$4 );
				fb_StrDelete( (FBSTRING*)&TMP$171$4 );
				OUTP( (char*)"fld dword ptr [esp]" );
			}
			label$37:;
		}
		label$36:;
		label$34:;
		OUTP( (char*)"fistp qword ptr [esp]" );
		HPOP( (char*)*(char**)&DST$1 );
		OUTP( (char*)"add esp, 4" );
		goto label$28;
	}
	label$33:;
	label$32:;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$39;
	TMP$174$1 = 24ll;
	goto label$746;
	label$39:;
	TMP$174$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$746:;
	if( ((int64)-(DDSIZE$1 == 2ll) & *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$174$1 * 56ll)) + 16ll)) == 0ll ) goto label$41;
	{
		FBSTRING TMP$181$2;
		FBSTRING TMP$182$2;
		OUTP( (char*)"sub esp, 8" );
		if( *(int64*)SVREG$1 == 4ll ) goto label$43;
		{
			FBSTRING TMP$175$3;
			FBSTRING TMP$176$3;
			__builtin_memset( &TMP$176$3, 0, 24ll );
			__builtin_memset( &TMP$175$3, 0, 24ll );
			FBSTRING* vr$49 = fb_StrConcat( &TMP$175$3, (void*)"fld ", 5ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$176$3, -1ll, (void*)vr$49, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$176$3 );
			fb_StrDelete( (FBSTRING*)&TMP$176$3 );
		}
		goto label$42;
		label$43:;
		if( *(int64*)((uint8*)SVREG$1 + 32ll) != 1ll ) goto label$44;
		{
			if( SDSIZE$1 <= 4ll ) goto label$46;
			{
				FBSTRING TMP$177$4;
				FBSTRING TMP$178$4;
				__builtin_memset( &TMP$178$4, 0, 24ll );
				__builtin_memset( &TMP$177$4, 0, 24ll );
				FBSTRING* vr$56 = fb_StrConcat( &TMP$177$4, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&SRC$1, -1ll );
				fb_StrAssign( (void*)&TMP$178$4, -1ll, (void*)vr$56, -1ll, 0 );
				OUTP( (char*)*(char**)&TMP$178$4 );
				fb_StrDelete( (FBSTRING*)&TMP$178$4 );
				OUTP( (char*)"fld qword ptr [esp]" );
			}
			goto label$45;
			label$46:;
			{
				FBSTRING TMP$179$4;
				FBSTRING TMP$180$4;
				__builtin_memset( &TMP$180$4, 0, 24ll );
				__builtin_memset( &TMP$179$4, 0, 24ll );
				FBSTRING* vr$62 = fb_StrConcat( &TMP$179$4, (void*)"movss dword ptr [esp], ", 24ll, (void*)&SRC$1, -1ll );
				fb_StrAssign( (void*)&TMP$180$4, -1ll, (void*)vr$62, -1ll, 0 );
				OUTP( (char*)*(char**)&TMP$180$4 );
				fb_StrDelete( (FBSTRING*)&TMP$180$4 );
				OUTP( (char*)"fld dword ptr [esp]" );
			}
			label$45:;
		}
		label$44:;
		label$42:;
		__builtin_memset( &TMP$182$2, 0, 24ll );
		__builtin_memset( &TMP$181$2, 0, 24ll );
		FBSTRING* vr$68 = fb_StrConcat( &TMP$181$2, (void*)"fistp ", 7ll, (void*)&DST$1, -1ll );
		fb_StrAssign( (void*)&TMP$182$2, -1ll, (void*)vr$68, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$182$2 );
		fb_StrDelete( (FBSTRING*)&TMP$182$2 );
		OUTP( (char*)"add esp, 8" );
		goto label$28;
	}
	label$41:;
	label$40:;
	if( ((int64)-(*(int64*)DVREG$1 == 4ll) & (int64)-(DDSIZE$1 == 4ll)) == 0ll ) goto label$48;
	{
		ISFREE$1 = -1ll;
		fb_StrAssign( (void*)&AUX$1, -1ll, (void*)&DST$1, -1ll, 0 );
		WASREG$1 = -1ll;
	}
	goto label$47;
	label$48:;
	{
		WASREG$1 = 0ll;
		int64 vr$75 = HFINDREGNOTINVREG( SVREG$1, 0ll );
		REG$1 = vr$75;
		char* vr$76 = HGETREGNAME( 8ll, REG$1 );
		fb_StrAssign( (void*)&AUX$1, -1ll, (void*)vr$76, 0ll, 0 );
		int64 vr$77 = HISREGFREE( 0ll, REG$1 );
		ISFREE$1 = vr$77;
		if( ISFREE$1 != 0ll ) goto label$50;
		{
			HPUSH( (char*)*(char**)&AUX$1 );
		}
		label$50:;
		label$49:;
	}
	label$47:;
	if( *(int64*)((uint8*)SVREG$1 + 32ll) != 0ll ) goto label$52;
	{
		FBSTRING TMP$187$2;
		FBSTRING TMP$188$2;
		FBSTRING TMP$189$2;
		FBSTRING TMP$190$2;
		OUTP( (char*)"sub esp, 4" );
		OUTP( (char*)"fistp dword ptr [esp]" );
		__builtin_memset( &TMP$190$2, 0, 24ll );
		__builtin_memset( &TMP$187$2, 0, 24ll );
		FBSTRING* vr$82 = fb_StrConcat( &TMP$187$2, (void*)"mov ", 5ll, (void*)&AUX$1, -1ll );
		__builtin_memset( &TMP$188$2, 0, 24ll );
		FBSTRING* vr$85 = fb_StrConcat( &TMP$188$2, (void*)vr$82, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$189$2, 0, 24ll );
		FBSTRING* vr$88 = fb_StrConcat( &TMP$189$2, (void*)vr$85, -1ll, (void*)"dword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$190$2, -1ll, (void*)vr$88, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$190$2 );
		fb_StrDelete( (FBSTRING*)&TMP$190$2 );
		OUTP( (char*)"add esp, 4" );
	}
	goto label$51;
	label$52:;
	{
		if( SDSIZE$1 <= 4ll ) goto label$54;
		{
			FBSTRING TMP$192$3;
			FBSTRING TMP$193$3;
			FBSTRING TMP$194$3;
			FBSTRING TMP$195$3;
			__builtin_memset( &TMP$195$3, 0, 24ll );
			__builtin_memset( &TMP$192$3, 0, 24ll );
			FBSTRING* vr$94 = fb_StrConcat( &TMP$192$3, (void*)"cvtsd2si ", 10ll, (void*)&AUX$1, -1ll );
			__builtin_memset( &TMP$193$3, 0, 24ll );
			FBSTRING* vr$97 = fb_StrConcat( &TMP$193$3, (void*)vr$94, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$194$3, 0, 24ll );
			FBSTRING* vr$100 = fb_StrConcat( &TMP$194$3, (void*)vr$97, -1ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$195$3, -1ll, (void*)vr$100, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$195$3 );
			fb_StrDelete( (FBSTRING*)&TMP$195$3 );
		}
		goto label$53;
		label$54:;
		{
			FBSTRING TMP$197$3;
			FBSTRING TMP$198$3;
			FBSTRING TMP$199$3;
			FBSTRING TMP$200$3;
			__builtin_memset( &TMP$200$3, 0, 24ll );
			__builtin_memset( &TMP$197$3, 0, 24ll );
			FBSTRING* vr$106 = fb_StrConcat( &TMP$197$3, (void*)"cvtss2si ", 10ll, (void*)&AUX$1, -1ll );
			__builtin_memset( &TMP$198$3, 0, 24ll );
			FBSTRING* vr$109 = fb_StrConcat( &TMP$198$3, (void*)vr$106, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$199$3, 0, 24ll );
			FBSTRING* vr$112 = fb_StrConcat( &TMP$199$3, (void*)vr$109, -1ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$200$3, -1ll, (void*)vr$112, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$200$3 );
			fb_StrDelete( (FBSTRING*)&TMP$200$3 );
		}
		label$53:;
	}
	label$51:;
	if( WASREG$1 != 0ll ) goto label$56;
	{
		if( DDSIZE$1 != 1ll ) goto label$58;
		{
			FBSTRING TMP$201$3;
			FBSTRING TMP$202$3;
			FBSTRING TMP$203$3;
			FBSTRING TMP$204$3;
			char* vr$115 = HGETREGNAME( 2ll, REG$1 );
			fb_StrAssign( (void*)&AUX8$1, -1ll, (void*)vr$115, 0ll, 0 );
			__builtin_memset( &TMP$204$3, 0, 24ll );
			__builtin_memset( &TMP$201$3, 0, 24ll );
			FBSTRING* vr$119 = fb_StrConcat( &TMP$201$3, (void*)"mov ", 5ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$202$3, 0, 24ll );
			FBSTRING* vr$122 = fb_StrConcat( &TMP$202$3, (void*)vr$119, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$203$3, 0, 24ll );
			FBSTRING* vr$125 = fb_StrConcat( &TMP$203$3, (void*)vr$122, -1ll, (void*)&AUX8$1, -1ll );
			fb_StrAssign( (void*)&TMP$204$3, -1ll, (void*)vr$125, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$204$3 );
			fb_StrDelete( (FBSTRING*)&TMP$204$3 );
		}
		goto label$57;
		label$58:;
		if( DDSIZE$1 != 2ll ) goto label$59;
		{
			FBSTRING TMP$205$3;
			FBSTRING TMP$206$3;
			FBSTRING TMP$207$3;
			FBSTRING TMP$208$3;
			char* vr$128 = HGETREGNAME( 5ll, REG$1 );
			fb_StrAssign( (void*)&AUX16$1, -1ll, (void*)vr$128, 0ll, 0 );
			__builtin_memset( &TMP$208$3, 0, 24ll );
			__builtin_memset( &TMP$205$3, 0, 24ll );
			FBSTRING* vr$132 = fb_StrConcat( &TMP$205$3, (void*)"mov ", 5ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$206$3, 0, 24ll );
			FBSTRING* vr$135 = fb_StrConcat( &TMP$206$3, (void*)vr$132, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$207$3, 0, 24ll );
			FBSTRING* vr$138 = fb_StrConcat( &TMP$207$3, (void*)vr$135, -1ll, (void*)&AUX16$1, -1ll );
			fb_StrAssign( (void*)&TMP$208$3, -1ll, (void*)vr$138, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$208$3 );
			fb_StrDelete( (FBSTRING*)&TMP$208$3 );
		}
		goto label$57;
		label$59:;
		{
			FBSTRING TMP$209$3;
			FBSTRING TMP$210$3;
			FBSTRING TMP$211$3;
			FBSTRING TMP$212$3;
			__builtin_memset( &TMP$212$3, 0, 24ll );
			__builtin_memset( &TMP$209$3, 0, 24ll );
			FBSTRING* vr$144 = fb_StrConcat( &TMP$209$3, (void*)"mov ", 5ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$210$3, 0, 24ll );
			FBSTRING* vr$147 = fb_StrConcat( &TMP$210$3, (void*)vr$144, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$211$3, 0, 24ll );
			FBSTRING* vr$150 = fb_StrConcat( &TMP$211$3, (void*)vr$147, -1ll, (void*)&AUX$1, -1ll );
			fb_StrAssign( (void*)&TMP$212$3, -1ll, (void*)vr$150, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$212$3 );
			fb_StrDelete( (FBSTRING*)&TMP$212$3 );
		}
		label$57:;
		if( ISFREE$1 != 0ll ) goto label$61;
		{
			HPOP( (char*)*(char**)&AUX$1 );
		}
		label$61:;
		label$60:;
	}
	label$56:;
	label$55:;
	label$28:;
}

static void _EMITSTORL2F_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$62:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING AUX$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( ((int64)-(*(int64*)SVREG$1 == 4ll) | (int64)-(*(int64*)SVREG$1 == 0ll)) == 0ll ) goto label$65;
	{
		int64 TMP$213$2;
		if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$66;
		TMP$213$2 = 24ll;
		goto label$747;
		label$66:;
		TMP$213$2 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
		label$747:;
		if( *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$213$2 * 56ll)) + 16ll) == 0ll ) goto label$68;
		{
			FBSTRING TMP$216$3;
			FBSTRING TMP$217$3;
			HPREPOPERAND64( SVREG$1, &SRC$1, &AUX$1 );
			HPUSH( (char*)*(char**)&AUX$1 );
			HPUSH( (char*)*(char**)&SRC$1 );
			__builtin_memset( &TMP$216$3, 0, 24ll );
			FBSTRING* vr$15 = fb_StrConcat( &TMP$216$3, (void*)"fild ", 6ll, (void*)(((int64)(struct $12EMITDATATYPE*)DTYPETB$ + (*(int64*)((uint8*)SVREG$1 + 8ll) * 24ll)) + 8ll), 12ll );
			__builtin_memset( &TMP$217$3, 0, 24ll );
			FBSTRING* vr$18 = fb_StrConcat( &TMP$217$3, (void*)vr$15, -1ll, (void*)" [esp]", 7ll );
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$18, -1ll, 0 );
			OUTP( (char*)*(char**)&OSTR$1 );
			OUTP( (char*)"add esp, 8" );
		}
		goto label$67;
		label$68:;
		{
			HPREPOPERAND64( SVREG$1, &SRC$1, &AUX$1 );
			HPUSH( (char*)*(char**)&AUX$1 );
			HPUSH( (char*)*(char**)&SRC$1 );
			OUTP( (char*)"fild qword ptr [esp]" );
			OUTP( (char*)"add esp, 8" );
			HULONG2DBL( SVREG$1 );
		}
		label$67:;
	}
	goto label$64;
	label$65:;
	{
		int64 TMP$219$2;
		if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$69;
		TMP$219$2 = 24ll;
		goto label$748;
		label$69:;
		TMP$219$2 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
		label$748:;
		if( *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$219$2 * 56ll)) + 16ll) == 0ll ) goto label$71;
		{
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fild ", 6ll, 0 );
			fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( (char*)*(char**)&OSTR$1 );
		}
		goto label$70;
		label$71:;
		{
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fild ", 6ll, 0 );
			fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( (char*)*(char**)&OSTR$1 );
			HULONG2DBL( SVREG$1 );
		}
		label$70:;
	}
	label$64:;
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fstp ", 6ll, 0 );
	fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
	OUTP( (char*)*(char**)&OSTR$1 );
	label$63:;
}

static void _EMITSTORI2F_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$221$1;
	int64 TMP$222$1;
	int64 TMP$223$1;
	label$72:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING AUX$1;
	static int64 DDSIZE$1;
	static int64 SDSIZE$1;
	static int64 REG$1;
	static int64 ISFREE$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$74;
	TMP$221$1 = 24ll;
	goto label$749;
	label$74:;
	TMP$221$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$749:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$221$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$75;
	TMP$222$1 = 24ll;
	goto label$750;
	label$75:;
	TMP$222$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$750:;
	SDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$222$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$76;
	TMP$223$1 = 24ll;
	goto label$751;
	label$76:;
	TMP$223$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$751:;
	if( ((int64)-(*(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$223$1 * 56ll)) + 16ll) == 0ll) & (int64)-(SDSIZE$1 == 4ll)) == 0ll ) goto label$78;
	{
		FBSTRING TMP$224$2;
		FBSTRING TMP$225$2;
		HPUSH( (char*)"0" );
		HPUSH( (char*)*(char**)&SRC$1 );
		OUTP( (char*)"fild qword ptr [esp]" );
		OUTP( (char*)"add esp, 8" );
		__builtin_memset( &TMP$225$2, 0, 24ll );
		__builtin_memset( &TMP$224$2, 0, 24ll );
		FBSTRING* vr$21 = fb_StrConcat( &TMP$224$2, (void*)"fstp ", 6ll, (void*)&DST$1, -1ll );
		fb_StrAssign( (void*)&TMP$225$2, -1ll, (void*)vr$21, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$225$2 );
		fb_StrDelete( (FBSTRING*)&TMP$225$2 );
		goto label$73;
	}
	label$78:;
	label$77:;
	if( ((int64)-(*(int64*)SVREG$1 != 0ll) & (int64)-(SDSIZE$1 == 4ll)) == 0ll ) goto label$80;
	{
		fb_StrAssign( (void*)&AUX$1, -1ll, (void*)&SRC$1, -1ll, 0 );
		ISFREE$1 = -1ll;
	}
	goto label$79;
	label$80:;
	{
		int64 vr$28 = HFINDREGNOTINVREG( SVREG$1, 0ll );
		REG$1 = vr$28;
		char* vr$29 = HGETREGNAME( 8ll, REG$1 );
		fb_StrAssign( (void*)&AUX$1, -1ll, (void*)vr$29, 0ll, 0 );
		int64 vr$30 = HISREGFREE( 0ll, REG$1 );
		ISFREE$1 = vr$30;
		if( ISFREE$1 != 0ll ) goto label$82;
		{
			HPUSH( (char*)*(char**)&AUX$1 );
		}
		label$82:;
		label$81:;
		if( *(int64*)SVREG$1 != 0ll ) goto label$84;
		{
			FBSTRING TMP$226$3;
			FBSTRING TMP$227$3;
			FBSTRING TMP$228$3;
			FBSTRING TMP$229$3;
			__builtin_memset( &TMP$229$3, 0, 24ll );
			__builtin_memset( &TMP$226$3, 0, 24ll );
			FBSTRING* vr$35 = fb_StrConcat( &TMP$226$3, (void*)"mov ", 5ll, (void*)&AUX$1, -1ll );
			__builtin_memset( &TMP$227$3, 0, 24ll );
			FBSTRING* vr$38 = fb_StrConcat( &TMP$227$3, (void*)vr$35, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$228$3, 0, 24ll );
			FBSTRING* vr$41 = fb_StrConcat( &TMP$228$3, (void*)vr$38, -1ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$229$3, -1ll, (void*)vr$41, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$229$3 );
			fb_StrDelete( (FBSTRING*)&TMP$229$3 );
		}
		goto label$83;
		label$84:;
		{
			int64 TMP$230$3;
			FBSTRING TMP$233$3;
			FBSTRING TMP$234$3;
			FBSTRING TMP$235$3;
			FBSTRING TMP$236$3;
			if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$85;
			TMP$230$3 = 24ll;
			goto label$752;
			label$85:;
			TMP$230$3 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
			label$752:;
			if( *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$230$3 * 56ll)) + 16ll) == 0ll ) goto label$87;
			{
				fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"movsx ", 7ll, 0 );
			}
			goto label$86;
			label$87:;
			{
				fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"movzx ", 7ll, 0 );
			}
			label$86:;
			__builtin_memset( &TMP$236$3, 0, 24ll );
			__builtin_memset( &TMP$233$3, 0, 24ll );
			FBSTRING* vr$52 = fb_StrConcat( &TMP$233$3, (void*)&OSTR$1, -1ll, (void*)&AUX$1, -1ll );
			__builtin_memset( &TMP$234$3, 0, 24ll );
			FBSTRING* vr$55 = fb_StrConcat( &TMP$234$3, (void*)vr$52, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$235$3, 0, 24ll );
			FBSTRING* vr$58 = fb_StrConcat( &TMP$235$3, (void*)vr$55, -1ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$236$3, -1ll, (void*)vr$58, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$236$3 );
			fb_StrDelete( (FBSTRING*)&TMP$236$3 );
		}
		label$83:;
	}
	label$79:;
	if( DDSIZE$1 <= 4ll ) goto label$89;
	{
		FBSTRING TMP$239$2;
		FBSTRING TMP$240$2;
		FBSTRING TMP$242$2;
		FBSTRING TMP$243$2;
		FBSTRING TMP$244$2;
		FBSTRING TMP$245$2;
		__builtin_memset( &TMP$240$2, 0, 24ll );
		__builtin_memset( &TMP$239$2, 0, 24ll );
		FBSTRING* vr$64 = fb_StrConcat( &TMP$239$2, (void*)"cvtsi2sd xmm7, ", 16ll, (void*)&AUX$1, -1ll );
		fb_StrAssign( (void*)&TMP$240$2, -1ll, (void*)vr$64, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$240$2 );
		fb_StrDelete( (FBSTRING*)&TMP$240$2 );
		__builtin_memset( &TMP$245$2, 0, 24ll );
		__builtin_memset( &TMP$242$2, 0, 24ll );
		FBSTRING* vr$70 = fb_StrConcat( &TMP$242$2, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$243$2, 0, 24ll );
		FBSTRING* vr$73 = fb_StrConcat( &TMP$243$2, (void*)vr$70, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$244$2, 0, 24ll );
		FBSTRING* vr$76 = fb_StrConcat( &TMP$244$2, (void*)vr$73, -1ll, (void*)"xmm7", 5ll );
		fb_StrAssign( (void*)&TMP$245$2, -1ll, (void*)vr$76, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$245$2 );
		fb_StrDelete( (FBSTRING*)&TMP$245$2 );
	}
	goto label$88;
	label$89:;
	{
		FBSTRING TMP$248$2;
		FBSTRING TMP$249$2;
		FBSTRING TMP$250$2;
		FBSTRING TMP$251$2;
		FBSTRING TMP$252$2;
		FBSTRING TMP$253$2;
		__builtin_memset( &TMP$249$2, 0, 24ll );
		__builtin_memset( &TMP$248$2, 0, 24ll );
		FBSTRING* vr$82 = fb_StrConcat( &TMP$248$2, (void*)"cvtsi2ss xmm7, ", 16ll, (void*)&AUX$1, -1ll );
		fb_StrAssign( (void*)&TMP$249$2, -1ll, (void*)vr$82, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$249$2 );
		fb_StrDelete( (FBSTRING*)&TMP$249$2 );
		__builtin_memset( &TMP$253$2, 0, 24ll );
		__builtin_memset( &TMP$250$2, 0, 24ll );
		FBSTRING* vr$88 = fb_StrConcat( &TMP$250$2, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$251$2, 0, 24ll );
		FBSTRING* vr$91 = fb_StrConcat( &TMP$251$2, (void*)vr$88, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$252$2, 0, 24ll );
		FBSTRING* vr$94 = fb_StrConcat( &TMP$252$2, (void*)vr$91, -1ll, (void*)"xmm7", 5ll );
		fb_StrAssign( (void*)&TMP$253$2, -1ll, (void*)vr$94, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$253$2 );
		fb_StrDelete( (FBSTRING*)&TMP$253$2 );
	}
	label$88:;
	if( ISFREE$1 != 0ll ) goto label$91;
	{
		HPOP( (char*)*(char**)&AUX$1 );
	}
	label$91:;
	label$90:;
	label$73:;
}

static void HEMITSTOREFREG2F_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$254$1;
	label$92:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static int64 DDSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, 0ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, 0ll );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$94;
	TMP$254$1 = 24ll;
	goto label$753;
	label$94:;
	TMP$254$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$753:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$254$1 * 56ll)) + 8ll);
	if( ((int64)-(*(int64*)((uint8*)SVREG$1 + 40ll) == 2ll) & (int64)-(DDSIZE$1 > 4ll)) == 0ll ) goto label$96;
	{
		FBSTRING TMP$256$2;
		FBSTRING TMP$257$2;
		FBSTRING TMP$258$2;
		FBSTRING TMP$259$2;
		__builtin_memset( &TMP$259$2, 0, 24ll );
		__builtin_memset( &TMP$256$2, 0, 24ll );
		FBSTRING* vr$12 = fb_StrConcat( &TMP$256$2, (void*)"movupd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$257$2, 0, 24ll );
		FBSTRING* vr$15 = fb_StrConcat( &TMP$257$2, (void*)vr$12, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$258$2, 0, 24ll );
		FBSTRING* vr$18 = fb_StrConcat( &TMP$258$2, (void*)vr$15, -1ll, (void*)&SRC$1, -1ll );
		fb_StrAssign( (void*)&TMP$259$2, -1ll, (void*)vr$18, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$259$2 );
		fb_StrDelete( (FBSTRING*)&TMP$259$2 );
		goto label$93;
	}
	label$96:;
	label$95:;
	if( *(int64*)((uint8*)SVREG$1 + 40ll) != 2ll ) goto label$98;
	{
		FBSTRING TMP$261$2;
		FBSTRING TMP$262$2;
		FBSTRING TMP$263$2;
		FBSTRING TMP$264$2;
		__builtin_memset( &TMP$264$2, 0, 24ll );
		__builtin_memset( &TMP$261$2, 0, 24ll );
		FBSTRING* vr$25 = fb_StrConcat( &TMP$261$2, (void*)"movlps ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$262$2, 0, 24ll );
		FBSTRING* vr$28 = fb_StrConcat( &TMP$262$2, (void*)vr$25, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$263$2, 0, 24ll );
		FBSTRING* vr$31 = fb_StrConcat( &TMP$263$2, (void*)vr$28, -1ll, (void*)&SRC$1, -1ll );
		fb_StrAssign( (void*)&TMP$264$2, -1ll, (void*)vr$31, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$264$2 );
		fb_StrDelete( (FBSTRING*)&TMP$264$2 );
	}
	goto label$97;
	label$98:;
	if( *(int64*)((uint8*)SVREG$1 + 40ll) != 3ll ) goto label$99;
	{
		FBSTRING TMP$267$2;
		FBSTRING TMP$268$2;
		FBSTRING TMP$269$2;
		FBSTRING TMP$270$2;
		FBSTRING TMP$271$2;
		FBSTRING TMP$272$2;
		FBSTRING TMP$273$2;
		FBSTRING TMP$274$2;
		FBSTRING TMP$275$2;
		FBSTRING TMP$276$2;
		__builtin_memset( &TMP$268$2, 0, 24ll );
		__builtin_memset( &TMP$267$2, 0, 24ll );
		FBSTRING* vr$38 = fb_StrConcat( &TMP$267$2, (void*)"movhlps xmm7, ", 15ll, (void*)&SRC$1, -1ll );
		fb_StrAssign( (void*)&TMP$268$2, -1ll, (void*)vr$38, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$268$2 );
		fb_StrDelete( (FBSTRING*)&TMP$268$2 );
		__builtin_memset( &TMP$272$2, 0, 24ll );
		__builtin_memset( &TMP$269$2, 0, 24ll );
		FBSTRING* vr$44 = fb_StrConcat( &TMP$269$2, (void*)"movlps ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$270$2, 0, 24ll );
		FBSTRING* vr$47 = fb_StrConcat( &TMP$270$2, (void*)vr$44, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$271$2, 0, 24ll );
		FBSTRING* vr$50 = fb_StrConcat( &TMP$271$2, (void*)vr$47, -1ll, (void*)&SRC$1, -1ll );
		fb_StrAssign( (void*)&TMP$272$2, -1ll, (void*)vr$50, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$272$2 );
		fb_StrDelete( (FBSTRING*)&TMP$272$2 );
		HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 8ll, 0ll, -1ll );
		__builtin_memset( &TMP$276$2, 0, 24ll );
		__builtin_memset( &TMP$273$2, 0, 24ll );
		FBSTRING* vr$56 = fb_StrConcat( &TMP$273$2, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$274$2, 0, 24ll );
		FBSTRING* vr$59 = fb_StrConcat( &TMP$274$2, (void*)vr$56, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$275$2, 0, 24ll );
		FBSTRING* vr$62 = fb_StrConcat( &TMP$275$2, (void*)vr$59, -1ll, (void*)"xmm7", 5ll );
		fb_StrAssign( (void*)&TMP$276$2, -1ll, (void*)vr$62, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$276$2 );
		fb_StrDelete( (FBSTRING*)&TMP$276$2 );
	}
	goto label$97;
	label$99:;
	if( *(int64*)((uint8*)SVREG$1 + 40ll) != 4ll ) goto label$100;
	{
		FBSTRING TMP$278$2;
		FBSTRING TMP$279$2;
		FBSTRING TMP$280$2;
		FBSTRING TMP$281$2;
		__builtin_memset( &TMP$281$2, 0, 24ll );
		__builtin_memset( &TMP$278$2, 0, 24ll );
		FBSTRING* vr$69 = fb_StrConcat( &TMP$278$2, (void*)"movups ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$279$2, 0, 24ll );
		FBSTRING* vr$72 = fb_StrConcat( &TMP$279$2, (void*)vr$69, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$280$2, 0, 24ll );
		FBSTRING* vr$75 = fb_StrConcat( &TMP$280$2, (void*)vr$72, -1ll, (void*)&SRC$1, -1ll );
		fb_StrAssign( (void*)&TMP$281$2, -1ll, (void*)vr$75, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$281$2 );
		fb_StrDelete( (FBSTRING*)&TMP$281$2 );
	}
	label$100:;
	label$97:;
	label$93:;
}

static void _EMITSTORF2F_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$282$1;
	int64 TMP$283$1;
	label$101:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static int64 DDSIZE$1;
	static int64 SDSIZE$1;
	static int64 SRC_VEC$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, 0ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, 0ll );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$103;
	TMP$282$1 = 24ll;
	goto label$754;
	label$103:;
	TMP$282$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$754:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$282$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$104;
	TMP$283$1 = 24ll;
	goto label$755;
	label$104:;
	TMP$283$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$755:;
	SDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$283$1 * 56ll)) + 8ll);
	SRC_VEC$1 = (int64)-(*(int64*)((uint8*)SVREG$1 + 40ll) > 0ll);
	if( *(int64*)SVREG$1 != 4ll ) goto label$106;
	{
		if( *(int64*)((uint8*)SVREG$1 + 32ll) != 0ll ) goto label$108;
		{
			FBSTRING TMP$284$3;
			FBSTRING TMP$285$3;
			HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
			__builtin_memset( &TMP$285$3, 0, 24ll );
			__builtin_memset( &TMP$284$3, 0, 24ll );
			FBSTRING* vr$17 = fb_StrConcat( &TMP$284$3, (void*)"fstp ", 6ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$285$3, -1ll, (void*)vr$17, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$285$3 );
			fb_StrDelete( (FBSTRING*)&TMP$285$3 );
			goto label$102;
		}
		label$108:;
		label$107:;
		if( SRC_VEC$1 == 0ll ) goto label$110;
		{
			HEMITSTOREFREG2F_SSE( DVREG$1, SVREG$1 );
			goto label$102;
		}
		label$110:;
		label$109:;
		if( DDSIZE$1 <= 4ll ) goto label$112;
		{
			FBSTRING TMP$291$3;
			FBSTRING TMP$292$3;
			FBSTRING TMP$293$3;
			FBSTRING TMP$294$3;
			if( SDSIZE$1 > 4ll ) goto label$114;
			{
				FBSTRING TMP$287$4;
				FBSTRING TMP$288$4;
				FBSTRING TMP$289$4;
				FBSTRING TMP$290$4;
				__builtin_memset( &TMP$290$4, 0, 24ll );
				__builtin_memset( &TMP$287$4, 0, 24ll );
				FBSTRING* vr$23 = fb_StrConcat( &TMP$287$4, (void*)"cvtss2sd ", 10ll, (void*)&SRC$1, -1ll );
				__builtin_memset( &TMP$288$4, 0, 24ll );
				FBSTRING* vr$26 = fb_StrConcat( &TMP$288$4, (void*)vr$23, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$289$4, 0, 24ll );
				FBSTRING* vr$29 = fb_StrConcat( &TMP$289$4, (void*)vr$26, -1ll, (void*)&SRC$1, -1ll );
				fb_StrAssign( (void*)&TMP$290$4, -1ll, (void*)vr$29, -1ll, 0 );
				OUTP( (char*)*(char**)&TMP$290$4 );
				fb_StrDelete( (FBSTRING*)&TMP$290$4 );
			}
			label$114:;
			label$113:;
			__builtin_memset( &TMP$294$3, 0, 24ll );
			__builtin_memset( &TMP$291$3, 0, 24ll );
			FBSTRING* vr$35 = fb_StrConcat( &TMP$291$3, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$292$3, 0, 24ll );
			FBSTRING* vr$38 = fb_StrConcat( &TMP$292$3, (void*)vr$35, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$293$3, 0, 24ll );
			FBSTRING* vr$41 = fb_StrConcat( &TMP$293$3, (void*)vr$38, -1ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$294$3, -1ll, (void*)vr$41, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$294$3 );
			fb_StrDelete( (FBSTRING*)&TMP$294$3 );
		}
		goto label$111;
		label$112:;
		{
			FBSTRING TMP$300$3;
			FBSTRING TMP$301$3;
			FBSTRING TMP$302$3;
			FBSTRING TMP$303$3;
			if( SDSIZE$1 <= 4ll ) goto label$116;
			{
				FBSTRING TMP$296$4;
				FBSTRING TMP$297$4;
				FBSTRING TMP$298$4;
				FBSTRING TMP$299$4;
				__builtin_memset( &TMP$299$4, 0, 24ll );
				__builtin_memset( &TMP$296$4, 0, 24ll );
				FBSTRING* vr$47 = fb_StrConcat( &TMP$296$4, (void*)"cvtsd2ss ", 10ll, (void*)&SRC$1, -1ll );
				__builtin_memset( &TMP$297$4, 0, 24ll );
				FBSTRING* vr$50 = fb_StrConcat( &TMP$297$4, (void*)vr$47, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$298$4, 0, 24ll );
				FBSTRING* vr$53 = fb_StrConcat( &TMP$298$4, (void*)vr$50, -1ll, (void*)&SRC$1, -1ll );
				fb_StrAssign( (void*)&TMP$299$4, -1ll, (void*)vr$53, -1ll, 0 );
				OUTP( (char*)*(char**)&TMP$299$4 );
				fb_StrDelete( (FBSTRING*)&TMP$299$4 );
			}
			label$116:;
			label$115:;
			__builtin_memset( &TMP$303$3, 0, 24ll );
			__builtin_memset( &TMP$300$3, 0, 24ll );
			FBSTRING* vr$59 = fb_StrConcat( &TMP$300$3, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$301$3, 0, 24ll );
			FBSTRING* vr$62 = fb_StrConcat( &TMP$301$3, (void*)vr$59, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$302$3, 0, 24ll );
			FBSTRING* vr$65 = fb_StrConcat( &TMP$302$3, (void*)vr$62, -1ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$303$3, -1ll, (void*)vr$65, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$303$3 );
			fb_StrDelete( (FBSTRING*)&TMP$303$3 );
		}
		label$111:;
	}
	goto label$105;
	label$106:;
	{
		if( SDSIZE$1 != DDSIZE$1 ) goto label$118;
		{
			if( SRC_VEC$1 == 0ll ) goto label$120;
			{
				HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, 0ll );
				HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, 0ll );
				if( DDSIZE$1 <= 4ll ) goto label$122;
				{
					FBSTRING TMP$306$5;
					FBSTRING TMP$307$5;
					FBSTRING TMP$308$5;
					FBSTRING TMP$309$5;
					FBSTRING TMP$310$5;
					FBSTRING TMP$311$5;
					__builtin_memset( &TMP$307$5, 0, 24ll );
					__builtin_memset( &TMP$306$5, 0, 24ll );
					FBSTRING* vr$71 = fb_StrConcat( &TMP$306$5, (void*)"movupd xmm7, ", 14ll, (void*)&SRC$1, -1ll );
					fb_StrAssign( (void*)&TMP$307$5, -1ll, (void*)vr$71, -1ll, 0 );
					OUTP( (char*)*(char**)&TMP$307$5 );
					fb_StrDelete( (FBSTRING*)&TMP$307$5 );
					__builtin_memset( &TMP$311$5, 0, 24ll );
					__builtin_memset( &TMP$308$5, 0, 24ll );
					FBSTRING* vr$77 = fb_StrConcat( &TMP$308$5, (void*)"movupd ", 8ll, (void*)&DST$1, -1ll );
					__builtin_memset( &TMP$309$5, 0, 24ll );
					FBSTRING* vr$80 = fb_StrConcat( &TMP$309$5, (void*)vr$77, -1ll, (void*)", ", 3ll );
					__builtin_memset( &TMP$310$5, 0, 24ll );
					FBSTRING* vr$83 = fb_StrConcat( &TMP$310$5, (void*)vr$80, -1ll, (void*)"xmm7", 5ll );
					fb_StrAssign( (void*)&TMP$311$5, -1ll, (void*)vr$83, -1ll, 0 );
					OUTP( (char*)*(char**)&TMP$311$5 );
					fb_StrDelete( (FBSTRING*)&TMP$311$5 );
				}
				goto label$121;
				label$122:;
				{
					if( *(int64*)((uint8*)SVREG$1 + 40ll) != 2ll ) goto label$124;
					{
						FBSTRING TMP$314$6;
						FBSTRING TMP$315$6;
						FBSTRING TMP$316$6;
						FBSTRING TMP$317$6;
						FBSTRING TMP$318$6;
						FBSTRING TMP$319$6;
						__builtin_memset( &TMP$315$6, 0, 24ll );
						__builtin_memset( &TMP$314$6, 0, 24ll );
						FBSTRING* vr$90 = fb_StrConcat( &TMP$314$6, (void*)"movlps xmm7, ", 14ll, (void*)&SRC$1, -1ll );
						fb_StrAssign( (void*)&TMP$315$6, -1ll, (void*)vr$90, -1ll, 0 );
						OUTP( (char*)*(char**)&TMP$315$6 );
						fb_StrDelete( (FBSTRING*)&TMP$315$6 );
						__builtin_memset( &TMP$319$6, 0, 24ll );
						__builtin_memset( &TMP$316$6, 0, 24ll );
						FBSTRING* vr$96 = fb_StrConcat( &TMP$316$6, (void*)"movlps ", 8ll, (void*)&DST$1, -1ll );
						__builtin_memset( &TMP$317$6, 0, 24ll );
						FBSTRING* vr$99 = fb_StrConcat( &TMP$317$6, (void*)vr$96, -1ll, (void*)", ", 3ll );
						__builtin_memset( &TMP$318$6, 0, 24ll );
						FBSTRING* vr$102 = fb_StrConcat( &TMP$318$6, (void*)vr$99, -1ll, (void*)"xmm7", 5ll );
						fb_StrAssign( (void*)&TMP$319$6, -1ll, (void*)vr$102, -1ll, 0 );
						OUTP( (char*)*(char**)&TMP$319$6 );
						fb_StrDelete( (FBSTRING*)&TMP$319$6 );
					}
					goto label$123;
					label$124:;
					if( *(int64*)((uint8*)SVREG$1 + 40ll) != 3ll ) goto label$125;
					{
						FBSTRING TMP$322$6;
						FBSTRING TMP$323$6;
						FBSTRING TMP$324$6;
						FBSTRING TMP$325$6;
						FBSTRING TMP$326$6;
						FBSTRING TMP$327$6;
						FBSTRING TMP$329$6;
						FBSTRING TMP$330$6;
						FBSTRING TMP$331$6;
						FBSTRING TMP$332$6;
						__builtin_memset( &TMP$323$6, 0, 24ll );
						__builtin_memset( &TMP$322$6, 0, 24ll );
						FBSTRING* vr$109 = fb_StrConcat( &TMP$322$6, (void*)"movups xmm7, ", 14ll, (void*)&SRC$1, -1ll );
						fb_StrAssign( (void*)&TMP$323$6, -1ll, (void*)vr$109, -1ll, 0 );
						OUTP( (char*)*(char**)&TMP$323$6 );
						fb_StrDelete( (FBSTRING*)&TMP$323$6 );
						__builtin_memset( &TMP$327$6, 0, 24ll );
						__builtin_memset( &TMP$324$6, 0, 24ll );
						FBSTRING* vr$115 = fb_StrConcat( &TMP$324$6, (void*)"movlps ", 8ll, (void*)&DST$1, -1ll );
						__builtin_memset( &TMP$325$6, 0, 24ll );
						FBSTRING* vr$118 = fb_StrConcat( &TMP$325$6, (void*)vr$115, -1ll, (void*)", ", 3ll );
						__builtin_memset( &TMP$326$6, 0, 24ll );
						FBSTRING* vr$121 = fb_StrConcat( &TMP$326$6, (void*)vr$118, -1ll, (void*)"xmm7", 5ll );
						fb_StrAssign( (void*)&TMP$327$6, -1ll, (void*)vr$121, -1ll, 0 );
						OUTP( (char*)*(char**)&TMP$327$6 );
						fb_StrDelete( (FBSTRING*)&TMP$327$6 );
						OUTP( (char*)"unpckhps xmm7, xmm7" );
						HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 8ll, 0ll, -1ll );
						__builtin_memset( &TMP$332$6, 0, 24ll );
						__builtin_memset( &TMP$329$6, 0, 24ll );
						FBSTRING* vr$127 = fb_StrConcat( &TMP$329$6, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
						__builtin_memset( &TMP$330$6, 0, 24ll );
						FBSTRING* vr$130 = fb_StrConcat( &TMP$330$6, (void*)vr$127, -1ll, (void*)", ", 3ll );
						__builtin_memset( &TMP$331$6, 0, 24ll );
						FBSTRING* vr$133 = fb_StrConcat( &TMP$331$6, (void*)vr$130, -1ll, (void*)"xmm7", 5ll );
						fb_StrAssign( (void*)&TMP$332$6, -1ll, (void*)vr$133, -1ll, 0 );
						OUTP( (char*)*(char**)&TMP$332$6 );
						fb_StrDelete( (FBSTRING*)&TMP$332$6 );
					}
					goto label$123;
					label$125:;
					if( *(int64*)((uint8*)SVREG$1 + 40ll) != 4ll ) goto label$126;
					{
						FBSTRING TMP$333$6;
						FBSTRING TMP$334$6;
						FBSTRING TMP$335$6;
						FBSTRING TMP$336$6;
						FBSTRING TMP$337$6;
						FBSTRING TMP$338$6;
						__builtin_memset( &TMP$334$6, 0, 24ll );
						__builtin_memset( &TMP$333$6, 0, 24ll );
						FBSTRING* vr$140 = fb_StrConcat( &TMP$333$6, (void*)"movups xmm7, ", 14ll, (void*)&SRC$1, -1ll );
						fb_StrAssign( (void*)&TMP$334$6, -1ll, (void*)vr$140, -1ll, 0 );
						OUTP( (char*)*(char**)&TMP$334$6 );
						fb_StrDelete( (FBSTRING*)&TMP$334$6 );
						__builtin_memset( &TMP$338$6, 0, 24ll );
						__builtin_memset( &TMP$335$6, 0, 24ll );
						FBSTRING* vr$146 = fb_StrConcat( &TMP$335$6, (void*)"movups ", 8ll, (void*)&DST$1, -1ll );
						__builtin_memset( &TMP$336$6, 0, 24ll );
						FBSTRING* vr$149 = fb_StrConcat( &TMP$336$6, (void*)vr$146, -1ll, (void*)", ", 3ll );
						__builtin_memset( &TMP$337$6, 0, 24ll );
						FBSTRING* vr$152 = fb_StrConcat( &TMP$337$6, (void*)vr$149, -1ll, (void*)"xmm7", 5ll );
						fb_StrAssign( (void*)&TMP$338$6, -1ll, (void*)vr$152, -1ll, 0 );
						OUTP( (char*)*(char**)&TMP$338$6 );
						fb_StrDelete( (FBSTRING*)&TMP$338$6 );
					}
					label$126:;
					label$123:;
				}
				label$121:;
				goto label$102;
			}
			label$120:;
			label$119:;
			if( DDSIZE$1 <= 4ll ) goto label$128;
			{
				FBSTRING TMP$341$4;
				FBSTRING TMP$342$4;
				FBSTRING TMP$343$4;
				FBSTRING TMP$344$4;
				FBSTRING TMP$345$4;
				FBSTRING TMP$346$4;
				__builtin_memset( &TMP$342$4, 0, 24ll );
				__builtin_memset( &TMP$341$4, 0, 24ll );
				FBSTRING* vr$158 = fb_StrConcat( &TMP$341$4, (void*)"movlpd xmm7, ", 14ll, (void*)&SRC$1, -1ll );
				fb_StrAssign( (void*)&TMP$342$4, -1ll, (void*)vr$158, -1ll, 0 );
				OUTP( (char*)*(char**)&TMP$342$4 );
				fb_StrDelete( (FBSTRING*)&TMP$342$4 );
				__builtin_memset( &TMP$346$4, 0, 24ll );
				__builtin_memset( &TMP$343$4, 0, 24ll );
				FBSTRING* vr$164 = fb_StrConcat( &TMP$343$4, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
				__builtin_memset( &TMP$344$4, 0, 24ll );
				FBSTRING* vr$167 = fb_StrConcat( &TMP$344$4, (void*)vr$164, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$345$4, 0, 24ll );
				FBSTRING* vr$170 = fb_StrConcat( &TMP$345$4, (void*)vr$167, -1ll, (void*)"xmm7", 5ll );
				fb_StrAssign( (void*)&TMP$346$4, -1ll, (void*)vr$170, -1ll, 0 );
				OUTP( (char*)*(char**)&TMP$346$4 );
				fb_StrDelete( (FBSTRING*)&TMP$346$4 );
			}
			goto label$127;
			label$128:;
			{
				FBSTRING TMP$349$4;
				FBSTRING TMP$350$4;
				FBSTRING TMP$351$4;
				FBSTRING TMP$352$4;
				FBSTRING TMP$353$4;
				FBSTRING TMP$354$4;
				__builtin_memset( &TMP$350$4, 0, 24ll );
				__builtin_memset( &TMP$349$4, 0, 24ll );
				FBSTRING* vr$176 = fb_StrConcat( &TMP$349$4, (void*)"movss xmm7, ", 13ll, (void*)&SRC$1, -1ll );
				fb_StrAssign( (void*)&TMP$350$4, -1ll, (void*)vr$176, -1ll, 0 );
				OUTP( (char*)*(char**)&TMP$350$4 );
				fb_StrDelete( (FBSTRING*)&TMP$350$4 );
				__builtin_memset( &TMP$354$4, 0, 24ll );
				__builtin_memset( &TMP$351$4, 0, 24ll );
				FBSTRING* vr$182 = fb_StrConcat( &TMP$351$4, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
				__builtin_memset( &TMP$352$4, 0, 24ll );
				FBSTRING* vr$185 = fb_StrConcat( &TMP$352$4, (void*)vr$182, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$353$4, 0, 24ll );
				FBSTRING* vr$188 = fb_StrConcat( &TMP$353$4, (void*)vr$185, -1ll, (void*)"xmm7", 5ll );
				fb_StrAssign( (void*)&TMP$354$4, -1ll, (void*)vr$188, -1ll, 0 );
				OUTP( (char*)*(char**)&TMP$354$4 );
				fb_StrDelete( (FBSTRING*)&TMP$354$4 );
			}
			label$127:;
		}
		goto label$117;
		label$118:;
		{
			if( SDSIZE$1 <= 4ll ) goto label$130;
			{
				if( SRC_VEC$1 == 0ll ) goto label$132;
				{
					FBSTRING TMP$357$5;
					FBSTRING TMP$358$5;
					FBSTRING TMP$359$5;
					FBSTRING TMP$360$5;
					FBSTRING TMP$361$5;
					FBSTRING TMP$362$5;
					__builtin_memset( &TMP$358$5, 0, 24ll );
					__builtin_memset( &TMP$357$5, 0, 24ll );
					FBSTRING* vr$194 = fb_StrConcat( &TMP$357$5, (void*)"cvtpd2ps xmm7, ", 16ll, (void*)&SRC$1, -1ll );
					fb_StrAssign( (void*)&TMP$358$5, -1ll, (void*)vr$194, -1ll, 0 );
					OUTP( (char*)*(char**)&TMP$358$5 );
					fb_StrDelete( (FBSTRING*)&TMP$358$5 );
					__builtin_memset( &TMP$362$5, 0, 24ll );
					__builtin_memset( &TMP$359$5, 0, 24ll );
					FBSTRING* vr$200 = fb_StrConcat( &TMP$359$5, (void*)"movlps ", 8ll, (void*)&DST$1, -1ll );
					__builtin_memset( &TMP$360$5, 0, 24ll );
					FBSTRING* vr$203 = fb_StrConcat( &TMP$360$5, (void*)vr$200, -1ll, (void*)", ", 3ll );
					__builtin_memset( &TMP$361$5, 0, 24ll );
					FBSTRING* vr$206 = fb_StrConcat( &TMP$361$5, (void*)vr$203, -1ll, (void*)"xmm7", 5ll );
					fb_StrAssign( (void*)&TMP$362$5, -1ll, (void*)vr$206, -1ll, 0 );
					OUTP( (char*)*(char**)&TMP$362$5 );
					fb_StrDelete( (FBSTRING*)&TMP$362$5 );
				}
				goto label$131;
				label$132:;
				{
					FBSTRING TMP$365$5;
					FBSTRING TMP$366$5;
					FBSTRING TMP$367$5;
					FBSTRING TMP$368$5;
					FBSTRING TMP$369$5;
					FBSTRING TMP$370$5;
					__builtin_memset( &TMP$366$5, 0, 24ll );
					__builtin_memset( &TMP$365$5, 0, 24ll );
					FBSTRING* vr$212 = fb_StrConcat( &TMP$365$5, (void*)"cvtsd2ss xmm7, ", 16ll, (void*)&SRC$1, -1ll );
					fb_StrAssign( (void*)&TMP$366$5, -1ll, (void*)vr$212, -1ll, 0 );
					OUTP( (char*)*(char**)&TMP$366$5 );
					fb_StrDelete( (FBSTRING*)&TMP$366$5 );
					__builtin_memset( &TMP$370$5, 0, 24ll );
					__builtin_memset( &TMP$367$5, 0, 24ll );
					FBSTRING* vr$218 = fb_StrConcat( &TMP$367$5, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
					__builtin_memset( &TMP$368$5, 0, 24ll );
					FBSTRING* vr$221 = fb_StrConcat( &TMP$368$5, (void*)vr$218, -1ll, (void*)", ", 3ll );
					__builtin_memset( &TMP$369$5, 0, 24ll );
					FBSTRING* vr$224 = fb_StrConcat( &TMP$369$5, (void*)vr$221, -1ll, (void*)"xmm7", 5ll );
					fb_StrAssign( (void*)&TMP$370$5, -1ll, (void*)vr$224, -1ll, 0 );
					OUTP( (char*)*(char**)&TMP$370$5 );
					fb_StrDelete( (FBSTRING*)&TMP$370$5 );
				}
				label$131:;
			}
			goto label$129;
			label$130:;
			{
				if( SRC_VEC$1 == 0ll ) goto label$134;
				{
					FBSTRING TMP$373$5;
					FBSTRING TMP$374$5;
					FBSTRING TMP$375$5;
					FBSTRING TMP$376$5;
					FBSTRING TMP$377$5;
					FBSTRING TMP$378$5;
					__builtin_memset( &TMP$374$5, 0, 24ll );
					__builtin_memset( &TMP$373$5, 0, 24ll );
					FBSTRING* vr$230 = fb_StrConcat( &TMP$373$5, (void*)"cvtps2pd xmm7, ", 16ll, (void*)&SRC$1, -1ll );
					fb_StrAssign( (void*)&TMP$374$5, -1ll, (void*)vr$230, -1ll, 0 );
					OUTP( (char*)*(char**)&TMP$374$5 );
					fb_StrDelete( (FBSTRING*)&TMP$374$5 );
					__builtin_memset( &TMP$378$5, 0, 24ll );
					__builtin_memset( &TMP$375$5, 0, 24ll );
					FBSTRING* vr$236 = fb_StrConcat( &TMP$375$5, (void*)"movupd ", 8ll, (void*)&DST$1, -1ll );
					__builtin_memset( &TMP$376$5, 0, 24ll );
					FBSTRING* vr$239 = fb_StrConcat( &TMP$376$5, (void*)vr$236, -1ll, (void*)", ", 3ll );
					__builtin_memset( &TMP$377$5, 0, 24ll );
					FBSTRING* vr$242 = fb_StrConcat( &TMP$377$5, (void*)vr$239, -1ll, (void*)"xmm7", 5ll );
					fb_StrAssign( (void*)&TMP$378$5, -1ll, (void*)vr$242, -1ll, 0 );
					OUTP( (char*)*(char**)&TMP$378$5 );
					fb_StrDelete( (FBSTRING*)&TMP$378$5 );
				}
				goto label$133;
				label$134:;
				{
					FBSTRING TMP$381$5;
					FBSTRING TMP$382$5;
					FBSTRING TMP$383$5;
					FBSTRING TMP$384$5;
					FBSTRING TMP$385$5;
					FBSTRING TMP$386$5;
					__builtin_memset( &TMP$382$5, 0, 24ll );
					__builtin_memset( &TMP$381$5, 0, 24ll );
					FBSTRING* vr$248 = fb_StrConcat( &TMP$381$5, (void*)"cvtss2sd xmm7, ", 16ll, (void*)&SRC$1, -1ll );
					fb_StrAssign( (void*)&TMP$382$5, -1ll, (void*)vr$248, -1ll, 0 );
					OUTP( (char*)*(char**)&TMP$382$5 );
					fb_StrDelete( (FBSTRING*)&TMP$382$5 );
					__builtin_memset( &TMP$386$5, 0, 24ll );
					__builtin_memset( &TMP$383$5, 0, 24ll );
					FBSTRING* vr$254 = fb_StrConcat( &TMP$383$5, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
					__builtin_memset( &TMP$384$5, 0, 24ll );
					FBSTRING* vr$257 = fb_StrConcat( &TMP$384$5, (void*)vr$254, -1ll, (void*)", ", 3ll );
					__builtin_memset( &TMP$385$5, 0, 24ll );
					FBSTRING* vr$260 = fb_StrConcat( &TMP$385$5, (void*)vr$257, -1ll, (void*)"xmm7", 5ll );
					fb_StrAssign( (void*)&TMP$386$5, -1ll, (void*)vr$260, -1ll, 0 );
					OUTP( (char*)*(char**)&TMP$386$5 );
					fb_StrDelete( (FBSTRING*)&TMP$386$5 );
				}
				label$133:;
			}
			label$129:;
		}
		label$117:;
	}
	label$105:;
	label$102:;
}

static void _EMITLOADF2L_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$387$1;
	int64 TMP$394$1;
	int64 TMP$395$1;
	label$135:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING AUX$1;
	static FBSTRING OSTR$1;
	static int64 DDSIZE$1;
	static int64 SDSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$137;
	TMP$387$1 = 24ll;
	goto label$756;
	label$137:;
	TMP$387$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$756:;
	SDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$387$1 * 56ll)) + 8ll);
	if( *(int64*)((uint8*)SVREG$1 + 32ll) != 1ll ) goto label$139;
	{
		if( *(int64*)SVREG$1 != 4ll ) goto label$141;
		{
			OUTP( (char*)"sub esp, 8" );
			if( SDSIZE$1 <= 4ll ) goto label$143;
			{
				FBSTRING TMP$388$4;
				FBSTRING TMP$389$4;
				__builtin_memset( &TMP$389$4, 0, 24ll );
				__builtin_memset( &TMP$388$4, 0, 24ll );
				FBSTRING* vr$10 = fb_StrConcat( &TMP$388$4, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&SRC$1, -1ll );
				fb_StrAssign( (void*)&TMP$389$4, -1ll, (void*)vr$10, -1ll, 0 );
				OUTP( (char*)*(char**)&TMP$389$4 );
				fb_StrDelete( (FBSTRING*)&TMP$389$4 );
				OUTP( (char*)"fld qword ptr [esp]" );
			}
			goto label$142;
			label$143:;
			{
				FBSTRING TMP$390$4;
				FBSTRING TMP$391$4;
				__builtin_memset( &TMP$391$4, 0, 24ll );
				__builtin_memset( &TMP$390$4, 0, 24ll );
				FBSTRING* vr$16 = fb_StrConcat( &TMP$390$4, (void*)"movss dword ptr [esp], ", 24ll, (void*)&SRC$1, -1ll );
				fb_StrAssign( (void*)&TMP$391$4, -1ll, (void*)vr$16, -1ll, 0 );
				OUTP( (char*)*(char**)&TMP$391$4 );
				fb_StrDelete( (FBSTRING*)&TMP$391$4 );
				OUTP( (char*)"fld dword ptr [esp]" );
			}
			label$142:;
			OUTP( (char*)"add esp, 8" );
		}
		goto label$140;
		label$141:;
		{
			FBSTRING TMP$392$3;
			FBSTRING TMP$393$3;
			__builtin_memset( &TMP$393$3, 0, 24ll );
			__builtin_memset( &TMP$392$3, 0, 24ll );
			FBSTRING* vr$22 = fb_StrConcat( &TMP$392$3, (void*)"fld ", 5ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$393$3, -1ll, (void*)vr$22, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$393$3 );
			fb_StrDelete( (FBSTRING*)&TMP$393$3 );
		}
		label$140:;
	}
	label$139:;
	label$138:;
	HPREPOPERAND64( DVREG$1, &DST$1, &AUX$1 );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$144;
	TMP$394$1 = 24ll;
	goto label$757;
	label$144:;
	TMP$394$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$757:;
	if( *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$394$1 * 56ll)) + 16ll) != 0ll ) goto label$145;
	TMP$395$1 = (int64)-(*(int64*)((uint8*)DVREG$1 + 8ll) == 14ll);
	goto label$758;
	label$145:;
	TMP$395$1 = -1ll;
	label$758:;
	if( TMP$395$1 == 0ll ) goto label$147;
	{
		FBSTRING TMP$396$2;
		FBSTRING TMP$397$2;
		OUTP( (char*)"sub esp, 8" );
		__builtin_memset( &TMP$396$2, 0, 24ll );
		FBSTRING* vr$37 = fb_StrConcat( &TMP$396$2, (void*)"fistp ", 7ll, (void*)(((int64)(struct $12EMITDATATYPE*)DTYPETB$ + (*(int64*)((uint8*)DVREG$1 + 8ll) * 24ll)) + 8ll), 12ll );
		__builtin_memset( &TMP$397$2, 0, 24ll );
		FBSTRING* vr$40 = fb_StrConcat( &TMP$397$2, (void*)vr$37, -1ll, (void*)" [esp]", 7ll );
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$40, -1ll, 0 );
		OUTP( (char*)*(char**)&OSTR$1 );
	}
	goto label$146;
	label$147:;
	{
		OUTP( (char*)"fld st(0)" );
		OUTP( (char*)"push 0x4f800000" );
		OUTP( (char*)"fdiv dword ptr [esp]" );
		OUTP( (char*)"fistp dword ptr [esp]" );
		OUTP( (char*)"fild dword ptr [esp]" );
		OUTP( (char*)"push 0x4f800000" );
		OUTP( (char*)"fmul dword ptr [esp]" );
		OUTP( (char*)"fsubp" );
		OUTP( (char*)"fistp dword ptr [esp]" );
	}
	label$146:;
	HPOP( (char*)*(char**)&DST$1 );
	HPOP( (char*)*(char**)&AUX$1 );
	label$136:;
}

static void _EMITLOADF2I_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$404$1;
	int64 TMP$405$1;
	int64 TMP$406$1;
	label$148:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING SUFFIX$1;
	static FBSTRING AUX$1;
	static FBSTRING AUX8_16$1;
	static int64 SDSIZE$1;
	static int64 DDSIZE$1;
	static int64 ISFREE$1;
	static int64 REG$1;
	static int64 WASREG$1;
	static struct $8FBSYMBOL* SYM$1;
	static struct $6IRVREG* TEMPVREG$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$150;
	TMP$404$1 = 24ll;
	goto label$759;
	label$150:;
	TMP$404$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$759:;
	SDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$404$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$151;
	TMP$405$1 = 24ll;
	goto label$760;
	label$151:;
	TMP$405$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$760:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$405$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$152;
	TMP$406$1 = 24ll;
	goto label$761;
	label$152:;
	TMP$406$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$761:;
	if( ((int64)-(*(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$406$1 * 56ll)) + 16ll) == 0ll) & (int64)-(DDSIZE$1 == 4ll)) == 0ll ) goto label$154;
	{
		OUTP( (char*)"sub esp, 8" );
		if( *(int64*)SVREG$1 == 4ll ) goto label$156;
		{
			FBSTRING TMP$407$3;
			FBSTRING TMP$408$3;
			__builtin_memset( &TMP$408$3, 0, 24ll );
			__builtin_memset( &TMP$407$3, 0, 24ll );
			FBSTRING* vr$22 = fb_StrConcat( &TMP$407$3, (void*)"fld ", 5ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$408$3, -1ll, (void*)vr$22, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$408$3 );
			fb_StrDelete( (FBSTRING*)&TMP$408$3 );
		}
		goto label$155;
		label$156:;
		if( *(int64*)((uint8*)SVREG$1 + 32ll) != 1ll ) goto label$157;
		{
			if( SDSIZE$1 <= 4ll ) goto label$159;
			{
				FBSTRING TMP$409$4;
				FBSTRING TMP$410$4;
				__builtin_memset( &TMP$410$4, 0, 24ll );
				__builtin_memset( &TMP$409$4, 0, 24ll );
				FBSTRING* vr$29 = fb_StrConcat( &TMP$409$4, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&SRC$1, -1ll );
				fb_StrAssign( (void*)&TMP$410$4, -1ll, (void*)vr$29, -1ll, 0 );
				OUTP( (char*)*(char**)&TMP$410$4 );
				fb_StrDelete( (FBSTRING*)&TMP$410$4 );
				OUTP( (char*)"fld qword ptr [esp]" );
			}
			goto label$158;
			label$159:;
			{
				FBSTRING TMP$411$4;
				FBSTRING TMP$412$4;
				__builtin_memset( &TMP$412$4, 0, 24ll );
				__builtin_memset( &TMP$411$4, 0, 24ll );
				FBSTRING* vr$35 = fb_StrConcat( &TMP$411$4, (void*)"movss dword ptr [esp], ", 24ll, (void*)&SRC$1, -1ll );
				fb_StrAssign( (void*)&TMP$412$4, -1ll, (void*)vr$35, -1ll, 0 );
				OUTP( (char*)*(char**)&TMP$412$4 );
				fb_StrDelete( (FBSTRING*)&TMP$412$4 );
				OUTP( (char*)"fld dword ptr [esp]" );
			}
			label$158:;
		}
		label$157:;
		label$155:;
		OUTP( (char*)"fistp qword ptr [esp]" );
		HPOP( (char*)*(char**)&DST$1 );
		OUTP( (char*)"add esp, 4" );
		goto label$149;
	}
	label$154:;
	label$153:;
	if( *(int64*)DVREG$1 != 4ll ) goto label$161;
	{
		ISFREE$1 = -1ll;
		if( DDSIZE$1 >= 4ll ) goto label$163;
		{
			char* vr$40 = HGETREGNAME( 8ll, *(int64*)((uint8*)DVREG$1 + 24ll) );
			fb_StrAssign( (void*)&DST$1, -1ll, (void*)vr$40, 0ll, 0 );
		}
		label$163:;
		label$162:;
		fb_StrAssign( (void*)&AUX$1, -1ll, (void*)&DST$1, -1ll, 0 );
		WASREG$1 = -1ll;
	}
	goto label$160;
	label$161:;
	{
		WASREG$1 = 0ll;
		int64 vr$41 = HFINDREGNOTINVREG( SVREG$1, 0ll );
		REG$1 = vr$41;
		char* vr$42 = HGETREGNAME( 8ll, REG$1 );
		fb_StrAssign( (void*)&AUX$1, -1ll, (void*)vr$42, 0ll, 0 );
		char* vr$44 = HGETREGNAME( *(int64*)((uint8*)DVREG$1 + 8ll), REG$1 );
		fb_StrAssign( (void*)&AUX8_16$1, -1ll, (void*)vr$44, 0ll, 0 );
		int64 vr$45 = HISREGFREE( 0ll, REG$1 );
		ISFREE$1 = vr$45;
		if( ISFREE$1 != 0ll ) goto label$165;
		{
			HPUSH( (char*)*(char**)&AUX$1 );
		}
		label$165:;
		label$164:;
	}
	label$160:;
	if( *(int64*)((uint8*)SVREG$1 + 32ll) != 0ll ) goto label$167;
	{
		OUTP( (char*)"sub esp, 4" );
		if( DDSIZE$1 != 2ll ) goto label$169;
		{
			OUTP( (char*)"fistp word ptr [esp]" );
		}
		goto label$168;
		label$169:;
		{
			OUTP( (char*)"fistp dword ptr [esp]" );
		}
		label$168:;
		HPOP( (char*)*(char**)&AUX$1 );
	}
	goto label$166;
	label$167:;
	{
		int64 TMP$414$2;
		int64 TMP$415$2;
		if( SDSIZE$1 <= 4ll ) goto label$170;
		TMP$414$2 = 100ll;
		goto label$762;
		label$170:;
		TMP$414$2 = 115ll;
		label$762:;
		FBSTRING* vr$47 = fb_CHR( 1, TMP$414$2 );
		fb_StrAssign( (void*)&SUFFIX$1, -1ll, (void*)vr$47, -1ll, 0 );
		if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$171;
		TMP$415$2 = 24ll;
		goto label$763;
		label$171:;
		TMP$415$2 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
		label$763:;
		if( (*(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$415$2 * 56ll)) + 16ll) & (int64)-(DDSIZE$1 == 2ll)) == 0ll ) goto label$173;
		{
			FBSTRING TMP$422$3;
			FBSTRING TMP$423$3;
			FBSTRING TMP$424$3;
			FBSTRING TMP$425$3;
			FBSTRING TMP$426$3;
			FBSTRING TMP$429$3;
			FBSTRING TMP$430$3;
			FBSTRING TMP$431$3;
			FBSTRING TMP$432$3;
			if( *(int64*)SVREG$1 == 4ll ) goto label$175;
			{
				if( SDSIZE$1 <= 4ll ) goto label$177;
				{
					FBSTRING TMP$416$5;
					FBSTRING TMP$417$5;
					__builtin_memset( &TMP$417$5, 0, 24ll );
					__builtin_memset( &TMP$416$5, 0, 24ll );
					FBSTRING* vr$59 = fb_StrConcat( &TMP$416$5, (void*)"movlpd xmm7, ", 14ll, (void*)&SRC$1, -1ll );
					fb_StrAssign( (void*)&TMP$417$5, -1ll, (void*)vr$59, -1ll, 0 );
					OUTP( (char*)*(char**)&TMP$417$5 );
					fb_StrDelete( (FBSTRING*)&TMP$417$5 );
				}
				goto label$176;
				label$177:;
				{
					FBSTRING TMP$418$5;
					FBSTRING TMP$419$5;
					__builtin_memset( &TMP$419$5, 0, 24ll );
					__builtin_memset( &TMP$418$5, 0, 24ll );
					FBSTRING* vr$65 = fb_StrConcat( &TMP$418$5, (void*)"movss xmm7, ", 13ll, (void*)&SRC$1, -1ll );
					fb_StrAssign( (void*)&TMP$419$5, -1ll, (void*)vr$65, -1ll, 0 );
					OUTP( (char*)*(char**)&TMP$419$5 );
					fb_StrDelete( (FBSTRING*)&TMP$419$5 );
				}
				label$176:;
				fb_StrAssign( (void*)&SRC$1, -1ll, (void*)"xmm7", 5ll, 0 );
			}
			label$175:;
			label$174:;
			__builtin_memset( &TMP$426$3, 0, 24ll );
			__builtin_memset( &TMP$422$3, 0, 24ll );
			FBSTRING* vr$71 = fb_StrConcat( &TMP$422$3, (void*)"cvtp", 5ll, (void*)&SUFFIX$1, -1ll );
			__builtin_memset( &TMP$423$3, 0, 24ll );
			FBSTRING* vr$74 = fb_StrConcat( &TMP$423$3, (void*)vr$71, -1ll, (void*)"2dq xmm7", 9ll );
			__builtin_memset( &TMP$424$3, 0, 24ll );
			FBSTRING* vr$77 = fb_StrConcat( &TMP$424$3, (void*)vr$74, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$425$3, 0, 24ll );
			FBSTRING* vr$80 = fb_StrConcat( &TMP$425$3, (void*)vr$77, -1ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$426$3, -1ll, (void*)vr$80, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$426$3 );
			fb_StrDelete( (FBSTRING*)&TMP$426$3 );
			OUTP( (char*)"packssdw xmm7, xmm7" );
			__builtin_memset( &TMP$432$3, 0, 24ll );
			__builtin_memset( &TMP$429$3, 0, 24ll );
			FBSTRING* vr$86 = fb_StrConcat( &TMP$429$3, (void*)"movd ", 6ll, (void*)&AUX$1, -1ll );
			__builtin_memset( &TMP$430$3, 0, 24ll );
			FBSTRING* vr$89 = fb_StrConcat( &TMP$430$3, (void*)vr$86, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$431$3, 0, 24ll );
			FBSTRING* vr$92 = fb_StrConcat( &TMP$431$3, (void*)vr$89, -1ll, (void*)"xmm7", 5ll );
			fb_StrAssign( (void*)&TMP$432$3, -1ll, (void*)vr$92, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$432$3 );
			fb_StrDelete( (FBSTRING*)&TMP$432$3 );
		}
		goto label$172;
		label$173:;
		{
			FBSTRING TMP$435$3;
			FBSTRING TMP$436$3;
			FBSTRING TMP$437$3;
			FBSTRING TMP$438$3;
			FBSTRING TMP$439$3;
			FBSTRING TMP$440$3;
			HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, 0ll );
			__builtin_memset( &TMP$440$3, 0, 24ll );
			__builtin_memset( &TMP$435$3, 0, 24ll );
			FBSTRING* vr$98 = fb_StrConcat( &TMP$435$3, (void*)"cvts", 5ll, (void*)&SUFFIX$1, -1ll );
			__builtin_memset( &TMP$436$3, 0, 24ll );
			FBSTRING* vr$101 = fb_StrConcat( &TMP$436$3, (void*)vr$98, -1ll, (void*)"2si ", 5ll );
			__builtin_memset( &TMP$437$3, 0, 24ll );
			FBSTRING* vr$104 = fb_StrConcat( &TMP$437$3, (void*)vr$101, -1ll, (void*)&AUX$1, -1ll );
			__builtin_memset( &TMP$438$3, 0, 24ll );
			FBSTRING* vr$107 = fb_StrConcat( &TMP$438$3, (void*)vr$104, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$439$3, 0, 24ll );
			FBSTRING* vr$110 = fb_StrConcat( &TMP$439$3, (void*)vr$107, -1ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$440$3, -1ll, (void*)vr$110, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$440$3 );
			fb_StrDelete( (FBSTRING*)&TMP$440$3 );
		}
		label$172:;
	}
	label$166:;
	if( WASREG$1 != 0ll ) goto label$179;
	{
		if( DDSIZE$1 != 4ll ) goto label$181;
		{
			FBSTRING TMP$441$3;
			FBSTRING TMP$442$3;
			FBSTRING TMP$443$3;
			FBSTRING TMP$444$3;
			__builtin_memset( &TMP$444$3, 0, 24ll );
			__builtin_memset( &TMP$441$3, 0, 24ll );
			FBSTRING* vr$116 = fb_StrConcat( &TMP$441$3, (void*)"mov ", 5ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$442$3, 0, 24ll );
			FBSTRING* vr$119 = fb_StrConcat( &TMP$442$3, (void*)vr$116, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$443$3, 0, 24ll );
			FBSTRING* vr$122 = fb_StrConcat( &TMP$443$3, (void*)vr$119, -1ll, (void*)&AUX$1, -1ll );
			fb_StrAssign( (void*)&TMP$444$3, -1ll, (void*)vr$122, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$444$3 );
			fb_StrDelete( (FBSTRING*)&TMP$444$3 );
		}
		goto label$180;
		label$181:;
		{
			FBSTRING TMP$445$3;
			FBSTRING TMP$446$3;
			FBSTRING TMP$447$3;
			FBSTRING TMP$448$3;
			__builtin_memset( &TMP$448$3, 0, 24ll );
			__builtin_memset( &TMP$445$3, 0, 24ll );
			FBSTRING* vr$128 = fb_StrConcat( &TMP$445$3, (void*)"mov ", 5ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$446$3, 0, 24ll );
			FBSTRING* vr$131 = fb_StrConcat( &TMP$446$3, (void*)vr$128, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$447$3, 0, 24ll );
			FBSTRING* vr$134 = fb_StrConcat( &TMP$447$3, (void*)vr$131, -1ll, (void*)&AUX8_16$1, -1ll );
			fb_StrAssign( (void*)&TMP$448$3, -1ll, (void*)vr$134, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$448$3 );
			fb_StrDelete( (FBSTRING*)&TMP$448$3 );
		}
		label$180:;
		if( ISFREE$1 != 0ll ) goto label$183;
		{
			HPOP( (char*)*(char**)&AUX$1 );
		}
		label$183:;
		label$182:;
	}
	label$179:;
	label$178:;
	label$149:;
}

static void _EMITLOADL2F_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$453$1;
	FBSTRING TMP$454$1;
	FBSTRING TMP$455$1;
	FBSTRING TMP$464$1;
	FBSTRING TMP$465$1;
	label$184:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING AUX$1;
	static FBSTRING OSTR$1;
	static int64 DDSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( ((int64)-(*(int64*)SVREG$1 == 4ll) | (int64)-(*(int64*)SVREG$1 == 0ll)) == 0ll ) goto label$187;
	{
		int64 TMP$449$2;
		if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$188;
		TMP$449$2 = 24ll;
		goto label$764;
		label$188:;
		TMP$449$2 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
		label$764:;
		if( *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$449$2 * 56ll)) + 16ll) == 0ll ) goto label$190;
		{
			FBSTRING TMP$450$3;
			FBSTRING TMP$451$3;
			HPREPOPERAND64( SVREG$1, &SRC$1, &AUX$1 );
			HPUSH( (char*)*(char**)&AUX$1 );
			HPUSH( (char*)*(char**)&SRC$1 );
			__builtin_memset( &TMP$450$3, 0, 24ll );
			FBSTRING* vr$15 = fb_StrConcat( &TMP$450$3, (void*)"fild ", 6ll, (void*)(((int64)(struct $12EMITDATATYPE*)DTYPETB$ + (*(int64*)((uint8*)SVREG$1 + 8ll) * 24ll)) + 8ll), 12ll );
			__builtin_memset( &TMP$451$3, 0, 24ll );
			FBSTRING* vr$18 = fb_StrConcat( &TMP$451$3, (void*)vr$15, -1ll, (void*)" [esp]", 7ll );
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$18, -1ll, 0 );
			OUTP( (char*)*(char**)&OSTR$1 );
			OUTP( (char*)"add esp, 8" );
		}
		goto label$189;
		label$190:;
		{
			HPREPOPERAND64( SVREG$1, &SRC$1, &AUX$1 );
			HPUSH( (char*)*(char**)&AUX$1 );
			HPUSH( (char*)*(char**)&SRC$1 );
			OUTP( (char*)"fild qword ptr [esp]" );
			OUTP( (char*)"add esp, 8" );
			HULONG2DBL( SVREG$1 );
		}
		label$189:;
	}
	goto label$186;
	label$187:;
	{
		int64 TMP$452$2;
		if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$191;
		TMP$452$2 = 24ll;
		goto label$765;
		label$191:;
		TMP$452$2 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
		label$765:;
		if( *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$452$2 * 56ll)) + 16ll) == 0ll ) goto label$193;
		{
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fild ", 6ll, 0 );
			fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( (char*)*(char**)&OSTR$1 );
		}
		goto label$192;
		label$193:;
		{
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fild ", 6ll, 0 );
			fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( (char*)*(char**)&OSTR$1 );
			HULONG2DBL( SVREG$1 );
		}
		label$192:;
	}
	label$186:;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$194;
	TMP$453$1 = 24ll;
	goto label$766;
	label$194:;
	TMP$453$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$766:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$453$1 * 56ll)) + 8ll);
	__builtin_memset( &TMP$455$1, 0, 24ll );
	FBSTRING* vr$30 = fb_LongintToStr( DDSIZE$1 );
	__builtin_memset( &TMP$454$1, 0, 24ll );
	FBSTRING* vr$33 = fb_StrConcat( &TMP$454$1, (void*)"sub esp, ", 10ll, (void*)vr$30, -1ll );
	fb_StrAssign( (void*)&TMP$455$1, -1ll, (void*)vr$33, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$455$1 );
	fb_StrDelete( (FBSTRING*)&TMP$455$1 );
	if( DDSIZE$1 <= 4ll ) goto label$196;
	{
		FBSTRING TMP$456$2;
		FBSTRING TMP$457$2;
		FBSTRING TMP$458$2;
		FBSTRING TMP$459$2;
		OUTP( (char*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$459$2, 0, 24ll );
		__builtin_memset( &TMP$456$2, 0, 24ll );
		FBSTRING* vr$39 = fb_StrConcat( &TMP$456$2, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$457$2, 0, 24ll );
		FBSTRING* vr$42 = fb_StrConcat( &TMP$457$2, (void*)vr$39, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$458$2, 0, 24ll );
		FBSTRING* vr$45 = fb_StrConcat( &TMP$458$2, (void*)vr$42, -1ll, (void*)"qword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$459$2, -1ll, (void*)vr$45, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$459$2 );
		fb_StrDelete( (FBSTRING*)&TMP$459$2 );
	}
	goto label$195;
	label$196:;
	{
		FBSTRING TMP$460$2;
		FBSTRING TMP$461$2;
		FBSTRING TMP$462$2;
		FBSTRING TMP$463$2;
		OUTP( (char*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$463$2, 0, 24ll );
		__builtin_memset( &TMP$460$2, 0, 24ll );
		FBSTRING* vr$51 = fb_StrConcat( &TMP$460$2, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$461$2, 0, 24ll );
		FBSTRING* vr$54 = fb_StrConcat( &TMP$461$2, (void*)vr$51, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$462$2, 0, 24ll );
		FBSTRING* vr$57 = fb_StrConcat( &TMP$462$2, (void*)vr$54, -1ll, (void*)"dword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$463$2, -1ll, (void*)vr$57, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$463$2 );
		fb_StrDelete( (FBSTRING*)&TMP$463$2 );
	}
	label$195:;
	__builtin_memset( &TMP$465$1, 0, 24ll );
	FBSTRING* vr$61 = fb_LongintToStr( DDSIZE$1 );
	__builtin_memset( &TMP$464$1, 0, 24ll );
	FBSTRING* vr$64 = fb_StrConcat( &TMP$464$1, (void*)"add esp, ", 10ll, (void*)vr$61, -1ll );
	fb_StrAssign( (void*)&TMP$465$1, -1ll, (void*)vr$64, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$465$1 );
	fb_StrDelete( (FBSTRING*)&TMP$465$1 );
	label$185:;
}

static void _EMITLOADI2F_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$466$1;
	int64 TMP$467$1;
	int64 TMP$468$1;
	FBSTRING TMP$537$1;
	FBSTRING TMP$538$1;
	FBSTRING TMP$547$1;
	FBSTRING TMP$548$1;
	label$197:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static int64 SDSIZE$1;
	static int64 DDSIZE$1;
	static FBSTRING SUFFIX$1;
	static FBSTRING AUX$1;
	static int64 ISFREE$1;
	static int64 REG$1;
	static struct $8FBSYMBOL* SYM$1;
	static struct $6IRVREG* TEMPVREG$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$199;
	TMP$466$1 = 24ll;
	goto label$767;
	label$199:;
	TMP$466$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$767:;
	SDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$466$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$200;
	TMP$467$1 = 24ll;
	goto label$768;
	label$200:;
	TMP$467$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$768:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$467$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$201;
	TMP$468$1 = 24ll;
	goto label$769;
	label$201:;
	TMP$468$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$769:;
	if( ((int64)-(*(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$468$1 * 56ll)) + 16ll) == 0ll) & (int64)-(SDSIZE$1 == 4ll)) == 0ll ) goto label$203;
	{
		FBSTRING TMP$471$2;
		FBSTRING TMP$472$2;
		FBSTRING TMP$473$2;
		FBSTRING TMP$474$2;
		FBSTRING TMP$477$2;
		FBSTRING TMP$478$2;
		FBSTRING TMP$479$2;
		FBSTRING TMP$480$2;
		FBSTRING TMP$482$2;
		FBSTRING TMP$483$2;
		FBSTRING TMP$484$2;
		FBSTRING TMP$485$2;
		FBSTRING TMP$486$2;
		FBSTRING TMP$487$2;
		FBSTRING TMP$488$2;
		FBSTRING TMP$489$2;
		FBSTRING TMP$490$2;
		FBSTRING TMP$493$2;
		FBSTRING TMP$494$2;
		FBSTRING TMP$495$2;
		FBSTRING TMP$496$2;
		FBSTRING TMP$497$2;
		FBSTRING TMP$498$2;
		FBSTRING TMP$499$2;
		FBSTRING TMP$500$2;
		FBSTRING TMP$501$2;
		FBSTRING TMP$503$2;
		FBSTRING TMP$504$2;
		FBSTRING TMP$505$2;
		FBSTRING TMP$506$2;
		FBSTRING TMP$507$2;
		FBSTRING TMP$509$2;
		FBSTRING TMP$510$2;
		FBSTRING TMP$511$2;
		FBSTRING TMP$512$2;
		FBSTRING TMP$513$2;
		int64 vr$18 = HFINDREGNOTINVREG( SVREG$1, 0ll );
		REG$1 = vr$18;
		char* vr$19 = HGETREGNAME( 8ll, REG$1 );
		fb_StrAssign( (void*)&AUX$1, -1ll, (void*)vr$19, 0ll, 0 );
		int64 vr$20 = HISREGFREE( 0ll, REG$1 );
		ISFREE$1 = vr$20;
		if( ISFREE$1 != 0ll ) goto label$205;
		{
			HPUSH( (char*)*(char**)&AUX$1 );
		}
		label$205:;
		label$204:;
		if( DDSIZE$1 <= 4ll ) goto label$207;
		{
			struct $8FBSYMBOL* vr$21 = SYMBALLOCINTCONST( 4679240012837945344ll, 14ll );
			SYM$1 = vr$21;
			struct $6IRVREG* vr$23 = (*(tmp$72*)((uint8*)&IR$ + 472ll))( 14ll, (struct $8FBSYMBOL*)0ull, SYM$1, *(int64*)((uint8*)SYM$1 + 88ll) );
			TEMPVREG$1 = vr$23;
			fb_StrAssign( (void*)&SUFFIX$1, -1ll, (void*)"sd ", 4ll, 0 );
		}
		goto label$206;
		label$207:;
		{
			struct $8FBSYMBOL* vr$24 = SYMBALLOCINTCONST( 1199570944ll, 9ll );
			SYM$1 = vr$24;
			struct $6IRVREG* vr$26 = (*(tmp$72*)((uint8*)&IR$ + 472ll))( 9ll, (struct $8FBSYMBOL*)0ull, SYM$1, *(int64*)((uint8*)SYM$1 + 88ll) );
			TEMPVREG$1 = vr$26;
			fb_StrAssign( (void*)&SUFFIX$1, -1ll, (void*)"ss ", 4ll, 0 );
		}
		label$206:;
		*(int64*)((uint8*)SYM$1 + 168ll) = 16ll;
		__builtin_memset( &TMP$474$2, 0, 24ll );
		__builtin_memset( &TMP$471$2, 0, 24ll );
		FBSTRING* vr$31 = fb_StrConcat( &TMP$471$2, (void*)"mov ", 5ll, (void*)&AUX$1, -1ll );
		__builtin_memset( &TMP$472$2, 0, 24ll );
		FBSTRING* vr$34 = fb_StrConcat( &TMP$472$2, (void*)vr$31, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$473$2, 0, 24ll );
		FBSTRING* vr$37 = fb_StrConcat( &TMP$473$2, (void*)vr$34, -1ll, (void*)&SRC$1, -1ll );
		fb_StrAssign( (void*)&TMP$474$2, -1ll, (void*)vr$37, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$474$2 );
		fb_StrDelete( (FBSTRING*)&TMP$474$2 );
		__builtin_memset( &TMP$480$2, 0, 24ll );
		__builtin_memset( &TMP$477$2, 0, 24ll );
		FBSTRING* vr$43 = fb_StrConcat( &TMP$477$2, (void*)"and ", 5ll, (void*)&AUX$1, -1ll );
		__builtin_memset( &TMP$478$2, 0, 24ll );
		FBSTRING* vr$46 = fb_StrConcat( &TMP$478$2, (void*)vr$43, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$479$2, 0, 24ll );
		FBSTRING* vr$49 = fb_StrConcat( &TMP$479$2, (void*)vr$46, -1ll, (void*)"0xFFFF", 7ll );
		fb_StrAssign( (void*)&TMP$480$2, -1ll, (void*)vr$49, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$480$2 );
		fb_StrDelete( (FBSTRING*)&TMP$480$2 );
		__builtin_memset( &TMP$486$2, 0, 24ll );
		__builtin_memset( &TMP$482$2, 0, 24ll );
		FBSTRING* vr$55 = fb_StrConcat( &TMP$482$2, (void*)"cvtsi2", 7ll, (void*)&SUFFIX$1, -1ll );
		__builtin_memset( &TMP$483$2, 0, 24ll );
		FBSTRING* vr$58 = fb_StrConcat( &TMP$483$2, (void*)vr$55, -1ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$484$2, 0, 24ll );
		FBSTRING* vr$61 = fb_StrConcat( &TMP$484$2, (void*)vr$58, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$485$2, 0, 24ll );
		FBSTRING* vr$64 = fb_StrConcat( &TMP$485$2, (void*)vr$61, -1ll, (void*)&AUX$1, -1ll );
		fb_StrAssign( (void*)&TMP$486$2, -1ll, (void*)vr$64, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$486$2 );
		fb_StrDelete( (FBSTRING*)&TMP$486$2 );
		__builtin_memset( &TMP$490$2, 0, 24ll );
		__builtin_memset( &TMP$487$2, 0, 24ll );
		FBSTRING* vr$70 = fb_StrConcat( &TMP$487$2, (void*)"mov ", 5ll, (void*)&AUX$1, -1ll );
		__builtin_memset( &TMP$488$2, 0, 24ll );
		FBSTRING* vr$73 = fb_StrConcat( &TMP$488$2, (void*)vr$70, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$489$2, 0, 24ll );
		FBSTRING* vr$76 = fb_StrConcat( &TMP$489$2, (void*)vr$73, -1ll, (void*)&SRC$1, -1ll );
		fb_StrAssign( (void*)&TMP$490$2, -1ll, (void*)vr$76, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$490$2 );
		fb_StrDelete( (FBSTRING*)&TMP$490$2 );
		__builtin_memset( &TMP$496$2, 0, 24ll );
		__builtin_memset( &TMP$493$2, 0, 24ll );
		FBSTRING* vr$82 = fb_StrConcat( &TMP$493$2, (void*)"shr ", 5ll, (void*)&AUX$1, -1ll );
		__builtin_memset( &TMP$494$2, 0, 24ll );
		FBSTRING* vr$85 = fb_StrConcat( &TMP$494$2, (void*)vr$82, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$495$2, 0, 24ll );
		FBSTRING* vr$88 = fb_StrConcat( &TMP$495$2, (void*)vr$85, -1ll, (void*)"16", 3ll );
		fb_StrAssign( (void*)&TMP$496$2, -1ll, (void*)vr$88, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$496$2 );
		fb_StrDelete( (FBSTRING*)&TMP$496$2 );
		__builtin_memset( &TMP$501$2, 0, 24ll );
		__builtin_memset( &TMP$497$2, 0, 24ll );
		FBSTRING* vr$94 = fb_StrConcat( &TMP$497$2, (void*)"cvtsi2", 7ll, (void*)&SUFFIX$1, -1ll );
		__builtin_memset( &TMP$498$2, 0, 24ll );
		FBSTRING* vr$97 = fb_StrConcat( &TMP$498$2, (void*)vr$94, -1ll, (void*)"xmm7", 5ll );
		__builtin_memset( &TMP$499$2, 0, 24ll );
		FBSTRING* vr$100 = fb_StrConcat( &TMP$499$2, (void*)vr$97, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$500$2, 0, 24ll );
		FBSTRING* vr$103 = fb_StrConcat( &TMP$500$2, (void*)vr$100, -1ll, (void*)&AUX$1, -1ll );
		fb_StrAssign( (void*)&TMP$501$2, -1ll, (void*)vr$103, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$501$2 );
		fb_StrDelete( (FBSTRING*)&TMP$501$2 );
		HPREPOPERAND( TEMPVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
		__builtin_memset( &TMP$507$2, 0, 24ll );
		__builtin_memset( &TMP$503$2, 0, 24ll );
		FBSTRING* vr$109 = fb_StrConcat( &TMP$503$2, (void*)"mul", 4ll, (void*)&SUFFIX$1, -1ll );
		__builtin_memset( &TMP$504$2, 0, 24ll );
		FBSTRING* vr$112 = fb_StrConcat( &TMP$504$2, (void*)vr$109, -1ll, (void*)"xmm7", 5ll );
		__builtin_memset( &TMP$505$2, 0, 24ll );
		FBSTRING* vr$115 = fb_StrConcat( &TMP$505$2, (void*)vr$112, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$506$2, 0, 24ll );
		FBSTRING* vr$118 = fb_StrConcat( &TMP$506$2, (void*)vr$115, -1ll, (void*)&SRC$1, -1ll );
		fb_StrAssign( (void*)&TMP$507$2, -1ll, (void*)vr$118, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$507$2 );
		fb_StrDelete( (FBSTRING*)&TMP$507$2 );
		__builtin_memset( &TMP$513$2, 0, 24ll );
		__builtin_memset( &TMP$509$2, 0, 24ll );
		FBSTRING* vr$124 = fb_StrConcat( &TMP$509$2, (void*)"add", 4ll, (void*)&SUFFIX$1, -1ll );
		__builtin_memset( &TMP$510$2, 0, 24ll );
		FBSTRING* vr$127 = fb_StrConcat( &TMP$510$2, (void*)vr$124, -1ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$511$2, 0, 24ll );
		FBSTRING* vr$130 = fb_StrConcat( &TMP$511$2, (void*)vr$127, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$512$2, 0, 24ll );
		FBSTRING* vr$133 = fb_StrConcat( &TMP$512$2, (void*)vr$130, -1ll, (void*)"xmm7", 5ll );
		fb_StrAssign( (void*)&TMP$513$2, -1ll, (void*)vr$133, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$513$2 );
		fb_StrDelete( (FBSTRING*)&TMP$513$2 );
		if( ISFREE$1 != 0ll ) goto label$209;
		{
			HPOP( (char*)*(char**)&AUX$1 );
		}
		label$209:;
		label$208:;
		goto label$198;
	}
	label$203:;
	label$202:;
	if( ((int64)-(*(int64*)SVREG$1 != 0ll) & (int64)-(SDSIZE$1 == 4ll)) == 0ll ) goto label$211;
	{
		ISFREE$1 = -1ll;
		fb_StrAssign( (void*)&AUX$1, -1ll, (void*)&SRC$1, -1ll, 0 );
	}
	goto label$210;
	label$211:;
	{
		int64 vr$140 = HFINDREGNOTINVREG( SVREG$1, 0ll );
		REG$1 = vr$140;
		char* vr$141 = HGETREGNAME( 8ll, REG$1 );
		fb_StrAssign( (void*)&AUX$1, -1ll, (void*)vr$141, 0ll, 0 );
		int64 vr$142 = HISREGFREE( 0ll, REG$1 );
		ISFREE$1 = vr$142;
		if( ISFREE$1 != 0ll ) goto label$213;
		{
			HPUSH( (char*)*(char**)&AUX$1 );
		}
		label$213:;
		label$212:;
		if( ((int64)-(*(int64*)SVREG$1 == 0ll) | (int64)-(SDSIZE$1 == 4ll)) == 0ll ) goto label$215;
		{
			FBSTRING TMP$514$3;
			FBSTRING TMP$515$3;
			FBSTRING TMP$516$3;
			FBSTRING TMP$517$3;
			__builtin_memset( &TMP$517$3, 0, 24ll );
			__builtin_memset( &TMP$514$3, 0, 24ll );
			FBSTRING* vr$150 = fb_StrConcat( &TMP$514$3, (void*)"mov ", 5ll, (void*)&AUX$1, -1ll );
			__builtin_memset( &TMP$515$3, 0, 24ll );
			FBSTRING* vr$153 = fb_StrConcat( &TMP$515$3, (void*)vr$150, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$516$3, 0, 24ll );
			FBSTRING* vr$156 = fb_StrConcat( &TMP$516$3, (void*)vr$153, -1ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$517$3, -1ll, (void*)vr$156, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$517$3 );
			fb_StrDelete( (FBSTRING*)&TMP$517$3 );
		}
		goto label$214;
		label$215:;
		{
			int64 TMP$518$3;
			if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$216;
			TMP$518$3 = 24ll;
			goto label$770;
			label$216:;
			TMP$518$3 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
			label$770:;
			if( *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$518$3 * 56ll)) + 16ll) == 0ll ) goto label$218;
			{
				FBSTRING TMP$519$4;
				FBSTRING TMP$520$4;
				FBSTRING TMP$521$4;
				FBSTRING TMP$522$4;
				__builtin_memset( &TMP$522$4, 0, 24ll );
				__builtin_memset( &TMP$519$4, 0, 24ll );
				FBSTRING* vr$167 = fb_StrConcat( &TMP$519$4, (void*)"movsx ", 7ll, (void*)&AUX$1, -1ll );
				__builtin_memset( &TMP$520$4, 0, 24ll );
				FBSTRING* vr$170 = fb_StrConcat( &TMP$520$4, (void*)vr$167, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$521$4, 0, 24ll );
				FBSTRING* vr$173 = fb_StrConcat( &TMP$521$4, (void*)vr$170, -1ll, (void*)&SRC$1, -1ll );
				fb_StrAssign( (void*)&TMP$522$4, -1ll, (void*)vr$173, -1ll, 0 );
				OUTP( (char*)*(char**)&TMP$522$4 );
				fb_StrDelete( (FBSTRING*)&TMP$522$4 );
			}
			goto label$217;
			label$218:;
			{
				FBSTRING TMP$523$4;
				FBSTRING TMP$524$4;
				FBSTRING TMP$525$4;
				FBSTRING TMP$526$4;
				__builtin_memset( &TMP$526$4, 0, 24ll );
				__builtin_memset( &TMP$523$4, 0, 24ll );
				FBSTRING* vr$179 = fb_StrConcat( &TMP$523$4, (void*)"movzx ", 7ll, (void*)&AUX$1, -1ll );
				__builtin_memset( &TMP$524$4, 0, 24ll );
				FBSTRING* vr$182 = fb_StrConcat( &TMP$524$4, (void*)vr$179, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$525$4, 0, 24ll );
				FBSTRING* vr$185 = fb_StrConcat( &TMP$525$4, (void*)vr$182, -1ll, (void*)&SRC$1, -1ll );
				fb_StrAssign( (void*)&TMP$526$4, -1ll, (void*)vr$185, -1ll, 0 );
				OUTP( (char*)*(char**)&TMP$526$4 );
				fb_StrDelete( (FBSTRING*)&TMP$526$4 );
			}
			label$217:;
		}
		label$214:;
	}
	label$210:;
	if( DDSIZE$1 <= 4ll ) goto label$220;
	{
		FBSTRING TMP$528$2;
		FBSTRING TMP$529$2;
		FBSTRING TMP$530$2;
		FBSTRING TMP$531$2;
		__builtin_memset( &TMP$531$2, 0, 24ll );
		__builtin_memset( &TMP$528$2, 0, 24ll );
		FBSTRING* vr$191 = fb_StrConcat( &TMP$528$2, (void*)"cvtsi2sd ", 10ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$529$2, 0, 24ll );
		FBSTRING* vr$194 = fb_StrConcat( &TMP$529$2, (void*)vr$191, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$530$2, 0, 24ll );
		FBSTRING* vr$197 = fb_StrConcat( &TMP$530$2, (void*)vr$194, -1ll, (void*)&AUX$1, -1ll );
		fb_StrAssign( (void*)&TMP$531$2, -1ll, (void*)vr$197, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$531$2 );
		fb_StrDelete( (FBSTRING*)&TMP$531$2 );
	}
	goto label$219;
	label$220:;
	{
		FBSTRING TMP$533$2;
		FBSTRING TMP$534$2;
		FBSTRING TMP$535$2;
		FBSTRING TMP$536$2;
		__builtin_memset( &TMP$536$2, 0, 24ll );
		__builtin_memset( &TMP$533$2, 0, 24ll );
		FBSTRING* vr$203 = fb_StrConcat( &TMP$533$2, (void*)"cvtsi2ss ", 10ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$534$2, 0, 24ll );
		FBSTRING* vr$206 = fb_StrConcat( &TMP$534$2, (void*)vr$203, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$535$2, 0, 24ll );
		FBSTRING* vr$209 = fb_StrConcat( &TMP$535$2, (void*)vr$206, -1ll, (void*)&AUX$1, -1ll );
		fb_StrAssign( (void*)&TMP$536$2, -1ll, (void*)vr$209, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$536$2 );
		fb_StrDelete( (FBSTRING*)&TMP$536$2 );
	}
	label$219:;
	if( ISFREE$1 != 0ll ) goto label$222;
	{
		HPOP( (char*)*(char**)&AUX$1 );
	}
	label$222:;
	label$221:;
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 1ll ) goto label$224;
	{
		goto label$198;
		label$224:;
	}
	__builtin_memset( &TMP$538$1, 0, 24ll );
	FBSTRING* vr$214 = fb_LongintToStr( DDSIZE$1 );
	__builtin_memset( &TMP$537$1, 0, 24ll );
	FBSTRING* vr$217 = fb_StrConcat( &TMP$537$1, (void*)"sub esp, ", 10ll, (void*)vr$214, -1ll );
	fb_StrAssign( (void*)&TMP$538$1, -1ll, (void*)vr$217, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$538$1 );
	fb_StrDelete( (FBSTRING*)&TMP$538$1 );
	if( DDSIZE$1 <= 4ll ) goto label$226;
	{
		FBSTRING TMP$541$2;
		FBSTRING TMP$542$2;
		__builtin_memset( &TMP$542$2, 0, 24ll );
		__builtin_memset( &TMP$541$2, 0, 24ll );
		FBSTRING* vr$223 = fb_StrConcat( &TMP$541$2, (void*)"movlpd [esp], ", 15ll, (void*)&DST$1, -1ll );
		fb_StrAssign( (void*)&TMP$542$2, -1ll, (void*)vr$223, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$542$2 );
		fb_StrDelete( (FBSTRING*)&TMP$542$2 );
		OUTP( (char*)"fld qword ptr [esp]" );
	}
	goto label$225;
	label$226:;
	{
		FBSTRING TMP$545$2;
		FBSTRING TMP$546$2;
		__builtin_memset( &TMP$546$2, 0, 24ll );
		__builtin_memset( &TMP$545$2, 0, 24ll );
		FBSTRING* vr$229 = fb_StrConcat( &TMP$545$2, (void*)"movss [esp], ", 14ll, (void*)&DST$1, -1ll );
		fb_StrAssign( (void*)&TMP$546$2, -1ll, (void*)vr$229, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$546$2 );
		fb_StrDelete( (FBSTRING*)&TMP$546$2 );
		OUTP( (char*)"fld dword ptr [esp]" );
	}
	label$225:;
	__builtin_memset( &TMP$548$1, 0, 24ll );
	FBSTRING* vr$233 = fb_LongintToStr( DDSIZE$1 );
	__builtin_memset( &TMP$547$1, 0, 24ll );
	FBSTRING* vr$236 = fb_StrConcat( &TMP$547$1, (void*)"add esp, ", 10ll, (void*)vr$233, -1ll );
	fb_StrAssign( (void*)&TMP$548$1, -1ll, (void*)vr$236, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$548$1 );
	fb_StrDelete( (FBSTRING*)&TMP$548$1 );
	label$198:;
}

static void _EMITLOADF2F_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$551$1;
	int64 TMP$552$1;
	label$227:;
	static FBSTRING SRC$1;
	static FBSTRING DST$1;
	static int64 SDSIZE$1;
	static int64 DDSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, 0ll );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$230;
	{
		FBSTRING TMP$549$2;
		FBSTRING TMP$550$2;
		HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
		__builtin_memset( &TMP$550$2, 0, 24ll );
		__builtin_memset( &TMP$549$2, 0, 24ll );
		FBSTRING* vr$4 = fb_StrConcat( &TMP$549$2, (void*)"fld ", 5ll, (void*)&SRC$1, -1ll );
		fb_StrAssign( (void*)&TMP$550$2, -1ll, (void*)vr$4, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$550$2 );
		fb_StrDelete( (FBSTRING*)&TMP$550$2 );
		goto label$228;
	}
	label$230:;
	label$229:;
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, 0ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$231;
	TMP$551$1 = 24ll;
	goto label$771;
	label$231:;
	TMP$551$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$771:;
	SDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$551$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$232;
	TMP$552$1 = 24ll;
	goto label$772;
	label$232:;
	TMP$552$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$772:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$552$1 * 56ll)) + 8ll);
	if( SDSIZE$1 != DDSIZE$1 ) goto label$234;
	{
		if( *(int64*)((uint8*)SVREG$1 + 40ll) == 0ll ) goto label$236;
		{
			HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, 0ll );
			if( DDSIZE$1 <= 4ll ) goto label$238;
			{
				FBSTRING TMP$553$4;
				FBSTRING TMP$554$4;
				FBSTRING TMP$555$4;
				FBSTRING TMP$556$4;
				__builtin_memset( &TMP$556$4, 0, 24ll );
				__builtin_memset( &TMP$553$4, 0, 24ll );
				FBSTRING* vr$21 = fb_StrConcat( &TMP$553$4, (void*)"movupd ", 8ll, (void*)&DST$1, -1ll );
				__builtin_memset( &TMP$554$4, 0, 24ll );
				FBSTRING* vr$24 = fb_StrConcat( &TMP$554$4, (void*)vr$21, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$555$4, 0, 24ll );
				FBSTRING* vr$27 = fb_StrConcat( &TMP$555$4, (void*)vr$24, -1ll, (void*)&SRC$1, -1ll );
				fb_StrAssign( (void*)&TMP$556$4, -1ll, (void*)vr$27, -1ll, 0 );
				OUTP( (char*)*(char**)&TMP$556$4 );
				fb_StrDelete( (FBSTRING*)&TMP$556$4 );
			}
			goto label$237;
			label$238:;
			{
				if( *(int64*)((uint8*)SVREG$1 + 40ll) != 2ll ) goto label$240;
				{
					FBSTRING TMP$557$5;
					FBSTRING TMP$558$5;
					FBSTRING TMP$559$5;
					FBSTRING TMP$560$5;
					__builtin_memset( &TMP$560$5, 0, 24ll );
					__builtin_memset( &TMP$557$5, 0, 24ll );
					FBSTRING* vr$34 = fb_StrConcat( &TMP$557$5, (void*)"movlps ", 8ll, (void*)&DST$1, -1ll );
					__builtin_memset( &TMP$558$5, 0, 24ll );
					FBSTRING* vr$37 = fb_StrConcat( &TMP$558$5, (void*)vr$34, -1ll, (void*)", ", 3ll );
					__builtin_memset( &TMP$559$5, 0, 24ll );
					FBSTRING* vr$40 = fb_StrConcat( &TMP$559$5, (void*)vr$37, -1ll, (void*)&SRC$1, -1ll );
					fb_StrAssign( (void*)&TMP$560$5, -1ll, (void*)vr$40, -1ll, 0 );
					OUTP( (char*)*(char**)&TMP$560$5 );
					fb_StrDelete( (FBSTRING*)&TMP$560$5 );
				}
				goto label$239;
				label$240:;
				{
					FBSTRING TMP$561$5;
					FBSTRING TMP$562$5;
					FBSTRING TMP$563$5;
					FBSTRING TMP$564$5;
					__builtin_memset( &TMP$564$5, 0, 24ll );
					__builtin_memset( &TMP$561$5, 0, 24ll );
					FBSTRING* vr$46 = fb_StrConcat( &TMP$561$5, (void*)"movups ", 8ll, (void*)&DST$1, -1ll );
					__builtin_memset( &TMP$562$5, 0, 24ll );
					FBSTRING* vr$49 = fb_StrConcat( &TMP$562$5, (void*)vr$46, -1ll, (void*)", ", 3ll );
					__builtin_memset( &TMP$563$5, 0, 24ll );
					FBSTRING* vr$52 = fb_StrConcat( &TMP$563$5, (void*)vr$49, -1ll, (void*)&SRC$1, -1ll );
					fb_StrAssign( (void*)&TMP$564$5, -1ll, (void*)vr$52, -1ll, 0 );
					OUTP( (char*)*(char**)&TMP$564$5 );
					fb_StrDelete( (FBSTRING*)&TMP$564$5 );
				}
				label$239:;
			}
			label$237:;
			goto label$228;
		}
		label$236:;
		label$235:;
		if( DDSIZE$1 <= 4ll ) goto label$242;
		{
			FBSTRING TMP$565$3;
			FBSTRING TMP$566$3;
			FBSTRING TMP$567$3;
			FBSTRING TMP$568$3;
			__builtin_memset( &TMP$568$3, 0, 24ll );
			__builtin_memset( &TMP$565$3, 0, 24ll );
			FBSTRING* vr$58 = fb_StrConcat( &TMP$565$3, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$566$3, 0, 24ll );
			FBSTRING* vr$61 = fb_StrConcat( &TMP$566$3, (void*)vr$58, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$567$3, 0, 24ll );
			FBSTRING* vr$64 = fb_StrConcat( &TMP$567$3, (void*)vr$61, -1ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$568$3, -1ll, (void*)vr$64, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$568$3 );
			fb_StrDelete( (FBSTRING*)&TMP$568$3 );
		}
		goto label$241;
		label$242:;
		{
			FBSTRING TMP$569$3;
			FBSTRING TMP$570$3;
			FBSTRING TMP$571$3;
			FBSTRING TMP$572$3;
			__builtin_memset( &TMP$572$3, 0, 24ll );
			__builtin_memset( &TMP$569$3, 0, 24ll );
			FBSTRING* vr$70 = fb_StrConcat( &TMP$569$3, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$570$3, 0, 24ll );
			FBSTRING* vr$73 = fb_StrConcat( &TMP$570$3, (void*)vr$70, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$571$3, 0, 24ll );
			FBSTRING* vr$76 = fb_StrConcat( &TMP$571$3, (void*)vr$73, -1ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$572$3, -1ll, (void*)vr$76, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$572$3 );
			fb_StrDelete( (FBSTRING*)&TMP$572$3 );
		}
		label$241:;
	}
	goto label$233;
	label$234:;
	if( SDSIZE$1 <= 4ll ) goto label$243;
	{
		if( *(int64*)((uint8*)SVREG$1 + 40ll) == 0ll ) goto label$245;
		{
			FBSTRING TMP$574$3;
			FBSTRING TMP$575$3;
			FBSTRING TMP$576$3;
			FBSTRING TMP$577$3;
			__builtin_memset( &TMP$577$3, 0, 24ll );
			__builtin_memset( &TMP$574$3, 0, 24ll );
			FBSTRING* vr$83 = fb_StrConcat( &TMP$574$3, (void*)"cvtpd2ps ", 10ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$575$3, 0, 24ll );
			FBSTRING* vr$86 = fb_StrConcat( &TMP$575$3, (void*)vr$83, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$576$3, 0, 24ll );
			FBSTRING* vr$89 = fb_StrConcat( &TMP$576$3, (void*)vr$86, -1ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$577$3, -1ll, (void*)vr$89, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$577$3 );
			fb_StrDelete( (FBSTRING*)&TMP$577$3 );
		}
		goto label$244;
		label$245:;
		{
			FBSTRING TMP$578$3;
			FBSTRING TMP$579$3;
			FBSTRING TMP$580$3;
			FBSTRING TMP$581$3;
			__builtin_memset( &TMP$581$3, 0, 24ll );
			__builtin_memset( &TMP$578$3, 0, 24ll );
			FBSTRING* vr$95 = fb_StrConcat( &TMP$578$3, (void*)"cvtsd2ss ", 10ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$579$3, 0, 24ll );
			FBSTRING* vr$98 = fb_StrConcat( &TMP$579$3, (void*)vr$95, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$580$3, 0, 24ll );
			FBSTRING* vr$101 = fb_StrConcat( &TMP$580$3, (void*)vr$98, -1ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$581$3, -1ll, (void*)vr$101, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$581$3 );
			fb_StrDelete( (FBSTRING*)&TMP$581$3 );
		}
		label$244:;
	}
	goto label$233;
	label$243:;
	{
		if( *(int64*)((uint8*)SVREG$1 + 40ll) == 0ll ) goto label$247;
		{
			FBSTRING TMP$583$3;
			FBSTRING TMP$584$3;
			FBSTRING TMP$585$3;
			FBSTRING TMP$586$3;
			__builtin_memset( &TMP$586$3, 0, 24ll );
			__builtin_memset( &TMP$583$3, 0, 24ll );
			FBSTRING* vr$108 = fb_StrConcat( &TMP$583$3, (void*)"cvtps2pd ", 10ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$584$3, 0, 24ll );
			FBSTRING* vr$111 = fb_StrConcat( &TMP$584$3, (void*)vr$108, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$585$3, 0, 24ll );
			FBSTRING* vr$114 = fb_StrConcat( &TMP$585$3, (void*)vr$111, -1ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$586$3, -1ll, (void*)vr$114, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$586$3 );
			fb_StrDelete( (FBSTRING*)&TMP$586$3 );
		}
		goto label$246;
		label$247:;
		{
			FBSTRING TMP$587$3;
			FBSTRING TMP$588$3;
			FBSTRING TMP$589$3;
			FBSTRING TMP$590$3;
			__builtin_memset( &TMP$590$3, 0, 24ll );
			__builtin_memset( &TMP$587$3, 0, 24ll );
			FBSTRING* vr$120 = fb_StrConcat( &TMP$587$3, (void*)"cvtss2sd ", 10ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$588$3, 0, 24ll );
			FBSTRING* vr$123 = fb_StrConcat( &TMP$588$3, (void*)vr$120, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$589$3, 0, 24ll );
			FBSTRING* vr$126 = fb_StrConcat( &TMP$589$3, (void*)vr$123, -1ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$590$3, -1ll, (void*)vr$126, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$590$3 );
			fb_StrDelete( (FBSTRING*)&TMP$590$3 );
		}
		label$246:;
	}
	label$233:;
	label$228:;
}

static void _EMITMOVF_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$591$1;
	int64 TMP$592$1;
	label$248:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static int64 SDSIZE$1;
	static int64 DDSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, 0ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, 0ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$250;
	TMP$591$1 = 24ll;
	goto label$773;
	label$250:;
	TMP$591$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$773:;
	SDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$591$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$251;
	TMP$592$1 = 24ll;
	goto label$774;
	label$251:;
	TMP$592$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$774:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$592$1 * 56ll)) + 8ll);
	if( ((int64)-(SDSIZE$1 > 4ll) & (int64)-(DDSIZE$1 <= 4ll)) == 0ll ) goto label$253;
	{
		if( *(int64*)((uint8*)SVREG$1 + 40ll) == 0ll ) goto label$255;
		{
			FBSTRING TMP$593$3;
			FBSTRING TMP$594$3;
			FBSTRING TMP$595$3;
			FBSTRING TMP$596$3;
			__builtin_memset( &TMP$596$3, 0, 24ll );
			__builtin_memset( &TMP$593$3, 0, 24ll );
			FBSTRING* vr$17 = fb_StrConcat( &TMP$593$3, (void*)"cvtpd2ps ", 10ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$594$3, 0, 24ll );
			FBSTRING* vr$20 = fb_StrConcat( &TMP$594$3, (void*)vr$17, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$595$3, 0, 24ll );
			FBSTRING* vr$23 = fb_StrConcat( &TMP$595$3, (void*)vr$20, -1ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$596$3, -1ll, (void*)vr$23, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$596$3 );
			fb_StrDelete( (FBSTRING*)&TMP$596$3 );
		}
		goto label$254;
		label$255:;
		{
			FBSTRING TMP$597$3;
			FBSTRING TMP$598$3;
			FBSTRING TMP$599$3;
			FBSTRING TMP$600$3;
			__builtin_memset( &TMP$600$3, 0, 24ll );
			__builtin_memset( &TMP$597$3, 0, 24ll );
			FBSTRING* vr$29 = fb_StrConcat( &TMP$597$3, (void*)"cvtsd2ss ", 10ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$598$3, 0, 24ll );
			FBSTRING* vr$32 = fb_StrConcat( &TMP$598$3, (void*)vr$29, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$599$3, 0, 24ll );
			FBSTRING* vr$35 = fb_StrConcat( &TMP$599$3, (void*)vr$32, -1ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$600$3, -1ll, (void*)vr$35, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$600$3 );
			fb_StrDelete( (FBSTRING*)&TMP$600$3 );
		}
		label$254:;
	}
	goto label$252;
	label$253:;
	if( ((int64)-(DDSIZE$1 > 4ll) & (int64)-(SDSIZE$1 <= 4ll)) == 0ll ) goto label$256;
	{
		if( *(int64*)((uint8*)SVREG$1 + 40ll) == 0ll ) goto label$258;
		{
			FBSTRING TMP$601$3;
			FBSTRING TMP$602$3;
			FBSTRING TMP$603$3;
			FBSTRING TMP$604$3;
			__builtin_memset( &TMP$604$3, 0, 24ll );
			__builtin_memset( &TMP$601$3, 0, 24ll );
			FBSTRING* vr$45 = fb_StrConcat( &TMP$601$3, (void*)"cvtps2pd ", 10ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$602$3, 0, 24ll );
			FBSTRING* vr$48 = fb_StrConcat( &TMP$602$3, (void*)vr$45, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$603$3, 0, 24ll );
			FBSTRING* vr$51 = fb_StrConcat( &TMP$603$3, (void*)vr$48, -1ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$604$3, -1ll, (void*)vr$51, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$604$3 );
			fb_StrDelete( (FBSTRING*)&TMP$604$3 );
		}
		goto label$257;
		label$258:;
		{
			FBSTRING TMP$605$3;
			FBSTRING TMP$606$3;
			FBSTRING TMP$607$3;
			FBSTRING TMP$608$3;
			__builtin_memset( &TMP$608$3, 0, 24ll );
			__builtin_memset( &TMP$605$3, 0, 24ll );
			FBSTRING* vr$57 = fb_StrConcat( &TMP$605$3, (void*)"cvtss2sd ", 10ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$606$3, 0, 24ll );
			FBSTRING* vr$60 = fb_StrConcat( &TMP$606$3, (void*)vr$57, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$607$3, 0, 24ll );
			FBSTRING* vr$63 = fb_StrConcat( &TMP$607$3, (void*)vr$60, -1ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$608$3, -1ll, (void*)vr$63, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$608$3 );
			fb_StrDelete( (FBSTRING*)&TMP$608$3 );
		}
		label$257:;
	}
	goto label$252;
	label$256:;
	{
		FBSTRING TMP$610$2;
		FBSTRING TMP$611$2;
		FBSTRING TMP$612$2;
		FBSTRING TMP$613$2;
		__builtin_memset( &TMP$613$2, 0, 24ll );
		__builtin_memset( &TMP$610$2, 0, 24ll );
		FBSTRING* vr$69 = fb_StrConcat( &TMP$610$2, (void*)"movaps ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$611$2, 0, 24ll );
		FBSTRING* vr$72 = fb_StrConcat( &TMP$611$2, (void*)vr$69, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$612$2, 0, 24ll );
		FBSTRING* vr$75 = fb_StrConcat( &TMP$612$2, (void*)vr$72, -1ll, (void*)&SRC$1, -1ll );
		fb_StrAssign( (void*)&TMP$613$2, -1ll, (void*)vr$75, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$613$2 );
		fb_StrDelete( (FBSTRING*)&TMP$613$2 );
	}
	label$252:;
	label$249:;
}

static void _EMITSWZREPF_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$614$1;
	label$259:;
	static FBSTRING DST$1;
	static int64 DDSIZE$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$261;
	TMP$614$1 = 24ll;
	goto label$775;
	label$261:;
	TMP$614$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$775:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$614$1 * 56ll)) + 8ll);
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( DDSIZE$1 <= 4ll ) goto label$263;
	{
		FBSTRING TMP$616$2;
		FBSTRING TMP$617$2;
		FBSTRING TMP$618$2;
		FBSTRING TMP$619$2;
		__builtin_memset( &TMP$619$2, 0, 24ll );
		__builtin_memset( &TMP$616$2, 0, 24ll );
		FBSTRING* vr$8 = fb_StrConcat( &TMP$616$2, (void*)"unpcklpd ", 10ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$617$2, 0, 24ll );
		FBSTRING* vr$11 = fb_StrConcat( &TMP$617$2, (void*)vr$8, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$618$2, 0, 24ll );
		FBSTRING* vr$14 = fb_StrConcat( &TMP$618$2, (void*)vr$11, -1ll, (void*)&DST$1, -1ll );
		fb_StrAssign( (void*)&TMP$619$2, -1ll, (void*)vr$14, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$619$2 );
		fb_StrDelete( (FBSTRING*)&TMP$619$2 );
	}
	goto label$262;
	label$263:;
	{
		if( *(int64*)((uint8*)DVREG$1 + 40ll) != 2ll ) goto label$265;
		{
			FBSTRING TMP$621$3;
			FBSTRING TMP$622$3;
			FBSTRING TMP$623$3;
			FBSTRING TMP$624$3;
			__builtin_memset( &TMP$624$3, 0, 24ll );
			__builtin_memset( &TMP$621$3, 0, 24ll );
			FBSTRING* vr$21 = fb_StrConcat( &TMP$621$3, (void*)"unpcklps ", 10ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$622$3, 0, 24ll );
			FBSTRING* vr$24 = fb_StrConcat( &TMP$622$3, (void*)vr$21, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$623$3, 0, 24ll );
			FBSTRING* vr$27 = fb_StrConcat( &TMP$623$3, (void*)vr$24, -1ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$624$3, -1ll, (void*)vr$27, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$624$3 );
			fb_StrDelete( (FBSTRING*)&TMP$624$3 );
		}
		goto label$264;
		label$265:;
		{
			FBSTRING TMP$627$3;
			FBSTRING TMP$628$3;
			FBSTRING TMP$629$3;
			FBSTRING TMP$630$3;
			FBSTRING TMP$631$3;
			FBSTRING TMP$632$3;
			__builtin_memset( &TMP$632$3, 0, 24ll );
			__builtin_memset( &TMP$627$3, 0, 24ll );
			FBSTRING* vr$33 = fb_StrConcat( &TMP$627$3, (void*)"shufps ", 8ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$628$3, 0, 24ll );
			FBSTRING* vr$36 = fb_StrConcat( &TMP$628$3, (void*)vr$33, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$629$3, 0, 24ll );
			FBSTRING* vr$39 = fb_StrConcat( &TMP$629$3, (void*)vr$36, -1ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$630$3, 0, 24ll );
			FBSTRING* vr$42 = fb_StrConcat( &TMP$630$3, (void*)vr$39, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$631$3, 0, 24ll );
			FBSTRING* vr$45 = fb_StrConcat( &TMP$631$3, (void*)vr$42, -1ll, (void*)"0x0", 4ll );
			fb_StrAssign( (void*)&TMP$632$3, -1ll, (void*)vr$45, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$632$3 );
			fb_StrDelete( (FBSTRING*)&TMP$632$3 );
		}
		label$264:;
	}
	label$262:;
	label$260:;
}

static int64 HEMITCONVERTOPERANDS_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$633$1;
	int64 TMP$634$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$266:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	static int64 SDSIZE$1;
	static int64 DDSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$268;
	TMP$633$1 = 24ll;
	goto label$776;
	label$268:;
	TMP$633$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$776:;
	SDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$633$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$269;
	TMP$634$1 = 24ll;
	goto label$777;
	label$269:;
	TMP$634$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$777:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$634$1 * 56ll)) + 8ll);
	fb$result$1 = 0ll;
	if( DDSIZE$1 <= 4ll ) goto label$271;
	{
		if( SDSIZE$1 != 4ll ) goto label$273;
		{
			if( *(int64*)((uint8*)SVREG$1 + 40ll) == 0ll ) goto label$275;
			{
				FBSTRING TMP$635$4;
				FBSTRING TMP$636$4;
				__builtin_memset( &TMP$636$4, 0, 24ll );
				__builtin_memset( &TMP$635$4, 0, 24ll );
				FBSTRING* vr$15 = fb_StrConcat( &TMP$635$4, (void*)"cvtps2pd xmm7, ", 16ll, (void*)&SRC$1, -1ll );
				fb_StrAssign( (void*)&TMP$636$4, -1ll, (void*)vr$15, -1ll, 0 );
				OUTP( (char*)*(char**)&TMP$636$4 );
				fb_StrDelete( (FBSTRING*)&TMP$636$4 );
			}
			goto label$274;
			label$275:;
			{
				FBSTRING TMP$637$4;
				FBSTRING TMP$638$4;
				__builtin_memset( &TMP$638$4, 0, 24ll );
				__builtin_memset( &TMP$637$4, 0, 24ll );
				FBSTRING* vr$21 = fb_StrConcat( &TMP$637$4, (void*)"cvtss2sd xmm7, ", 16ll, (void*)&SRC$1, -1ll );
				fb_StrAssign( (void*)&TMP$638$4, -1ll, (void*)vr$21, -1ll, 0 );
				OUTP( (char*)*(char**)&TMP$638$4 );
				fb_StrDelete( (FBSTRING*)&TMP$638$4 );
			}
			label$274:;
			fb$result$1 = -1ll;
		}
		label$273:;
		label$272:;
	}
	goto label$270;
	label$271:;
	{
		if( SDSIZE$1 <= 4ll ) goto label$277;
		{
			if( *(int64*)((uint8*)SVREG$1 + 40ll) == 0ll ) goto label$279;
			{
				FBSTRING TMP$639$4;
				FBSTRING TMP$640$4;
				__builtin_memset( &TMP$640$4, 0, 24ll );
				__builtin_memset( &TMP$639$4, 0, 24ll );
				FBSTRING* vr$28 = fb_StrConcat( &TMP$639$4, (void*)"cvtpd2ps xmm7, ", 16ll, (void*)&SRC$1, -1ll );
				fb_StrAssign( (void*)&TMP$640$4, -1ll, (void*)vr$28, -1ll, 0 );
				OUTP( (char*)*(char**)&TMP$640$4 );
				fb_StrDelete( (FBSTRING*)&TMP$640$4 );
			}
			goto label$278;
			label$279:;
			{
				FBSTRING TMP$641$4;
				FBSTRING TMP$642$4;
				__builtin_memset( &TMP$642$4, 0, 24ll );
				__builtin_memset( &TMP$641$4, 0, 24ll );
				FBSTRING* vr$34 = fb_StrConcat( &TMP$641$4, (void*)"cvtsd2ss xmm7, ", 16ll, (void*)&SRC$1, -1ll );
				fb_StrAssign( (void*)&TMP$642$4, -1ll, (void*)vr$34, -1ll, 0 );
				OUTP( (char*)*(char**)&TMP$642$4 );
				fb_StrDelete( (FBSTRING*)&TMP$642$4 );
			}
			label$278:;
			fb$result$1 = -1ll;
		}
		label$277:;
		label$276:;
	}
	label$270:;
	label$267:;
	return fb$result$1;
}

static void _EMITADDF_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$643$1;
	int64 TMP$644$1;
	int64 TMP$665$1;
	label$280:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	static int64 SDSIZE$1;
	static int64 DDSIZE$1;
	static int64 RETURNSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$282;
	TMP$643$1 = 24ll;
	goto label$778;
	label$282:;
	TMP$643$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$778:;
	SDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$643$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$283;
	TMP$644$1 = 24ll;
	goto label$779;
	label$283:;
	TMP$644$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$779:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$644$1 * 56ll)) + 8ll);
	RETURNSIZE$1 = 0ll;
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$285;
	{
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
		RETURNSIZE$1 = DDSIZE$1;
	}
	goto label$284;
	label$285:;
	if( *(int64*)((uint8*)SVREG$1 + 32ll) != 0ll ) goto label$286;
	{
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
		RETURNSIZE$1 = SDSIZE$1;
	}
	label$286:;
	label$284:;
	if( RETURNSIZE$1 == 0ll ) goto label$288;
	{
		FBSTRING TMP$645$2;
		FBSTRING TMP$646$2;
		__builtin_memset( &TMP$646$2, 0, 24ll );
		FBSTRING* vr$13 = fb_LongintToStr( RETURNSIZE$1 );
		__builtin_memset( &TMP$645$2, 0, 24ll );
		FBSTRING* vr$16 = fb_StrConcat( &TMP$645$2, (void*)"sub esp, ", 10ll, (void*)vr$13, -1ll );
		fb_StrAssign( (void*)&TMP$646$2, -1ll, (void*)vr$16, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$646$2 );
		fb_StrDelete( (FBSTRING*)&TMP$646$2 );
	}
	label$288:;
	label$287:;
	if( RETURNSIZE$1 != 8ll ) goto label$290;
	{
		FBSTRING TMP$647$2;
		FBSTRING TMP$648$2;
		FBSTRING TMP$649$2;
		FBSTRING TMP$650$2;
		OUTP( (char*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$650$2, 0, 24ll );
		__builtin_memset( &TMP$647$2, 0, 24ll );
		FBSTRING* vr$22 = fb_StrConcat( &TMP$647$2, (void*)"movlpd ", 8ll, (void*)&OSTR$1, -1ll );
		__builtin_memset( &TMP$648$2, 0, 24ll );
		FBSTRING* vr$25 = fb_StrConcat( &TMP$648$2, (void*)vr$22, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$649$2, 0, 24ll );
		FBSTRING* vr$28 = fb_StrConcat( &TMP$649$2, (void*)vr$25, -1ll, (void*)"qword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$650$2, -1ll, (void*)vr$28, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$650$2 );
		fb_StrDelete( (FBSTRING*)&TMP$650$2 );
	}
	goto label$289;
	label$290:;
	if( RETURNSIZE$1 != 4ll ) goto label$291;
	{
		FBSTRING TMP$651$2;
		FBSTRING TMP$652$2;
		FBSTRING TMP$653$2;
		FBSTRING TMP$654$2;
		OUTP( (char*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$654$2, 0, 24ll );
		__builtin_memset( &TMP$651$2, 0, 24ll );
		FBSTRING* vr$34 = fb_StrConcat( &TMP$651$2, (void*)"movss ", 7ll, (void*)&OSTR$1, -1ll );
		__builtin_memset( &TMP$652$2, 0, 24ll );
		FBSTRING* vr$37 = fb_StrConcat( &TMP$652$2, (void*)vr$34, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$653$2, 0, 24ll );
		FBSTRING* vr$40 = fb_StrConcat( &TMP$653$2, (void*)vr$37, -1ll, (void*)"dword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$654$2, -1ll, (void*)vr$40, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$654$2 );
		fb_StrDelete( (FBSTRING*)&TMP$654$2 );
	}
	label$291:;
	label$289:;
	if( RETURNSIZE$1 == 0ll ) goto label$293;
	{
		FBSTRING TMP$655$2;
		FBSTRING TMP$656$2;
		__builtin_memset( &TMP$656$2, 0, 24ll );
		FBSTRING* vr$44 = fb_LongintToStr( RETURNSIZE$1 );
		__builtin_memset( &TMP$655$2, 0, 24ll );
		FBSTRING* vr$47 = fb_StrConcat( &TMP$655$2, (void*)"add esp, ", 10ll, (void*)vr$44, -1ll );
		fb_StrAssign( (void*)&TMP$656$2, -1ll, (void*)vr$47, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$656$2 );
		fb_StrDelete( (FBSTRING*)&TMP$656$2 );
	}
	label$293:;
	label$292:;
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"adds", 5ll, 0 );
	if( *(int64*)((uint8*)SVREG$1 + 40ll) == 0ll ) goto label$295;
	{
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"addp", 5ll, 0 );
		if( *(int64*)SVREG$1 == 4ll ) goto label$297;
		{
			HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, 0ll );
			if( SDSIZE$1 <= 4ll ) goto label$299;
			{
				FBSTRING TMP$659$4;
				FBSTRING TMP$660$4;
				__builtin_memset( &TMP$660$4, 0, 24ll );
				__builtin_memset( &TMP$659$4, 0, 24ll );
				FBSTRING* vr$55 = fb_StrConcat( &TMP$659$4, (void*)"movupd xmm7, ", 14ll, (void*)&SRC$1, -1ll );
				fb_StrAssign( (void*)&TMP$660$4, -1ll, (void*)vr$55, -1ll, 0 );
				OUTP( (char*)*(char**)&TMP$660$4 );
				fb_StrDelete( (FBSTRING*)&TMP$660$4 );
			}
			goto label$298;
			label$299:;
			{
				if( *(int64*)((uint8*)SVREG$1 + 40ll) != 2ll ) goto label$301;
				{
					FBSTRING TMP$661$5;
					FBSTRING TMP$662$5;
					__builtin_memset( &TMP$662$5, 0, 24ll );
					__builtin_memset( &TMP$661$5, 0, 24ll );
					FBSTRING* vr$62 = fb_StrConcat( &TMP$661$5, (void*)"movlps xmm7, ", 14ll, (void*)&SRC$1, -1ll );
					fb_StrAssign( (void*)&TMP$662$5, -1ll, (void*)vr$62, -1ll, 0 );
					OUTP( (char*)*(char**)&TMP$662$5 );
					fb_StrDelete( (FBSTRING*)&TMP$662$5 );
				}
				goto label$300;
				label$301:;
				{
					FBSTRING TMP$663$5;
					FBSTRING TMP$664$5;
					__builtin_memset( &TMP$664$5, 0, 24ll );
					__builtin_memset( &TMP$663$5, 0, 24ll );
					FBSTRING* vr$68 = fb_StrConcat( &TMP$663$5, (void*)"movups xmm7, ", 14ll, (void*)&SRC$1, -1ll );
					fb_StrAssign( (void*)&TMP$664$5, -1ll, (void*)vr$68, -1ll, 0 );
					OUTP( (char*)*(char**)&TMP$664$5 );
					fb_StrDelete( (FBSTRING*)&TMP$664$5 );
				}
				label$300:;
			}
			label$298:;
			fb_StrAssign( (void*)&SRC$1, -1ll, (void*)"xmm7", 5ll, 0 );
		}
		label$297:;
		label$296:;
	}
	label$295:;
	label$294:;
	int64 vr$71 = HEMITCONVERTOPERANDS_SSE( DVREG$1, SVREG$1 );
	if( vr$71 == 0ll ) goto label$303;
	{
		fb_StrAssign( (void*)&SRC$1, -1ll, (void*)"xmm7", 5ll, 0 );
	}
	label$303:;
	label$302:;
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$304;
	TMP$665$1 = 24ll;
	goto label$780;
	label$304:;
	TMP$665$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$780:;
	if( *(int64*)((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$665$1 * 56ll)) != 1ll ) goto label$306;
	{
		if( DDSIZE$1 <= 4ll ) goto label$308;
		{
			FBSTRING TMP$667$3;
			FBSTRING TMP$668$3;
			FBSTRING TMP$669$3;
			FBSTRING TMP$670$3;
			FBSTRING TMP$671$3;
			__builtin_memset( &TMP$671$3, 0, 24ll );
			__builtin_memset( &TMP$667$3, 0, 24ll );
			FBSTRING* vr$80 = fb_StrConcat( &TMP$667$3, (void*)&OSTR$1, -1ll, (void*)"d ", 3ll );
			__builtin_memset( &TMP$668$3, 0, 24ll );
			FBSTRING* vr$83 = fb_StrConcat( &TMP$668$3, (void*)vr$80, -1ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$669$3, 0, 24ll );
			FBSTRING* vr$86 = fb_StrConcat( &TMP$669$3, (void*)vr$83, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$670$3, 0, 24ll );
			FBSTRING* vr$89 = fb_StrConcat( &TMP$670$3, (void*)vr$86, -1ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$671$3, -1ll, (void*)vr$89, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$671$3 );
			fb_StrDelete( (FBSTRING*)&TMP$671$3 );
		}
		goto label$307;
		label$308:;
		{
			FBSTRING TMP$673$3;
			FBSTRING TMP$674$3;
			FBSTRING TMP$675$3;
			FBSTRING TMP$676$3;
			FBSTRING TMP$677$3;
			__builtin_memset( &TMP$677$3, 0, 24ll );
			__builtin_memset( &TMP$673$3, 0, 24ll );
			FBSTRING* vr$95 = fb_StrConcat( &TMP$673$3, (void*)&OSTR$1, -1ll, (void*)"s ", 3ll );
			__builtin_memset( &TMP$674$3, 0, 24ll );
			FBSTRING* vr$98 = fb_StrConcat( &TMP$674$3, (void*)vr$95, -1ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$675$3, 0, 24ll );
			FBSTRING* vr$101 = fb_StrConcat( &TMP$675$3, (void*)vr$98, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$676$3, 0, 24ll );
			FBSTRING* vr$104 = fb_StrConcat( &TMP$676$3, (void*)vr$101, -1ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$677$3, -1ll, (void*)vr$104, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$677$3 );
			fb_StrDelete( (FBSTRING*)&TMP$677$3 );
		}
		label$307:;
	}
	goto label$305;
	label$306:;
	{
		OUTP( (char*)" implement 'add integer to float'" );
	}
	label$305:;
	label$281:;
}

static void _EMITSUBF_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$679$1;
	int64 TMP$680$1;
	int64 TMP$701$1;
	label$309:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	static int64 SDSIZE$1;
	static int64 DDSIZE$1;
	static int64 RETURNSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$311;
	TMP$679$1 = 24ll;
	goto label$781;
	label$311:;
	TMP$679$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$781:;
	SDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$679$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$312;
	TMP$680$1 = 24ll;
	goto label$782;
	label$312:;
	TMP$680$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$782:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$680$1 * 56ll)) + 8ll);
	RETURNSIZE$1 = 0ll;
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$314;
	{
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
		RETURNSIZE$1 = DDSIZE$1;
	}
	goto label$313;
	label$314:;
	if( *(int64*)((uint8*)SVREG$1 + 32ll) != 0ll ) goto label$315;
	{
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
		RETURNSIZE$1 = SDSIZE$1;
	}
	label$315:;
	label$313:;
	if( RETURNSIZE$1 == 0ll ) goto label$317;
	{
		FBSTRING TMP$681$2;
		FBSTRING TMP$682$2;
		__builtin_memset( &TMP$682$2, 0, 24ll );
		FBSTRING* vr$13 = fb_LongintToStr( RETURNSIZE$1 );
		__builtin_memset( &TMP$681$2, 0, 24ll );
		FBSTRING* vr$16 = fb_StrConcat( &TMP$681$2, (void*)"sub esp, ", 10ll, (void*)vr$13, -1ll );
		fb_StrAssign( (void*)&TMP$682$2, -1ll, (void*)vr$16, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$682$2 );
		fb_StrDelete( (FBSTRING*)&TMP$682$2 );
	}
	label$317:;
	label$316:;
	if( RETURNSIZE$1 != 8ll ) goto label$319;
	{
		FBSTRING TMP$683$2;
		FBSTRING TMP$684$2;
		FBSTRING TMP$685$2;
		FBSTRING TMP$686$2;
		OUTP( (char*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$686$2, 0, 24ll );
		__builtin_memset( &TMP$683$2, 0, 24ll );
		FBSTRING* vr$22 = fb_StrConcat( &TMP$683$2, (void*)"movlpd ", 8ll, (void*)&OSTR$1, -1ll );
		__builtin_memset( &TMP$684$2, 0, 24ll );
		FBSTRING* vr$25 = fb_StrConcat( &TMP$684$2, (void*)vr$22, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$685$2, 0, 24ll );
		FBSTRING* vr$28 = fb_StrConcat( &TMP$685$2, (void*)vr$25, -1ll, (void*)"qword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$686$2, -1ll, (void*)vr$28, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$686$2 );
		fb_StrDelete( (FBSTRING*)&TMP$686$2 );
	}
	goto label$318;
	label$319:;
	if( RETURNSIZE$1 != 4ll ) goto label$320;
	{
		FBSTRING TMP$687$2;
		FBSTRING TMP$688$2;
		FBSTRING TMP$689$2;
		FBSTRING TMP$690$2;
		OUTP( (char*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$690$2, 0, 24ll );
		__builtin_memset( &TMP$687$2, 0, 24ll );
		FBSTRING* vr$34 = fb_StrConcat( &TMP$687$2, (void*)"movss ", 7ll, (void*)&OSTR$1, -1ll );
		__builtin_memset( &TMP$688$2, 0, 24ll );
		FBSTRING* vr$37 = fb_StrConcat( &TMP$688$2, (void*)vr$34, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$689$2, 0, 24ll );
		FBSTRING* vr$40 = fb_StrConcat( &TMP$689$2, (void*)vr$37, -1ll, (void*)"dword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$690$2, -1ll, (void*)vr$40, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$690$2 );
		fb_StrDelete( (FBSTRING*)&TMP$690$2 );
	}
	label$320:;
	label$318:;
	if( RETURNSIZE$1 == 0ll ) goto label$322;
	{
		FBSTRING TMP$691$2;
		FBSTRING TMP$692$2;
		__builtin_memset( &TMP$692$2, 0, 24ll );
		FBSTRING* vr$44 = fb_LongintToStr( RETURNSIZE$1 );
		__builtin_memset( &TMP$691$2, 0, 24ll );
		FBSTRING* vr$47 = fb_StrConcat( &TMP$691$2, (void*)"add esp, ", 10ll, (void*)vr$44, -1ll );
		fb_StrAssign( (void*)&TMP$692$2, -1ll, (void*)vr$47, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$692$2 );
		fb_StrDelete( (FBSTRING*)&TMP$692$2 );
	}
	label$322:;
	label$321:;
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"subs", 5ll, 0 );
	if( *(int64*)((uint8*)SVREG$1 + 40ll) == 0ll ) goto label$324;
	{
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"subp", 5ll, 0 );
		if( *(int64*)SVREG$1 == 4ll ) goto label$326;
		{
			HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, 0ll );
			if( SDSIZE$1 <= 4ll ) goto label$328;
			{
				FBSTRING TMP$695$4;
				FBSTRING TMP$696$4;
				__builtin_memset( &TMP$696$4, 0, 24ll );
				__builtin_memset( &TMP$695$4, 0, 24ll );
				FBSTRING* vr$55 = fb_StrConcat( &TMP$695$4, (void*)"movupd xmm7, ", 14ll, (void*)&SRC$1, -1ll );
				fb_StrAssign( (void*)&TMP$696$4, -1ll, (void*)vr$55, -1ll, 0 );
				OUTP( (char*)*(char**)&TMP$696$4 );
				fb_StrDelete( (FBSTRING*)&TMP$696$4 );
			}
			goto label$327;
			label$328:;
			{
				if( *(int64*)((uint8*)SVREG$1 + 40ll) != 2ll ) goto label$330;
				{
					FBSTRING TMP$697$5;
					FBSTRING TMP$698$5;
					__builtin_memset( &TMP$698$5, 0, 24ll );
					__builtin_memset( &TMP$697$5, 0, 24ll );
					FBSTRING* vr$62 = fb_StrConcat( &TMP$697$5, (void*)"movlps xmm7, ", 14ll, (void*)&SRC$1, -1ll );
					fb_StrAssign( (void*)&TMP$698$5, -1ll, (void*)vr$62, -1ll, 0 );
					OUTP( (char*)*(char**)&TMP$698$5 );
					fb_StrDelete( (FBSTRING*)&TMP$698$5 );
				}
				goto label$329;
				label$330:;
				{
					FBSTRING TMP$699$5;
					FBSTRING TMP$700$5;
					__builtin_memset( &TMP$700$5, 0, 24ll );
					__builtin_memset( &TMP$699$5, 0, 24ll );
					FBSTRING* vr$68 = fb_StrConcat( &TMP$699$5, (void*)"movups xmm7, ", 14ll, (void*)&SRC$1, -1ll );
					fb_StrAssign( (void*)&TMP$700$5, -1ll, (void*)vr$68, -1ll, 0 );
					OUTP( (char*)*(char**)&TMP$700$5 );
					fb_StrDelete( (FBSTRING*)&TMP$700$5 );
				}
				label$329:;
			}
			label$327:;
			fb_StrAssign( (void*)&SRC$1, -1ll, (void*)"xmm7", 5ll, 0 );
		}
		label$326:;
		label$325:;
	}
	label$324:;
	label$323:;
	int64 vr$71 = HEMITCONVERTOPERANDS_SSE( DVREG$1, SVREG$1 );
	if( vr$71 == 0ll ) goto label$332;
	{
		fb_StrAssign( (void*)&SRC$1, -1ll, (void*)"xmm7", 5ll, 0 );
	}
	label$332:;
	label$331:;
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$333;
	TMP$701$1 = 24ll;
	goto label$783;
	label$333:;
	TMP$701$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$783:;
	if( *(int64*)((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$701$1 * 56ll)) != 1ll ) goto label$335;
	{
		if( DDSIZE$1 <= 4ll ) goto label$337;
		{
			FBSTRING TMP$702$3;
			FBSTRING TMP$703$3;
			FBSTRING TMP$704$3;
			FBSTRING TMP$705$3;
			FBSTRING TMP$706$3;
			__builtin_memset( &TMP$706$3, 0, 24ll );
			__builtin_memset( &TMP$702$3, 0, 24ll );
			FBSTRING* vr$80 = fb_StrConcat( &TMP$702$3, (void*)&OSTR$1, -1ll, (void*)"d ", 3ll );
			__builtin_memset( &TMP$703$3, 0, 24ll );
			FBSTRING* vr$83 = fb_StrConcat( &TMP$703$3, (void*)vr$80, -1ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$704$3, 0, 24ll );
			FBSTRING* vr$86 = fb_StrConcat( &TMP$704$3, (void*)vr$83, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$705$3, 0, 24ll );
			FBSTRING* vr$89 = fb_StrConcat( &TMP$705$3, (void*)vr$86, -1ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$706$3, -1ll, (void*)vr$89, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$706$3 );
			fb_StrDelete( (FBSTRING*)&TMP$706$3 );
		}
		goto label$336;
		label$337:;
		{
			FBSTRING TMP$707$3;
			FBSTRING TMP$708$3;
			FBSTRING TMP$709$3;
			FBSTRING TMP$710$3;
			FBSTRING TMP$711$3;
			__builtin_memset( &TMP$711$3, 0, 24ll );
			__builtin_memset( &TMP$707$3, 0, 24ll );
			FBSTRING* vr$95 = fb_StrConcat( &TMP$707$3, (void*)&OSTR$1, -1ll, (void*)"s ", 3ll );
			__builtin_memset( &TMP$708$3, 0, 24ll );
			FBSTRING* vr$98 = fb_StrConcat( &TMP$708$3, (void*)vr$95, -1ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$709$3, 0, 24ll );
			FBSTRING* vr$101 = fb_StrConcat( &TMP$709$3, (void*)vr$98, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$710$3, 0, 24ll );
			FBSTRING* vr$104 = fb_StrConcat( &TMP$710$3, (void*)vr$101, -1ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$711$3, -1ll, (void*)vr$104, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$711$3 );
			fb_StrDelete( (FBSTRING*)&TMP$711$3 );
		}
		label$336:;
	}
	goto label$334;
	label$335:;
	{
		OUTP( (char*)" implement 'subtract integer from float'" );
	}
	label$334:;
	label$310:;
}

static void _EMITMULF_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$713$1;
	int64 TMP$714$1;
	int64 TMP$735$1;
	label$338:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	static int64 SDSIZE$1;
	static int64 DDSIZE$1;
	static int64 RETURNSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$340;
	TMP$713$1 = 24ll;
	goto label$784;
	label$340:;
	TMP$713$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$784:;
	SDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$713$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$341;
	TMP$714$1 = 24ll;
	goto label$785;
	label$341:;
	TMP$714$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$785:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$714$1 * 56ll)) + 8ll);
	RETURNSIZE$1 = 0ll;
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$343;
	{
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
		RETURNSIZE$1 = DDSIZE$1;
	}
	goto label$342;
	label$343:;
	if( *(int64*)((uint8*)SVREG$1 + 32ll) != 0ll ) goto label$344;
	{
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
		RETURNSIZE$1 = SDSIZE$1;
	}
	label$344:;
	label$342:;
	if( RETURNSIZE$1 == 0ll ) goto label$346;
	{
		FBSTRING TMP$715$2;
		FBSTRING TMP$716$2;
		__builtin_memset( &TMP$716$2, 0, 24ll );
		FBSTRING* vr$13 = fb_LongintToStr( RETURNSIZE$1 );
		__builtin_memset( &TMP$715$2, 0, 24ll );
		FBSTRING* vr$16 = fb_StrConcat( &TMP$715$2, (void*)"sub esp, ", 10ll, (void*)vr$13, -1ll );
		fb_StrAssign( (void*)&TMP$716$2, -1ll, (void*)vr$16, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$716$2 );
		fb_StrDelete( (FBSTRING*)&TMP$716$2 );
	}
	label$346:;
	label$345:;
	if( RETURNSIZE$1 != 8ll ) goto label$348;
	{
		FBSTRING TMP$717$2;
		FBSTRING TMP$718$2;
		FBSTRING TMP$719$2;
		FBSTRING TMP$720$2;
		OUTP( (char*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$720$2, 0, 24ll );
		__builtin_memset( &TMP$717$2, 0, 24ll );
		FBSTRING* vr$22 = fb_StrConcat( &TMP$717$2, (void*)"movlpd ", 8ll, (void*)&OSTR$1, -1ll );
		__builtin_memset( &TMP$718$2, 0, 24ll );
		FBSTRING* vr$25 = fb_StrConcat( &TMP$718$2, (void*)vr$22, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$719$2, 0, 24ll );
		FBSTRING* vr$28 = fb_StrConcat( &TMP$719$2, (void*)vr$25, -1ll, (void*)"qword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$720$2, -1ll, (void*)vr$28, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$720$2 );
		fb_StrDelete( (FBSTRING*)&TMP$720$2 );
	}
	goto label$347;
	label$348:;
	if( RETURNSIZE$1 != 4ll ) goto label$349;
	{
		FBSTRING TMP$721$2;
		FBSTRING TMP$722$2;
		FBSTRING TMP$723$2;
		FBSTRING TMP$724$2;
		OUTP( (char*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$724$2, 0, 24ll );
		__builtin_memset( &TMP$721$2, 0, 24ll );
		FBSTRING* vr$34 = fb_StrConcat( &TMP$721$2, (void*)"movss ", 7ll, (void*)&OSTR$1, -1ll );
		__builtin_memset( &TMP$722$2, 0, 24ll );
		FBSTRING* vr$37 = fb_StrConcat( &TMP$722$2, (void*)vr$34, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$723$2, 0, 24ll );
		FBSTRING* vr$40 = fb_StrConcat( &TMP$723$2, (void*)vr$37, -1ll, (void*)"dword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$724$2, -1ll, (void*)vr$40, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$724$2 );
		fb_StrDelete( (FBSTRING*)&TMP$724$2 );
	}
	label$349:;
	label$347:;
	if( RETURNSIZE$1 == 0ll ) goto label$351;
	{
		FBSTRING TMP$725$2;
		FBSTRING TMP$726$2;
		__builtin_memset( &TMP$726$2, 0, 24ll );
		FBSTRING* vr$44 = fb_LongintToStr( RETURNSIZE$1 );
		__builtin_memset( &TMP$725$2, 0, 24ll );
		FBSTRING* vr$47 = fb_StrConcat( &TMP$725$2, (void*)"add esp, ", 10ll, (void*)vr$44, -1ll );
		fb_StrAssign( (void*)&TMP$726$2, -1ll, (void*)vr$47, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$726$2 );
		fb_StrDelete( (FBSTRING*)&TMP$726$2 );
	}
	label$351:;
	label$350:;
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"muls", 5ll, 0 );
	if( *(int64*)((uint8*)SVREG$1 + 40ll) == 0ll ) goto label$353;
	{
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"mulp", 5ll, 0 );
		if( *(int64*)SVREG$1 == 4ll ) goto label$355;
		{
			HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, 0ll );
			if( SDSIZE$1 <= 4ll ) goto label$357;
			{
				FBSTRING TMP$729$4;
				FBSTRING TMP$730$4;
				__builtin_memset( &TMP$730$4, 0, 24ll );
				__builtin_memset( &TMP$729$4, 0, 24ll );
				FBSTRING* vr$55 = fb_StrConcat( &TMP$729$4, (void*)"movupd xmm7, ", 14ll, (void*)&SRC$1, -1ll );
				fb_StrAssign( (void*)&TMP$730$4, -1ll, (void*)vr$55, -1ll, 0 );
				OUTP( (char*)*(char**)&TMP$730$4 );
				fb_StrDelete( (FBSTRING*)&TMP$730$4 );
			}
			goto label$356;
			label$357:;
			{
				if( *(int64*)((uint8*)SVREG$1 + 40ll) != 2ll ) goto label$359;
				{
					FBSTRING TMP$731$5;
					FBSTRING TMP$732$5;
					__builtin_memset( &TMP$732$5, 0, 24ll );
					__builtin_memset( &TMP$731$5, 0, 24ll );
					FBSTRING* vr$62 = fb_StrConcat( &TMP$731$5, (void*)"movlps xmm7, ", 14ll, (void*)&SRC$1, -1ll );
					fb_StrAssign( (void*)&TMP$732$5, -1ll, (void*)vr$62, -1ll, 0 );
					OUTP( (char*)*(char**)&TMP$732$5 );
					fb_StrDelete( (FBSTRING*)&TMP$732$5 );
				}
				goto label$358;
				label$359:;
				{
					FBSTRING TMP$733$5;
					FBSTRING TMP$734$5;
					__builtin_memset( &TMP$734$5, 0, 24ll );
					__builtin_memset( &TMP$733$5, 0, 24ll );
					FBSTRING* vr$68 = fb_StrConcat( &TMP$733$5, (void*)"movups xmm7, ", 14ll, (void*)&SRC$1, -1ll );
					fb_StrAssign( (void*)&TMP$734$5, -1ll, (void*)vr$68, -1ll, 0 );
					OUTP( (char*)*(char**)&TMP$734$5 );
					fb_StrDelete( (FBSTRING*)&TMP$734$5 );
				}
				label$358:;
			}
			label$356:;
			fb_StrAssign( (void*)&SRC$1, -1ll, (void*)"xmm7", 5ll, 0 );
		}
		label$355:;
		label$354:;
	}
	label$353:;
	label$352:;
	int64 vr$71 = HEMITCONVERTOPERANDS_SSE( DVREG$1, SVREG$1 );
	if( vr$71 == 0ll ) goto label$361;
	{
		fb_StrAssign( (void*)&SRC$1, -1ll, (void*)"xmm7", 5ll, 0 );
	}
	label$361:;
	label$360:;
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$362;
	TMP$735$1 = 24ll;
	goto label$786;
	label$362:;
	TMP$735$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$786:;
	if( *(int64*)((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$735$1 * 56ll)) != 1ll ) goto label$364;
	{
		if( DDSIZE$1 <= 4ll ) goto label$366;
		{
			FBSTRING TMP$736$3;
			FBSTRING TMP$737$3;
			FBSTRING TMP$738$3;
			FBSTRING TMP$739$3;
			FBSTRING TMP$740$3;
			__builtin_memset( &TMP$740$3, 0, 24ll );
			__builtin_memset( &TMP$736$3, 0, 24ll );
			FBSTRING* vr$80 = fb_StrConcat( &TMP$736$3, (void*)&OSTR$1, -1ll, (void*)"d ", 3ll );
			__builtin_memset( &TMP$737$3, 0, 24ll );
			FBSTRING* vr$83 = fb_StrConcat( &TMP$737$3, (void*)vr$80, -1ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$738$3, 0, 24ll );
			FBSTRING* vr$86 = fb_StrConcat( &TMP$738$3, (void*)vr$83, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$739$3, 0, 24ll );
			FBSTRING* vr$89 = fb_StrConcat( &TMP$739$3, (void*)vr$86, -1ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$740$3, -1ll, (void*)vr$89, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$740$3 );
			fb_StrDelete( (FBSTRING*)&TMP$740$3 );
		}
		goto label$365;
		label$366:;
		{
			FBSTRING TMP$741$3;
			FBSTRING TMP$742$3;
			FBSTRING TMP$743$3;
			FBSTRING TMP$744$3;
			FBSTRING TMP$745$3;
			__builtin_memset( &TMP$745$3, 0, 24ll );
			__builtin_memset( &TMP$741$3, 0, 24ll );
			FBSTRING* vr$95 = fb_StrConcat( &TMP$741$3, (void*)&OSTR$1, -1ll, (void*)"s ", 3ll );
			__builtin_memset( &TMP$742$3, 0, 24ll );
			FBSTRING* vr$98 = fb_StrConcat( &TMP$742$3, (void*)vr$95, -1ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$743$3, 0, 24ll );
			FBSTRING* vr$101 = fb_StrConcat( &TMP$743$3, (void*)vr$98, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$744$3, 0, 24ll );
			FBSTRING* vr$104 = fb_StrConcat( &TMP$744$3, (void*)vr$101, -1ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$745$3, -1ll, (void*)vr$104, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$745$3 );
			fb_StrDelete( (FBSTRING*)&TMP$745$3 );
		}
		label$365:;
	}
	goto label$363;
	label$364:;
	{
		OUTP( (char*)" implement 'multiply float by integer'" );
	}
	label$363:;
	label$339:;
}

static void _EMITDIVF_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$747$1;
	int64 TMP$748$1;
	int64 TMP$769$1;
	label$367:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	static int64 SDSIZE$1;
	static int64 DDSIZE$1;
	static int64 RETURNSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$369;
	TMP$747$1 = 24ll;
	goto label$787;
	label$369:;
	TMP$747$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$787:;
	SDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$747$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$370;
	TMP$748$1 = 24ll;
	goto label$788;
	label$370:;
	TMP$748$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$788:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$748$1 * 56ll)) + 8ll);
	RETURNSIZE$1 = 0ll;
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$372;
	{
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
		RETURNSIZE$1 = DDSIZE$1;
	}
	goto label$371;
	label$372:;
	if( *(int64*)((uint8*)SVREG$1 + 32ll) != 0ll ) goto label$373;
	{
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
		RETURNSIZE$1 = SDSIZE$1;
	}
	label$373:;
	label$371:;
	if( RETURNSIZE$1 == 0ll ) goto label$375;
	{
		FBSTRING TMP$749$2;
		FBSTRING TMP$750$2;
		__builtin_memset( &TMP$750$2, 0, 24ll );
		FBSTRING* vr$13 = fb_LongintToStr( RETURNSIZE$1 );
		__builtin_memset( &TMP$749$2, 0, 24ll );
		FBSTRING* vr$16 = fb_StrConcat( &TMP$749$2, (void*)"sub esp, ", 10ll, (void*)vr$13, -1ll );
		fb_StrAssign( (void*)&TMP$750$2, -1ll, (void*)vr$16, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$750$2 );
		fb_StrDelete( (FBSTRING*)&TMP$750$2 );
	}
	label$375:;
	label$374:;
	if( RETURNSIZE$1 != 8ll ) goto label$377;
	{
		FBSTRING TMP$751$2;
		FBSTRING TMP$752$2;
		FBSTRING TMP$753$2;
		FBSTRING TMP$754$2;
		OUTP( (char*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$754$2, 0, 24ll );
		__builtin_memset( &TMP$751$2, 0, 24ll );
		FBSTRING* vr$22 = fb_StrConcat( &TMP$751$2, (void*)"movlpd ", 8ll, (void*)&OSTR$1, -1ll );
		__builtin_memset( &TMP$752$2, 0, 24ll );
		FBSTRING* vr$25 = fb_StrConcat( &TMP$752$2, (void*)vr$22, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$753$2, 0, 24ll );
		FBSTRING* vr$28 = fb_StrConcat( &TMP$753$2, (void*)vr$25, -1ll, (void*)"qword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$754$2, -1ll, (void*)vr$28, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$754$2 );
		fb_StrDelete( (FBSTRING*)&TMP$754$2 );
	}
	goto label$376;
	label$377:;
	if( RETURNSIZE$1 != 4ll ) goto label$378;
	{
		FBSTRING TMP$755$2;
		FBSTRING TMP$756$2;
		FBSTRING TMP$757$2;
		FBSTRING TMP$758$2;
		OUTP( (char*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$758$2, 0, 24ll );
		__builtin_memset( &TMP$755$2, 0, 24ll );
		FBSTRING* vr$34 = fb_StrConcat( &TMP$755$2, (void*)"movss ", 7ll, (void*)&OSTR$1, -1ll );
		__builtin_memset( &TMP$756$2, 0, 24ll );
		FBSTRING* vr$37 = fb_StrConcat( &TMP$756$2, (void*)vr$34, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$757$2, 0, 24ll );
		FBSTRING* vr$40 = fb_StrConcat( &TMP$757$2, (void*)vr$37, -1ll, (void*)"dword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$758$2, -1ll, (void*)vr$40, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$758$2 );
		fb_StrDelete( (FBSTRING*)&TMP$758$2 );
	}
	label$378:;
	label$376:;
	if( RETURNSIZE$1 == 0ll ) goto label$380;
	{
		FBSTRING TMP$759$2;
		FBSTRING TMP$760$2;
		__builtin_memset( &TMP$760$2, 0, 24ll );
		FBSTRING* vr$44 = fb_LongintToStr( RETURNSIZE$1 );
		__builtin_memset( &TMP$759$2, 0, 24ll );
		FBSTRING* vr$47 = fb_StrConcat( &TMP$759$2, (void*)"add esp, ", 10ll, (void*)vr$44, -1ll );
		fb_StrAssign( (void*)&TMP$760$2, -1ll, (void*)vr$47, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$760$2 );
		fb_StrDelete( (FBSTRING*)&TMP$760$2 );
	}
	label$380:;
	label$379:;
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"divs", 5ll, 0 );
	if( *(int64*)((uint8*)SVREG$1 + 40ll) == 0ll ) goto label$382;
	{
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"divp", 5ll, 0 );
		if( *(int64*)SVREG$1 == 4ll ) goto label$384;
		{
			HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, 0ll );
			if( SDSIZE$1 <= 4ll ) goto label$386;
			{
				FBSTRING TMP$763$4;
				FBSTRING TMP$764$4;
				__builtin_memset( &TMP$764$4, 0, 24ll );
				__builtin_memset( &TMP$763$4, 0, 24ll );
				FBSTRING* vr$55 = fb_StrConcat( &TMP$763$4, (void*)"movupd xmm7, ", 14ll, (void*)&SRC$1, -1ll );
				fb_StrAssign( (void*)&TMP$764$4, -1ll, (void*)vr$55, -1ll, 0 );
				OUTP( (char*)*(char**)&TMP$764$4 );
				fb_StrDelete( (FBSTRING*)&TMP$764$4 );
			}
			goto label$385;
			label$386:;
			{
				if( *(int64*)((uint8*)SVREG$1 + 40ll) != 2ll ) goto label$388;
				{
					FBSTRING TMP$765$5;
					FBSTRING TMP$766$5;
					__builtin_memset( &TMP$766$5, 0, 24ll );
					__builtin_memset( &TMP$765$5, 0, 24ll );
					FBSTRING* vr$62 = fb_StrConcat( &TMP$765$5, (void*)"movlps xmm7, ", 14ll, (void*)&SRC$1, -1ll );
					fb_StrAssign( (void*)&TMP$766$5, -1ll, (void*)vr$62, -1ll, 0 );
					OUTP( (char*)*(char**)&TMP$766$5 );
					fb_StrDelete( (FBSTRING*)&TMP$766$5 );
				}
				goto label$387;
				label$388:;
				{
					FBSTRING TMP$767$5;
					FBSTRING TMP$768$5;
					__builtin_memset( &TMP$768$5, 0, 24ll );
					__builtin_memset( &TMP$767$5, 0, 24ll );
					FBSTRING* vr$68 = fb_StrConcat( &TMP$767$5, (void*)"movups xmm7, ", 14ll, (void*)&SRC$1, -1ll );
					fb_StrAssign( (void*)&TMP$768$5, -1ll, (void*)vr$68, -1ll, 0 );
					OUTP( (char*)*(char**)&TMP$768$5 );
					fb_StrDelete( (FBSTRING*)&TMP$768$5 );
				}
				label$387:;
			}
			label$385:;
			fb_StrAssign( (void*)&SRC$1, -1ll, (void*)"xmm7", 5ll, 0 );
		}
		label$384:;
		label$383:;
	}
	label$382:;
	label$381:;
	int64 vr$71 = HEMITCONVERTOPERANDS_SSE( DVREG$1, SVREG$1 );
	if( vr$71 == 0ll ) goto label$390;
	{
		fb_StrAssign( (void*)&SRC$1, -1ll, (void*)"xmm7", 5ll, 0 );
	}
	label$390:;
	label$389:;
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$391;
	TMP$769$1 = 24ll;
	goto label$789;
	label$391:;
	TMP$769$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$789:;
	if( *(int64*)((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$769$1 * 56ll)) != 1ll ) goto label$393;
	{
		if( DDSIZE$1 <= 4ll ) goto label$395;
		{
			FBSTRING TMP$770$3;
			FBSTRING TMP$771$3;
			FBSTRING TMP$772$3;
			FBSTRING TMP$773$3;
			FBSTRING TMP$774$3;
			__builtin_memset( &TMP$774$3, 0, 24ll );
			__builtin_memset( &TMP$770$3, 0, 24ll );
			FBSTRING* vr$80 = fb_StrConcat( &TMP$770$3, (void*)&OSTR$1, -1ll, (void*)"d ", 3ll );
			__builtin_memset( &TMP$771$3, 0, 24ll );
			FBSTRING* vr$83 = fb_StrConcat( &TMP$771$3, (void*)vr$80, -1ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$772$3, 0, 24ll );
			FBSTRING* vr$86 = fb_StrConcat( &TMP$772$3, (void*)vr$83, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$773$3, 0, 24ll );
			FBSTRING* vr$89 = fb_StrConcat( &TMP$773$3, (void*)vr$86, -1ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$774$3, -1ll, (void*)vr$89, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$774$3 );
			fb_StrDelete( (FBSTRING*)&TMP$774$3 );
		}
		goto label$394;
		label$395:;
		{
			FBSTRING TMP$775$3;
			FBSTRING TMP$776$3;
			FBSTRING TMP$777$3;
			FBSTRING TMP$778$3;
			FBSTRING TMP$779$3;
			__builtin_memset( &TMP$779$3, 0, 24ll );
			__builtin_memset( &TMP$775$3, 0, 24ll );
			FBSTRING* vr$95 = fb_StrConcat( &TMP$775$3, (void*)&OSTR$1, -1ll, (void*)"s ", 3ll );
			__builtin_memset( &TMP$776$3, 0, 24ll );
			FBSTRING* vr$98 = fb_StrConcat( &TMP$776$3, (void*)vr$95, -1ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$777$3, 0, 24ll );
			FBSTRING* vr$101 = fb_StrConcat( &TMP$777$3, (void*)vr$98, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$778$3, 0, 24ll );
			FBSTRING* vr$104 = fb_StrConcat( &TMP$778$3, (void*)vr$101, -1ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$779$3, -1ll, (void*)vr$104, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$779$3 );
			fb_StrDelete( (FBSTRING*)&TMP$779$3 );
		}
		label$394:;
	}
	goto label$392;
	label$393:;
	{
		OUTP( (char*)" implement 'divide float by integer'" );
	}
	label$392:;
	label$368:;
}

static void _EMITATN2_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$781$1;
	int64 TMP$782$1;
	label$396:;
	static FBSTRING SRC$1;
	static FBSTRING DST$1;
	static FBSTRING OSTR$1;
	static int64 SDSIZE$1;
	static int64 DDSIZE$1;
	static int64 ADJUSTSTACK$1;
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$398;
	TMP$781$1 = 24ll;
	goto label$790;
	label$398:;
	TMP$781$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$790:;
	SDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$781$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$399;
	TMP$782$1 = 24ll;
	goto label$791;
	label$399:;
	TMP$782$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$791:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$782$1 * 56ll)) + 8ll);
	ADJUSTSTACK$1 = 0ll;
	if( *(int64*)DVREG$1 != 4ll ) goto label$401;
	{
		OUTP( (char*)"sub esp, 8" );
		ADJUSTSTACK$1 = -1ll;
		if( DDSIZE$1 <= 4ll ) goto label$403;
		{
			FBSTRING TMP$783$3;
			FBSTRING TMP$784$3;
			__builtin_memset( &TMP$784$3, 0, 24ll );
			__builtin_memset( &TMP$783$3, 0, 24ll );
			FBSTRING* vr$14 = fb_StrConcat( &TMP$783$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$784$3, -1ll, (void*)vr$14, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$784$3 );
			fb_StrDelete( (FBSTRING*)&TMP$784$3 );
			OUTP( (char*)"fld qword ptr [esp]" );
		}
		goto label$402;
		label$403:;
		{
			FBSTRING TMP$785$3;
			FBSTRING TMP$786$3;
			__builtin_memset( &TMP$786$3, 0, 24ll );
			__builtin_memset( &TMP$785$3, 0, 24ll );
			FBSTRING* vr$20 = fb_StrConcat( &TMP$785$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$786$3, -1ll, (void*)vr$20, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$786$3 );
			fb_StrDelete( (FBSTRING*)&TMP$786$3 );
			OUTP( (char*)"fld dword ptr [esp]" );
		}
		label$402:;
	}
	goto label$400;
	label$401:;
	{
		FBSTRING TMP$787$2;
		FBSTRING TMP$788$2;
		__builtin_memset( &TMP$788$2, 0, 24ll );
		__builtin_memset( &TMP$787$2, 0, 24ll );
		FBSTRING* vr$26 = fb_StrConcat( &TMP$787$2, (void*)"fld ", 5ll, (void*)&DST$1, -1ll );
		fb_StrAssign( (void*)&TMP$788$2, -1ll, (void*)vr$26, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$788$2 );
		fb_StrDelete( (FBSTRING*)&TMP$788$2 );
	}
	label$400:;
	if( *(int64*)SVREG$1 != 4ll ) goto label$405;
	{
		if( ADJUSTSTACK$1 != 0ll ) goto label$407;
		{
			OUTP( (char*)"sub esp, 8" );
			ADJUSTSTACK$1 = -1ll;
		}
		label$407:;
		label$406:;
		if( SDSIZE$1 <= 4ll ) goto label$409;
		{
			FBSTRING TMP$789$3;
			FBSTRING TMP$790$3;
			__builtin_memset( &TMP$790$3, 0, 24ll );
			__builtin_memset( &TMP$789$3, 0, 24ll );
			FBSTRING* vr$33 = fb_StrConcat( &TMP$789$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$790$3, -1ll, (void*)vr$33, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$790$3 );
			fb_StrDelete( (FBSTRING*)&TMP$790$3 );
			OUTP( (char*)"fld qword ptr [esp]" );
		}
		goto label$408;
		label$409:;
		{
			FBSTRING TMP$791$3;
			FBSTRING TMP$792$3;
			__builtin_memset( &TMP$792$3, 0, 24ll );
			__builtin_memset( &TMP$791$3, 0, 24ll );
			FBSTRING* vr$39 = fb_StrConcat( &TMP$791$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$792$3, -1ll, (void*)vr$39, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$792$3 );
			fb_StrDelete( (FBSTRING*)&TMP$792$3 );
			OUTP( (char*)"fld dword ptr [esp]" );
		}
		label$408:;
	}
	goto label$404;
	label$405:;
	{
		FBSTRING TMP$793$2;
		FBSTRING TMP$794$2;
		__builtin_memset( &TMP$794$2, 0, 24ll );
		__builtin_memset( &TMP$793$2, 0, 24ll );
		FBSTRING* vr$45 = fb_StrConcat( &TMP$793$2, (void*)"fld ", 5ll, (void*)&SRC$1, -1ll );
		fb_StrAssign( (void*)&TMP$794$2, -1ll, (void*)vr$45, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$794$2 );
		fb_StrDelete( (FBSTRING*)&TMP$794$2 );
	}
	label$404:;
	OUTP( (char*)"fpatan" );
	if( DDSIZE$1 <= 4ll ) goto label$411;
	{
		FBSTRING TMP$796$2;
		FBSTRING TMP$797$2;
		FBSTRING TMP$798$2;
		FBSTRING TMP$799$2;
		OUTP( (char*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$799$2, 0, 24ll );
		__builtin_memset( &TMP$796$2, 0, 24ll );
		FBSTRING* vr$51 = fb_StrConcat( &TMP$796$2, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$797$2, 0, 24ll );
		FBSTRING* vr$54 = fb_StrConcat( &TMP$797$2, (void*)vr$51, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$798$2, 0, 24ll );
		FBSTRING* vr$57 = fb_StrConcat( &TMP$798$2, (void*)vr$54, -1ll, (void*)"qword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$799$2, -1ll, (void*)vr$57, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$799$2 );
		fb_StrDelete( (FBSTRING*)&TMP$799$2 );
	}
	goto label$410;
	label$411:;
	{
		FBSTRING TMP$800$2;
		FBSTRING TMP$801$2;
		FBSTRING TMP$802$2;
		FBSTRING TMP$803$2;
		OUTP( (char*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$803$2, 0, 24ll );
		__builtin_memset( &TMP$800$2, 0, 24ll );
		FBSTRING* vr$63 = fb_StrConcat( &TMP$800$2, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$801$2, 0, 24ll );
		FBSTRING* vr$66 = fb_StrConcat( &TMP$801$2, (void*)vr$63, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$802$2, 0, 24ll );
		FBSTRING* vr$69 = fb_StrConcat( &TMP$802$2, (void*)vr$66, -1ll, (void*)"dword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$803$2, -1ll, (void*)vr$69, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$803$2 );
		fb_StrDelete( (FBSTRING*)&TMP$803$2 );
	}
	label$410:;
	if( ADJUSTSTACK$1 == 0ll ) goto label$413;
	{
		OUTP( (char*)"add esp, 8" );
	}
	label$413:;
	label$412:;
	label$397:;
}

static void _EMITPOW_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$414:;
	static FBSTRING SRC$1;
	static FBSTRING DST$1;
	static FBSTRING OSTR$1;
	static int64 SDSIZE$1;
	static int64 DDSIZE$1;
	static int64 ADJUSTSTACK$1;
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	ADJUSTSTACK$1 = 0ll;
	if( *(int64*)DVREG$1 != 4ll ) goto label$417;
	{
		OUTP( (char*)"sub esp, 8" );
		ADJUSTSTACK$1 = -1ll;
		if( DDSIZE$1 <= 4ll ) goto label$419;
		{
			FBSTRING TMP$804$3;
			FBSTRING TMP$805$3;
			__builtin_memset( &TMP$805$3, 0, 24ll );
			__builtin_memset( &TMP$804$3, 0, 24ll );
			FBSTRING* vr$4 = fb_StrConcat( &TMP$804$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$805$3, -1ll, (void*)vr$4, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$805$3 );
			fb_StrDelete( (FBSTRING*)&TMP$805$3 );
			OUTP( (char*)"fld qword ptr [esp]" );
		}
		goto label$418;
		label$419:;
		{
			FBSTRING TMP$806$3;
			FBSTRING TMP$807$3;
			__builtin_memset( &TMP$807$3, 0, 24ll );
			__builtin_memset( &TMP$806$3, 0, 24ll );
			FBSTRING* vr$10 = fb_StrConcat( &TMP$806$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$807$3, -1ll, (void*)vr$10, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$807$3 );
			fb_StrDelete( (FBSTRING*)&TMP$807$3 );
			OUTP( (char*)"fld dword ptr [esp]" );
		}
		label$418:;
	}
	goto label$416;
	label$417:;
	{
		FBSTRING TMP$808$2;
		FBSTRING TMP$809$2;
		__builtin_memset( &TMP$809$2, 0, 24ll );
		__builtin_memset( &TMP$808$2, 0, 24ll );
		FBSTRING* vr$16 = fb_StrConcat( &TMP$808$2, (void*)"fld ", 5ll, (void*)&DST$1, -1ll );
		fb_StrAssign( (void*)&TMP$809$2, -1ll, (void*)vr$16, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$809$2 );
		fb_StrDelete( (FBSTRING*)&TMP$809$2 );
	}
	label$416:;
	if( *(int64*)SVREG$1 != 4ll ) goto label$421;
	{
		if( ADJUSTSTACK$1 != 0ll ) goto label$423;
		{
			OUTP( (char*)"sub esp, 8" );
			ADJUSTSTACK$1 = -1ll;
		}
		label$423:;
		label$422:;
		if( SDSIZE$1 <= 4ll ) goto label$425;
		{
			FBSTRING TMP$810$3;
			FBSTRING TMP$811$3;
			__builtin_memset( &TMP$811$3, 0, 24ll );
			__builtin_memset( &TMP$810$3, 0, 24ll );
			FBSTRING* vr$23 = fb_StrConcat( &TMP$810$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$811$3, -1ll, (void*)vr$23, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$811$3 );
			fb_StrDelete( (FBSTRING*)&TMP$811$3 );
			OUTP( (char*)"fld qword ptr [esp]" );
		}
		goto label$424;
		label$425:;
		{
			FBSTRING TMP$812$3;
			FBSTRING TMP$813$3;
			__builtin_memset( &TMP$813$3, 0, 24ll );
			__builtin_memset( &TMP$812$3, 0, 24ll );
			FBSTRING* vr$29 = fb_StrConcat( &TMP$812$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$813$3, -1ll, (void*)vr$29, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$813$3 );
			fb_StrDelete( (FBSTRING*)&TMP$813$3 );
			OUTP( (char*)"fld dword ptr [esp]" );
		}
		label$424:;
	}
	goto label$420;
	label$421:;
	{
		FBSTRING TMP$814$2;
		FBSTRING TMP$815$2;
		__builtin_memset( &TMP$815$2, 0, 24ll );
		__builtin_memset( &TMP$814$2, 0, 24ll );
		FBSTRING* vr$35 = fb_StrConcat( &TMP$814$2, (void*)"fld ", 5ll, (void*)&SRC$1, -1ll );
		fb_StrAssign( (void*)&TMP$815$2, -1ll, (void*)vr$35, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$815$2 );
		fb_StrDelete( (FBSTRING*)&TMP$815$2 );
	}
	label$420:;
	OUTP( (char*)"fabs" );
	OUTP( (char*)"fyl2x" );
	OUTP( (char*)"fld st(0)" );
	OUTP( (char*)"frndint" );
	OUTP( (char*)"fsub st(1), st(0)" );
	OUTP( (char*)"fxch" );
	OUTP( (char*)"f2xm1" );
	OUTP( (char*)"fld1" );
	OUTP( (char*)"faddp" );
	OUTP( (char*)"fscale" );
	OUTP( (char*)"fstp st(1)" );
	if( DDSIZE$1 <= 4ll ) goto label$427;
	{
		FBSTRING TMP$825$2;
		FBSTRING TMP$826$2;
		FBSTRING TMP$827$2;
		FBSTRING TMP$828$2;
		OUTP( (char*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$828$2, 0, 24ll );
		__builtin_memset( &TMP$825$2, 0, 24ll );
		FBSTRING* vr$41 = fb_StrConcat( &TMP$825$2, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$826$2, 0, 24ll );
		FBSTRING* vr$44 = fb_StrConcat( &TMP$826$2, (void*)vr$41, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$827$2, 0, 24ll );
		FBSTRING* vr$47 = fb_StrConcat( &TMP$827$2, (void*)vr$44, -1ll, (void*)"qword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$828$2, -1ll, (void*)vr$47, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$828$2 );
		fb_StrDelete( (FBSTRING*)&TMP$828$2 );
	}
	goto label$426;
	label$427:;
	{
		FBSTRING TMP$829$2;
		FBSTRING TMP$830$2;
		FBSTRING TMP$831$2;
		FBSTRING TMP$832$2;
		OUTP( (char*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$832$2, 0, 24ll );
		__builtin_memset( &TMP$829$2, 0, 24ll );
		FBSTRING* vr$53 = fb_StrConcat( &TMP$829$2, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$830$2, 0, 24ll );
		FBSTRING* vr$56 = fb_StrConcat( &TMP$830$2, (void*)vr$53, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$831$2, 0, 24ll );
		FBSTRING* vr$59 = fb_StrConcat( &TMP$831$2, (void*)vr$56, -1ll, (void*)"dword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$832$2, -1ll, (void*)vr$59, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$832$2 );
		fb_StrDelete( (FBSTRING*)&TMP$832$2 );
	}
	label$426:;
	if( ADJUSTSTACK$1 == 0ll ) goto label$429;
	{
		OUTP( (char*)"add esp, 8" );
	}
	label$429:;
	label$428:;
	label$415:;
}

static void HCMPF_SSE( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, char* MNEMONIC$1, char* MASK$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$833$1;
	int64 TMP$834$1;
	label$430:;
	static FBSTRING RNAME$1;
	static FBSTRING RNAME8$1;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	static FBSTRING LNAME$1;
	static int64 ISEAXFREE$1;
	static int64 ISEDXFREE$1;
	static int64 SDSIZE$1;
	static int64 DDSIZE$1;
	static int64 RETURNSIZE$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$432;
	TMP$833$1 = 24ll;
	goto label$792;
	label$432:;
	TMP$833$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$792:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$833$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$433;
	TMP$834$1 = 24ll;
	goto label$793;
	label$433:;
	TMP$834$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$793:;
	SDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$834$1 * 56ll)) + 8ll);
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( LABEL$1 != (struct $8FBSYMBOL*)0ull ) goto label$435;
	{
		char* vr$10 = SYMBUNIQUELABEL(  );
		fb_StrAssign( (void*)&LNAME$1, -1ll, (void*)vr$10, 0ll, 0 );
	}
	goto label$434;
	label$435:;
	{
		char* vr$11 = SYMBGETMANGLEDNAME( LABEL$1 );
		fb_StrAssign( (void*)&LNAME$1, -1ll, (void*)vr$11, 0ll, 0 );
	}
	label$434:;
	RETURNSIZE$1 = 0ll;
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$437;
	{
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
		RETURNSIZE$1 = DDSIZE$1;
	}
	goto label$436;
	label$437:;
	if( *(int64*)((uint8*)SVREG$1 + 32ll) != 0ll ) goto label$438;
	{
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
		RETURNSIZE$1 = SDSIZE$1;
	}
	label$438:;
	label$436:;
	if( RETURNSIZE$1 == 0ll ) goto label$440;
	{
		FBSTRING TMP$835$2;
		FBSTRING TMP$836$2;
		__builtin_memset( &TMP$836$2, 0, 24ll );
		FBSTRING* vr$15 = fb_LongintToStr( RETURNSIZE$1 );
		__builtin_memset( &TMP$835$2, 0, 24ll );
		FBSTRING* vr$18 = fb_StrConcat( &TMP$835$2, (void*)"sub esp, ", 10ll, (void*)vr$15, -1ll );
		fb_StrAssign( (void*)&TMP$836$2, -1ll, (void*)vr$18, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$836$2 );
		fb_StrDelete( (FBSTRING*)&TMP$836$2 );
	}
	label$440:;
	label$439:;
	if( RETURNSIZE$1 != 8ll ) goto label$442;
	{
		FBSTRING TMP$837$2;
		FBSTRING TMP$838$2;
		FBSTRING TMP$839$2;
		FBSTRING TMP$840$2;
		OUTP( (char*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$840$2, 0, 24ll );
		__builtin_memset( &TMP$837$2, 0, 24ll );
		FBSTRING* vr$24 = fb_StrConcat( &TMP$837$2, (void*)"movlpd ", 8ll, (void*)&OSTR$1, -1ll );
		__builtin_memset( &TMP$838$2, 0, 24ll );
		FBSTRING* vr$27 = fb_StrConcat( &TMP$838$2, (void*)vr$24, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$839$2, 0, 24ll );
		FBSTRING* vr$30 = fb_StrConcat( &TMP$839$2, (void*)vr$27, -1ll, (void*)"qword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$840$2, -1ll, (void*)vr$30, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$840$2 );
		fb_StrDelete( (FBSTRING*)&TMP$840$2 );
	}
	goto label$441;
	label$442:;
	if( RETURNSIZE$1 != 4ll ) goto label$443;
	{
		FBSTRING TMP$841$2;
		FBSTRING TMP$842$2;
		FBSTRING TMP$843$2;
		FBSTRING TMP$844$2;
		OUTP( (char*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$844$2, 0, 24ll );
		__builtin_memset( &TMP$841$2, 0, 24ll );
		FBSTRING* vr$36 = fb_StrConcat( &TMP$841$2, (void*)"movss ", 7ll, (void*)&OSTR$1, -1ll );
		__builtin_memset( &TMP$842$2, 0, 24ll );
		FBSTRING* vr$39 = fb_StrConcat( &TMP$842$2, (void*)vr$36, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$843$2, 0, 24ll );
		FBSTRING* vr$42 = fb_StrConcat( &TMP$843$2, (void*)vr$39, -1ll, (void*)"dword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$844$2, -1ll, (void*)vr$42, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$844$2 );
		fb_StrDelete( (FBSTRING*)&TMP$844$2 );
	}
	label$443:;
	label$441:;
	if( RETURNSIZE$1 == 0ll ) goto label$445;
	{
		FBSTRING TMP$845$2;
		FBSTRING TMP$846$2;
		__builtin_memset( &TMP$846$2, 0, 24ll );
		FBSTRING* vr$46 = fb_LongintToStr( RETURNSIZE$1 );
		__builtin_memset( &TMP$845$2, 0, 24ll );
		FBSTRING* vr$49 = fb_StrConcat( &TMP$845$2, (void*)"add esp, ", 10ll, (void*)vr$46, -1ll );
		fb_StrAssign( (void*)&TMP$846$2, -1ll, (void*)vr$49, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$846$2 );
		fb_StrDelete( (FBSTRING*)&TMP$846$2 );
	}
	label$445:;
	label$444:;
	if( DDSIZE$1 <= 4ll ) goto label$447;
	{
		if( SDSIZE$1 <= 4ll ) goto label$449;
		{
			FBSTRING TMP$848$3;
			FBSTRING TMP$849$3;
			FBSTRING TMP$850$3;
			FBSTRING TMP$851$3;
			__builtin_memset( &TMP$851$3, 0, 24ll );
			__builtin_memset( &TMP$848$3, 0, 24ll );
			FBSTRING* vr$55 = fb_StrConcat( &TMP$848$3, (void*)"comisd ", 8ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$849$3, 0, 24ll );
			FBSTRING* vr$58 = fb_StrConcat( &TMP$849$3, (void*)vr$55, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$850$3, 0, 24ll );
			FBSTRING* vr$61 = fb_StrConcat( &TMP$850$3, (void*)vr$58, -1ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$851$3, -1ll, (void*)vr$61, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$851$3 );
			fb_StrDelete( (FBSTRING*)&TMP$851$3 );
		}
		goto label$448;
		label$449:;
		{
			FBSTRING TMP$852$3;
			FBSTRING TMP$853$3;
			FBSTRING TMP$854$3;
			FBSTRING TMP$855$3;
			FBSTRING TMP$856$3;
			FBSTRING TMP$857$3;
			__builtin_memset( &TMP$853$3, 0, 24ll );
			__builtin_memset( &TMP$852$3, 0, 24ll );
			FBSTRING* vr$67 = fb_StrConcat( &TMP$852$3, (void*)"cvtss2sd xmm7, ", 16ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$853$3, -1ll, (void*)vr$67, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$853$3 );
			fb_StrDelete( (FBSTRING*)&TMP$853$3 );
			__builtin_memset( &TMP$857$3, 0, 24ll );
			__builtin_memset( &TMP$854$3, 0, 24ll );
			FBSTRING* vr$73 = fb_StrConcat( &TMP$854$3, (void*)"comisd ", 8ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$855$3, 0, 24ll );
			FBSTRING* vr$76 = fb_StrConcat( &TMP$855$3, (void*)vr$73, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$856$3, 0, 24ll );
			FBSTRING* vr$79 = fb_StrConcat( &TMP$856$3, (void*)vr$76, -1ll, (void*)"xmm7", 5ll );
			fb_StrAssign( (void*)&TMP$857$3, -1ll, (void*)vr$79, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$857$3 );
			fb_StrDelete( (FBSTRING*)&TMP$857$3 );
		}
		label$448:;
	}
	goto label$446;
	label$447:;
	{
		if( SDSIZE$1 <= 4ll ) goto label$451;
		{
			FBSTRING TMP$858$3;
			FBSTRING TMP$859$3;
			FBSTRING TMP$862$3;
			FBSTRING TMP$863$3;
			__builtin_memset( &TMP$859$3, 0, 24ll );
			__builtin_memset( &TMP$858$3, 0, 24ll );
			FBSTRING* vr$85 = fb_StrConcat( &TMP$858$3, (void*)"cvtss2sd xmm7, ", 16ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$859$3, -1ll, (void*)vr$85, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$859$3 );
			fb_StrDelete( (FBSTRING*)&TMP$859$3 );
			__builtin_memset( &TMP$863$3, 0, 24ll );
			__builtin_memset( &TMP$862$3, 0, 24ll );
			FBSTRING* vr$91 = fb_StrConcat( &TMP$862$3, (void*)"comisd xmm7, ", 14ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$863$3, -1ll, (void*)vr$91, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$863$3 );
			fb_StrDelete( (FBSTRING*)&TMP$863$3 );
		}
		goto label$450;
		label$451:;
		{
			FBSTRING TMP$865$3;
			FBSTRING TMP$866$3;
			FBSTRING TMP$867$3;
			FBSTRING TMP$868$3;
			__builtin_memset( &TMP$868$3, 0, 24ll );
			__builtin_memset( &TMP$865$3, 0, 24ll );
			FBSTRING* vr$97 = fb_StrConcat( &TMP$865$3, (void*)"comiss ", 8ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$866$3, 0, 24ll );
			FBSTRING* vr$100 = fb_StrConcat( &TMP$866$3, (void*)vr$97, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$867$3, 0, 24ll );
			FBSTRING* vr$103 = fb_StrConcat( &TMP$867$3, (void*)vr$100, -1ll, (void*)&SRC$1, -1ll );
			fb_StrAssign( (void*)&TMP$868$3, -1ll, (void*)vr$103, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$868$3 );
			fb_StrDelete( (FBSTRING*)&TMP$868$3 );
		}
		label$450:;
	}
	label$446:;
	if( RVREG$1 != (struct $6IRVREG*)0ull ) goto label$453;
	{
		FBSTRING TMP$870$2;
		__builtin_memset( &TMP$870$2, 0, 24ll );
		FBSTRING* vr$108 = fb_StrConcat( &TMP$870$2, (void*)"j", 2ll, (void*)MNEMONIC$1, 0ll );
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$108, -1ll, 0 );
		HBRANCH( (char*)*(char**)&OSTR$1, (char*)*(char**)&LNAME$1 );
		goto label$431;
	}
	label$453:;
	label$452:;
	HPREPOPERAND( RVREG$1, &RNAME$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)((uint8*)&ENV$ + 224ll) < 1ll ) goto label$455;
	{
		char* vr$110 = HGETREGNAME( 2ll, *(int64*)((uint8*)RVREG$1 + 24ll) );
		fb_StrAssign( (void*)&RNAME8$1, -1ll, (void*)vr$110, 0ll, 0 );
		if( ((int64)-(*(int64*)((uint8*)RVREG$1 + 24ll) == 2ll) | (int64)-(*(int64*)((uint8*)RVREG$1 + 24ll) == 1ll)) == 0ll ) goto label$457;
		{
			FBSTRING TMP$876$3;
			FBSTRING TMP$877$3;
			int64 vr$116 = HISREGFREE( 0ll, 0ll );
			ISEDXFREE$1 = vr$116;
			if( ISEDXFREE$1 != 0ll ) goto label$459;
			{
				fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"xchg edx, ", 11ll, 0 );
				fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
				OUTP( (char*)*(char**)&OSTR$1 );
			}
			label$459:;
			label$458:;
			__builtin_memset( &TMP$876$3, 0, 24ll );
			FBSTRING* vr$119 = fb_StrConcat( &TMP$876$3, (void*)"set", 4ll, (void*)MNEMONIC$1, 0ll );
			__builtin_memset( &TMP$877$3, 0, 24ll );
			FBSTRING* vr$122 = fb_StrConcat( &TMP$877$3, (void*)vr$119, -1ll, (void*)"\x09" "dl", 4ll );
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$122, -1ll, 0 );
			OUTP( (char*)*(char**)&OSTR$1 );
			if( ISEDXFREE$1 != 0ll ) goto label$461;
			{
				fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"xchg edx, ", 11ll, 0 );
				fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
				OUTP( (char*)*(char**)&OSTR$1 );
			}
			goto label$460;
			label$461:;
			{
				HMOV( (char*)*(char**)&RNAME$1, (char*)"edx" );
			}
			label$460:;
		}
		goto label$456;
		label$457:;
		{
			FBSTRING TMP$880$3;
			FBSTRING TMP$881$3;
			FBSTRING TMP$882$3;
			__builtin_memset( &TMP$880$3, 0, 24ll );
			FBSTRING* vr$125 = fb_StrConcat( &TMP$880$3, (void*)"set", 4ll, (void*)MNEMONIC$1, 0ll );
			__builtin_memset( &TMP$881$3, 0, 24ll );
			FBSTRING* vr$128 = fb_StrConcat( &TMP$881$3, (void*)vr$125, -1ll, (void*)" ", 2ll );
			__builtin_memset( &TMP$882$3, 0, 24ll );
			FBSTRING* vr$131 = fb_StrConcat( &TMP$882$3, (void*)vr$128, -1ll, (void*)&RNAME8$1, -1ll );
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$131, -1ll, 0 );
			OUTP( (char*)*(char**)&OSTR$1 );
		}
		label$456:;
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"shr ", 5ll, 0 );
		fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
		fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", 1", 4ll, 0 );
		OUTP( (char*)*(char**)&OSTR$1 );
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"sbb ", 5ll, 0 );
		fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
		fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
		fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
		OUTP( (char*)*(char**)&OSTR$1 );
	}
	goto label$454;
	label$455:;
	{
		FBSTRING TMP$886$2;
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"mov ", 5ll, 0 );
		fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
		fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", -1", 5ll, 0 );
		OUTP( (char*)*(char**)&OSTR$1 );
		__builtin_memset( &TMP$886$2, 0, 24ll );
		FBSTRING* vr$134 = fb_StrConcat( &TMP$886$2, (void*)"j", 2ll, (void*)MNEMONIC$1, 0ll );
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$134, -1ll, 0 );
		HBRANCH( (char*)*(char**)&OSTR$1, (char*)*(char**)&LNAME$1 );
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"xor ", 5ll, 0 );
		fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
		fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
		fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
		OUTP( (char*)*(char**)&OSTR$1 );
		HLABEL( (char*)*(char**)&LNAME$1 );
	}
	label$454:;
	label$431:;
}

static void _EMITCGTF_SSE( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$462:;
	HCMPF_SSE( RVREG$1, LABEL$1, (char*)"a", (char*)"", DVREG$1, SVREG$1 );
	label$463:;
}

static void _EMITCLTF_SSE( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$464:;
	HCMPF_SSE( RVREG$1, LABEL$1, (char*)"b", (char*)"", DVREG$1, SVREG$1 );
	label$465:;
}

static void _EMITCEQF_SSE( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$466:;
	HCMPF_SSE( RVREG$1, LABEL$1, (char*)"e", (char*)"", DVREG$1, SVREG$1 );
	label$467:;
}

static void _EMITCNEF_SSE( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$468:;
	HCMPF_SSE( RVREG$1, LABEL$1, (char*)"ne", (char*)"", DVREG$1, SVREG$1 );
	label$469:;
}

static void _EMITCLEF_SSE( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$470:;
	HCMPF_SSE( RVREG$1, LABEL$1, (char*)"be", (char*)"", DVREG$1, SVREG$1 );
	label$471:;
}

static void _EMITCGEF_SSE( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$472:;
	HCMPF_SSE( RVREG$1, LABEL$1, (char*)"ae", (char*)"", DVREG$1, SVREG$1 );
	label$473:;
}

static void _EMITNEGF_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$895$1;
	label$474:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static int64 DDSIZE$1;
	static struct $8FBSYMBOL* SYM$1;
	static struct $6IRVREG* TEMPVREG$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$476;
	TMP$895$1 = 24ll;
	goto label$794;
	label$476:;
	TMP$895$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$794:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$895$1 * 56ll)) + 8ll);
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$478;
	{
		FBSTRING TMP$896$2;
		FBSTRING TMP$897$2;
		FBSTRING TMP$906$2;
		FBSTRING TMP$907$2;
		__builtin_memset( &TMP$897$2, 0, 24ll );
		FBSTRING* vr$7 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$896$2, 0, 24ll );
		FBSTRING* vr$10 = fb_StrConcat( &TMP$896$2, (void*)"sub esp, ", 10ll, (void*)vr$7, -1ll );
		fb_StrAssign( (void*)&TMP$897$2, -1ll, (void*)vr$10, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$897$2 );
		fb_StrDelete( (FBSTRING*)&TMP$897$2 );
		if( DDSIZE$1 <= 4ll ) goto label$480;
		{
			FBSTRING TMP$898$3;
			FBSTRING TMP$899$3;
			FBSTRING TMP$900$3;
			FBSTRING TMP$901$3;
			OUTP( (char*)"fstp qword ptr [esp]" );
			__builtin_memset( &TMP$901$3, 0, 24ll );
			__builtin_memset( &TMP$898$3, 0, 24ll );
			FBSTRING* vr$16 = fb_StrConcat( &TMP$898$3, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$899$3, 0, 24ll );
			FBSTRING* vr$19 = fb_StrConcat( &TMP$899$3, (void*)vr$16, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$900$3, 0, 24ll );
			FBSTRING* vr$22 = fb_StrConcat( &TMP$900$3, (void*)vr$19, -1ll, (void*)"qword ptr [esp]", 16ll );
			fb_StrAssign( (void*)&TMP$901$3, -1ll, (void*)vr$22, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$901$3 );
			fb_StrDelete( (FBSTRING*)&TMP$901$3 );
		}
		goto label$479;
		label$480:;
		{
			FBSTRING TMP$902$3;
			FBSTRING TMP$903$3;
			FBSTRING TMP$904$3;
			FBSTRING TMP$905$3;
			OUTP( (char*)"fstp dword ptr [esp]" );
			__builtin_memset( &TMP$905$3, 0, 24ll );
			__builtin_memset( &TMP$902$3, 0, 24ll );
			FBSTRING* vr$28 = fb_StrConcat( &TMP$902$3, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$903$3, 0, 24ll );
			FBSTRING* vr$31 = fb_StrConcat( &TMP$903$3, (void*)vr$28, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$904$3, 0, 24ll );
			FBSTRING* vr$34 = fb_StrConcat( &TMP$904$3, (void*)vr$31, -1ll, (void*)"dword ptr [esp]", 16ll );
			fb_StrAssign( (void*)&TMP$905$3, -1ll, (void*)vr$34, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$905$3 );
			fb_StrDelete( (FBSTRING*)&TMP$905$3 );
		}
		label$479:;
		__builtin_memset( &TMP$907$2, 0, 24ll );
		FBSTRING* vr$38 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$906$2, 0, 24ll );
		FBSTRING* vr$41 = fb_StrConcat( &TMP$906$2, (void*)"add esp, ", 10ll, (void*)vr$38, -1ll );
		fb_StrAssign( (void*)&TMP$907$2, -1ll, (void*)vr$41, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$907$2 );
		fb_StrDelete( (FBSTRING*)&TMP$907$2 );
	}
	label$478:;
	label$477:;
	if( DDSIZE$1 <= 4ll ) goto label$482;
	{
		struct $8FBSYMBOL* vr$44 = SYMBALLOCINTCONST( -9223372036854775808ull, 14ll );
		SYM$1 = vr$44;
		struct $6IRVREG* vr$46 = (*(tmp$72*)((uint8*)&IR$ + 472ll))( 14ll, (struct $8FBSYMBOL*)0ull, SYM$1, *(int64*)((uint8*)SYM$1 + 88ll) );
		TEMPVREG$1 = vr$46;
	}
	goto label$481;
	label$482:;
	{
		struct $8FBSYMBOL* vr$47 = SYMBALLOCINTCONST( 2147483648ll, 9ll );
		SYM$1 = vr$47;
		struct $6IRVREG* vr$49 = (*(tmp$72*)((uint8*)&IR$ + 472ll))( 9ll, (struct $8FBSYMBOL*)0ull, SYM$1, *(int64*)((uint8*)SYM$1 + 88ll) );
		TEMPVREG$1 = vr$49;
	}
	label$481:;
	*(int64*)((uint8*)SYM$1 + 168ll) = 16ll;
	HPREPOPERAND( TEMPVREG$1, &SRC$1, 25ll, 0ll, 0ll, -1ll );
	if( DDSIZE$1 <= 4ll ) goto label$484;
	{
		FBSTRING TMP$909$2;
		FBSTRING TMP$910$2;
		FBSTRING TMP$911$2;
		FBSTRING TMP$912$2;
		__builtin_memset( &TMP$912$2, 0, 24ll );
		__builtin_memset( &TMP$909$2, 0, 24ll );
		FBSTRING* vr$54 = fb_StrConcat( &TMP$909$2, (void*)"xorpd ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$910$2, 0, 24ll );
		FBSTRING* vr$57 = fb_StrConcat( &TMP$910$2, (void*)vr$54, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$911$2, 0, 24ll );
		FBSTRING* vr$60 = fb_StrConcat( &TMP$911$2, (void*)vr$57, -1ll, (void*)&SRC$1, -1ll );
		fb_StrAssign( (void*)&TMP$912$2, -1ll, (void*)vr$60, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$912$2 );
		fb_StrDelete( (FBSTRING*)&TMP$912$2 );
	}
	goto label$483;
	label$484:;
	{
		FBSTRING TMP$914$2;
		FBSTRING TMP$915$2;
		FBSTRING TMP$916$2;
		FBSTRING TMP$917$2;
		__builtin_memset( &TMP$917$2, 0, 24ll );
		__builtin_memset( &TMP$914$2, 0, 24ll );
		FBSTRING* vr$66 = fb_StrConcat( &TMP$914$2, (void*)"xorps ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$915$2, 0, 24ll );
		FBSTRING* vr$69 = fb_StrConcat( &TMP$915$2, (void*)vr$66, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$916$2, 0, 24ll );
		FBSTRING* vr$72 = fb_StrConcat( &TMP$916$2, (void*)vr$69, -1ll, (void*)&SRC$1, -1ll );
		fb_StrAssign( (void*)&TMP$917$2, -1ll, (void*)vr$72, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$917$2 );
		fb_StrDelete( (FBSTRING*)&TMP$917$2 );
	}
	label$483:;
	label$475:;
}

static void _EMITHADDF_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$918$1;
	label$485:;
	static FBSTRING DST$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$487;
	TMP$918$1 = 24ll;
	goto label$795;
	label$487:;
	TMP$918$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$795:;
	if( *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$918$1 * 56ll)) + 8ll) <= 4ll ) goto label$489;
	{
		FBSTRING TMP$919$2;
		FBSTRING TMP$920$2;
		FBSTRING TMP$922$2;
		FBSTRING TMP$923$2;
		FBSTRING TMP$924$2;
		FBSTRING TMP$925$2;
		__builtin_memset( &TMP$920$2, 0, 24ll );
		__builtin_memset( &TMP$919$2, 0, 24ll );
		FBSTRING* vr$8 = fb_StrConcat( &TMP$919$2, (void*)"movhlps xmm7, ", 15ll, (void*)&DST$1, -1ll );
		fb_StrAssign( (void*)&TMP$920$2, -1ll, (void*)vr$8, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$920$2 );
		fb_StrDelete( (FBSTRING*)&TMP$920$2 );
		__builtin_memset( &TMP$925$2, 0, 24ll );
		__builtin_memset( &TMP$922$2, 0, 24ll );
		FBSTRING* vr$14 = fb_StrConcat( &TMP$922$2, (void*)"addsd ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$923$2, 0, 24ll );
		FBSTRING* vr$17 = fb_StrConcat( &TMP$923$2, (void*)vr$14, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$924$2, 0, 24ll );
		FBSTRING* vr$20 = fb_StrConcat( &TMP$924$2, (void*)vr$17, -1ll, (void*)"xmm7", 5ll );
		fb_StrAssign( (void*)&TMP$925$2, -1ll, (void*)vr$20, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$925$2 );
		fb_StrDelete( (FBSTRING*)&TMP$925$2 );
	}
	goto label$488;
	label$489:;
	{
		if( *(int64*)((uint8*)DVREG$1 + 40ll) != 2ll ) goto label$491;
		{
			FBSTRING TMP$929$3;
			FBSTRING TMP$930$3;
			FBSTRING TMP$931$3;
			FBSTRING TMP$932$3;
			FBSTRING TMP$934$3;
			FBSTRING TMP$935$3;
			FBSTRING TMP$936$3;
			FBSTRING TMP$937$3;
			__builtin_memset( &TMP$932$3, 0, 24ll );
			__builtin_memset( &TMP$929$3, 0, 24ll );
			FBSTRING* vr$27 = fb_StrConcat( &TMP$929$3, (void*)"pshufd xmm7, ", 14ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$930$3, 0, 24ll );
			FBSTRING* vr$30 = fb_StrConcat( &TMP$930$3, (void*)vr$27, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$931$3, 0, 24ll );
			FBSTRING* vr$33 = fb_StrConcat( &TMP$931$3, (void*)vr$30, -1ll, (void*)"0x01", 5ll );
			fb_StrAssign( (void*)&TMP$932$3, -1ll, (void*)vr$33, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$932$3 );
			fb_StrDelete( (FBSTRING*)&TMP$932$3 );
			__builtin_memset( &TMP$937$3, 0, 24ll );
			__builtin_memset( &TMP$934$3, 0, 24ll );
			FBSTRING* vr$39 = fb_StrConcat( &TMP$934$3, (void*)"addss ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$935$3, 0, 24ll );
			FBSTRING* vr$42 = fb_StrConcat( &TMP$935$3, (void*)vr$39, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$936$3, 0, 24ll );
			FBSTRING* vr$45 = fb_StrConcat( &TMP$936$3, (void*)vr$42, -1ll, (void*)"xmm7", 5ll );
			fb_StrAssign( (void*)&TMP$937$3, -1ll, (void*)vr$45, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$937$3 );
			fb_StrDelete( (FBSTRING*)&TMP$937$3 );
		}
		goto label$490;
		label$491:;
		if( *(int64*)((uint8*)DVREG$1 + 40ll) != 3ll ) goto label$492;
		{
			FBSTRING TMP$938$3;
			FBSTRING TMP$939$3;
			FBSTRING TMP$940$3;
			FBSTRING TMP$941$3;
			FBSTRING TMP$942$3;
			FBSTRING TMP$943$3;
			FBSTRING TMP$944$3;
			FBSTRING TMP$945$3;
			FBSTRING TMP$946$3;
			FBSTRING TMP$947$3;
			FBSTRING TMP$948$3;
			FBSTRING TMP$949$3;
			FBSTRING TMP$950$3;
			FBSTRING TMP$951$3;
			__builtin_memset( &TMP$941$3, 0, 24ll );
			__builtin_memset( &TMP$938$3, 0, 24ll );
			FBSTRING* vr$52 = fb_StrConcat( &TMP$938$3, (void*)"pshufd xmm7, ", 14ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$939$3, 0, 24ll );
			FBSTRING* vr$55 = fb_StrConcat( &TMP$939$3, (void*)vr$52, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$940$3, 0, 24ll );
			FBSTRING* vr$58 = fb_StrConcat( &TMP$940$3, (void*)vr$55, -1ll, (void*)"0x01", 5ll );
			fb_StrAssign( (void*)&TMP$941$3, -1ll, (void*)vr$58, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$941$3 );
			fb_StrDelete( (FBSTRING*)&TMP$941$3 );
			__builtin_memset( &TMP$945$3, 0, 24ll );
			__builtin_memset( &TMP$942$3, 0, 24ll );
			FBSTRING* vr$64 = fb_StrConcat( &TMP$942$3, (void*)"addss ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$943$3, 0, 24ll );
			FBSTRING* vr$67 = fb_StrConcat( &TMP$943$3, (void*)vr$64, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$944$3, 0, 24ll );
			FBSTRING* vr$70 = fb_StrConcat( &TMP$944$3, (void*)vr$67, -1ll, (void*)"xmm7", 5ll );
			fb_StrAssign( (void*)&TMP$945$3, -1ll, (void*)vr$70, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$945$3 );
			fb_StrDelete( (FBSTRING*)&TMP$945$3 );
			__builtin_memset( &TMP$947$3, 0, 24ll );
			__builtin_memset( &TMP$946$3, 0, 24ll );
			FBSTRING* vr$76 = fb_StrConcat( &TMP$946$3, (void*)"movhlps xmm7, ", 15ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$947$3, -1ll, (void*)vr$76, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$947$3 );
			fb_StrDelete( (FBSTRING*)&TMP$947$3 );
			__builtin_memset( &TMP$951$3, 0, 24ll );
			__builtin_memset( &TMP$948$3, 0, 24ll );
			FBSTRING* vr$82 = fb_StrConcat( &TMP$948$3, (void*)"addss ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$949$3, 0, 24ll );
			FBSTRING* vr$85 = fb_StrConcat( &TMP$949$3, (void*)vr$82, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$950$3, 0, 24ll );
			FBSTRING* vr$88 = fb_StrConcat( &TMP$950$3, (void*)vr$85, -1ll, (void*)"xmm7", 5ll );
			fb_StrAssign( (void*)&TMP$951$3, -1ll, (void*)vr$88, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$951$3 );
			fb_StrDelete( (FBSTRING*)&TMP$951$3 );
		}
		goto label$490;
		label$492:;
		if( *(int64*)((uint8*)DVREG$1 + 40ll) != 4ll ) goto label$493;
		{
			FBSTRING TMP$952$3;
			FBSTRING TMP$953$3;
			FBSTRING TMP$955$3;
			FBSTRING TMP$956$3;
			FBSTRING TMP$957$3;
			FBSTRING TMP$958$3;
			FBSTRING TMP$959$3;
			FBSTRING TMP$960$3;
			FBSTRING TMP$961$3;
			FBSTRING TMP$962$3;
			FBSTRING TMP$963$3;
			FBSTRING TMP$964$3;
			FBSTRING TMP$965$3;
			FBSTRING TMP$966$3;
			__builtin_memset( &TMP$953$3, 0, 24ll );
			__builtin_memset( &TMP$952$3, 0, 24ll );
			FBSTRING* vr$95 = fb_StrConcat( &TMP$952$3, (void*)"movhlps xmm7, ", 15ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$953$3, -1ll, (void*)vr$95, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$953$3 );
			fb_StrDelete( (FBSTRING*)&TMP$953$3 );
			__builtin_memset( &TMP$958$3, 0, 24ll );
			__builtin_memset( &TMP$955$3, 0, 24ll );
			FBSTRING* vr$101 = fb_StrConcat( &TMP$955$3, (void*)"addps ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$956$3, 0, 24ll );
			FBSTRING* vr$104 = fb_StrConcat( &TMP$956$3, (void*)vr$101, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$957$3, 0, 24ll );
			FBSTRING* vr$107 = fb_StrConcat( &TMP$957$3, (void*)vr$104, -1ll, (void*)"xmm7", 5ll );
			fb_StrAssign( (void*)&TMP$958$3, -1ll, (void*)vr$107, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$958$3 );
			fb_StrDelete( (FBSTRING*)&TMP$958$3 );
			__builtin_memset( &TMP$962$3, 0, 24ll );
			__builtin_memset( &TMP$959$3, 0, 24ll );
			FBSTRING* vr$113 = fb_StrConcat( &TMP$959$3, (void*)"pshufd xmm7, ", 14ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$960$3, 0, 24ll );
			FBSTRING* vr$116 = fb_StrConcat( &TMP$960$3, (void*)vr$113, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$961$3, 0, 24ll );
			FBSTRING* vr$119 = fb_StrConcat( &TMP$961$3, (void*)vr$116, -1ll, (void*)"0x01", 5ll );
			fb_StrAssign( (void*)&TMP$962$3, -1ll, (void*)vr$119, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$962$3 );
			fb_StrDelete( (FBSTRING*)&TMP$962$3 );
			__builtin_memset( &TMP$966$3, 0, 24ll );
			__builtin_memset( &TMP$963$3, 0, 24ll );
			FBSTRING* vr$125 = fb_StrConcat( &TMP$963$3, (void*)"addss ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$964$3, 0, 24ll );
			FBSTRING* vr$128 = fb_StrConcat( &TMP$964$3, (void*)vr$125, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$965$3, 0, 24ll );
			FBSTRING* vr$131 = fb_StrConcat( &TMP$965$3, (void*)vr$128, -1ll, (void*)"xmm7", 5ll );
			fb_StrAssign( (void*)&TMP$966$3, -1ll, (void*)vr$131, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$966$3 );
			fb_StrDelete( (FBSTRING*)&TMP$966$3 );
		}
		goto label$490;
		label$493:;
		{
		}
		label$490:;
	}
	label$488:;
	label$486:;
}

static void _EMITABSF_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$967$1;
	label$494:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static int64 DDSIZE$1;
	static struct $8FBSYMBOL* SYM$1;
	static struct $6IRVREG* TEMPVREG$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$496;
	TMP$967$1 = 24ll;
	goto label$796;
	label$496:;
	TMP$967$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$796:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$967$1 * 56ll)) + 8ll);
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$498;
	{
		FBSTRING TMP$968$2;
		FBSTRING TMP$969$2;
		FBSTRING TMP$978$2;
		FBSTRING TMP$979$2;
		__builtin_memset( &TMP$969$2, 0, 24ll );
		FBSTRING* vr$7 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$968$2, 0, 24ll );
		FBSTRING* vr$10 = fb_StrConcat( &TMP$968$2, (void*)"sub esp, ", 10ll, (void*)vr$7, -1ll );
		fb_StrAssign( (void*)&TMP$969$2, -1ll, (void*)vr$10, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$969$2 );
		fb_StrDelete( (FBSTRING*)&TMP$969$2 );
		if( DDSIZE$1 <= 4ll ) goto label$500;
		{
			FBSTRING TMP$970$3;
			FBSTRING TMP$971$3;
			FBSTRING TMP$972$3;
			FBSTRING TMP$973$3;
			OUTP( (char*)"fstp qword ptr [esp]" );
			__builtin_memset( &TMP$973$3, 0, 24ll );
			__builtin_memset( &TMP$970$3, 0, 24ll );
			FBSTRING* vr$16 = fb_StrConcat( &TMP$970$3, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$971$3, 0, 24ll );
			FBSTRING* vr$19 = fb_StrConcat( &TMP$971$3, (void*)vr$16, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$972$3, 0, 24ll );
			FBSTRING* vr$22 = fb_StrConcat( &TMP$972$3, (void*)vr$19, -1ll, (void*)"qword ptr [esp]", 16ll );
			fb_StrAssign( (void*)&TMP$973$3, -1ll, (void*)vr$22, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$973$3 );
			fb_StrDelete( (FBSTRING*)&TMP$973$3 );
		}
		goto label$499;
		label$500:;
		{
			FBSTRING TMP$974$3;
			FBSTRING TMP$975$3;
			FBSTRING TMP$976$3;
			FBSTRING TMP$977$3;
			OUTP( (char*)"fstp dword ptr [esp]" );
			__builtin_memset( &TMP$977$3, 0, 24ll );
			__builtin_memset( &TMP$974$3, 0, 24ll );
			FBSTRING* vr$28 = fb_StrConcat( &TMP$974$3, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$975$3, 0, 24ll );
			FBSTRING* vr$31 = fb_StrConcat( &TMP$975$3, (void*)vr$28, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$976$3, 0, 24ll );
			FBSTRING* vr$34 = fb_StrConcat( &TMP$976$3, (void*)vr$31, -1ll, (void*)"dword ptr [esp]", 16ll );
			fb_StrAssign( (void*)&TMP$977$3, -1ll, (void*)vr$34, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$977$3 );
			fb_StrDelete( (FBSTRING*)&TMP$977$3 );
		}
		label$499:;
		__builtin_memset( &TMP$979$2, 0, 24ll );
		FBSTRING* vr$38 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$978$2, 0, 24ll );
		FBSTRING* vr$41 = fb_StrConcat( &TMP$978$2, (void*)"add esp, ", 10ll, (void*)vr$38, -1ll );
		fb_StrAssign( (void*)&TMP$979$2, -1ll, (void*)vr$41, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$979$2 );
		fb_StrDelete( (FBSTRING*)&TMP$979$2 );
	}
	label$498:;
	label$497:;
	if( DDSIZE$1 <= 4ll ) goto label$502;
	{
		struct $8FBSYMBOL* vr$44 = SYMBALLOCINTCONST( 9223372036854775807ll, 14ll );
		SYM$1 = vr$44;
		struct $6IRVREG* vr$46 = (*(tmp$72*)((uint8*)&IR$ + 472ll))( 14ll, (struct $8FBSYMBOL*)0ull, SYM$1, *(int64*)((uint8*)SYM$1 + 88ll) );
		TEMPVREG$1 = vr$46;
	}
	goto label$501;
	label$502:;
	{
		struct $8FBSYMBOL* vr$47 = SYMBALLOCINTCONST( 2147483647ll, 9ll );
		SYM$1 = vr$47;
		struct $6IRVREG* vr$49 = (*(tmp$72*)((uint8*)&IR$ + 472ll))( 9ll, (struct $8FBSYMBOL*)0ull, SYM$1, *(int64*)((uint8*)SYM$1 + 88ll) );
		TEMPVREG$1 = vr$49;
	}
	label$501:;
	*(int64*)((uint8*)SYM$1 + 168ll) = 16ll;
	HPREPOPERAND( TEMPVREG$1, &SRC$1, 25ll, 0ll, 0ll, -1ll );
	if( DDSIZE$1 <= 4ll ) goto label$504;
	{
		FBSTRING TMP$981$2;
		FBSTRING TMP$982$2;
		FBSTRING TMP$983$2;
		FBSTRING TMP$984$2;
		__builtin_memset( &TMP$984$2, 0, 24ll );
		__builtin_memset( &TMP$981$2, 0, 24ll );
		FBSTRING* vr$54 = fb_StrConcat( &TMP$981$2, (void*)"andpd ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$982$2, 0, 24ll );
		FBSTRING* vr$57 = fb_StrConcat( &TMP$982$2, (void*)vr$54, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$983$2, 0, 24ll );
		FBSTRING* vr$60 = fb_StrConcat( &TMP$983$2, (void*)vr$57, -1ll, (void*)&SRC$1, -1ll );
		fb_StrAssign( (void*)&TMP$984$2, -1ll, (void*)vr$60, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$984$2 );
		fb_StrDelete( (FBSTRING*)&TMP$984$2 );
	}
	goto label$503;
	label$504:;
	{
		FBSTRING TMP$986$2;
		FBSTRING TMP$987$2;
		FBSTRING TMP$988$2;
		FBSTRING TMP$989$2;
		__builtin_memset( &TMP$989$2, 0, 24ll );
		__builtin_memset( &TMP$986$2, 0, 24ll );
		FBSTRING* vr$66 = fb_StrConcat( &TMP$986$2, (void*)"andps ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$987$2, 0, 24ll );
		FBSTRING* vr$69 = fb_StrConcat( &TMP$987$2, (void*)vr$66, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$988$2, 0, 24ll );
		FBSTRING* vr$72 = fb_StrConcat( &TMP$988$2, (void*)vr$69, -1ll, (void*)&SRC$1, -1ll );
		fb_StrAssign( (void*)&TMP$989$2, -1ll, (void*)vr$72, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$989$2 );
		fb_StrDelete( (FBSTRING*)&TMP$989$2 );
	}
	label$503:;
	label$495:;
}

static void _EMITSGNF_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$990$1;
	label$505:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static struct $8FBSYMBOL* SYM$1;
	static struct $6IRVREG* TEMPVREG$1;
	static int64 DDSIZE$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$507;
	TMP$990$1 = 24ll;
	goto label$797;
	label$507:;
	TMP$990$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$797:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$990$1 * 56ll)) + 8ll);
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$509;
	{
		FBSTRING TMP$991$2;
		FBSTRING TMP$992$2;
		FBSTRING TMP$1001$2;
		FBSTRING TMP$1002$2;
		__builtin_memset( &TMP$992$2, 0, 24ll );
		FBSTRING* vr$7 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$991$2, 0, 24ll );
		FBSTRING* vr$10 = fb_StrConcat( &TMP$991$2, (void*)"sub esp, ", 10ll, (void*)vr$7, -1ll );
		fb_StrAssign( (void*)&TMP$992$2, -1ll, (void*)vr$10, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$992$2 );
		fb_StrDelete( (FBSTRING*)&TMP$992$2 );
		if( DDSIZE$1 <= 4ll ) goto label$511;
		{
			FBSTRING TMP$993$3;
			FBSTRING TMP$994$3;
			FBSTRING TMP$995$3;
			FBSTRING TMP$996$3;
			OUTP( (char*)"fstp qword ptr [esp]" );
			__builtin_memset( &TMP$996$3, 0, 24ll );
			__builtin_memset( &TMP$993$3, 0, 24ll );
			FBSTRING* vr$16 = fb_StrConcat( &TMP$993$3, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$994$3, 0, 24ll );
			FBSTRING* vr$19 = fb_StrConcat( &TMP$994$3, (void*)vr$16, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$995$3, 0, 24ll );
			FBSTRING* vr$22 = fb_StrConcat( &TMP$995$3, (void*)vr$19, -1ll, (void*)"qword ptr [esp]", 16ll );
			fb_StrAssign( (void*)&TMP$996$3, -1ll, (void*)vr$22, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$996$3 );
			fb_StrDelete( (FBSTRING*)&TMP$996$3 );
		}
		goto label$510;
		label$511:;
		{
			FBSTRING TMP$997$3;
			FBSTRING TMP$998$3;
			FBSTRING TMP$999$3;
			FBSTRING TMP$1000$3;
			OUTP( (char*)"fstp dword ptr [esp]" );
			__builtin_memset( &TMP$1000$3, 0, 24ll );
			__builtin_memset( &TMP$997$3, 0, 24ll );
			FBSTRING* vr$28 = fb_StrConcat( &TMP$997$3, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$998$3, 0, 24ll );
			FBSTRING* vr$31 = fb_StrConcat( &TMP$998$3, (void*)vr$28, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$999$3, 0, 24ll );
			FBSTRING* vr$34 = fb_StrConcat( &TMP$999$3, (void*)vr$31, -1ll, (void*)"dword ptr [esp]", 16ll );
			fb_StrAssign( (void*)&TMP$1000$3, -1ll, (void*)vr$34, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1000$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1000$3 );
		}
		label$510:;
		__builtin_memset( &TMP$1002$2, 0, 24ll );
		FBSTRING* vr$38 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1001$2, 0, 24ll );
		FBSTRING* vr$41 = fb_StrConcat( &TMP$1001$2, (void*)"add esp, ", 10ll, (void*)vr$38, -1ll );
		fb_StrAssign( (void*)&TMP$1002$2, -1ll, (void*)vr$41, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1002$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1002$2 );
	}
	label$509:;
	label$508:;
	if( DDSIZE$1 <= 4ll ) goto label$513;
	{
		FBSTRING TMP$1006$2;
		FBSTRING TMP$1007$2;
		FBSTRING TMP$1009$2;
		FBSTRING TMP$1010$2;
		FBSTRING TMP$1011$2;
		FBSTRING TMP$1012$2;
		FBSTRING TMP$1015$2;
		FBSTRING TMP$1016$2;
		FBSTRING TMP$1017$2;
		FBSTRING TMP$1018$2;
		FBSTRING TMP$1019$2;
		FBSTRING TMP$1020$2;
		OUTP( (char*)"xorpd xmm7, xmm7" );
		__builtin_memset( &TMP$1007$2, 0, 24ll );
		__builtin_memset( &TMP$1006$2, 0, 24ll );
		FBSTRING* vr$47 = fb_StrConcat( &TMP$1006$2, (void*)"cmpneqsd xmm7, ", 16ll, (void*)&DST$1, -1ll );
		fb_StrAssign( (void*)&TMP$1007$2, -1ll, (void*)vr$47, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1007$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1007$2 );
		struct $8FBSYMBOL* vr$50 = SYMBALLOCINTCONST( 9223372036854775807ll, 14ll );
		SYM$1 = vr$50;
		*(int64*)((uint8*)SYM$1 + 168ll) = 16ll;
		struct $6IRVREG* vr$53 = (*(tmp$72*)((uint8*)&IR$ + 472ll))( 14ll, (struct $8FBSYMBOL*)0ull, SYM$1, *(int64*)((uint8*)SYM$1 + 88ll) );
		TEMPVREG$1 = vr$53;
		HPREPOPERAND( TEMPVREG$1, &SRC$1, 25ll, 0ll, 0ll, -1ll );
		__builtin_memset( &TMP$1012$2, 0, 24ll );
		__builtin_memset( &TMP$1009$2, 0, 24ll );
		FBSTRING* vr$57 = fb_StrConcat( &TMP$1009$2, (void*)"orpd ", 6ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1010$2, 0, 24ll );
		FBSTRING* vr$60 = fb_StrConcat( &TMP$1010$2, (void*)vr$57, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1011$2, 0, 24ll );
		FBSTRING* vr$63 = fb_StrConcat( &TMP$1011$2, (void*)vr$60, -1ll, (void*)&SRC$1, -1ll );
		fb_StrAssign( (void*)&TMP$1012$2, -1ll, (void*)vr$63, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1012$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1012$2 );
		struct $8FBSYMBOL* vr$66 = SYMBALLOCINTCONST( -4616189618054758400ll, 14ll );
		SYM$1 = vr$66;
		*(int64*)((uint8*)SYM$1 + 168ll) = 16ll;
		struct $6IRVREG* vr$69 = (*(tmp$72*)((uint8*)&IR$ + 472ll))( 14ll, (struct $8FBSYMBOL*)0ull, SYM$1, *(int64*)((uint8*)SYM$1 + 88ll) );
		TEMPVREG$1 = vr$69;
		HPREPOPERAND( TEMPVREG$1, &SRC$1, 25ll, 0ll, 0ll, -1ll );
		__builtin_memset( &TMP$1016$2, 0, 24ll );
		__builtin_memset( &TMP$1015$2, 0, 24ll );
		FBSTRING* vr$73 = fb_StrConcat( &TMP$1015$2, (void*)"andpd xmm7, ", 13ll, (void*)&SRC$1, -1ll );
		fb_StrAssign( (void*)&TMP$1016$2, -1ll, (void*)vr$73, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1016$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1016$2 );
		__builtin_memset( &TMP$1020$2, 0, 24ll );
		__builtin_memset( &TMP$1017$2, 0, 24ll );
		FBSTRING* vr$79 = fb_StrConcat( &TMP$1017$2, (void*)"andpd ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1018$2, 0, 24ll );
		FBSTRING* vr$82 = fb_StrConcat( &TMP$1018$2, (void*)vr$79, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1019$2, 0, 24ll );
		FBSTRING* vr$85 = fb_StrConcat( &TMP$1019$2, (void*)vr$82, -1ll, (void*)"xmm7", 5ll );
		fb_StrAssign( (void*)&TMP$1020$2, -1ll, (void*)vr$85, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1020$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1020$2 );
	}
	goto label$512;
	label$513:;
	{
		FBSTRING TMP$1024$2;
		FBSTRING TMP$1025$2;
		FBSTRING TMP$1027$2;
		FBSTRING TMP$1028$2;
		FBSTRING TMP$1029$2;
		FBSTRING TMP$1030$2;
		FBSTRING TMP$1033$2;
		FBSTRING TMP$1034$2;
		FBSTRING TMP$1035$2;
		FBSTRING TMP$1036$2;
		FBSTRING TMP$1037$2;
		FBSTRING TMP$1038$2;
		OUTP( (char*)"xorps xmm7, xmm7" );
		__builtin_memset( &TMP$1025$2, 0, 24ll );
		__builtin_memset( &TMP$1024$2, 0, 24ll );
		FBSTRING* vr$91 = fb_StrConcat( &TMP$1024$2, (void*)"cmpneqss xmm7, ", 16ll, (void*)&DST$1, -1ll );
		fb_StrAssign( (void*)&TMP$1025$2, -1ll, (void*)vr$91, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1025$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1025$2 );
		struct $8FBSYMBOL* vr$94 = SYMBALLOCINTCONST( 2147483647ll, 9ll );
		SYM$1 = vr$94;
		*(int64*)((uint8*)SYM$1 + 168ll) = 16ll;
		struct $6IRVREG* vr$97 = (*(tmp$72*)((uint8*)&IR$ + 472ll))( 9ll, (struct $8FBSYMBOL*)0ull, SYM$1, *(int64*)((uint8*)SYM$1 + 88ll) );
		TEMPVREG$1 = vr$97;
		HPREPOPERAND( TEMPVREG$1, &SRC$1, 25ll, 0ll, 0ll, -1ll );
		__builtin_memset( &TMP$1030$2, 0, 24ll );
		__builtin_memset( &TMP$1027$2, 0, 24ll );
		FBSTRING* vr$101 = fb_StrConcat( &TMP$1027$2, (void*)"orps ", 6ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1028$2, 0, 24ll );
		FBSTRING* vr$104 = fb_StrConcat( &TMP$1028$2, (void*)vr$101, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1029$2, 0, 24ll );
		FBSTRING* vr$107 = fb_StrConcat( &TMP$1029$2, (void*)vr$104, -1ll, (void*)&SRC$1, -1ll );
		fb_StrAssign( (void*)&TMP$1030$2, -1ll, (void*)vr$107, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1030$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1030$2 );
		struct $8FBSYMBOL* vr$110 = SYMBALLOCINTCONST( 3212836864ll, 9ll );
		SYM$1 = vr$110;
		*(int64*)((uint8*)SYM$1 + 168ll) = 16ll;
		struct $6IRVREG* vr$113 = (*(tmp$72*)((uint8*)&IR$ + 472ll))( 9ll, (struct $8FBSYMBOL*)0ull, SYM$1, *(int64*)((uint8*)SYM$1 + 88ll) );
		TEMPVREG$1 = vr$113;
		HPREPOPERAND( TEMPVREG$1, &SRC$1, 25ll, 0ll, 0ll, -1ll );
		__builtin_memset( &TMP$1034$2, 0, 24ll );
		__builtin_memset( &TMP$1033$2, 0, 24ll );
		FBSTRING* vr$117 = fb_StrConcat( &TMP$1033$2, (void*)"andps xmm7, ", 13ll, (void*)&SRC$1, -1ll );
		fb_StrAssign( (void*)&TMP$1034$2, -1ll, (void*)vr$117, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1034$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1034$2 );
		__builtin_memset( &TMP$1038$2, 0, 24ll );
		__builtin_memset( &TMP$1035$2, 0, 24ll );
		FBSTRING* vr$123 = fb_StrConcat( &TMP$1035$2, (void*)"andps ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1036$2, 0, 24ll );
		FBSTRING* vr$126 = fb_StrConcat( &TMP$1036$2, (void*)vr$123, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1037$2, 0, 24ll );
		FBSTRING* vr$129 = fb_StrConcat( &TMP$1037$2, (void*)vr$126, -1ll, (void*)"xmm7", 5ll );
		fb_StrAssign( (void*)&TMP$1038$2, -1ll, (void*)vr$129, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1038$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1038$2 );
	}
	label$512:;
	label$506:;
}

static void HSINCOS_FAST_SSE( struct $6IRVREG* DVREG$1, int64 ISCOS$1 )
{
	FBSTRING TMP$1042$1;
	FBSTRING TMP$1043$1;
	FBSTRING TMP$1069$1;
	FBSTRING TMP$1070$1;
	FBSTRING TMP$1071$1;
	FBSTRING TMP$1072$1;
	FBSTRING TMP$1082$1;
	FBSTRING TMP$1083$1;
	FBSTRING TMP$1084$1;
	FBSTRING TMP$1085$1;
	FBSTRING TMP$1086$1;
	FBSTRING TMP$1087$1;
	FBSTRING TMP$1089$1;
	FBSTRING TMP$1090$1;
	FBSTRING TMP$1091$1;
	FBSTRING TMP$1092$1;
	FBSTRING TMP$1094$1;
	FBSTRING TMP$1095$1;
	FBSTRING TMP$1096$1;
	FBSTRING TMP$1097$1;
	FBSTRING TMP$1100$1;
	FBSTRING TMP$1101$1;
	FBSTRING TMP$1102$1;
	FBSTRING TMP$1103$1;
	FBSTRING TMP$1105$1;
	FBSTRING TMP$1106$1;
	FBSTRING TMP$1108$1;
	FBSTRING TMP$1109$1;
	FBSTRING TMP$1110$1;
	FBSTRING TMP$1111$1;
	FBSTRING TMP$1113$1;
	FBSTRING TMP$1114$1;
	FBSTRING TMP$1115$1;
	FBSTRING TMP$1116$1;
	FBSTRING TMP$1118$1;
	FBSTRING TMP$1119$1;
	FBSTRING TMP$1120$1;
	FBSTRING TMP$1121$1;
	FBSTRING TMP$1123$1;
	FBSTRING TMP$1124$1;
	FBSTRING TMP$1126$1;
	FBSTRING TMP$1127$1;
	FBSTRING TMP$1128$1;
	FBSTRING TMP$1129$1;
	FBSTRING TMP$1131$1;
	FBSTRING TMP$1132$1;
	FBSTRING TMP$1133$1;
	FBSTRING TMP$1134$1;
	FBSTRING TMP$1137$1;
	FBSTRING TMP$1138$1;
	FBSTRING TMP$1139$1;
	FBSTRING TMP$1140$1;
	FBSTRING TMP$1142$1;
	FBSTRING TMP$1143$1;
	FBSTRING TMP$1144$1;
	FBSTRING TMP$1145$1;
	FBSTRING TMP$1148$1;
	FBSTRING TMP$1149$1;
	FBSTRING TMP$1156$1;
	FBSTRING TMP$1157$1;
	FBSTRING TMP$1158$1;
	FBSTRING TMP$1159$1;
	FBSTRING TMP$1162$1;
	FBSTRING TMP$1163$1;
	FBSTRING TMP$1164$1;
	FBSTRING TMP$1165$1;
	FBSTRING TMP$1166$1;
	FBSTRING TMP$1167$1;
	FBSTRING TMP$1168$1;
	FBSTRING TMP$1169$1;
	FBSTRING TMP$1172$1;
	FBSTRING TMP$1173$1;
	FBSTRING TMP$1176$1;
	FBSTRING TMP$1177$1;
	FBSTRING TMP$1178$1;
	FBSTRING TMP$1179$1;
	FBSTRING TMP$1180$1;
	FBSTRING TMP$1181$1;
	FBSTRING TMP$1182$1;
	FBSTRING TMP$1183$1;
	FBSTRING TMP$1184$1;
	FBSTRING TMP$1185$1;
	FBSTRING TMP$1186$1;
	FBSTRING TMP$1187$1;
	FBSTRING TMP$1188$1;
	FBSTRING TMP$1189$1;
	FBSTRING TMP$1190$1;
	FBSTRING TMP$1191$1;
	FBSTRING TMP$1192$1;
	FBSTRING TMP$1193$1;
	FBSTRING TMP$1207$1;
	FBSTRING TMP$1208$1;
	label$514:;
	static int64 REG$1[3];
	static struct $8FBARRAY1IlE tmp$1039$1 = { (int64*)REG$1, (int64*)REG$1, 24ll, 8ll, 1ll, 49ll, { { 3ll, 0ll, 2ll } } };
	static int64 ISFREE$1[3];
	static struct $8FBARRAY1IlE tmp$1040$1 = { (int64*)ISFREE$1, (int64*)ISFREE$1, 24ll, 8ll, 1ll, 49ll, { { 3ll, 0ll, 2ll } } };
	static int64 STACKSIZE$1;
	static int64 I$1;
	static int64 STACKPOINTER$1;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING REGNAME$1[3];
	static struct $8FBARRAY1I8FBSTRINGE tmp$1041$1 = { (FBSTRING*)REGNAME$1, (FBSTRING*)REGNAME$1, 72ll, 24ll, 1ll, 49ll, { { 3ll, 0ll, 2ll } } };
	static struct $8FBSYMBOL* SYM_INVSIGNBITMASK$1;
	static struct $8FBSYMBOL* SYM_ONE$1;
	static struct $8FBSYMBOL* SYM_PIOVERTWO$1;
	static struct $8FBSYMBOL* SYM_TWOOVERPI$1;
	static struct $8FBSYMBOL* SYM_SIN_C0$1;
	static struct $8FBSYMBOL* SYM_SIN_C1$1;
	static struct $8FBSYMBOL* SYM_SIN_C2$1;
	static struct $8FBSYMBOL* SYM_SIN_C3$1;
	static struct $6IRVREG* VREG_INVSIGNBITMASK$1;
	static struct $6IRVREG* VREG_ONE$1;
	static struct $6IRVREG* VREG_PIOVERTWO$1;
	static struct $6IRVREG* VREG_TWOOVERPI$1;
	static struct $6IRVREG* VREG_SIN_C0$1;
	static struct $6IRVREG* VREG_SIN_C1$1;
	static struct $6IRVREG* VREG_SIN_C2$1;
	static struct $6IRVREG* VREG_SIN_C3$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	STACKSIZE$1 = 4ll;
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$517;
	{
		STACKSIZE$1 = STACKSIZE$1 + 4ll;
	}
	label$517:;
	label$516:;
	*(int64*)REG$1 = 3ll;
	*(int64*)ISFREE$1 = 0ll;
	*(int64*)((int64)(int64*)REG$1 + 8ll) = 5ll;
	*(int64*)((int64)(int64*)ISFREE$1 + 8ll) = 0ll;
	int64 vr$2 = HISREGFREE( 0ll, 3ll );
	if( vr$2 == 0ll ) goto label$519;
	{
		*(int64*)REG$1 = 3ll;
		*(int64*)ISFREE$1 = -1ll;
		int64 vr$3 = HISREGFREE( 0ll, 0ll );
		if( vr$3 == 0ll ) goto label$521;
		{
			*(int64*)((int64)(int64*)REG$1 + 8ll) = 0ll;
			*(int64*)((int64)(int64*)ISFREE$1 + 8ll) = -1ll;
		}
		goto label$520;
		label$521:;
		int64 vr$4 = HISREGFREE( 0ll, 5ll );
		if( vr$4 == 0ll ) goto label$522;
		{
			*(int64*)((int64)(int64*)REG$1 + 8ll) = 5ll;
			*(int64*)((int64)(int64*)ISFREE$1 + 8ll) = -1ll;
		}
		label$522:;
		label$520:;
	}
	goto label$518;
	label$519:;
	int64 vr$5 = HISREGFREE( 0ll, 0ll );
	if( vr$5 == 0ll ) goto label$523;
	{
		*(int64*)REG$1 = 0ll;
		*(int64*)ISFREE$1 = -1ll;
		int64 vr$6 = HISREGFREE( 0ll, 5ll );
		if( vr$6 == 0ll ) goto label$525;
		{
			*(int64*)((int64)(int64*)REG$1 + 8ll) = 5ll;
			*(int64*)((int64)(int64*)ISFREE$1 + 8ll) = -1ll;
		}
		label$525:;
		label$524:;
	}
	goto label$518;
	label$523:;
	{
		int64 vr$7 = HISREGFREE( 0ll, 5ll );
		if( vr$7 == 0ll ) goto label$527;
		{
			*(int64*)((int64)(int64*)REG$1 + 8ll) = 5ll;
			*(int64*)((int64)(int64*)ISFREE$1 + 8ll) = -1ll;
		}
		label$527:;
		label$526:;
	}
	label$518:;
	int64 vr$8 = HFINDFREEREG( 1ll );
	*(int64*)((int64)(int64*)REG$1 + 16ll) = vr$8;
	if( *(int64*)((int64)(int64*)REG$1 + 16ll) != -1ll ) goto label$529;
	{
		*(int64*)((int64)(int64*)REG$1 + 16ll) = 0ll;
		*(int64*)((int64)(int64*)ISFREE$1 + 16ll) = 0ll;
	}
	goto label$528;
	label$529:;
	{
		*(int64*)((int64)(int64*)ISFREE$1 + 16ll) = -1ll;
	}
	label$528:;
	STACKSIZE$1 = STACKSIZE$1 + ((*(int64*)ISFREE$1 & 1ll) << (2ll & 63ll));
	STACKSIZE$1 = STACKSIZE$1 + ((*(int64*)((int64)(int64*)ISFREE$1 + 8ll) & 1ll) << (2ll & 63ll));
	STACKSIZE$1 = STACKSIZE$1 + ((*(int64*)((int64)(int64*)ISFREE$1 + 16ll) & 1ll) << (2ll & 63ll));
	char* vr$18 = HGETREGNAME( 8ll, *(int64*)REG$1 );
	fb_StrAssign( (void*)REGNAME$1, -1ll, (void*)vr$18, 0ll, 0 );
	char* vr$19 = HGETREGNAME( 8ll, *(int64*)((int64)(int64*)REG$1 + 8ll) );
	fb_StrAssign( (void*)((uint8*)REGNAME$1 + 24ll), -1ll, (void*)vr$19, 0ll, 0 );
	char* vr$20 = HGETREGNAME( 15ll, *(int64*)((int64)(int64*)REG$1 + 16ll) );
	fb_StrAssign( (void*)((uint8*)REGNAME$1 + 48ll), -1ll, (void*)vr$20, 0ll, 0 );
	struct $8FBSYMBOL* vr$21 = SYMBALLOCINTCONST( 2147483647ll, 9ll );
	SYM_INVSIGNBITMASK$1 = vr$21;
	*(int64*)((uint8*)SYM_INVSIGNBITMASK$1 + 168ll) = 16ll;
	struct $6IRVREG* vr$24 = (*(tmp$72*)((uint8*)&IR$ + 472ll))( 9ll, (struct $8FBSYMBOL*)0ull, SYM_INVSIGNBITMASK$1, *(int64*)((uint8*)SYM_INVSIGNBITMASK$1 + 88ll) );
	VREG_INVSIGNBITMASK$1 = vr$24;
	struct $8FBSYMBOL* vr$25 = SYMBALLOCINTCONST( 1070141403ll, 9ll );
	SYM_PIOVERTWO$1 = vr$25;
	*(int64*)((uint8*)SYM_PIOVERTWO$1 + 168ll) = 16ll;
	struct $6IRVREG* vr$28 = (*(tmp$72*)((uint8*)&IR$ + 472ll))( 9ll, (struct $8FBSYMBOL*)0ull, SYM_PIOVERTWO$1, *(int64*)((uint8*)SYM_PIOVERTWO$1 + 88ll) );
	VREG_PIOVERTWO$1 = vr$28;
	struct $8FBSYMBOL* vr$29 = SYMBALLOCINTCONST( 1059256707ll, 9ll );
	SYM_TWOOVERPI$1 = vr$29;
	*(int64*)((uint8*)SYM_TWOOVERPI$1 + 168ll) = 16ll;
	struct $6IRVREG* vr$32 = (*(tmp$72*)((uint8*)&IR$ + 472ll))( 9ll, (struct $8FBSYMBOL*)0ull, SYM_TWOOVERPI$1, *(int64*)((uint8*)SYM_TWOOVERPI$1 + 88ll) );
	VREG_TWOOVERPI$1 = vr$32;
	struct $8FBSYMBOL* vr$33 = SYMBALLOCINTCONST( 1065353216ll, 9ll );
	SYM_ONE$1 = vr$33;
	*(int64*)((uint8*)SYM_ONE$1 + 168ll) = 16ll;
	struct $6IRVREG* vr$36 = (*(tmp$72*)((uint8*)&IR$ + 472ll))( 9ll, (struct $8FBSYMBOL*)0ull, SYM_ONE$1, *(int64*)((uint8*)SYM_ONE$1 + 88ll) );
	VREG_ONE$1 = vr$36;
	struct $8FBSYMBOL* vr$37 = SYMBALLOCINTCONST( 1070141403ll, 9ll );
	SYM_SIN_C0$1 = vr$37;
	*(int64*)((uint8*)SYM_SIN_C0$1 + 168ll) = 16ll;
	struct $6IRVREG* vr$40 = (*(tmp$72*)((uint8*)&IR$ + 472ll))( 9ll, (struct $8FBSYMBOL*)0ull, SYM_SIN_C0$1, *(int64*)((uint8*)SYM_SIN_C0$1 + 88ll) );
	VREG_SIN_C0$1 = vr$40;
	struct $8FBSYMBOL* vr$41 = SYMBALLOCINTCONST( 3206897127ll, 9ll );
	SYM_SIN_C1$1 = vr$41;
	*(int64*)((uint8*)SYM_SIN_C1$1 + 168ll) = 16ll;
	struct $6IRVREG* vr$44 = (*(tmp$72*)((uint8*)&IR$ + 472ll))( 9ll, (struct $8FBSYMBOL*)0ull, SYM_SIN_C1$1, *(int64*)((uint8*)SYM_SIN_C1$1 + 88ll) );
	VREG_SIN_C1$1 = vr$44;
	struct $8FBSYMBOL* vr$45 = SYMBALLOCINTCONST( 1034106339ll, 9ll );
	SYM_SIN_C2$1 = vr$45;
	*(int64*)((uint8*)SYM_SIN_C2$1 + 168ll) = 16ll;
	struct $6IRVREG* vr$48 = (*(tmp$72*)((uint8*)&IR$ + 472ll))( 9ll, (struct $8FBSYMBOL*)0ull, SYM_SIN_C2$1, *(int64*)((uint8*)SYM_SIN_C2$1 + 88ll) );
	VREG_SIN_C2$1 = vr$48;
	struct $8FBSYMBOL* vr$49 = SYMBALLOCINTCONST( 3147393382ll, 9ll );
	SYM_SIN_C3$1 = vr$49;
	*(int64*)((uint8*)SYM_SIN_C3$1 + 168ll) = 16ll;
	struct $6IRVREG* vr$52 = (*(tmp$72*)((uint8*)&IR$ + 472ll))( 9ll, (struct $8FBSYMBOL*)0ull, SYM_SIN_C3$1, *(int64*)((uint8*)SYM_SIN_C3$1 + 88ll) );
	VREG_SIN_C3$1 = vr$52;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	__builtin_memset( &TMP$1043$1, 0, 24ll );
	FBSTRING* vr$54 = fb_LongintToStr( STACKSIZE$1 );
	__builtin_memset( &TMP$1042$1, 0, 24ll );
	FBSTRING* vr$57 = fb_StrConcat( &TMP$1042$1, (void*)"sub esp, ", 10ll, (void*)vr$54, -1ll );
	fb_StrAssign( (void*)&TMP$1043$1, -1ll, (void*)vr$57, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1043$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1043$1 );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$531;
	{
		FBSTRING TMP$1044$2;
		FBSTRING TMP$1045$2;
		FBSTRING TMP$1046$2;
		FBSTRING TMP$1047$2;
		OUTP( (char*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$1047$2, 0, 24ll );
		__builtin_memset( &TMP$1044$2, 0, 24ll );
		FBSTRING* vr$64 = fb_StrConcat( &TMP$1044$2, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1045$2, 0, 24ll );
		FBSTRING* vr$67 = fb_StrConcat( &TMP$1045$2, (void*)vr$64, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1046$2, 0, 24ll );
		FBSTRING* vr$70 = fb_StrConcat( &TMP$1046$2, (void*)vr$67, -1ll, (void*)"dword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$1047$2, -1ll, (void*)vr$70, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1047$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1047$2 );
	}
	label$531:;
	label$530:;
	STACKPOINTER$1 = 4ll;
	{
		I$1 = 0ll;
		label$535:;
		{
			if( *(int64*)((int64)(int64*)ISFREE$1 + (I$1 << (3ll & 63ll))) != 0ll ) goto label$537;
			{
				if( I$1 >= 2ll ) goto label$539;
				{
					FBSTRING TMP$1050$5;
					FBSTRING TMP$1051$5;
					FBSTRING TMP$1052$5;
					FBSTRING TMP$1053$5;
					FBSTRING TMP$1054$5;
					__builtin_memset( &TMP$1054$5, 0, 24ll );
					FBSTRING* vr$77 = fb_LongintToStr( STACKPOINTER$1 );
					__builtin_memset( &TMP$1050$5, 0, 24ll );
					FBSTRING* vr$80 = fb_StrConcat( &TMP$1050$5, (void*)"mov [esp+", 10ll, (void*)vr$77, -1ll );
					__builtin_memset( &TMP$1051$5, 0, 24ll );
					FBSTRING* vr$83 = fb_StrConcat( &TMP$1051$5, (void*)vr$80, -1ll, (void*)"]", 2ll );
					__builtin_memset( &TMP$1052$5, 0, 24ll );
					FBSTRING* vr$86 = fb_StrConcat( &TMP$1052$5, (void*)vr$83, -1ll, (void*)", ", 3ll );
					__builtin_memset( &TMP$1053$5, 0, 24ll );
					FBSTRING* vr$89 = fb_StrConcat( &TMP$1053$5, (void*)vr$86, -1ll, (void*)((int64)(FBSTRING*)REGNAME$1 + (I$1 * 24ll)), -1ll );
					fb_StrAssign( (void*)&TMP$1054$5, -1ll, (void*)vr$89, -1ll, 0 );
					OUTP( (char*)*(char**)&TMP$1054$5 );
					fb_StrDelete( (FBSTRING*)&TMP$1054$5 );
				}
				goto label$538;
				label$539:;
				{
					FBSTRING TMP$1056$5;
					FBSTRING TMP$1057$5;
					FBSTRING TMP$1058$5;
					FBSTRING TMP$1059$5;
					FBSTRING TMP$1060$5;
					__builtin_memset( &TMP$1060$5, 0, 24ll );
					FBSTRING* vr$95 = fb_LongintToStr( STACKPOINTER$1 );
					__builtin_memset( &TMP$1056$5, 0, 24ll );
					FBSTRING* vr$98 = fb_StrConcat( &TMP$1056$5, (void*)"movss [esp+", 12ll, (void*)vr$95, -1ll );
					__builtin_memset( &TMP$1057$5, 0, 24ll );
					FBSTRING* vr$101 = fb_StrConcat( &TMP$1057$5, (void*)vr$98, -1ll, (void*)"]", 2ll );
					__builtin_memset( &TMP$1058$5, 0, 24ll );
					FBSTRING* vr$104 = fb_StrConcat( &TMP$1058$5, (void*)vr$101, -1ll, (void*)", ", 3ll );
					__builtin_memset( &TMP$1059$5, 0, 24ll );
					FBSTRING* vr$107 = fb_StrConcat( &TMP$1059$5, (void*)vr$104, -1ll, (void*)((int64)(FBSTRING*)REGNAME$1 + (I$1 * 24ll)), -1ll );
					fb_StrAssign( (void*)&TMP$1060$5, -1ll, (void*)vr$107, -1ll, 0 );
					OUTP( (char*)*(char**)&TMP$1060$5 );
					fb_StrDelete( (FBSTRING*)&TMP$1060$5 );
				}
				label$538:;
				STACKPOINTER$1 = STACKPOINTER$1 + 4ll;
			}
			label$537:;
			label$536:;
		}
		label$533:;
		I$1 = I$1 + 1ll;
		label$532:;
		if( I$1 <= 2ll ) goto label$535;
		label$534:;
	}
	if( ISCOS$1 != 0ll ) goto label$541;
	{
		FBSTRING TMP$1061$2;
		FBSTRING TMP$1062$2;
		FBSTRING TMP$1064$2;
		FBSTRING TMP$1065$2;
		FBSTRING TMP$1066$2;
		FBSTRING TMP$1067$2;
		__builtin_memset( &TMP$1062$2, 0, 24ll );
		__builtin_memset( &TMP$1061$2, 0, 24ll );
		FBSTRING* vr$115 = fb_StrConcat( &TMP$1061$2, (void*)"movss [esp], ", 14ll, (void*)&DST$1, -1ll );
		fb_StrAssign( (void*)&TMP$1062$2, -1ll, (void*)vr$115, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1062$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1062$2 );
		HPREPOPERAND( VREG_TWOOVERPI$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
		__builtin_memset( &TMP$1067$2, 0, 24ll );
		__builtin_memset( &TMP$1064$2, 0, 24ll );
		FBSTRING* vr$121 = fb_StrConcat( &TMP$1064$2, (void*)"mulss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1065$2, 0, 24ll );
		FBSTRING* vr$124 = fb_StrConcat( &TMP$1065$2, (void*)vr$121, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1066$2, 0, 24ll );
		FBSTRING* vr$127 = fb_StrConcat( &TMP$1066$2, (void*)vr$124, -1ll, (void*)&SRC$1, -1ll );
		fb_StrAssign( (void*)&TMP$1067$2, -1ll, (void*)vr$127, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1067$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1067$2 );
		OUTP( (char*)"and       dword ptr [esp], 0x80000000" );
	}
	label$541:;
	label$540:;
	HPREPOPERAND( VREG_INVSIGNBITMASK$1, &SRC$1, 25ll, 0ll, 0ll, -1ll );
	__builtin_memset( &TMP$1072$1, 0, 24ll );
	__builtin_memset( &TMP$1069$1, 0, 24ll );
	FBSTRING* vr$133 = fb_StrConcat( &TMP$1069$1, (void*)"andps ", 7ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1070$1, 0, 24ll );
	FBSTRING* vr$136 = fb_StrConcat( &TMP$1070$1, (void*)vr$133, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1071$1, 0, 24ll );
	FBSTRING* vr$139 = fb_StrConcat( &TMP$1071$1, (void*)vr$136, -1ll, (void*)&SRC$1, -1ll );
	fb_StrAssign( (void*)&TMP$1072$1, -1ll, (void*)vr$139, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1072$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1072$1 );
	if( ISCOS$1 != -1ll ) goto label$543;
	{
		FBSTRING TMP$1073$2;
		FBSTRING TMP$1074$2;
		FBSTRING TMP$1075$2;
		FBSTRING TMP$1076$2;
		FBSTRING TMP$1077$2;
		FBSTRING TMP$1078$2;
		FBSTRING TMP$1079$2;
		FBSTRING TMP$1080$2;
		HPREPOPERAND( VREG_PIOVERTWO$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
		__builtin_memset( &TMP$1076$2, 0, 24ll );
		__builtin_memset( &TMP$1073$2, 0, 24ll );
		FBSTRING* vr$145 = fb_StrConcat( &TMP$1073$2, (void*)"addss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1074$2, 0, 24ll );
		FBSTRING* vr$148 = fb_StrConcat( &TMP$1074$2, (void*)vr$145, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1075$2, 0, 24ll );
		FBSTRING* vr$151 = fb_StrConcat( &TMP$1075$2, (void*)vr$148, -1ll, (void*)&SRC$1, -1ll );
		fb_StrAssign( (void*)&TMP$1076$2, -1ll, (void*)vr$151, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1076$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1076$2 );
		HPREPOPERAND( VREG_TWOOVERPI$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
		__builtin_memset( &TMP$1080$2, 0, 24ll );
		__builtin_memset( &TMP$1077$2, 0, 24ll );
		FBSTRING* vr$157 = fb_StrConcat( &TMP$1077$2, (void*)"mulss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1078$2, 0, 24ll );
		FBSTRING* vr$160 = fb_StrConcat( &TMP$1078$2, (void*)vr$157, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1079$2, 0, 24ll );
		FBSTRING* vr$163 = fb_StrConcat( &TMP$1079$2, (void*)vr$160, -1ll, (void*)&SRC$1, -1ll );
		fb_StrAssign( (void*)&TMP$1080$2, -1ll, (void*)vr$163, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1080$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1080$2 );
	}
	label$543:;
	label$542:;
	__builtin_memset( &TMP$1085$1, 0, 24ll );
	__builtin_memset( &TMP$1082$1, 0, 24ll );
	FBSTRING* vr$169 = fb_StrConcat( &TMP$1082$1, (void*)"cvttss2si ", 11ll, (void*)REGNAME$1, -1ll );
	__builtin_memset( &TMP$1083$1, 0, 24ll );
	FBSTRING* vr$172 = fb_StrConcat( &TMP$1083$1, (void*)vr$169, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1084$1, 0, 24ll );
	FBSTRING* vr$175 = fb_StrConcat( &TMP$1084$1, (void*)vr$172, -1ll, (void*)&DST$1, -1ll );
	fb_StrAssign( (void*)&TMP$1085$1, -1ll, (void*)vr$175, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1085$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1085$1 );
	HPREPOPERAND( VREG_ONE$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	__builtin_memset( &TMP$1087$1, 0, 24ll );
	__builtin_memset( &TMP$1086$1, 0, 24ll );
	FBSTRING* vr$181 = fb_StrConcat( &TMP$1086$1, (void*)"movss xmm7, ", 13ll, (void*)&SRC$1, -1ll );
	fb_StrAssign( (void*)&TMP$1087$1, -1ll, (void*)vr$181, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1087$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1087$1 );
	__builtin_memset( &TMP$1092$1, 0, 24ll );
	__builtin_memset( &TMP$1089$1, 0, 24ll );
	FBSTRING* vr$187 = fb_StrConcat( &TMP$1089$1, (void*)"mov       ", 11ll, (void*)((uint8*)REGNAME$1 + 24ll), -1ll );
	__builtin_memset( &TMP$1090$1, 0, 24ll );
	FBSTRING* vr$190 = fb_StrConcat( &TMP$1090$1, (void*)vr$187, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1091$1, 0, 24ll );
	FBSTRING* vr$193 = fb_StrConcat( &TMP$1091$1, (void*)vr$190, -1ll, (void*)REGNAME$1, -1ll );
	fb_StrAssign( (void*)&TMP$1092$1, -1ll, (void*)vr$193, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1092$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1092$1 );
	__builtin_memset( &TMP$1097$1, 0, 24ll );
	__builtin_memset( &TMP$1094$1, 0, 24ll );
	FBSTRING* vr$199 = fb_StrConcat( &TMP$1094$1, (void*)"cvtsi2ss  ", 11ll, (void*)((uint8*)REGNAME$1 + 48ll), -1ll );
	__builtin_memset( &TMP$1095$1, 0, 24ll );
	FBSTRING* vr$202 = fb_StrConcat( &TMP$1095$1, (void*)vr$199, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1096$1, 0, 24ll );
	FBSTRING* vr$205 = fb_StrConcat( &TMP$1096$1, (void*)vr$202, -1ll, (void*)REGNAME$1, -1ll );
	fb_StrAssign( (void*)&TMP$1097$1, -1ll, (void*)vr$205, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1097$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1097$1 );
	__builtin_memset( &TMP$1103$1, 0, 24ll );
	__builtin_memset( &TMP$1100$1, 0, 24ll );
	FBSTRING* vr$211 = fb_StrConcat( &TMP$1100$1, (void*)"shl       ", 11ll, (void*)((uint8*)REGNAME$1 + 24ll), -1ll );
	__builtin_memset( &TMP$1101$1, 0, 24ll );
	FBSTRING* vr$214 = fb_StrConcat( &TMP$1101$1, (void*)vr$211, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1102$1, 0, 24ll );
	FBSTRING* vr$217 = fb_StrConcat( &TMP$1102$1, (void*)vr$214, -1ll, (void*)"30", 3ll );
	fb_StrAssign( (void*)&TMP$1103$1, -1ll, (void*)vr$217, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1103$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1103$1 );
	__builtin_memset( &TMP$1106$1, 0, 24ll );
	__builtin_memset( &TMP$1105$1, 0, 24ll );
	FBSTRING* vr$223 = fb_StrConcat( &TMP$1105$1, (void*)"not       ", 11ll, (void*)REGNAME$1, -1ll );
	fb_StrAssign( (void*)&TMP$1106$1, -1ll, (void*)vr$223, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1106$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1106$1 );
	__builtin_memset( &TMP$1111$1, 0, 24ll );
	__builtin_memset( &TMP$1108$1, 0, 24ll );
	FBSTRING* vr$229 = fb_StrConcat( &TMP$1108$1, (void*)"and       ", 11ll, (void*)((uint8*)REGNAME$1 + 24ll), -1ll );
	__builtin_memset( &TMP$1109$1, 0, 24ll );
	FBSTRING* vr$232 = fb_StrConcat( &TMP$1109$1, (void*)vr$229, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1110$1, 0, 24ll );
	FBSTRING* vr$235 = fb_StrConcat( &TMP$1110$1, (void*)vr$232, -1ll, (void*)"0x80000000", 11ll );
	fb_StrAssign( (void*)&TMP$1111$1, -1ll, (void*)vr$235, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1111$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1111$1 );
	__builtin_memset( &TMP$1116$1, 0, 24ll );
	__builtin_memset( &TMP$1113$1, 0, 24ll );
	FBSTRING* vr$241 = fb_StrConcat( &TMP$1113$1, (void*)"and       ", 11ll, (void*)REGNAME$1, -1ll );
	__builtin_memset( &TMP$1114$1, 0, 24ll );
	FBSTRING* vr$244 = fb_StrConcat( &TMP$1114$1, (void*)vr$241, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1115$1, 0, 24ll );
	FBSTRING* vr$247 = fb_StrConcat( &TMP$1115$1, (void*)vr$244, -1ll, (void*)"0x1", 4ll );
	fb_StrAssign( (void*)&TMP$1116$1, -1ll, (void*)vr$247, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1116$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1116$1 );
	__builtin_memset( &TMP$1121$1, 0, 24ll );
	__builtin_memset( &TMP$1118$1, 0, 24ll );
	FBSTRING* vr$253 = fb_StrConcat( &TMP$1118$1, (void*)"subss ", 7ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1119$1, 0, 24ll );
	FBSTRING* vr$256 = fb_StrConcat( &TMP$1119$1, (void*)vr$253, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1120$1, 0, 24ll );
	FBSTRING* vr$259 = fb_StrConcat( &TMP$1120$1, (void*)vr$256, -1ll, (void*)((uint8*)REGNAME$1 + 48ll), -1ll );
	fb_StrAssign( (void*)&TMP$1121$1, -1ll, (void*)vr$259, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1121$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1121$1 );
	__builtin_memset( &TMP$1124$1, 0, 24ll );
	__builtin_memset( &TMP$1123$1, 0, 24ll );
	FBSTRING* vr$265 = fb_StrConcat( &TMP$1123$1, (void*)"dec       ", 11ll, (void*)REGNAME$1, -1ll );
	fb_StrAssign( (void*)&TMP$1124$1, -1ll, (void*)vr$265, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1124$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1124$1 );
	__builtin_memset( &TMP$1129$1, 0, 24ll );
	__builtin_memset( &TMP$1126$1, 0, 24ll );
	FBSTRING* vr$271 = fb_StrConcat( &TMP$1126$1, (void*)"minss ", 7ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1127$1, 0, 24ll );
	FBSTRING* vr$274 = fb_StrConcat( &TMP$1127$1, (void*)vr$271, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1128$1, 0, 24ll );
	FBSTRING* vr$277 = fb_StrConcat( &TMP$1128$1, (void*)vr$274, -1ll, (void*)"xmm7", 5ll );
	fb_StrAssign( (void*)&TMP$1129$1, -1ll, (void*)vr$277, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1129$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1129$1 );
	__builtin_memset( &TMP$1134$1, 0, 24ll );
	__builtin_memset( &TMP$1131$1, 0, 24ll );
	FBSTRING* vr$283 = fb_StrConcat( &TMP$1131$1, (void*)"movd      ", 11ll, (void*)((uint8*)REGNAME$1 + 48ll), -1ll );
	__builtin_memset( &TMP$1132$1, 0, 24ll );
	FBSTRING* vr$286 = fb_StrConcat( &TMP$1132$1, (void*)vr$283, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1133$1, 0, 24ll );
	FBSTRING* vr$289 = fb_StrConcat( &TMP$1133$1, (void*)vr$286, -1ll, (void*)REGNAME$1, -1ll );
	fb_StrAssign( (void*)&TMP$1134$1, -1ll, (void*)vr$289, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1134$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1134$1 );
	__builtin_memset( &TMP$1138$1, 0, 24ll );
	__builtin_memset( &TMP$1137$1, 0, 24ll );
	FBSTRING* vr$295 = fb_StrConcat( &TMP$1137$1, (void*)"subss xmm7, ", 13ll, (void*)&DST$1, -1ll );
	fb_StrAssign( (void*)&TMP$1138$1, -1ll, (void*)vr$295, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1138$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1138$1 );
	__builtin_memset( &TMP$1140$1, 0, 24ll );
	__builtin_memset( &TMP$1139$1, 0, 24ll );
	FBSTRING* vr$301 = fb_StrConcat( &TMP$1139$1, (void*)"andps xmm7, ", 13ll, (void*)((uint8*)REGNAME$1 + 48ll), -1ll );
	fb_StrAssign( (void*)&TMP$1140$1, -1ll, (void*)vr$301, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1140$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1140$1 );
	__builtin_memset( &TMP$1145$1, 0, 24ll );
	__builtin_memset( &TMP$1142$1, 0, 24ll );
	FBSTRING* vr$307 = fb_StrConcat( &TMP$1142$1, (void*)"andnps    ", 11ll, (void*)((uint8*)REGNAME$1 + 48ll), -1ll );
	__builtin_memset( &TMP$1143$1, 0, 24ll );
	FBSTRING* vr$310 = fb_StrConcat( &TMP$1143$1, (void*)vr$307, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1144$1, 0, 24ll );
	FBSTRING* vr$313 = fb_StrConcat( &TMP$1144$1, (void*)vr$310, -1ll, (void*)&DST$1, -1ll );
	fb_StrAssign( (void*)&TMP$1145$1, -1ll, (void*)vr$313, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1145$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1145$1 );
	__builtin_memset( &TMP$1149$1, 0, 24ll );
	__builtin_memset( &TMP$1148$1, 0, 24ll );
	FBSTRING* vr$319 = fb_StrConcat( &TMP$1148$1, (void*)"orps      xmm7, ", 17ll, (void*)((uint8*)REGNAME$1 + 48ll), -1ll );
	fb_StrAssign( (void*)&TMP$1149$1, -1ll, (void*)vr$319, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1149$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1149$1 );
	if( ISCOS$1 != 0ll ) goto label$545;
	{
		FBSTRING TMP$1152$2;
		FBSTRING TMP$1153$2;
		FBSTRING TMP$1154$2;
		FBSTRING TMP$1155$2;
		__builtin_memset( &TMP$1155$2, 0, 24ll );
		__builtin_memset( &TMP$1152$2, 0, 24ll );
		FBSTRING* vr$325 = fb_StrConcat( &TMP$1152$2, (void*)"xor       ", 11ll, (void*)((uint8*)REGNAME$1 + 24ll), -1ll );
		__builtin_memset( &TMP$1153$2, 0, 24ll );
		FBSTRING* vr$328 = fb_StrConcat( &TMP$1153$2, (void*)vr$325, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1154$2, 0, 24ll );
		FBSTRING* vr$331 = fb_StrConcat( &TMP$1154$2, (void*)vr$328, -1ll, (void*)"[esp]", 6ll );
		fb_StrAssign( (void*)&TMP$1155$2, -1ll, (void*)vr$331, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1155$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1155$2 );
	}
	label$545:;
	label$544:;
	__builtin_memset( &TMP$1159$1, 0, 24ll );
	__builtin_memset( &TMP$1156$1, 0, 24ll );
	FBSTRING* vr$337 = fb_StrConcat( &TMP$1156$1, (void*)"movd      ", 11ll, (void*)REGNAME$1, -1ll );
	__builtin_memset( &TMP$1157$1, 0, 24ll );
	FBSTRING* vr$340 = fb_StrConcat( &TMP$1157$1, (void*)vr$337, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1158$1, 0, 24ll );
	FBSTRING* vr$343 = fb_StrConcat( &TMP$1158$1, (void*)vr$340, -1ll, (void*)"xmm7", 5ll );
	fb_StrAssign( (void*)&TMP$1159$1, -1ll, (void*)vr$343, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1159$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1159$1 );
	OUTP( (char*)"mulss xmm7, xmm7" );
	__builtin_memset( &TMP$1165$1, 0, 24ll );
	__builtin_memset( &TMP$1162$1, 0, 24ll );
	FBSTRING* vr$349 = fb_StrConcat( &TMP$1162$1, (void*)"or        ", 11ll, (void*)((uint8*)REGNAME$1 + 24ll), -1ll );
	__builtin_memset( &TMP$1163$1, 0, 24ll );
	FBSTRING* vr$352 = fb_StrConcat( &TMP$1163$1, (void*)vr$349, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1164$1, 0, 24ll );
	FBSTRING* vr$355 = fb_StrConcat( &TMP$1164$1, (void*)vr$352, -1ll, (void*)REGNAME$1, -1ll );
	fb_StrAssign( (void*)&TMP$1165$1, -1ll, (void*)vr$355, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1165$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1165$1 );
	__builtin_memset( &TMP$1169$1, 0, 24ll );
	__builtin_memset( &TMP$1166$1, 0, 24ll );
	FBSTRING* vr$361 = fb_StrConcat( &TMP$1166$1, (void*)"movss ", 7ll, (void*)((uint8*)REGNAME$1 + 48ll), -1ll );
	__builtin_memset( &TMP$1167$1, 0, 24ll );
	FBSTRING* vr$364 = fb_StrConcat( &TMP$1167$1, (void*)vr$361, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1168$1, 0, 24ll );
	FBSTRING* vr$367 = fb_StrConcat( &TMP$1168$1, (void*)vr$364, -1ll, (void*)"xmm7", 5ll );
	fb_StrAssign( (void*)&TMP$1169$1, -1ll, (void*)vr$367, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1169$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1169$1 );
	HPREPOPERAND( VREG_SIN_C3$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	__builtin_memset( &TMP$1173$1, 0, 24ll );
	__builtin_memset( &TMP$1172$1, 0, 24ll );
	FBSTRING* vr$373 = fb_StrConcat( &TMP$1172$1, (void*)"mulss xmm7, ", 13ll, (void*)&SRC$1, -1ll );
	fb_StrAssign( (void*)&TMP$1173$1, -1ll, (void*)vr$373, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1173$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1173$1 );
	HPREPOPERAND( VREG_SIN_C2$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	__builtin_memset( &TMP$1177$1, 0, 24ll );
	__builtin_memset( &TMP$1176$1, 0, 24ll );
	FBSTRING* vr$379 = fb_StrConcat( &TMP$1176$1, (void*)"addss xmm7, ", 13ll, (void*)&SRC$1, -1ll );
	fb_StrAssign( (void*)&TMP$1177$1, -1ll, (void*)vr$379, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1177$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1177$1 );
	__builtin_memset( &TMP$1179$1, 0, 24ll );
	__builtin_memset( &TMP$1178$1, 0, 24ll );
	FBSTRING* vr$385 = fb_StrConcat( &TMP$1178$1, (void*)"mulss xmm7, ", 13ll, (void*)((uint8*)REGNAME$1 + 48ll), -1ll );
	fb_StrAssign( (void*)&TMP$1179$1, -1ll, (void*)vr$385, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1179$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1179$1 );
	__builtin_memset( &TMP$1183$1, 0, 24ll );
	__builtin_memset( &TMP$1180$1, 0, 24ll );
	FBSTRING* vr$391 = fb_StrConcat( &TMP$1180$1, (void*)"movd      ", 11ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1181$1, 0, 24ll );
	FBSTRING* vr$394 = fb_StrConcat( &TMP$1181$1, (void*)vr$391, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1182$1, 0, 24ll );
	FBSTRING* vr$397 = fb_StrConcat( &TMP$1182$1, (void*)vr$394, -1ll, (void*)((uint8*)REGNAME$1 + 24ll), -1ll );
	fb_StrAssign( (void*)&TMP$1183$1, -1ll, (void*)vr$397, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1183$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1183$1 );
	HPREPOPERAND( VREG_SIN_C1$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	__builtin_memset( &TMP$1185$1, 0, 24ll );
	__builtin_memset( &TMP$1184$1, 0, 24ll );
	FBSTRING* vr$403 = fb_StrConcat( &TMP$1184$1, (void*)"addss xmm7, ", 13ll, (void*)&SRC$1, -1ll );
	fb_StrAssign( (void*)&TMP$1185$1, -1ll, (void*)vr$403, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1185$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1185$1 );
	__builtin_memset( &TMP$1187$1, 0, 24ll );
	__builtin_memset( &TMP$1186$1, 0, 24ll );
	FBSTRING* vr$409 = fb_StrConcat( &TMP$1186$1, (void*)"mulss xmm7, ", 13ll, (void*)((uint8*)REGNAME$1 + 48ll), -1ll );
	fb_StrAssign( (void*)&TMP$1187$1, -1ll, (void*)vr$409, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1187$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1187$1 );
	HPREPOPERAND( VREG_SIN_C0$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	__builtin_memset( &TMP$1189$1, 0, 24ll );
	__builtin_memset( &TMP$1188$1, 0, 24ll );
	FBSTRING* vr$415 = fb_StrConcat( &TMP$1188$1, (void*)"addss xmm7, ", 13ll, (void*)&SRC$1, -1ll );
	fb_StrAssign( (void*)&TMP$1189$1, -1ll, (void*)vr$415, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1189$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1189$1 );
	__builtin_memset( &TMP$1193$1, 0, 24ll );
	__builtin_memset( &TMP$1190$1, 0, 24ll );
	FBSTRING* vr$421 = fb_StrConcat( &TMP$1190$1, (void*)"mulss ", 7ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1191$1, 0, 24ll );
	FBSTRING* vr$424 = fb_StrConcat( &TMP$1191$1, (void*)vr$421, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1192$1, 0, 24ll );
	FBSTRING* vr$427 = fb_StrConcat( &TMP$1192$1, (void*)vr$424, -1ll, (void*)"xmm7", 5ll );
	fb_StrAssign( (void*)&TMP$1193$1, -1ll, (void*)vr$427, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1193$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1193$1 );
	STACKPOINTER$1 = 4ll;
	{
		I$1 = 0ll;
		label$549:;
		{
			if( *(int64*)((int64)(int64*)ISFREE$1 + (I$1 << (3ll & 63ll))) != 0ll ) goto label$551;
			{
				if( I$1 >= 2ll ) goto label$553;
				{
					FBSTRING TMP$1195$5;
					FBSTRING TMP$1196$5;
					FBSTRING TMP$1197$5;
					FBSTRING TMP$1198$5;
					FBSTRING TMP$1199$5;
					FBSTRING TMP$1200$5;
					__builtin_memset( &TMP$1200$5, 0, 24ll );
					FBSTRING* vr$432 = fb_LongintToStr( STACKPOINTER$1 );
					__builtin_memset( &TMP$1195$5, 0, 24ll );
					FBSTRING* vr$437 = fb_StrConcat( &TMP$1195$5, (void*)"mov ", 5ll, (void*)((int64)(FBSTRING*)REGNAME$1 + (I$1 * 24ll)), -1ll );
					__builtin_memset( &TMP$1196$5, 0, 24ll );
					FBSTRING* vr$440 = fb_StrConcat( &TMP$1196$5, (void*)vr$437, -1ll, (void*)", ", 3ll );
					__builtin_memset( &TMP$1197$5, 0, 24ll );
					FBSTRING* vr$443 = fb_StrConcat( &TMP$1197$5, (void*)vr$440, -1ll, (void*)"[esp+", 6ll );
					__builtin_memset( &TMP$1198$5, 0, 24ll );
					FBSTRING* vr$446 = fb_StrConcat( &TMP$1198$5, (void*)vr$443, -1ll, (void*)vr$432, -1ll );
					__builtin_memset( &TMP$1199$5, 0, 24ll );
					FBSTRING* vr$449 = fb_StrConcat( &TMP$1199$5, (void*)vr$446, -1ll, (void*)"]", 2ll );
					fb_StrAssign( (void*)&TMP$1200$5, -1ll, (void*)vr$449, -1ll, 0 );
					OUTP( (char*)*(char**)&TMP$1200$5 );
					fb_StrDelete( (FBSTRING*)&TMP$1200$5 );
				}
				goto label$552;
				label$553:;
				{
					FBSTRING TMP$1201$5;
					FBSTRING TMP$1202$5;
					FBSTRING TMP$1203$5;
					FBSTRING TMP$1204$5;
					FBSTRING TMP$1205$5;
					FBSTRING TMP$1206$5;
					__builtin_memset( &TMP$1206$5, 0, 24ll );
					FBSTRING* vr$453 = fb_LongintToStr( STACKPOINTER$1 );
					__builtin_memset( &TMP$1201$5, 0, 24ll );
					FBSTRING* vr$458 = fb_StrConcat( &TMP$1201$5, (void*)"movss ", 7ll, (void*)((int64)(FBSTRING*)REGNAME$1 + (I$1 * 24ll)), -1ll );
					__builtin_memset( &TMP$1202$5, 0, 24ll );
					FBSTRING* vr$461 = fb_StrConcat( &TMP$1202$5, (void*)vr$458, -1ll, (void*)", ", 3ll );
					__builtin_memset( &TMP$1203$5, 0, 24ll );
					FBSTRING* vr$464 = fb_StrConcat( &TMP$1203$5, (void*)vr$461, -1ll, (void*)"[esp+", 6ll );
					__builtin_memset( &TMP$1204$5, 0, 24ll );
					FBSTRING* vr$467 = fb_StrConcat( &TMP$1204$5, (void*)vr$464, -1ll, (void*)vr$453, -1ll );
					__builtin_memset( &TMP$1205$5, 0, 24ll );
					FBSTRING* vr$470 = fb_StrConcat( &TMP$1205$5, (void*)vr$467, -1ll, (void*)"]", 2ll );
					fb_StrAssign( (void*)&TMP$1206$5, -1ll, (void*)vr$470, -1ll, 0 );
					OUTP( (char*)*(char**)&TMP$1206$5 );
					fb_StrDelete( (FBSTRING*)&TMP$1206$5 );
				}
				label$552:;
				STACKPOINTER$1 = STACKPOINTER$1 + 4ll;
			}
			label$551:;
			label$550:;
		}
		label$547:;
		I$1 = I$1 + 1ll;
		label$546:;
		if( I$1 <= 2ll ) goto label$549;
		label$548:;
	}
	__builtin_memset( &TMP$1208$1, 0, 24ll );
	FBSTRING* vr$476 = fb_LongintToStr( STACKSIZE$1 );
	__builtin_memset( &TMP$1207$1, 0, 24ll );
	FBSTRING* vr$479 = fb_StrConcat( &TMP$1207$1, (void*)"add esp, ", 10ll, (void*)vr$476, -1ll );
	fb_StrAssign( (void*)&TMP$1208$1, -1ll, (void*)vr$479, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1208$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1208$1 );
	label$515:;
}

static void _EMITSIN_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$1209$1;
	FBSTRING TMP$1227$1;
	FBSTRING TMP$1228$1;
	label$554:;
	static FBSTRING DST$1;
	static int64 DDSIZE$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$556;
	TMP$1209$1 = 24ll;
	goto label$798;
	label$556:;
	TMP$1209$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$798:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$1209$1 * 56ll)) + 8ll);
	if( ((int64)-(DDSIZE$1 == 4ll) & (int64)-(*(int64*)((uint8*)&ENV$ + 240ll) == 1ll)) == 0ll ) goto label$558;
	{
		HSINCOS_FAST_SSE( DVREG$1, 0ll );
		goto label$555;
	}
	label$558:;
	label$557:;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 1ll ) goto label$560;
	{
		FBSTRING TMP$1210$2;
		FBSTRING TMP$1211$2;
		__builtin_memset( &TMP$1211$2, 0, 24ll );
		FBSTRING* vr$10 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1210$2, 0, 24ll );
		FBSTRING* vr$13 = fb_StrConcat( &TMP$1210$2, (void*)"sub esp, ", 10ll, (void*)vr$10, -1ll );
		fb_StrAssign( (void*)&TMP$1211$2, -1ll, (void*)vr$13, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1211$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1211$2 );
		if( DDSIZE$1 <= 4ll ) goto label$562;
		{
			FBSTRING TMP$1212$3;
			FBSTRING TMP$1213$3;
			__builtin_memset( &TMP$1213$3, 0, 24ll );
			__builtin_memset( &TMP$1212$3, 0, 24ll );
			FBSTRING* vr$19 = fb_StrConcat( &TMP$1212$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$1213$3, -1ll, (void*)vr$19, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1213$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1213$3 );
			OUTP( (char*)"fld qword ptr [esp]" );
		}
		goto label$561;
		label$562:;
		{
			FBSTRING TMP$1214$3;
			FBSTRING TMP$1215$3;
			__builtin_memset( &TMP$1215$3, 0, 24ll );
			__builtin_memset( &TMP$1214$3, 0, 24ll );
			FBSTRING* vr$25 = fb_StrConcat( &TMP$1214$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$1215$3, -1ll, (void*)vr$25, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1215$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1215$3 );
			OUTP( (char*)"fld dword ptr [esp]" );
		}
		label$561:;
	}
	label$560:;
	label$559:;
	OUTP( (char*)"fsin" );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$564;
	{
		FBSTRING TMP$1217$2;
		FBSTRING TMP$1218$2;
		__builtin_memset( &TMP$1218$2, 0, 24ll );
		FBSTRING* vr$30 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1217$2, 0, 24ll );
		FBSTRING* vr$33 = fb_StrConcat( &TMP$1217$2, (void*)"sub esp, ", 10ll, (void*)vr$30, -1ll );
		fb_StrAssign( (void*)&TMP$1218$2, -1ll, (void*)vr$33, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1218$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1218$2 );
	}
	label$564:;
	label$563:;
	if( DDSIZE$1 <= 4ll ) goto label$566;
	{
		FBSTRING TMP$1219$2;
		FBSTRING TMP$1220$2;
		FBSTRING TMP$1221$2;
		FBSTRING TMP$1222$2;
		OUTP( (char*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$1222$2, 0, 24ll );
		__builtin_memset( &TMP$1219$2, 0, 24ll );
		FBSTRING* vr$39 = fb_StrConcat( &TMP$1219$2, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1220$2, 0, 24ll );
		FBSTRING* vr$42 = fb_StrConcat( &TMP$1220$2, (void*)vr$39, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1221$2, 0, 24ll );
		FBSTRING* vr$45 = fb_StrConcat( &TMP$1221$2, (void*)vr$42, -1ll, (void*)"qword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$1222$2, -1ll, (void*)vr$45, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1222$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1222$2 );
	}
	goto label$565;
	label$566:;
	{
		FBSTRING TMP$1223$2;
		FBSTRING TMP$1224$2;
		FBSTRING TMP$1225$2;
		FBSTRING TMP$1226$2;
		OUTP( (char*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$1226$2, 0, 24ll );
		__builtin_memset( &TMP$1223$2, 0, 24ll );
		FBSTRING* vr$51 = fb_StrConcat( &TMP$1223$2, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1224$2, 0, 24ll );
		FBSTRING* vr$54 = fb_StrConcat( &TMP$1224$2, (void*)vr$51, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1225$2, 0, 24ll );
		FBSTRING* vr$57 = fb_StrConcat( &TMP$1225$2, (void*)vr$54, -1ll, (void*)"dword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$1226$2, -1ll, (void*)vr$57, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1226$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1226$2 );
	}
	label$565:;
	__builtin_memset( &TMP$1228$1, 0, 24ll );
	FBSTRING* vr$61 = fb_LongintToStr( DDSIZE$1 );
	__builtin_memset( &TMP$1227$1, 0, 24ll );
	FBSTRING* vr$64 = fb_StrConcat( &TMP$1227$1, (void*)"add esp, ", 10ll, (void*)vr$61, -1ll );
	fb_StrAssign( (void*)&TMP$1228$1, -1ll, (void*)vr$64, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1228$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1228$1 );
	label$555:;
}

static void _EMITASIN_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$1229$1;
	FBSTRING TMP$1249$1;
	FBSTRING TMP$1250$1;
	label$567:;
	static FBSTRING DST$1;
	static int64 DDSIZE$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$569;
	TMP$1229$1 = 24ll;
	goto label$799;
	label$569:;
	TMP$1229$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$799:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$1229$1 * 56ll)) + 8ll);
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 1ll ) goto label$571;
	{
		FBSTRING TMP$1230$2;
		FBSTRING TMP$1231$2;
		__builtin_memset( &TMP$1231$2, 0, 24ll );
		FBSTRING* vr$7 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1230$2, 0, 24ll );
		FBSTRING* vr$10 = fb_StrConcat( &TMP$1230$2, (void*)"sub esp, ", 10ll, (void*)vr$7, -1ll );
		fb_StrAssign( (void*)&TMP$1231$2, -1ll, (void*)vr$10, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1231$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1231$2 );
		if( DDSIZE$1 <= 4ll ) goto label$573;
		{
			FBSTRING TMP$1232$3;
			FBSTRING TMP$1233$3;
			__builtin_memset( &TMP$1233$3, 0, 24ll );
			__builtin_memset( &TMP$1232$3, 0, 24ll );
			FBSTRING* vr$16 = fb_StrConcat( &TMP$1232$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$1233$3, -1ll, (void*)vr$16, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1233$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1233$3 );
			OUTP( (char*)"fld qword ptr [esp]" );
		}
		goto label$572;
		label$573:;
		{
			FBSTRING TMP$1234$3;
			FBSTRING TMP$1235$3;
			__builtin_memset( &TMP$1235$3, 0, 24ll );
			__builtin_memset( &TMP$1234$3, 0, 24ll );
			FBSTRING* vr$22 = fb_StrConcat( &TMP$1234$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$1235$3, -1ll, (void*)vr$22, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1235$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1235$3 );
			OUTP( (char*)"fld dword ptr [esp]" );
		}
		label$572:;
	}
	label$571:;
	label$570:;
	OUTP( (char*)"fld st(0)" );
	OUTP( (char*)"fmul st(0), st(0)" );
	OUTP( (char*)"fld1" );
	OUTP( (char*)"fsubrp" );
	OUTP( (char*)"fsqrt" );
	OUTP( (char*)"fpatan" );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$575;
	{
		FBSTRING TMP$1239$2;
		FBSTRING TMP$1240$2;
		__builtin_memset( &TMP$1240$2, 0, 24ll );
		FBSTRING* vr$27 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1239$2, 0, 24ll );
		FBSTRING* vr$30 = fb_StrConcat( &TMP$1239$2, (void*)"sub esp, ", 10ll, (void*)vr$27, -1ll );
		fb_StrAssign( (void*)&TMP$1240$2, -1ll, (void*)vr$30, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1240$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1240$2 );
	}
	label$575:;
	label$574:;
	if( DDSIZE$1 <= 4ll ) goto label$577;
	{
		FBSTRING TMP$1241$2;
		FBSTRING TMP$1242$2;
		FBSTRING TMP$1243$2;
		FBSTRING TMP$1244$2;
		OUTP( (char*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$1244$2, 0, 24ll );
		__builtin_memset( &TMP$1241$2, 0, 24ll );
		FBSTRING* vr$36 = fb_StrConcat( &TMP$1241$2, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1242$2, 0, 24ll );
		FBSTRING* vr$39 = fb_StrConcat( &TMP$1242$2, (void*)vr$36, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1243$2, 0, 24ll );
		FBSTRING* vr$42 = fb_StrConcat( &TMP$1243$2, (void*)vr$39, -1ll, (void*)"qword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$1244$2, -1ll, (void*)vr$42, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1244$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1244$2 );
	}
	goto label$576;
	label$577:;
	{
		FBSTRING TMP$1245$2;
		FBSTRING TMP$1246$2;
		FBSTRING TMP$1247$2;
		FBSTRING TMP$1248$2;
		OUTP( (char*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$1248$2, 0, 24ll );
		__builtin_memset( &TMP$1245$2, 0, 24ll );
		FBSTRING* vr$48 = fb_StrConcat( &TMP$1245$2, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1246$2, 0, 24ll );
		FBSTRING* vr$51 = fb_StrConcat( &TMP$1246$2, (void*)vr$48, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1247$2, 0, 24ll );
		FBSTRING* vr$54 = fb_StrConcat( &TMP$1247$2, (void*)vr$51, -1ll, (void*)"dword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$1248$2, -1ll, (void*)vr$54, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1248$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1248$2 );
	}
	label$576:;
	__builtin_memset( &TMP$1250$1, 0, 24ll );
	FBSTRING* vr$58 = fb_LongintToStr( DDSIZE$1 );
	__builtin_memset( &TMP$1249$1, 0, 24ll );
	FBSTRING* vr$61 = fb_StrConcat( &TMP$1249$1, (void*)"add esp, ", 10ll, (void*)vr$58, -1ll );
	fb_StrAssign( (void*)&TMP$1250$1, -1ll, (void*)vr$61, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1250$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1250$1 );
	label$568:;
}

static void _EMITCOS_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$1251$1;
	FBSTRING TMP$1269$1;
	FBSTRING TMP$1270$1;
	label$578:;
	static FBSTRING DST$1;
	static int64 DDSIZE$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$580;
	TMP$1251$1 = 24ll;
	goto label$800;
	label$580:;
	TMP$1251$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$800:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$1251$1 * 56ll)) + 8ll);
	if( ((int64)-(DDSIZE$1 == 4ll) & (int64)-(*(int64*)((uint8*)&ENV$ + 240ll) == 1ll)) == 0ll ) goto label$582;
	{
		HSINCOS_FAST_SSE( DVREG$1, -1ll );
		goto label$579;
	}
	label$582:;
	label$581:;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 1ll ) goto label$584;
	{
		FBSTRING TMP$1252$2;
		FBSTRING TMP$1253$2;
		__builtin_memset( &TMP$1253$2, 0, 24ll );
		FBSTRING* vr$10 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1252$2, 0, 24ll );
		FBSTRING* vr$13 = fb_StrConcat( &TMP$1252$2, (void*)"sub esp, ", 10ll, (void*)vr$10, -1ll );
		fb_StrAssign( (void*)&TMP$1253$2, -1ll, (void*)vr$13, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1253$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1253$2 );
		if( DDSIZE$1 <= 4ll ) goto label$586;
		{
			FBSTRING TMP$1254$3;
			FBSTRING TMP$1255$3;
			__builtin_memset( &TMP$1255$3, 0, 24ll );
			__builtin_memset( &TMP$1254$3, 0, 24ll );
			FBSTRING* vr$19 = fb_StrConcat( &TMP$1254$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$1255$3, -1ll, (void*)vr$19, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1255$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1255$3 );
			OUTP( (char*)"fld qword ptr [esp]" );
		}
		goto label$585;
		label$586:;
		{
			FBSTRING TMP$1256$3;
			FBSTRING TMP$1257$3;
			__builtin_memset( &TMP$1257$3, 0, 24ll );
			__builtin_memset( &TMP$1256$3, 0, 24ll );
			FBSTRING* vr$25 = fb_StrConcat( &TMP$1256$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$1257$3, -1ll, (void*)vr$25, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1257$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1257$3 );
			OUTP( (char*)"fld dword ptr [esp]" );
		}
		label$585:;
	}
	label$584:;
	label$583:;
	OUTP( (char*)"fcos" );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$588;
	{
		FBSTRING TMP$1259$2;
		FBSTRING TMP$1260$2;
		__builtin_memset( &TMP$1260$2, 0, 24ll );
		FBSTRING* vr$30 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1259$2, 0, 24ll );
		FBSTRING* vr$33 = fb_StrConcat( &TMP$1259$2, (void*)"sub esp, ", 10ll, (void*)vr$30, -1ll );
		fb_StrAssign( (void*)&TMP$1260$2, -1ll, (void*)vr$33, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1260$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1260$2 );
	}
	label$588:;
	label$587:;
	if( DDSIZE$1 <= 4ll ) goto label$590;
	{
		FBSTRING TMP$1261$2;
		FBSTRING TMP$1262$2;
		FBSTRING TMP$1263$2;
		FBSTRING TMP$1264$2;
		OUTP( (char*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$1264$2, 0, 24ll );
		__builtin_memset( &TMP$1261$2, 0, 24ll );
		FBSTRING* vr$39 = fb_StrConcat( &TMP$1261$2, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1262$2, 0, 24ll );
		FBSTRING* vr$42 = fb_StrConcat( &TMP$1262$2, (void*)vr$39, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1263$2, 0, 24ll );
		FBSTRING* vr$45 = fb_StrConcat( &TMP$1263$2, (void*)vr$42, -1ll, (void*)"qword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$1264$2, -1ll, (void*)vr$45, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1264$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1264$2 );
	}
	goto label$589;
	label$590:;
	{
		FBSTRING TMP$1265$2;
		FBSTRING TMP$1266$2;
		FBSTRING TMP$1267$2;
		FBSTRING TMP$1268$2;
		OUTP( (char*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$1268$2, 0, 24ll );
		__builtin_memset( &TMP$1265$2, 0, 24ll );
		FBSTRING* vr$51 = fb_StrConcat( &TMP$1265$2, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1266$2, 0, 24ll );
		FBSTRING* vr$54 = fb_StrConcat( &TMP$1266$2, (void*)vr$51, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1267$2, 0, 24ll );
		FBSTRING* vr$57 = fb_StrConcat( &TMP$1267$2, (void*)vr$54, -1ll, (void*)"dword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$1268$2, -1ll, (void*)vr$57, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1268$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1268$2 );
	}
	label$589:;
	__builtin_memset( &TMP$1270$1, 0, 24ll );
	FBSTRING* vr$61 = fb_LongintToStr( DDSIZE$1 );
	__builtin_memset( &TMP$1269$1, 0, 24ll );
	FBSTRING* vr$64 = fb_StrConcat( &TMP$1269$1, (void*)"add esp, ", 10ll, (void*)vr$61, -1ll );
	fb_StrAssign( (void*)&TMP$1270$1, -1ll, (void*)vr$64, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1270$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1270$1 );
	label$579:;
}

static void _EMITACOS_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$1271$1;
	FBSTRING TMP$1288$1;
	FBSTRING TMP$1289$1;
	label$591:;
	static FBSTRING DST$1;
	static int64 DDSIZE$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$593;
	TMP$1271$1 = 24ll;
	goto label$801;
	label$593:;
	TMP$1271$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$801:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$1271$1 * 56ll)) + 8ll);
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 1ll ) goto label$595;
	{
		FBSTRING TMP$1272$2;
		FBSTRING TMP$1273$2;
		__builtin_memset( &TMP$1273$2, 0, 24ll );
		FBSTRING* vr$7 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1272$2, 0, 24ll );
		FBSTRING* vr$10 = fb_StrConcat( &TMP$1272$2, (void*)"sub esp, ", 10ll, (void*)vr$7, -1ll );
		fb_StrAssign( (void*)&TMP$1273$2, -1ll, (void*)vr$10, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1273$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1273$2 );
		if( DDSIZE$1 <= 4ll ) goto label$597;
		{
			FBSTRING TMP$1274$3;
			FBSTRING TMP$1275$3;
			__builtin_memset( &TMP$1275$3, 0, 24ll );
			__builtin_memset( &TMP$1274$3, 0, 24ll );
			FBSTRING* vr$16 = fb_StrConcat( &TMP$1274$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$1275$3, -1ll, (void*)vr$16, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1275$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1275$3 );
			OUTP( (char*)"fld qword ptr [esp]" );
		}
		goto label$596;
		label$597:;
		{
			FBSTRING TMP$1276$3;
			FBSTRING TMP$1277$3;
			__builtin_memset( &TMP$1277$3, 0, 24ll );
			__builtin_memset( &TMP$1276$3, 0, 24ll );
			FBSTRING* vr$22 = fb_StrConcat( &TMP$1276$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$1277$3, -1ll, (void*)vr$22, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1277$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1277$3 );
			OUTP( (char*)"fld dword ptr [esp]" );
		}
		label$596:;
	}
	label$595:;
	label$594:;
	OUTP( (char*)"fld st(0)" );
	OUTP( (char*)"fmul st(0), st(0)" );
	OUTP( (char*)"fld1" );
	OUTP( (char*)"fsubrp" );
	OUTP( (char*)"fsqrt" );
	OUTP( (char*)"fxch" );
	OUTP( (char*)"fpatan" );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$599;
	{
		FBSTRING TMP$1278$2;
		FBSTRING TMP$1279$2;
		__builtin_memset( &TMP$1279$2, 0, 24ll );
		FBSTRING* vr$27 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1278$2, 0, 24ll );
		FBSTRING* vr$30 = fb_StrConcat( &TMP$1278$2, (void*)"sub esp, ", 10ll, (void*)vr$27, -1ll );
		fb_StrAssign( (void*)&TMP$1279$2, -1ll, (void*)vr$30, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1279$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1279$2 );
	}
	label$599:;
	label$598:;
	if( DDSIZE$1 <= 4ll ) goto label$601;
	{
		FBSTRING TMP$1280$2;
		FBSTRING TMP$1281$2;
		FBSTRING TMP$1282$2;
		FBSTRING TMP$1283$2;
		OUTP( (char*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$1283$2, 0, 24ll );
		__builtin_memset( &TMP$1280$2, 0, 24ll );
		FBSTRING* vr$36 = fb_StrConcat( &TMP$1280$2, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1281$2, 0, 24ll );
		FBSTRING* vr$39 = fb_StrConcat( &TMP$1281$2, (void*)vr$36, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1282$2, 0, 24ll );
		FBSTRING* vr$42 = fb_StrConcat( &TMP$1282$2, (void*)vr$39, -1ll, (void*)"qword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$1283$2, -1ll, (void*)vr$42, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1283$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1283$2 );
	}
	goto label$600;
	label$601:;
	{
		FBSTRING TMP$1284$2;
		FBSTRING TMP$1285$2;
		FBSTRING TMP$1286$2;
		FBSTRING TMP$1287$2;
		OUTP( (char*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$1287$2, 0, 24ll );
		__builtin_memset( &TMP$1284$2, 0, 24ll );
		FBSTRING* vr$48 = fb_StrConcat( &TMP$1284$2, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1285$2, 0, 24ll );
		FBSTRING* vr$51 = fb_StrConcat( &TMP$1285$2, (void*)vr$48, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1286$2, 0, 24ll );
		FBSTRING* vr$54 = fb_StrConcat( &TMP$1286$2, (void*)vr$51, -1ll, (void*)"dword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$1287$2, -1ll, (void*)vr$54, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1287$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1287$2 );
	}
	label$600:;
	__builtin_memset( &TMP$1289$1, 0, 24ll );
	FBSTRING* vr$58 = fb_LongintToStr( DDSIZE$1 );
	__builtin_memset( &TMP$1288$1, 0, 24ll );
	FBSTRING* vr$61 = fb_StrConcat( &TMP$1288$1, (void*)"add esp, ", 10ll, (void*)vr$58, -1ll );
	fb_StrAssign( (void*)&TMP$1289$1, -1ll, (void*)vr$61, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1289$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1289$1 );
	label$592:;
}

static void _EMITTAN_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$1290$1;
	FBSTRING TMP$1309$1;
	FBSTRING TMP$1310$1;
	label$602:;
	static FBSTRING DST$1;
	static int64 DDSIZE$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$604;
	TMP$1290$1 = 24ll;
	goto label$802;
	label$604:;
	TMP$1290$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$802:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$1290$1 * 56ll)) + 8ll);
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 1ll ) goto label$606;
	{
		FBSTRING TMP$1291$2;
		FBSTRING TMP$1292$2;
		__builtin_memset( &TMP$1292$2, 0, 24ll );
		FBSTRING* vr$7 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1291$2, 0, 24ll );
		FBSTRING* vr$10 = fb_StrConcat( &TMP$1291$2, (void*)"sub esp, ", 10ll, (void*)vr$7, -1ll );
		fb_StrAssign( (void*)&TMP$1292$2, -1ll, (void*)vr$10, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1292$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1292$2 );
		if( DDSIZE$1 <= 4ll ) goto label$608;
		{
			FBSTRING TMP$1293$3;
			FBSTRING TMP$1294$3;
			__builtin_memset( &TMP$1294$3, 0, 24ll );
			__builtin_memset( &TMP$1293$3, 0, 24ll );
			FBSTRING* vr$16 = fb_StrConcat( &TMP$1293$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$1294$3, -1ll, (void*)vr$16, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1294$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1294$3 );
			OUTP( (char*)"fld qword ptr [esp]" );
		}
		goto label$607;
		label$608:;
		{
			FBSTRING TMP$1295$3;
			FBSTRING TMP$1296$3;
			__builtin_memset( &TMP$1296$3, 0, 24ll );
			__builtin_memset( &TMP$1295$3, 0, 24ll );
			FBSTRING* vr$22 = fb_StrConcat( &TMP$1295$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$1296$3, -1ll, (void*)vr$22, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1296$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1296$3 );
			OUTP( (char*)"fld dword ptr [esp]" );
		}
		label$607:;
	}
	label$606:;
	label$605:;
	OUTP( (char*)"fptan" );
	OUTP( (char*)"fstp st(0)" );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$610;
	{
		FBSTRING TMP$1299$2;
		FBSTRING TMP$1300$2;
		__builtin_memset( &TMP$1300$2, 0, 24ll );
		FBSTRING* vr$27 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1299$2, 0, 24ll );
		FBSTRING* vr$30 = fb_StrConcat( &TMP$1299$2, (void*)"sub esp, ", 10ll, (void*)vr$27, -1ll );
		fb_StrAssign( (void*)&TMP$1300$2, -1ll, (void*)vr$30, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1300$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1300$2 );
	}
	label$610:;
	label$609:;
	if( DDSIZE$1 <= 4ll ) goto label$612;
	{
		FBSTRING TMP$1301$2;
		FBSTRING TMP$1302$2;
		FBSTRING TMP$1303$2;
		FBSTRING TMP$1304$2;
		OUTP( (char*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$1304$2, 0, 24ll );
		__builtin_memset( &TMP$1301$2, 0, 24ll );
		FBSTRING* vr$36 = fb_StrConcat( &TMP$1301$2, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1302$2, 0, 24ll );
		FBSTRING* vr$39 = fb_StrConcat( &TMP$1302$2, (void*)vr$36, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1303$2, 0, 24ll );
		FBSTRING* vr$42 = fb_StrConcat( &TMP$1303$2, (void*)vr$39, -1ll, (void*)"qword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$1304$2, -1ll, (void*)vr$42, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1304$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1304$2 );
	}
	goto label$611;
	label$612:;
	{
		FBSTRING TMP$1305$2;
		FBSTRING TMP$1306$2;
		FBSTRING TMP$1307$2;
		FBSTRING TMP$1308$2;
		OUTP( (char*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$1308$2, 0, 24ll );
		__builtin_memset( &TMP$1305$2, 0, 24ll );
		FBSTRING* vr$48 = fb_StrConcat( &TMP$1305$2, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1306$2, 0, 24ll );
		FBSTRING* vr$51 = fb_StrConcat( &TMP$1306$2, (void*)vr$48, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1307$2, 0, 24ll );
		FBSTRING* vr$54 = fb_StrConcat( &TMP$1307$2, (void*)vr$51, -1ll, (void*)"dword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$1308$2, -1ll, (void*)vr$54, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1308$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1308$2 );
	}
	label$611:;
	__builtin_memset( &TMP$1310$1, 0, 24ll );
	FBSTRING* vr$58 = fb_LongintToStr( DDSIZE$1 );
	__builtin_memset( &TMP$1309$1, 0, 24ll );
	FBSTRING* vr$61 = fb_StrConcat( &TMP$1309$1, (void*)"add esp, ", 10ll, (void*)vr$58, -1ll );
	fb_StrAssign( (void*)&TMP$1310$1, -1ll, (void*)vr$61, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1310$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1310$1 );
	label$603:;
}

static void _EMITATAN_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$1311$1;
	FBSTRING TMP$1328$1;
	FBSTRING TMP$1329$1;
	label$613:;
	static FBSTRING DST$1;
	static int64 DDSIZE$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$615;
	TMP$1311$1 = 24ll;
	goto label$803;
	label$615:;
	TMP$1311$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$803:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$1311$1 * 56ll)) + 8ll);
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 1ll ) goto label$617;
	{
		FBSTRING TMP$1312$2;
		FBSTRING TMP$1313$2;
		__builtin_memset( &TMP$1313$2, 0, 24ll );
		FBSTRING* vr$7 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1312$2, 0, 24ll );
		FBSTRING* vr$10 = fb_StrConcat( &TMP$1312$2, (void*)"sub esp, ", 10ll, (void*)vr$7, -1ll );
		fb_StrAssign( (void*)&TMP$1313$2, -1ll, (void*)vr$10, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1313$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1313$2 );
		if( DDSIZE$1 <= 4ll ) goto label$619;
		{
			FBSTRING TMP$1314$3;
			FBSTRING TMP$1315$3;
			__builtin_memset( &TMP$1315$3, 0, 24ll );
			__builtin_memset( &TMP$1314$3, 0, 24ll );
			FBSTRING* vr$16 = fb_StrConcat( &TMP$1314$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$1315$3, -1ll, (void*)vr$16, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1315$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1315$3 );
			OUTP( (char*)"fld qword ptr [esp]" );
		}
		goto label$618;
		label$619:;
		{
			FBSTRING TMP$1316$3;
			FBSTRING TMP$1317$3;
			__builtin_memset( &TMP$1317$3, 0, 24ll );
			__builtin_memset( &TMP$1316$3, 0, 24ll );
			FBSTRING* vr$22 = fb_StrConcat( &TMP$1316$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$1317$3, -1ll, (void*)vr$22, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1317$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1317$3 );
			OUTP( (char*)"fld dword ptr [esp]" );
		}
		label$618:;
	}
	label$617:;
	label$616:;
	OUTP( (char*)"fld1" );
	OUTP( (char*)"fpatan" );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$621;
	{
		FBSTRING TMP$1318$2;
		FBSTRING TMP$1319$2;
		__builtin_memset( &TMP$1319$2, 0, 24ll );
		FBSTRING* vr$27 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1318$2, 0, 24ll );
		FBSTRING* vr$30 = fb_StrConcat( &TMP$1318$2, (void*)"sub esp, ", 10ll, (void*)vr$27, -1ll );
		fb_StrAssign( (void*)&TMP$1319$2, -1ll, (void*)vr$30, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1319$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1319$2 );
	}
	label$621:;
	label$620:;
	if( DDSIZE$1 <= 4ll ) goto label$623;
	{
		FBSTRING TMP$1320$2;
		FBSTRING TMP$1321$2;
		FBSTRING TMP$1322$2;
		FBSTRING TMP$1323$2;
		OUTP( (char*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$1323$2, 0, 24ll );
		__builtin_memset( &TMP$1320$2, 0, 24ll );
		FBSTRING* vr$36 = fb_StrConcat( &TMP$1320$2, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1321$2, 0, 24ll );
		FBSTRING* vr$39 = fb_StrConcat( &TMP$1321$2, (void*)vr$36, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1322$2, 0, 24ll );
		FBSTRING* vr$42 = fb_StrConcat( &TMP$1322$2, (void*)vr$39, -1ll, (void*)"qword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$1323$2, -1ll, (void*)vr$42, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1323$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1323$2 );
	}
	goto label$622;
	label$623:;
	{
		FBSTRING TMP$1324$2;
		FBSTRING TMP$1325$2;
		FBSTRING TMP$1326$2;
		FBSTRING TMP$1327$2;
		OUTP( (char*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$1327$2, 0, 24ll );
		__builtin_memset( &TMP$1324$2, 0, 24ll );
		FBSTRING* vr$48 = fb_StrConcat( &TMP$1324$2, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1325$2, 0, 24ll );
		FBSTRING* vr$51 = fb_StrConcat( &TMP$1325$2, (void*)vr$48, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1326$2, 0, 24ll );
		FBSTRING* vr$54 = fb_StrConcat( &TMP$1326$2, (void*)vr$51, -1ll, (void*)"dword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$1327$2, -1ll, (void*)vr$54, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1327$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1327$2 );
	}
	label$622:;
	__builtin_memset( &TMP$1329$1, 0, 24ll );
	FBSTRING* vr$58 = fb_LongintToStr( DDSIZE$1 );
	__builtin_memset( &TMP$1328$1, 0, 24ll );
	FBSTRING* vr$61 = fb_StrConcat( &TMP$1328$1, (void*)"add esp, ", 10ll, (void*)vr$58, -1ll );
	fb_StrAssign( (void*)&TMP$1329$1, -1ll, (void*)vr$61, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1329$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1329$1 );
	label$614:;
}

static void _EMITSQRT_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$1330$1;
	label$624:;
	static FBSTRING DST$1;
	static int64 DDSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$626;
	TMP$1330$1 = 24ll;
	goto label$804;
	label$626:;
	TMP$1330$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$804:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$1330$1 * 56ll)) + 8ll);
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$628;
	{
		FBSTRING TMP$1331$2;
		FBSTRING TMP$1332$2;
		__builtin_memset( &TMP$1332$2, 0, 24ll );
		FBSTRING* vr$7 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1331$2, 0, 24ll );
		FBSTRING* vr$10 = fb_StrConcat( &TMP$1331$2, (void*)"sub esp, ", 10ll, (void*)vr$7, -1ll );
		fb_StrAssign( (void*)&TMP$1332$2, -1ll, (void*)vr$10, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1332$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1332$2 );
		if( DDSIZE$1 <= 4ll ) goto label$630;
		{
			FBSTRING TMP$1333$3;
			FBSTRING TMP$1334$3;
			FBSTRING TMP$1335$3;
			FBSTRING TMP$1336$3;
			OUTP( (char*)"fstp qword ptr [esp]" );
			__builtin_memset( &TMP$1336$3, 0, 24ll );
			__builtin_memset( &TMP$1333$3, 0, 24ll );
			FBSTRING* vr$16 = fb_StrConcat( &TMP$1333$3, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$1334$3, 0, 24ll );
			FBSTRING* vr$19 = fb_StrConcat( &TMP$1334$3, (void*)vr$16, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$1335$3, 0, 24ll );
			FBSTRING* vr$22 = fb_StrConcat( &TMP$1335$3, (void*)vr$19, -1ll, (void*)"qword ptr [esp]", 16ll );
			fb_StrAssign( (void*)&TMP$1336$3, -1ll, (void*)vr$22, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1336$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1336$3 );
		}
		goto label$629;
		label$630:;
		{
			FBSTRING TMP$1337$3;
			FBSTRING TMP$1338$3;
			FBSTRING TMP$1339$3;
			FBSTRING TMP$1340$3;
			OUTP( (char*)"fstp dword ptr [esp]" );
			__builtin_memset( &TMP$1340$3, 0, 24ll );
			__builtin_memset( &TMP$1337$3, 0, 24ll );
			FBSTRING* vr$28 = fb_StrConcat( &TMP$1337$3, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$1338$3, 0, 24ll );
			FBSTRING* vr$31 = fb_StrConcat( &TMP$1338$3, (void*)vr$28, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$1339$3, 0, 24ll );
			FBSTRING* vr$34 = fb_StrConcat( &TMP$1339$3, (void*)vr$31, -1ll, (void*)"dword ptr [esp]", 16ll );
			fb_StrAssign( (void*)&TMP$1340$3, -1ll, (void*)vr$34, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1340$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1340$3 );
		}
		label$629:;
	}
	label$628:;
	label$627:;
	if( DDSIZE$1 <= 4ll ) goto label$632;
	{
		FBSTRING TMP$1342$2;
		FBSTRING TMP$1343$2;
		FBSTRING TMP$1344$2;
		FBSTRING TMP$1345$2;
		__builtin_memset( &TMP$1345$2, 0, 24ll );
		__builtin_memset( &TMP$1342$2, 0, 24ll );
		FBSTRING* vr$40 = fb_StrConcat( &TMP$1342$2, (void*)"sqrtsd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1343$2, 0, 24ll );
		FBSTRING* vr$43 = fb_StrConcat( &TMP$1343$2, (void*)vr$40, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1344$2, 0, 24ll );
		FBSTRING* vr$46 = fb_StrConcat( &TMP$1344$2, (void*)vr$43, -1ll, (void*)&DST$1, -1ll );
		fb_StrAssign( (void*)&TMP$1345$2, -1ll, (void*)vr$46, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1345$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1345$2 );
	}
	goto label$631;
	label$632:;
	{
		FBSTRING TMP$1347$2;
		FBSTRING TMP$1348$2;
		FBSTRING TMP$1349$2;
		FBSTRING TMP$1350$2;
		__builtin_memset( &TMP$1350$2, 0, 24ll );
		__builtin_memset( &TMP$1347$2, 0, 24ll );
		FBSTRING* vr$52 = fb_StrConcat( &TMP$1347$2, (void*)"sqrtss ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1348$2, 0, 24ll );
		FBSTRING* vr$55 = fb_StrConcat( &TMP$1348$2, (void*)vr$52, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1349$2, 0, 24ll );
		FBSTRING* vr$58 = fb_StrConcat( &TMP$1349$2, (void*)vr$55, -1ll, (void*)&DST$1, -1ll );
		fb_StrAssign( (void*)&TMP$1350$2, -1ll, (void*)vr$58, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1350$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1350$2 );
	}
	label$631:;
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$634;
	{
		FBSTRING TMP$1351$2;
		FBSTRING TMP$1352$2;
		__builtin_memset( &TMP$1352$2, 0, 24ll );
		FBSTRING* vr$63 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1351$2, 0, 24ll );
		FBSTRING* vr$66 = fb_StrConcat( &TMP$1351$2, (void*)"add esp, ", 10ll, (void*)vr$63, -1ll );
		fb_StrAssign( (void*)&TMP$1352$2, -1ll, (void*)vr$66, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1352$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1352$2 );
	}
	label$634:;
	label$633:;
	label$625:;
}

static void _EMITRSQRT_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$1353$1;
	label$635:;
	static FBSTRING DST$1;
	static int64 DDSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$637;
	TMP$1353$1 = 24ll;
	goto label$805;
	label$637:;
	TMP$1353$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$805:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$1353$1 * 56ll)) + 8ll);
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$639;
	{
		FBSTRING TMP$1354$2;
		FBSTRING TMP$1355$2;
		__builtin_memset( &TMP$1355$2, 0, 24ll );
		FBSTRING* vr$7 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1354$2, 0, 24ll );
		FBSTRING* vr$10 = fb_StrConcat( &TMP$1354$2, (void*)"sub esp, ", 10ll, (void*)vr$7, -1ll );
		fb_StrAssign( (void*)&TMP$1355$2, -1ll, (void*)vr$10, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1355$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1355$2 );
		if( DDSIZE$1 <= 4ll ) goto label$641;
		{
			FBSTRING TMP$1356$3;
			FBSTRING TMP$1357$3;
			FBSTRING TMP$1358$3;
			FBSTRING TMP$1359$3;
			OUTP( (char*)"fstp qword ptr [esp]" );
			__builtin_memset( &TMP$1359$3, 0, 24ll );
			__builtin_memset( &TMP$1356$3, 0, 24ll );
			FBSTRING* vr$16 = fb_StrConcat( &TMP$1356$3, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$1357$3, 0, 24ll );
			FBSTRING* vr$19 = fb_StrConcat( &TMP$1357$3, (void*)vr$16, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$1358$3, 0, 24ll );
			FBSTRING* vr$22 = fb_StrConcat( &TMP$1358$3, (void*)vr$19, -1ll, (void*)"qword ptr [esp]", 16ll );
			fb_StrAssign( (void*)&TMP$1359$3, -1ll, (void*)vr$22, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1359$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1359$3 );
		}
		goto label$640;
		label$641:;
		{
			FBSTRING TMP$1360$3;
			FBSTRING TMP$1361$3;
			FBSTRING TMP$1362$3;
			FBSTRING TMP$1363$3;
			OUTP( (char*)"fstp dword ptr [esp]" );
			__builtin_memset( &TMP$1363$3, 0, 24ll );
			__builtin_memset( &TMP$1360$3, 0, 24ll );
			FBSTRING* vr$28 = fb_StrConcat( &TMP$1360$3, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$1361$3, 0, 24ll );
			FBSTRING* vr$31 = fb_StrConcat( &TMP$1361$3, (void*)vr$28, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$1362$3, 0, 24ll );
			FBSTRING* vr$34 = fb_StrConcat( &TMP$1362$3, (void*)vr$31, -1ll, (void*)"dword ptr [esp]", 16ll );
			fb_StrAssign( (void*)&TMP$1363$3, -1ll, (void*)vr$34, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1363$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1363$3 );
		}
		label$640:;
	}
	label$639:;
	label$638:;
	if( DDSIZE$1 <= 4ll ) goto label$643;
	{
		FBSTRING TMP$1365$2;
		FBSTRING TMP$1366$2;
		FBSTRING TMP$1367$2;
		FBSTRING TMP$1368$2;
		__builtin_memset( &TMP$1368$2, 0, 24ll );
		__builtin_memset( &TMP$1365$2, 0, 24ll );
		FBSTRING* vr$40 = fb_StrConcat( &TMP$1365$2, (void*)"rsqrtsd ", 9ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1366$2, 0, 24ll );
		FBSTRING* vr$43 = fb_StrConcat( &TMP$1366$2, (void*)vr$40, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1367$2, 0, 24ll );
		FBSTRING* vr$46 = fb_StrConcat( &TMP$1367$2, (void*)vr$43, -1ll, (void*)&DST$1, -1ll );
		fb_StrAssign( (void*)&TMP$1368$2, -1ll, (void*)vr$46, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1368$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1368$2 );
	}
	goto label$642;
	label$643:;
	{
		FBSTRING TMP$1370$2;
		FBSTRING TMP$1371$2;
		FBSTRING TMP$1372$2;
		FBSTRING TMP$1373$2;
		__builtin_memset( &TMP$1373$2, 0, 24ll );
		__builtin_memset( &TMP$1370$2, 0, 24ll );
		FBSTRING* vr$52 = fb_StrConcat( &TMP$1370$2, (void*)"rsqrtss ", 9ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1371$2, 0, 24ll );
		FBSTRING* vr$55 = fb_StrConcat( &TMP$1371$2, (void*)vr$52, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1372$2, 0, 24ll );
		FBSTRING* vr$58 = fb_StrConcat( &TMP$1372$2, (void*)vr$55, -1ll, (void*)&DST$1, -1ll );
		fb_StrAssign( (void*)&TMP$1373$2, -1ll, (void*)vr$58, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1373$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1373$2 );
	}
	label$642:;
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$645;
	{
		FBSTRING TMP$1374$2;
		FBSTRING TMP$1375$2;
		__builtin_memset( &TMP$1375$2, 0, 24ll );
		FBSTRING* vr$63 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1374$2, 0, 24ll );
		FBSTRING* vr$66 = fb_StrConcat( &TMP$1374$2, (void*)"add esp, ", 10ll, (void*)vr$63, -1ll );
		fb_StrAssign( (void*)&TMP$1375$2, -1ll, (void*)vr$66, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1375$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1375$2 );
	}
	label$645:;
	label$644:;
	label$636:;
}

static void _EMITRCP_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$1376$1;
	label$646:;
	static FBSTRING DST$1;
	static int64 DDSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$648;
	TMP$1376$1 = 24ll;
	goto label$806;
	label$648:;
	TMP$1376$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$806:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$1376$1 * 56ll)) + 8ll);
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$650;
	{
		FBSTRING TMP$1377$2;
		FBSTRING TMP$1378$2;
		__builtin_memset( &TMP$1378$2, 0, 24ll );
		FBSTRING* vr$7 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1377$2, 0, 24ll );
		FBSTRING* vr$10 = fb_StrConcat( &TMP$1377$2, (void*)"sub esp, ", 10ll, (void*)vr$7, -1ll );
		fb_StrAssign( (void*)&TMP$1378$2, -1ll, (void*)vr$10, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1378$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1378$2 );
		if( DDSIZE$1 <= 4ll ) goto label$652;
		{
			FBSTRING TMP$1379$3;
			FBSTRING TMP$1380$3;
			FBSTRING TMP$1381$3;
			FBSTRING TMP$1382$3;
			OUTP( (char*)"fstp qword ptr [esp]" );
			__builtin_memset( &TMP$1382$3, 0, 24ll );
			__builtin_memset( &TMP$1379$3, 0, 24ll );
			FBSTRING* vr$16 = fb_StrConcat( &TMP$1379$3, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$1380$3, 0, 24ll );
			FBSTRING* vr$19 = fb_StrConcat( &TMP$1380$3, (void*)vr$16, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$1381$3, 0, 24ll );
			FBSTRING* vr$22 = fb_StrConcat( &TMP$1381$3, (void*)vr$19, -1ll, (void*)"qword ptr [esp]", 16ll );
			fb_StrAssign( (void*)&TMP$1382$3, -1ll, (void*)vr$22, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1382$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1382$3 );
		}
		goto label$651;
		label$652:;
		{
			FBSTRING TMP$1383$3;
			FBSTRING TMP$1384$3;
			FBSTRING TMP$1385$3;
			FBSTRING TMP$1386$3;
			OUTP( (char*)"fstp dword ptr [esp]" );
			__builtin_memset( &TMP$1386$3, 0, 24ll );
			__builtin_memset( &TMP$1383$3, 0, 24ll );
			FBSTRING* vr$28 = fb_StrConcat( &TMP$1383$3, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$1384$3, 0, 24ll );
			FBSTRING* vr$31 = fb_StrConcat( &TMP$1384$3, (void*)vr$28, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$1385$3, 0, 24ll );
			FBSTRING* vr$34 = fb_StrConcat( &TMP$1385$3, (void*)vr$31, -1ll, (void*)"dword ptr [esp]", 16ll );
			fb_StrAssign( (void*)&TMP$1386$3, -1ll, (void*)vr$34, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1386$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1386$3 );
		}
		label$651:;
	}
	label$650:;
	label$649:;
	if( DDSIZE$1 <= 4ll ) goto label$654;
	{
		FBSTRING TMP$1388$2;
		FBSTRING TMP$1389$2;
		FBSTRING TMP$1390$2;
		FBSTRING TMP$1391$2;
		__builtin_memset( &TMP$1391$2, 0, 24ll );
		__builtin_memset( &TMP$1388$2, 0, 24ll );
		FBSTRING* vr$40 = fb_StrConcat( &TMP$1388$2, (void*)"rcpsd ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1389$2, 0, 24ll );
		FBSTRING* vr$43 = fb_StrConcat( &TMP$1389$2, (void*)vr$40, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1390$2, 0, 24ll );
		FBSTRING* vr$46 = fb_StrConcat( &TMP$1390$2, (void*)vr$43, -1ll, (void*)&DST$1, -1ll );
		fb_StrAssign( (void*)&TMP$1391$2, -1ll, (void*)vr$46, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1391$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1391$2 );
	}
	goto label$653;
	label$654:;
	{
		FBSTRING TMP$1393$2;
		FBSTRING TMP$1394$2;
		FBSTRING TMP$1395$2;
		FBSTRING TMP$1396$2;
		__builtin_memset( &TMP$1396$2, 0, 24ll );
		__builtin_memset( &TMP$1393$2, 0, 24ll );
		FBSTRING* vr$52 = fb_StrConcat( &TMP$1393$2, (void*)"rcpss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1394$2, 0, 24ll );
		FBSTRING* vr$55 = fb_StrConcat( &TMP$1394$2, (void*)vr$52, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1395$2, 0, 24ll );
		FBSTRING* vr$58 = fb_StrConcat( &TMP$1395$2, (void*)vr$55, -1ll, (void*)&DST$1, -1ll );
		fb_StrAssign( (void*)&TMP$1396$2, -1ll, (void*)vr$58, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1396$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1396$2 );
	}
	label$653:;
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$656;
	{
		FBSTRING TMP$1397$2;
		FBSTRING TMP$1398$2;
		__builtin_memset( &TMP$1398$2, 0, 24ll );
		FBSTRING* vr$63 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1397$2, 0, 24ll );
		FBSTRING* vr$66 = fb_StrConcat( &TMP$1397$2, (void*)"add esp, ", 10ll, (void*)vr$63, -1ll );
		fb_StrAssign( (void*)&TMP$1398$2, -1ll, (void*)vr$66, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1398$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1398$2 );
	}
	label$656:;
	label$655:;
	label$647:;
}

static void _EMITLOG_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$1399$1;
	FBSTRING TMP$1417$1;
	FBSTRING TMP$1418$1;
	label$657:;
	static FBSTRING DST$1;
	static int64 DDSIZE$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$659;
	TMP$1399$1 = 24ll;
	goto label$807;
	label$659:;
	TMP$1399$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$807:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$1399$1 * 56ll)) + 8ll);
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 1ll ) goto label$661;
	{
		FBSTRING TMP$1400$2;
		FBSTRING TMP$1401$2;
		__builtin_memset( &TMP$1401$2, 0, 24ll );
		FBSTRING* vr$7 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1400$2, 0, 24ll );
		FBSTRING* vr$10 = fb_StrConcat( &TMP$1400$2, (void*)"sub esp, ", 10ll, (void*)vr$7, -1ll );
		fb_StrAssign( (void*)&TMP$1401$2, -1ll, (void*)vr$10, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1401$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1401$2 );
		if( DDSIZE$1 <= 4ll ) goto label$663;
		{
			FBSTRING TMP$1402$3;
			FBSTRING TMP$1403$3;
			__builtin_memset( &TMP$1403$3, 0, 24ll );
			__builtin_memset( &TMP$1402$3, 0, 24ll );
			FBSTRING* vr$16 = fb_StrConcat( &TMP$1402$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$1403$3, -1ll, (void*)vr$16, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1403$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1403$3 );
			OUTP( (char*)"fld qword ptr [esp]" );
		}
		goto label$662;
		label$663:;
		{
			FBSTRING TMP$1404$3;
			FBSTRING TMP$1405$3;
			__builtin_memset( &TMP$1405$3, 0, 24ll );
			__builtin_memset( &TMP$1404$3, 0, 24ll );
			FBSTRING* vr$22 = fb_StrConcat( &TMP$1404$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$1405$3, -1ll, (void*)vr$22, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1405$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1405$3 );
			OUTP( (char*)"fld dword ptr [esp]" );
		}
		label$662:;
	}
	label$661:;
	label$660:;
	OUTP( (char*)"fldln2" );
	OUTP( (char*)"fxch" );
	OUTP( (char*)"fyl2x" );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$665;
	{
		FBSTRING TMP$1407$2;
		FBSTRING TMP$1408$2;
		__builtin_memset( &TMP$1408$2, 0, 24ll );
		FBSTRING* vr$27 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1407$2, 0, 24ll );
		FBSTRING* vr$30 = fb_StrConcat( &TMP$1407$2, (void*)"sub esp, ", 10ll, (void*)vr$27, -1ll );
		fb_StrAssign( (void*)&TMP$1408$2, -1ll, (void*)vr$30, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1408$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1408$2 );
	}
	label$665:;
	label$664:;
	if( DDSIZE$1 <= 4ll ) goto label$667;
	{
		FBSTRING TMP$1409$2;
		FBSTRING TMP$1410$2;
		FBSTRING TMP$1411$2;
		FBSTRING TMP$1412$2;
		OUTP( (char*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$1412$2, 0, 24ll );
		__builtin_memset( &TMP$1409$2, 0, 24ll );
		FBSTRING* vr$36 = fb_StrConcat( &TMP$1409$2, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1410$2, 0, 24ll );
		FBSTRING* vr$39 = fb_StrConcat( &TMP$1410$2, (void*)vr$36, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1411$2, 0, 24ll );
		FBSTRING* vr$42 = fb_StrConcat( &TMP$1411$2, (void*)vr$39, -1ll, (void*)"qword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$1412$2, -1ll, (void*)vr$42, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1412$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1412$2 );
	}
	goto label$666;
	label$667:;
	{
		FBSTRING TMP$1413$2;
		FBSTRING TMP$1414$2;
		FBSTRING TMP$1415$2;
		FBSTRING TMP$1416$2;
		OUTP( (char*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$1416$2, 0, 24ll );
		__builtin_memset( &TMP$1413$2, 0, 24ll );
		FBSTRING* vr$48 = fb_StrConcat( &TMP$1413$2, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1414$2, 0, 24ll );
		FBSTRING* vr$51 = fb_StrConcat( &TMP$1414$2, (void*)vr$48, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1415$2, 0, 24ll );
		FBSTRING* vr$54 = fb_StrConcat( &TMP$1415$2, (void*)vr$51, -1ll, (void*)"dword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$1416$2, -1ll, (void*)vr$54, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1416$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1416$2 );
	}
	label$666:;
	__builtin_memset( &TMP$1418$1, 0, 24ll );
	FBSTRING* vr$58 = fb_LongintToStr( DDSIZE$1 );
	__builtin_memset( &TMP$1417$1, 0, 24ll );
	FBSTRING* vr$61 = fb_StrConcat( &TMP$1417$1, (void*)"add esp, ", 10ll, (void*)vr$58, -1ll );
	fb_StrAssign( (void*)&TMP$1418$1, -1ll, (void*)vr$61, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1418$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1418$1 );
	label$658:;
}

static void _EMITEXP_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$1419$1;
	FBSTRING TMP$1442$1;
	FBSTRING TMP$1443$1;
	label$668:;
	static FBSTRING DST$1;
	static int64 DDSIZE$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$670;
	TMP$1419$1 = 24ll;
	goto label$808;
	label$670:;
	TMP$1419$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$808:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$1419$1 * 56ll)) + 8ll);
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 1ll ) goto label$672;
	{
		FBSTRING TMP$1420$2;
		FBSTRING TMP$1421$2;
		__builtin_memset( &TMP$1421$2, 0, 24ll );
		FBSTRING* vr$7 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1420$2, 0, 24ll );
		FBSTRING* vr$10 = fb_StrConcat( &TMP$1420$2, (void*)"sub esp, ", 10ll, (void*)vr$7, -1ll );
		fb_StrAssign( (void*)&TMP$1421$2, -1ll, (void*)vr$10, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1421$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1421$2 );
		if( DDSIZE$1 <= 4ll ) goto label$674;
		{
			FBSTRING TMP$1422$3;
			FBSTRING TMP$1423$3;
			__builtin_memset( &TMP$1423$3, 0, 24ll );
			__builtin_memset( &TMP$1422$3, 0, 24ll );
			FBSTRING* vr$16 = fb_StrConcat( &TMP$1422$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$1423$3, -1ll, (void*)vr$16, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1423$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1423$3 );
			OUTP( (char*)"fld qword ptr [esp]" );
		}
		goto label$673;
		label$674:;
		{
			FBSTRING TMP$1424$3;
			FBSTRING TMP$1425$3;
			__builtin_memset( &TMP$1425$3, 0, 24ll );
			__builtin_memset( &TMP$1424$3, 0, 24ll );
			FBSTRING* vr$22 = fb_StrConcat( &TMP$1424$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$1425$3, -1ll, (void*)vr$22, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1425$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1425$3 );
			OUTP( (char*)"fld dword ptr [esp]" );
		}
		label$673:;
	}
	label$672:;
	label$671:;
	OUTP( (char*)"fldl2e" );
	OUTP( (char*)"fmulp st(1), st" );
	OUTP( (char*)"fld st" );
	OUTP( (char*)"frndint" );
	OUTP( (char*)"fsub st(1), st" );
	OUTP( (char*)"fxch" );
	OUTP( (char*)"f2xm1" );
	HPUSH( (char*)"0x3f800000" );
	OUTP( (char*)"fadd dword ptr [esp]" );
	OUTP( (char*)"add esp, 4" );
	OUTP( (char*)"fscale" );
	OUTP( (char*)"fstp st(1)" );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$676;
	{
		FBSTRING TMP$1432$2;
		FBSTRING TMP$1433$2;
		__builtin_memset( &TMP$1433$2, 0, 24ll );
		FBSTRING* vr$27 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1432$2, 0, 24ll );
		FBSTRING* vr$30 = fb_StrConcat( &TMP$1432$2, (void*)"sub esp, ", 10ll, (void*)vr$27, -1ll );
		fb_StrAssign( (void*)&TMP$1433$2, -1ll, (void*)vr$30, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1433$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1433$2 );
	}
	label$676:;
	label$675:;
	if( DDSIZE$1 <= 4ll ) goto label$678;
	{
		FBSTRING TMP$1434$2;
		FBSTRING TMP$1435$2;
		FBSTRING TMP$1436$2;
		FBSTRING TMP$1437$2;
		OUTP( (char*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$1437$2, 0, 24ll );
		__builtin_memset( &TMP$1434$2, 0, 24ll );
		FBSTRING* vr$36 = fb_StrConcat( &TMP$1434$2, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1435$2, 0, 24ll );
		FBSTRING* vr$39 = fb_StrConcat( &TMP$1435$2, (void*)vr$36, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1436$2, 0, 24ll );
		FBSTRING* vr$42 = fb_StrConcat( &TMP$1436$2, (void*)vr$39, -1ll, (void*)"qword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$1437$2, -1ll, (void*)vr$42, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1437$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1437$2 );
	}
	goto label$677;
	label$678:;
	{
		FBSTRING TMP$1438$2;
		FBSTRING TMP$1439$2;
		FBSTRING TMP$1440$2;
		FBSTRING TMP$1441$2;
		OUTP( (char*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$1441$2, 0, 24ll );
		__builtin_memset( &TMP$1438$2, 0, 24ll );
		FBSTRING* vr$48 = fb_StrConcat( &TMP$1438$2, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1439$2, 0, 24ll );
		FBSTRING* vr$51 = fb_StrConcat( &TMP$1439$2, (void*)vr$48, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1440$2, 0, 24ll );
		FBSTRING* vr$54 = fb_StrConcat( &TMP$1440$2, (void*)vr$51, -1ll, (void*)"dword ptr [esp]", 16ll );
		fb_StrAssign( (void*)&TMP$1441$2, -1ll, (void*)vr$54, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1441$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1441$2 );
	}
	label$677:;
	__builtin_memset( &TMP$1443$1, 0, 24ll );
	FBSTRING* vr$58 = fb_LongintToStr( DDSIZE$1 );
	__builtin_memset( &TMP$1442$1, 0, 24ll );
	FBSTRING* vr$61 = fb_StrConcat( &TMP$1442$1, (void*)"add esp, ", 10ll, (void*)vr$58, -1ll );
	fb_StrAssign( (void*)&TMP$1443$1, -1ll, (void*)vr$61, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1443$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1443$1 );
	label$669:;
}

static void _EMITFLOOR_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$1444$1;
	FBSTRING TMP$1459$1;
	FBSTRING TMP$1460$1;
	FBSTRING TMP$1461$1;
	FBSTRING TMP$1463$1;
	FBSTRING TMP$1464$1;
	FBSTRING TMP$1465$1;
	FBSTRING TMP$1466$1;
	FBSTRING TMP$1467$1;
	FBSTRING TMP$1468$1;
	FBSTRING TMP$1469$1;
	FBSTRING TMP$1470$1;
	FBSTRING TMP$1471$1;
	FBSTRING TMP$1472$1;
	FBSTRING TMP$1474$1;
	FBSTRING TMP$1475$1;
	FBSTRING TMP$1476$1;
	FBSTRING TMP$1477$1;
	FBSTRING TMP$1478$1;
	FBSTRING TMP$1480$1;
	FBSTRING TMP$1481$1;
	FBSTRING TMP$1482$1;
	FBSTRING TMP$1483$1;
	FBSTRING TMP$1484$1;
	FBSTRING TMP$1485$1;
	FBSTRING TMP$1486$1;
	FBSTRING TMP$1487$1;
	FBSTRING TMP$1488$1;
	FBSTRING TMP$1489$1;
	label$679:;
	static FBSTRING DST$1;
	static FBSTRING NEG1$1;
	static FBSTRING SUFFIX$1;
	static int64 DDSIZE$1;
	static struct $8FBSYMBOL* SYM$1;
	static struct $6IRVREG* VREG$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$681;
	TMP$1444$1 = 24ll;
	goto label$809;
	label$681:;
	TMP$1444$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$809:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$1444$1 * 56ll)) + 8ll);
	if( DDSIZE$1 <= 4ll ) goto label$683;
	{
		struct $8FBSYMBOL* vr$5 = SYMBALLOCINTCONST( -4616189618054758400ll, 14ll );
		SYM$1 = vr$5;
		struct $6IRVREG* vr$7 = (*(tmp$72*)((uint8*)&IR$ + 472ll))( 14ll, (struct $8FBSYMBOL*)0ull, SYM$1, *(int64*)((uint8*)SYM$1 + 88ll) );
		VREG$1 = vr$7;
		fb_StrAssign( (void*)&SUFFIX$1, -1ll, (void*)"d ", 3ll, 0 );
	}
	goto label$682;
	label$683:;
	{
		struct $8FBSYMBOL* vr$8 = SYMBALLOCINTCONST( 3212836864ll, 9ll );
		SYM$1 = vr$8;
		struct $6IRVREG* vr$10 = (*(tmp$72*)((uint8*)&IR$ + 472ll))( 9ll, (struct $8FBSYMBOL*)0ull, SYM$1, *(int64*)((uint8*)SYM$1 + 88ll) );
		VREG$1 = vr$10;
		fb_StrAssign( (void*)&SUFFIX$1, -1ll, (void*)"s ", 3ll, 0 );
	}
	label$682:;
	*(int64*)((uint8*)SYM$1 + 168ll) = 16ll;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( VREG$1, &NEG1$1, 25ll, 0ll, 0ll, -1ll );
	OUTP( (char*)"sub esp, 8" );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 1ll ) goto label$685;
	{
		FBSTRING TMP$1450$2;
		FBSTRING TMP$1451$2;
		FBSTRING TMP$1452$2;
		FBSTRING TMP$1453$2;
		FBSTRING TMP$1454$2;
		if( DDSIZE$1 <= 4ll ) goto label$687;
		{
			FBSTRING TMP$1445$3;
			FBSTRING TMP$1446$3;
			__builtin_memset( &TMP$1446$3, 0, 24ll );
			__builtin_memset( &TMP$1445$3, 0, 24ll );
			FBSTRING* vr$16 = fb_StrConcat( &TMP$1445$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$1446$3, -1ll, (void*)vr$16, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1446$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1446$3 );
			OUTP( (char*)"fld qword ptr [esp]" );
		}
		goto label$686;
		label$687:;
		{
			FBSTRING TMP$1447$3;
			FBSTRING TMP$1448$3;
			__builtin_memset( &TMP$1448$3, 0, 24ll );
			__builtin_memset( &TMP$1447$3, 0, 24ll );
			FBSTRING* vr$22 = fb_StrConcat( &TMP$1447$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$1448$3, -1ll, (void*)vr$22, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1448$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1448$3 );
			OUTP( (char*)"fld dword ptr [esp]" );
		}
		label$686:;
		__builtin_memset( &TMP$1454$2, 0, 24ll );
		__builtin_memset( &TMP$1450$2, 0, 24ll );
		FBSTRING* vr$28 = fb_StrConcat( &TMP$1450$2, (void*)"movap", 6ll, (void*)&SUFFIX$1, -1ll );
		__builtin_memset( &TMP$1451$2, 0, 24ll );
		FBSTRING* vr$31 = fb_StrConcat( &TMP$1451$2, (void*)vr$28, -1ll, (void*)"xmm7", 5ll );
		__builtin_memset( &TMP$1452$2, 0, 24ll );
		FBSTRING* vr$34 = fb_StrConcat( &TMP$1452$2, (void*)vr$31, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1453$2, 0, 24ll );
		FBSTRING* vr$37 = fb_StrConcat( &TMP$1453$2, (void*)vr$34, -1ll, (void*)&DST$1, -1ll );
		fb_StrAssign( (void*)&TMP$1454$2, -1ll, (void*)vr$37, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1454$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1454$2 );
	}
	goto label$684;
	label$685:;
	{
		if( DDSIZE$1 <= 4ll ) goto label$689;
		{
			OUTP( (char*)"fst qword ptr [esp]" );
			OUTP( (char*)"movlpd xmm7, qword ptr [esp]" );
		}
		goto label$688;
		label$689:;
		{
			OUTP( (char*)"fst dword ptr [esp]" );
			OUTP( (char*)"movss xmm7, dword ptr [esp]" );
		}
		label$688:;
	}
	label$684:;
	OUTP( (char*)"fistp qword ptr [esp]" );
	OUTP( (char*)"fild qword ptr [esp]" );
	__builtin_memset( &TMP$1461$1, 0, 24ll );
	__builtin_memset( &TMP$1459$1, 0, 24ll );
	FBSTRING* vr$46 = fb_StrConcat( &TMP$1459$1, (void*)"fstp ", 6ll, (void*)(((int64)(struct $12EMITDATATYPE*)DTYPETB$ + (*(int64*)((uint8*)DVREG$1 + 8ll) * 24ll)) + 8ll), 12ll );
	__builtin_memset( &TMP$1460$1, 0, 24ll );
	FBSTRING* vr$49 = fb_StrConcat( &TMP$1460$1, (void*)vr$46, -1ll, (void*)" [esp]", 7ll );
	fb_StrAssign( (void*)&TMP$1461$1, -1ll, (void*)vr$49, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1461$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1461$1 );
	__builtin_memset( &TMP$1467$1, 0, 24ll );
	__builtin_memset( &TMP$1463$1, 0, 24ll );
	FBSTRING* vr$55 = fb_StrConcat( &TMP$1463$1, (void*)"xorp", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1464$1, 0, 24ll );
	FBSTRING* vr$58 = fb_StrConcat( &TMP$1464$1, (void*)vr$55, -1ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1465$1, 0, 24ll );
	FBSTRING* vr$61 = fb_StrConcat( &TMP$1465$1, (void*)vr$58, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1466$1, 0, 24ll );
	FBSTRING* vr$64 = fb_StrConcat( &TMP$1466$1, (void*)vr$61, -1ll, (void*)&DST$1, -1ll );
	fb_StrAssign( (void*)&TMP$1467$1, -1ll, (void*)vr$64, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1467$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1467$1 );
	__builtin_memset( &TMP$1472$1, 0, 24ll );
	__builtin_memset( &TMP$1468$1, 0, 24ll );
	FBSTRING* vr$70 = fb_StrConcat( &TMP$1468$1, (void*)"subs", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1469$1, 0, 24ll );
	FBSTRING* vr$73 = fb_StrConcat( &TMP$1469$1, (void*)vr$70, -1ll, (void*)"xmm7", 5ll );
	__builtin_memset( &TMP$1470$1, 0, 24ll );
	FBSTRING* vr$76 = fb_StrConcat( &TMP$1470$1, (void*)vr$73, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1471$1, 0, 24ll );
	FBSTRING* vr$79 = fb_StrConcat( &TMP$1471$1, (void*)vr$76, -1ll, (void*)"[esp]", 6ll );
	fb_StrAssign( (void*)&TMP$1472$1, -1ll, (void*)vr$79, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1472$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1472$1 );
	__builtin_memset( &TMP$1478$1, 0, 24ll );
	__builtin_memset( &TMP$1474$1, 0, 24ll );
	FBSTRING* vr$85 = fb_StrConcat( &TMP$1474$1, (void*)"cmpnles", 8ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1475$1, 0, 24ll );
	FBSTRING* vr$88 = fb_StrConcat( &TMP$1475$1, (void*)vr$85, -1ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1476$1, 0, 24ll );
	FBSTRING* vr$91 = fb_StrConcat( &TMP$1476$1, (void*)vr$88, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1477$1, 0, 24ll );
	FBSTRING* vr$94 = fb_StrConcat( &TMP$1477$1, (void*)vr$91, -1ll, (void*)"xmm7", 5ll );
	fb_StrAssign( (void*)&TMP$1478$1, -1ll, (void*)vr$94, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1478$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1478$1 );
	__builtin_memset( &TMP$1484$1, 0, 24ll );
	__builtin_memset( &TMP$1480$1, 0, 24ll );
	FBSTRING* vr$100 = fb_StrConcat( &TMP$1480$1, (void*)"andp", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1481$1, 0, 24ll );
	FBSTRING* vr$103 = fb_StrConcat( &TMP$1481$1, (void*)vr$100, -1ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1482$1, 0, 24ll );
	FBSTRING* vr$106 = fb_StrConcat( &TMP$1482$1, (void*)vr$103, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1483$1, 0, 24ll );
	FBSTRING* vr$109 = fb_StrConcat( &TMP$1483$1, (void*)vr$106, -1ll, (void*)&NEG1$1, -1ll );
	fb_StrAssign( (void*)&TMP$1484$1, -1ll, (void*)vr$109, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1484$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1484$1 );
	__builtin_memset( &TMP$1489$1, 0, 24ll );
	__builtin_memset( &TMP$1485$1, 0, 24ll );
	FBSTRING* vr$115 = fb_StrConcat( &TMP$1485$1, (void*)"adds", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1486$1, 0, 24ll );
	FBSTRING* vr$118 = fb_StrConcat( &TMP$1486$1, (void*)vr$115, -1ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1487$1, 0, 24ll );
	FBSTRING* vr$121 = fb_StrConcat( &TMP$1487$1, (void*)vr$118, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1488$1, 0, 24ll );
	FBSTRING* vr$124 = fb_StrConcat( &TMP$1488$1, (void*)vr$121, -1ll, (void*)"[esp]", 6ll );
	fb_StrAssign( (void*)&TMP$1489$1, -1ll, (void*)vr$124, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1489$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1489$1 );
	OUTP( (char*)"add esp, 8" );
	label$680:;
}

static void _EMITFIX_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$1490$1;
	FBSTRING TMP$1491$1;
	FBSTRING TMP$1492$1;
	FBSTRING TMP$1506$1;
	FBSTRING TMP$1507$1;
	FBSTRING TMP$1508$1;
	FBSTRING TMP$1511$1;
	FBSTRING TMP$1512$1;
	FBSTRING TMP$1513$1;
	FBSTRING TMP$1514$1;
	FBSTRING TMP$1515$1;
	FBSTRING TMP$1516$1;
	FBSTRING TMP$1517$1;
	FBSTRING TMP$1518$1;
	FBSTRING TMP$1519$1;
	FBSTRING TMP$1520$1;
	FBSTRING TMP$1521$1;
	FBSTRING TMP$1522$1;
	FBSTRING TMP$1523$1;
	FBSTRING TMP$1524$1;
	FBSTRING TMP$1525$1;
	FBSTRING TMP$1526$1;
	FBSTRING TMP$1527$1;
	FBSTRING TMP$1528$1;
	FBSTRING TMP$1529$1;
	FBSTRING TMP$1530$1;
	FBSTRING TMP$1531$1;
	FBSTRING TMP$1532$1;
	FBSTRING TMP$1533$1;
	FBSTRING TMP$1534$1;
	FBSTRING TMP$1535$1;
	FBSTRING TMP$1536$1;
	FBSTRING TMP$1537$1;
	FBSTRING TMP$1538$1;
	FBSTRING TMP$1541$1;
	FBSTRING TMP$1542$1;
	FBSTRING TMP$1543$1;
	FBSTRING TMP$1544$1;
	FBSTRING TMP$1545$1;
	FBSTRING TMP$1546$1;
	FBSTRING TMP$1547$1;
	FBSTRING TMP$1548$1;
	FBSTRING TMP$1549$1;
	FBSTRING TMP$1550$1;
	FBSTRING TMP$1551$1;
	FBSTRING TMP$1552$1;
	FBSTRING TMP$1553$1;
	FBSTRING TMP$1554$1;
	FBSTRING TMP$1555$1;
	FBSTRING TMP$1556$1;
	FBSTRING TMP$1557$1;
	label$690:;
	static FBSTRING DST$1;
	static FBSTRING SUFFIX$1;
	static FBSTRING ABSVAL$1;
	static FBSTRING NEG1$1;
	static int64 DDSIZE$1;
	static struct $8FBSYMBOL* NEG1_SYM$1;
	static struct $8FBSYMBOL* ABSVAL_SYM$1;
	static struct $6IRVREG* NEG1_VREG$1;
	static struct $6IRVREG* ABSVAL_VREG$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$692;
	TMP$1490$1 = 24ll;
	goto label$810;
	label$692:;
	TMP$1490$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$810:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$1490$1 * 56ll)) + 8ll);
	if( DDSIZE$1 <= 4ll ) goto label$694;
	{
		struct $8FBSYMBOL* vr$5 = SYMBALLOCINTCONST( -4616189618054758400ll, 14ll );
		NEG1_SYM$1 = vr$5;
		struct $6IRVREG* vr$7 = (*(tmp$72*)((uint8*)&IR$ + 472ll))( 14ll, (struct $8FBSYMBOL*)0ull, NEG1_SYM$1, *(int64*)((uint8*)NEG1_SYM$1 + 88ll) );
		NEG1_VREG$1 = vr$7;
		struct $8FBSYMBOL* vr$8 = SYMBALLOCINTCONST( -9223372036854775808ull, 14ll );
		ABSVAL_SYM$1 = vr$8;
		struct $6IRVREG* vr$10 = (*(tmp$72*)((uint8*)&IR$ + 472ll))( 14ll, (struct $8FBSYMBOL*)0ull, ABSVAL_SYM$1, *(int64*)((uint8*)ABSVAL_SYM$1 + 88ll) );
		ABSVAL_VREG$1 = vr$10;
		fb_StrAssign( (void*)&SUFFIX$1, -1ll, (void*)"d ", 3ll, 0 );
	}
	goto label$693;
	label$694:;
	{
		struct $8FBSYMBOL* vr$11 = SYMBALLOCINTCONST( 3212836864ll, 9ll );
		NEG1_SYM$1 = vr$11;
		struct $6IRVREG* vr$13 = (*(tmp$72*)((uint8*)&IR$ + 472ll))( 9ll, (struct $8FBSYMBOL*)0ull, NEG1_SYM$1, *(int64*)((uint8*)NEG1_SYM$1 + 88ll) );
		NEG1_VREG$1 = vr$13;
		struct $8FBSYMBOL* vr$14 = SYMBALLOCINTCONST( 2147483648ll, 9ll );
		ABSVAL_SYM$1 = vr$14;
		struct $6IRVREG* vr$16 = (*(tmp$72*)((uint8*)&IR$ + 472ll))( 9ll, (struct $8FBSYMBOL*)0ull, ABSVAL_SYM$1, *(int64*)((uint8*)ABSVAL_SYM$1 + 88ll) );
		ABSVAL_VREG$1 = vr$16;
		fb_StrAssign( (void*)&SUFFIX$1, -1ll, (void*)"s ", 3ll, 0 );
	}
	label$693:;
	*(int64*)((uint8*)NEG1_SYM$1 + 168ll) = 16ll;
	*(int64*)((uint8*)ABSVAL_SYM$1 + 168ll) = 16ll;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( NEG1_VREG$1, &NEG1$1, 25ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( ABSVAL_VREG$1, &ABSVAL$1, 25ll, 0ll, 0ll, -1ll );
	__builtin_memset( &TMP$1492$1, 0, 24ll );
	FBSTRING* vr$21 = fb_LongintToStr( DDSIZE$1 + 8ll );
	__builtin_memset( &TMP$1491$1, 0, 24ll );
	FBSTRING* vr$24 = fb_StrConcat( &TMP$1491$1, (void*)"sub esp, ", 10ll, (void*)vr$21, -1ll );
	fb_StrAssign( (void*)&TMP$1492$1, -1ll, (void*)vr$24, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1492$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1492$1 );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 1ll ) goto label$696;
	{
		if( DDSIZE$1 <= 4ll ) goto label$698;
		{
			FBSTRING TMP$1493$3;
			FBSTRING TMP$1494$3;
			__builtin_memset( &TMP$1494$3, 0, 24ll );
			__builtin_memset( &TMP$1493$3, 0, 24ll );
			FBSTRING* vr$31 = fb_StrConcat( &TMP$1493$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$1494$3, -1ll, (void*)vr$31, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1494$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1494$3 );
			OUTP( (char*)"fld qword ptr [esp]" );
		}
		goto label$697;
		label$698:;
		{
			FBSTRING TMP$1495$3;
			FBSTRING TMP$1496$3;
			__builtin_memset( &TMP$1496$3, 0, 24ll );
			__builtin_memset( &TMP$1495$3, 0, 24ll );
			FBSTRING* vr$37 = fb_StrConcat( &TMP$1495$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$1496$3, -1ll, (void*)vr$37, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1496$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1496$3 );
			OUTP( (char*)"fld dword ptr [esp]" );
		}
		label$697:;
	}
	goto label$695;
	label$696:;
	{
		if( DDSIZE$1 <= 4ll ) goto label$700;
		{
			FBSTRING TMP$1497$3;
			FBSTRING TMP$1498$3;
			FBSTRING TMP$1499$3;
			FBSTRING TMP$1500$3;
			OUTP( (char*)"fst qword ptr [esp]" );
			__builtin_memset( &TMP$1500$3, 0, 24ll );
			__builtin_memset( &TMP$1497$3, 0, 24ll );
			FBSTRING* vr$43 = fb_StrConcat( &TMP$1497$3, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$1498$3, 0, 24ll );
			FBSTRING* vr$46 = fb_StrConcat( &TMP$1498$3, (void*)vr$43, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$1499$3, 0, 24ll );
			FBSTRING* vr$49 = fb_StrConcat( &TMP$1499$3, (void*)vr$46, -1ll, (void*)"qword ptr [esp]", 16ll );
			fb_StrAssign( (void*)&TMP$1500$3, -1ll, (void*)vr$49, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1500$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1500$3 );
		}
		goto label$699;
		label$700:;
		{
			FBSTRING TMP$1501$3;
			FBSTRING TMP$1502$3;
			FBSTRING TMP$1503$3;
			FBSTRING TMP$1504$3;
			OUTP( (char*)"fst dword ptr [esp]" );
			__builtin_memset( &TMP$1504$3, 0, 24ll );
			__builtin_memset( &TMP$1501$3, 0, 24ll );
			FBSTRING* vr$55 = fb_StrConcat( &TMP$1501$3, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$1502$3, 0, 24ll );
			FBSTRING* vr$58 = fb_StrConcat( &TMP$1502$3, (void*)vr$55, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$1503$3, 0, 24ll );
			FBSTRING* vr$61 = fb_StrConcat( &TMP$1503$3, (void*)vr$58, -1ll, (void*)"dword ptr [esp]", 16ll );
			fb_StrAssign( (void*)&TMP$1504$3, -1ll, (void*)vr$61, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1504$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1504$3 );
		}
		label$699:;
	}
	label$695:;
	__builtin_memset( &TMP$1508$1, 0, 24ll );
	__builtin_memset( &TMP$1506$1, 0, 24ll );
	FBSTRING* vr$67 = fb_StrConcat( &TMP$1506$1, (void*)"xorp", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1507$1, 0, 24ll );
	FBSTRING* vr$70 = fb_StrConcat( &TMP$1507$1, (void*)vr$67, -1ll, (void*)"xmm7, xmm7", 11ll );
	fb_StrAssign( (void*)&TMP$1508$1, -1ll, (void*)vr$70, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1508$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1508$1 );
	if( DDSIZE$1 <= 4ll ) goto label$702;
	{
		OUTP( (char*)"movlpd [esp+8], xmm7" );
	}
	goto label$701;
	label$702:;
	{
		OUTP( (char*)"movss [esp+8], xmm7" );
	}
	label$701:;
	OUTP( (char*)"fistp qword ptr [esp]" );
	__builtin_memset( &TMP$1515$1, 0, 24ll );
	__builtin_memset( &TMP$1511$1, 0, 24ll );
	FBSTRING* vr$76 = fb_StrConcat( &TMP$1511$1, (void*)"cmpnles", 8ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1512$1, 0, 24ll );
	FBSTRING* vr$79 = fb_StrConcat( &TMP$1512$1, (void*)vr$76, -1ll, (void*)"xmm7", 5ll );
	__builtin_memset( &TMP$1513$1, 0, 24ll );
	FBSTRING* vr$82 = fb_StrConcat( &TMP$1513$1, (void*)vr$79, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1514$1, 0, 24ll );
	FBSTRING* vr$85 = fb_StrConcat( &TMP$1514$1, (void*)vr$82, -1ll, (void*)&DST$1, -1ll );
	fb_StrAssign( (void*)&TMP$1515$1, -1ll, (void*)vr$85, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1515$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1515$1 );
	OUTP( (char*)"fild qword ptr [esp]" );
	__builtin_memset( &TMP$1520$1, 0, 24ll );
	__builtin_memset( &TMP$1516$1, 0, 24ll );
	FBSTRING* vr$91 = fb_StrConcat( &TMP$1516$1, (void*)"andp", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1517$1, 0, 24ll );
	FBSTRING* vr$94 = fb_StrConcat( &TMP$1517$1, (void*)vr$91, -1ll, (void*)"xmm7", 5ll );
	__builtin_memset( &TMP$1518$1, 0, 24ll );
	FBSTRING* vr$97 = fb_StrConcat( &TMP$1518$1, (void*)vr$94, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1519$1, 0, 24ll );
	FBSTRING* vr$100 = fb_StrConcat( &TMP$1519$1, (void*)vr$97, -1ll, (void*)&ABSVAL$1, -1ll );
	fb_StrAssign( (void*)&TMP$1520$1, -1ll, (void*)vr$100, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1520$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1520$1 );
	__builtin_memset( &TMP$1523$1, 0, 24ll );
	__builtin_memset( &TMP$1521$1, 0, 24ll );
	FBSTRING* vr$109 = fb_StrConcat( &TMP$1521$1, (void*)"fstp ", 6ll, (void*)(((int64)(struct $12EMITDATATYPE*)DTYPETB$ + (*(int64*)((uint8*)DVREG$1 + 8ll) * 24ll)) + 8ll), 12ll );
	__builtin_memset( &TMP$1522$1, 0, 24ll );
	FBSTRING* vr$112 = fb_StrConcat( &TMP$1522$1, (void*)vr$109, -1ll, (void*)" [esp]", 7ll );
	fb_StrAssign( (void*)&TMP$1523$1, -1ll, (void*)vr$112, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1523$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1523$1 );
	__builtin_memset( &TMP$1528$1, 0, 24ll );
	__builtin_memset( &TMP$1524$1, 0, 24ll );
	FBSTRING* vr$118 = fb_StrConcat( &TMP$1524$1, (void*)"subs", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1525$1, 0, 24ll );
	FBSTRING* vr$121 = fb_StrConcat( &TMP$1525$1, (void*)vr$118, -1ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1526$1, 0, 24ll );
	FBSTRING* vr$124 = fb_StrConcat( &TMP$1526$1, (void*)vr$121, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1527$1, 0, 24ll );
	FBSTRING* vr$127 = fb_StrConcat( &TMP$1527$1, (void*)vr$124, -1ll, (void*)"[esp]", 6ll );
	fb_StrAssign( (void*)&TMP$1528$1, -1ll, (void*)vr$127, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1528$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1528$1 );
	__builtin_memset( &TMP$1533$1, 0, 24ll );
	__builtin_memset( &TMP$1529$1, 0, 24ll );
	FBSTRING* vr$133 = fb_StrConcat( &TMP$1529$1, (void*)"xorp", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1530$1, 0, 24ll );
	FBSTRING* vr$136 = fb_StrConcat( &TMP$1530$1, (void*)vr$133, -1ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1531$1, 0, 24ll );
	FBSTRING* vr$139 = fb_StrConcat( &TMP$1531$1, (void*)vr$136, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1532$1, 0, 24ll );
	FBSTRING* vr$142 = fb_StrConcat( &TMP$1532$1, (void*)vr$139, -1ll, (void*)"xmm7", 5ll );
	fb_StrAssign( (void*)&TMP$1533$1, -1ll, (void*)vr$142, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1533$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1533$1 );
	__builtin_memset( &TMP$1538$1, 0, 24ll );
	__builtin_memset( &TMP$1534$1, 0, 24ll );
	FBSTRING* vr$148 = fb_StrConcat( &TMP$1534$1, (void*)"xorp", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1535$1, 0, 24ll );
	FBSTRING* vr$151 = fb_StrConcat( &TMP$1535$1, (void*)vr$148, -1ll, (void*)"xmm7", 5ll );
	__builtin_memset( &TMP$1536$1, 0, 24ll );
	FBSTRING* vr$154 = fb_StrConcat( &TMP$1536$1, (void*)vr$151, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1537$1, 0, 24ll );
	FBSTRING* vr$157 = fb_StrConcat( &TMP$1537$1, (void*)vr$154, -1ll, (void*)&NEG1$1, -1ll );
	fb_StrAssign( (void*)&TMP$1538$1, -1ll, (void*)vr$157, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1538$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1538$1 );
	__builtin_memset( &TMP$1545$1, 0, 24ll );
	__builtin_memset( &TMP$1541$1, 0, 24ll );
	FBSTRING* vr$163 = fb_StrConcat( &TMP$1541$1, (void*)"cmplts", 7ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1542$1, 0, 24ll );
	FBSTRING* vr$166 = fb_StrConcat( &TMP$1542$1, (void*)vr$163, -1ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1543$1, 0, 24ll );
	FBSTRING* vr$169 = fb_StrConcat( &TMP$1543$1, (void*)vr$166, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1544$1, 0, 24ll );
	FBSTRING* vr$172 = fb_StrConcat( &TMP$1544$1, (void*)vr$169, -1ll, (void*)"[esp+8]", 8ll );
	fb_StrAssign( (void*)&TMP$1545$1, -1ll, (void*)vr$172, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1545$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1545$1 );
	__builtin_memset( &TMP$1550$1, 0, 24ll );
	__builtin_memset( &TMP$1546$1, 0, 24ll );
	FBSTRING* vr$178 = fb_StrConcat( &TMP$1546$1, (void*)"andp", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1547$1, 0, 24ll );
	FBSTRING* vr$181 = fb_StrConcat( &TMP$1547$1, (void*)vr$178, -1ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1548$1, 0, 24ll );
	FBSTRING* vr$184 = fb_StrConcat( &TMP$1548$1, (void*)vr$181, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1549$1, 0, 24ll );
	FBSTRING* vr$187 = fb_StrConcat( &TMP$1549$1, (void*)vr$184, -1ll, (void*)"xmm7", 5ll );
	fb_StrAssign( (void*)&TMP$1550$1, -1ll, (void*)vr$187, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1550$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1550$1 );
	__builtin_memset( &TMP$1555$1, 0, 24ll );
	__builtin_memset( &TMP$1551$1, 0, 24ll );
	FBSTRING* vr$193 = fb_StrConcat( &TMP$1551$1, (void*)"adds", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1552$1, 0, 24ll );
	FBSTRING* vr$196 = fb_StrConcat( &TMP$1552$1, (void*)vr$193, -1ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1553$1, 0, 24ll );
	FBSTRING* vr$199 = fb_StrConcat( &TMP$1553$1, (void*)vr$196, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1554$1, 0, 24ll );
	FBSTRING* vr$202 = fb_StrConcat( &TMP$1554$1, (void*)vr$199, -1ll, (void*)"[esp]", 6ll );
	fb_StrAssign( (void*)&TMP$1555$1, -1ll, (void*)vr$202, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1555$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1555$1 );
	__builtin_memset( &TMP$1557$1, 0, 24ll );
	FBSTRING* vr$207 = fb_LongintToStr( DDSIZE$1 + 8ll );
	__builtin_memset( &TMP$1556$1, 0, 24ll );
	FBSTRING* vr$210 = fb_StrConcat( &TMP$1556$1, (void*)"add esp, ", 10ll, (void*)vr$207, -1ll );
	fb_StrAssign( (void*)&TMP$1557$1, -1ll, (void*)vr$210, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1557$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1557$1 );
	label$691:;
}

static void _EMITFRAC_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$1558$1;
	FBSTRING TMP$1559$1;
	FBSTRING TMP$1560$1;
	FBSTRING TMP$1573$1;
	FBSTRING TMP$1574$1;
	FBSTRING TMP$1575$1;
	FBSTRING TMP$1588$1;
	FBSTRING TMP$1589$1;
	FBSTRING TMP$1590$1;
	FBSTRING TMP$1591$1;
	FBSTRING TMP$1592$1;
	FBSTRING TMP$1593$1;
	FBSTRING TMP$1594$1;
	FBSTRING TMP$1595$1;
	FBSTRING TMP$1596$1;
	FBSTRING TMP$1597$1;
	FBSTRING TMP$1598$1;
	FBSTRING TMP$1599$1;
	FBSTRING TMP$1600$1;
	FBSTRING TMP$1601$1;
	FBSTRING TMP$1602$1;
	FBSTRING TMP$1603$1;
	FBSTRING TMP$1604$1;
	FBSTRING TMP$1605$1;
	FBSTRING TMP$1606$1;
	FBSTRING TMP$1607$1;
	FBSTRING TMP$1608$1;
	FBSTRING TMP$1609$1;
	FBSTRING TMP$1610$1;
	FBSTRING TMP$1611$1;
	FBSTRING TMP$1612$1;
	FBSTRING TMP$1613$1;
	FBSTRING TMP$1614$1;
	FBSTRING TMP$1615$1;
	FBSTRING TMP$1616$1;
	FBSTRING TMP$1617$1;
	FBSTRING TMP$1618$1;
	FBSTRING TMP$1619$1;
	FBSTRING TMP$1620$1;
	FBSTRING TMP$1621$1;
	FBSTRING TMP$1622$1;
	FBSTRING TMP$1623$1;
	FBSTRING TMP$1624$1;
	FBSTRING TMP$1625$1;
	FBSTRING TMP$1637$1;
	FBSTRING TMP$1638$1;
	FBSTRING TMP$1639$1;
	FBSTRING TMP$1640$1;
	FBSTRING TMP$1641$1;
	FBSTRING TMP$1642$1;
	FBSTRING TMP$1643$1;
	FBSTRING TMP$1644$1;
	FBSTRING TMP$1645$1;
	FBSTRING TMP$1646$1;
	FBSTRING TMP$1647$1;
	FBSTRING TMP$1648$1;
	label$703:;
	static FBSTRING DST$1;
	static FBSTRING SUFFIX$1;
	static FBSTRING ABSVAL$1;
	static FBSTRING NEG1$1;
	static int64 DDSIZE$1;
	static struct $8FBSYMBOL* NEG1_SYM$1;
	static struct $8FBSYMBOL* ABSVAL_SYM$1;
	static struct $6IRVREG* NEG1_VREG$1;
	static struct $6IRVREG* ABSVAL_VREG$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$705;
	TMP$1558$1 = 24ll;
	goto label$811;
	label$705:;
	TMP$1558$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$811:;
	DDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$1558$1 * 56ll)) + 8ll);
	if( DDSIZE$1 <= 4ll ) goto label$707;
	{
		struct $8FBSYMBOL* vr$5 = SYMBALLOCINTCONST( -4616189618054758400ll, 14ll );
		NEG1_SYM$1 = vr$5;
		struct $6IRVREG* vr$7 = (*(tmp$72*)((uint8*)&IR$ + 472ll))( 14ll, (struct $8FBSYMBOL*)0ull, NEG1_SYM$1, *(int64*)((uint8*)NEG1_SYM$1 + 88ll) );
		NEG1_VREG$1 = vr$7;
		struct $8FBSYMBOL* vr$8 = SYMBALLOCINTCONST( -9223372036854775808ull, 14ll );
		ABSVAL_SYM$1 = vr$8;
		struct $6IRVREG* vr$10 = (*(tmp$72*)((uint8*)&IR$ + 472ll))( 14ll, (struct $8FBSYMBOL*)0ull, ABSVAL_SYM$1, *(int64*)((uint8*)ABSVAL_SYM$1 + 88ll) );
		ABSVAL_VREG$1 = vr$10;
		fb_StrAssign( (void*)&SUFFIX$1, -1ll, (void*)"d ", 3ll, 0 );
	}
	goto label$706;
	label$707:;
	{
		struct $8FBSYMBOL* vr$11 = SYMBALLOCINTCONST( 3212836864ll, 9ll );
		NEG1_SYM$1 = vr$11;
		struct $6IRVREG* vr$13 = (*(tmp$72*)((uint8*)&IR$ + 472ll))( 9ll, (struct $8FBSYMBOL*)0ull, NEG1_SYM$1, *(int64*)((uint8*)NEG1_SYM$1 + 88ll) );
		NEG1_VREG$1 = vr$13;
		struct $8FBSYMBOL* vr$14 = SYMBALLOCINTCONST( 2147483648ll, 9ll );
		ABSVAL_SYM$1 = vr$14;
		struct $6IRVREG* vr$16 = (*(tmp$72*)((uint8*)&IR$ + 472ll))( 9ll, (struct $8FBSYMBOL*)0ull, ABSVAL_SYM$1, *(int64*)((uint8*)ABSVAL_SYM$1 + 88ll) );
		ABSVAL_VREG$1 = vr$16;
		fb_StrAssign( (void*)&SUFFIX$1, -1ll, (void*)"s ", 3ll, 0 );
	}
	label$706:;
	*(int64*)((uint8*)NEG1_SYM$1 + 168ll) = 16ll;
	*(int64*)((uint8*)ABSVAL_SYM$1 + 168ll) = 16ll;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( NEG1_VREG$1, &NEG1$1, 25ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( ABSVAL_VREG$1, &ABSVAL$1, 25ll, 0ll, 0ll, -1ll );
	__builtin_memset( &TMP$1560$1, 0, 24ll );
	FBSTRING* vr$21 = fb_LongintToStr( DDSIZE$1 + 8ll );
	__builtin_memset( &TMP$1559$1, 0, 24ll );
	FBSTRING* vr$24 = fb_StrConcat( &TMP$1559$1, (void*)"sub esp, ", 10ll, (void*)vr$21, -1ll );
	fb_StrAssign( (void*)&TMP$1560$1, -1ll, (void*)vr$24, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1560$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1560$1 );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 1ll ) goto label$709;
	{
		if( DDSIZE$1 <= 4ll ) goto label$711;
		{
			FBSTRING TMP$1561$3;
			FBSTRING TMP$1562$3;
			__builtin_memset( &TMP$1562$3, 0, 24ll );
			__builtin_memset( &TMP$1561$3, 0, 24ll );
			FBSTRING* vr$31 = fb_StrConcat( &TMP$1561$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$1562$3, -1ll, (void*)vr$31, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1562$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1562$3 );
			OUTP( (char*)"fld qword ptr [esp]" );
		}
		goto label$710;
		label$711:;
		{
			FBSTRING TMP$1563$3;
			FBSTRING TMP$1564$3;
			__builtin_memset( &TMP$1564$3, 0, 24ll );
			__builtin_memset( &TMP$1563$3, 0, 24ll );
			FBSTRING* vr$37 = fb_StrConcat( &TMP$1563$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&DST$1, -1ll );
			fb_StrAssign( (void*)&TMP$1564$3, -1ll, (void*)vr$37, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1564$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1564$3 );
			OUTP( (char*)"fld dword ptr [esp]" );
		}
		label$710:;
	}
	goto label$708;
	label$709:;
	{
		if( DDSIZE$1 <= 4ll ) goto label$713;
		{
			FBSTRING TMP$1565$3;
			FBSTRING TMP$1566$3;
			FBSTRING TMP$1567$3;
			FBSTRING TMP$1568$3;
			OUTP( (char*)"fst qword ptr [esp]" );
			__builtin_memset( &TMP$1568$3, 0, 24ll );
			__builtin_memset( &TMP$1565$3, 0, 24ll );
			FBSTRING* vr$43 = fb_StrConcat( &TMP$1565$3, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$1566$3, 0, 24ll );
			FBSTRING* vr$46 = fb_StrConcat( &TMP$1566$3, (void*)vr$43, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$1567$3, 0, 24ll );
			FBSTRING* vr$49 = fb_StrConcat( &TMP$1567$3, (void*)vr$46, -1ll, (void*)"qword ptr [esp]", 16ll );
			fb_StrAssign( (void*)&TMP$1568$3, -1ll, (void*)vr$49, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1568$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1568$3 );
		}
		goto label$712;
		label$713:;
		{
			FBSTRING TMP$1569$3;
			FBSTRING TMP$1570$3;
			FBSTRING TMP$1571$3;
			FBSTRING TMP$1572$3;
			OUTP( (char*)"fst dword ptr [esp]" );
			__builtin_memset( &TMP$1572$3, 0, 24ll );
			__builtin_memset( &TMP$1569$3, 0, 24ll );
			FBSTRING* vr$55 = fb_StrConcat( &TMP$1569$3, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$1570$3, 0, 24ll );
			FBSTRING* vr$58 = fb_StrConcat( &TMP$1570$3, (void*)vr$55, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$1571$3, 0, 24ll );
			FBSTRING* vr$61 = fb_StrConcat( &TMP$1571$3, (void*)vr$58, -1ll, (void*)"dword ptr [esp]", 16ll );
			fb_StrAssign( (void*)&TMP$1572$3, -1ll, (void*)vr$61, -1ll, 0 );
			OUTP( (char*)*(char**)&TMP$1572$3 );
			fb_StrDelete( (FBSTRING*)&TMP$1572$3 );
		}
		label$712:;
	}
	label$708:;
	__builtin_memset( &TMP$1575$1, 0, 24ll );
	__builtin_memset( &TMP$1573$1, 0, 24ll );
	FBSTRING* vr$67 = fb_StrConcat( &TMP$1573$1, (void*)"xorp", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1574$1, 0, 24ll );
	FBSTRING* vr$70 = fb_StrConcat( &TMP$1574$1, (void*)vr$67, -1ll, (void*)"xmm7, xmm7", 11ll );
	fb_StrAssign( (void*)&TMP$1575$1, -1ll, (void*)vr$70, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1575$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1575$1 );
	if( DDSIZE$1 <= 4ll ) goto label$715;
	{
		FBSTRING TMP$1577$2;
		FBSTRING TMP$1578$2;
		FBSTRING TMP$1579$2;
		FBSTRING TMP$1580$2;
		FBSTRING TMP$1581$2;
		FBSTRING TMP$1582$2;
		__builtin_memset( &TMP$1582$2, 0, 24ll );
		__builtin_memset( &TMP$1577$2, 0, 24ll );
		FBSTRING* vr$76 = fb_StrConcat( &TMP$1577$2, (void*)"shufpd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1578$2, 0, 24ll );
		FBSTRING* vr$79 = fb_StrConcat( &TMP$1578$2, (void*)vr$76, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1579$2, 0, 24ll );
		FBSTRING* vr$82 = fb_StrConcat( &TMP$1579$2, (void*)vr$79, -1ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1580$2, 0, 24ll );
		FBSTRING* vr$85 = fb_StrConcat( &TMP$1580$2, (void*)vr$82, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1581$2, 0, 24ll );
		FBSTRING* vr$88 = fb_StrConcat( &TMP$1581$2, (void*)vr$85, -1ll, (void*)"0", 2ll );
		fb_StrAssign( (void*)&TMP$1582$2, -1ll, (void*)vr$88, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1582$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1582$2 );
		OUTP( (char*)"movlpd [esp+8], xmm7" );
	}
	goto label$714;
	label$715:;
	{
		FBSTRING TMP$1584$2;
		FBSTRING TMP$1585$2;
		FBSTRING TMP$1586$2;
		FBSTRING TMP$1587$2;
		__builtin_memset( &TMP$1587$2, 0, 24ll );
		__builtin_memset( &TMP$1584$2, 0, 24ll );
		FBSTRING* vr$94 = fb_StrConcat( &TMP$1584$2, (void*)"movlhps ", 9ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1585$2, 0, 24ll );
		FBSTRING* vr$97 = fb_StrConcat( &TMP$1585$2, (void*)vr$94, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1586$2, 0, 24ll );
		FBSTRING* vr$100 = fb_StrConcat( &TMP$1586$2, (void*)vr$97, -1ll, (void*)&DST$1, -1ll );
		fb_StrAssign( (void*)&TMP$1587$2, -1ll, (void*)vr$100, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1587$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1587$2 );
		OUTP( (char*)"movss [esp+8], xmm7" );
	}
	label$714:;
	OUTP( (char*)"fistp qword ptr [esp]" );
	__builtin_memset( &TMP$1592$1, 0, 24ll );
	__builtin_memset( &TMP$1588$1, 0, 24ll );
	FBSTRING* vr$106 = fb_StrConcat( &TMP$1588$1, (void*)"cmpnles", 8ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1589$1, 0, 24ll );
	FBSTRING* vr$109 = fb_StrConcat( &TMP$1589$1, (void*)vr$106, -1ll, (void*)"xmm7", 5ll );
	__builtin_memset( &TMP$1590$1, 0, 24ll );
	FBSTRING* vr$112 = fb_StrConcat( &TMP$1590$1, (void*)vr$109, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1591$1, 0, 24ll );
	FBSTRING* vr$115 = fb_StrConcat( &TMP$1591$1, (void*)vr$112, -1ll, (void*)&DST$1, -1ll );
	fb_StrAssign( (void*)&TMP$1592$1, -1ll, (void*)vr$115, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1592$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1592$1 );
	OUTP( (char*)"fild qword ptr [esp]" );
	__builtin_memset( &TMP$1597$1, 0, 24ll );
	__builtin_memset( &TMP$1593$1, 0, 24ll );
	FBSTRING* vr$121 = fb_StrConcat( &TMP$1593$1, (void*)"andp", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1594$1, 0, 24ll );
	FBSTRING* vr$124 = fb_StrConcat( &TMP$1594$1, (void*)vr$121, -1ll, (void*)"xmm7", 5ll );
	__builtin_memset( &TMP$1595$1, 0, 24ll );
	FBSTRING* vr$127 = fb_StrConcat( &TMP$1595$1, (void*)vr$124, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1596$1, 0, 24ll );
	FBSTRING* vr$130 = fb_StrConcat( &TMP$1596$1, (void*)vr$127, -1ll, (void*)&ABSVAL$1, -1ll );
	fb_StrAssign( (void*)&TMP$1597$1, -1ll, (void*)vr$130, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1597$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1597$1 );
	__builtin_memset( &TMP$1600$1, 0, 24ll );
	__builtin_memset( &TMP$1598$1, 0, 24ll );
	FBSTRING* vr$139 = fb_StrConcat( &TMP$1598$1, (void*)"fstp ", 6ll, (void*)(((int64)(struct $12EMITDATATYPE*)DTYPETB$ + (*(int64*)((uint8*)DVREG$1 + 8ll) * 24ll)) + 8ll), 12ll );
	__builtin_memset( &TMP$1599$1, 0, 24ll );
	FBSTRING* vr$142 = fb_StrConcat( &TMP$1599$1, (void*)vr$139, -1ll, (void*)" [esp]", 7ll );
	fb_StrAssign( (void*)&TMP$1600$1, -1ll, (void*)vr$142, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1600$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1600$1 );
	__builtin_memset( &TMP$1605$1, 0, 24ll );
	__builtin_memset( &TMP$1601$1, 0, 24ll );
	FBSTRING* vr$148 = fb_StrConcat( &TMP$1601$1, (void*)"subs", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1602$1, 0, 24ll );
	FBSTRING* vr$151 = fb_StrConcat( &TMP$1602$1, (void*)vr$148, -1ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1603$1, 0, 24ll );
	FBSTRING* vr$154 = fb_StrConcat( &TMP$1603$1, (void*)vr$151, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1604$1, 0, 24ll );
	FBSTRING* vr$157 = fb_StrConcat( &TMP$1604$1, (void*)vr$154, -1ll, (void*)"[esp]", 6ll );
	fb_StrAssign( (void*)&TMP$1605$1, -1ll, (void*)vr$157, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1605$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1605$1 );
	__builtin_memset( &TMP$1610$1, 0, 24ll );
	__builtin_memset( &TMP$1606$1, 0, 24ll );
	FBSTRING* vr$163 = fb_StrConcat( &TMP$1606$1, (void*)"xorp", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1607$1, 0, 24ll );
	FBSTRING* vr$166 = fb_StrConcat( &TMP$1607$1, (void*)vr$163, -1ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1608$1, 0, 24ll );
	FBSTRING* vr$169 = fb_StrConcat( &TMP$1608$1, (void*)vr$166, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1609$1, 0, 24ll );
	FBSTRING* vr$172 = fb_StrConcat( &TMP$1609$1, (void*)vr$169, -1ll, (void*)"xmm7", 5ll );
	fb_StrAssign( (void*)&TMP$1610$1, -1ll, (void*)vr$172, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1610$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1610$1 );
	__builtin_memset( &TMP$1615$1, 0, 24ll );
	__builtin_memset( &TMP$1611$1, 0, 24ll );
	FBSTRING* vr$178 = fb_StrConcat( &TMP$1611$1, (void*)"xorp", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1612$1, 0, 24ll );
	FBSTRING* vr$181 = fb_StrConcat( &TMP$1612$1, (void*)vr$178, -1ll, (void*)"xmm7", 5ll );
	__builtin_memset( &TMP$1613$1, 0, 24ll );
	FBSTRING* vr$184 = fb_StrConcat( &TMP$1613$1, (void*)vr$181, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1614$1, 0, 24ll );
	FBSTRING* vr$187 = fb_StrConcat( &TMP$1614$1, (void*)vr$184, -1ll, (void*)&NEG1$1, -1ll );
	fb_StrAssign( (void*)&TMP$1615$1, -1ll, (void*)vr$187, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1615$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1615$1 );
	__builtin_memset( &TMP$1620$1, 0, 24ll );
	__builtin_memset( &TMP$1616$1, 0, 24ll );
	FBSTRING* vr$193 = fb_StrConcat( &TMP$1616$1, (void*)"cmplts", 7ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1617$1, 0, 24ll );
	FBSTRING* vr$196 = fb_StrConcat( &TMP$1617$1, (void*)vr$193, -1ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1618$1, 0, 24ll );
	FBSTRING* vr$199 = fb_StrConcat( &TMP$1618$1, (void*)vr$196, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1619$1, 0, 24ll );
	FBSTRING* vr$202 = fb_StrConcat( &TMP$1619$1, (void*)vr$199, -1ll, (void*)"[esp+8]", 8ll );
	fb_StrAssign( (void*)&TMP$1620$1, -1ll, (void*)vr$202, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1620$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1620$1 );
	__builtin_memset( &TMP$1625$1, 0, 24ll );
	__builtin_memset( &TMP$1621$1, 0, 24ll );
	FBSTRING* vr$208 = fb_StrConcat( &TMP$1621$1, (void*)"andp", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1622$1, 0, 24ll );
	FBSTRING* vr$211 = fb_StrConcat( &TMP$1622$1, (void*)vr$208, -1ll, (void*)"xmm7", 5ll );
	__builtin_memset( &TMP$1623$1, 0, 24ll );
	FBSTRING* vr$214 = fb_StrConcat( &TMP$1623$1, (void*)vr$211, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1624$1, 0, 24ll );
	FBSTRING* vr$217 = fb_StrConcat( &TMP$1624$1, (void*)vr$214, -1ll, (void*)&DST$1, -1ll );
	fb_StrAssign( (void*)&TMP$1625$1, -1ll, (void*)vr$217, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1625$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1625$1 );
	if( DDSIZE$1 <= 4ll ) goto label$717;
	{
		FBSTRING TMP$1626$2;
		FBSTRING TMP$1627$2;
		FBSTRING TMP$1628$2;
		FBSTRING TMP$1629$2;
		FBSTRING TMP$1630$2;
		FBSTRING TMP$1631$2;
		__builtin_memset( &TMP$1631$2, 0, 24ll );
		__builtin_memset( &TMP$1626$2, 0, 24ll );
		FBSTRING* vr$223 = fb_StrConcat( &TMP$1626$2, (void*)"shufpd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1627$2, 0, 24ll );
		FBSTRING* vr$226 = fb_StrConcat( &TMP$1627$2, (void*)vr$223, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1628$2, 0, 24ll );
		FBSTRING* vr$229 = fb_StrConcat( &TMP$1628$2, (void*)vr$226, -1ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1629$2, 0, 24ll );
		FBSTRING* vr$232 = fb_StrConcat( &TMP$1629$2, (void*)vr$229, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1630$2, 0, 24ll );
		FBSTRING* vr$235 = fb_StrConcat( &TMP$1630$2, (void*)vr$232, -1ll, (void*)"1", 2ll );
		fb_StrAssign( (void*)&TMP$1631$2, -1ll, (void*)vr$235, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1631$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1631$2 );
	}
	goto label$716;
	label$717:;
	{
		FBSTRING TMP$1633$2;
		FBSTRING TMP$1634$2;
		FBSTRING TMP$1635$2;
		FBSTRING TMP$1636$2;
		__builtin_memset( &TMP$1636$2, 0, 24ll );
		__builtin_memset( &TMP$1633$2, 0, 24ll );
		FBSTRING* vr$241 = fb_StrConcat( &TMP$1633$2, (void*)"movhlps ", 9ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1634$2, 0, 24ll );
		FBSTRING* vr$244 = fb_StrConcat( &TMP$1634$2, (void*)vr$241, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1635$2, 0, 24ll );
		FBSTRING* vr$247 = fb_StrConcat( &TMP$1635$2, (void*)vr$244, -1ll, (void*)&DST$1, -1ll );
		fb_StrAssign( (void*)&TMP$1636$2, -1ll, (void*)vr$247, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1636$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1636$2 );
	}
	label$716:;
	__builtin_memset( &TMP$1641$1, 0, 24ll );
	__builtin_memset( &TMP$1637$1, 0, 24ll );
	FBSTRING* vr$253 = fb_StrConcat( &TMP$1637$1, (void*)"adds", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1638$1, 0, 24ll );
	FBSTRING* vr$256 = fb_StrConcat( &TMP$1638$1, (void*)vr$253, -1ll, (void*)"xmm7", 5ll );
	__builtin_memset( &TMP$1639$1, 0, 24ll );
	FBSTRING* vr$259 = fb_StrConcat( &TMP$1639$1, (void*)vr$256, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1640$1, 0, 24ll );
	FBSTRING* vr$262 = fb_StrConcat( &TMP$1640$1, (void*)vr$259, -1ll, (void*)"[esp]", 6ll );
	fb_StrAssign( (void*)&TMP$1641$1, -1ll, (void*)vr$262, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1641$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1641$1 );
	__builtin_memset( &TMP$1646$1, 0, 24ll );
	__builtin_memset( &TMP$1642$1, 0, 24ll );
	FBSTRING* vr$268 = fb_StrConcat( &TMP$1642$1, (void*)"subs", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1643$1, 0, 24ll );
	FBSTRING* vr$271 = fb_StrConcat( &TMP$1643$1, (void*)vr$268, -1ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1644$1, 0, 24ll );
	FBSTRING* vr$274 = fb_StrConcat( &TMP$1644$1, (void*)vr$271, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1645$1, 0, 24ll );
	FBSTRING* vr$277 = fb_StrConcat( &TMP$1645$1, (void*)vr$274, -1ll, (void*)"xmm7", 5ll );
	fb_StrAssign( (void*)&TMP$1646$1, -1ll, (void*)vr$277, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1646$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1646$1 );
	__builtin_memset( &TMP$1648$1, 0, 24ll );
	FBSTRING* vr$282 = fb_LongintToStr( DDSIZE$1 + 8ll );
	__builtin_memset( &TMP$1647$1, 0, 24ll );
	FBSTRING* vr$285 = fb_StrConcat( &TMP$1647$1, (void*)"add esp, ", 10ll, (void*)vr$282, -1ll );
	fb_StrAssign( (void*)&TMP$1648$1, -1ll, (void*)vr$285, -1ll, 0 );
	OUTP( (char*)*(char**)&TMP$1648$1 );
	fb_StrDelete( (FBSTRING*)&TMP$1648$1 );
	label$704:;
}

static void _EMITPUSHF_SSE( struct $6IRVREG* SVREG$1, int64 UNUSED$1 )
{
	int64 TMP$1650$1;
	label$718:;
	static FBSTRING SRC$1;
	static int64 SDSIZE$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$720;
	TMP$1650$1 = 24ll;
	goto label$812;
	label$720:;
	TMP$1650$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$812:;
	SDSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$1650$1 * 56ll)) + 8ll);
	if( *(int64*)SVREG$1 == 4ll ) goto label$722;
	{
		if( *(int64*)((uint8*)SVREG$1 + 8ll) != 15ll ) goto label$724;
		{
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"push ", 6ll, 0 );
			fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( (char*)*(char**)&OSTR$1 );
		}
		goto label$723;
		label$724:;
		{
			HPREPOPERAND( SVREG$1, &SRC$1, 8ll, 4ll, 0ll, -1ll );
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"push ", 6ll, 0 );
			fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( (char*)*(char**)&OSTR$1 );
			HPREPOPERAND( SVREG$1, &SRC$1, 8ll, 0ll, 0ll, -1ll );
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"push ", 6ll, 0 );
			fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( (char*)*(char**)&OSTR$1 );
		}
		label$723:;
	}
	goto label$721;
	label$722:;
	{
		FBSTRING TMP$1654$2;
		FBSTRING TMP$1655$2;
		FBSTRING TMP$1656$2;
		FBSTRING TMP$1657$2;
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"sub esp, ", 10ll, 0 );
		FBSTRING* vr$7 = fb_LongintToStr( SDSIZE$1 );
		fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)vr$7, -1ll, 0 );
		OUTP( (char*)*(char**)&OSTR$1 );
		if( *(int64*)((uint8*)SVREG$1 + 32ll) != 0ll ) goto label$726;
		{
			FBSTRING TMP$1652$3;
			FBSTRING TMP$1653$3;
			__builtin_memset( &TMP$1652$3, 0, 24ll );
			FBSTRING* vr$14 = fb_StrConcat( &TMP$1652$3, (void*)"fstp ", 6ll, (void*)(((int64)(struct $12EMITDATATYPE*)DTYPETB$ + (*(int64*)((uint8*)SVREG$1 + 8ll) * 24ll)) + 8ll), 12ll );
			__builtin_memset( &TMP$1653$3, 0, 24ll );
			FBSTRING* vr$17 = fb_StrConcat( &TMP$1653$3, (void*)vr$14, -1ll, (void*)" [esp]", 7ll );
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$17, -1ll, 0 );
			OUTP( (char*)*(char**)&OSTR$1 );
			goto label$719;
		}
		label$726:;
		label$725:;
		if( SDSIZE$1 <= 4ll ) goto label$728;
		{
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"movlpd ", 8ll, 0 );
		}
		goto label$727;
		label$728:;
		{
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"movss ", 7ll, 0 );
		}
		label$727:;
		__builtin_memset( &TMP$1657$2, 0, 24ll );
		__builtin_memset( &TMP$1654$2, 0, 24ll );
		FBSTRING* vr$21 = fb_StrConcat( &TMP$1654$2, (void*)&OSTR$1, -1ll, (void*)"[esp]", 6ll );
		__builtin_memset( &TMP$1655$2, 0, 24ll );
		FBSTRING* vr$24 = fb_StrConcat( &TMP$1655$2, (void*)vr$21, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1656$2, 0, 24ll );
		FBSTRING* vr$27 = fb_StrConcat( &TMP$1656$2, (void*)vr$24, -1ll, (void*)&SRC$1, -1ll );
		fb_StrAssign( (void*)&TMP$1657$2, -1ll, (void*)vr$27, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1657$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1657$2 );
	}
	label$721:;
	label$719:;
}

static void _EMITPOPF_SSE( struct $6IRVREG* DVREG$1, int64 UNUSED$1 )
{
	int64 TMP$1658$1;
	label$729:;
	static FBSTRING DST$1;
	static FBSTRING OSTR$1;
	static int64 DSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$731;
	TMP$1658$1 = 24ll;
	goto label$813;
	label$731:;
	TMP$1658$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$813:;
	DSIZE$1 = *(int64*)(((int64)(struct $13SYMB_DATATYPE*)SYMB_DTYPETB$ + (TMP$1658$1 * 56ll)) + 8ll);
	if( *(int64*)DVREG$1 == 4ll ) goto label$733;
	{
		if( *(int64*)((uint8*)DVREG$1 + 8ll) != 15ll ) goto label$735;
		{
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"pop ", 5ll, 0 );
			fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
			OUTP( (char*)*(char**)&OSTR$1 );
		}
		goto label$734;
		label$735:;
		{
			HPREPOPERAND( DVREG$1, &DST$1, 8ll, 0ll, 0ll, -1ll );
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"pop ", 5ll, 0 );
			fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
			OUTP( (char*)*(char**)&OSTR$1 );
			HPREPOPERAND( DVREG$1, &DST$1, 8ll, 4ll, 0ll, -1ll );
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"pop ", 5ll, 0 );
			fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
			OUTP( (char*)*(char**)&OSTR$1 );
		}
		label$734:;
	}
	goto label$732;
	label$733:;
	{
		FBSTRING TMP$1660$2;
		FBSTRING TMP$1661$2;
		FBSTRING TMP$1662$2;
		FBSTRING TMP$1663$2;
		FBSTRING TMP$1664$2;
		FBSTRING TMP$1665$2;
		FBSTRING TMP$1666$2;
		if( DSIZE$1 <= 4ll ) goto label$737;
		{
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"movlpd ", 8ll, 0 );
		}
		goto label$736;
		label$737:;
		{
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"movss ", 7ll, 0 );
		}
		label$736:;
		__builtin_memset( &TMP$1664$2, 0, 24ll );
		__builtin_memset( &TMP$1660$2, 0, 24ll );
		FBSTRING* vr$13 = fb_StrConcat( &TMP$1660$2, (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1661$2, 0, 24ll );
		FBSTRING* vr$16 = fb_StrConcat( &TMP$1661$2, (void*)vr$13, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1662$2, 0, 24ll );
		FBSTRING* vr$19 = fb_StrConcat( &TMP$1662$2, (void*)vr$16, -1ll, (void*)(((int64)(struct $12EMITDATATYPE*)DTYPETB$ + (*(int64*)((uint8*)DVREG$1 + 8ll) * 24ll)) + 8ll), 12ll );
		__builtin_memset( &TMP$1663$2, 0, 24ll );
		FBSTRING* vr$22 = fb_StrConcat( &TMP$1663$2, (void*)vr$19, -1ll, (void*)" [esp]", 7ll );
		fb_StrAssign( (void*)&TMP$1664$2, -1ll, (void*)vr$22, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1664$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1664$2 );
		__builtin_memset( &TMP$1666$2, 0, 24ll );
		FBSTRING* vr$26 = fb_LongintToStr( DSIZE$1 );
		__builtin_memset( &TMP$1665$2, 0, 24ll );
		FBSTRING* vr$29 = fb_StrConcat( &TMP$1665$2, (void*)"add esp, ", 10ll, (void*)vr$26, -1ll );
		fb_StrAssign( (void*)&TMP$1666$2, -1ll, (void*)vr$29, -1ll, 0 );
		OUTP( (char*)*(char**)&TMP$1666$2 );
		fb_StrDelete( (FBSTRING*)&TMP$1666$2 );
	}
	label$732:;
	label$730:;
}
