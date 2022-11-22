/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 5 "cminus.y"


#define YYPARSER

#include "globals.h"
#include "util.h"
#include "scan.h"
#include "parse.h"
#include "symtab.h"

static char* savedName;
static int savedLineNo;
static TreeNode* savedTree;
static int yylex(void);
int yyerror(char *s);
int scopenum = 0;


#line 90 "cminus.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "cminus.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_ELSE = 4,                       /* ELSE  */
  YYSYMBOL_WHILE = 5,                      /* WHILE  */
  YYSYMBOL_RETURN = 6,                     /* RETURN  */
  YYSYMBOL_INT = 7,                        /* INT  */
  YYSYMBOL_VOID = 8,                       /* VOID  */
  YYSYMBOL_ASSIGN = 9,                     /* ASSIGN  */
  YYSYMBOL_EQUALS = 10,                    /* EQUALS  */
  YYSYMBOL_NOT_EQ = 11,                    /* NOT_EQ  */
  YYSYMBOL_GT = 12,                        /* GT  */
  YYSYMBOL_GT_EQ = 13,                     /* GT_EQ  */
  YYSYMBOL_LT = 14,                        /* LT  */
  YYSYMBOL_LT_EQ = 15,                     /* LT_EQ  */
  YYSYMBOL_PLUS = 16,                      /* PLUS  */
  YYSYMBOL_MINUS = 17,                     /* MINUS  */
  YYSYMBOL_TIMES = 18,                     /* TIMES  */
  YYSYMBOL_DIV = 19,                       /* DIV  */
  YYSYMBOL_SEMICOL = 20,                   /* SEMICOL  */
  YYSYMBOL_COMMA = 21,                     /* COMMA  */
  YYSYMBOL_LPAR = 22,                      /* LPAR  */
  YYSYMBOL_RPAR = 23,                      /* RPAR  */
  YYSYMBOL_LBRACK = 24,                    /* LBRACK  */
  YYSYMBOL_RBRACK = 25,                    /* RBRACK  */
  YYSYMBOL_LCURLY = 26,                    /* LCURLY  */
  YYSYMBOL_RCURLY = 27,                    /* RCURLY  */
  YYSYMBOL_NUMBER = 28,                    /* NUMBER  */
  YYSYMBOL_IDENTIFIER = 29,                /* IDENTIFIER  */
  YYSYMBOL_ENDFILE = 30,                   /* ENDFILE  */
  YYSYMBOL_ERROR = 31,                     /* ERROR  */
  YYSYMBOL_YYACCEPT = 32,                  /* $accept  */
  YYSYMBOL_program = 33,                   /* program  */
  YYSYMBOL_decl_list = 34,                 /* decl_list  */
  YYSYMBOL_decl = 35,                      /* decl  */
  YYSYMBOL_var_decl = 36,                  /* var_decl  */
  YYSYMBOL_37_1 = 37,                      /* @1  */
  YYSYMBOL_type_spec = 38,                 /* type_spec  */
  YYSYMBOL_fun_decl = 39,                  /* fun_decl  */
  YYSYMBOL_40_2 = 40,                      /* @2  */
  YYSYMBOL_params = 41,                    /* params  */
  YYSYMBOL_param_list = 42,                /* param_list  */
  YYSYMBOL_param = 43,                     /* param  */
  YYSYMBOL_44_3 = 44,                      /* @3  */
  YYSYMBOL_cmpnd_stmnt = 45,               /* cmpnd_stmnt  */
  YYSYMBOL_loc_decls = 46,                 /* loc_decls  */
  YYSYMBOL_stmnt_list = 47,                /* stmnt_list  */
  YYSYMBOL_statement = 48,                 /* statement  */
  YYSYMBOL_exp_stmnt = 49,                 /* exp_stmnt  */
  YYSYMBOL_selec_stmnt = 50,               /* selec_stmnt  */
  YYSYMBOL_it_stmnt = 51,                  /* it_stmnt  */
  YYSYMBOL_return_stmnt = 52,              /* return_stmnt  */
  YYSYMBOL_expr = 53,                      /* expr  */
  YYSYMBOL_var = 54,                       /* var  */
  YYSYMBOL_55_4 = 55,                      /* @4  */
  YYSYMBOL_simple_expr = 56,               /* simple_expr  */
  YYSYMBOL_relop = 57,                     /* relop  */
  YYSYMBOL_add_expr = 58,                  /* add_expr  */
  YYSYMBOL_addop = 59,                     /* addop  */
  YYSYMBOL_term = 60,                      /* term  */
  YYSYMBOL_mulop = 61,                     /* mulop  */
  YYSYMBOL_factor = 62,                    /* factor  */
  YYSYMBOL_call = 63,                      /* call  */
  YYSYMBOL_64_5 = 64,                      /* @5  */
  YYSYMBOL_args = 65,                      /* args  */
  YYSYMBOL_arg_list = 66                   /* arg_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   100

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  107

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   286


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    48,    48,    54,    65,    68,    70,    73,    81,    80,
      95,    99,   105,   104,   120,   124,   130,   139,   144,   152,
     151,   163,   176,   186,   188,   198,   200,   202,   204,   206,
     208,   211,   213,   216,   222,   230,   237,   239,   245,   251,
     254,   260,   259,   270,   277,   280,   282,   284,   286,   288,
     290,   293,   300,   303,   305,   308,   315,   318,   320,   323,
     325,   327,   329,   336,   335,   347,   350,   352,   361
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IF", "ELSE", "WHILE",
  "RETURN", "INT", "VOID", "ASSIGN", "EQUALS", "NOT_EQ", "GT", "GT_EQ",
  "LT", "LT_EQ", "PLUS", "MINUS", "TIMES", "DIV", "SEMICOL", "COMMA",
  "LPAR", "RPAR", "LBRACK", "RBRACK", "LCURLY", "RCURLY", "NUMBER",
  "IDENTIFIER", "ENDFILE", "ERROR", "$accept", "program", "decl_list",
  "decl", "var_decl", "@1", "type_spec", "fun_decl", "@2", "params",
  "param_list", "param", "@3", "cmpnd_stmnt", "loc_decls", "stmnt_list",
  "statement", "exp_stmnt", "selec_stmnt", "it_stmnt", "return_stmnt",
  "expr", "var", "@4", "simple_expr", "relop", "add_expr", "addop", "term",
  "mulop", "factor", "call", "@5", "args", "arg_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-82)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-64)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      18,   -82,   -82,     6,    18,   -82,   -82,   -18,   -82,   -82,
     -82,    13,   -82,     7,    -6,   -82,    56,    19,    16,    28,
      38,    48,   -82,    50,    49,    45,    18,   -82,    52,   -82,
     -82,   -82,    53,    18,   -82,   -82,    43,     2,    13,    55,
      57,   -19,   -82,    14,   -82,   -82,    36,   -82,   -82,   -82,
     -82,   -82,   -82,    54,    66,   -82,    37,    47,   -82,   -82,
      14,    14,   -82,    60,    58,    59,    62,   -82,    14,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,    14,    14,   -82,
     -82,    14,    63,    64,   -82,   -82,    14,    14,   -82,   -82,
      51,    47,   -82,    12,    12,    65,   -82,    68,    61,    81,
     -82,   -82,   -82,    14,    12,   -82,   -82
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    10,    11,     0,     2,     4,     5,     0,     6,     1,
       3,    12,     7,     0,     0,     8,     0,     0,    11,     0,
       0,    14,    17,     0,    18,     0,     0,     9,     0,    23,
      13,    16,     0,    25,    20,    22,     0,     0,     0,     0,
       0,     0,    32,     0,    21,    62,    40,    27,    24,    26,
      28,    29,    30,     0,    60,    39,    44,    52,    56,    61,
       0,     0,    36,     0,     0,     0,     0,    31,     0,    45,
      46,    50,    48,    49,    47,    53,    54,     0,     0,    57,
      58,     0,     0,     0,    37,    59,     0,    66,    38,    60,
      43,    51,    55,     0,     0,     0,    68,     0,    65,    33,
      35,    42,    64,     0,     0,    67,    34
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -82,   -82,   -82,    84,    67,   -82,   -12,   -82,   -82,   -82,
     -82,    69,   -82,    71,   -82,   -82,   -81,   -82,   -82,   -82,
     -82,   -41,   -22,   -82,   -82,   -82,    15,   -82,    11,   -82,
      17,   -82,   -82,   -82,   -82
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,     6,    17,     7,     8,    14,    20,
      21,    22,    28,    47,    33,    37,    48,    49,    50,    51,
      52,    53,    54,    65,    55,    77,    56,    78,    57,    81,
      58,    59,    66,    97,    98
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      63,    62,    64,    43,    19,    39,     9,    40,    41,    45,
      46,    11,    99,   100,    19,    39,    16,    40,    41,    82,
      83,    36,    42,   106,    43,     1,     2,    88,    29,    44,
      45,    46,    42,    12,    43,    15,    43,    13,    29,   -15,
      45,    46,    45,    46,    23,    95,    96,    69,    70,    71,
      72,    73,    74,    75,    76,    89,    89,    24,   -63,    89,
     -41,    25,   105,     1,    18,    79,    80,    75,    76,    26,
      27,    29,    38,   -19,    67,    68,    32,    60,    34,    61,
      84,    85,   103,    86,    87,   104,    93,    94,    10,    91,
     101,   102,    90,     0,     0,    31,    30,     0,    92,     0,
      35
};

static const yytype_int8 yycheck[] =
{
      41,    20,    43,    22,    16,     3,     0,     5,     6,    28,
      29,    29,    93,    94,    26,     3,    22,     5,     6,    60,
      61,    33,    20,   104,    22,     7,     8,    68,    26,    27,
      28,    29,    20,    20,    22,    28,    22,    24,    26,    23,
      28,    29,    28,    29,    25,    86,    87,    10,    11,    12,
      13,    14,    15,    16,    17,    77,    78,    29,    22,    81,
      24,    23,   103,     7,     8,    18,    19,    16,    17,    21,
      20,    26,    29,    24,    20,     9,    24,    22,    25,    22,
      20,    23,    21,    24,    22,     4,    23,    23,     4,    78,
      25,    23,    77,    -1,    -1,    26,    25,    -1,    81,    -1,
      33
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,     8,    33,    34,    35,    36,    38,    39,     0,
      35,    29,    20,    24,    40,    28,    22,    37,     8,    38,
      41,    42,    43,    25,    29,    23,    21,    20,    44,    26,
      45,    43,    24,    46,    25,    36,    38,    47,    29,     3,
       5,     6,    20,    22,    27,    28,    29,    45,    48,    49,
      50,    51,    52,    53,    54,    56,    58,    60,    62,    63,
      22,    22,    20,    53,    53,    55,    64,    20,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    57,    59,    18,
      19,    61,    53,    53,    20,    23,    24,    22,    53,    54,
      58,    60,    62,    23,    23,    53,    53,    65,    66,    48,
      48,    25,    23,    21,     4,    53,    48
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    33,    34,    34,    35,    35,    36,    37,    36,
      38,    38,    40,    39,    41,    41,    42,    42,    43,    44,
      43,    45,    46,    46,    47,    47,    48,    48,    48,    48,
      48,    49,    49,    50,    50,    51,    52,    52,    53,    53,
      54,    55,    54,    56,    56,    57,    57,    57,    57,    57,
      57,    58,    58,    59,    59,    60,    60,    61,    61,    62,
      62,    62,    62,    64,    63,    65,    65,    66,    66
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     0,     7,
       1,     1,     0,     7,     1,     1,     3,     1,     2,     0,
       5,     4,     2,     0,     2,     0,     1,     1,     1,     1,
       1,     2,     1,     5,     7,     5,     2,     3,     3,     1,
       1,     0,     5,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     3,     1,     1,     1,     3,
       1,     1,     1,     0,     5,     1,     0,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* program: decl_list  */
