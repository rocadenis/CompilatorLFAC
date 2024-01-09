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
#line 1 "comp.y"

#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "main.h"  
extern FILE* yyin;
extern char* yytext;
extern int yylineno;

#line 83 "comp.tab.c"

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

#include "comp.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_VOID = 3,                       /* VOID  */
  YYSYMBOL_CLASA = 4,                      /* CLASA  */
  YYSYMBOL_CONSTANT = 5,                   /* CONSTANT  */
  YYSYMBOL_PUBLIC = 6,                     /* PUBLIC  */
  YYSYMBOL_PRIVAT = 7,                     /* PRIVAT  */
  YYSYMBOL_DECLARATION_SECTION = 8,        /* DECLARATION_SECTION  */
  YYSYMBOL_CUSTOMTYPES_SECTION = 9,        /* CUSTOMTYPES_SECTION  */
  YYSYMBOL_MAIN_SECTION = 10,              /* MAIN_SECTION  */
  YYSYMBOL_ASSIGN = 11,                    /* ASSIGN  */
  YYSYMBOL_PARANTEZAPATDESCHISA = 12,      /* PARANTEZAPATDESCHISA  */
  YYSYMBOL_PARANTEZAPATINCHISA = 13,       /* PARANTEZAPATINCHISA  */
  YYSYMBOL_PARANTEZAROTDESCHISA = 14,      /* PARANTEZAROTDESCHISA  */
  YYSYMBOL_PARANTEZAROTINCHISA = 15,       /* PARANTEZAROTINCHISA  */
  YYSYMBOL_ACOLDESCHISA = 16,              /* ACOLDESCHISA  */
  YYSYMBOL_ACOLINCHISA = 17,               /* ACOLINCHISA  */
  YYSYMBOL_PUNCTSIVIRGULA = 18,            /* PUNCTSIVIRGULA  */
  YYSYMBOL_VIRGULA = 19,                   /* VIRGULA  */
  YYSYMBOL_PUNCT = 20,                     /* PUNCT  */
  YYSYMBOL_IFSTMT = 21,                    /* IFSTMT  */
  YYSYMBOL_ELSESTMT = 22,                  /* ELSESTMT  */
  YYSYMBOL_FORSTMT = 23,                   /* FORSTMT  */
  YYSYMBOL_DOSTMT = 24,                    /* DOSTMT  */
  YYSYMBOL_WHILESTMT = 25,                 /* WHILESTMT  */
  YYSYMBOL_RETURNSTMT = 26,                /* RETURNSTMT  */
  YYSYMBOL_PRINT = 27,                     /* PRINT  */
  YYSYMBOL_BOOLEAN_AND = 28,               /* BOOLEAN_AND  */
  YYSYMBOL_BOOLEAN_OR = 29,                /* BOOLEAN_OR  */
  YYSYMBOL_BOOLEAN_NOT = 30,               /* BOOLEAN_NOT  */
  YYSYMBOL_BOOLEAN_LT = 31,                /* BOOLEAN_LT  */
  YYSYMBOL_BOOLEAN_LTE = 32,               /* BOOLEAN_LTE  */
  YYSYMBOL_BOOLEAN_GTE = 33,               /* BOOLEAN_GTE  */
  YYSYMBOL_BOOLEAN_EQ = 34,                /* BOOLEAN_EQ  */
  YYSYMBOL_BOOLEAN_NEQ = 35,               /* BOOLEAN_NEQ  */
  YYSYMBOL_ARITHMETIC_INCREMENT = 36,      /* ARITHMETIC_INCREMENT  */
  YYSYMBOL_ARITHMETIC_DECREMENT = 37,      /* ARITHMETIC_DECREMENT  */
  YYSYMBOL_ARITHMETIC_ADD = 38,            /* ARITHMETIC_ADD  */
  YYSYMBOL_ARITHMETIC_SUB = 39,            /* ARITHMETIC_SUB  */
  YYSYMBOL_ARITHMETIC_DIV = 40,            /* ARITHMETIC_DIV  */
  YYSYMBOL_BOOLEAN_GT = 41,                /* BOOLEAN_GT  */
  YYSYMBOL_ARITHMETIC_MUL = 42,            /* ARITHMETIC_MUL  */
  YYSYMBOL_ARITHMETIC_POW = 43,            /* ARITHMETIC_POW  */
  YYSYMBOL_INTEGER = 44,                   /* INTEGER  */
  YYSYMBOL_FLOAT = 45,                     /* FLOAT  */
  YYSYMBOL_CHAR = 46,                      /* CHAR  */
  YYSYMBOL_STRING = 47,                    /* STRING  */
  YYSYMBOL_BOOL = 48,                      /* BOOL  */
  YYSYMBOL_BOOL_TRUE = 49,                 /* BOOL_TRUE  */
  YYSYMBOL_BOOL_FALSE = 50,                /* BOOL_FALSE  */
  YYSYMBOL_IDENTIFIER = 51,                /* IDENTIFIER  */
  YYSYMBOL_NUME_ARBITRAR = 52,             /* NUME_ARBITRAR  */
  YYSYMBOL_NUMAR = 53,                     /* NUMAR  */
  YYSYMBOL_NUMAR_FLOAT = 54,               /* NUMAR_FLOAT  */
  YYSYMBOL_QUOTES_STRING = 55,             /* QUOTES_STRING  */
  YYSYMBOL_CARACTER = 56,                  /* CARACTER  */
  YYSYMBOL_MAX = 57,                       /* MAX  */
  YYSYMBOL_MIN = 58,                       /* MIN  */
  YYSYMBOL_LEN = 59,                       /* LEN  */
  YYSYMBOL_GCD = 60,                       /* GCD  */
  YYSYMBOL_RANDOMINT = 61,                 /* RANDOMINT  */
  YYSYMBOL_YYACCEPT = 62,                  /* $accept  */
  YYSYMBOL_begin_program = 63,             /* begin_program  */
  YYSYMBOL_code_structure = 64,            /* code_structure  */
  YYSYMBOL_custom_scope = 65,              /* custom_scope  */
  YYSYMBOL_declare_object = 66,            /* declare_object  */
  YYSYMBOL_67_1 = 67,                      /* $@1  */
  YYSYMBOL_object_block = 68,              /* object_block  */
  YYSYMBOL_object_code = 69,               /* object_code  */
  YYSYMBOL_declare_function = 70,          /* declare_function  */
  YYSYMBOL_71_2 = 71,                      /* $@2  */
  YYSYMBOL_72_3 = 72,                      /* $@3  */
  YYSYMBOL_function_argument_list = 73,    /* function_argument_list  */
  YYSYMBOL_global_scope = 74,              /* global_scope  */
  YYSYMBOL_75_4 = 75,                      /* $@4  */
  YYSYMBOL_main_scope = 76,                /* main_scope  */
  YYSYMBOL_77_5 = 77,                      /* $@5  */
  YYSYMBOL_code_block = 78,                /* code_block  */
  YYSYMBOL_code_sequence = 79,             /* code_sequence  */
  YYSYMBOL_stmt_instructions = 80,         /* stmt_instructions  */
  YYSYMBOL_stmt_code_format = 81,          /* stmt_code_format  */
  YYSYMBOL_available_types = 82,           /* available_types  */
  YYSYMBOL_available_values = 83,          /* available_values  */
  YYSYMBOL_function_call = 84,             /* function_call  */
  YYSYMBOL_function_call_args_list = 85,   /* function_call_args_list  */
  YYSYMBOL_allowed_variables = 86,         /* allowed_variables  */
  YYSYMBOL_87_6 = 87,                      /* $@6  */
  YYSYMBOL_arithmetic_expression = 88,     /* arithmetic_expression  */
  YYSYMBOL_predefined_functions = 89,      /* predefined_functions  */
  YYSYMBOL_pdef_max = 90,                  /* pdef_max  */
  YYSYMBOL_pdef_min = 91,                  /* pdef_min  */
  YYSYMBOL_pdef_len = 92,                  /* pdef_len  */
  YYSYMBOL_pdef_gcd = 93,                  /* pdef_gcd  */
  YYSYMBOL_pdef_random = 94,               /* pdef_random  */
  YYSYMBOL_boolean_expression = 95,        /* boolean_expression  */
  YYSYMBOL_value_list = 96,                /* value_list  */
  YYSYMBOL_97_7 = 97,                      /* $@7  */
  YYSYMBOL_assign_value = 98,              /* assign_value  */
  YYSYMBOL_99_8 = 99,                      /* $@8  */
  YYSYMBOL_100_9 = 100,                    /* $@9  */
  YYSYMBOL_initialize_class = 101,         /* initialize_class  */
  YYSYMBOL_declarations = 102,             /* declarations  */
  YYSYMBOL_103_10 = 103,                   /* $@10  */
  YYSYMBOL_declaration = 104,              /* declaration  */
  YYSYMBOL_declare_only = 105,             /* declare_only  */
  YYSYMBOL_declare_and_assign = 106,       /* declare_and_assign  */
  YYSYMBOL_print_function = 107            /* print_function  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   484

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  249

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   316


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    46,    46,    49,    50,    51,    52,    55,    56,    57,
      58,    62,    62,    64,    65,    68,    69,    70,    74,    74,
      74,    78,    79,    82,    82,    83,    87,    87,    90,    91,
      95,    96,    97,    98,    99,   100,   101,   104,   105,   106,
     107,   108,   111,   113,   114,   115,   116,   117,   122,   123,
     124,   129,   130,   134,   135,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   149,   150,   151,   156,   157,   158,
     159,   160,   161,   162,   165,   166,   167,   168,   169,   172,
     174,   176,   179,   181,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   197,   197,   198,   202,   203,   204,
     204,   204,   207,   211,   212,   212,   215,   216,   221,   222,
     227,   228,   230
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
  "\"end of file\"", "error", "\"invalid token\"", "VOID", "CLASA",
  "CONSTANT", "PUBLIC", "PRIVAT", "DECLARATION_SECTION",
  "CUSTOMTYPES_SECTION", "MAIN_SECTION", "ASSIGN", "PARANTEZAPATDESCHISA",
  "PARANTEZAPATINCHISA", "PARANTEZAROTDESCHISA", "PARANTEZAROTINCHISA",
  "ACOLDESCHISA", "ACOLINCHISA", "PUNCTSIVIRGULA", "VIRGULA", "PUNCT",
  "IFSTMT", "ELSESTMT", "FORSTMT", "DOSTMT", "WHILESTMT", "RETURNSTMT",
  "PRINT", "BOOLEAN_AND", "BOOLEAN_OR", "BOOLEAN_NOT", "BOOLEAN_LT",
  "BOOLEAN_LTE", "BOOLEAN_GTE", "BOOLEAN_EQ", "BOOLEAN_NEQ",
  "ARITHMETIC_INCREMENT", "ARITHMETIC_DECREMENT", "ARITHMETIC_ADD",
  "ARITHMETIC_SUB", "ARITHMETIC_DIV", "BOOLEAN_GT", "ARITHMETIC_MUL",
  "ARITHMETIC_POW", "INTEGER", "FLOAT", "CHAR", "STRING", "BOOL",
  "BOOL_TRUE", "BOOL_FALSE", "IDENTIFIER", "NUME_ARBITRAR", "NUMAR",
  "NUMAR_FLOAT", "QUOTES_STRING", "CARACTER", "MAX", "MIN", "LEN", "GCD",
  "RANDOMINT", "$accept", "begin_program", "code_structure",
  "custom_scope", "declare_object", "$@1", "object_block", "object_code",
  "declare_function", "$@2", "$@3", "function_argument_list",
  "global_scope", "$@4", "main_scope", "$@5", "code_block",
  "code_sequence", "stmt_instructions", "stmt_code_format",
  "available_types", "available_values", "function_call",
  "function_call_args_list", "allowed_variables", "$@6",
  "arithmetic_expression", "predefined_functions", "pdef_max", "pdef_min",
  "pdef_len", "pdef_gcd", "pdef_random", "boolean_expression",
  "value_list", "$@7", "assign_value", "$@8", "$@9", "initialize_class",
  "declarations", "$@10", "declaration", "declare_only",
  "declare_and_assign", "print_function", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-115)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     135,  -115,   125,  -115,    20,  -115,   108,   340,  -115,   143,
      -3,  -115,  -115,  -115,  -115,  -115,  -115,  -115,    15,   296,
    -115,  -115,  -115,  -115,  -115,   108,  -115,    36,   116,  -115,
    -115,  -115,   117,  -115,  -115,    75,    84,   111,   123,   126,
      33,    -4,   132,   136,   144,   146,   148,   296,  -115,  -115,
     121,   145,  -115,  -115,  -115,  -115,  -115,   147,   149,   163,
     164,   131,  -115,    27,  -115,  -115,   133,   150,   189,   141,
     296,   159,   189,   139,    25,   142,   134,    25,  -115,    25,
      25,    25,    25,   181,  -115,  -115,  -115,  -115,  -115,  -115,
    -115,  -115,    25,   184,   331,   131,   275,   189,  -115,  -115,
      14,   186,  -115,  -115,  -115,  -115,  -115,  -115,    71,  -115,
     395,    80,   180,   207,   187,   410,   183,     5,  -115,  -115,
     201,   206,   170,  -115,    21,   203,   204,   212,   210,  -115,
    -115,   222,   143,   143,   345,  -115,  -115,    31,   185,  -115,
     245,  -115,   182,   134,   275,   275,   275,   275,   275,   111,
     189,   189,   189,   189,   189,   189,   189,   189,  -115,   189,
    -115,   189,   111,   275,   189,    77,   226,    25,  -115,  -115,
      25,    25,    25,  -115,    25,   242,   243,   244,   253,  -115,
    -115,   131,   251,  -115,   257,   221,    90,    90,  -115,  -115,
    -115,   256,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,
     443,   425,  -115,   379,   367,  -115,    25,    86,   263,  -115,
     265,   266,   267,  -115,  -115,  -115,  -115,   270,  -115,   277,
    -115,  -115,   111,   141,  -115,  -115,   278,  -115,  -115,    25,
    -115,  -115,  -115,   109,    25,   296,  -115,  -115,   279,  -115,
    -115,  -115,    25,  -115,   252,   111,  -115,  -115,  -115
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    23,     0,    26,     0,     2,     0,     0,     6,     0,
       0,    43,    44,    45,    46,    47,     7,     8,     0,     0,
       1,     9,    10,     5,   104,     0,     4,     0,     0,   103,
     106,   107,     0,    11,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,    28,    35,
       0,     0,    74,    75,    76,    77,    78,     0,     0,     0,
       0,     0,     3,   108,    25,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    99,     0,   102,     0,
       0,     0,     0,     0,    29,    34,    36,    31,    32,    30,
      33,   105,     0,     0,     0,     0,     0,     0,    59,    60,
      61,     0,    55,    56,    57,    58,    66,    67,    93,    65,
       0,     0,     0,     0,     0,     0,     0,     0,    97,    48,
       0,     0,     0,    53,     0,     0,     0,     0,     0,    83,
     110,   109,     0,     0,     0,    13,    17,     0,     0,    21,
       0,    92,     0,    63,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    99,     0,
      42,     0,     0,     0,     0,     0,     0,     0,   100,    51,
       0,     0,     0,    81,     0,     0,     0,     0,     0,    14,
      19,     0,   108,    73,     0,     0,    68,    69,    70,    72,
      71,    37,    84,    85,    86,    87,    89,    90,    91,    88,
       0,     0,    40,     0,     0,    49,     0,     0,     0,    54,
       0,     0,     0,    94,    15,    16,    12,     0,    22,     0,
      62,    64,     0,     0,    39,   112,     0,    98,    52,     0,
      79,    80,    82,     0,     0,     0,   109,    38,     0,    50,
     101,   111,     0,    95,     0,     0,    96,    20,    41
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -115,  -115,  -115,   285,   291,  -115,  -115,   161,    13,  -115,
    -115,  -115,  -115,  -115,    16,  -115,   -67,   -45,  -115,  -114,
       2,   -49,   -19,   138,   -68,  -115,   -75,   -18,  -115,  -115,
    -115,  -115,  -115,    54,  -115,  -115,   -64,  -115,  -115,  -115,
       9,  -115,   241,   -88,  -115,  -115
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,    21,    66,   134,   135,    22,    67,
     217,   137,     7,     9,     8,    19,    47,    48,    49,    71,
      27,   123,   106,   124,   107,   185,   108,   109,    52,    53,
      54,    55,    56,   110,   233,   234,    57,   122,   208,    58,
      59,    61,    29,    30,    31,    60
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      50,    51,    84,   113,    18,   112,   119,   139,    18,   119,
      77,   119,   119,   119,   119,    17,    28,   164,    32,    96,
      20,   140,    23,    26,   119,   118,   142,    18,    50,    51,
     125,   126,   127,   128,   143,   191,   169,   117,    92,    93,
     170,    62,   165,   130,    74,    75,   180,    78,   202,    33,
     181,    50,    51,    76,    98,    99,   100,   101,   102,   103,
     104,   105,    42,    43,    44,    45,    46,    34,    84,   186,
     187,   188,   189,   190,    98,    99,   100,   101,   102,   103,
     104,   105,    42,    43,    44,    45,    46,    63,   203,    68,
     205,    74,    75,   218,    50,    51,    18,   138,    69,   119,
     158,   228,   119,   119,   119,   170,   119,   136,   237,   144,
     145,   146,    10,   147,   148,   144,   145,   146,     3,   147,
     148,   209,   210,   211,   241,   212,   115,    70,   242,    10,
     146,   248,   147,   148,    64,    65,    18,    72,   119,    85,
      73,   176,   177,     1,     2,     3,    79,   136,    24,    94,
      80,   141,    11,    12,    13,    14,    15,   227,    81,   238,
      82,   119,    83,    86,    95,    87,   119,    88,   244,    11,
      12,    13,    14,    15,   119,    11,    12,    13,    14,    15,
     240,    89,    90,   138,   114,   243,   121,    11,    12,    13,
      14,    15,   111,   246,   116,   120,   129,   131,   159,    84,
      77,   161,   163,    96,   192,   193,   194,   195,   196,   197,
     198,   199,    24,   200,   166,   201,    50,    51,   204,    97,
     167,   168,   171,   172,   160,    50,    51,   173,    35,   174,
      36,    37,    38,   175,    39,   184,   182,   206,    98,    99,
     100,   101,   102,   103,   104,   105,    42,    43,    44,    45,
      46,    11,    12,    13,    14,    15,   213,    24,    40,    41,
     183,   214,   215,   219,    42,    43,    44,    45,    46,   247,
     220,   216,   221,    35,   229,    36,    37,    38,   222,    39,
     230,   231,   232,   144,   145,   146,   235,   147,   148,    96,
     236,   239,    25,    16,   245,   179,    11,    12,    13,    14,
      15,    24,    91,    40,    41,   207,     0,     0,     0,    42,
      43,    44,    45,    46,     0,     0,     0,    35,     0,    36,
      37,    38,     0,    39,    98,    99,   100,   101,   102,   103,
     104,   105,    42,    43,    44,    45,    46,   132,   133,     0,
      11,    12,    13,    14,    15,    24,     0,    40,    41,     2,
       3,   132,   133,    42,    43,    44,    45,    46,     0,     0,
       0,     0,   178,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,    13,    14,    15,
     226,     0,     0,     0,    11,    12,    13,    14,    15,    11,
      12,    13,    14,    15,   225,   150,   151,     0,   152,   153,
     154,   155,   156,     0,     0,     0,     0,     0,   157,     0,
     149,     0,     0,     0,     0,     0,     0,   144,   145,   146,
       0,   147,   148,   150,   151,   162,   152,   153,   154,   155,
     156,     0,     0,     0,     0,     0,   157,     0,   150,   151,
     224,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,   157,     0,   150,   151,     0,   152,   153,   154,   155,
     156,   223,     0,     0,     0,     0,   157,     0,     0,     0,
       0,   150,   151,     0,   152,   153,   154,   155,   156,     0,
       0,     0,     0,     0,   157
};

static const yytype_int16 yycheck[] =
{
      19,    19,    47,    70,     2,    69,    74,    95,     6,    77,
      14,    79,    80,    81,    82,     2,     7,    12,     9,    14,
       0,    96,     6,     7,    92,    74,    12,    25,    47,    47,
      79,    80,    81,    82,    20,   149,    15,    12,    11,    12,
      19,    25,   117,    92,    11,    12,    15,    51,   162,    52,
      19,    70,    70,    20,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    52,   113,   144,
     145,   146,   147,   148,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    51,   163,    14,
      13,    11,    12,   181,   113,   113,    94,    95,    14,   167,
      20,    15,   170,   171,   172,    19,   174,    94,   222,    38,
      39,    40,     4,    42,    43,    38,    39,    40,    10,    42,
      43,   170,   171,   172,    15,   174,    72,    16,    19,     4,
      40,   245,    42,    43,    18,    18,   134,    14,   206,    18,
      14,   132,   133,     8,     9,    10,    14,   134,     5,    16,
      14,    97,    44,    45,    46,    47,    48,   206,    14,   223,
      14,   229,    14,    18,    14,    18,   234,    18,   235,    44,
      45,    46,    47,    48,   242,    44,    45,    46,    47,    48,
     229,    18,    18,   181,    25,   234,    52,    44,    45,    46,
      47,    48,    51,   242,    55,    53,    15,    13,    18,   244,
      14,    14,    19,    14,   150,   151,   152,   153,   154,   155,
     156,   157,     5,   159,    13,   161,   235,   235,   164,    30,
      14,    51,    19,    19,    17,   244,   244,    15,    21,    19,
      23,    24,    25,    11,    27,    53,    51,    11,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    44,    45,    46,    47,    48,    14,     5,    51,    52,
      15,    18,    18,    12,    57,    58,    59,    60,    61,    17,
      13,    18,    51,    21,    11,    23,    24,    25,    22,    27,
      15,    15,    15,    38,    39,    40,    16,    42,    43,    14,
      13,    13,     7,     2,    15,   134,    44,    45,    46,    47,
      48,     5,    61,    51,    52,   167,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    -1,    -1,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,     6,     7,    -1,
      44,    45,    46,    47,    48,     5,    -1,    51,    52,     9,
      10,     6,     7,    57,    58,    59,    60,    61,    -1,    -1,
      -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    46,    47,    48,
      13,    -1,    -1,    -1,    44,    45,    46,    47,    48,    44,
      45,    46,    47,    48,    15,    28,    29,    -1,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      -1,    42,    43,    28,    29,    15,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    41,    -1,    28,    29,
      15,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    28,    29,    -1,    31,    32,    33,    34,
      35,    18,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    28,    29,    -1,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    41
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     8,     9,    10,    63,    64,    65,    74,    76,    75,
       4,    44,    45,    46,    47,    48,    66,    70,    82,    77,
       0,    66,    70,    76,     5,    65,    76,    82,   102,   104,
     105,   106,   102,    52,    52,    21,    23,    24,    25,    27,
      51,    52,    57,    58,    59,    60,    61,    78,    79,    80,
      84,    89,    90,    91,    92,    93,    94,    98,   101,   102,
     107,   103,    76,    51,    18,    18,    67,    71,    14,    14,
      16,    81,    14,    14,    11,    12,    20,    14,    51,    14,
      14,    14,    14,    14,    79,    18,    18,    18,    18,    18,
      18,   104,    11,    12,    16,    14,    14,    30,    49,    50,
      51,    52,    53,    54,    55,    56,    84,    86,    88,    89,
      95,    51,    98,    78,    25,    95,    55,    12,    83,    86,
      53,    52,    99,    83,    85,    83,    83,    83,    83,    15,
      83,    13,     6,     7,    68,    69,    70,    73,    82,   105,
      88,    95,    12,    20,    38,    39,    40,    42,    43,    15,
      28,    29,    31,    32,    33,    34,    35,    41,    20,    18,
      17,    14,    15,    19,    12,    88,    13,    14,    51,    15,
      19,    19,    19,    15,    19,    11,   102,   102,    17,    69,
      15,    19,    51,    15,    53,    87,    88,    88,    88,    88,
      88,    81,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    81,    88,    95,    13,    11,    85,   100,    83,
      83,    83,    83,    14,    18,    18,    18,    72,   105,    12,
      13,    51,    22,    18,    15,    15,    13,    83,    15,    11,
      15,    15,    15,    96,    97,    16,    13,    81,    98,    13,
      83,    15,    19,    83,    78,    15,    83,    17,    81
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    64,    64,    64,    64,    65,    65,    65,
      65,    67,    66,    68,    68,    69,    69,    69,    71,    72,
      70,    73,    73,    75,    74,    74,    77,    76,    78,    78,
      79,    79,    79,    79,    79,    79,    79,    80,    80,    80,
      80,    80,    81,    82,    82,    82,    82,    82,    83,    83,
      83,    84,    84,    85,    85,    86,    86,    86,    86,    86,
      86,    86,    86,    87,    86,    86,    86,    88,    88,    88,
      88,    88,    88,    88,    89,    89,    89,    89,    89,    90,
      91,    92,    93,    94,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    97,    96,    96,    98,    98,    99,
     100,    98,   101,   102,   103,   102,   104,   104,   105,   105,
     106,   106,   107
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     2,     2,     1,     2,     2,     2,
       2,     0,     7,     1,     2,     3,     3,     1,     0,     0,
      10,     1,     3,     0,     4,     3,     0,     3,     1,     2,
       2,     2,     2,     2,     2,     1,     2,     5,     7,     6,
       5,     9,     3,     1,     1,     1,     1,     1,     1,     3,
       5,     4,     6,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     4,     0,     4,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     6,
       6,     4,     6,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     1,     0,     2,     3,     3,     6,     0,
       0,     7,     2,     1,     0,     3,     1,     1,     2,     4,
       4,     8,     6
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
  case 2: /* begin_program: code_structure  */
