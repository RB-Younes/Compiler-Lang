
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "synt.y"

int nb_ligne=1;
char sauvType[20];
char sauvOpe[30];
int nb_colonne=1;
char idfor1[30];
char idfor2[30];
char idfor3[30];
int ex, ex1;
char ConstValeur[5000000];
char ConstValeur2[5000000];
char TypeDec[30];
char idfSV[30];
char idfSVReel[30];
char idfSV1[30];
char TypeC[30];
char SauvOP[30];
int DiVrai;
float F;
int CompaTypeSTR;


/* Line 189 of yacc.c  */
#line 96 "synt.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     mc_import = 258,
     pvg = 259,
     bib_io = 260,
     bib_lang = 261,
     err = 262,
     mc_public = 263,
     mc_private = 264,
     mc_protected = 265,
     mc_class = 266,
     idf = 267,
     aco_ov = 268,
     aco_fr = 269,
     mc_entier = 270,
     mc_reel = 271,
     mc_chaine = 272,
     vrg = 273,
     idf_tab = 274,
     cr_ov = 275,
     cr_fm = 276,
     cstInt = 277,
     mc_const = 278,
     afect = 279,
     cstFloat = 280,
     cstStr = 281,
     mc_main = 282,
     par_ov = 283,
     par_fr = 284,
     addition = 285,
     soustraction = 286,
     division = 287,
     multiplication = 288,
     mc_for = 289,
     increm = 290,
     decrem = 291,
     inf = 292,
     sup = 293,
     inf_egal = 294,
     sup_egal = 295,
     different = 296,
     mc_in = 297,
     mc_out = 298,
     commentaire = 299
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 23 "synt.y"

int  entier;
char* str;
float Rl;
double dbl;