#line 49 "cminus.y"
            { 
				savedTree = (yyvsp[0].tnode);
				YYACCEPT;
			}
#line 1217 "cminus.tab.c"
    break;

  case 3: /* decl_list: decl_list decl  */
#line 55 "cminus.y"
                {
                    TreeNode* t = (yyvsp[-1].tnode);
                    if (t != NULL) {
                        while (t->sibling != NULL) t = t->sibling;
                        t->sibling = (yyvsp[0].tnode);
                        (yyval.tnode) = (yyvsp[-1].tnode);
                    } else {
                        (yyval.tnode) = (yyvsp[0].tnode);
                    }
                }
#line 1232 "cminus.tab.c"
    break;

  case 4: /* decl_list: decl  */
#line 66 "cminus.y"
                { (yyval.tnode) = (yyvsp[0].tnode); }
#line 1238 "cminus.tab.c"
    break;

  case 5: /* decl: var_decl  */
#line 69 "cminus.y"
        { (yyval.tnode) = (yyvsp[0].tnode); }
#line 1244 "cminus.tab.c"
    break;

  case 6: /* decl: fun_decl  */
#line 71 "cminus.y"
        { (yyval.tnode) = (yyvsp[0].tnode); }
#line 1250 "cminus.tab.c"
    break;

  case 7: /* var_decl: type_spec IDENTIFIER SEMICOL  */
