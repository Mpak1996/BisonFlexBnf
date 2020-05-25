/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "bison.y" /* yacc.c:339  */

    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include<ctype.h>

    int number_of_errors = 0;
    int truncated_true=0;
    int display_text_length=0;
    char m1[512] = "";
    char m2[512] = "";
    char m3[512] = "";
    char m4[512] = "";
    char m5[512] = "";
    char tabs_str[16]="\t\t\t\t\t\t\t\t";
    int tabs=0;
    int get_tabs() {
        return 8-tabs;
    }
    char error_msg[100];
	void yyerror(const char *);
	int yylex();
    int is_valid_id_is_str(char*);
    int is_valid_id(char*);
    int is_valid_date(char*);
    int is_valid_retweet_text(char*);
    char *trim(char*);

    void prepare_user_contents(char*,char*,char*,char*,char*);
    void echo(char*,char*,char*,char*,char*,char*,char*,char*,char*);

	extern FILE *yyin;
	extern int error;
	extern int yylineno;

    // Extern
    extern void yyerror(const char *); 

#line 105 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUMBER = 258,
    STRING = 259,
    TRUE = 260,
    FALSE = 261,
    NIL = 262,
    CREATED_AT = 263,
    ID_STR = 264,
    TEXT = 265,
    USER = 266,
    ID = 267,
    NAME = 268,
    SCREEN_NAME = 269,
    LOCATION = 270,
    DAY = 271,
    TRUNCATED = 272,
    EXTENDED_TWEET = 273,
    FULL_TEXT = 274,
    DISPLAY_TEXT_RANGE = 275,
    ENTITIES = 276,
    HASHTAGS = 277,
    INDICES = 278,
    TWEET = 279,
    RETWEET_STATUS = 280
  };
#endif
/* Tokens.  */
#define NUMBER 258
#define STRING 259
#define TRUE 260
#define FALSE 261
#define NIL 262
#define CREATED_AT 263
#define ID_STR 264
#define TEXT 265
#define USER 266
#define ID 267
#define NAME 268
#define SCREEN_NAME 269
#define LOCATION 270
#define DAY 271
#define TRUNCATED 272
#define EXTENDED_TWEET 273
#define FULL_TEXT 274
#define DISPLAY_TEXT_RANGE 275
#define ENTITIES 276
#define HASHTAGS 277
#define INDICES 278
#define TWEET 279
#define RETWEET_STATUS 280

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 40 "bison.y" /* yacc.c:355  */

	char* str;		

#line 199 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 216 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  30
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   919

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  101
/* YYNRULES -- Number of rules.  */
#define YYNRULES  175
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  724

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   280

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    27,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    29,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    30,     2,    31,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    26,     2,    28,     2,     2,     2,     2,
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
      25
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    62,    62,    62,    64,    64,    64,    67,    67,    67,
      70,    70,    70,    73,    73,    73,    76,    76,    76,    79,
      79,    79,    82,    82,    82,    85,    85,    85,    88,    88,
      88,    91,    91,    91,    94,    94,    94,    97,    97,    97,
     100,   100,   100,   103,   103,   103,   106,   106,   106,   109,
     109,   109,   112,   112,   112,   115,   115,   115,   118,   118,
     118,   121,   121,   121,   124,   124,   124,   127,   127,   127,
     130,   130,   130,   133,   133,   133,   138,   147,   156,   165,
     165,   165,   171,   176,   181,   186,   191,   196,   201,   206,
     211,   216,   221,   226,   231,   236,   241,   246,   251,   256,
     261,   266,   271,   276,   281,   286,   293,   302,   308,   314,
     320,   320,   320,   326,   329,   333,   339,   343,   347,   351,
     355,   359,   363,   367,   373,   378,   384,   384,   384,   390,
     394,   401,   410,   420,   420,   420,   426,   430,   430,   430,
     436,   440,   446,   452,   455,   461,   465,   465,   465,   471,
     475,   481,   485,   489,   493,   497,   501,   505,   511,   511,
     511,   520,   520,   520,   526,   534,   541,   548,   555,   562,
     572,   572,   572,   578,   578,   578
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "STRING", "TRUE", "FALSE",
  "NIL", "CREATED_AT", "ID_STR", "TEXT", "USER", "ID", "NAME",
  "SCREEN_NAME", "LOCATION", "DAY", "TRUNCATED", "EXTENDED_TWEET",
  "FULL_TEXT", "DISPLAY_TEXT_RANGE", "ENTITIES", "HASHTAGS", "INDICES",
  "TWEET", "RETWEET_STATUS", "'{'", "','", "'}'", "':'", "'['", "']'",
  "$accept", "json", "tweet", "$@1", "$@2", "$@3", "$@4", "$@5", "$@6",
  "$@7", "$@8", "$@9", "$@10", "$@11", "$@12", "$@13", "$@14", "$@15",
  "$@16", "$@17", "$@18", "$@19", "$@20", "$@21", "$@22", "$@23", "$@24",
  "$@25", "$@26", "$@27", "$@28", "$@29", "$@30", "$@31", "$@32", "$@33",
  "$@34", "$@35", "$@36", "$@37", "$@38", "$@39", "$@40", "$@41", "$@42",
  "$@43", "$@44", "$@45", "$@46", "$@47", "$@48", "created_at", "id_str",
  "text", "user", "$@49", "$@50", "user_contents", "id", "name",
  "screen_name", "location", "object", "$@51", "$@52", "members", "pair",
  "truncated", "extended_tweet", "$@53", "$@54",
  "extended_retweet_contents", "full_text", "display_text_range",
  "entities", "$@55", "$@56", "hashtags", "$@57", "$@58",
  "hashtag_objects", "indices", "members_end", "list", "$@59", "$@60",
  "elements", "value", "retweet", "$@61", "$@62", "retweet_tweet", "$@63",
  "$@64", "retweet_tweet_contents", "retweet_user", "$@65", "$@66",
  "retweet_status", "$@67", "$@68", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   123,    44,   125,    58,
      91,    93
};
# endif

#define YYPACT_NINF -379

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-379)))