#line 46 "comp.y"
                              {printf("Code syntax is correct.\n"); }
#line 1401 "comp.tab.c"
    break;

  case 4: /* code_structure: global_scope main_scope  */
#line 50 "comp.y"
                                  {salut();}
#line 1407 "comp.tab.c"
    break;

  case 11: /* $@1: %empty  */
#line 62 "comp.y"
                                    {DeclareType((yyvsp[0].value)); ClassContext((yyvsp[0].value));}
#line 1413 "comp.tab.c"
    break;

  case 12: /* declare_object: CLASA NUME_ARBITRAR $@1 ACOLDESCHISA object_block ACOLINCHISA PUNCTSIVIRGULA  */
#line 62 "comp.y"
                                                                                                                              {ExitContext();}
#line 1419 "comp.tab.c"
    break;

  case 18: /* $@2: %empty  */
#line 74 "comp.y"
                                                {FunctionContext((yyvsp[0].value));}
#line 1425 "comp.tab.c"
    break;

  case 19: /* $@3: %empty  */
#line 74 "comp.y"
                                                                                                                                       {DeclareFunction((yyvsp[-5].value), (yyvsp[-4].value), (yyvsp[-1].num));}
#line 1431 "comp.tab.c"
    break;

  case 20: /* declare_function: available_types NUME_ARBITRAR $@2 PARANTEZAROTDESCHISA function_argument_list PARANTEZAROTINCHISA $@3 ACOLDESCHISA code_block ACOLINCHISA  */