#line 74 "cminus.y"
            {
                (yyval.tnode) = newStmntNode(VarDecl);
                (yyval.tnode)->attr.op = (yyvsp[-2].tok);
                (yyval.tnode)->child[0] = newExpNode(Id);
                (yyval.tnode)->child[0]->attr.name = copyString(lastId);                
            }
#line 1261 "cminus.tab.c"
    break;

  case 8: /* @1: %empty  */
#line 81 "cminus.y"
            {
                (yyval.tnode) = newStmntNode(VarDecl);
                (yyval.tnode)->attr.op = (yyvsp[-3].tok);
                (yyval.tnode)->child[0] = newExpNode(Id);
                (yyval.tnode)->child[0]->attr.name = copyString(lastId);
                (yyval.tnode)->child[0]->child[0] = newExpNode(Const);
                (yyval.tnode)->child[0]->child[0]->attr.val = atoi(tokenString);
                
            }
#line 1275 "cminus.tab.c"
    break;

  case 9: /* var_decl: type_spec IDENTIFIER LBRACK NUMBER @1 RBRACK SEMICOL  */
#line 91 "cminus.y"
            {
                (yyval.tnode) = (yyvsp[-2].tnode);
            }
#line 1283 "cminus.tab.c"
    break;

  case 10: /* type_spec: INT  */