#define YYTABLE_NINF -159

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       2,    32,    39,  -379,  -379,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
    -379,    24,    44,    48,    71,    73,    75,    76,    77,    91,
      31,  -379,  -379,  -379,  -379,  -379,  -379,  -379,    92,    93,
      91,    92,    93,    93,    92,    96,    93,    92,    96,    96,
      91,    93,    96,    91,    93,    92,    91,    96,    92,    91,
      96,    86,    29,    84,    83,   104,    87,    88,    89,    90,
      94,    95,    43,    97,    98,    99,   108,   127,   129,   130,
     132,   133,   134,   138,   139,   140,   141,   142,   145,   146,
     149,   150,   151,   152,   153,   154,   157,   158,   159,   160,
     161,  -379,  -379,  -379,  -379,  -379,  -379,    80,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,   109,  -379,   156,   110,   111,
      43,  -379,   112,    43,   114,    43,    43,    43,    43,    43,
      43,   164,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,   165,    43,
    -379,    43,  -379,    29,   102,   166,   170,  -379,   168,   171,
    -379,    92,  -379,    91,  -379,    91,    93,    93,    92,    92,
      93,  -379,    93,    96,    96,    92,    91,    96,    96,    93,
      93,    91,    91,    92,    92,    96,    96,    91,  -379,  -379,
     172,  -379,  -379,   174,  -379,   175,   196,   161,    93,  -379,
     200,   177,   178,   179,   180,   181,   182,   183,   184,    43,
     185,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     197,   198,   199,   201,   202,   204,    43,  -379,   205,   203,
      29,   207,   212,   206,  -379,   209,   208,   219,    43,    43,
      43,    43,    43,    43,    43,    43,  -379,    55,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    15,  -379,  -379,  -379,  -379,   211,
    -379,   213,   217,  -379,  -379,    93,    93,    92,    92,    91,
      91,    96,    96,   223,   240,   241,   242,   243,   246,   247,
     248,   249,    92,    92,    93,    93,    93,    93,    91,    91,
      96,    96,    96,    96,    91,    91,    92,    92,   251,   252,
     250,   161,   255,   256,   271,  -379,   265,   267,   268,   269,
     274,   275,   276,   293,   294,  -379,   220,   318,   321,   324,
      43,    43,    43,    43,   304,   305,   306,   311,   312,   313,
     314,   315,   319,   322,   323,   326,   327,   330,   333,   334,
     325,   344,    43,  -379,    43,    43,  -379,   345,    43,    43,
      43,    43,    43,    43,    43,    43,  -379,  -379,  -379,  -379,
      66,    36,    59,    70,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
    -379,  -379,    19,   317,    27,    81,   168,    96,    96,    96,
      96,    96,    96,    91,    91,   346,   347,   348,   349,   350,
     373,   374,   375,   376,   377,   378,   379,    91,    91,    91,
      91,    92,    92,    92,    92,    92,    92,    93,    93,    93,
      93,    93,    93,    43,    43,   380,   382,  -379,   383,   385,
     386,   388,  -379,   161,   161,   161,   161,   161,   161,   161,
     161,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   402,
      93,    43,    43,    43,    43,    43,    43,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,    79,    72,    82,    79,    63,
      74,    72,    63,    85,    82,    74,    85,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,   390,   393,   216,   393,    93,   216,
      93,   320,   343,   391,   395,   396,   398,   399,   400,   394,
     404,   407,   408,   409,   412,   413,   414,   415,   416,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     442,   447,   448,   401,   449,   451,   455,   463,   464,   465,
     466,   467,   468,   469,   470,   472,   473,   474,   501,   161,
      43,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,   502,   216,   516,   402,   516,
     519,   402,   519,   516,   402,   516,   521,   402,   521,   516,
     519,   516,   521,   519,   521,   402,   519,   402,   521,   519,
     521,  -379,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,   506,  -379
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     2,     3,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,   118,   117,   123,   119,   122,   121,   120,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     143,   152,   151,   155,   156,   157,   110,   146,   153,   154,
     116,   124,   125,   126,   131,     0,   133,   137,     0,     0,
     113,   115,     0,   113,     0,   113,   113,   113,   113,   113,
     113,     0,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,     0,   113,
     159,   113,   145,     0,     0,     0,     0,   136,     0,     0,
      76,     0,    77,     0,    78,     0,     0,     0,     0,     0,
       0,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   161,   144,
       0,   111,   147,   149,   127,     0,     0,   143,     0,   138,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,   160,     0,     0,
       0,     0,     0,     0,   134,     0,     0,     0,   113,   113,
     113,   113,   113,   113,   113,   113,    80,     0,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,     0,   112,   148,   150,   128,   129,
     132,     0,     0,   139,   142,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   143,     0,     0,     0,   135,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    81,     0,     0,     0,     0,
     113,   113,   113,   113,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   162,   113,   113,   130,   140,   113,   113,
     113,   113,   113,   113,   113,   113,   106,   107,   108,   109,
       0,     0,     0,     0,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     170,   173,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,   113,     0,     0,   163,     0,     0,
       0,     0,   141,   143,   143,   143,   143,   143,   143,   143,
     143,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,     0,
       0,   113,   113,   113,   113,   113,   113,     5,     8,    11,
      14,    17,    20,    23,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,    32,    35,
      38,    41,    44,    47,    50,    53,    56,    59,    62,    65,
      68,    71,    74,   171,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   143,
     113,   164,   165,   166,   167,   169,   168,     6,     9,    12,
      15,    18,    21,    24,    27,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,    30,
      33,    36,    39,    42,    45,    48,    51,    54,    57,    60,
      63,    66,    69,    72,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   172,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   174,    82,   101,
      85,    98,   104,    95,    83,   100,    86,    89,   103,    92,
      84,    99,    87,    88,    96,    91,   105,    94,   102,    93,
      97,    90,     0,   175
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,   489,   357,   291,   -13,  -379,  -379,  -379,  -186,    50,
     210,   245,  -379,  -379,  -379,    -6,  -379,  -379,  -379,  -379,
    -379,  -379,   381,   295,   214,  -379,  -379,   387,  -379,  -379,
     135,   258,  -169,  -379,  -379,  -379,   303,   475,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -378,  -379,  -379,  -373,  -379,
    -379
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,   541,     6,   542,     7,   543,     8,
     544,     9,   545,    10,   546,    11,   547,    12,   548,    13,
     573,    14,   574,    15,   575,    16,   576,    17,   577,    18,
     578,    19,   579,    20,   580,    21,   581,    22,   582,    23,
     583,    24,   584,    25,   585,    26,   586,    27,   587,    28,
     588,    81,    84,    86,    93,   219,   293,   256,   298,   299,
     300,   301,   118,   161,   238,    39,    40,    41,    42,   164,
     241,   204,    43,    44,    45,   166,   281,    46,   168,   246,
     209,    47,   160,   119,   163,   239,   202,   203,     4,    29,
     200,   110,   236,   403,   321,   322,   443,   589,   323,   444,
     722
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,   445,    85,   318,   451,     1,   446,
     318,   449,   111,   112,   113,   114,   115,    85,   244,    30,
     319,    -7,   -10,   -28,   319,    96,    97,    31,   294,   100,
     296,   297,   319,    72,   105,   116,  -158,   108,    82,   117,
      32,    33,    34,    35,    36,    37,    38,   294,   295,   296,
     297,   294,   295,    73,   297,   294,   131,    74,   297,   295,
     296,   297,   294,   295,   296,   295,   294,   297,   296,   121,
     122,    85,   318,   296,   297,   295,   296,   294,   295,    80,
      75,    83,    76,    85,    77,    78,    79,    92,   124,   123,
     109,   162,   165,   169,   126,   170,   172,   125,   174,   127,
     128,    34,   130,   129,   171,   133,   132,   173,   134,   175,
     176,   177,   178,   179,   180,   135,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   363,   199,   136,   201,   137,   138,   592,   139,
     140,   595,   591,   141,   593,   142,   143,   144,   145,   146,
     221,   222,   147,   148,   225,   226,   149,   150,   151,   152,
     153,   154,   233,   234,   155,   156,   157,   167,   159,   158,
     181,   198,    37,   206,   208,   418,   421,   424,   210,   243,
     237,   240,   242,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   258,   257,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   376,   268,   269,   270,   318,   271,   272,
     274,   273,    35,   275,   276,   278,   282,   280,   324,   283,
      38,   325,   285,   286,   287,   288,   289,   290,   291,   292,
     284,   335,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   672,   336,
     337,   338,   339,   340,   341,   342,   343,   362,   333,   334,
     360,   361,   364,   365,   497,   498,   499,   500,   501,   502,
     503,   504,    36,   367,   368,   369,   370,   352,   353,   354,
     355,   371,   372,   373,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     374,   375,   377,   557,   559,   378,   563,   565,   379,   569,
     571,   384,   385,   386,   380,   381,   382,   383,   387,   388,
     389,   390,   391,    89,    90,   447,   392,    94,   597,   393,
     394,   400,    99,   395,   396,   102,   402,   397,   404,   405,
     398,   399,   407,   408,   409,   410,   411,   412,   413,   414,
     401,   598,   406,   461,   462,   463,   464,   465,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   453,   454,   455,   456,   457,   458,
     466,   467,   468,   469,   470,   471,   472,   491,    88,   492,
     493,    91,   494,   495,    95,   496,   296,   590,   319,   599,
     645,   605,   103,   600,   601,   106,   602,   603,   604,   629,
     415,   606,   422,   425,   607,   608,   609,   489,   490,   610,
     611,   612,   613,   614,   615,   616,   617,   618,   619,   620,
     621,   622,   623,   624,   625,   505,   506,   507,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   214,   215,   626,
     682,   218,   684,   220,   627,   628,   688,   630,   690,   631,
     227,   228,   694,   632,   696,   535,   536,   537,   538,   539,
     540,   633,   634,   635,   636,   637,   638,   639,   640,   245,
     641,   642,   643,   697,   698,   699,   700,   701,   702,   703,
     704,   705,   706,   707,   708,   709,   710,   711,   712,   713,
     714,   715,   716,   717,   718,   719,   720,   721,   211,   644,
     671,   297,   295,   294,   723,   216,   217,   279,   366,    87,
     326,   452,   223,   277,     0,   205,     0,   120,     0,    98,
     231,   232,   101,   207,     0,   104,   551,   553,   107,     0,
       0,   561,     0,   566,   567,   320,   572,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   327,   328,     0,     0,
       0,     0,     0,     0,   646,     0,     0,     0,     0,     0,
     416,   419,     0,   426,     0,   346,   347,   348,   349,   647,
     648,   649,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,   666,   667,
     668,   669,   670,     0,     0,   417,   420,   423,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   329,   330,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   344,
     345,     0,   212,     0,   213,     0,     0,     0,     0,     0,
       0,     0,     0,   358,   359,   224,     0,     0,     0,     0,
     229,   230,     0,     0,     0,     0,   235,     0,     0,     0,
       0,     0,     0,     0,     0,   448,   450,     0,     0,   533,
     676,     0,   678,     0,     0,     0,     0,     0,     0,     0,
     686,     0,     0,   689,     0,   549,   692,   554,   555,   695,
     560,     0,     0,     0,   568,   570,     0,     0,   483,   484,
     485,   486,   487,   488,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     550,   552,     0,   556,   558,     0,   562,   564,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   331,   332,
       0,   534,     0,     0,     0,     0,     0,     0,   477,   478,
     479,   480,   481,   482,     0,     0,     0,   350,   351,     0,
       0,     0,     0,   356,   357,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   594,
       0,   596,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   674,     0,
       0,   677,     0,     0,   680,     0,     0,   683,     0,     0,
       0,     0,     0,     0,     0,   691,     0,   693,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   673,     0,   675,     0,     0,     0,   679,     0,
     681,     0,   459,   460,   685,     0,   687,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   473,   474,   475,   476
};