#line 74 "comp.y"
                                                                                                                                                                                                          { ExitContext(); }
#line 1437 "comp.tab.c"
    break;

  case 21: /* function_argument_list: declare_only  */
#line 78 "comp.y"
                                     { (yyval.num) = 1; }
#line 1443 "comp.tab.c"
    break;

  case 22: /* function_argument_list: function_argument_list VIRGULA declare_only  */
#line 79 "comp.y"
                                                       { (yyval.num)++; }
#line 1449 "comp.tab.c"
    break;

  case 23: /* $@4: %empty  */
#line 82 "comp.y"
                                  { SwitchContext("global"); }
#line 1455 "comp.tab.c"
    break;

  case 26: /* $@5: %empty  */
#line 87 "comp.y"
                         { SwitchContext("main"); }
#line 1461 "comp.tab.c"
    break;

  case 43: /* available_types: INTEGER  */
#line 113 "comp.y"
                         { (yyval.value) = (yyvsp[0].value); }
#line 1467 "comp.tab.c"
    break;

  case 44: /* available_types: FLOAT  */
#line 114 "comp.y"
                { (yyval.value) = (yyvsp[0].value); }
#line 1473 "comp.tab.c"
    break;

  case 45: /* available_types: CHAR  */
#line 115 "comp.y"
               { (yyval.value) = (yyvsp[0].value); }
