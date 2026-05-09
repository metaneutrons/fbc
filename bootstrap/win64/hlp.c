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
struct $16__FB_ARRAYDIMTB$ {
	int64 ELEMENTS;
	int64 LBOUND;
	int64 UBOUND;
};
#define __FB_STATIC_ASSERT( expr ) extern int __$fb_structsizecheck[(expr) ? 1 : -1]
__FB_STATIC_ASSERT( sizeof( struct $16__FB_ARRAYDIMTB$ ) == 24 );
struct $8FBARRAY1Iu7INTEGERE {
	int64* DATA;
	int64* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	int64 FLAGS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[1];
};
__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1Iu7INTEGERE ) == 72 );
typedef int64 $13FBFILE_FORMAT;
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
int32 fb_FileOpen( FBSTRING*, uint32, uint32, uint32, int32, int32 );
int32 fb_FileClose( int32 );
int32 fb_FileGetLarge( int32, int64, void*, uint64 );
int32 fb_FileSeekLarge( int32, int64 );
int32 fb_FileFree( void );
FBSTRING* fb_StrInit( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
int32 fb_StrCompare( void*, int64, void*, int64 );
FBSTRING* fb_StrConcatAssign( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAllocTempResult( FBSTRING* );
FBSTRING* fb_StrAllocTempDescZ( char* );
FBSTRING* fb_StrAllocTempDescZEx( char*, int64 );
FBSTRING* fb_LongintToStr( int64 );
FBSTRING* fb_StrMid( FBSTRING*, int64, int64 );
int64 fb_StrLen( void*, int64 );
int64 fb_StrInstr( int64, FBSTRING*, FBSTRING* );
FBSTRING* fb_RTrimEx( FBSTRING*, FBSTRING* );
FBSTRING* fb_HEXEx_l( uint64, int32 );
FBSTRING* fb_LEFT( FBSTRING*, int64 );
FBSTRING* fb_RIGHT( FBSTRING*, int64 );
FBSTRING* fb_StrLcase2( FBSTRING*, int32 );
FBSTRING* fb_CurDir( void );
static void fb_ctor__hlp( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ERRREPORT( int64, int64, char* );
FBSTRING* PATHSTRIPDIV( FBSTRING* );
FBSTRING* HCURDIR( void );
static int64 HFINDEXTBEGIN( FBSTRING* );
static int64 STRISQUOTED( FBSTRING* );
typedef int64 $13AST_NODECLASS;
typedef int64 $11AST_OPFLAGS;
typedef int64 $6AST_OP;
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
static struct $8FBARRAY1I10AST_OPINFOE tmp$81$;
typedef int64 $12FB_DATACLASS;
typedef int64 $11FB_DATATYPE;
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

char* HHEXUINT( uint64 VALUE$1 )
{
	char* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$10:;
	static char RES$1[9];
	static char* P$1;
	static int64 LGT$1;
	static int64 MAXLEN$1;
	static int64 HEXTB$1[16] = { 48ll, 49ll, 50ll, 51ll, 52ll, 53ll, 54ll, 55ll, 56ll, 57ll, 65ll, 66ll, 67ll, 68ll, 69ll, 70ll };
	static struct $8FBARRAY1Iu7INTEGERE tmp$93$1 = { (int64*)HEXTB$1, (int64*)HEXTB$1, 128ll, 8ll, 1ll, 49ll, { { 16ll, 0ll, 15ll } } };
	MAXLEN$1 = 4ll;
	if( VALUE$1 <= 65535ull ) goto label$13;
	{
		MAXLEN$1 = 8ll;
	}
	label$13:;
	label$12:;
	P$1 = (char*)((uint8*)RES$1 + 7ll);
	LGT$1 = 0ll;
	label$14:;
	{
		*P$1 = (uint8)*(int64*)((int64)(int64*)HEXTB$1 + ((int64)(VALUE$1 & 15ull) << (3ll & 63ll)));
		LGT$1 = LGT$1 + 1ll;
		if( LGT$1 != MAXLEN$1 ) goto label$18;
		{
			goto label$15;
		}
		label$18:;
		label$17:;
		P$1 = (char*)((uint8*)P$1 + -1ll);
		VALUE$1 = VALUE$1 >> (4ll & 63ll);
	}
	label$16:;
	goto label$14;
	label$15:;
	fb$result$1 = P$1;
	label$11:;
	return fb$result$1;
}

FBSTRING* HFLOATTOHEX( double VALUE$1, int64 DTYPE$1 )
{
	int64 TMP$108$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$19:;
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$21;
	TMP$108$1 = 24ll;
	goto label$24;
	label$21:;
	TMP$108$1 = DTYPE$1 & 31ll;
	label$24:;
	if( TMP$108$1 != 16ll ) goto label$23;
	{
		fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)"0x", 3ll, 0 );
		FBSTRING* vr$4 = fb_HEXEx_l( *(uint64*)&VALUE$1, 16 );
		fb_StrConcatAssign( (void*)&fb$result$1, -1ll, (void*)vr$4, -1ll, 0 );
	}
	goto label$22;
	label$23:;
	{
		float SINGLEVALUE$2;
		SINGLEVALUE$2 = (float)VALUE$1;
		fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)"0x", 3ll, 0 );
		FBSTRING* vr$9 = fb_HEXEx_l( (uint64)*(uint32*)&SINGLEVALUE$2, 8 );
		fb_StrConcatAssign( (void*)&fb$result$1, -1ll, (void*)vr$9, -1ll, 0 );
	}
	label$22:;
	label$20:;
	FBSTRING* vr$12 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$12;
}