#line 96 "cminus.y"
            {
                (yyval.tok) = INT;
            }
#line 1291 "cminus.tab.c"
    break;

  case 11: /* type_spec: VOID  */
#line 100 "cminus.y"
            {
                (yyval.tok) = VOID;
            }
#line 1299 "cminus.tab.c"
    break;

  case 12: /* @2: %empty  */
#line 105 "cminus.y"
                        { 
                (yyval.tnode) = newStmntNode(FunDecl);
			    (yyval.tnode)->attr.op = (yyvsp[-1].tok);
			    (yyval.tnode)->child[0] = newExpNode(Id);
			    (yyval.tnode)->child[0]->attr.name = copyString(lastId);
         		insert_function_record(lastId, scopenum);
                scopenum++;
			}
#line 1312 "cminus.tab.c"
    break;

  case 13: /* fun_decl: type_spec IDENTIFIER @2 LPAR params RPAR cmpnd_stmnt  */
#line 114 "cminus.y"
                        { 
                (yyval.tnode) = (yyvsp[-4].tnode);
			    (yyval.tnode)->child[1] = (yyvsp[-2].tnode);
			    (yyval.tnode)->child[2] = (yyvsp[0].tnode);
      		}
#line 1322 "cminus.tab.c"
    break;

  case 14: /* params: param_list  */