static const yytype_int16 yycheck[] =
{
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,   402,    10,    11,   405,    26,   402,
      11,   404,     3,     4,     5,     6,     7,    10,   207,     0,
      25,     9,    10,    11,    25,    58,    59,     4,    12,    62,
      14,    15,    25,    29,    67,    26,    24,    70,    27,    30,
      17,    18,    19,    20,    21,    22,    23,    12,    13,    14,
      15,    12,    13,    29,    15,    12,    82,    29,    15,    13,
      14,    15,    12,    13,    14,    13,    12,    15,    14,     5,
       6,    10,    11,    14,    15,    13,    14,    12,    13,     8,
      29,     9,    29,    10,    29,    29,    29,    11,     4,    26,
      24,    31,     3,     3,    26,     4,     4,    30,     4,    30,
      30,    19,    27,    29,   130,    27,    29,   133,    29,   135,
     136,   137,   138,   139,   140,    27,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   321,   159,    27,   161,    27,    27,   536,    27,
      27,   539,   535,    29,   537,    27,    27,    27,    27,    27,
     183,   184,    27,    27,   187,   188,    27,    27,    27,    27,
      27,    27,   195,   196,    27,    27,    27,    31,    27,    29,
      26,    26,    22,    27,    26,   381,   382,   383,    27,     3,
      28,    27,    27,     3,    27,    27,    27,    27,    27,    27,
      27,    27,    27,   219,    27,    27,    27,    27,    27,    27,
      27,    27,    27,     3,    27,    27,    27,    11,    27,    27,
     236,    27,    20,    28,    31,    28,    27,    31,    27,    31,
      23,    28,   248,   249,   250,   251,   252,   253,   254,   255,
      31,    28,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   646,    29,
      29,    29,    29,    27,    27,    27,    27,    27,   291,   292,
      29,    29,    27,    27,   453,   454,   455,   456,   457,   458,
     459,   460,    21,    28,    27,    27,    27,   310,   311,   312,
     313,    27,    27,    27,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
      27,    27,     4,   509,   510,     4,   512,   513,     4,   515,
     516,    27,    27,    27,   340,   341,   342,   343,    27,    27,
      27,    27,    27,    52,    53,    28,    27,    56,    28,    27,
      27,    26,    61,    27,    27,    64,   362,    27,   364,   365,
      27,    27,   368,   369,   370,   371,   372,   373,   374,   375,
      26,    28,    27,    27,    27,    27,    27,    27,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   407,   408,   409,   410,   411,   412,
      27,    27,    27,    27,    27,    27,    27,    27,    51,    27,
      27,    54,    27,    27,    57,    27,    14,    27,    25,    28,
     589,    27,    65,    28,    28,    68,    28,    28,    28,    28,
     380,    27,   382,   383,    27,    27,    27,   443,   444,    27,
      27,    27,    27,    27,    27,    27,    27,    27,    27,    27,
      27,    27,    27,    27,    27,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   176,   177,    27,
     656,   180,   658,   182,    27,    27,   662,    28,   664,    28,
     189,   190,   668,    28,   670,   491,   492,   493,   494,   495,
     496,    28,    28,    28,    28,    28,    28,    28,    28,   208,
      28,    28,    28,   672,   673,   674,   675,   676,   677,   678,
     679,   680,   681,   682,   683,   684,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,   696,   171,    28,
      28,    15,    13,    12,    28,   178,   179,   242,   324,    50,
     282,   406,   185,   240,    -1,   164,    -1,    72,    -1,    60,
     193,   194,    63,   166,    -1,    66,   506,   507,    69,    -1,
      -1,   511,    -1,   513,   514,   274,   516,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   285,   286,    -1,    -1,
      -1,    -1,    -1,    -1,   590,    -1,    -1,    -1,    -1,    -1,
     380,   381,    -1,   383,    -1,   304,   305,   306,   307,   605,
     606,   607,   608,   609,   610,   611,   612,   613,   614,   615,
     616,   617,   618,   619,   620,   621,   622,   623,   624,   625,
     626,   627,   628,    -1,    -1,   380,   381,   382,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   287,   288,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   302,
     303,    -1,   173,    -1,   175,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   316,   317,   186,    -1,    -1,    -1,    -1,
     191,   192,    -1,    -1,    -1,    -1,   197,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   404,   405,    -1,    -1,   489,
     650,    -1,   652,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     660,    -1,    -1,   663,    -1,   505,   666,   507,   508,   669,
     510,    -1,    -1,    -1,   514,   515,    -1,    -1,   437,   438,
     439,   440,   441,   442,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     505,   506,    -1,   508,   509,    -1,   511,   512,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   289,   290,
      -1,   490,    -1,    -1,    -1,    -1,    -1,    -1,   431,   432,
     433,   434,   435,   436,    -1,    -1,    -1,   308,   309,    -1,
      -1,    -1,    -1,   314,   315,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   538,
      -1,   540,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   648,    -1,
      -1,   651,    -1,    -1,   654,    -1,    -1,   657,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   665,    -1,   667,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   647,    -1,   649,    -1,    -1,    -1,   653,    -1,
     655,    -1,   413,   414,   659,    -1,   661,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   427,   428,   429,   430
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    26,    33,    34,   120,    35,    37,    39,    41,    43,
      45,    47,    49,    51,    53,    55,    57,    59,    61,    63,
      65,    67,    69,    71,    73,    75,    77,    79,    81,   121,
       0,     4,    17,    18,    19,    20,    21,    22,    23,    97,
      98,    99,   100,   104,   105,   106,   109,   113,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    29,    29,    29,    29,    29,    29,    29,    29,
       8,    83,    27,     9,    84,    10,    85,    83,    84,    85,
      85,    84,    11,    86,    85,    84,    86,    86,    83,    85,
      86,    83,    85,    84,    83,    86,    84,    83,    86,    24,
     123,     3,     4,     5,     6,     7,    26,    30,    94,   115,
     119,     5,     6,    26,     4,    30,    26,    30,    30,    29,
      27,    97,    29,    27,    29,    27,    27,    27,    27,    27,
      27,    29,    27,    27,    27,    27,    27,    27,    27,    27,
      27,    27,    27,    27,    27,    27,    27,    27,    29,    27,
     114,    95,    31,   116,   101,     3,   107,    31,   110,     3,
       4,    97,     4,    97,     4,    97,    97,    97,    97,    97,
      97,    26,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    26,    97,
     122,    97,   118,   119,   103,   104,    27,   109,    26,   112,
      27,    84,    83,    83,    85,    85,    84,    84,    85,    87,
      85,    86,    86,    84,    83,    86,    86,    85,    85,    83,
      83,    84,    84,    86,    86,    83,   124,    28,    96,   117,
      27,   102,    27,     3,   114,    85,   111,     3,    27,    27,
      27,    27,    27,    27,    27,    27,    89,    97,    27,    27,
      27,    27,    27,    27,    27,    27,    27,    27,    27,    27,
      27,    27,    27,    27,    97,    28,    31,   118,    28,   105,
      31,   108,    27,    31,    31,    97,    97,    97,    97,    97,
      97,    97,    97,    88,    12,    13,    14,    15,    90,    91,
      92,    93,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    11,    25,
      85,   126,   127,   130,    27,    28,   113,    85,    85,    84,
      84,    83,    83,    86,    86,    28,    29,    29,    29,    29,
      27,    27,    27,    27,    84,    84,    85,    85,    85,    85,
      83,    83,    86,    86,    86,    86,    83,    83,    84,    84,
      29,    29,    27,   114,    27,    27,   106,    28,    27,    27,
      27,    27,    27,    27,    27,    27,     3,     4,     4,     4,
      97,    97,    97,    97,    27,    27,    27,    27,    27,    27,
      27,    27,    27,    27,    27,    27,    27,    27,    27,    27,
      26,    26,    97,   125,    97,    97,    27,    97,    97,    97,
      97,    97,    97,    97,    97,    91,    92,    93,    90,    92,
      93,    90,    91,    93,    90,    91,    92,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,   128,   131,   127,   130,    28,    85,   130,
      85,   127,   112,    86,    86,    86,    86,    86,    86,    83,
      83,    27,    27,    27,    27,    27,    27,    27,    27,    27,
      27,    27,    27,    83,    83,    83,    83,    84,    84,    84,
      84,    84,    84,    85,    85,    85,    85,    85,    85,    97,
      97,    27,    27,    27,    27,    27,    27,   114,   114,   114,
     114,   114,   114,   114,   114,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,    92,    85,    97,    97,    97,    97,    97,
      97,    36,    38,    40,    42,    44,    46,    48,    50,    92,
      93,    91,    93,    91,    92,    92,    93,    90,    93,    90,
      92,    91,    93,    90,    93,    90,    91,    91,    92,    90,
      92,    90,    91,    52,    54,    56,    58,    60,    62,    64,
      66,    68,    70,    72,    74,    76,    78,    80,    82,   129,
      27,   130,   127,   130,    85,   127,    85,    28,    28,    28,
      28,    28,    28,    28,    28,    27,    27,    27,    27,    27,
      27,    27,    27,    27,    27,    27,    27,    27,    27,    27,
      27,    27,    27,    27,    27,    27,    27,    27,    27,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,   114,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    28,   127,    93,    92,    93,    91,    92,    91,    93,
      92,    93,    90,    92,    90,    93,    91,    93,    90,    91,
      90,    92,    91,    92,    90,    91,    90,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   132,    28
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    32,    33,    33,    35,    36,    34,    37,    38,    34,
      39,    40,    34,    41,    42,    34,    43,    44,    34,    45,
      46,    34,    47,    48,    34,    49,    50,    34,    51,    52,
      34,    53,    54,    34,    55,    56,    34,    57,    58,    34,
      59,    60,    34,    61,    62,    34,    63,    64,    34,    65,
      66,    34,    67,    68,    34,    69,    70,    34,    71,    72,
      34,    73,    74,    34,    75,    76,    34,    77,    78,    34,
      79,    80,    34,    81,    82,    34,    83,    84,    85,    87,
      88,    86,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    90,    91,    92,    93,
      95,    96,    94,    97,    97,    97,    98,    98,    98,    98,
      98,    98,    98,    98,    99,    99,   101,   102,   100,   103,
     103,   104,   105,   107,   108,   106,   109,   110,   111,   109,
     112,   112,   113,   114,   114,   115,   116,   117,   115,   118,
     118,   119,   119,   119,   119,   119,   119,   119,   121,   122,
     120,   124,   125,   123,   126,   126,   126,   126,   126,   126,
     128,   129,   127,   131,   132,   130
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     0,     0,    16,     0,     0,    16,
       0,     0,    16,     0,     0,    16,     0,     0,    16,     0,
       0,    16,     0,     0,    16,     0,     0,    16,     0,     0,
      16,     0,     0,    16,     0,     0,    16,     0,     0,    16,
       0,     0,    16,     0,     0,    16,     0,     0,    16,     0,
       0,    16,     0,     0,    16,     0,     0,    16,     0,     0,
      16,     0,     0,    16,     0,     0,    16,     0,     0,    16,
       0,     0,    16,     0,     0,    16,     3,     3,     3,     0,
       0,     7,    12,    12,    12,    12,    12,    12,    12,    12,
      12,    12,    12,    12,    12,    12,    12,    12,    12,    12,
      12,    12,    12,    12,    12,    12,     3,     3,     3,     3,
       0,     0,     5,     0,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     0,     0,     7,     3,
       5,     3,     7,     0,     0,     8,     4,     0,     0,     7,
       5,     7,     7,     0,     2,     2,     0,     0,     5,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     0,     0,
       7,     0,     0,     9,     7,     7,     7,     7,     7,     7,
       0,     0,     9,     0,     0,    12
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
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

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
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

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
      yychar = yylex ();
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 64 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 64 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 64 "bison.y" /* yacc.c:1646  */
    { 
        echo((yyvsp[-13].str), (yyvsp[-12].str), (yyvsp[-10].str), (yyvsp[-9].str), (yyvsp[-7].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-3].str), (yyvsp[-2].str));
    }
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 67 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 67 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 67 "bison.y" /* yacc.c:1646  */
    { 
        echo((yyvsp[-13].str), (yyvsp[-12].str), (yyvsp[-10].str), (yyvsp[-9].str), (yyvsp[-7].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-3].str), (yyvsp[-2].str));
    }
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 70 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 70 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 70 "bison.y" /* yacc.c:1646  */
    { 
        echo((yyvsp[-13].str), (yyvsp[-12].str), (yyvsp[-10].str), (yyvsp[-9].str), (yyvsp[-7].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-3].str), (yyvsp[-2].str));
    }
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 73 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 73 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 73 "bison.y" /* yacc.c:1646  */
    { 
        echo((yyvsp[-13].str), (yyvsp[-12].str), (yyvsp[-10].str), (yyvsp[-9].str), (yyvsp[-7].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-3].str), (yyvsp[-2].str));
    }
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 76 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 76 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 76 "bison.y" /* yacc.c:1646  */
    { 
        echo((yyvsp[-13].str), (yyvsp[-12].str), (yyvsp[-10].str), (yyvsp[-9].str), (yyvsp[-7].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-3].str), (yyvsp[-2].str));
    }
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 79 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 79 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 79 "bison.y" /* yacc.c:1646  */
    { 
        echo((yyvsp[-13].str), (yyvsp[-12].str), (yyvsp[-10].str), (yyvsp[-9].str), (yyvsp[-7].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-3].str), (yyvsp[-2].str));
    }
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 82 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 82 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 82 "bison.y" /* yacc.c:1646  */
    { 
        echo((yyvsp[-13].str), (yyvsp[-12].str), (yyvsp[-10].str), (yyvsp[-9].str), (yyvsp[-7].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-3].str), (yyvsp[-2].str));
    }
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 85 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 85 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 85 "bison.y" /* yacc.c:1646  */
    { 
        echo((yyvsp[-13].str), (yyvsp[-12].str), (yyvsp[-10].str), (yyvsp[-9].str), (yyvsp[-7].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-3].str), (yyvsp[-2].str));
    }
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 88 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 88 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 88 "bison.y" /* yacc.c:1646  */
    { 
        echo((yyvsp[-13].str), (yyvsp[-12].str), (yyvsp[-10].str), (yyvsp[-9].str), (yyvsp[-7].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-3].str), (yyvsp[-2].str));
    }
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 91 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 91 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 91 "bison.y" /* yacc.c:1646  */
    { 
        echo((yyvsp[-13].str), (yyvsp[-12].str), (yyvsp[-10].str), (yyvsp[-9].str), (yyvsp[-7].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-3].str), (yyvsp[-2].str));
    }
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 94 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 94 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 1980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 94 "bison.y" /* yacc.c:1646  */
    { 
        echo((yyvsp[-13].str), (yyvsp[-12].str), (yyvsp[-10].str), (yyvsp[-9].str), (yyvsp[-7].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-3].str), (yyvsp[-2].str));
    }
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 97 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 97 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 97 "bison.y" /* yacc.c:1646  */
    { 
        echo((yyvsp[-13].str), (yyvsp[-12].str), (yyvsp[-10].str), (yyvsp[-9].str), (yyvsp[-7].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-3].str), (yyvsp[-2].str));
    }
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 100 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 100 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 100 "bison.y" /* yacc.c:1646  */
    { 
        echo((yyvsp[-13].str), (yyvsp[-12].str), (yyvsp[-10].str), (yyvsp[-9].str), (yyvsp[-7].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-3].str), (yyvsp[-2].str));
    }
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 103 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 103 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 103 "bison.y" /* yacc.c:1646  */
    { 
        echo((yyvsp[-13].str), (yyvsp[-12].str), (yyvsp[-10].str), (yyvsp[-9].str), (yyvsp[-7].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-3].str), (yyvsp[-2].str));
    }
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 106 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 2054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 106 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 106 "bison.y" /* yacc.c:1646  */
    { 
        echo((yyvsp[-13].str), (yyvsp[-12].str), (yyvsp[-10].str), (yyvsp[-9].str), (yyvsp[-7].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-3].str), (yyvsp[-2].str));
    }
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 109 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 109 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 109 "bison.y" /* yacc.c:1646  */
    { 
        echo((yyvsp[-13].str), (yyvsp[-12].str), (yyvsp[-10].str), (yyvsp[-9].str), (yyvsp[-7].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-3].str), (yyvsp[-2].str));
    }