FBSTRING* HFLOATTOHEX_C99( double VALUE$1 )
{
	char* TMP$115$1;
	FBSTRING TMP$116$1;
	FBSTRING TMP$117$1;
	FBSTRING TMP$118$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$25:;
	uint64 N$1;
	N$1 = *(uint64*)&VALUE$1;
	int64 SIGN$1;
	SIGN$1 = (int64)(N$1 >> (63ll & 63ll));
	int64 EXP2$1;
	EXP2$1 = (int64)((N$1 >> (52ll & 63ll)) & 2047ull);
	uint64 MANTISSA$1;
	MANTISSA$1 = N$1 & 4503599627370495ull;
	FBSTRING RET$1;
	__builtin_memset( &RET$1, 0, 24ll );
	if( SIGN$1 == 0ll ) goto label$28;
	{
		fb_StrAssign( (void*)&RET$1, -1ll, (void*)"-0x", 4ll, 0 );
	}
	goto label$27;
	label$28:;
	{
		fb_StrAssign( (void*)&RET$1, -1ll, (void*)"0x", 3ll, 0 );
	}
	label$27:;
	EXP2$1 = EXP2$1 + -1023ll;
	if( EXP2$1 <= -1023ll ) goto label$30;
	{
		fb_StrConcatAssign( (void*)&RET$1, -1ll, (void*)"1.", 3ll, 0 );
		FBSTRING* vr$10 = fb_HEXEx_l( MANTISSA$1, 13 );
		fb_StrConcatAssign( (void*)&RET$1, -1ll, (void*)vr$10, -1ll, 0 );
		FBSTRING* vr$13 = fb_RIGHT( (FBSTRING*)&RET$1, 1ll );
		int32 vr$14 = fb_StrCompare( (void*)vr$13, -1ll, (void*)"0", 2ll );
		if( (int64)vr$14 != 0ll ) goto label$32;
		{
			FBSTRING* vr$16 = fb_StrAllocTempDescZEx( (char*)"0", 1ll );
			FBSTRING* vr$18 = fb_RTrimEx( (FBSTRING*)&RET$1, (FBSTRING*)vr$16 );
			fb_StrAssign( (void*)&RET$1, -1ll, (void*)vr$18, -1ll, 0 );
			label$32:;
		}
	}
	goto label$29;
	label$30:;
	{
		if( MANTISSA$1 != 0ull ) goto label$34;
		{
			fb_StrConcatAssign( (void*)&RET$1, -1ll, (void*)"0", 2ll, 0 );
			EXP2$1 = 0ll;
		}
		goto label$33;
		label$34:;
		{
			EXP2$1 = EXP2$1 + 1ll;
			fb_StrConcatAssign( (void*)&RET$1, -1ll, (void*)"0.", 3ll, 0 );
			FBSTRING* vr$23 = fb_HEXEx_l( MANTISSA$1, 13 );
			fb_StrConcatAssign( (void*)&RET$1, -1ll, (void*)vr$23, -1ll, 0 );
			FBSTRING* vr$26 = fb_RIGHT( (FBSTRING*)&RET$1, 1ll );
			int32 vr$27 = fb_StrCompare( (void*)vr$26, -1ll, (void*)"0", 2ll );
			if( (int64)vr$27 != 0ll ) goto label$36;
			{
				FBSTRING* vr$29 = fb_StrAllocTempDescZEx( (char*)"0", 1ll );
				FBSTRING* vr$31 = fb_RTrimEx( (FBSTRING*)&RET$1, (FBSTRING*)vr$29 );
				fb_StrAssign( (void*)&RET$1, -1ll, (void*)vr$31, -1ll, 0 );
				label$36:;
			}
		}
		label$33:;
	}
	label$29:;
	FBSTRING* vr$34 = fb_LongintToStr( __builtin_llabs( EXP2$1 ) );
	if( EXP2$1 < 0ll ) goto label$37;
	TMP$115$1 = (char*)"+";
	goto label$38;
	label$37:;
	TMP$115$1 = (char*)"-";
	label$38:;
	__builtin_memset( &TMP$116$1, 0, 24ll );
	FBSTRING* vr$37 = fb_StrConcat( &TMP$116$1, (void*)TMP$115$1, 0ll, (void*)vr$34, -1ll );
	__builtin_memset( &TMP$117$1, 0, 24ll );
	FBSTRING* vr$40 = fb_StrConcat( &TMP$117$1, (void*)"p", 2ll, (void*)vr$37, -1ll );
	__builtin_memset( &TMP$118$1, 0, 24ll );
	FBSTRING* vr$44 = fb_StrConcat( &TMP$118$1, (void*)&RET$1, -1ll, (void*)vr$40, -1ll );
	fb_StrAssign( (void*)&RET$1, -1ll, (void*)vr$44, -1ll, 0 );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)&RET$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&RET$1 );
	goto label$26;
	fb_StrDelete( (FBSTRING*)&RET$1 );
	label$26:;
	FBSTRING* vr$51 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$51;
}