#line 1479 "comp.tab.c"
    break;

  case 46: /* available_types: STRING  */
#line 116 "comp.y"
                 { (yyval.value) = (yyvsp[0].value); }
#line 1485 "comp.tab.c"
    break;

  case 47: /* available_types: BOOL  */
#line 117 "comp.y"
               { (yyval.value) = (yyvsp[0].value); }
#line 1491 "comp.tab.c"
    break;

  case 48: /* available_values: allowed_variables  */
#line 122 "comp.y"
                                    { (yyval.value) = (yyvsp[0].value); }
#line 1497 "comp.tab.c"
    break;

  case 49: /* available_values: PARANTEZAPATDESCHISA arithmetic_expression PARANTEZAPATINCHISA  */
#line 123 "comp.y"
                                                                         { (yyval.value) = EvalAST((yyvsp[-1].ASTNODE)); }
#line 1503 "comp.tab.c"
    break;

  case 50: /* available_values: PARANTEZAPATDESCHISA PARANTEZAPATDESCHISA boolean_expression PARANTEZAPATINCHISA PARANTEZAPATINCHISA  */
#line 124 "comp.y"
                                                                                                               { (yyval.value) = (yyvsp[-2].value); }
#line 1509 "comp.tab.c"
    break;

  case 51: /* function_call: NUME_ARBITRAR PARANTEZAROTDESCHISA function_call_args_list PARANTEZAROTINCHISA  */