#line 2088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 112 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 2094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 112 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 112 "bison.y" /* yacc.c:1646  */
    { 
        echo((yyvsp[-13].str), (yyvsp[-12].str), (yyvsp[-10].str), (yyvsp[-9].str), (yyvsp[-7].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-3].str), (yyvsp[-2].str));
    }
#line 2108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 115 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 2114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 115 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 2120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 115 "bison.y" /* yacc.c:1646  */
    { 
        echo((yyvsp[-13].str), (yyvsp[-12].str), (yyvsp[-10].str), (yyvsp[-9].str), (yyvsp[-7].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-3].str), (yyvsp[-2].str));
    }
#line 2128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 118 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 118 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 2140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 118 "bison.y" /* yacc.c:1646  */
    { 
        echo((yyvsp[-13].str), (yyvsp[-12].str), (yyvsp[-10].str), (yyvsp[-9].str), (yyvsp[-7].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-3].str), (yyvsp[-2].str));
    }
#line 2148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 121 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 2154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 121 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 2160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 121 "bison.y" /* yacc.c:1646  */
    { 
        echo((yyvsp[-13].str), (yyvsp[-12].str), (yyvsp[-10].str), (yyvsp[-9].str), (yyvsp[-7].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-3].str), (yyvsp[-2].str));
    }