int64 HFBRELOP2IRRELOP( int64 TK$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$39:;
	static int64 OP$1;
	{
		uint64 TMP$119$2;
		TMP$119$2 = (uint64)TK$1;
		goto label$42;
		label$43:;
		{
			OP$1 = 45ll;
		}
		goto label$41;
		label$44:;
		{
			OP$1 = 46ll;
		}
		goto label$41;
		label$45:;
		{
			OP$1 = 47ll;
		}
		goto label$41;
		label$46:;
		{
			OP$1 = 48ll;
		}
		goto label$41;
		label$47:;
		{
			OP$1 = 50ll;
		}
		goto label$41;
		label$48:;
		{
			OP$1 = 49ll;
		}
		goto label$41;
		label$49:;
		{
			ERRREPORT( 285ll, 0ll, (char*)0ull );
			OP$1 = 45ll;
		}
		goto label$41;
		label$42:;
		static const void* tmp$120[6ll] = {
			&&label$43,
			&&label$44,
			&&label$45,
			&&label$46,
			&&label$47,
			&&label$48,
		};
		if( (TMP$119$2 - 299ull) > 5ull ) goto label$49;
		goto *tmp$120[TMP$119$2 - 299ull];
		label$41:;
	}
	fb$result$1 = OP$1;
	label$40:;
	return fb$result$1;
}

int64 HFILEEXISTS( char* FILENAME$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$50:;
	static int64 F$1;
	int32 vr$1 = fb_FileFree(  );
	F$1 = (int64)vr$1;
	FBSTRING* vr$4 = fb_StrAllocTempDescZ( (char*)FILENAME$1 );
	int32 vr$5 = fb_FileOpen( (FBSTRING*)vr$4, 2u, 0u, 0u, (int32)F$1, 0 );
	if( (int64)vr$5 != 0ll ) goto label$53;
	{
		fb$result$1 = -1ll;
		fb_FileClose( (int32)F$1 );
	}
	goto label$52;
	label$53:;
	{
		fb$result$1 = 0ll;
	}
	label$52:;
	label$51:;
	return fb$result$1;
}

void HUCASE( char* SRC$1, char* DST$1 )
{
	label$54:;
	static int64 C$1;
	static char* S$1;
	static char* D$1;
	S$1 = SRC$1;
	D$1 = DST$1;
	label$56:;
	{
		C$1 = (int64)(uint8)*S$1;
		if( C$1 < 97ll ) goto label$60;
		{
			if( C$1 > 122ll ) goto label$62;
			{
				C$1 = C$1 + -32ll;
			}
			label$62:;
			label$61:;
		}
		goto label$59;
		label$60:;
		if( C$1 != 0ll ) goto label$63;
		{
			goto label$57;
		}
		label$63:;
		label$59:;
		*D$1 = (uint8)C$1;
		S$1 = (char*)((uint8*)S$1 + 1ll);
		D$1 = (char*)((uint8*)D$1 + 1ll);
	}
	label$58:;
	goto label$56;
	label$57:;
	*D$1 = (uint8)0u;
	label$55:;
}

void HCLEARNAME( char* SRC$1 )
{
	label$64:;
	static char* P$1;
	P$1 = SRC$1;
	label$66:;
	{
		{
			uint64 TMP$121$3;
			TMP$121$3 = (uint64)(uint8)*P$1;
			goto label$70;
			label$71:;
			{
				goto label$67;
			}
			goto label$69;
			label$72:;
			{
			}
			goto label$69;
			label$73:;
			{
				*P$1 = (uint8)122u;
			}
			goto label$69;
			label$70:;
			static const void* tmp$122[123ll] = {
				&&label$71,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$73,
				&&label$72,
				&&label$73,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
				&&label$72,
			};
			if( TMP$121$3 > 122ull ) goto label$73;
			goto *tmp$122[TMP$121$3 - 0ull];
			label$69:;
		}
		P$1 = (char*)((uint8*)P$1 + 1ll);
	}
	label$68:;
	goto label$66;
	label$67:;
	label$65:;
}