#line 129 "comp.y"
                                                                                              { (yyval.num) = FunctionCall((yyvsp[-3].value), (yyvsp[-1].arr)); }
#line 1515 "comp.tab.c"
    break;

  case 52: /* function_call: IDENTIFIER PUNCT NUME_ARBITRAR PARANTEZAROTDESCHISA function_call_args_list PARANTEZAROTINCHISA  */
#line 130 "comp.y"
                                                                                                          { SwitchToContextOfIdentifer((yyvsp[-5].value)); (yyval.num) = FunctionCall((yyvsp[-3].value), (yyvsp[-1].arr)); ExitContext(); }
#line 1521 "comp.tab.c"
    break;

  case 53: /* function_call_args_list: available_values  */
#line 134 "comp.y"
                                          { (yyval.arr) = InitializeCallStackArray(); PushValueToCallStack(&(yyval.arr), (yyvsp[0].value)); }
#line 1527 "comp.tab.c"
    break;

  case 54: /* function_call_args_list: function_call_args_list VIRGULA available_values  */
#line 135 "comp.y"
                                                           { PushValueToCallStack(&(yyval.arr), (yyvsp[0].value)); }
#line 1533 "comp.tab.c"
    break;

  case 55: /* allowed_variables: NUMAR  */
#line 141 "comp.y"
                         { (yyval.value) = (yyvsp[0].value); }