#line 2168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 124 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 2174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 124 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 2180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 124 "bison.y" /* yacc.c:1646  */
    { 
        echo((yyvsp[-13].str), (yyvsp[-12].str), (yyvsp[-10].str), (yyvsp[-9].str), (yyvsp[-7].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-3].str), (yyvsp[-2].str));
    }
#line 2188 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 127 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 2194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 127 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 2200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 127 "bison.y" /* yacc.c:1646  */
    { 
        echo((yyvsp[-13].str), (yyvsp[-12].str), (yyvsp[-10].str), (yyvsp[-9].str), (yyvsp[-7].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-3].str), (yyvsp[-2].str));
    }
#line 2208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 130 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 2214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 130 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 130 "bison.y" /* yacc.c:1646  */
    { 
        echo((yyvsp[-13].str), (yyvsp[-12].str), (yyvsp[-10].str), (yyvsp[-9].str), (yyvsp[-7].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-3].str), (yyvsp[-2].str));
    }
#line 2228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 133 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 2234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 133 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 2240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 133 "bison.y" /* yacc.c:1646  */
    { 
        echo((yyvsp[-13].str), (yyvsp[-12].str), (yyvsp[-10].str), (yyvsp[-9].str), (yyvsp[-7].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-3].str), (yyvsp[-2].str));
    }
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 138 "bison.y" /* yacc.c:1646  */
    {
        if (!is_valid_date((yyvsp[0].str))) {
            yyerror("invalid date!\n");
        } 
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-2].str))+strlen((yyvsp[0].str))+10));
        sprintf((yyval.str),"%s : %s", trim((yyvsp[-2].str)), trim((yyvsp[0].str)));
    }
#line 2260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 147 "bison.y" /* yacc.c:1646  */
    {
        if (!is_valid_id_is_str((yyvsp[0].str))) {
            yyerror("id_str must be an integer!\n");
        } 
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-2].str))+strlen((yyvsp[0].str))+10));
        sprintf((yyval.str),"%s : %s", (yyvsp[-2].str), (yyvsp[0].str));
    }
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 156 "bison.y" /* yacc.c:1646  */
    {
        if (strlen((yyvsp[0].str)) > 142) {
            yyerror("text length over 140!\n");
        } 
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-2].str))+strlen((yyvsp[0].str))+10));
        sprintf((yyval.str),"%s : %s", (yyvsp[-2].str), (yyvsp[0].str));
    }
#line 2284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 165 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 2290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 165 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 2296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 165 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-6].str))+strlen((yyvsp[-2].str))+10));
        sprintf((yyval.str),"%s: { %s \n\t}", (yyvsp[-6].str), (yyvsp[-2].str));
    }
#line 2305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 171 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-11].str))+strlen((yyvsp[-10].str))+strlen((yyvsp[-8].str))+ strlen((yyvsp[-7].str))+strlen((yyvsp[-5].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-2].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+100));
        prepare_user_contents((yyvsp[-11].str), (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));
        sprintf((yyval.str),"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s ", m1, (yyvsp[-10].str), m2, (yyvsp[-7].str), m3, (yyvsp[-4].str), m4, (yyvsp[-1].str), m5);
    }
#line 2315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 176 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-11].str))+strlen((yyvsp[-10].str))+strlen((yyvsp[-8].str))+ strlen((yyvsp[-7].str))+strlen((yyvsp[-5].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-2].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+100));
        prepare_user_contents((yyvsp[-11].str), (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));
        sprintf((yyval.str),"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, (yyvsp[-10].str), m2, (yyvsp[-7].str), m3, (yyvsp[-4].str), m4, (yyvsp[-1].str), m5);
    }
#line 2325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 181 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-11].str))+strlen((yyvsp[-10].str))+strlen((yyvsp[-8].str))+ strlen((yyvsp[-7].str))+strlen((yyvsp[-5].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-2].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+100));
        prepare_user_contents((yyvsp[-11].str), (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));
        sprintf((yyval.str),"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, (yyvsp[-10].str), m2, (yyvsp[-7].str), m3, (yyvsp[-4].str), m4, (yyvsp[-1].str), m5);
    }
#line 2335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 186 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-11].str))+strlen((yyvsp[-10].str))+strlen((yyvsp[-8].str))+ strlen((yyvsp[-7].str))+strlen((yyvsp[-5].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-2].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+100));
        prepare_user_contents((yyvsp[-11].str), (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));
        sprintf((yyval.str),"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, (yyvsp[-10].str), m2, (yyvsp[-7].str), m3, (yyvsp[-4].str), m4, (yyvsp[-1].str), m5);
    }
#line 2345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 191 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-11].str))+strlen((yyvsp[-10].str))+strlen((yyvsp[-8].str))+ strlen((yyvsp[-7].str))+strlen((yyvsp[-5].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-2].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+100));
        prepare_user_contents((yyvsp[-11].str), (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));
        sprintf((yyval.str),"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, (yyvsp[-10].str), m2, (yyvsp[-7].str), m3, (yyvsp[-4].str), m4, (yyvsp[-1].str), m5);
    }
#line 2355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 196 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-11].str))+strlen((yyvsp[-10].str))+strlen((yyvsp[-8].str))+ strlen((yyvsp[-7].str))+strlen((yyvsp[-5].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-2].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+10));
        prepare_user_contents((yyvsp[-11].str), (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));
        sprintf((yyval.str),"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, (yyvsp[-10].str), m2, (yyvsp[-7].str), m3, (yyvsp[-4].str), m4, (yyvsp[-1].str), m5);
    }
#line 2365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 201 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-11].str))+strlen((yyvsp[-10].str))+strlen((yyvsp[-8].str))+ strlen((yyvsp[-7].str))+strlen((yyvsp[-5].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-2].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+100));
        prepare_user_contents((yyvsp[-11].str), (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));
        sprintf((yyval.str),"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, (yyvsp[-10].str), m2, (yyvsp[-7].str), m3, (yyvsp[-4].str), m4, (yyvsp[-1].str), m5);
    }
#line 2375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 206 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-11].str))+strlen((yyvsp[-10].str))+strlen((yyvsp[-8].str))+ strlen((yyvsp[-7].str))+strlen((yyvsp[-5].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-2].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+100));
        prepare_user_contents((yyvsp[-11].str), (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));
        sprintf((yyval.str),"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, (yyvsp[-10].str), m2, (yyvsp[-7].str), m3, (yyvsp[-4].str), m4, (yyvsp[-1].str), m5);
    }
#line 2385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 211 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-11].str))+strlen((yyvsp[-10].str))+strlen((yyvsp[-8].str))+ strlen((yyvsp[-7].str))+strlen((yyvsp[-5].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-2].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+100));
        prepare_user_contents((yyvsp[-11].str), (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));
        sprintf((yyval.str),"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, (yyvsp[-10].str), m2, (yyvsp[-7].str), m3, (yyvsp[-4].str), m4, (yyvsp[-1].str), m5);
    }
#line 2395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 216 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-11].str))+strlen((yyvsp[-10].str))+strlen((yyvsp[-8].str))+ strlen((yyvsp[-7].str))+strlen((yyvsp[-5].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-2].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+100));
        prepare_user_contents((yyvsp[-11].str), (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));
        sprintf((yyval.str),"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, (yyvsp[-10].str), m2, (yyvsp[-7].str), m3, (yyvsp[-4].str), m4, (yyvsp[-1].str), m5);
    }
#line 2405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 221 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-11].str))+strlen((yyvsp[-10].str))+strlen((yyvsp[-8].str))+ strlen((yyvsp[-7].str))+strlen((yyvsp[-5].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-2].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+100));
        prepare_user_contents((yyvsp[-11].str), (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));
        sprintf((yyval.str),"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, (yyvsp[-10].str), m2, (yyvsp[-7].str), m3, (yyvsp[-4].str), m4, (yyvsp[-1].str), m5);
    }
#line 2415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 226 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-11].str))+strlen((yyvsp[-10].str))+strlen((yyvsp[-8].str))+ strlen((yyvsp[-7].str))+strlen((yyvsp[-5].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-2].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+100));
        prepare_user_contents((yyvsp[-11].str), (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));
        sprintf((yyval.str),"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, (yyvsp[-10].str), m2, (yyvsp[-7].str), m3, (yyvsp[-4].str), m4, (yyvsp[-1].str), m5);
    }
#line 2425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 231 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-11].str))+strlen((yyvsp[-10].str))+strlen((yyvsp[-8].str))+ strlen((yyvsp[-7].str))+strlen((yyvsp[-5].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-2].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+100));
        prepare_user_contents((yyvsp[-11].str), (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));
        sprintf((yyval.str),"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, (yyvsp[-10].str), m2, (yyvsp[-7].str), m3, (yyvsp[-4].str), m4, (yyvsp[-1].str), m5);
    }