FBSTRING* HSTRIPEXT( FBSTRING* PATH$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$86:;
	int64 vr$1 = HFINDEXTBEGIN( PATH$1 );
	FBSTRING* vr$2 = fb_LEFT( (FBSTRING*)PATH$1, vr$1 );
	fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$2, -1ll, 0 );
	label$87:;
	FBSTRING* vr$5 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$5;
}

FBSTRING* HSTRIPPATH( char* FILENAME$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$88:;
	static int64 LP$1;
	static int64 P_FOUND$1;
	static int64 P$1[2];
	static struct $8FBARRAY1Iu7INTEGERE tmp$126$1 = { (int64*)((uint8*)P$1 + -8ll), (int64*)P$1, 16ll, 8ll, 1ll, 49ll, { { 2ll, 1ll, 2ll } } };
	LP$1 = 0ll;
	label$90:;
	{
		FBSTRING* vr$1 = fb_StrAllocTempDescZEx( (char*)"\x5C", 1ll );
		FBSTRING* vr$2 = fb_StrAllocTempDescZ( (char*)FILENAME$1 );
		int64 vr$4 = fb_StrInstr( LP$1 + 1ll, (FBSTRING*)vr$2, (FBSTRING*)vr$1 );
		*(int64*)P$1 = vr$4;
		FBSTRING* vr$5 = fb_StrAllocTempDescZEx( (char*)"/", 1ll );
		FBSTRING* vr$6 = fb_StrAllocTempDescZ( (char*)FILENAME$1 );
		int64 vr$8 = fb_StrInstr( LP$1 + 1ll, (FBSTRING*)vr$6, (FBSTRING*)vr$5 );
		*(int64*)((int64)(int64*)P$1 + 8ll) = vr$8;
		if( ((int64)-(*(int64*)P$1 == 0ll) | ((int64)-(*(int64*)((int64)(int64*)P$1 + 8ll) > 0ll) & (int64)-(*(int64*)((int64)(int64*)P$1 + 8ll) < *(int64*)P$1))) == 0ll ) goto label$94;
		{
			P_FOUND$1 = *(int64*)((int64)(int64*)P$1 + 8ll);
		}
		goto label$93;
		label$94:;
		{
			P_FOUND$1 = *(int64*)P$1;
		}
		label$93:;
		if( P_FOUND$1 != 0ll ) goto label$96;
		{
			goto label$91;
		}
		label$96:;
		label$95:;
		LP$1 = P_FOUND$1;
	}
	label$92:;
	goto label$90;
	label$91:;
	if( LP$1 <= 0ll ) goto label$98;
	{
		FBSTRING* vr$15 = fb_StrAllocTempDescZ( (char*)FILENAME$1 );
		FBSTRING* vr$16 = fb_StrMid( (FBSTRING*)vr$15, LP$1 + 1ll, -1ll );
		fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$16, -1ll, 0 );
	}
	goto label$97;
	label$98:;
	{
		fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)FILENAME$1, 0ll, 0 );
	}
	label$97:;
	label$89:;
	FBSTRING* vr$20 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$20;
}

FBSTRING* HSTRIPFILENAME( char* FILENAME$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$99:;
	static int64 LP$1;
	static int64 P_FOUND$1;
	static int64 P$1[2];
	static struct $8FBARRAY1Iu7INTEGERE tmp$127$1 = { (int64*)((uint8*)P$1 + -8ll), (int64*)P$1, 16ll, 8ll, 1ll, 49ll, { { 2ll, 1ll, 2ll } } };
	LP$1 = 0ll;
	label$101:;
	{
		FBSTRING* vr$1 = fb_StrAllocTempDescZEx( (char*)"\x5C", 1ll );
		FBSTRING* vr$2 = fb_StrAllocTempDescZ( (char*)FILENAME$1 );
		int64 vr$4 = fb_StrInstr( LP$1 + 1ll, (FBSTRING*)vr$2, (FBSTRING*)vr$1 );
		*(int64*)P$1 = vr$4;
		FBSTRING* vr$5 = fb_StrAllocTempDescZEx( (char*)"/", 1ll );
		FBSTRING* vr$6 = fb_StrAllocTempDescZ( (char*)FILENAME$1 );
		int64 vr$8 = fb_StrInstr( LP$1 + 1ll, (FBSTRING*)vr$6, (FBSTRING*)vr$5 );
		*(int64*)((int64)(int64*)P$1 + 8ll) = vr$8;
		if( ((int64)-(*(int64*)P$1 == 0ll) | ((int64)-(*(int64*)((int64)(int64*)P$1 + 8ll) > 0ll) & (int64)-(*(int64*)((int64)(int64*)P$1 + 8ll) < *(int64*)P$1))) == 0ll ) goto label$105;
		{
			P_FOUND$1 = *(int64*)((int64)(int64*)P$1 + 8ll);
		}
		goto label$104;
		label$105:;
		{
			P_FOUND$1 = *(int64*)P$1;
		}
		label$104:;
		if( P_FOUND$1 != 0ll ) goto label$107;
		{
			goto label$102;
		}
		label$107:;
		label$106:;
		LP$1 = P_FOUND$1;
	}
	label$103:;
	goto label$101;
	label$102:;
	if( LP$1 <= 0ll ) goto label$109;
	{
		FBSTRING* vr$14 = fb_StrAllocTempDescZ( (char*)FILENAME$1 );
		FBSTRING* vr$15 = fb_LEFT( (FBSTRING*)vr$14, LP$1 );
		fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$15, -1ll, 0 );
	}
	goto label$108;
	label$109:;
	{
		fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)"", 1ll, 0 );
	}
	label$108:;
	label$100:;
	FBSTRING* vr$19 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$19;
}