#line 121 "cminus.y"
                        { 
                (yyval.tnode) = (yyvsp[0].tnode);
			}
#line 1330 "cminus.tab.c"
    break;

  case 15: /* params: VOID  */
#line 125 "cminus.y"
                        { 
                (yyval.tnode) = NULL;
			    //printf("  PARAM LIST:\tVOID");
			}
#line 1339 "cminus.tab.c"
    break;

  case 16: /* param_list: param_list COMMA param  */
#line 131 "cminus.y"
                        { 
                TreeNode* t = (yyvsp[-2].tnode);
                if (t != NULL) {
			        while (t->sibling != NULL) t = t->sibling;
                    t->sibling = (yyvsp[0].tnode);
                    (yyval.tnode) = (yyvsp[-2].tnode);
			    } else (yyval.tnode) = (yyvsp[0].tnode);
			}
#line 1352 "cminus.tab.c"
    break;

  case 17: /* param_list: param  */
#line 140 "cminus.y"
                        { 
                (yyval.tnode) = (yyvsp[0].tnode); 
            }
#line 1360 "cminus.tab.c"
    break;

  case 18: /* param: type_spec IDENTIFIER  */
#line 145 "cminus.y"
                        { 
                (yyval.tnode) = newStmntNode(VarDecl);
			    (yyval.tnode)->attr.op = (yyvsp[-1].tok);
			    (yyval.tnode)->child[0] = newExpNode(Id);
			    (yyval.tnode)->child[0]->attr.name = copyString(lastId);
			}
#line 1371 "cminus.tab.c"
    break;

  case 19: /* @3: %empty  */
#line 152 "cminus.y"
                        { 
                (yyval.tnode) = newStmntNode(VarDecl);
			    (yyval.tnode)->attr.op = (yyvsp[-1].tok);
			    (yyval.tnode)->child[0] = newExpNode(Id);
			    (yyval.tnode)->child[0]->attr.name = (char *) copyString(lastId);
			}
#line 1382 "cminus.tab.c"
    break;

  case 20: /* param: type_spec IDENTIFIER @3 LBRACK RBRACK  */
#line 159 "cminus.y"
                        { 
                (yyval.tnode) = (yyvsp[-2].tnode); 
            }
#line 1390 "cminus.tab.c"
    break;

  case 21: /* cmpnd_stmnt: LCURLY loc_decls stmnt_list RCURLY  */
#line 164 "cminus.y"
                        {
			    TreeNode* t = (yyvsp[-2].tnode);
                if (t != NULL)
                {
                    while (t->sibling != NULL) t = t->sibling;
                    t->sibling = (yyvsp[-1].tnode);
                    (yyval.tnode) = (yyvsp[-2].tnode);
			    }
                else (yyval.tnode) = (yyvsp[-1].tnode);
                scopenum--;
			}
#line 1406 "cminus.tab.c"
    break;

  case 22: /* loc_decls: loc_decls var_decl  */
#line 177 "cminus.y"
                        { 
                TreeNode* t = (yyvsp[-1].tnode);
                if (t != NULL) {
			        while (t->sibling != NULL) t = t->sibling;
                    t->sibling = (yyvsp[0].tnode);
                    (yyval.tnode) = (yyvsp[-1].tnode);
			    } else (yyval.tnode) = (yyvsp[0].tnode);
			}
#line 1419 "cminus.tab.c"
    break;

  case 23: /* loc_decls: %empty  */
#line 186 "cminus.y"
                          { (yyval.tnode) = NULL; }
#line 1425 "cminus.tab.c"
    break;

  case 24: /* stmnt_list: stmnt_list statement  */