#line 1539 "comp.tab.c"
    break;

  case 56: /* allowed_variables: NUMAR_FLOAT  */
#line 142 "comp.y"
                      { (yyval.value) = (yyvsp[0].value); }
#line 1545 "comp.tab.c"
    break;

  case 57: /* allowed_variables: QUOTES_STRING  */
#line 143 "comp.y"
                        { (yyval.value) = (yyvsp[0].value); }
#line 1551 "comp.tab.c"
    break;

  case 58: /* allowed_variables: CARACTER  */
#line 144 "comp.y"
                   { (yyval.value) = (yyvsp[0].value); }
#line 1557 "comp.tab.c"
    break;

  case 59: /* allowed_variables: BOOL_TRUE  */
#line 145 "comp.y"
                    { (yyval.value) = (yyvsp[0].value); }
#line 1563 "comp.tab.c"
    break;

  case 60: /* allowed_variables: BOOL_FALSE  */
#line 146 "comp.y"
                     { (yyval.value) = (yyvsp[0].value); }
#line 1569 "comp.tab.c"
    break;

  case 61: /* allowed_variables: IDENTIFIER  */
#line 147 "comp.y"
                      { (yyval.value) = GetValueFromIdentifier((yyvsp[0].value),0); }
#line 1575 "comp.tab.c"
    break;

  case 62: /* allowed_variables: IDENTIFIER PARANTEZAPATDESCHISA NUMAR PARANTEZAPATINCHISA  */
#line 148 "comp.y"
                                                                    { (yyval.value) = GetValueFromIdentifier((yyvsp[-3].value),atoi((yyvsp[-1].value))); }
#line 1581 "comp.tab.c"
    break;

  case 63: /* $@6: %empty  */
#line 149 "comp.y"
                           {SwitchToContextOfIdentifer((yyvsp[-1].value));}
#line 1587 "comp.tab.c"
    break;

  case 64: /* allowed_variables: IDENTIFIER PUNCT $@6 IDENTIFIER  */
#line 149 "comp.y"
                                                                        { (yyval.value) = GetValueFromIdentifier((yyvsp[0].value),0); ExitContext();}
#line 1593 "comp.tab.c"
    break;

  case 65: /* allowed_variables: predefined_functions  */
#line 150 "comp.y"
                               { (yyval.value) = (yyvsp[0].value); }
#line 1599 "comp.tab.c"
    break;

  case 66: /* allowed_variables: function_call  */
#line 151 "comp.y"
                        { (yyval.value) = GetValueFromFunctionCall((yyvsp[0].num)); }
#line 1605 "comp.tab.c"
    break;

  case 67: /* arithmetic_expression: allowed_variables  */
#line 156 "comp.y"
                                         { (yyval.ASTNODE) = BuildAst(NewNode((yyvsp[0].value)), NULL, NULL); }
#line 1611 "comp.tab.c"
    break;

  case 68: /* arithmetic_expression: arithmetic_expression ARITHMETIC_ADD arithmetic_expression  */