FBSTRING* HGETFILEEXT( char* FNAME$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$110:;
	static int64 P$1;
	static int64 LP$1;
	static FBSTRING RES$1;
	LP$1 = 0ll;
	label$112:;
	{
		FBSTRING* vr$1 = fb_StrAllocTempDescZEx( (char*)".", 1ll );
		FBSTRING* vr$2 = fb_StrAllocTempDescZ( (char*)FNAME$1 );
		int64 vr$4 = fb_StrInstr( LP$1 + 1ll, (FBSTRING*)vr$2, (FBSTRING*)vr$1 );
		P$1 = vr$4;
		if( P$1 != 0ll ) goto label$116;
		{
			goto label$113;
		}
		label$116:;
		label$115:;
		LP$1 = P$1;
	}
	label$114:;
	goto label$112;
	label$113:;
	if( LP$1 != 0ll ) goto label$118;
	{
		fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)"", 1ll, 0 );
	}
	goto label$117;
	label$118:;
	{
		FBSTRING* vr$7 = fb_StrAllocTempDescZ( (char*)FNAME$1 );
		FBSTRING* vr$8 = fb_StrMid( (FBSTRING*)vr$7, LP$1 + 1ll, -1ll );
		FBSTRING* vr$9 = fb_StrLcase2( (FBSTRING*)vr$8, 0 );
		fb_StrAssign( (void*)&RES$1, -1ll, (void*)vr$9, -1ll, 0 );
		FBSTRING* vr$10 = fb_StrAllocTempDescZEx( (char*)"\x5C", 1ll );
		int64 vr$11 = fb_StrInstr( 1ll, (FBSTRING*)&RES$1, (FBSTRING*)vr$10 );
		FBSTRING* vr$13 = fb_StrAllocTempDescZEx( (char*)"/", 1ll );
		int64 vr$14 = fb_StrInstr( 1ll, (FBSTRING*)&RES$1, (FBSTRING*)vr$13 );
		if( ((int64)-(vr$11 > 0ll) | (int64)-(vr$14 > 0ll)) == 0ll ) goto label$120;
		{
			fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)"", 1ll, 0 );
		}
		goto label$119;
		label$120:;
		int64 vr$18 = fb_StrLen( (void*)&RES$1, -1ll );
		if( vr$18 <= 0ll ) goto label$121;
		{
			if( ((int64)-((uint64)(int64)*(uint8*)*(char**)&RES$1 == 92ull) | (int64)-((uint64)(int64)*(uint8*)*(char**)&RES$1 == 47ull)) == 0ll ) goto label$123;
			{
				fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)"", 1ll, 0 );
			}
			goto label$122;
			label$123:;
			{
				fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&RES$1, -1ll, 0 );
			}
			label$122:;
		}
		label$121:;
		label$119:;
	}
	label$117:;
	label$111:;
	FBSTRING* vr$29 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$29;
}

void HREPLACESLASH( char* S$1, int64 CHAR$1 )
{
	label$124:;
	{
		int64 I$2;
		I$2 = 0ll;
		int64 TMP$128$2;
		int64 vr$0 = fb_StrLen( (void*)S$1, 0ll );
		TMP$128$2 = vr$0 + -1ll;
		goto label$126;
		label$129:;
		{
			if( ((int64)-((int64)(uint8)*(char*)((uint8*)S$1 + I$2) == 92ll) | (int64)-((int64)(uint8)*(char*)((uint8*)S$1 + I$2) == 47ll)) == 0ll ) goto label$131;
			{
				*(char*)((uint8*)S$1 + I$2) = (uint8)CHAR$1;
			}
			label$131:;
			label$130:;
		}
		label$127:;
		I$2 = I$2 + 1ll;
		label$126:;
		if( I$2 <= TMP$128$2 ) goto label$129;
		label$128:;
	}
	label$125:;
}