#line 2435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 236 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-11].str))+strlen((yyvsp[-10].str))+strlen((yyvsp[-8].str))+ strlen((yyvsp[-7].str))+strlen((yyvsp[-5].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-2].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+100));
        prepare_user_contents((yyvsp[-11].str), (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));
        sprintf((yyval.str),"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, (yyvsp[-10].str), m2, (yyvsp[-7].str), m3, (yyvsp[-4].str), m4, (yyvsp[-1].str), m5);
    }
#line 2445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 241 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-11].str))+strlen((yyvsp[-10].str))+strlen((yyvsp[-8].str))+ strlen((yyvsp[-7].str))+strlen((yyvsp[-5].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-2].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+100));
        prepare_user_contents((yyvsp[-11].str), (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));
        sprintf((yyval.str),"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, (yyvsp[-10].str), m2, (yyvsp[-7].str), m3, (yyvsp[-4].str), m4, (yyvsp[-1].str), m5);
    }
#line 2455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 246 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-11].str))+strlen((yyvsp[-10].str))+strlen((yyvsp[-8].str))+ strlen((yyvsp[-7].str))+strlen((yyvsp[-5].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-2].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+100));
        prepare_user_contents((yyvsp[-11].str), (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));
        sprintf((yyval.str),"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, (yyvsp[-10].str), m2, (yyvsp[-7].str), m3, (yyvsp[-4].str), m4, (yyvsp[-1].str), m5);
    }
#line 2465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 251 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-11].str))+strlen((yyvsp[-10].str))+strlen((yyvsp[-8].str))+ strlen((yyvsp[-7].str))+strlen((yyvsp[-5].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-2].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+100));
        prepare_user_contents((yyvsp[-11].str), (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));
        sprintf((yyval.str),"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, (yyvsp[-10].str), m2, (yyvsp[-7].str), m3, (yyvsp[-4].str), m4, (yyvsp[-1].str), m5);
    }
#line 2475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 256 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-11].str))+strlen((yyvsp[-10].str))+strlen((yyvsp[-8].str))+ strlen((yyvsp[-7].str))+strlen((yyvsp[-5].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-2].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+100));
        prepare_user_contents((yyvsp[-11].str), (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));
        sprintf((yyval.str),"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, (yyvsp[-10].str), m2, (yyvsp[-7].str), m3, (yyvsp[-4].str), m4, (yyvsp[-1].str), m5);
    }
#line 2485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 261 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-11].str))+strlen((yyvsp[-10].str))+strlen((yyvsp[-8].str))+ strlen((yyvsp[-7].str))+strlen((yyvsp[-5].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-2].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+100));
        prepare_user_contents((yyvsp[-11].str), (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));
        sprintf((yyval.str),"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, (yyvsp[-10].str), m2, (yyvsp[-7].str), m3, (yyvsp[-4].str), m4, (yyvsp[-1].str), m5);
    }
#line 2495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 266 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-11].str))+strlen((yyvsp[-10].str))+strlen((yyvsp[-8].str))+ strlen((yyvsp[-7].str))+strlen((yyvsp[-5].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-2].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+100));
        prepare_user_contents((yyvsp[-11].str), (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));
        sprintf((yyval.str),"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, (yyvsp[-10].str), m2, (yyvsp[-7].str), m3, (yyvsp[-4].str), m4, (yyvsp[-1].str), m5);
    }
#line 2505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 271 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-11].str))+strlen((yyvsp[-10].str))+strlen((yyvsp[-8].str))+ strlen((yyvsp[-7].str))+strlen((yyvsp[-5].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-2].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+100));
        prepare_user_contents((yyvsp[-11].str), (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));
        sprintf((yyval.str),"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, (yyvsp[-10].str), m2, (yyvsp[-7].str), m3, (yyvsp[-4].str), m4, (yyvsp[-1].str), m5);
    }
#line 2515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 276 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-11].str))+strlen((yyvsp[-10].str))+strlen((yyvsp[-8].str))+ strlen((yyvsp[-7].str))+strlen((yyvsp[-5].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-2].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+100));
        prepare_user_contents((yyvsp[-11].str), (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));
        sprintf((yyval.str),"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, (yyvsp[-10].str), m2, (yyvsp[-7].str), m3, (yyvsp[-4].str), m4, (yyvsp[-1].str), m5);
    }
#line 2525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 281 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-11].str))+strlen((yyvsp[-10].str))+strlen((yyvsp[-8].str))+ strlen((yyvsp[-7].str))+strlen((yyvsp[-5].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-2].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+100));
        prepare_user_contents((yyvsp[-11].str), (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));
        sprintf((yyval.str),"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, (yyvsp[-10].str), m2, (yyvsp[-7].str), m3, (yyvsp[-4].str), m4, (yyvsp[-1].str), m5);
    }
#line 2535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 286 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-11].str))+strlen((yyvsp[-10].str))+strlen((yyvsp[-8].str))+ strlen((yyvsp[-7].str))+strlen((yyvsp[-5].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-2].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+100));
        prepare_user_contents((yyvsp[-11].str), (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-2].str), (yyvsp[0].str));
        sprintf((yyval.str),"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, (yyvsp[-10].str), m2, (yyvsp[-7].str), m3, (yyvsp[-4].str), m4, (yyvsp[-1].str), m5);
    }
#line 2545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 293 "bison.y" /* yacc.c:1646  */
    {
        if (!is_valid_id((yyvsp[0].str))) {
            yyerror("invalid user id!\n");
        } 
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-2].str))+strlen((yyvsp[0].str))+10));
        sprintf((yyval.str),"%s : %s", (yyvsp[-2].str), (yyvsp[0].str));
    }
#line 2557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 302 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-2].str))+strlen((yyvsp[0].str))+10));
        sprintf((yyval.str),"%s : %s", (yyvsp[-2].str), (yyvsp[0].str));
    }
#line 2566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 308 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-2].str))+strlen((yyvsp[0].str))+10));
        sprintf((yyval.str),"%s : %s", (yyvsp[-2].str), (yyvsp[0].str));
    }
#line 2575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 314 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-2].str))+strlen((yyvsp[0].str))+10));
        sprintf((yyval.str),"%s : %s", (yyvsp[-2].str), (yyvsp[0].str));
    }
#line 2584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 320 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 2590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 320 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 2596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 320 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-2].str))+10));
        sprintf((yyval.str),"{\n\t%s%s \n%s}", tabs_str+get_tabs(), (yyvsp[-2].str), tabs_str+get_tabs());
    }
#line 2605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 326 "bison.y" /* yacc.c:1646  */
    { 
        (yyval.str) = " ";
    }
#line 2613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 329 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[0].str))+10));
        sprintf((yyval.str),"%s", (yyvsp[0].str));
    }
#line 2622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 333 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-2].str))+strlen((yyvsp[0].str))+10));
        sprintf((yyval.str),"%s,\n%s%s", (yyvsp[-2].str), tabs_str+get_tabs(), (yyvsp[0].str));
    }
#line 2631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 339 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-2].str))+strlen((yyvsp[0].str))+10));
        sprintf((yyval.str),"%s : %s", (yyvsp[-2].str), (yyvsp[0].str));
    }
#line 2640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 343 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[0].str))+10));
        sprintf((yyval.str),"%s", (yyvsp[0].str));
    }
#line 2649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 347 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[0].str))+10));
        sprintf((yyval.str),"%s", (yyvsp[0].str));
    }
#line 2658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 351 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[0].str))+10));
        sprintf((yyval.str),"%s", (yyvsp[0].str));
    }
#line 2667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 355 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[0].str))+10));
        sprintf((yyval.str),"%s", (yyvsp[0].str));
    }
#line 2676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 359 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[0].str))+10));
        sprintf((yyval.str),"%s", (yyvsp[0].str));
    }
#line 2685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 363 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[0].str))+10));
        sprintf((yyval.str),"%s", (yyvsp[0].str));
    }
#line 2694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 367 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[0].str))+10));
        sprintf((yyval.str),"%s", (yyvsp[0].str));
    }
#line 2703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 373 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-2].str))+strlen((yyvsp[0].str))+10));
        sprintf((yyval.str),"%s : %s", trim((yyvsp[-2].str)), trim((yyvsp[0].str)));
        truncated_true = 1;
    }
#line 2713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 378 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-2].str))+strlen((yyvsp[0].str))+10));
        sprintf((yyval.str),"%s : %s", trim((yyvsp[-2].str)), trim((yyvsp[0].str)));
    }
#line 2722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 384 "bison.y" /* yacc.c:1646  */
    {++tabs;}
#line 2728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 384 "bison.y" /* yacc.c:1646  */
    {--tabs;}