#line 189 "cminus.y"
                        { 
                TreeNode* t = (yyvsp[-1].tnode);
                if (t != NULL){
			        while (t->sibling != NULL) t = t->sibling;
                    t->sibling = (yyvsp[0].tnode);
                    (yyval.tnode) = (yyvsp[-1].tnode);
			    } else (yyval.tnode) = (yyvsp[0].tnode);
			}
#line 1438 "cminus.tab.c"
    break;

  case 25: /* stmnt_list: %empty  */
#line 198 "cminus.y"
                          { (yyval.tnode) = NULL; }
#line 1444 "cminus.tab.c"
    break;

  case 26: /* statement: exp_stmnt  */
#line 201 "cminus.y"
                        { (yyval.tnode) = (yyvsp[0].tnode); }
#line 1450 "cminus.tab.c"
    break;

  case 27: /* statement: cmpnd_stmnt  */
#line 203 "cminus.y"
                        { (yyval.tnode) = (yyvsp[0].tnode); }
#line 1456 "cminus.tab.c"
    break;

  case 28: /* statement: selec_stmnt  */
#line 205 "cminus.y"
                        { (yyval.tnode) = (yyvsp[0].tnode); }
#line 1462 "cminus.tab.c"
    break;

  case 29: /* statement: it_stmnt  */
#line 207 "cminus.y"
                        { (yyval.tnode) = (yyvsp[0].tnode); }
#line 1468 "cminus.tab.c"
    break;

  case 30: /* statement: return_stmnt  */
#line 209 "cminus.y"
                        { (yyval.tnode) = (yyvsp[0].tnode); }
#line 1474 "cminus.tab.c"
    break;

  case 31: /* exp_stmnt: expr SEMICOL  */
#line 212 "cminus.y"
                          { (yyval.tnode) = (yyvsp[-1].tnode); }
#line 1480 "cminus.tab.c"
    break;

  case 32: /* exp_stmnt: SEMICOL  */
#line 214 "cminus.y"
                          { (yyval.tnode) = NULL; }
#line 1486 "cminus.tab.c"
    break;

  case 33: /* selec_stmnt: IF LPAR expr RPAR statement  */
#line 217 "cminus.y"
                        { 
                (yyval.tnode) = newStmntNode(If);
			    (yyval.tnode)->child[0] = (yyvsp[-2].tnode);
			    (yyval.tnode)->child[1] = (yyvsp[0].tnode);
			}
#line 1496 "cminus.tab.c"
    break;

  case 34: /* selec_stmnt: IF LPAR expr RPAR statement ELSE statement  */
#line 223 "cminus.y"
                        { 
                (yyval.tnode) = newStmntNode(If);
			    (yyval.tnode)->child[0] = (yyvsp[-4].tnode);
			    (yyval.tnode)->child[1] = (yyvsp[-2].tnode);
			    (yyval.tnode)->child[2] = (yyvsp[0].tnode);
			}
#line 1507 "cminus.tab.c"
    break;

  case 35: /* it_stmnt: WHILE LPAR expr RPAR statement  */
#line 231 "cminus.y"
                        { 
                (yyval.tnode) = newStmntNode(While);
			    (yyval.tnode)->child[0] = (yyvsp[-2].tnode);
			    (yyval.tnode)->child[1] = (yyvsp[0].tnode);
			}
#line 1517 "cminus.tab.c"
    break;

  case 36: /* return_stmnt: RETURN SEMICOL  */
#line 238 "cminus.y"
                          { (yyval.tnode) = newStmntNode(Return); }
#line 1523 "cminus.tab.c"
    break;

  case 37: /* return_stmnt: RETURN expr SEMICOL  */
#line 240 "cminus.y"
                        { 
                (yyval.tnode) = newStmntNode(Return);
			    (yyval.tnode)->child[0] = (yyvsp[-1].tnode);
			}
#line 1532 "cminus.tab.c"
    break;

  case 38: /* expr: var ASSIGN expr  */
#line 246 "cminus.y"
                        { 
                (yyval.tnode) = newStmntNode(Assign);
			    (yyval.tnode)->child[0] = (yyvsp[-2].tnode);
			    (yyval.tnode)->child[1] = (yyvsp[0].tnode);
			}