FBSTRING* PATHSTRIPDIV( FBSTRING* PATH$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$132:;
	int64 LENGTH$1;
	int64 vr$1 = fb_StrLen( (void*)PATH$1, -1ll );
	LENGTH$1 = vr$1;
	if( LENGTH$1 <= 0ll ) goto label$135;
	{
		LENGTH$1 = LENGTH$1 + -1ll;
		{
			uint8 TMP$129$3;
			TMP$129$3 = *(uint8*)((uint8*)*(char**)PATH$1 + LENGTH$1);
			if( (uint64)(int64)TMP$129$3 == 47ull ) goto label$138;
			label$139:;
			if( (uint64)(int64)TMP$129$3 != 92ull ) goto label$137;
			label$138:;
			{
				FBSTRING* vr$7 = fb_LEFT( (FBSTRING*)PATH$1, LENGTH$1 );
				fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$7, -1ll, 0 );
				goto label$133;
			}
			label$137:;
			label$136:;
		}
	}
	label$135:;
	label$134:;
	fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)PATH$1, -1ll, 0 );
	label$133:;
	FBSTRING* vr$11 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$11;
}

int64 PATHISABSOLUTE( char* PATH$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$140:;
	if( (int64)*(uint8*)PATH$1 == 0ll ) goto label$143;
	{
		{
			uint8 TMP$130$3;
			TMP$130$3 = *(uint8*)((uint8*)PATH$1 + 1ll);
			if( (uint64)(int64)TMP$130$3 != 58ull ) goto label$145;
			label$146:;
			{
				fb$result$1 = -1ll;
			}
			goto label$144;
			label$145:;
			if( (uint64)(int64)TMP$130$3 != 92ull ) goto label$147;
			label$148:;
			{
				fb$result$1 = (int64)-((uint64)(int64)*(uint8*)PATH$1 == 92ull);
			}
			label$147:;
			label$144:;
		}
	}
	label$143:;
	label$142:;
	label$141:;
	return fb$result$1;
}

int64 HCHECKFILEFORMAT( int64 F$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$149:;
	int32 BOM$1;
	__builtin_memset( &BOM$1, 0, 4ll );
	$13FBFILE_FORMAT FMT$1;
	__builtin_memset( &FMT$1, 0, 8ll );
	FMT$1 = 0ll;
	int32 vr$5 = fb_FileGetLarge( (int32)F$1, 0ll, (void*)&BOM$1, 4ull );
	if( (int64)vr$5 != 0ll ) goto label$152;
	{
		if( (int64)BOM$1 != 4294836224ll ) goto label$154;
		{
			FMT$1 = 5ll;
		}
		goto label$153;
		label$154:;
		if( (int64)BOM$1 != 65279ll ) goto label$155;
		{
			FMT$1 = 4ll;
		}
		goto label$153;
		label$155:;
		{
			BOM$1 = (int32)((int64)BOM$1 & 16777215ll);
			if( (int64)BOM$1 != 12565487ll ) goto label$157;
			{
				FMT$1 = 1ll;
			}
			goto label$156;
			label$157:;
			{
				BOM$1 = (int32)((int64)BOM$1 & 65535ll);
				if( (int64)BOM$1 != 65279ll ) goto label$159;
				{
					FMT$1 = 2ll;
				}
				goto label$158;
				label$159:;
				if( (int64)BOM$1 != 65534ll ) goto label$160;
				{
					FMT$1 = 3ll;
				}
				label$160:;
				label$158:;
			}
			label$156:;
		}
		label$153:;
		{
			if( FMT$1 != 0ll ) goto label$162;
			label$163:;
			{
				fb_FileSeekLarge( (int32)F$1, 1ll );
			}
			goto label$161;
			label$162:;
			if( FMT$1 != 1ll ) goto label$164;
			label$165:;
			{
				fb_FileSeekLarge( (int32)F$1, 4ll );
			}
			goto label$161;
			label$164:;
			if( FMT$1 == 2ll ) goto label$167;
			label$168:;
			if( FMT$1 != 3ll ) goto label$166;
			label$167:;
			{
				fb_FileSeekLarge( (int32)F$1, 3ll );
			}
			label$166:;
			label$161:;
		}
	}
	label$152:;
	label$151:;
	fb$result$1 = FMT$1;
	label$150:;
	return fb$result$1;
}

FBSTRING* HCURDIR( void )
{
	FBSTRING TMP$132$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$169:;
	__builtin_memset( &TMP$132$1, 0, 24ll );
	FBSTRING* vr$2 = fb_CurDir(  );
	fb_StrAssign( (void*)&TMP$132$1, -1ll, (void*)vr$2, -1ll, 0 );
	FBSTRING* vr$5 = PATHSTRIPDIV( &TMP$132$1 );
	fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$5, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&TMP$132$1 );
	label$170:;
	FBSTRING* vr$9 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$9;
}