#line 157 "comp.y"
                                                                     { (yyval.ASTNODE) = BuildAst(NewNode("+"), (yyvsp[-2].ASTNODE), (yyvsp[0].ASTNODE)); }
#line 1617 "comp.tab.c"
    break;

  case 69: /* arithmetic_expression: arithmetic_expression ARITHMETIC_SUB arithmetic_expression  */
#line 158 "comp.y"
                                                                     { (yyval.ASTNODE) = BuildAst(NewNode("-"), (yyvsp[-2].ASTNODE), (yyvsp[0].ASTNODE)); }
#line 1623 "comp.tab.c"
    break;

  case 70: /* arithmetic_expression: arithmetic_expression ARITHMETIC_DIV arithmetic_expression  */
#line 159 "comp.y"
                                                                     { (yyval.ASTNODE) = BuildAst(NewNode("/"), (yyvsp[-2].ASTNODE), (yyvsp[0].ASTNODE)); }
#line 1629 "comp.tab.c"
    break;

  case 71: /* arithmetic_expression: arithmetic_expression ARITHMETIC_POW arithmetic_expression  */
#line 160 "comp.y"
                                                                     { (yyval.ASTNODE) = BuildAst(NewNode("**"), (yyvsp[-2].ASTNODE), (yyvsp[0].ASTNODE)); }
#line 1635 "comp.tab.c"
    break;

  case 72: /* arithmetic_expression: arithmetic_expression ARITHMETIC_MUL arithmetic_expression  */
#line 161 "comp.y"
                                                                     { (yyval.ASTNODE) = BuildAst(NewNode("*"), (yyvsp[-2].ASTNODE), (yyvsp[0].ASTNODE)); }
#line 1641 "comp.tab.c"
    break;

  case 73: /* arithmetic_expression: PARANTEZAROTDESCHISA arithmetic_expression PARANTEZAROTINCHISA  */
#line 162 "comp.y"
                                                                         { (yyval.ASTNODE) = BuildAst(NewNode(EvalAST((yyvsp[-1].ASTNODE))), NULL, NULL); }
#line 1647 "comp.tab.c"
    break;

  case 74: /* predefined_functions: pdef_max  */
#line 165 "comp.y"
                               { (yyval.value) = (yyvsp[0].value); }
#line 1653 "comp.tab.c"
    break;

  case 75: /* predefined_functions: pdef_min  */
#line 166 "comp.y"
                   { (yyval.value) = (yyvsp[0].value); }
#line 1659 "comp.tab.c"
    break;

  case 76: /* predefined_functions: pdef_len  */
#line 167 "comp.y"
                   { (yyval.value) = (yyvsp[0].value); }
#line 1665 "comp.tab.c"
    break;

  case 77: /* predefined_functions: pdef_gcd  */
#line 168 "comp.y"
                   { (yyval.value) = (yyvsp[0].value); }
#line 1671 "comp.tab.c"
    break;

  case 78: /* predefined_functions: pdef_random  */
#line 169 "comp.y"
                      { (yyval.value) = (yyvsp[0].value); }
#line 1677 "comp.tab.c"
    break;

  case 79: /* pdef_max: MAX PARANTEZAROTDESCHISA available_values VIRGULA available_values PARANTEZAROTINCHISA  */
#line 172 "comp.y"
                                                                                                 { (yyval.value) = predefined_max((yyvsp[-3].value),(yyvsp[-1].value)); }
#line 1683 "comp.tab.c"
    break;

  case 80: /* pdef_min: MIN PARANTEZAROTDESCHISA available_values VIRGULA available_values PARANTEZAROTINCHISA  */
#line 174 "comp.y"
                                                                                                 { (yyval.value) = predefined_min((yyvsp[-3].value),(yyvsp[-1].value)); }
#line 1689 "comp.tab.c"
    break;

  case 81: /* pdef_len: LEN PARANTEZAROTDESCHISA available_values PARANTEZAROTINCHISA  */
#line 176 "comp.y"
                                                                        { (yyval.value) = predefined_len((yyvsp[-1].value)); }
#line 1695 "comp.tab.c"
    break;

  case 82: /* pdef_gcd: GCD PARANTEZAROTDESCHISA available_values VIRGULA available_values PARANTEZAROTINCHISA  */
#line 179 "comp.y"
                                                                                                 {(yyval.value) = predefined_gcd((yyvsp[-3].value), (yyvsp[-1].value)); }
#line 1701 "comp.tab.c"
    break;

  case 83: /* pdef_random: RANDOMINT PARANTEZAROTDESCHISA PARANTEZAROTINCHISA  */
#line 181 "comp.y"
                                                                {(yyval.value) = predefined_random(); }
#line 1707 "comp.tab.c"
    break;

  case 84: /* boolean_expression: boolean_expression BOOLEAN_AND boolean_expression  */
#line 184 "comp.y"
                                                                      {(yyval.value) = "0"; }
#line 1713 "comp.tab.c"
    break;

  case 85: /* boolean_expression: boolean_expression BOOLEAN_OR boolean_expression  */
#line 185 "comp.y"
                                                           {(yyval.value) = "0"; }
#line 1719 "comp.tab.c"
    break;

  case 86: /* boolean_expression: boolean_expression BOOLEAN_LT boolean_expression  */
#line 186 "comp.y"
                                                           {(yyval.value) = "0"; }
#line 1725 "comp.tab.c"
    break;

  case 87: /* boolean_expression: boolean_expression BOOLEAN_LTE boolean_expression  */
#line 187 "comp.y"
                                                            {(yyval.value) = "0"; }
#line 1731 "comp.tab.c"
    break;

  case 88: /* boolean_expression: boolean_expression BOOLEAN_GT boolean_expression  */
#line 188 "comp.y"
                                                           {(yyval.value) = "0"; }
