/* A Bison parser, made by GNU Bison 2.6.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */

/* Line 336 of yacc.c  */
#line 1 "parser.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
extern char yytext[];
extern int yylineno;
extern int column;

const char *constNames[] = { "t0", "t1", "t2", "t3", "t4", "t5", "t6", "t7" };   
char *Names[] = { "t0", "t1", "t2", "t3", "t4", "t5", "t6", "t7" };   
char **Namep  = Names;   
char *newname() ;
void freename();

void count();
int counter=0;
void calOp (char *result, char *op1, char *op2, char *operator);


/* Line 336 of yacc.c  */
#line 89 "parser.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
#ifndef YY_PARSER_TAB_H
# define YY_PARSER_TAB_H
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     CONSTANT = 259,
     STRING_LITERAL = 260,
     SIZEOF = 261,
     PTR_OP = 262,
     INC_OP = 263,
     DEC_OP = 264,
     LEFT_OP = 265,
     RIGHT_OP = 266,
     LE_OP = 267,
     GE_OP = 268,
     EQ_OP = 269,
     NE_OP = 270,
     AND_OP = 271,
     OR_OP = 272,
     MUL_ASSIGN = 273,
     DIV_ASSIGN = 274,
     MOD_ASSIGN = 275,
     ADD_ASSIGN = 276,
     SUB_ASSIGN = 277,
     LEFT_ASSIGN = 278,
     RIGHT_ASSIGN = 279,
     AND_ASSIGN = 280,
     XOR_ASSIGN = 281,
     OR_ASSIGN = 282,
     TYPE_NAME = 283,
     TYPEDEF = 284,
     EXTERN = 285,
     STATIC = 286,
     AUTO = 287,
     REGISTER = 288,
     CHAR = 289,
     SHORT = 290,
     INT = 291,
     LONG = 292,
     SIGNED = 293,
     UNSIGNED = 294,
     FLOAT = 295,
     DOUBLE = 296,
     CONST = 297,
     VOLATILE = 298,
     VOID = 299,
     STRUCT = 300,
     UNION = 301,
     ENUM = 302,
     ELLIPSIS = 303,
     CASE = 304,
     DEFAULT = 305,
     IF = 306,
     ELSE = 307,
     SWITCH = 308,
     WHILE = 309,
     DO = 310,
     FOR = 311,
     GOTO = 312,
     CONTINUE = 313,
     BREAK = 314,
     RETURN = 315
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 350 of yacc.c  */
#line 20 "parser.y"
char id[100];


/* Line 350 of yacc.c  */
#line 197 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_PARSER_TAB_H  */

/* Copy the second part of user declarations.  */