#line 2734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 384 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-6].str))+strlen((yyvsp[-2].str))+100));
        sprintf((yyval.str),"%s : { \n\t\t%s \n\t}", trim((yyvsp[-6].str)), trim((yyvsp[-2].str)));
    }
#line 2743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 390 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-2].str))+strlen((yyvsp[0].str))+100));
        sprintf((yyval.str),"\n\t\t%s, \n\t\t%s", trim((yyvsp[-2].str)), trim((yyvsp[0].str)));
    }
#line 2752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 394 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-4].str))+strlen((yyvsp[-2].str))+strlen((yyvsp[0].str))+100));
        sprintf((yyval.str),"\n\t\t%s, \n\t\t%s, \n\t\t%s", trim((yyvsp[-4].str)), trim((yyvsp[-2].str)), trim((yyvsp[0].str)));
    }
#line 2761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 401 "bison.y" /* yacc.c:1646  */
    {
        // if (strlen($3) > 142) {
        //     yyerror("full_text length over 140!");
        // } 
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-2].str))+strlen((yyvsp[0].str))+10));
        sprintf((yyval.str),"%s : %s", trim((yyvsp[-2].str)), trim((yyvsp[0].str)));
    }
#line 2773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 410 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-6].str))+strlen((yyvsp[-3].str))+strlen((yyvsp[-1].str))+10));
        sprintf((yyval.str),"%s : [ %s, %s ]", trim((yyvsp[-6].str)), trim((yyvsp[-3].str)), trim((yyvsp[-1].str)));
        display_text_length=atoi((yyvsp[-1].str))-atoi((yyvsp[-3].str));
        if (display_text_length>140 && truncated_true==0) {
            yyerror("display_text_range >= 140 but truncated is false!\n");
        }
    }
#line 2786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 420 "bison.y" /* yacc.c:1646  */
    {++tabs;}
#line 2792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 420 "bison.y" /* yacc.c:1646  */
    {--tabs;}
#line 2798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 420 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-7].str))+strlen((yyvsp[-3].str))+strlen((yyvsp[-2].str))+100));
        sprintf((yyval.str),"%s : { \n%s%s \n%s}, %s", trim((yyvsp[-7].str)),  tabs_str+(get_tabs()-1), trim((yyvsp[-3].str)), tabs_str+get_tabs(), trim((yyvsp[-2].str)));
    }
#line 2807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 426 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*100);
        sprintf((yyval.str),"\"hashtags\": [ ]");
    }
#line 2816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 430 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 2822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 430 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 2828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 430 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-6].str))+strlen((yyvsp[-2].str))+100));
        sprintf((yyval.str),"\"hashtags\": [ %s]", trim((yyvsp[-2].str)));
    }
#line 2837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 436 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-3].str))+strlen((yyvsp[-1].str))+100));
        sprintf((yyval.str),"%c{%s, %s} \n",'\t', trim((yyvsp[-3].str)), trim((yyvsp[-1].str)));
    }
#line 2846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 440 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-5].str))+strlen((yyvsp[-3].str))+strlen((yyvsp[0].str))+100));
        sprintf((yyval.str),"{%s, %s}, %s", trim((yyvsp[-5].str)), trim((yyvsp[-3].str)), trim((yyvsp[0].str)));
    }
#line 2855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 446 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-6].str))+strlen((yyvsp[-3].str))+strlen((yyvsp[-1].str))+100));
        sprintf((yyval.str),"%s : [ %s, %s ]", trim((yyvsp[-6].str)), trim((yyvsp[-3].str)), trim((yyvsp[-1].str)));
    }
#line 2864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 452 "bison.y" /* yacc.c:1646  */
    { 
        (yyval.str) = " ";
    }
#line 2872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 455 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[0].str))+100));
        sprintf((yyval.str),"%s", (yyvsp[0].str));
    }
#line 2881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 461 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*8);
        sprintf((yyval.str),"[ ]");
    }
#line 2890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 465 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 2896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 465 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 2902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 465 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-2].str))+10));
        sprintf((yyval.str),"[\n\t%s%s \n%s]", tabs_str+get_tabs(), (yyvsp[-2].str),  tabs_str+get_tabs());
    }
#line 2911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 471 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[0].str))+10));
        sprintf((yyval.str),"%s", (yyvsp[0].str));
    }
#line 2920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 475 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-2].str))+strlen((yyvsp[0].str))+10));
        sprintf((yyval.str),"%s,\n%s%s", (yyvsp[-2].str), tabs_str+get_tabs(), (yyvsp[0].str));
    }
#line 2929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 481 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[0].str))+10));
        sprintf((yyval.str),"%s", (yyvsp[0].str));
    }
#line 2938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 485 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[0].str))+10));
        sprintf((yyval.str),"%s", (yyvsp[0].str));
    }
#line 2947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 489 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[0].str))+10));
        sprintf((yyval.str),"%s", (yyvsp[0].str));
    }
#line 2956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 493 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[0].str))+10));
        sprintf((yyval.str),"%s", (yyvsp[0].str));
    }
#line 2965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 497 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[0].str))+10));
        sprintf((yyval.str),"%s", (yyvsp[0].str));
    }
#line 2974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 501 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[0].str))+10));
        sprintf((yyval.str),"%s", (yyvsp[0].str));
    }
#line 2983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 505 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[0].str))+10));
        sprintf((yyval.str),"%s", (yyvsp[0].str));
    }
#line 2992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 511 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 2998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 511 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 3004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 511 "bison.y" /* yacc.c:1646  */
    {
        printf("{");
        if ((yyvsp[-4].str)[0]!=' ') printf("\n\t%s", trim((yyvsp[-4].str)));
        printf("\n\t%s", trim((yyvsp[-3].str)));
        if ((yyvsp[-2].str)[0]!=' ') printf("\n\t%s", trim((yyvsp[-2].str)));
        printf("\n}");
    }
#line 3016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 520 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 3022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 520 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 3028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 520 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-8].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-3].str))+strlen((yyvsp[-2].str))+100));
        sprintf((yyval.str),"%s: {\n %s\t\t%s,\n\t\t%s\n \t}", trim((yyvsp[-8].str)), trim((yyvsp[-4].str)), trim((yyvsp[-3].str)), trim((yyvsp[-2].str)));
    }
#line 3037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 526 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-6].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-3].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+100));
        sprintf((yyval.str),"%s, %s\n \t\t%s, %s\n \t\t%s", trim((yyvsp[-6].str)), trim((yyvsp[-4].str)), trim((yyvsp[-3].str)), trim((yyvsp[-1].str)), trim((yyvsp[0].str)));

        if (!is_valid_retweet_text((yyvsp[-6].str)+9)) {
            yyerror("Invalid retweet text. Retweet text must contain RT@!\n");
        }
    }
#line 3050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 534 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-6].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-3].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+100));
        sprintf((yyval.str),"%s, %s\n \t\t%s, %s\n \t\t%s", trim((yyvsp[-6].str)), trim((yyvsp[-4].str)), trim((yyvsp[-3].str)), trim((yyvsp[-1].str)), trim((yyvsp[0].str)));
        if (!is_valid_retweet_text((yyvsp[-6].str)+9)) {
            yyerror("Invalid retweet text. Retweet text must contain RT@!\n");
        }
    }
#line 3062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 541 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-6].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-3].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+100));
        sprintf((yyval.str),"%s, %s\n \t\t%s, %s\n \t\t%s", trim((yyvsp[-6].str)), trim((yyvsp[-4].str)), trim((yyvsp[-3].str)), trim((yyvsp[-1].str)), trim((yyvsp[0].str)));
        if (!is_valid_retweet_text((yyvsp[-3].str)+9)) {
            yyerror("Invalid retweet text. Retweet text must contain RT@!\n");
        }
    }
#line 3074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 548 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-6].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-3].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+100));
        sprintf((yyval.str),"%s, %s\n \t\t%s, %s\n \t\t%s", trim((yyvsp[-6].str)), trim((yyvsp[-4].str)), trim((yyvsp[-3].str)), trim((yyvsp[-1].str)), trim((yyvsp[0].str)));
        if (!is_valid_retweet_text((yyvsp[0].str)+9)) {
            yyerror("Invalid retweet text. Retweet text must contain RT@!\n");
        }
    }
#line 3086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 555 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-6].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-3].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+100));
        sprintf((yyval.str),"%s, %s\n \t\t%s, %s\n \t\t%s", trim((yyvsp[-6].str)), trim((yyvsp[-4].str)), trim((yyvsp[-3].str)), trim((yyvsp[-1].str)), trim((yyvsp[0].str)));
        if (!is_valid_retweet_text((yyvsp[0].str)+9)) {
            yyerror("Invalid retweet text. Retweet text must contain RT@!\n");
        }
    }