#line 1542 "cminus.tab.c"
    break;

  case 39: /* expr: simple_expr  */
#line 252 "cminus.y"
                          { (yyval.tnode) = (yyvsp[0].tnode); }
#line 1548 "cminus.tab.c"
    break;

  case 40: /* var: IDENTIFIER  */
#line 255 "cminus.y"
                        { 
                (yyval.tnode) = newExpNode(Id);
			    (yyval.tnode)->attr.name = (char *) copyString(lastId);
			}
#line 1557 "cminus.tab.c"
    break;

  case 41: /* @4: %empty  */
#line 260 "cminus.y"
                        { 
                (yyval.tnode) = newExpNode(Id);
			    (yyval.tnode)->attr.name = copyString(lastId);
			}
#line 1566 "cminus.tab.c"
    break;

  case 42: /* var: IDENTIFIER @4 LBRACK expr RBRACK  */
#line 265 "cminus.y"
                        { 
                (yyval.tnode) = (yyvsp[-3].tnode);
			    (yyval.tnode)->child[0] = (yyvsp[-1].tnode);
			}
#line 1575 "cminus.tab.c"
    break;

  case 43: /* simple_expr: add_expr relop add_expr  */
#line 271 "cminus.y"
                        { 
                (yyval.tnode) = newExpNode(Op);
			    (yyval.tnode)->attr.op = (yyvsp[-1].tok);
			    (yyval.tnode)->child[0] = (yyvsp[-2].tnode);
			    (yyval.tnode)->child[1] = (yyvsp[0].tnode);
			}
#line 1586 "cminus.tab.c"
    break;

  case 44: /* simple_expr: add_expr  */
#line 278 "cminus.y"
                        { (yyval.tnode) = (yyvsp[0].tnode); }
#line 1592 "cminus.tab.c"
    break;

  case 45: /* relop: EQUALS  */
#line 281 "cminus.y"
        { (yyval.tok) = EQUALS; }
#line 1598 "cminus.tab.c"
    break;

  case 46: /* relop: NOT_EQ  */
#line 283 "cminus.y"
        { (yyval.tok) = NOT_EQ; }
#line 1604 "cminus.tab.c"
    break;

  case 47: /* relop: LT_EQ  */
#line 285 "cminus.y"
        { (yyval.tok) = LT_EQ; }
#line 1610 "cminus.tab.c"
    break;

  case 48: /* relop: GT_EQ  */
#line 287 "cminus.y"
        { (yyval.tok) = GT_EQ; }
#line 1616 "cminus.tab.c"
    break;

  case 49: /* relop: LT  */
#line 289 "cminus.y"
        { (yyval.tok) = LT; }
#line 1622 "cminus.tab.c"
    break;

  case 50: /* relop: GT  */
#line 291 "cminus.y"
        { (yyval.tok) = GT; }
#line 1628 "cminus.tab.c"
    break;

  case 51: /* add_expr: add_expr addop term  */
#line 294 "cminus.y"
                        { 
                (yyval.tnode) = newExpNode(Op);
			    (yyval.tnode)->attr.op = (yyvsp[-1].tok);
			    (yyval.tnode)->child[0] = (yyvsp[-2].tnode);
			    (yyval.tnode)->child[2] = (yyvsp[0].tnode);
			}
#line 1639 "cminus.tab.c"
    break;

  case 52: /* add_expr: term  */
#line 301 "cminus.y"
                        { (yyval.tnode) = (yyvsp[0].tnode); }
#line 1645 "cminus.tab.c"
    break;

  case 53: /* addop: PLUS  */
#line 304 "cminus.y"
                { (yyval.tok) = PLUS; }
#line 1651 "cminus.tab.c"
    break;

  case 54: /* addop: MINUS  */
#line 306 "cminus.y"
                { (yyval.tok) = MINUS; }
#line 1657 "cminus.tab.c"
    break;

  case 55: /* term: term mulop factor  */