FBSTRING* PATHSTRIPCURDIR( FBSTRING* PATH$1 )
{
	FBSTRING TMP$133$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$171:;
	FBSTRING PWD$1;
	FBSTRING* vr$1 = HCURDIR(  );
	__builtin_memset( &TMP$133$1, 0, 24ll );
	FBSTRING* vr$4 = fb_StrConcat( &TMP$133$1, (void*)vr$1, -1ll, (void*)"\x5C", 2ll );
	fb_StrInit( (void*)&PWD$1, -1ll, (void*)vr$4, -1ll, 0 );
	int64 vr$8 = fb_StrLen( (void*)&PWD$1, -1ll );
	FBSTRING* vr$9 = fb_LEFT( (FBSTRING*)PATH$1, vr$8 );
	int32 vr$10 = fb_StrCompare( (void*)vr$9, -1ll, (void*)&PWD$1, -1ll );
	if( (int64)vr$10 != 0ll ) goto label$174;
	{
		int64 vr$12 = fb_StrLen( (void*)PATH$1, -1ll );
		int64 vr$14 = fb_StrLen( (void*)&PWD$1, -1ll );
		FBSTRING* vr$16 = fb_RIGHT( (FBSTRING*)PATH$1, vr$12 - vr$14 );
		fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$16, -1ll, 0 );
	}
	goto label$173;
	label$174:;
	{
		fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)PATH$1, -1ll, 0 );
	}
	label$173:;
	fb_StrDelete( (FBSTRING*)&PWD$1 );
	label$172:;
	FBSTRING* vr$21 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$21;
}

int64 HISVALIDSYMBOLNAME( char* SYM$1 )
{
	int64 TMP$136$1;
	int64 TMP$138$1;
	int64 TMP$139$1;
	int64 TMP$141$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$175:;
	if( SYM$1 != (char*)0ull ) goto label$178;
	{
		goto label$176;
		label$178:;
	}
	int64 SYMLEN$1;
	int64 vr$1 = fb_StrLen( (void*)SYM$1, 0ll );
	SYMLEN$1 = vr$1;
	if( SYMLEN$1 != 0ll ) goto label$180;
	{
		goto label$176;
		label$180:;
	}
	if( (uint64)(int64)(uint8)*SYM$1 < 97ull ) goto label$181;
	TMP$136$1 = (int64)-((uint64)(int64)(uint8)*SYM$1 <= 122ull);
	goto label$199;
	label$181:;
	TMP$136$1 = 0ll;
	label$199:;
	if( TMP$136$1 != 0ll ) goto label$183;
	if( (uint64)(int64)(uint8)*SYM$1 > 90ull ) goto label$182;
	TMP$138$1 = (int64)-((uint64)(int64)(uint8)*SYM$1 >= 65ull);
	goto label$201;
	label$182:;
	TMP$138$1 = 0ll;
	label$201:;
	TMP$139$1 = (int64)-(TMP$138$1 != 0ll);
	goto label$200;
	label$183:;
	TMP$139$1 = -1ll;
	label$200:;
	if( TMP$139$1 != 0ll ) goto label$184;
	TMP$141$1 = (int64)-((uint64)(int64)(uint8)*SYM$1 == 95ull);
	goto label$202;
	label$184:;
	TMP$141$1 = -1ll;
	label$202:;
	if( TMP$141$1 != 0ll ) goto label$186;
	{
		goto label$176;
		label$186:;
	}
	{
		int64 I$2;
		I$2 = 1ll;
		int64 TMP$142$2;
		TMP$142$2 = SYMLEN$1 + -1ll;
		goto label$187;
		label$190:;
		{
			int64 TMP$143$3;
			int64 TMP$144$3;
			int64 TMP$145$3;
			int64 TMP$146$3;
			int64 TMP$147$3;
			int64 TMP$148$3;
			if( (uint64)(int64)(uint8)*(char*)((uint8*)SYM$1 + I$2) < 97ull ) goto label$191;
			TMP$143$3 = (int64)-((uint64)(int64)(uint8)*(char*)((uint8*)SYM$1 + I$2) <= 122ull);
			goto label$203;
			label$191:;
			TMP$143$3 = 0ll;
			label$203:;
			if( TMP$143$3 != 0ll ) goto label$193;
			if( (uint64)(int64)(uint8)*(char*)((uint8*)SYM$1 + I$2) > 90ull ) goto label$192;
			TMP$144$3 = (int64)-((uint64)(int64)(uint8)*(char*)((uint8*)SYM$1 + I$2) >= 65ull);
			goto label$205;
			label$192:;
			TMP$144$3 = 0ll;
			label$205:;
			TMP$145$3 = (int64)-(TMP$144$3 != 0ll);
			goto label$204;
			label$193:;
			TMP$145$3 = -1ll;
			label$204:;
			if( TMP$145$3 != 0ll ) goto label$194;
			TMP$146$3 = (int64)-((uint64)(int64)(uint8)*(char*)((uint8*)SYM$1 + I$2) == 95ull);
			goto label$206;
			label$194:;
			TMP$146$3 = -1ll;
			label$206:;
			if( TMP$146$3 != 0ll ) goto label$196;
			if( (uint64)(int64)(uint8)*(char*)((uint8*)SYM$1 + I$2) > 57ull ) goto label$195;
			TMP$147$3 = (int64)-((uint64)(int64)(uint8)*(char*)((uint8*)SYM$1 + I$2) >= 48ull);
			goto label$208;
			label$195:;
			TMP$147$3 = 0ll;
			label$208:;
			TMP$148$3 = (int64)-(TMP$147$3 != 0ll);
			goto label$207;
			label$196:;
			TMP$148$3 = -1ll;
			label$207:;
			if( TMP$148$3 != 0ll ) goto label$198;
			{
				goto label$176;
				label$198:;
			}
		}
		label$188:;
		I$2 = I$2 + 1ll;
		label$187:;
		if( I$2 <= TMP$142$2 ) goto label$190;
		label$189:;
	}
	fb$result$1 = -1ll;
	label$176:;
	return fb$result$1;
}