/* Line 214 of yacc.c  */
#line 185 "synt.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 197 "synt.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   184

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNRULES -- Number of states.  */
#define YYNSTATES  163

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    13,    15,    17,    19,    27,    30,
      31,    33,    35,    37,    41,    45,    47,    51,    58,    63,
      65,    67,    69,    74,    80,    86,    92,    96,    98,   102,
     106,   110,   112,   114,   116,   119,   120,   124,   126,   128,
     131,   132,   134,   136,   138,   140,   145,   149,   151,   153,
     155,   160,   162,   164,   168,   170,   175,   180,   182,   184,
     186,   188,   200,   204,   208,   212,   216,   220,   224,   227,
     230,   232,   234,   236,   238,   240,   248,   252,   256,   258,
     260,   265,   273
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      46,     0,    -1,    60,    47,    13,    49,    14,    -1,    48,
      11,    12,    -1,     8,    -1,     9,    -1,    10,    -1,    50,
      27,    28,    29,    13,    63,    14,    -1,    51,    50,    -1,
      -1,    52,    -1,    54,    -1,    57,    -1,    56,    53,     4,
      -1,    12,    18,    53,    -1,    12,    -1,    56,    55,     4,
      -1,    19,    20,    22,    21,    18,    55,    -1,    19,    20,
      22,    21,    -1,    15,    -1,    16,    -1,    17,    -1,    23,
      56,    58,     4,    -1,    12,    24,    22,    18,    58,    -1,
      12,    24,    25,    18,    58,    -1,    12,    24,    26,    18,
      58,    -1,    12,    18,    58,    -1,    12,    -1,    12,    24,
      22,    -1,    12,    24,    25,    -1,    12,    24,    26,    -1,
      22,    -1,    25,    -1,    26,    -1,    61,    60,    -1,    -1,
       3,    62,     4,    -1,     5,    -1,     6,    -1,    64,    63,
      -1,    -1,    65,    -1,    73,    -1,    78,    -1,    81,    -1,
      67,    24,    66,     4,    -1,    69,    72,    66,    -1,    69,
      -1,    12,    -1,    68,    -1,    19,    20,    22,    21,    -1,
      12,    -1,    70,    -1,    28,    59,    29,    -1,    59,    -1,
      19,    20,    22,    21,    -1,    19,    20,    22,    21,    -1,
      30,    -1,    31,    -1,    32,    -1,    33,    -1,    34,    28,
      74,     4,    75,     4,    76,    29,    13,    63,    14,    -1,
      12,    24,    22,    -1,    12,    24,    71,    -1,    12,    24,
      12,    -1,    12,    77,    22,    -1,    12,    77,    71,    -1,
      12,    77,    12,    -1,    12,    35,    -1,    12,    36,    -1,
      37,    -1,    38,    -1,    39,    -1,    40,    -1,    41,    -1,
      42,    28,    26,    18,    79,    29,     4,    -1,    68,    18,
      79,    -1,    12,    18,    79,    -1,    80,    -1,    12,    -1,
      19,    20,    22,    21,    -1,    43,    28,    26,    18,    79,
      29,     4,    -1,    43,    28,    26,    29,     4,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    41,    41,    45,    48,    49,    50,    53,    56,    57,
      60,    61,    62,    65,    68,    74,    82,    85,    97,   112,
     113,   114,   117,   120,   134,   148,   161,   172,   181,   195,
     209,   223,   224,   225,   229,   230,   232,   234,   235,   238,
     239,   242,   243,   244,   245,   248,   251,   252,   255,   266,
     268,   280,   333,   334,   363,   395,   414,   427,   430,   433,
     438,   443,   446,   463,   485,   518,   533,   554,   584,   598,
     614,   615,   616,   617,   618,   621,   631,   632,   636,   637,
     642,   652,   658
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mc_import", "pvg", "bib_io", "bib_lang",
  "err", "mc_public", "mc_private", "mc_protected", "mc_class", "idf",
  "aco_ov", "aco_fr", "mc_entier", "mc_reel", "mc_chaine", "vrg",
  "idf_tab", "cr_ov", "cr_fm", "cstInt", "mc_const", "afect", "cstFloat",
  "cstStr", "mc_main", "par_ov", "par_fr", "addition", "soustraction",
  "division", "multiplication", "mc_for", "increm", "decrem", "inf", "sup",
  "inf_egal", "sup_egal", "different", "mc_in", "mc_out", "commentaire",
  "$accept", "S", "HEADER_CLASS", "MODIFICATEUR", "CORPS", "LISTE_DEC",
  "DEC", "DEC_VAR", "LISTE_IDF", "DEC_TAB", "LISTE_IDF_TAB", "TYPE",
  "DEC_CONST", "LISTE_CONST", "LISTE_CST", "LISTE_BIB", "BIB", "NOM_BIB",
  "LISTE_INSTRUCTION", "INSTRUCTIONS", "AFFECTATION", "COMPOSITION", "VAL",
  "TABSIMPLE", "VAL0", "TABSIMPLE1", "TABSIMPLE2", "LISTE_OPE",
  "BOUCLE_FOR", "INITIALISATION", "CONDITION", "INCREMENTATION",
  "OPE_COMP", "LECTURE", "SUITE_IDF", "TABSIMPLE3", "ECRITURE", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    48,    48,    48,    49,    50,    50,
      51,    51,    51,    52,    53,    53,    54,    55,    55,    56,
      56,    56,    57,    58,    58,    58,    58,    58,    58,    58,
      58,    59,    59,    59,    60,    60,    61,    62,    62,    63,
      63,    64,    64,    64,    64,    65,    66,    66,    67,    67,
      68,    69,    69,    69,    69,    70,    71,    72,    72,    72,
      72,    73,    74,    74,    74,    75,    75,    75,    76,    76,
      77,    77,    77,    77,    77,    78,    79,    79,    79,    79,
      80,    81,    81
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     3,     1,     1,     1,     7,     2,     0,
       1,     1,     1,     3,     3,     1,     3,     6,     4,     1,
       1,     1,     4,     5,     5,     5,     3,     1,     3,     3,
       3,     1,     1,     1,     2,     0,     3,     1,     1,     2,
       0,     1,     1,     1,     1,     4,     3,     1,     1,     1,
       4,     1,     1,     3,     1,     4,     4,     1,     1,     1,
       1,    11,     3,     3,     3,     3,     3,     3,     2,     2,
       1,     1,     1,     1,     1,     7,     3,     3,     1,     1,
       4,     7,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      35,     0,     0,     0,    35,    37,    38,     0,     1,     4,
       5,     6,     0,     0,    34,    36,     9,     0,    19,    20,
      21,     0,     0,     0,     9,    10,    11,     0,    12,     3,
       0,     2,     0,     8,    15,     0,     0,     0,    27,     0,
       0,     0,     0,    13,    16,     0,     0,    22,     0,    14,
       0,    26,    28,    29,    30,    40,    18,     0,     0,     0,
      48,     0,     0,     0,     0,     0,    40,    41,     0,    49,
      42,    43,    44,     0,    23,    24,    25,     0,     0,     0,
       0,     7,    39,     0,    17,     0,     0,     0,     0,     0,
      51,     0,    31,    32,    33,     0,    54,     0,    47,    52,
      50,     0,     0,     0,     0,     0,     0,     0,    45,    57,
      58,    59,    60,     0,    64,     0,    62,    63,     0,     0,
      79,     0,     0,     0,    78,     0,    82,     0,    53,    46,
       0,    70,    71,    72,    73,    74,     0,     0,     0,     0,
       0,     0,     0,    55,     0,    67,    65,    66,     0,     0,
      77,     0,    76,    75,    81,    56,    68,    69,     0,    50,
      40,     0,    61
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    12,    13,    22,    23,    24,    25,    36,    26,
      37,    27,    28,    39,    96,     3,     4,     7,    65,    66,
      67,    97,    68,   122,    98,    99,   117,   113,    70,    87,
     119,   149,   136,    71,   123,   124,    72
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -103
static const yytype_int8 yypact[] =
{
      27,    58,    35,    49,    27,  -103,  -103,    40,  -103,  -103,
    -103,  -103,    54,    57,  -103,  -103,    24,    59,  -103,  -103,
    -103,    45,    55,    43,    24,  -103,  -103,    -3,  -103,  -103,
      60,  -103,    46,  -103,    61,    53,    71,    72,    19,    73,
      51,    66,    62,  -103,  -103,    60,   -18,  -103,    68,  -103,
      64,  -103,    65,    69,    70,    -9,    74,    60,    60,    60,
    -103,    76,    63,    75,    78,    79,    -9,  -103,    77,  -103,
    -103,  -103,  -103,    67,  -103,  -103,  -103,    80,    82,    56,
      81,  -103,  -103,    -7,  -103,    83,    84,    85,    91,   -12,
    -103,    90,  -103,  -103,  -103,    20,  -103,    86,    23,  -103,
    -103,     1,    87,    12,    12,    93,    89,    88,  -103,  -103,
    -103,  -103,  -103,    -7,  -103,    92,  -103,  -103,    11,    94,
      95,    96,    97,    98,  -103,    99,  -103,   100,  -103,  -103,
     101,  -103,  -103,  -103,  -103,  -103,    10,   102,    12,   103,
      12,   114,   115,  -103,   105,  -103,  -103,  -103,    30,   104,
    -103,   108,  -103,  -103,  -103,  -103,  -103,  -103,   107,   106,
      -9,   110,  -103
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -103,  -103,  -103,  -103,  -103,   112,  -103,  -103,   109,  -103,
     111,   113,  -103,   -31,     5,   118,  -103,  -103,   -65,  -103,
    -103,    17,  -103,   -55,  -103,  -103,    -5,  -103,  -103,  -103,
    -103,  -103,  -103,  -103,  -102,  -103,  -103
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -81
static const yytype_int16 yytable[] =
{
      69,    82,   125,    60,    52,    90,   104,    53,    54,    34,
      61,    69,    91,   114,    51,    92,    35,   105,    93,    94,
     115,    95,   145,   116,   120,    62,    74,    75,    76,   115,
       1,   121,   146,    63,    64,     8,   150,    45,   152,    18,
      19,    20,    92,    46,    15,    93,    94,    21,   131,   132,
     133,   134,   135,   109,   110,   111,   112,     9,    10,    11,
      18,    19,    20,     5,     6,   156,   157,    16,    17,    31,
      32,    29,    38,    42,    40,    43,    44,    47,    34,    41,
      48,    55,    88,    57,    50,    56,    35,    58,    59,   102,
     108,    78,    73,    81,    86,   161,    77,   126,   137,   118,
     107,    83,    85,    79,   100,    69,    80,    89,   101,   103,
     106,   127,   130,   138,   148,   140,   139,   128,   153,   154,
     160,   143,    14,   144,   162,   151,   155,   141,   142,   159,
     129,   147,     0,   158,    30,   -80,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84
};

static const yytype_int16 yycheck[] =
{
      55,    66,   104,    12,    22,    12,    18,    25,    26,    12,
      19,    66,    19,    12,    45,    22,    19,    29,    25,    26,
      19,    28,    12,    22,    12,    34,    57,    58,    59,    19,
       3,    19,    22,    42,    43,     0,   138,    18,   140,    15,
      16,    17,    22,    24,     4,    25,    26,    23,    37,    38,
      39,    40,    41,    30,    31,    32,    33,     8,     9,    10,
      15,    16,    17,     5,     6,    35,    36,    13,    11,    14,
      27,    12,    12,    20,    28,     4,     4,     4,    12,    18,
      29,    13,    26,    18,    22,    21,    19,    18,    18,     4,
       4,    28,    18,    14,    12,   160,    20,     4,     4,    12,
      95,    24,    22,    28,    21,   160,    28,    26,    24,    18,
      20,    22,    20,    18,    12,    18,    20,    29,     4,     4,
      13,    21,     4,    22,    14,    22,    21,    29,    29,    21,
     113,   136,    -1,    29,    21,    29,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    46,    60,    61,     5,     6,    62,     0,     8,
       9,    10,    47,    48,    60,     4,    13,    11,    15,    16,
      17,    23,    49,    50,    51,    52,    54,    56,    57,    12,
      56,    14,    27,    50,    12,    19,    53,    55,    12,    58,
      28,    18,    20,     4,     4,    18,    24,     4,    29,    53,
      22,    58,    22,    25,    26,    13,    21,    18,    18,    18,
      12,    19,    34,    42,    43,    63,    64,    65,    67,    68,
      73,    78,    81,    18,    58,    58,    58,    20,    28,    28,
      28,    14,    63,    24,    55,    22,    12,    74,    26,    26,
      12,    19,    22,    25,    26,    28,    59,    66,    69,    70,
      21,    24,     4,    18,    18,    29,    20,    59,     4,    30,
      31,    32,    33,    72,    12,    19,    22,    71,    12,    75,
      12,    19,    68,    79,    80,    79,     4,    22,    29,    66,
      20,    37,    38,    39,    40,    41,    77,     4,    18,    20,
      18,    29,    29,    21,    22,    12,    22,    71,    12,    76,
      79,    22,    79,     4,     4,    21,    35,    36,    29,    21,
      13,    63,    14
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 41 "synt.y"
    {printf("\nProgramme syntaxiquement correcte.\n"); 
               YYACCEPT;        ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 68 "synt.y"
    { if(doubleDeclaration((yyvsp[(1) - (3)].str))==0)
                                    {insererTYPE((yyvsp[(1) - (3)].str),sauvType);
									insererTaille((yyvsp[(1) - (3)].str),1);}
							  else
									printf("erreur semantique: double declaration  de %s a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (3)].str),nb_ligne,nb_colonne);
							;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 74 "synt.y"
    { if(doubleDeclaration((yyvsp[(1) - (1)].str))==0)
                                    {insererTYPE((yyvsp[(1) - (1)].str),sauvType);
									insererTaille((yyvsp[(1) - (1)].str),1);}
							  else
									printf("erreur semantique: double declaration  de %s a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (1)].str),nb_ligne,nb_colonne);
							;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 85 "synt.y"
    { 
																if(doubleDeclaration((yyvsp[(1) - (6)].str))==0)
																		{insererTYPE((yyvsp[(1) - (6)].str),sauvType);
																		if((yyvsp[(3) - (6)].entier)<0)
																		printf("erreur semantique: taille inferieur a 0 du tableau: %s a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (6)].str),nb_ligne,nb_colonne);
																		else{
																		 insererTaille((yyvsp[(1) - (6)].str),(yyvsp[(3) - (6)].entier));}
																		 }
																else
																	printf("erreur semantique: double declaration  de %s a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (6)].str),nb_ligne,nb_colonne);
																
															;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 97 "synt.y"
    { 
														
																if(doubleDeclaration((yyvsp[(1) - (4)].str))==0)
																		{insererTYPE((yyvsp[(1) - (4)].str),sauvType);
																		if((yyvsp[(3) - (4)].entier)<0)
																		printf("erreur semantique: taille inferieur a 0 du tableau: %s a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (4)].str),nb_ligne,nb_colonne);
																		else{
																		insererTaille((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].entier));}
																		}
																else
																	printf("erreur semantique: double declaration  de %s a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (4)].str),nb_ligne,nb_colonne);
														
											;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 112 "synt.y"
    {strcpy(sauvType,(yyvsp[(1) - (1)].str));strcpy(TypeDec,"Entier");;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 113 "synt.y"
    {strcpy(sauvType,(yyvsp[(1) - (1)].str));strcpy(TypeDec,"Reel");;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 114 "synt.y"
    {strcpy(sauvType,(yyvsp[(1) - (1)].str));strcpy(TypeDec,"Chaine");;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 120 "synt.y"
    { if(ex1!=1) printf("\n ERREUR SEMANTIQUE : MANQUE DE LA BIB 'ISIL.lang' pour les expression arithmetique DANS la ligne %d et a la colonne %d\n",nb_ligne,nb_colonne);
													else{
																if(doubleDeclaration((yyvsp[(1) - (5)].str))==0)
																		{insererTYPE((yyvsp[(1) - (5)].str),sauvType);
																		if (strcmp(TypeDec,"Entier")!=0 && strcmp(TypeDec,"Reel")!=0) {printf("erreur semantique: Incompatibilte de type entre '%s' et '%d'a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (5)].str),(yyvsp[(3) - (5)].entier),nb_ligne,nb_colonne); }
																		else {
																		insererTaille((yyvsp[(1) - (5)].str),1);
																		sprintf(ConstValeur2,"%d",(yyvsp[(3) - (5)].entier));
																		insertConst((yyvsp[(1) - (5)].str),ConstValeur2);}
																		}
																else
																	printf("erreur semantique: double declaration  de %s a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (5)].str),nb_ligne,nb_colonne);
													}
													;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 134 "synt.y"
    { if(ex1!=1) printf("\n ERREUR SEMANTIQUE : MANQUE DE LA BIB 'ISIL.lang' pour les expression arithmetique DANS la ligne %d et a la colonne %d\n",nb_ligne,nb_colonne);
													else{
															if(doubleDeclaration((yyvsp[(1) - (5)].str))==0)
																		{insererTYPE((yyvsp[(1) - (5)].str),sauvType);
																		if (strcmp(TypeDec,"Reel")!=0 ) {printf("erreur semantique: Incompatibilte de type entre '%s' et '%f'a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (5)].str),(yyvsp[(3) - (5)].Rl),nb_ligne,nb_colonne);}
																		else {
																		insererTaille((yyvsp[(1) - (5)].str),1);
																		sprintf(ConstValeur2,"%f",(yyvsp[(3) - (5)].Rl));
																		insertConst((yyvsp[(1) - (5)].str),ConstValeur2);}
																		}
																else
																	printf("erreur semantique: double declaration  de %s a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (5)].str),nb_ligne,nb_colonne);
													}
													;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 148 "synt.y"
    { if(ex1!=1) printf("\n ERREUR SEMANTIQUE : MANQUE DE LA BIB 'ISIL.lang' pour les expression arithmetique DANS la ligne %d et a la colonne %d\n",nb_ligne,nb_colonne);
													else{
																if(doubleDeclaration((yyvsp[(1) - (5)].str))==0)
																		{insererTYPE((yyvsp[(1) - (5)].str),sauvType);
																		if (strcmp(TypeDec,"Chaine")!=0) {printf("erreur semantique: Incompatibilte de type entre '%s' et '%s'a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (5)].str),(yyvsp[(3) - (5)].str),nb_ligne,nb_colonne); }
																		else {
																		insererTaille((yyvsp[(1) - (5)].str),1);
																		insertConst((yyvsp[(1) - (5)].str),(yyvsp[(3) - (5)].str));}
																		}
																else
																	printf("erreur semantique: double declaration  de %s a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (5)].str),nb_ligne,nb_colonne);
												}
												;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 161 "synt.y"
    {	
																if(doubleDeclaration((yyvsp[(1) - (3)].str))==0)
																		{
																		insererTYPE((yyvsp[(1) - (3)].str),sauvType);
																		insererTaille((yyvsp[(1) - (3)].str),1);
																		insertConst((yyvsp[(1) - (3)].str),"-");
																		}
																else
																	printf("erreur semantique: double declaration  de %s a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (3)].str),nb_ligne,nb_colonne);
													
													;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 172 "synt.y"
    { if(doubleDeclaration((yyvsp[(1) - (1)].str))==0)
																		{
																		insererTYPE((yyvsp[(1) - (1)].str),sauvType);
																		insererTaille((yyvsp[(1) - (1)].str),1);
																		insertConst((yyvsp[(1) - (1)].str),"-");
																		}
																else
																	printf("erreur semantique: double declaration  de %s a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (1)].str),nb_ligne,nb_colonne);
													;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 181 "synt.y"
    {if(ex1!=1) printf("\n ERREUR SEMANTIQUE : MANQUE DE LA BIB 'ISIL.lang' pour les expression arithmetique DANS la ligne %d et a la colonne %d\n",nb_ligne,nb_colonne);
													else{
																if(doubleDeclaration((yyvsp[(1) - (3)].str))==0)
																		{insererTYPE((yyvsp[(1) - (3)].str),sauvType);
																		if (strcmp(TypeDec,"Entier")!=0 && strcmp(TypeDec,"Reel")!=0) {printf("erreur semantique: Incompatibilte de type entre '%s' et '%d'a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].entier),nb_ligne,nb_colonne);}
																		else {
																		insererTaille((yyvsp[(1) - (3)].str),1);
																		sprintf(ConstValeur2,"%d",(yyvsp[(3) - (3)].entier));
																		insertConst((yyvsp[(1) - (3)].str),ConstValeur2);}
																		}
																else
																	printf("erreur semantique: double declaration  de %s a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (3)].str),nb_ligne,nb_colonne);
													}
													;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 195 "synt.y"
    { if(ex1!=1) printf("\n ERREUR SEMANTIQUE : MANQUE DE LA BIB 'ISIL.lang' pour les expression arithmetique DANS la ligne %d et a la colonne %d\n",nb_ligne,nb_colonne);
													else{
												if(doubleDeclaration((yyvsp[(1) - (3)].str))==0)
																		{insererTYPE((yyvsp[(1) - (3)].str),sauvType);
																		if (strcmp(TypeDec,"Reel")!=0 ) {printf("erreur semantique: Incompatibilte de type entre '%s' et '%f'a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].Rl),nb_ligne,nb_colonne);}
																		else {
																		insererTaille((yyvsp[(1) - (3)].str),1);
																		sprintf(ConstValeur2,"%f",(yyvsp[(3) - (3)].Rl));
																		insertConst((yyvsp[(1) - (3)].str),ConstValeur2);}
																		}
																else
																	printf("erreur semantique: double declaration  de %s a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (3)].str),nb_ligne,nb_colonne);
													}
													;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 209 "synt.y"
    { if(ex1!=1) printf("\n ERREUR SEMANTIQUE : MANQUE DE LA BIB 'ISIL.lang' pour les expression arithmetique DANS la ligne %d et a la colonne %d\n",nb_ligne,nb_colonne);
													else{if(doubleDeclaration((yyvsp[(1) - (3)].str))==0)
																		{insererTYPE((yyvsp[(1) - (3)].str),sauvType);
																		if (strcmp(TypeDec,"Chaine")!=0) {printf("erreur semantique: Incompatibilte de type entre '%s' et '%s'a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str),nb_ligne,nb_colonne); }
																		else {
																		insererTaille((yyvsp[(1) - (3)].str),1);
																		insertConst((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));}
																		}
																else
																	printf("erreur semantique: double declaration  de %s a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (3)].str),nb_ligne,nb_colonne);
									}
									;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 223 "synt.y"
    {sprintf(ConstValeur,"%d",(yyvsp[(1) - (1)].entier));  strcpy(TypeC,"Entier"); F=(yyvsp[(1) - (1)].entier);;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 224 "synt.y"
    {sprintf(ConstValeur,"%f",(yyvsp[(1) - (1)].Rl));  strcpy(TypeC,"Reel"); F=(yyvsp[(1) - (1)].Rl);;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 225 "synt.y"
    {strcpy(ConstValeur,(yyvsp[(1) - (1)].str));  strcpy(TypeC,"Chaine");;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 234 "synt.y"
    {ex=1;;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 235 "synt.y"
    {ex1=1;;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 248 "synt.y"
    {DiVrai=0;CompaTypeSTR=0;if(ex1!=1) printf("\n ERREUR SEMANTIQUE : MANQUE DE LA BIB 'ISIL.lang' pour les expression arithmetique DANS la ligne %d et a la colonne %d\n",nb_ligne,nb_colonne);;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 255 "synt.y"
    { 
									strcpy(SauvOP,"RIEN"); 
									strcpy(idfSVReel ,(yyvsp[(1) - (1)].str));
								   strcpy( idfSV,(yyvsp[(1) - (1)].str));
								   if(doubleDeclaration((yyvsp[(1) - (1)].str))==0)
		                           printf("erreur semantique: %s non delcalrarer a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (1)].str),nb_ligne,nb_colonne);
								   if(ConstAVal((yyvsp[(1) - (1)].str))==-1)
								   {
								   printf("erreur semantique a la ligne %d et a la colonne %d, %s est une Const qui a deja une valeur.\n",nb_ligne,nb_colonne,(yyvsp[(1) - (1)].str));
								   }
								   ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 268 "synt.y"
    {
											 strcpy(idfSVReel ,(yyvsp[(1) - (4)].str));
											strcpy( idfSV,(yyvsp[(1) - (4)].str));
											if(doubleDeclaration((yyvsp[(1) - (4)].str))==0)
											printf("erreur semantique: %s non delcalrarer a la ligne %d et a la colonne %d\n",(yyvsp[(1) - (4)].str),nb_ligne,nb_colonne);
											if(Depassement((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].entier))==0)
											printf("erreur semantique: depasements de la taille du tableau: %s a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (4)].str),nb_ligne,nb_colonne);
											if((yyvsp[(3) - (4)].entier)<0)
											printf("erreur semantique: indice inferieur a 0 du tableau: %s a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (4)].str),nb_ligne,nb_colonne);
										;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 280 "synt.y"
    { 
									if(doubleDeclaration((yyvsp[(1) - (1)].str))==0)
		                          { printf("erreur semantique: %s non delcalrarer a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (1)].str),nb_ligne,nb_colonne); 
										if(ConstAVal(idfSV)==-1 && strcmp(SauvOP,"RIEN")!=0)
													{	
														insertConst(idfSV,"-");
													}
								  }
								   else {
								   
								   if(REComparerType2IDF(idfSV,(yyvsp[(1) - (1)].str))==0)
								   {
											if(ConstAVal((yyvsp[(1) - (1)].str))==1)
											printf("erreur semantique a la ligne %d et a la colonne %d, %s est une Const qui n'a pas de valeur.\n",nb_ligne,nb_colonne,(yyvsp[(1) - (1)].str));
											else{ 
												if(ConstAVal((yyvsp[(1) - (1)].str))==-1){
													if(ConstAValZero((yyvsp[(1) - (1)].str))==1 && DiVrai==1){ printf("erreur semantique: Division par '0' (La Constante %s est a 0) a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (1)].str),nb_ligne,nb_colonne);DiVrai=0;}
													
													if(ConstAVal(idfSV)==1)
													{
														TransfererValeur(idfSV,(yyvsp[(1) - (1)].str));
													}
												}
												if(ConstAVal(idfSV)==-1 && strcmp(SauvOP,"RIEN")!=0)
													{	
														insertConst(idfSV,"-");
													}
											}
								   }
								   else{
								    if(ComparerType2IDF((yyvsp[(1) - (1)].str),idfSV)!=0)
										{printf("erreur semantique: Incompatibilte de type entre '%s' et '%s'a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (1)].str),idfSV,nb_ligne,nb_colonne);CompaTypeSTR=1;}
								   else {
											if(ConstAVal((yyvsp[(1) - (1)].str))==1)
											printf("erreur semantique a la ligne %d et a la colonne %d, %s est une Const qui n'a pas de valeur.\n",nb_ligne,nb_colonne,(yyvsp[(1) - (1)].str));
											else{
												if(ConstAVal((yyvsp[(1) - (1)].str))==-1){
													if(ConstAValZero((yyvsp[(1) - (1)].str))==1 && DiVrai==1){printf("erreur semantique: Division par '0' (La Constante %s est a 0) a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (1)].str),nb_ligne,nb_colonne);DiVrai=0;}
													if(ConstAVal(idfSV)==1)
													{
														TransfererValeur(idfSV,(yyvsp[(1) - (1)].str));
													}
																								
												}
												if(ConstAVal(idfSV)==-1 && strcmp(SauvOP,"RIEN")!=0)
													{	
														insertConst(idfSV,"-");
													}
											}
										}
									  }
								   }
								   ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 334 "synt.y"
    { 
									if(REComparerType1IDF(idfSV,TypeC)!=0)
									{
									if(ComparerType1IDF(idfSV,TypeC)!=0)
									{printf("erreur semantique: Incompatibilte de type entre '%s' et '%s'a la ligne %d et a la colonne %d.\n",ConstValeur,idfSV,nb_ligne,nb_colonne);CompaTypeSTR=1;}
									else{
										if(DiVrai==1 && (strcmp(ConstValeur,"0")==0 || F==0)){printf("erreur semantique: Division par '0' a la ligne %d et a la colonne %d.\n",nb_ligne,nb_colonne);DiVrai=0;}
										if(ConstAVal(idfSV)==1)
											{
												insertConst(idfSV,ConstValeur);
											}
										if(ConstAVal(idfSV)==-1 && strcmp(SauvOP,"RIEN")!=0)
											{
												insertConst(idfSV,"-");
											}
									}
									}
									else{
									if(DiVrai==1 && (strcmp(ConstValeur,"0")==0 || F==0)){printf("erreur semantique: Division par '0' a la ligne %d et a la colonne %d.\n",nb_ligne,nb_colonne);DiVrai=0;}
									if(ConstAVal(idfSV)==1)
											{
												insertConst(idfSV,ConstValeur);
											}
										if(ConstAVal(idfSV)==-1 && strcmp(SauvOP,"RIEN")!=0)
											{
												insertConst(idfSV,"-");
											}
									}
								   ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 363 "synt.y"
    { 
									if(REComparerType1IDF(idfSV,TypeC)!=0)
									{
									if(ComparerType1IDF(idfSV,TypeC)!=0)
									{printf("erreur semantique: Incompatibilte de type entre '%s' et '%s'a la ligne %d et a la colonne %d.\n",ConstValeur,idfSV,nb_ligne,nb_colonne);CompaTypeSTR=1;}
									else{
										if(DiVrai==1 && (strcmp(ConstValeur,"0")==0 || F==0)){printf("erreur semantique: Division par '0' a la ligne %d et a la colonne %d.\n",nb_ligne,nb_colonne);DiVrai=0;}
										if(ConstAVal(idfSV)==1)
											{
												insertConst(idfSV,ConstValeur);
											}
										if(ConstAVal(idfSV)==-1 && strcmp(SauvOP,"RIEN")!=0)
											{
												insertConst(idfSV,"-");
											}
									}
									}
									else{
									if(DiVrai==1 && (strcmp(ConstValeur,"0")==0 || F==0)){printf("erreur semantique: Division par '0' a la ligne %d et a la colonne %d.\n",nb_ligne,nb_colonne);DiVrai=0;}
									if(ConstAVal(idfSV)==1)
											{
												insertConst(idfSV,ConstValeur);
											}
										if(ConstAVal(idfSV)==-1 && strcmp(SauvOP,"RIEN")!=0)
											{
												insertConst(idfSV,"-");
											}
									}
								   ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 395 "synt.y"
    { 
											if(doubleDeclaration((yyvsp[(1) - (4)].str))==0)
											printf("erreur semantique: %s non delcalrarer a la ligne %d et a la colonne %d\n",(yyvsp[(1) - (4)].str),nb_ligne,nb_colonne);
											 else{
											if(Depassement((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].entier))==0)
											printf("erreur semantique: depasements de la taille du tableau: %s a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (4)].str),nb_ligne,nb_colonne);
											
											if((yyvsp[(3) - (4)].entier)<0)
											printf("erreur semantique: indice inferieur a 0 du tableau: %s a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (4)].str),nb_ligne,nb_colonne);
											
											if(REComparerType2IDF(idfSV,(yyvsp[(1) - (4)].str))!=0)
											{
											 if(ComparerType2IDF((yyvsp[(1) - (4)].str),idfSV)!=0)
											{printf("erreur semantique: Incompatibilte de type entre '%s' et '%s'a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (4)].str),idfSV,nb_ligne,nb_colonne);CompaTypeSTR=1;}
											}
											}
										;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 414 "synt.y"
    { strcpy(idfSV1,(yyvsp[(1) - (4)].str));
											if(doubleDeclaration((yyvsp[(1) - (4)].str))==0)
											printf("erreur semantique: %s non delcalrarer a la ligne %d et a la colonne %d\n",(yyvsp[(1) - (4)].str),nb_ligne,nb_colonne);
											 else{
											if(Depassement((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].entier))==0)
											printf("erreur semantique: depasements de la taille du tableau: %s a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (4)].str),nb_ligne,nb_colonne);
											if((yyvsp[(3) - (4)].entier)<0)
											printf("erreur semantique: indice inferieur a 0 du tableau: %s a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (4)].str),nb_ligne,nb_colonne);
											}
										;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 427 "synt.y"
    { if(ex1!=1) printf("\n ERREUR SEMANTIQUE : MANQUE DE LA BIB 'ISIL.lang' pour les expression arithmetique DANS la ligne %d et a la colonne %d\n",nb_ligne,nb_colonne); strcpy(SauvOP,"+");
					if(ComparerType1IDF(idfSV,"Chaine")==0 && strcmp(SauvOP,"+")!=0 && CompaTypeSTR==0)   { printf("erreur semantique: Operation Aretmetique '%s' entre des Chaines de caracteres a la ligne %d et a la colonne %d.\n",SauvOP,nb_ligne,nb_colonne);CompaTypeSTR=0;}
										;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 430 "synt.y"
    {if(ex1!=1) printf("\n ERREUR SEMANTIQUE : MANQUE DE LA BIB 'ISIL.lang' (expression arithmetique) DANS la ligne %d et a la colonne %d\n",nb_ligne,nb_colonne);  strcpy(SauvOP,"-");
						if(ComparerType1IDF(idfSV,"Chaine")==0 && strcmp(SauvOP,"+")!=0 && CompaTypeSTR==0)   { printf("erreur semantique: Operation Aretmetique '%s' entre des Chaines de caracteres a la ligne %d et a la colonne %d.\n",SauvOP,nb_ligne,nb_colonne); CompaTypeSTR=0;}
						;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 433 "synt.y"
    {DiVrai=1;
						if(ex1!=1) printf("\n ERREUR SEMANTIQUE : MANQUE DE LA BIB 'ISIL.lang' (expression arithmetique) DANS la ligne %d et a la colonne %d\n",nb_ligne,nb_colonne);  strcpy(SauvOP,"/");
						if(ComparerType1IDF(idfSV,"Chaine")==0 && strcmp(SauvOP,"+")!=0 && CompaTypeSTR==0)   { printf("erreur semantique: Operation Aretmetique '%s' entre des Chaines de caracteres a la ligne %d et a la colonne %d.\n",SauvOP,nb_ligne,nb_colonne);CompaTypeSTR=0;}
						if(ComparerType1IDF(idfSVReel,"Entier")==0)   { printf("erreur semantique: Operation de division entre des Entiers vers un entier a la ligne %d et a la colonne %d.\n",nb_ligne,nb_colonne);}
						;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 438 "synt.y"
    {if(ex1!=1) printf("\n ERREUR SEMANTIQUE : MANQUE DE LA BIB 'ISIL.lang' (expression arithmetique) DANS la ligne %d et a la colonne %d\n",nb_ligne,nb_colonne);  strcpy(SauvOP,"*");
						if(ComparerType1IDF(idfSV,"Chaine")==0 && strcmp(SauvOP,"+")!=0 && CompaTypeSTR==0)   { printf("erreur semantique: Operation Aretmetique '%s' entre des Chaines de caracteres a la ligne %d et a la colonne %d.\n",SauvOP,nb_ligne,nb_colonne);CompaTypeSTR=0;}
						;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 446 "synt.y"
    {if(ex1!=1) printf("\n ERREUR SEMANTIQUE : MANQUE DE LA BIB 'ISIL.lang' pour les expression arithmetique DANS la ligne %d et a la colonne %d\n",nb_ligne,nb_colonne);
									else{
									if(doubleDeclaration((yyvsp[(1) - (3)].str))==0)
									printf("erreur semantique %s non delcalrarer a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (3)].str),nb_ligne,nb_colonne);
									else{
									 if(ComparerType1IDF((yyvsp[(1) - (3)].str),"Entier")!=0)
										printf("erreur semantique: '%s' doit etre un entier 'FOR' a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (3)].str),nb_ligne,nb_colonne);
										else{
												if(ConstAVal((yyvsp[(1) - (3)].str))==1)
														{
															printf("erreur semantique a la ligne %d et a la colonne %d, %s est une Const donc ne pas etre utiliser comme argument.\n",nb_ligne,nb_colonne,(yyvsp[(1) - (3)].str));
														}
										}
									}
											strcpy(idfor1,(yyvsp[(1) - (3)].str));											
									}		
									;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 463 "synt.y"
    { if(ex1!=1) printf("\n ERREUR SEMANTIQUE : MANQUE DE LA BIB 'ISIL.lang' pour les expression arithmetique DANS la ligne %d et a la colonne %d\n",nb_ligne,nb_colonne);
										else{
										if(doubleDeclaration((yyvsp[(1) - (3)].str))==0)
											printf("erreur semantique %s non delcalrarer a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (3)].str),nb_ligne,nb_colonne);
										else{
										if(ConstAVal((yyvsp[(1) - (3)].str))==1)
										{
											printf("erreur semantique a la ligne %d et a la colonne %d, %s est une Const donc ne pas etre utiliser comme argument.\n",nb_ligne,nb_colonne,(yyvsp[(1) - (3)].str));
										}
										else{
											if(ComparerType1IDF((yyvsp[(1) - (3)].str),"Entier")!=0)
											printf("erreur semantique: '%s' doit etre entier a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (3)].str),nb_ligne,nb_colonne);}
										if(doubleDeclaration(idfSV1)==0)
											printf("erreur semantique %s non delcalrarer a la ligne %d et a la colonne %d.\n",idfSV1,nb_ligne,nb_colonne);
										else{
											if(ComparerType2IDF((yyvsp[(1) - (3)].str),idfSV1)!=0)
											printf("erreur semantique: Incompatibilte de type entre '%s' et '%s'a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (3)].str),idfSV1,nb_ligne,nb_colonne);	
											}											
										
										}	strcpy(idfor1,(yyvsp[(1) - (3)].str));	
									 }
									;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 485 "synt.y"
    { if(ex1!=1) printf("\n ERREUR SEMANTIQUE : MANQUE DE LA BIB 'ISIL.lang' pour les expression arithmetique DANS la ligne %d et a la colonne %d\n",nb_ligne,nb_colonne);
									else{
									if(doubleDeclaration((yyvsp[(1) - (3)].str))==0)
										printf("erreur semantique %s non delcalrarer a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (3)].str),nb_ligne,nb_colonne);
									
											strcpy(idfor1,(yyvsp[(1) - (3)].str));
										
									  if(doubleDeclaration((yyvsp[(3) - (3)].str))==0)
											printf("erreur semantique %s non delcalrarer a la ligne %d et a la colonne %d.\n",(yyvsp[(3) - (3)].str),nb_ligne,nb_colonne);
										
										if(ConstAVal((yyvsp[(1) - (3)].str))==1)
										{
										printf("erreur semantique a la ligne %d et a la colonne %d, %s est une Const donc ne pas etre utiliser comme argument.\n",nb_ligne,nb_colonne,(yyvsp[(1) - (3)].str));
										}	
										else{
									  if(doubleDeclaration((yyvsp[(1) - (3)].str))==0 )
									  {
									  printf("erreur semantique %s non delcalrarer a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (3)].str),nb_ligne,nb_colonne);
									  }
									  else { if (doubleDeclaration((yyvsp[(3) - (3)].str))==0) printf("erreur semantique %s non delcalrarer a la ligne %d et a la colonne %d.\n",(yyvsp[(3) - (3)].str),nb_ligne,nb_colonne);
												else {if(ComparerType1IDF((yyvsp[(1) - (3)].str),"Entier")!=0)
														printf("erreur semantique: '%s' doit etre entier a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (3)].str),nb_ligne,nb_colonne);
															else {
																if(ComparerType2IDF((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str))!=0)
																printf("erreur semantique: Incompatibilte de type entre '%s' et '%s'a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str),nb_ligne,nb_colonne);}
																}
									  }
									  }
									}
 
								   ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 518 "synt.y"
    { if(doubleDeclaration((yyvsp[(1) - (3)].str))==0)
									printf("erreur semantique %s non delcalrarer a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (3)].str),nb_ligne,nb_colonne);
									else{
									 if(ComparerType1IDF((yyvsp[(1) - (3)].str),"Entier")!=0)
										printf("erreur semantique: '%s' doit etre un entier 'FOR' a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (3)].str),nb_ligne,nb_colonne);
										else{  
												if(ConstAVal((yyvsp[(1) - (3)].str))!=0)
														{
															printf("erreur semantique a la ligne %d et a la colonne %d, %s est une Const donc ne pas etre utiliser comme argument.\n",nb_ligne,nb_colonne,(yyvsp[(1) - (3)].str));
														}
										}
									}	
											strcpy(idfor2,(yyvsp[(1) - (3)].str));
											
								    ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 533 "synt.y"
    { if(doubleDeclaration((yyvsp[(1) - (3)].str))==0)
											printf("erreur semantique %s non delcalrarer a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (3)].str),nb_ligne,nb_colonne);
										else{
										if(ConstAVal((yyvsp[(1) - (3)].str))!=0)
										{
											printf("erreur semantique a la ligne %d et a la colonne %d, %s est une Const donc ne pas etre utiliser comme argument.\n",nb_ligne,nb_colonne,(yyvsp[(1) - (3)].str));
										}
										else{
											if(ComparerType1IDF((yyvsp[(1) - (3)].str),"Entier")!=0)
											printf("erreur semantique: '%s' doit etre entier a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (3)].str),nb_ligne,nb_colonne);}
										if(doubleDeclaration(idfSV1)==0)
											printf("erreur semantique %s non delcalrarer a la ligne %d et a la colonne %d.\n",idfSV1,nb_ligne,nb_colonne);
										else{
											if(ComparerType2IDF((yyvsp[(1) - (3)].str),idfSV1)!=0)
											printf("erreur semantique: Incompatibilte de type entre '%s' et '%s'a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (3)].str),idfSV1,nb_ligne,nb_colonne);	
											}											
										
										}
											strcpy(idfor2,(yyvsp[(1) - (3)].str));
											
								   ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 554 "synt.y"
    { if(doubleDeclaration((yyvsp[(1) - (3)].str))==0)
										printf("erreur semantique %s non delcalrarer a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (3)].str),nb_ligne,nb_colonne);
									
											strcpy(idfor1,(yyvsp[(1) - (3)].str));
										
									  if(doubleDeclaration((yyvsp[(3) - (3)].str))==0)
											printf("erreur semantique %s non delcalrarer a la ligne %d et a la colonne %d.\n",(yyvsp[(3) - (3)].str),nb_ligne,nb_colonne);
										
										if(ConstAVal((yyvsp[(1) - (3)].str))!=0)
										{
										printf("erreur semantique a la ligne %d et a la colonne %d, %s est une Const donc ne pas etre utiliser comme argument.\n",nb_ligne,nb_colonne,(yyvsp[(1) - (3)].str));
										}	
										else{
									  if(doubleDeclaration((yyvsp[(1) - (3)].str))==0 )
									  {
									  printf("erreur semantique %s non delcalrarer a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (3)].str),nb_ligne,nb_colonne);
									  }
									  else { if (doubleDeclaration((yyvsp[(3) - (3)].str))==0) printf("erreur semantique %s non delcalrarer a la ligne %d et a la colonne %d.\n",(yyvsp[(3) - (3)].str),nb_ligne,nb_colonne);
												else {if(ComparerType1IDF((yyvsp[(1) - (3)].str),"Entier")!=0)
														printf("erreur semantique: '%s' doit etre entier a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (3)].str),nb_ligne,nb_colonne);
															else {
																if(ComparerType2IDF((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str))!=0)
																printf("erreur semantique: Incompatibilte de type entre '%s' et '%s'a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str),nb_ligne,nb_colonne);}
																}
									  }
									  }
 
								   ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 584 "synt.y"
    { if(doubleDeclaration((yyvsp[(1) - (2)].str))==0)
									printf("erreur semantique %s non delcalrarer a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (2)].str),nb_ligne,nb_colonne);
							
								strcpy(idfor3,(yyvsp[(1) - (2)].str));
								if(ConstAVal((yyvsp[(1) - (2)].str))!=0)
										{
										printf("erreur semantique a la ligne %d et a la colonne %d, %s est une Const donc ne pas etre utiliser comme argument.\n",nb_ligne,nb_colonne,(yyvsp[(1) - (2)].str));
										}
								
								if(VerificationFor(idfor1,idfor2,idfor3)!=0)
									printf("erreur semantique Boucle For parties:(INITIALISATION:%s,CONDITION:%s,INCREMENTATION:%s)=>Differents,a la ligne %d et a la colonne %d.\n",idfor1,idfor2,idfor3,nb_ligne,nb_colonne);
									
							 
							;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 598 "synt.y"
    { if(doubleDeclaration((yyvsp[(1) - (2)].str))==0)
									printf("erreur semantique %s non delcalrarer a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (2)].str),nb_ligne,nb_colonne);
							 
								strcpy(idfor3,(yyvsp[(1) - (2)].str));
								
								if(ConstAVal((yyvsp[(1) - (2)].str))!=0)
										{
										printf("erreur semantique a la ligne %d et a la colonne %d, %s est une Const donc ne pas etre utiliser comme argument.\n",nb_ligne,nb_colonne,(yyvsp[(1) - (2)].str));
										}
								
								if(VerificationFor(idfor1,idfor2,idfor3)!=0)
									printf("erreur semantique Boucle For parties:(INITIALISATION:%s,CONDITION:%s,INCREMENTATION:%s)=>Differents,a la ligne %d et a la colonne %d.\n",idfor1,idfor2,idfor3,nb_ligne,nb_colonne);
							
							;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 621 "synt.y"
    {
															ListeFormat ((yyvsp[(3) - (7)].str));
															if (VerificationFormatIDF()==1){printf("le nombre d'idf et de signes formatage non egale 'In',a la ligne %d et a la colonne %d.\n",nb_ligne,nb_colonne);}	
															else {if (VerificationFormatIDF()==2){printf("les idf et les signes de formatages ne se correspondent pas 'In', a la ligne %d et a la colonne %d.\n",nb_ligne,nb_colonne);}}
															Reinitialiser();
															if(ex!=1) printf("ERREUR SEMANTIQUE :MANQUE DE LA BIB 'ISIL.io' (Entree et Sortie) DANS la ligne %d et a la colonne %d.\n",nb_ligne,nb_colonne);;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 632 "synt.y"
    {ListeIDF((yyvsp[(1) - (3)].str)); 								
									if(doubleDeclaration((yyvsp[(1) - (3)].str))==0)
										printf("erreur semantique %s non delcalrarer a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (3)].str),nb_ligne,nb_colonne);
								    ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 637 "synt.y"
    {ListeIDF((yyvsp[(1) - (1)].str)); 
									if(doubleDeclaration((yyvsp[(1) - (1)].str))==0)
										printf("erreur semantique %s non delcalrarer a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (1)].str),nb_ligne,nb_colonne);
								   ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 642 "synt.y"
    { ListeIDF((yyvsp[(1) - (4)].str));
											if(doubleDeclaration((yyvsp[(1) - (4)].str))==0)
											printf("erreur semantique: %s non delcalrarer a la ligne %d et a la colonne %d\n",(yyvsp[(1) - (4)].str),nb_ligne,nb_colonne);
											if(Depassement((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].entier))==0)
											printf("erreur semantique: depasements de la taille du tableau: %s a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (4)].str),nb_ligne,nb_colonne);
											if((yyvsp[(3) - (4)].entier)<0)
											printf("erreur semantique: indice inferieur a 0 du tableau: %s a la ligne %d et a la colonne %d.\n",(yyvsp[(1) - (4)].str),nb_ligne,nb_colonne);
										;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 652 "synt.y"
    {
															ListeFormat ((yyvsp[(3) - (7)].str));
															if (VerificationFormatIDF()==1){printf("le nombre d'idf et de signes formatage non egale 'Out',a la ligne %d et a la colonne %d.\n",nb_ligne,nb_colonne);}	
															else {if (VerificationFormatIDF()==2){printf("les idf et les signes de formatages ne se correspondent pas 'Out', a la ligne %d et a la colonne %d.\n",nb_ligne,nb_colonne);}}
															Reinitialiser();
															if(ex!=1) printf("ERREUR SEMANTIQUE :MANQUE DE LA BIB 'ISIL.io' (Entree et Sortie) DANS la ligne %d et a la colonne %d\n",nb_ligne,nb_colonne);;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 658 "synt.y"
    {if(ex!=1) printf("ERREUR SEMANTIQUE :MANQUE DE LA BIB 'ISIL.io' (Entree et Sortie) DANS la ligne %d et a la colonne %d\n",nb_ligne,nb_colonne);;}
    break;



/* Line 1455 of yacc.c  */
#line 2338 "synt.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 662 "synt.y"

main()
{yyparse();
afficher();
}
yywrap() {}

yyerror(char*msg)
{

printf("\nErreur syntaxique a la ligne %d\n",nb_ligne);
}