/* Line 353 of yacc.c  */
#line 226 "parser.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  58
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1251

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  221
/* YYNRULES -- Number of states.  */
#define YYNSTATES  359

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    36,     2,    40,    29,    83,    30,     2,
      31,    32,    41,    33,    42,    34,    43,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    44,    50,
      47,    49,    48,    86,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    37,     2,    38,    84,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,    85,    46,    39,     2,     2,     2,
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
      25,    26,    27,    28,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    13,    15,    20,    24,
      29,    33,    37,    40,    43,    45,    49,    51,    54,    57,
      60,    63,    68,    70,    72,    74,    76,    78,    80,    82,
      87,    89,    93,    97,   101,   103,   107,   111,   113,   117,
     121,   123,   127,   131,   135,   139,   141,   145,   149,   151,
     155,   157,   161,   163,   167,   169,   173,   175,   179,   181,
     187,   189,   193,   195,   197,   199,   201,   203,   205,   207,
     209,   211,   213,   215,   217,   221,   223,   226,   230,   232,
     235,   237,   240,   242,   245,   247,   251,   253,   257,   259,
     261,   263,   265,   267,   269,   271,   273,   275,   277,   279,
     281,   283,   285,   287,   289,   291,   297,   302,   305,   307,
     309,   311,   314,   318,   321,   323,   326,   328,   330,   334,
     336,   339,   343,   348,   354,   357,   359,   363,   365,   369,
     371,   373,   376,   378,   380,   384,   389,   393,   398,   403,
     407,   409,   412,   415,   419,   421,   424,   426,   430,   432,
     436,   439,   442,   444,   446,   450,   452,   455,   457,   459,
     462,   466,   469,   473,   477,   482,   485,   489,   493,   498,
     500,   504,   509,   511,   515,   517,   519,   521,   523,   525,
     527,   531,   536,   540,   543,   547,   551,   556,   558,   561,
     563,   566,   568,   571,   572,   573,   574,   585,   591,   592,
     599,   600,   609,   610,   611,   621,   625,   628,   631,   634,
     638,   640,   643,   645,   647,   648,   654,   655,   660,   661,
     666,   667
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     155,     0,    -1,     3,    -1,     4,    -1,     5,    -1,    31,
     107,    32,    -1,    88,    -1,    89,    37,   107,    38,    -1,
      89,    31,    32,    -1,    89,    31,    90,    32,    -1,    89,
      43,     3,    -1,    89,     7,     3,    -1,    89,     8,    -1,
      89,     9,    -1,   105,    -1,   105,    42,    90,    -1,    89,
      -1,     8,    91,    -1,     9,    91,    -1,    92,    93,    -1,
       6,    91,    -1,     6,    31,   134,    32,    -1,    30,    -1,
      41,    -1,    33,    -1,    34,    -1,    39,    -1,    36,    -1,
      91,    -1,    31,   134,    32,    93,    -1,    93,    -1,    94,
      41,    93,    -1,    94,    35,    93,    -1,    94,    83,    93,
      -1,    94,    -1,    95,    33,    94,    -1,    95,    34,    94,
      -1,    95,    -1,    96,    10,    95,    -1,    96,    11,    95,
      -1,    96,    -1,    97,    47,    96,    -1,    97,    48,    96,
      -1,    97,    12,    96,    -1,    97,    13,    96,    -1,    97,
      -1,    98,    14,    97,    -1,    98,    15,    97,    -1,    98,
      -1,    99,    30,    98,    -1,    99,    -1,   100,    84,    99,
      -1,   100,    -1,   101,    85,   100,    -1,   101,    -1,   102,
      16,   101,    -1,   102,    -1,   103,    17,   102,    -1,   103,
      -1,   103,    86,   107,    44,   104,    -1,   104,    -1,    91,
     106,   105,    -1,    49,    -1,    18,    -1,    19,    -1,    20,
      -1,    21,    -1,    22,    -1,    23,    -1,    24,    -1,    25,
      -1,    26,    -1,    27,    -1,   105,    -1,   107,    42,   105,
      -1,   104,    -1,   110,    50,    -1,   110,   111,    50,    -1,
     113,    -1,   113,   110,    -1,   114,    -1,   114,   110,    -1,
     125,    -1,   125,   110,    -1,   112,    -1,   111,    42,   112,
      -1,   126,    -1,   126,    49,   137,    -1,    51,    -1,    52,
      -1,    53,    -1,    54,    -1,    55,    -1,    66,    -1,    56,
      -1,    57,    -1,    58,    -1,    59,    -1,    62,    -1,    63,
      -1,    60,    -1,    61,    -1,   115,    -1,   122,    -1,    28,
      -1,   116,     3,    45,   117,    46,    -1,   116,    45,   117,
      46,    -1,   116,     3,    -1,    67,    -1,    68,    -1,   118,
      -1,   117,   118,    -1,   119,   120,    50,    -1,   114,   119,
      -1,   114,    -1,   125,   119,    -1,   125,    -1,   121,    -1,
     120,    42,   121,    -1,   126,    -1,    44,   108,    -1,   126,
      44,   108,    -1,    69,    45,   123,    46,    -1,    69,     3,
      45,   123,    46,    -1,    69,     3,    -1,   124,    -1,   123,
      42,   124,    -1,     3,    -1,     3,    49,   108,    -1,    64,
      -1,    65,    -1,   128,   127,    -1,   127,    -1,     3,    -1,
      31,   126,    32,    -1,   127,    37,   108,    38,    -1,   127,
      37,    38,    -1,   127,    31,   130,    32,    -1,   127,    31,
     133,    32,    -1,   127,    31,    32,    -1,    41,    -1,    41,
     129,    -1,    41,   128,    -1,    41,   129,   128,    -1,   125,
      -1,   129,   125,    -1,   131,    -1,   131,    42,    70,    -1,
     132,    -1,   131,    42,   132,    -1,   110,   126,    -1,   110,
     135,    -1,   110,    -1,     3,    -1,   133,    42,     3,    -1,
     119,    -1,   119,   135,    -1,   128,    -1,   136,    -1,   128,
     136,    -1,    31,   135,    32,    -1,    37,    38,    -1,    37,
     108,    38,    -1,   136,    37,    38,    -1,   136,    37,   108,
      38,    -1,    31,    32,    -1,    31,   130,    32,    -1,   136,
      31,    32,    -1,   136,    31,   130,    32,    -1,   105,    -1,
      45,   138,    46,    -1,    45,   138,    42,    46,    -1,   137,
      -1,   138,    42,   137,    -1,   140,    -1,   141,    -1,   144,
      -1,   145,    -1,   149,    -1,   154,    -1,     3,    44,   139,
      -1,    71,   108,    44,   139,    -1,    72,    44,   139,    -1,
      45,    46,    -1,    45,   143,    46,    -1,    45,   142,    46,
      -1,    45,   142,   143,    46,    -1,   109,    -1,   142,   109,
      -1,   139,    -1,   143,   139,    -1,    50,    -1,   107,    50,
      -1,    -1,    -1,    -1,    73,    31,   107,    32,   146,   139,
     147,    74,   148,   139,    -1,    75,    31,   107,    32,   139,
      -1,    -1,    76,    31,   107,    32,   150,   139,    -1,    -1,
      77,   151,   139,    76,    31,   107,    32,    50,    -1,    -1,
      -1,    78,    31,   144,   152,   144,   153,   107,    32,   139,
      -1,    79,     3,    50,    -1,    80,    50,    -1,    81,    50,
      -1,    82,    50,    -1,    82,   107,    50,    -1,   156,    -1,
     155,   156,    -1,   157,    -1,   109,    -1,    -1,   110,   126,
     158,   142,   141,    -1,    -1,   110,   126,   159,   141,    -1,
      -1,   126,   160,   142,   141,    -1,    -1,   126,   161,   141,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    47,    47,    48,    49,    50,    54,    55,    56,    57,
      58,    59,    60,    66,    75,    76,    80,    81,    82,    83,
      84,    85,    89,    90,    91,    92,    93,    94,    98,    99,
     103,   104,   107,   110,   116,   117,   120,   126,   127,   130,
     136,   137,   140,   143,   146,   152,   153,   156,   162,   163,
     167,   168,   172,   173,   177,   178,   182,   183,   187,   188,
     192,   193,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   215,   216,   220,   224,   225,   229,   230,
     231,   232,   233,   234,   238,   239,   243,   244,   252,   253,
     254,   255,   256,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   275,   276,   277,   281,   282,
     286,   287,   291,   295,   296,   297,   298,   302,   303,   307,
     308,   309,   313,   314,   315,   319,   320,   324,   325,   329,
     330,   334,   335,   339,   340,   341,   342,   343,   344,   345,
     349,   350,   351,   352,   356,   357,   362,   363,   367,   368,
     372,   373,   374,   378,   379,   383,   384,   388,   389,   390,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   406,
     407,   408,   412,   413,   417,   418,   419,   420,   421,   422,
     426,   427,   428,   432,   433,   434,   435,   439,   440,   444,
     445,   449,   450,   454,   458,   460,   454,   468,   472,   472,
     481,   481,   488,   491,   488,   502,   503,   504,   505,   506,
     510,   511,   515,   516,   520,   520,   526,   526,   532,   532,
     538,   538
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPE_NAME", "'$'", "'&'", "'('", "')'", "'+'", "'-'", "'/'", "'!'",
  "'['", "']'", "'~'", "'#'", "'*'", "','", "'.'", "':'", "'{'", "'}'",
  "'<'", "'>'", "'='", "';'", "TYPEDEF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "STRUCT", "UNION",
  "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE",
  "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "'%'", "'^'", "'|'",
  "'?'", "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "@1", "$@2", "$@3",
  "iteration_statement", "@4", "@5", "@6", "@7", "jump_statement",
  "translation_unit", "external_declaration", "function_definition", "$@8",
  "$@9", "$@10", "$@11", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,    36,
      38,    40,    41,    43,    45,    47,    33,    91,    93,   126,
      35,    42,    44,    46,    58,   123,   125,    60,    62,    61,
      59,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,    37,    94,   124,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    88,    89,    89,    89,    89,
      89,    89,    89,    89,    90,    90,    91,    91,    91,    91,
      91,    91,    92,    92,    92,    92,    92,    92,    93,    93,
      94,    94,    94,    94,    95,    95,    95,    96,    96,    96,
      97,    97,    97,    97,    97,    98,    98,    98,    99,    99,
     100,   100,   101,   101,   102,   102,   103,   103,   104,   104,
     105,   105,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   107,   107,   108,   109,   109,   110,   110,
     110,   110,   110,   110,   111,   111,   112,   112,   113,   113,
     113,   113,   113,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   115,   115,   115,   116,   116,
     117,   117,   118,   119,   119,   119,   119,   120,   120,   121,
     121,   121,   122,   122,   122,   123,   123,   124,   124,   125,
     125,   126,   126,   127,   127,   127,   127,   127,   127,   127,
     128,   128,   128,   128,   129,   129,   130,   130,   131,   131,
     132,   132,   132,   133,   133,   134,   134,   135,   135,   135,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   137,
     137,   137,   138,   138,   139,   139,   139,   139,   139,   139,
     140,   140,   140,   141,   141,   141,   141,   142,   142,   143,
     143,   144,   144,   146,   147,   148,   145,   145,   150,   149,
     151,   149,   152,   153,   149,   154,   154,   154,   154,   154,
     155,   155,   156,   156,   158,   157,   159,   157,   160,   157,
     161,   157
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     1,     3,     1,     2,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     3,     1,     2,
       1,     2,     1,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     4,     2,     1,     1,
       1,     2,     3,     2,     1,     2,     1,     1,     3,     1,
       2,     3,     4,     5,     2,     1,     3,     1,     3,     1,
       1,     2,     1,     1,     3,     4,     3,     4,     4,     3,
       1,     2,     2,     3,     1,     2,     1,     3,     1,     3,
       2,     2,     1,     1,     3,     1,     2,     1,     1,     2,
       3,     2,     3,     3,     4,     2,     3,     3,     4,     1,
       3,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     2,     3,     3,     4,     1,     2,     1,
       2,     1,     2,     0,     0,     0,    10,     5,     0,     6,
       0,     8,     0,     0,     9,     3,     2,     2,     2,     3,
       1,     2,     1,     1,     0,     5,     0,     4,     0,     4,
       0,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   133,   104,     0,   140,    88,    89,    90,    91,    92,
      94,    95,    96,    97,   100,   101,    98,    99,   129,   130,
      93,   108,   109,     0,   213,     0,    78,    80,   102,     0,
     103,    82,   218,   132,     0,     0,   210,   212,     0,   144,
     142,   141,   124,     0,    76,     0,    84,   214,    79,    81,
     107,     0,    83,     0,     0,     0,     0,   131,     1,   211,
     134,   145,   143,     0,   127,     0,   125,     0,    77,     0,
       0,     0,     0,   114,     0,   110,     0,   116,   187,     0,
       0,     0,   221,   153,   139,   152,     0,   146,   148,     0,
       2,     3,     4,     0,     0,     0,    22,     0,    24,    25,
      27,   136,    26,    23,     6,    16,    28,     0,    30,    34,
      37,    40,    45,    48,    50,    52,    54,    56,    58,    75,
       0,     0,     0,     0,   122,    85,    86,     0,    28,    60,
     169,    87,     0,   217,     0,   113,   106,   111,     0,     0,
     117,   119,   115,   188,   219,     2,   183,   191,     0,     0,
       0,     0,     0,   200,     0,     0,     0,     0,     0,    73,
       0,   189,   174,   175,     0,     0,   176,   177,   178,   179,
       0,     0,   150,   157,   151,   158,   137,     0,   138,     0,
       0,    20,     0,    17,    18,     0,   155,     0,     0,    12,
      13,     0,     0,     0,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   135,   123,   128,   126,   172,     0,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      62,     0,   215,   105,   120,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   206,   207,   208,
       0,     0,   192,   185,     0,   184,   190,   165,     0,     0,
     161,     0,   159,     0,     0,   147,   149,   154,     0,     5,
       0,   157,   156,     0,    11,     8,     0,    14,     0,    10,
      32,    31,    33,    35,    36,    38,    39,    43,    44,    41,
      42,    46,    47,    49,    51,    53,    55,    57,     0,     0,
     170,    61,   118,   121,   180,     0,   182,     0,     0,     0,
       0,   202,   205,   209,    74,   186,   166,   160,   162,   167,
       0,   163,     0,    21,    29,     9,     0,     7,     0,   171,
     173,   181,   193,     0,   198,     0,     0,   168,   164,    15,
      59,     0,   197,     0,     0,   203,   194,   199,     0,     0,
       0,     0,     0,   195,   201,     0,     0,   204,   196
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   104,   105,   276,   128,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   129,   159,   231,
     160,   120,    78,    79,    45,    46,    26,    27,    28,    29,
      74,    75,    76,   139,   140,    30,    65,    66,    31,    32,
      33,    34,    41,   258,    87,    88,    89,   187,   259,   175,
     131,   219,   161,   162,   163,    80,   165,   166,   167,   341,
     350,   356,   168,   343,   244,   336,   349,   169,    35,    36,
      37,    70,    71,    53,    54
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -223
static const yytype_int16 yypact[] =
{
     741,  -223,  -223,    47,    58,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,    10,  -223,    44,  1041,  1041,  -223,    17,
    -223,  1041,   -24,    37,    29,   590,  -223,  -223,     2,  -223,
    -223,    58,    12,    74,  -223,   -23,  -223,   189,  -223,  -223,
      51,   611,  -223,  1041,    64,   783,   596,    37,  -223,  -223,
    -223,  -223,  -223,    74,    80,   179,  -223,    47,  -223,   926,
    1041,    64,   611,   611,   186,  -223,    86,   611,  -223,    44,
     980,   277,  -223,  -223,  -223,   174,    27,    90,  -223,    11,
    -223,  -223,  -223,  1159,  1171,  1171,  -223,   657,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,   185,  -223,  1210,  -223,   -10,
     202,   248,    16,   254,   107,    83,    85,   170,    -7,  -223,
     161,   181,  1210,    74,  -223,  -223,   155,   926,   350,  -223,
    -223,  -223,   980,  -223,   233,  -223,  -223,  -223,  1210,    71,
    -223,   180,  -223,  -223,  -223,   193,  -223,  -223,  1210,   262,
     199,   281,   283,  -223,   284,   314,   168,   269,   548,  -223,
     214,  -223,  -223,  -223,   357,   437,  -223,  -223,  -223,  -223,
     699,   979,  -223,    21,  -223,    89,  -223,   858,  -223,   317,
     657,  -223,  1210,  -223,  -223,   131,    87,   289,   321,  -223,
    -223,  1108,  1210,   322,  -223,  1210,  1210,  1210,  1210,  1210,
    1210,  1210,  1210,  1210,  1210,  1210,  1210,  1210,  1210,  1210,
    1210,  1210,  1210,  1210,  -223,  -223,  -223,  -223,  -223,   224,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  1210,  -223,  -223,  -223,    86,  -223,  1210,   535,   282,
     535,  1210,  1210,  1210,   535,   823,   297,  -223,  -223,  -223,
     215,  1210,  -223,  -223,   455,  -223,  -223,  -223,   319,   332,
    -223,   329,    89,  1022,  1120,  -223,  -223,  -223,   351,  -223,
     938,   135,  -223,  1210,  -223,  -223,   352,   340,   236,  -223,
    -223,  -223,  -223,   -10,   -10,   202,   202,   248,   248,   248,
     248,    16,    16,   254,   107,    83,    85,   170,     4,   862,
    -223,  -223,  -223,  -223,  -223,   535,  -223,   132,   136,   147,
     310,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
     360,  -223,   356,  -223,  -223,  -223,  1210,  -223,  1210,  -223,
    -223,  -223,  -223,   535,  -223,   358,   823,  -223,  -223,  -223,
    -223,   535,  -223,   535,  1210,  -223,  -223,  -223,   165,  1210,
     323,   345,   187,  -223,  -223,   535,   535,  -223,  -223
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -223,  -223,  -223,    75,   -56,  -223,   -90,    77,   103,   176,
      81,   192,   195,   196,   194,   219,  -223,   -55,   -66,  -223,
     -82,   -68,    56,    14,  -223,   377,  -223,   129,  -223,  -223,
     355,   -63,   -61,  -223,   212,  -223,   385,   326,    61,     5,
     -16,     1,  -223,   -53,  -223,   273,  -223,   271,   -78,  -167,
    -123,  -223,  -143,  -223,   -45,   -37,   288,  -222,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,   418,
    -223,  -223,  -223,  -223,  -223
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -221
static const yytype_int16 yytable[] =
{
     106,   119,    86,   130,   218,    40,   262,   174,    38,    82,
     212,   137,   135,    42,    25,   185,   142,   194,    57,    67,
      50,  -220,   256,   311,     1,   195,   133,    68,   202,   203,
      47,   196,     1,   132,    60,   144,   186,   181,   183,   184,
      48,    49,    62,   178,   164,    52,   251,     1,   328,    25,
       1,   106,   170,   179,   216,    43,    24,    63,   171,   176,
       3,   130,    51,   204,   205,    39,   106,   119,    55,    85,
     234,   137,   126,   197,    56,     3,   250,    64,     3,   213,
     239,   141,   106,   119,   126,     4,   173,   232,     4,     1,
     172,    24,   106,   119,    44,   304,    72,   306,   185,     4,
     185,   310,    61,   261,   262,   280,   281,   282,   272,    81,
     278,   256,    77,   235,   345,   106,   119,     3,   270,   186,
     263,   236,    18,    19,   171,   277,   264,     4,     4,   122,
     138,   298,   177,    77,    77,    77,   143,   208,    77,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,    57,    77,   307,
     308,   309,   331,   269,   332,   301,   270,   209,   333,   303,
     210,   173,   171,   251,   251,    38,   330,     1,   251,   334,
      73,   106,   119,   324,    85,   314,   211,   271,   143,   251,
     342,    85,   188,   189,   190,    77,   322,   351,   346,   214,
     347,    73,    73,    73,    69,   170,    73,   251,   106,   119,
     320,   171,   357,   358,     2,     4,   191,   106,   247,   355,
     143,   123,   192,   123,   237,   124,    73,   215,   193,   251,
     241,   -86,   136,   130,  -216,   198,   199,   238,    69,   -86,
     141,    77,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,   251,   251,   200,   201,
     277,     2,   348,    73,   252,   313,   299,   352,   206,   207,
     300,   271,   106,   340,   327,   283,   284,    85,   251,   233,
     145,    91,    92,    93,    85,    94,    95,   291,   292,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   285,   286,     2,   240,    96,    97,    73,
      98,    99,   242,   100,   243,   245,   102,   246,   103,   248,
     267,   273,    81,   146,   274,   279,   305,   147,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,   312,   148,   149,
     150,   316,   151,   152,   153,   154,   155,   156,   157,   158,
     145,    91,    92,    93,   317,    94,    95,   318,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   287,   288,
     289,   290,   326,   323,   325,     2,   335,    96,    97,   344,
      98,    99,   337,   100,   338,   354,   102,   353,   103,   230,
     293,   339,    81,   253,   294,   296,   295,   147,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,   134,   148,   149,
     150,   297,   151,   152,   153,   154,   155,   156,   157,   158,
     145,    91,    92,    93,   125,    94,    95,   302,   121,   217,
     266,   268,   254,    59,     0,     0,     0,     0,   145,    91,
      92,    93,     0,    94,    95,     0,     0,    96,    97,     0,
      98,    99,     0,   100,     0,     0,   102,     0,   103,     0,
       0,     0,    81,   255,     0,    96,    97,   147,    98,    99,
       0,   100,     0,     0,   102,     0,   103,     0,     0,     0,
      81,   315,     0,     0,     0,   147,     0,     0,   148,   149,
     150,     0,   151,   152,   153,   154,   155,   156,   157,   158,
       0,     0,     0,     0,     0,     0,   148,   149,   150,     0,
     151,   152,   153,   154,   155,   156,   157,   158,   145,    91,
      92,    93,     0,    94,    95,     0,     0,     0,     0,     0,
       0,    90,    91,    92,    93,     0,    94,    95,     0,     0,
       0,     0,     0,     0,     0,    96,    97,     0,    98,    99,
       0,   100,     0,     0,   102,     0,   103,     0,    96,    97,
      81,    98,    99,     0,   100,   147,     0,   102,     0,   103,
      58,     0,     0,     1,     0,     0,     0,     0,   249,    90,
      91,    92,    93,     0,    94,    95,   148,   149,   150,     0,
     151,   152,   153,   154,   155,   156,   157,   158,     2,     0,
       0,     3,     0,     0,     0,     0,    96,    97,     0,    98,
      99,     4,   100,     0,   101,   102,     0,   103,     0,     2,
       0,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      90,    91,    92,    93,     0,    94,    95,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,     0,     0,     0,     2,     0,    96,    97,     0,
      98,    99,     0,   100,     0,     0,   102,     0,   103,     0,
       0,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     2,     0,     0,
     170,   257,     0,     0,     0,     0,   171,     0,     0,     0,
       4,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     2,
       0,     0,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     2,     0,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,    92,    93,
       0,    94,    95,     0,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    96,    97,     0,    98,    99,     0,   100,
       0,     0,   102,     0,   103,    90,    91,    92,    93,     0,
      94,    95,     0,   147,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     0,     0,
       0,     0,    96,    97,     0,    98,    99,     0,   100,     0,
       0,   102,     0,   103,     0,     0,     0,   127,   329,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   265,    90,
      91,    92,    93,     0,    94,    95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    96,    97,     0,    98,
      99,     0,   100,     0,     0,   102,     2,   103,     0,   270,
     257,   127,     0,     0,     0,   171,     0,     0,     0,     4,
       0,     0,    90,    91,    92,    93,     0,    94,    95,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     2,    96,
      97,     0,    98,    99,     0,   100,     0,   260,   102,     0,
     103,     0,     0,     0,     0,    81,     0,     0,     0,     0,
       0,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       2,     0,     0,     0,   319,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     0,     0,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    90,    91,    92,    93,     0,    94,    95,     0,     0,
       0,     0,     0,    90,    91,    92,    93,     0,    94,    95,
       0,     0,     0,     0,     0,     0,     0,     0,    96,    97,
     275,    98,    99,     0,   100,     0,     0,   102,     0,   103,
      96,    97,     0,    98,    99,     0,   100,     0,   321,   102,
       0,   103,    90,    91,    92,    93,     0,    94,    95,     0,
       0,     0,     0,     0,    90,    91,    92,    93,     0,    94,
      95,     0,     0,     0,     0,     0,     0,     0,     0,    96,
     180,     0,    98,    99,     0,   100,     0,     0,   102,     0,
     103,    96,   182,     0,    98,    99,     0,   100,     0,     0,
     102,     0,   103,    90,    91,    92,    93,     0,    94,    95,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      96,    97,     0,    98,    99,     0,   100,     0,     0,   102,
       0,   103
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-223))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      56,    56,    55,    69,   127,     4,   173,    85,     3,    54,
      17,    74,    73,     3,     0,    97,    77,   107,    34,    42,
       3,    45,   165,   245,     3,    35,    71,    50,    12,    13,
      25,    41,     3,    70,    32,    80,    97,    93,    94,    95,
      26,    27,    41,    32,    81,    31,    42,     3,    44,    35,
       3,   107,    31,    42,   122,    45,     0,    45,    37,    32,
      31,   127,    45,    47,    48,     4,   122,   122,    31,    55,
     138,   134,    67,    83,    37,    31,   158,     3,    31,    86,
     148,    76,   138,   138,    79,    41,    85,   132,    41,     3,
      85,    35,   148,   148,    50,   238,    45,   240,   180,    41,
     182,   244,    41,   171,   271,   195,   196,   197,   186,    45,
     192,   254,    51,    42,   336,   171,   171,    31,    31,   180,
      31,    50,    64,    65,    37,   191,    37,    41,    41,    49,
      44,   213,    42,    72,    73,    74,    80,    30,    77,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   173,    97,   241,
     242,   243,   305,    32,    32,   231,    31,    84,    32,   237,
      85,   170,    37,    42,    42,   170,   299,     3,    42,    32,
      51,   237,   237,   273,   170,   251,    16,   186,   132,    42,
     333,   177,     7,     8,     9,   134,   264,    32,   341,    38,
     343,    72,    73,    74,    49,    31,    77,    42,   264,   264,
     263,    37,   355,   356,    28,    41,    31,   273,    50,    32,
     164,    42,    37,    42,    44,    46,    97,    46,    43,    42,
      31,    42,    46,   299,    45,    33,    34,    44,    49,    50,
     235,   180,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    42,    42,    10,    11,
     326,    28,   344,   134,    50,    50,    42,   349,    14,    15,
      46,   270,   328,   328,    38,   198,   199,   263,    42,    46,
       3,     4,     5,     6,   270,     8,     9,   206,   207,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,   200,   201,    28,    44,    30,    31,   180,
      33,    34,    31,    36,    31,    31,    39,     3,    41,    50,
       3,    32,    45,    46,     3,     3,    44,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    50,    71,    72,
      73,    32,    75,    76,    77,    78,    79,    80,    81,    82,
       3,     4,     5,     6,    32,     8,     9,    38,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,   202,   203,
     204,   205,    42,    32,    32,    28,    76,    30,    31,    31,
      33,    34,    32,    36,    38,    50,    39,    74,    41,    49,
     208,   326,    45,    46,   209,   211,   210,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    72,    71,    72,
      73,   212,    75,    76,    77,    78,    79,    80,    81,    82,
       3,     4,     5,     6,    67,     8,     9,   235,    63,   123,
     177,   180,   164,    35,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    30,    31,    -1,
      33,    34,    -1,    36,    -1,    -1,    39,    -1,    41,    -1,
      -1,    -1,    45,    46,    -1,    30,    31,    50,    33,    34,
      -1,    36,    -1,    -1,    39,    -1,    41,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    50,    -1,    -1,    71,    72,
      73,    -1,    75,    76,    77,    78,    79,    80,    81,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,    -1,
      75,    76,    77,    78,    79,    80,    81,    82,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    33,    34,
      -1,    36,    -1,    -1,    39,    -1,    41,    -1,    30,    31,
      45,    33,    34,    -1,    36,    50,    -1,    39,    -1,    41,
       0,    -1,    -1,     3,    -1,    -1,    -1,    -1,    50,     3,
       4,     5,     6,    -1,     8,     9,    71,    72,    73,    -1,
      75,    76,    77,    78,    79,    80,    81,    82,    28,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    30,    31,    -1,    33,
      34,    41,    36,    -1,    38,    39,    -1,    41,    -1,    28,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
       3,     4,     5,     6,    -1,     8,     9,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,    -1,
      33,    34,    -1,    36,    -1,    -1,    39,    -1,    41,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    28,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      41,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    28,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    28,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    30,    31,    -1,    33,    34,    -1,    36,
      -1,    -1,    39,    -1,    41,     3,     4,     5,     6,    -1,
       8,     9,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    33,    34,    -1,    36,    -1,
      -1,    39,    -1,    41,    -1,    -1,    -1,    45,    46,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    33,
      34,    -1,    36,    -1,    -1,    39,    28,    41,    -1,    31,
      32,    45,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,
      -1,    -1,     3,     4,     5,     6,    -1,     8,     9,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    28,    30,
      31,    -1,    33,    34,    -1,    36,    -1,    38,    39,    -1,
      41,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      28,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    39,    -1,    41,
      30,    31,    -1,    33,    34,    -1,    36,    -1,    38,    39,
      -1,    41,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    33,    34,    -1,    36,    -1,    -1,    39,    -1,
      41,    30,    31,    -1,    33,    34,    -1,    36,    -1,    -1,
      39,    -1,    41,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    33,    34,    -1,    36,    -1,    -1,    39,
      -1,    41
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    31,    41,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,   109,   110,   113,   114,   115,   116,
     122,   125,   126,   127,   128,   155,   156,   157,   126,   125,
     128,   129,     3,    45,    50,   111,   112,   126,   110,   110,
       3,    45,   110,   160,   161,    31,    37,   127,     0,   156,
      32,   125,   128,    45,     3,   123,   124,    42,    50,    49,
     158,   159,    45,   114,   117,   118,   119,   125,   109,   110,
     142,    45,   141,     3,    32,   110,   130,   131,   132,   133,
       3,     4,     5,     6,     8,     9,    30,    31,    33,    34,
      36,    38,    39,    41,    88,    89,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     108,   123,    49,    42,    46,   112,   126,    45,    91,   104,
     105,   137,   142,   141,   117,   119,    46,   118,    44,   120,
     121,   126,   119,   109,   141,     3,    46,    50,    71,    72,
      73,    75,    76,    77,    78,    79,    80,    81,    82,   105,
     107,   139,   140,   141,   142,   143,   144,   145,   149,   154,
      31,    37,   126,   128,   135,   136,    32,    42,    32,    42,
      31,    91,    31,    91,    91,   107,   119,   134,     7,     8,
       9,    31,    37,    43,    93,    35,    41,    83,    33,    34,
      10,    11,    12,    13,    47,    48,    14,    15,    30,    84,
      85,    16,    17,    86,    38,    46,   108,   124,   137,   138,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      49,   106,   141,    46,   108,    42,    50,    44,    44,   108,
      44,    31,    31,    31,   151,    31,     3,    50,    50,    50,
     107,    42,    50,    46,   143,    46,   139,    32,   130,   135,
      38,   108,   136,    31,    37,    70,   132,     3,   134,    32,
      31,   128,   135,    32,     3,    32,    90,   105,   107,     3,
      93,    93,    93,    94,    94,    95,    95,    96,    96,    96,
      96,    97,    97,    98,    99,   100,   101,   102,   107,    42,
      46,   105,   121,   108,   139,    44,   139,   107,   107,   107,
     139,   144,    50,    50,   105,    46,    32,    32,    38,    32,
     130,    38,   108,    32,    93,    32,    42,    38,    44,    46,
     137,   139,    32,    32,    32,    76,   152,    32,    38,    90,
     104,   146,   139,   150,    31,   144,   139,   139,   107,   153,
     147,    32,   107,    74,    50,    32,   148,   139,   139
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (YYID (N))                                                     \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (YYID (0))
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])