#line 3098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 562 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-6].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-3].str))+strlen((yyvsp[-1].str))+strlen((yyvsp[0].str))+100));
        sprintf((yyval.str),"%s, %s\n \t\t%s, %s\n \t\t%s", trim((yyvsp[-6].str)), trim((yyvsp[-4].str)), trim((yyvsp[-3].str)), trim((yyvsp[-1].str)), trim((yyvsp[0].str)));
        if (!is_valid_retweet_text((yyvsp[-3].str)+9)) {
            yyerror("Invalid retweet text. Retweet text must contain RT@!\n");
        }
    }
#line 3110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 572 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 3116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 572 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 3122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 572 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-8].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-3].str))+strlen((yyvsp[-1].str))+100));
        sprintf((yyval.str),"%s: {\n %s%s%s%s\n %s}", trim((yyvsp[-8].str)), trim((yyvsp[-4].str)),  tabs_str+get_tabs()-1, trim((yyvsp[-3].str)), trim((yyvsp[-1].str)), tabs_str+get_tabs());
    }
#line 3131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 578 "bison.y" /* yacc.c:1646  */
    { tabs++;}
#line 3137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 578 "bison.y" /* yacc.c:1646  */
    { tabs--;}
#line 3143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 578 "bison.y" /* yacc.c:1646  */
    {
        (yyval.str) = (char *)malloc(sizeof(char)*(strlen((yyvsp[-11].str))+strlen((yyvsp[-7].str))+strlen((yyvsp[-6].str))+strlen((yyvsp[-4].str))+strlen((yyvsp[-3].str))+strlen((yyvsp[-2].str))+100));
        sprintf((yyval.str),"%s: {\n %s \t\t\t%s,\n %s \t\t\t%s,\n \t\t\t%s\n \t\t}\n", trim((yyvsp[-11].str)), trim((yyvsp[-7].str)), trim((yyvsp[-6].str)), trim((yyvsp[-4].str)), trim((yyvsp[-3].str)), trim((yyvsp[-2].str)));
    }
#line 3152 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3156 "y.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 583 "bison.y" /* yacc.c:1906  */


int yywrap()
{
   return 1;
}

// Overide of yyerror bison function
void yyerror (char const *s) {
    ++number_of_errors;
    fprintf (stderr, "    %s - line %d \n", s, yylineno);
}

// Checks if the retweet text is valid (starts with RT@)
int is_valid_retweet_text(char* str) {
    if(
        (str[1]=='R' && str[2]=='T' && str[3]=='@' ) ||
        (str[1]=='R' && str[2]=='T' && str[3]==' ' && str[4]=='@')
    ) 
    {
        return 1;
    }
    return 0;
}

// Checks if id_str is a number
int is_valid_id_is_str(char* id_str) {
    for (int i=1; i<strlen(id_str)-1; ++i) {
        if (
            id_str[i] !='0' &&
            id_str[i] !='1' &&
            id_str[i] !='2' &&
            id_str[i] !='3' &&
            id_str[i] !='4' &&
            id_str[i] !='5' &&
            id_str[i] !='6' &&
            id_str[i] !='7' &&
            id_str[i] !='8' &&
            id_str[i] !='9'
        )
        {
            yyerror("invalid id_str!\n");
            return 0;
        }
    }
    return 1;
}

// Checks if the id is valid
int is_valid_id(char* id) {
    for (int i=0; i<strlen(id); ++i) {
        if (
            id[i] !='0' &&
            id[i] !='1' &&
            id[i] !='2' &&
            id[i] !='3' &&
            id[i] !='4' &&
            id[i] !='5' &&
            id[i] !='6' &&
            id[i] !='7' &&
            id[i] !='8' &&
            id[i] !='9'
        )
        {
            yyerror("invalid id!\n");
            return 0;
        }
    }
    return 1;
}

// checks if created_at string is valid
int is_valid_date(char* date) {
    if (strlen(date)!=26) {
        return 0;
    }

    if (date[4]!=' ' || date[8]!=' ' || date[11]!=' ' || date[20]!=' ') {
        yyerror("invalid spacing!\n");
        return 0;
    }
    
    if (date[14]!=':' || date[17]!=':') {
        yyerror("invalid time seperators!\n");
        return 0;
    }

    // check day Mon|Tue|Wed|Thu|Fri|Sat|Sun
    if (
        !(date[1] =='M' && date[2] =='o' && date[3] =='n') &&
        !(date[1] =='T' && date[2] =='u' && date[3] =='e') &&
        !(date[1] =='W' && date[2] =='e' && date[3] =='d') &&
        !(date[1] =='T' && date[2] =='h' && date[3] =='u') &&
        !(date[1] =='F' && date[2] =='r' && date[3] =='i') &&
        !(date[1] =='S' && date[2] =='a' && date[3] =='t') &&
        !(date[1] =='S' && date[2] =='u' && date[3] =='n') 
    ) 
    {
        yyerror("invalid day!\n");
        return 0;
    }

    // check month Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec
    if (
        !(date[5] =='J' && date[6] =='a' && date[7] =='n') &&
        !(date[5] =='F' && date[6] =='e' && date[7] =='b') &&
        !(date[5] =='M' && date[6] =='a' && date[7] =='r') &&
        !(date[5] =='A' && date[6] =='p' && date[7] =='r') &&
        !(date[5] =='M' && date[6] =='a' && date[7] =='y') &&
        !(date[5] =='J' && date[6] =='u' && date[7] =='n') &&
        !(date[5] =='J' && date[6] =='u' && date[7] =='l') &&
        !(date[5] =='A' && date[6] =='u' && date[7] =='g') &&
        !(date[5] =='S' && date[6] =='e' && date[7] =='p') &&
        !(date[5] =='O' && date[6] =='c' && date[7] =='t') &&
        !(date[5] =='N' && date[6] =='o' && date[7] =='v') &&
        !(date[5] =='D' && date[6] =='e' && date[7] =='c')
    ) 
    {
        yyerror("invalid month!\n");
        return 0;
    }

    // fprintf (stderr, "%d\n", atoi(date+18));

    int day = atoi(date+9);
    if (day>31 || day < 0) {
        yyerror("invalid day!\n");
        return 0;
    }

    int hour = atoi(date+12);
    if (hour>23 || hour < 0) {
        yyerror("invalid hour!\n");
        return 0;
    }

    int minutes = atoi(date+15);
    if (minutes>59 || minutes < 0) {
        yyerror("invalid minutes!\n");
        return 0;
    }

    int seconds = atoi(date+18);
    if (seconds>59 || seconds < 0) {
        yyerror("invalid seconds!\n");
        return 0;
    }

    int year = atoi(date+21);
    if (year>9999 || year < 0) {
        yyerror("invalid year!\n");
        return 0;
    }

    return 1;
}

// Trims the spaces from a string
char *trim(char *str)
{
    char *end;

    // Trim leading space
    while(isspace((unsigned char)*str)) str++;

    if(*str == 0)  // All spaces?
    return str;

    // Trim trailing space
    end = str + strlen(str) - 1;
    while(end > str && isspace((unsigned char)*end)) end--;

    // Write new null terminator character
    end[1] = '\0';

    return str;
}

// Prints the tweet json
void echo
(
    char* p1,
    char* p2,
    char* p3,
    char* p4,
    char* p5,
    char* p6,
    char* p7,
    char* p8,
    char* p9
)
{
    printf("{\n");
    if (p1[0]!=' ') printf("\t%s\n", p1);
    printf("\t%s,\n", p2);
    if (p3[0]!=' ') printf("\t%s\n", p3);
    printf("\t%s,\n", p4);
    if (p5[0]!=' ') printf("\t%s\n", p5);
    printf("\t%s,\n", p6);
    if (p7[0]!=' ') printf("\t%s\n", p7);
    printf("\t%s", p8);
    if (p9[0]!=' ') printf(",\n\t%s\n", p9);
    else printf("\n");
    printf("}\n");
}

// Prepares user contents
void prepare_user_contents
(
    char *p1,
    char *p2,
    char *p3,
    char *p4,
    char *p5
)
{
    if (p1[0]!=' ') sprintf(m1, "\n\t\t%s\n", p1);
    if (p2[0]!=' ') sprintf(m2, "\n\t\t%s\n", p2);
    if (p3[0]!=' ') sprintf(m3, "\n\t\t%s\n", p3);
    if (p4[0]!=' ') sprintf(m4, "\n\t\t%s\n", p4);
    if (p5[0]!=' ') sprintf(m5, ",\n\t\t%s\n", p5);
}

int main (int argc, char **argv) 
{
    // Check arguments
	  if ( argc < 2 ) {
        printf("Usage: %s <input> \n", argv[0]);
        exit(1);
    }

    // Read from file
    yyin = fopen(argv[1], "r"); 
	
    // Parse
	yyparse(); 

    // Print diagnosis
    if(number_of_errors>0){
        printf("\nFound %d error(s)  \n" , number_of_errors);
    } else {
        printf("\nNo errors\n");
    }

    return number_of_errors;
}