FBSTRING* STRUNQUOTE( FBSTRING* S$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$213:;
	int64 vr$1 = STRISQUOTED( S$1 );
	if( vr$1 == 0ll ) goto label$216;
	{
		int64 vr$2 = fb_StrLen( (void*)S$1, -1ll );
		FBSTRING* vr$4 = fb_StrMid( (FBSTRING*)S$1, 2ll, vr$2 + -2ll );
		fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$4, -1ll, 0 );
		goto label$214;
	}
	label$216:;
	label$215:;
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)S$1, -1ll, 0 );
	goto label$214;
	label$214:;
	FBSTRING* vr$8 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$8;
}

static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM* THIS$1, struct $11TSTRSETITEM* __FB_RHS__$1 )
{
	label$4:;
	fb_StrAssign( (void*)THIS$1, -1ll, (void*)__FB_RHS__$1, -1ll, 0 );
	*(int64*)((uint8*)THIS$1 + 24ll) = *(int64*)((uint8*)__FB_RHS__$1 + 24ll);
	*(struct $8HASHITEM**)((uint8*)THIS$1 + 32ll) = *(struct $8HASHITEM**)((uint8*)__FB_RHS__$1 + 32ll);
	label$5:;
}

static int64 HFINDEXTBEGIN( FBSTRING* PATH$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$74:;
	{
		int64 I$2;
		int64 vr$1 = fb_StrLen( (void*)PATH$1, -1ll );
		I$2 = vr$1 + -1ll;
		goto label$76;
		label$79:;
		{
			{
				uint8 TMP$123$4;
				TMP$123$4 = *(uint8*)((uint8*)*(char**)PATH$1 + I$2);
				if( (uint64)(int64)TMP$123$4 != 46ull ) goto label$81;
				label$82:;
				{
					fb$result$1 = I$2;
					goto label$75;
				}
				goto label$80;
				label$81:;
				if( (uint64)(int64)TMP$123$4 == 92ull ) goto label$84;
				label$85:;
				if( (uint64)(int64)TMP$123$4 != 47ull ) goto label$83;
				label$84:;
				{
					goto label$78;
				}
				label$83:;
				label$80:;
			}
		}
		label$77:;
		I$2 = I$2 + -1ll;
		label$76:;
		if( I$2 >= 0ll ) goto label$79;
		label$78:;
	}
	int64 vr$9 = fb_StrLen( (void*)PATH$1, -1ll );
	fb$result$1 = vr$9;
	label$75:;
	return fb$result$1;
}

static int64 STRISQUOTED( FBSTRING* S$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$209:;
	int64 LAST$1;
	int64 vr$1 = fb_StrLen( (void*)S$1, -1ll );
	LAST$1 = vr$1 + -1ll;
	if( LAST$1 >= 1ll ) goto label$212;
	{
		fb$result$1 = 0ll;
		goto label$210;
	}
	label$212:;
	label$211:;
	fb$result$1 = ((int64)-((uint64)(int64)*(uint8*)*(char**)S$1 == 34ull) & (int64)-((uint64)(int64)*(uint8*)((uint8*)*(char**)S$1 + LAST$1) == 34ull)) | ((int64)-((uint64)(int64)*(uint8*)*(char**)S$1 == 39ull) & (int64)-((uint64)(int64)*(uint8*)((uint8*)*(char**)S$1 + LAST$1) == 39ull));
	goto label$210;
	label$210:;
	return fb$result$1;
}