#line 1737 "comp.tab.c"
    break;

  case 89: /* boolean_expression: boolean_expression BOOLEAN_GTE boolean_expression  */
#line 189 "comp.y"
                                                            {(yyval.value) = "0"; }
#line 1743 "comp.tab.c"
    break;

  case 90: /* boolean_expression: boolean_expression BOOLEAN_EQ boolean_expression  */
#line 190 "comp.y"
                                                           {(yyval.value) = "0"; }
#line 1749 "comp.tab.c"
    break;

  case 91: /* boolean_expression: boolean_expression BOOLEAN_NEQ boolean_expression  */
#line 191 "comp.y"
                                                            {(yyval.value) = "0"; }
#line 1755 "comp.tab.c"
    break;

  case 92: /* boolean_expression: BOOLEAN_NOT boolean_expression  */
#line 192 "comp.y"
                                         {(yyval.value) = "0"; }
#line 1761 "comp.tab.c"
    break;

  case 93: /* boolean_expression: arithmetic_expression  */
#line 193 "comp.y"
                                { (yyval.value) = EvalAST((yyvsp[0].ASTNODE)); }
#line 1767 "comp.tab.c"
    break;

  case 94: /* $@7: %empty  */
#line 197 "comp.y"
            {InitializeArray();}
#line 1773 "comp.tab.c"
    break;

  case 95: /* value_list: $@7 available_values  */
#line 197 "comp.y"
                                                  { PushElementInArray((yyvsp[0].value)); }
#line 1779 "comp.tab.c"
    break;

  case 96: /* value_list: value_list VIRGULA available_values  */
#line 198 "comp.y"
                                               { PushElementInArray((yyvsp[0].value)); }
#line 1785 "comp.tab.c"
    break;

  case 97: /* assign_value: IDENTIFIER ASSIGN available_values  */
#line 202 "comp.y"
                                                 { AssignValue((yyvsp[-2].value), (yyvsp[0].value), 0); }
#line 1791 "comp.tab.c"
    break;

  case 98: /* assign_value: IDENTIFIER PARANTEZAPATDESCHISA NUMAR PARANTEZAPATINCHISA ASSIGN available_values  */
#line 203 "comp.y"
                                                                                            { AssignValue((yyvsp[-5].value), (yyvsp[0].value), atoi((yyvsp[-3].value))); }
#line 1797 "comp.tab.c"
    break;

  case 99: /* $@8: %empty  */
#line 204 "comp.y"
                           {SwitchToContextOfIdentifer((yyvsp[-1].value));}
#line 1803 "comp.tab.c"
    break;

  case 100: /* $@9: %empty  */
#line 204 "comp.y"
                                                                        { ExitContext();}
#line 1809 "comp.tab.c"
    break;

  case 101: /* assign_value: IDENTIFIER PUNCT $@8 IDENTIFIER $@9 ASSIGN available_values  */
#line 204 "comp.y"
                                                                                                                  { SwitchToContextOfIdentifer((yyvsp[-6].value)); AssignValue((yyvsp[-3].value), (yyvsp[0].value), 0); ExitContext(); }
#line 1815 "comp.tab.c"
    break;

  case 102: /* initialize_class: NUME_ARBITRAR IDENTIFIER  */
#line 207 "comp.y"
                                           { DeclareClass((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1821 "comp.tab.c"
    break;

  case 104: /* $@10: %empty  */
#line 212 "comp.y"
                   {EnterConstant(); }
#line 1827 "comp.tab.c"
    break;

  case 105: /* declarations: CONSTANT $@10 declaration  */
#line 212 "comp.y"
                                                   {LeaveConstant();}
#line 1833 "comp.tab.c"
    break;

  case 108: /* declare_only: available_types IDENTIFIER  */
#line 221 "comp.y"
                                         { DeclareVariable((yyvsp[-1].value), (yyvsp[0].value), "", false); }
#line 1839 "comp.tab.c"
    break;

  case 109: /* declare_only: available_types IDENTIFIER PARANTEZAPATDESCHISA PARANTEZAPATINCHISA  */
#line 222 "comp.y"
                                                                              { DeclareArray((yyvsp[-3].value), (yyvsp[-2].value), false); }
#line 1845 "comp.tab.c"
    break;

  case 110: /* declare_and_assign: available_types IDENTIFIER ASSIGN available_values  */
#line 227 "comp.y"
                                                                       { DeclareVariable((yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value), true); }
#line 1851 "comp.tab.c"
    break;

  case 111: /* declare_and_assign: available_types IDENTIFIER PARANTEZAPATDESCHISA PARANTEZAPATINCHISA ASSIGN PARANTEZAROTDESCHISA value_list PARANTEZAROTINCHISA  */
#line 228 "comp.y"
                                                                                                                                         { DeclareArray((yyvsp[-7].value), (yyvsp[-6].value), true); }
#line 1857 "comp.tab.c"
    break;

  case 112: /* print_function: PRINT PARANTEZAROTDESCHISA QUOTES_STRING VIRGULA arithmetic_expression PARANTEZAROTINCHISA  */
#line 230 "comp.y"
                                                                                                           {PrintFunction((yyvsp[-3].value), EvalAST((yyvsp[-1].ASTNODE))); }
#line 1863 "comp.tab.c"
    break;


#line 1867 "comp.tab.c"

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

#line 232 "comp.y"


void yyerror(const char * s){
     printf("Compile error at line: %d\nError: %s\n",yylineno, s);
     exit(1);
}

int main(int argc, char** argv){
     yyin=fopen(argv[1],"r");
     yyparse();

    FILE* variableTable = fopen("tabels/symbol_table.txt", "w");
    DumpObjectsToFile(variableTable);

    FILE* functionTable = fopen("tabels/symbol_table_functions.txt", "w");
    DumpFunctionsToFile(functionTable);

return 0;
} 