#line 309 "cminus.y"
                        { 
                (yyval.tnode) = newExpNode(Op);
			    (yyval.tnode)->attr.op = (yyvsp[-1].tok);
			    (yyval.tnode)->child[0] = (yyvsp[-2].tnode);
			    (yyval.tnode)->child[2] = (yyvsp[0].tnode);
			}
#line 1668 "cminus.tab.c"
    break;

  case 56: /* term: factor  */
#line 316 "cminus.y"
                        { (yyval.tnode) = (yyvsp[0].tnode); }
#line 1674 "cminus.tab.c"
    break;

  case 57: /* mulop: TIMES  */
#line 319 "cminus.y"
                { (yyval.tok) = TIMES; }
#line 1680 "cminus.tab.c"
    break;

  case 58: /* mulop: DIV  */
#line 321 "cminus.y"
                { (yyval.tok) = DIV; }
#line 1686 "cminus.tab.c"
    break;

  case 59: /* factor: LPAR expr RPAR  */
#line 324 "cminus.y"
                        { (yyval.tnode) = (yyvsp[-1].tnode); }
#line 1692 "cminus.tab.c"
    break;

  case 60: /* factor: var  */
#line 326 "cminus.y"
                        { (yyval.tnode) = (yyvsp[0].tnode); }
#line 1698 "cminus.tab.c"
    break;

  case 61: /* factor: call  */
#line 328 "cminus.y"
                        { (yyval.tnode) = (yyvsp[0].tnode); }
#line 1704 "cminus.tab.c"
    break;

  case 62: /* factor: NUMBER  */
#line 330 "cminus.y"
                        { 
                (yyval.tnode) = newExpNode(Const);
			    (yyval.tnode)->attr.val = atoi(tokenString);
			}
#line 1713 "cminus.tab.c"
    break;

  case 63: /* @5: %empty  */
#line 336 "cminus.y"
                        { 
                (yyval.tnode) = newStmntNode(Call);
			    (yyval.tnode)->child[0] = newExpNode(Id);
			    (yyval.tnode)->child[0]->attr.name = copyString(lastId);
			}
#line 1723 "cminus.tab.c"
    break;

  case 64: /* call: IDENTIFIER @5 LPAR args RPAR  */
#line 342 "cminus.y"
                        { 
                (yyval.tnode) = (yyvsp[-3].tnode);
			    (yyval.tnode)->child[1] = (yyvsp[-1].tnode);
			}
#line 1732 "cminus.tab.c"
    break;

  case 65: /* args: arg_list  */
#line 348 "cminus.y"
                { (yyval.tnode) = (yyvsp[0].tnode); }
#line 1738 "cminus.tab.c"
    break;

  case 66: /* args: %empty  */
#line 350 "cminus.y"
                { (yyval.tnode) = NULL; }
#line 1744 "cminus.tab.c"
    break;

  case 67: /* arg_list: arg_list COMMA expr  */
#line 353 "cminus.y"
                        { 
                TreeNode * t = (yyvsp[-2].tnode);
                if (t != NULL) {
			        while (t->sibling != NULL) t = t->sibling;
                    t->sibling = (yyvsp[0].tnode);
                    (yyval.tnode) = (yyvsp[-2].tnode);
			    } else (yyval.tnode) = (yyvsp[0].tnode);
			}
#line 1757 "cminus.tab.c"
    break;

  case 68: /* arg_list: expr  */
#line 362 "cminus.y"
                        { (yyval.tnode) = (yyvsp[0].tnode); }
#line 1763 "cminus.tab.c"
    break;


#line 1767 "cminus.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 364 "cminus.y"


int yyerror(char * message) {
    fprintf(listing,"Syntax error at line %d: %s\n",lineno,message);
	fprintf(listing,"Current token: ");
	printToken(yychar,tokenString);
	error = TRUE;
	return 0;
}

static int yylex(void) {
	return getToken();
}

TreeNode* parse(void) {
	yyparse();
	return savedTree;
}