/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

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

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  if (yypact_value_is_default (yyn))
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
      if (yytable_value_is_error (yyn))
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

/* Line 1788 of yacc.c  */
#line 47 "parser.y"
    { strcpy((yyval.id),(yyvsp[(1) - (1)].id)); }
    break;

  case 3:

/* Line 1788 of yacc.c  */
#line 48 "parser.y"
    { strcpy((yyval.id),(yyvsp[(1) - (1)].id)); }
    break;

  case 4:

/* Line 1788 of yacc.c  */
#line 49 "parser.y"
    { strcpy((yyval.id),(yyvsp[(1) - (1)].id)); }
    break;

  case 5:

/* Line 1788 of yacc.c  */
#line 50 "parser.y"
    {strcpy ((yyval.id), (yyvsp[(2) - (3)].id));}
    break;

  case 6:

/* Line 1788 of yacc.c  */
#line 54 "parser.y"
    { strcpy((yyval.id),(yyvsp[(1) - (1)].id)); }
    break;

  case 9:

/* Line 1788 of yacc.c  */
#line 57 "parser.y"
    { printf("CALL Label_%s\n",(yyvsp[(1) - (4)].id)); }
    break;

  case 12:

/* Line 1788 of yacc.c  */
#line 60 "parser.y"
    {
		char *eqFree = newname ();
		printf ("%s = %s\n", eqFree, (yyvsp[(1) - (2)].id));
		strcpy ((yyval.id), eqFree);
		printf ("%s = %s + 1\n", (yyvsp[(1) - (2)].id), (yyvsp[(1) - (2)].id));
       	}
    break;

  case 13:

/* Line 1788 of yacc.c  */
#line 66 "parser.y"
    {
		char *eqFree = newname ();
		printf ("%s = %s\n", eqFree, (yyvsp[(1) - (2)].id));
		strcpy ((yyval.id), eqFree);
		printf ("%s = %s - 1\n", (yyvsp[(1) - (2)].id), (yyvsp[(1) - (2)].id));
       	}
    break;

  case 14:

/* Line 1788 of yacc.c  */
#line 75 "parser.y"
    { printf("param %s\n",(yyvsp[(1) - (1)].id)); }
    break;

  case 15:

/* Line 1788 of yacc.c  */
#line 76 "parser.y"
    { printf("param %s\n",(yyvsp[(1) - (3)].id)); }
    break;

  case 16:

/* Line 1788 of yacc.c  */
#line 80 "parser.y"
    { strcpy((yyval.id),(yyvsp[(1) - (1)].id)); }
    break;

  case 28:

/* Line 1788 of yacc.c  */
#line 98 "parser.y"
    { strcpy((yyval.id),(yyvsp[(1) - (1)].id)); }
    break;

  case 29:

/* Line 1788 of yacc.c  */
#line 99 "parser.y"
    {strcpy ((yyval.id),(yyvsp[(4) - (4)].id));}
    break;

  case 30:

/* Line 1788 of yacc.c  */
#line 103 "parser.y"
    { strcpy((yyval.id),(yyvsp[(1) - (1)].id)); }
    break;

  case 31:

/* Line 1788 of yacc.c  */
#line 104 "parser.y"
    {
	  calOp ((yyval.id), (yyvsp[(1) - (3)].id), (yyvsp[(3) - (3)].id), "*");
	}
    break;

  case 32:

/* Line 1788 of yacc.c  */
#line 107 "parser.y"
    {
	  calOp ((yyval.id), (yyvsp[(1) - (3)].id), (yyvsp[(3) - (3)].id), "/");
	}
    break;

  case 33:

/* Line 1788 of yacc.c  */
#line 110 "parser.y"
    {
	  calOp ((yyval.id), (yyvsp[(1) - (3)].id), (yyvsp[(3) - (3)].id), "%");
	}
    break;

  case 34:

/* Line 1788 of yacc.c  */
#line 116 "parser.y"
    { strcpy((yyval.id),(yyvsp[(1) - (1)].id)); }
    break;

  case 35:

/* Line 1788 of yacc.c  */
#line 117 "parser.y"
    {
	  calOp ((yyval.id), (yyvsp[(1) - (3)].id), (yyvsp[(3) - (3)].id), "+");
	}
    break;

  case 36:

/* Line 1788 of yacc.c  */
#line 120 "parser.y"
    {
	  calOp ((yyval.id), (yyvsp[(1) - (3)].id), (yyvsp[(3) - (3)].id), "-");
	}
    break;

  case 37:

/* Line 1788 of yacc.c  */
#line 126 "parser.y"
    {strcpy((yyval.id),(yyvsp[(1) - (1)].id));}
    break;

  case 38:

/* Line 1788 of yacc.c  */
#line 127 "parser.y"
    {
	  calOp ((yyval.id), (yyvsp[(1) - (3)].id), (yyvsp[(3) - (3)].id), "<<");
	}
    break;

  case 39:

/* Line 1788 of yacc.c  */
#line 130 "parser.y"
    {
	  calOp ((yyval.id), (yyvsp[(1) - (3)].id), (yyvsp[(3) - (3)].id), ">>");
	}
    break;

  case 40:

/* Line 1788 of yacc.c  */
#line 136 "parser.y"
    {strcpy((yyval.id),(yyvsp[(1) - (1)].id));}
    break;

  case 41:

/* Line 1788 of yacc.c  */
#line 137 "parser.y"
    {
	  calOp ((yyval.id), (yyvsp[(1) - (3)].id), (yyvsp[(3) - (3)].id), "<");
	}
    break;

  case 42:

/* Line 1788 of yacc.c  */
#line 140 "parser.y"
    {
	  calOp ((yyval.id), (yyvsp[(1) - (3)].id), (yyvsp[(3) - (3)].id), ">");
	}
    break;

  case 43:

/* Line 1788 of yacc.c  */
#line 143 "parser.y"
    {
	  calOp ((yyval.id), (yyvsp[(1) - (3)].id), (yyvsp[(3) - (3)].id), "<=");
	}
    break;

  case 44:

/* Line 1788 of yacc.c  */
#line 146 "parser.y"
    {
	  calOp ((yyval.id), (yyvsp[(1) - (3)].id), (yyvsp[(3) - (3)].id), ">=");
	}
    break;

  case 45:

/* Line 1788 of yacc.c  */
#line 152 "parser.y"
    {strcpy((yyval.id),(yyvsp[(1) - (1)].id));}
    break;

  case 46:

/* Line 1788 of yacc.c  */
#line 153 "parser.y"
    {
	  calOp ((yyval.id), (yyvsp[(1) - (3)].id), (yyvsp[(3) - (3)].id), "==");
	}
    break;

  case 47:

/* Line 1788 of yacc.c  */
#line 156 "parser.y"
    {
	  calOp ((yyval.id), (yyvsp[(1) - (3)].id), (yyvsp[(3) - (3)].id), "!=");
	}
    break;

  case 48:

/* Line 1788 of yacc.c  */
#line 162 "parser.y"
    {strcpy((yyval.id),(yyvsp[(1) - (1)].id));}
    break;

  case 50:

/* Line 1788 of yacc.c  */
#line 167 "parser.y"
    {strcpy((yyval.id),(yyvsp[(1) - (1)].id));}
    break;

  case 52:

/* Line 1788 of yacc.c  */
#line 172 "parser.y"
    {strcpy((yyval.id),(yyvsp[(1) - (1)].id));}
    break;

  case 54:

/* Line 1788 of yacc.c  */
#line 177 "parser.y"
    {strcpy((yyval.id),(yyvsp[(1) - (1)].id));}
    break;

  case 56:

/* Line 1788 of yacc.c  */
#line 182 "parser.y"
    {strcpy((yyval.id),(yyvsp[(1) - (1)].id));}
    break;

  case 58:

/* Line 1788 of yacc.c  */
#line 187 "parser.y"
    {strcpy((yyval.id),(yyvsp[(1) - (1)].id));}
    break;

  case 60:

/* Line 1788 of yacc.c  */
#line 192 "parser.y"
    {strcpy((yyval.id),(yyvsp[(1) - (1)].id));}
    break;

  case 61:

/* Line 1788 of yacc.c  */
#line 193 "parser.y"
    { 
		printf("%s %s %s \n",(yyvsp[(1) - (3)].id),(yyvsp[(2) - (3)].id),(yyvsp[(3) - (3)].id));
		memcpy(Names,constNames,sizeof(constNames));
	       	Namep = Names;
       	}
    break;

  case 62:

/* Line 1788 of yacc.c  */
#line 201 "parser.y"
    { strcpy ((yyval.id), "=");}
    break;

  case 63:

/* Line 1788 of yacc.c  */
#line 202 "parser.y"
    { strcpy ((yyval.id), "*=");}
    break;

  case 64:

/* Line 1788 of yacc.c  */
#line 203 "parser.y"
    { strcpy ((yyval.id), "/=");}
    break;

  case 65:

/* Line 1788 of yacc.c  */
#line 204 "parser.y"
    { strcpy ((yyval.id), "%=");}
    break;

  case 66:

/* Line 1788 of yacc.c  */
#line 205 "parser.y"
    { strcpy ((yyval.id), "+=");}
    break;

  case 67:

/* Line 1788 of yacc.c  */
#line 206 "parser.y"
    { strcpy ((yyval.id), "-=");}
    break;

  case 68:

/* Line 1788 of yacc.c  */
#line 207 "parser.y"
    { strcpy ((yyval.id), "<<=");}
    break;

  case 69:

/* Line 1788 of yacc.c  */
#line 208 "parser.y"
    { strcpy ((yyval.id), ">>=");}
    break;

  case 70:

/* Line 1788 of yacc.c  */
#line 209 "parser.y"
    { strcpy ((yyval.id), "&=");}
    break;

  case 71:

/* Line 1788 of yacc.c  */
#line 210 "parser.y"
    { strcpy ((yyval.id), "^=");}
    break;

  case 72:

/* Line 1788 of yacc.c  */
#line 211 "parser.y"
    { strcpy ((yyval.id), "|=");}
    break;

  case 87:

/* Line 1788 of yacc.c  */
#line 244 "parser.y"
    {
		printf ("%s = %s \n", (yyvsp[(1) - (3)].id),(yyvsp[(3) - (3)].id));
		memcpy(Names,constNames,sizeof(constNames));
	       	Namep = Names;
	}
    break;

  case 193:

/* Line 1788 of yacc.c  */
#line 454 "parser.y"
    {
			sprintf ((yyval.id), "L%d", counter); counter++;
			printf ("If FALSE %s then goto %s\n", (yyvsp[(3) - (4)].id), (yyval.id));
	}
    break;

  case 194:

/* Line 1788 of yacc.c  */
#line 458 "parser.y"
    {
			printf ("goto %s-ENDIF\n", (yyvsp[(5) - (6)].id));
	}
    break;

  case 195:

/* Line 1788 of yacc.c  */
#line 460 "parser.y"
    {
			printf ("%s:\n", (yyvsp[(5) - (8)].id));
			printf ("ELSE \n");
	}
    break;

  case 196:

/* Line 1788 of yacc.c  */
#line 464 "parser.y"
    {
			printf("ENDIF\n ");
			printf ("%s-ENDIF:\n", (yyvsp[(5) - (10)].id));
	}
    break;

  case 198:

/* Line 1788 of yacc.c  */
#line 472 "parser.y"
    {
			sprintf ((yyval.id), "L%d", counter); counter++;
			printf ("%s:\n",(yyval.id));
			printf ("If FALSE %s then goto %s\n", (yyvsp[(3) - (4)].id), (yyval.id));
	}
    break;

  case 199:

/* Line 1788 of yacc.c  */
#line 477 "parser.y"
    {
			printf ("goto %s\n", (yyvsp[(5) - (6)].id));
			//printf ("%s:\n", $<id>5);
	}
    break;

  case 200:

/* Line 1788 of yacc.c  */
#line 481 "parser.y"
    {
			sprintf ((yyval.id), "L%d", counter); counter++;
			printf ("%s:\n",(yyval.id));
	}
    break;

  case 201:

/* Line 1788 of yacc.c  */
#line 485 "parser.y"
    {
			printf ("If %s then goto %s\n", (yyvsp[(6) - (8)].id), (yyvsp[(2) - (8)].id));
	}
    break;

  case 202:

/* Line 1788 of yacc.c  */
#line 488 "parser.y"
    {
			sprintf ((yyval.id), "L%d", counter); counter++;
			printf ("%s-for:\n",(yyval.id));
	}
    break;

  case 203:

/* Line 1788 of yacc.c  */
#line 491 "parser.y"
    {
			sprintf ((yyval.id), "L%d", counter); counter++;
			printf ("IF False %s then goto %s\n",(yyvsp[(5) - (5)].id),(yyval.id));
	}
    break;

  case 204:

/* Line 1788 of yacc.c  */
#line 495 "parser.y"
    {
			printf ("goto %s-for\n",(yyvsp[(4) - (9)].id));
			printf ("%s\n",(yyvsp[(6) - (9)].id));
	}
    break;

  case 208:

/* Line 1788 of yacc.c  */
#line 505 "parser.y"
    { printf("RETURN\n"); }
    break;

  case 209:

/* Line 1788 of yacc.c  */
#line 506 "parser.y"
    { printf("RETURN %s\n",(yyvsp[(2) - (3)].id)); }
    break;

  case 214:

/* Line 1788 of yacc.c  */
#line 520 "parser.y"
    {
		char a[50]; 
		strcpy(a,"L");
		strcat(a,(yyvsp[(2) - (2)].id));
		printf("%s : \n",a);
	}
    break;

  case 216:

/* Line 1788 of yacc.c  */
#line 526 "parser.y"
    {
		char a[50]; 
		strcpy(a,"L");
		strcat(a,(yyvsp[(2) - (2)].id));
		printf("%s : \n",a);
	}
    break;

  case 218:

/* Line 1788 of yacc.c  */
#line 532 "parser.y"
    {
		char a[50]; 
		strcpy(a,"L");
		strcat(a,(yyvsp[(1) - (1)].id));
		printf("%s : \n",a);
	}
    break;

  case 220:

/* Line 1788 of yacc.c  */
#line 538 "parser.y"
    {
		char a[50]; 
		strcpy(a,"L");
		strcat(a,(yyvsp[(1) - (1)].id));
		printf("%s : \n",a);
	}
    break;



/* Line 1788 of yacc.c  */
#line 2569 "parser.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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



/* Line 2049 of yacc.c  */
#line 546 "parser.y"

char  *newname()   
{   
	if( Namep >= &Names[ sizeof(Names)/sizeof(*Names) ] )   
	{   
		fprintf( stderr, "%d: Expression too complex\n", yylineno );   
		exit( 1 );   
	}   

	return( *Namep++ );   
}   

void freename(s)   
	char    *s;   
{   
	if( Namep > Names )   
		*--Namep = s;   
	else   
		fprintf(stderr, "%d: (Internal error) Name stack underflow\n",   
				yylineno );   
}   

void calOp (char *result, char *op1, char *op2, char *operator) {
	  const char *t0 = newname ();
	  const char *t1 = newname ();
	  printf ("%s = %s \n", t0, op1);
	  printf ("%s = %s \n", t1, op2);
	  printf ("%s = %s %s %s \n",t0, t0, operator, t1);
	  strcpy (result, t0);
	  freename (t1);
	  freename (t0);
}

yyerror(s)
	char *s;
{
	fflush(stdout);
	//printf("error found on line no %d",counter); counter++;
	printf("\n%*s\n%*s\n", column, "^", column, s);

}

int main () {
	return yyparse ();
}

