/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse         zendparse
#define yylex           zendlex
#define yyerror         zenderror
#define yylval          zendlval
#define yychar          zendchar
#define yydebug         zenddebug
#define yynerrs         zendnerrs


/* Copy the first part of user declarations.  */


/*
   +----------------------------------------------------------------------+
   | Zend Engine                                                          |
   +----------------------------------------------------------------------+
   | Copyright (c) 1998-2011 Zend Technologies Ltd. (http://www.zend.com) |
   +----------------------------------------------------------------------+
   | This source file is subject to version 2.00 of the Zend license,     |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.zend.com/license/2_00.txt.                                |
   | If you did not receive a copy of the Zend license and are unable to  |
   | obtain it through the world-wide-web, please send a note to          |
   | license@zend.com so we can mail you a copy immediately.              |
   +----------------------------------------------------------------------+
   | Authors: Andi Gutmans <andi@zend.com>                                |
   |          Zeev Suraski <zeev@zend.com>                                |
   +----------------------------------------------------------------------+
*/

/* $Id: zend_language_parser.y 318823 2011-11-06 13:25:45Z felipe $ */

/*
 * LALR shift/reduce conflicts and how they are resolved:
 *
 * - 2 shift/reduce conflicts due to the dangling elseif/else ambiguity. Solved by shift.
 *
 */


#include "zend_compile.h"
#include "zend.h"
#include "zend_list.h"
#include "zend_globals.h"
#include "zend_API.h"
#include "zend_constants.h"

#define YYSIZE_T size_t
#define yytnamerr zend_yytnamerr
static YYSIZE_T zend_yytnamerr(char*, const char*);

#define YYERROR_VERBOSE
#define YYSTYPE znode
#ifdef ZTS
# define YYPARSE_PARAM tsrm_ls
# define YYLEX_PARAM tsrm_ls
#endif





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
     END = 0,
     T_REQUIRE_ONCE = 258,
     T_REQUIRE = 259,
     T_EVAL = 260,
     T_INCLUDE_ONCE = 261,
     T_INCLUDE = 262,
     T_LOGICAL_OR = 263,
     T_LOGICAL_XOR = 264,
     T_LOGICAL_AND = 265,
     T_PRINT = 266,
     T_SR_EQUAL = 267,
     T_SL_EQUAL = 268,
     T_XOR_EQUAL = 269,
     T_OR_EQUAL = 270,
     T_AND_EQUAL = 271,
     T_MOD_EQUAL = 272,
     T_CONCAT_EQUAL = 273,
     T_DIV_EQUAL = 274,
     T_MUL_EQUAL = 275,
     T_MINUS_EQUAL = 276,
     T_PLUS_EQUAL = 277,
     T_BOOLEAN_OR = 278,
     T_BOOLEAN_AND = 279,
     T_IS_NOT_IDENTICAL = 280,
     T_IS_IDENTICAL = 281,
     T_IS_NOT_EQUAL = 282,
     T_IS_EQUAL = 283,
     T_IS_GREATER_OR_EQUAL = 284,
     T_IS_SMALLER_OR_EQUAL = 285,
     T_SR = 286,
     T_SL = 287,
     T_INSTANCEOF = 288,
     T_UNSET_CAST = 289,
     T_BOOL_CAST = 290,
     T_OBJECT_CAST = 291,
     T_ARRAY_CAST = 292,
     T_STRING_CAST = 293,
     T_DOUBLE_CAST = 294,
     T_INT_CAST = 295,
     T_DEC = 296,
     T_INC = 297,
     T_CLONE = 298,
     T_NEW = 299,
     T_EXIT = 300,
     T_IF = 301,
     T_ELSEIF = 302,
     T_ELSE = 303,
     T_ENDIF = 304,
     T_LNUMBER = 305,
     T_DNUMBER = 306,
     T_STRING = 307,
     T_STRING_VARNAME = 308,
     T_VARIABLE = 309,
     T_NUM_STRING = 310,
     T_INLINE_HTML = 311,
     T_CHARACTER = 312,
     T_BAD_CHARACTER = 313,
     T_ENCAPSED_AND_WHITESPACE = 314,
     T_CONSTANT_ENCAPSED_STRING = 315,
     T_ECHO = 316,
     T_DO = 317,
     T_WHILE = 318,
     T_ENDWHILE = 319,
     T_FOR = 320,
     T_ENDFOR = 321,
     T_FOREACH = 322,
     T_ENDFOREACH = 323,
     T_DECLARE = 324,
     T_ENDDECLARE = 325,
     T_AS = 326,
     T_SWITCH = 327,
     T_ENDSWITCH = 328,
     T_CASE = 329,
     T_DEFAULT = 330,
     T_BREAK = 331,
     T_CONTINUE = 332,
     T_GOTO = 333,
     T_FUNCTION = 334,
     T_CONST = 335,
     T_RETURN = 336,
     T_TRY = 337,
     T_CATCH = 338,
     T_THROW = 339,
     T_USE = 340,
     T_INSTEADOF = 341,
     T_GLOBAL = 342,
     T_PUBLIC = 343,
     T_PROTECTED = 344,
     T_PRIVATE = 345,
     T_FINAL = 346,
     T_ABSTRACT = 347,
     T_STATIC = 348,
     T_VAR = 349,
     T_UNSET = 350,
     T_ISSET = 351,
     T_EMPTY = 352,
     T_HALT_COMPILER = 353,
     T_CLASS = 354,
     T_TRAIT = 355,
     T_INTERFACE = 356,
     T_EXTENDS = 357,
     T_IMPLEMENTS = 358,
     T_OBJECT_OPERATOR = 359,
     T_DOUBLE_ARROW = 360,
     T_LIST = 361,
     T_ARRAY = 362,
     T_CALLABLE = 363,
     T_CLASS_C = 364,
     T_TRAIT_C = 365,
     T_METHOD_C = 366,
     T_FUNC_C = 367,
     T_LINE = 368,
     T_FILE = 369,
     T_COMMENT = 370,
     T_DOC_COMMENT = 371,
     T_OPEN_TAG = 372,
     T_OPEN_TAG_WITH_ECHO = 373,
     T_CLOSE_TAG = 374,
     T_WHITESPACE = 375,
     T_START_HEREDOC = 376,
     T_END_HEREDOC = 377,
     T_DOLLAR_OPEN_CURLY_BRACES = 378,
     T_CURLY_OPEN = 379,
     T_PAAMAYIM_NEKUDOTAYIM = 380,
     T_NAMESPACE = 381,
     T_NS_C = 382,
     T_DIR = 383,
     T_NS_SEPARATOR = 384
   };
#endif
/* Tokens.  */
#define END 0
#define T_REQUIRE_ONCE 258
#define T_REQUIRE 259
#define T_EVAL 260
#define T_INCLUDE_ONCE 261
#define T_INCLUDE 262
#define T_LOGICAL_OR 263
#define T_LOGICAL_XOR 264
#define T_LOGICAL_AND 265
#define T_PRINT 266
#define T_SR_EQUAL 267
#define T_SL_EQUAL 268
#define T_XOR_EQUAL 269
#define T_OR_EQUAL 270
#define T_AND_EQUAL 271
#define T_MOD_EQUAL 272
#define T_CONCAT_EQUAL 273
#define T_DIV_EQUAL 274
#define T_MUL_EQUAL 275
#define T_MINUS_EQUAL 276
#define T_PLUS_EQUAL 277
#define T_BOOLEAN_OR 278
#define T_BOOLEAN_AND 279
#define T_IS_NOT_IDENTICAL 280
#define T_IS_IDENTICAL 281
#define T_IS_NOT_EQUAL 282
#define T_IS_EQUAL 283
#define T_IS_GREATER_OR_EQUAL 284
#define T_IS_SMALLER_OR_EQUAL 285
#define T_SR 286
#define T_SL 287
#define T_INSTANCEOF 288
#define T_UNSET_CAST 289
#define T_BOOL_CAST 290
#define T_OBJECT_CAST 291
#define T_ARRAY_CAST 292
#define T_STRING_CAST 293
#define T_DOUBLE_CAST 294
#define T_INT_CAST 295
#define T_DEC 296
#define T_INC 297
#define T_CLONE 298
#define T_NEW 299
#define T_EXIT 300
#define T_IF 301
#define T_ELSEIF 302
#define T_ELSE 303
#define T_ENDIF 304
#define T_LNUMBER 305
#define T_DNUMBER 306
#define T_STRING 307
#define T_STRING_VARNAME 308
#define T_VARIABLE 309
#define T_NUM_STRING 310
#define T_INLINE_HTML 311
#define T_CHARACTER 312
#define T_BAD_CHARACTER 313
#define T_ENCAPSED_AND_WHITESPACE 314
#define T_CONSTANT_ENCAPSED_STRING 315
#define T_ECHO 316
#define T_DO 317
#define T_WHILE 318
#define T_ENDWHILE 319
#define T_FOR 320
#define T_ENDFOR 321
#define T_FOREACH 322
#define T_ENDFOREACH 323
#define T_DECLARE 324
#define T_ENDDECLARE 325
#define T_AS 326
#define T_SWITCH 327
#define T_ENDSWITCH 328
#define T_CASE 329
#define T_DEFAULT 330
#define T_BREAK 331
#define T_CONTINUE 332
#define T_GOTO 333
#define T_FUNCTION 334
#define T_CONST 335
#define T_RETURN 336
#define T_TRY 337
#define T_CATCH 338
#define T_THROW 339
#define T_USE 340
#define T_INSTEADOF 341
#define T_GLOBAL 342
#define T_PUBLIC 343
#define T_PROTECTED 344
#define T_PRIVATE 345
#define T_FINAL 346
#define T_ABSTRACT 347
#define T_STATIC 348
#define T_VAR 349
#define T_UNSET 350
#define T_ISSET 351
#define T_EMPTY 352
#define T_HALT_COMPILER 353
#define T_CLASS 354
#define T_TRAIT 355
#define T_INTERFACE 356
#define T_EXTENDS 357
#define T_IMPLEMENTS 358
#define T_OBJECT_OPERATOR 359
#define T_DOUBLE_ARROW 360
#define T_LIST 361
#define T_ARRAY 362
#define T_CALLABLE 363
#define T_CLASS_C 364
#define T_TRAIT_C 365
#define T_METHOD_C 366
#define T_FUNC_C 367
#define T_LINE 368
#define T_FILE 369
#define T_COMMENT 370
#define T_DOC_COMMENT 371
#define T_OPEN_TAG 372
#define T_OPEN_TAG_WITH_ECHO 373
#define T_CLOSE_TAG 374
#define T_WHITESPACE 375
#define T_START_HEREDOC 376
#define T_END_HEREDOC 377
#define T_DOLLAR_OPEN_CURLY_BRACES 378
#define T_CURLY_OPEN 379
#define T_PAAMAYIM_NEKUDOTAYIM 380
#define T_NAMESPACE 381
#define T_NS_C 382
#define T_DIR 383
#define T_NS_SEPARATOR 384




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */



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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5351

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  158
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  206
/* YYNRULES -- Number of rules.  */
#define YYNRULES  515
/* YYNRULES -- Number of states.  */
#define YYNSTATES  982

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   384

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,   157,     2,   154,    47,    31,     2,
     149,   150,    45,    42,     8,    43,    44,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    26,   151,
      36,    13,    37,    25,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,   155,    30,     2,   156,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   152,    29,   153,    50,     2,     2,     2,
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
       5,     6,     7,     9,    10,    11,    12,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    27,    28,
      32,    33,    34,    35,    38,    39,    40,    41,    49,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,    10,    11,    13,    17,    19,
      21,    23,    28,    32,    33,    40,    41,    47,    51,    54,
      58,    60,    62,    66,    69,    74,    80,    85,    86,    90,
      91,    93,    95,    97,   102,   104,   107,   111,   112,   113,
     123,   124,   125,   138,   139,   140,   148,   149,   150,   160,
     161,   162,   163,   176,   177,   184,   187,   191,   194,   198,
     201,   205,   209,   213,   217,   221,   223,   226,   232,   233,
     234,   245,   246,   247,   258,   259,   266,   268,   269,   270,
     271,   272,   273,   292,   296,   300,   302,   303,   305,   308,
     309,   310,   321,   323,   327,   329,   331,   333,   334,   336,
     337,   348,   349,   358,   359,   367,   369,   372,   374,   377,
     378,   381,   383,   384,   387,   388,   391,   393,   397,   398,
     401,   403,   406,   408,   413,   415,   420,   422,   427,   431,
     437,   441,   446,   451,   457,   458,   459,   466,   467,   473,
     475,   477,   479,   484,   485,   486,   494,   495,   496,   505,
     506,   509,   510,   514,   516,   517,   520,   524,   530,   535,
     540,   546,   554,   561,   562,   564,   566,   568,   570,   571,
     573,   575,   578,   582,   586,   591,   595,   597,   599,   602,
     607,   611,   617,   619,   623,   626,   627,   628,   633,   636,
     638,   639,   649,   653,   655,   659,   661,   665,   666,   668,
     670,   673,   676,   679,   683,   685,   689,   691,   693,   697,
     702,   706,   707,   709,   711,   715,   717,   719,   720,   722,
     724,   727,   729,   731,   733,   735,   737,   739,   743,   749,
     751,   755,   761,   766,   770,   772,   773,   775,   776,   781,
     783,   786,   788,   793,   797,   798,   802,   804,   806,   807,
     808,   811,   812,   817,   818,   826,   830,   835,   836,   844,
     847,   851,   855,   859,   863,   867,   871,   875,   879,   883,
     887,   891,   894,   897,   900,   903,   904,   909,   910,   915,
     916,   921,   922,   927,   931,   935,   939,   943,   947,   951,
     955,   959,   963,   967,   971,   975,   978,   981,   984,   987,
     991,   995,   999,  1003,  1007,  1011,  1015,  1019,  1023,  1027,
    1029,  1030,  1036,  1037,  1038,  1046,  1047,  1053,  1055,  1058,
    1061,  1064,  1067,  1070,  1073,  1076,  1079,  1080,  1084,  1086,
    1091,  1095,  1099,  1102,  1103,  1114,  1115,  1127,  1129,  1130,
    1135,  1139,  1144,  1146,  1149,  1150,  1156,  1157,  1165,  1166,
    1173,  1174,  1182,  1183,  1191,  1192,  1200,  1201,  1209,  1210,
    1216,  1218,  1220,  1224,  1227,  1229,  1233,  1236,  1238,  1240,
    1241,  1242,  1249,  1251,  1254,  1255,  1258,  1259,  1262,  1266,
    1267,  1269,  1271,  1272,  1276,  1278,  1280,  1282,  1284,  1286,
    1288,  1290,  1292,  1294,  1296,  1298,  1302,  1305,  1307,  1309,
    1313,  1316,  1319,  1322,  1327,  1331,  1333,  1337,  1339,  1341,
    1343,  1347,  1350,  1352,  1356,  1360,  1361,  1364,  1365,  1367,
    1373,  1377,  1381,  1383,  1385,  1387,  1389,  1391,  1393,  1394,
    1395,  1403,  1405,  1408,  1409,  1410,  1415,  1420,  1425,  1426,
    1431,  1433,  1435,  1436,  1438,  1441,  1445,  1449,  1451,  1456,
    1457,  1463,  1465,  1467,  1469,  1471,  1474,  1476,  1481,  1486,
    1488,  1490,  1495,  1496,  1498,  1500,  1501,  1504,  1509,  1514,
    1516,  1518,  1522,  1524,  1527,  1531,  1533,  1535,  1536,  1542,
    1543,  1544,  1547,  1553,  1557,  1561,  1563,  1570,  1575,  1580,
    1583,  1586,  1589,  1591,  1594,  1596,  1597,  1603,  1607,  1611,
    1618,  1622,  1624,  1626,  1628,  1633,  1638,  1641,  1644,  1649,
    1652,  1655,  1657,  1658,  1663,  1667
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     159,     0,    -1,   160,    -1,    -1,   160,   161,   163,    -1,
      -1,    71,    -1,   162,   148,    71,    -1,   172,    -1,   203,
      -1,   204,    -1,   117,   149,   150,   151,    -1,   145,   162,
     151,    -1,    -1,   145,   162,   152,   164,   160,   153,    -1,
      -1,   145,   152,   165,   160,   153,    -1,   104,   166,   151,
      -1,   168,   151,    -1,   166,     8,   167,    -1,   167,    -1,
     162,    -1,   162,    90,    71,    -1,   148,   162,    -1,   148,
     162,    90,    71,    -1,   168,     8,    71,    13,   316,    -1,
      99,    71,    13,   316,    -1,    -1,   169,   170,   171,    -1,
      -1,   172,    -1,   203,    -1,   204,    -1,   117,   149,   150,
     151,    -1,   173,    -1,    71,    26,    -1,   152,   169,   153,
      -1,    -1,    -1,    65,   149,   322,   150,   174,   172,   175,
     229,   233,    -1,    -1,    -1,    65,   149,   322,   150,    26,
     176,   169,   177,   231,   234,    68,   151,    -1,    -1,    -1,
      82,   149,   178,   322,   150,   179,   228,    -1,    -1,    -1,
      81,   180,   172,    82,   149,   181,   322,   150,   151,    -1,
      -1,    -1,    -1,    84,   149,   267,   151,   182,   267,   151,
     183,   267,   150,   184,   219,    -1,    -1,    91,   149,   322,
     150,   185,   223,    -1,    95,   151,    -1,    95,   322,   151,
      -1,    96,   151,    -1,    96,   322,   151,    -1,   100,   151,
      -1,   100,   278,   151,    -1,   100,   326,   151,    -1,   106,
     240,   151,    -1,   112,   242,   151,    -1,    80,   266,   151,
      -1,    75,    -1,   322,   151,    -1,   114,   149,   201,   150,
     151,    -1,    -1,    -1,    86,   149,   326,    90,   186,   218,
     217,   150,   187,   220,    -1,    -1,    -1,    86,   149,   278,
      90,   188,   326,   217,   150,   189,   220,    -1,    -1,    88,
     190,   149,   222,   150,   221,    -1,   151,    -1,    -1,    -1,
      -1,    -1,    -1,   101,   191,   152,   169,   153,   102,   149,
     192,   305,   193,    73,   150,   194,   152,   169,   153,   195,
     196,    -1,   103,   322,   151,    -1,    97,    71,   151,    -1,
     197,    -1,    -1,   198,    -1,   197,   198,    -1,    -1,    -1,
     102,   149,   305,   199,    73,   150,   200,   152,   169,   153,
      -1,   202,    -1,   201,     8,   202,    -1,   326,    -1,   206,
      -1,   208,    -1,    -1,    31,    -1,    -1,   292,   205,    71,
     207,   149,   235,   150,   152,   169,   153,    -1,    -1,   211,
      71,   212,   209,   215,   152,   243,   153,    -1,    -1,   213,
      71,   210,   214,   152,   243,   153,    -1,   118,    -1,   111,
     118,    -1,   119,    -1,   110,   118,    -1,    -1,   121,   305,
      -1,   120,    -1,    -1,   121,   216,    -1,    -1,   122,   216,
      -1,   305,    -1,   216,     8,   305,    -1,    -1,   124,   218,
      -1,   326,    -1,    31,   326,    -1,   172,    -1,    26,   169,
      85,   151,    -1,   172,    -1,    26,   169,    87,   151,    -1,
     172,    -1,    26,   169,    89,   151,    -1,    71,    13,   316,
      -1,   222,     8,    71,    13,   316,    -1,   152,   224,   153,
      -1,   152,   151,   224,   153,    -1,    26,   224,    92,   151,
      -1,    26,   151,   224,    92,   151,    -1,    -1,    -1,   224,
      93,   322,   227,   225,   169,    -1,    -1,   224,    94,   227,
     226,   169,    -1,    26,    -1,   151,    -1,   172,    -1,    26,
     169,    83,   151,    -1,    -1,    -1,   229,    66,   149,   322,
     150,   230,   172,    -1,    -1,    -1,   231,    66,   149,   322,
     150,    26,   232,   169,    -1,    -1,    67,   172,    -1,    -1,
      67,    26,   169,    -1,   236,    -1,    -1,   237,    73,    -1,
     237,    31,    73,    -1,   237,    31,    73,    13,   316,    -1,
     237,    73,    13,   316,    -1,   236,     8,   237,    73,    -1,
     236,     8,   237,    31,    73,    -1,   236,     8,   237,    31,
      73,    13,   316,    -1,   236,     8,   237,    73,    13,   316,
      -1,    -1,   126,    -1,   127,    -1,   305,    -1,   239,    -1,
      -1,   278,    -1,   326,    -1,    31,   324,    -1,   239,     8,
     278,    -1,   239,     8,   326,    -1,   239,     8,    31,   324,
      -1,   240,     8,   241,    -1,   241,    -1,    73,    -1,   154,
     323,    -1,   154,   152,   322,   153,    -1,   242,     8,    73,
      -1,   242,     8,    73,    13,   316,    -1,    73,    -1,    73,
      13,   316,    -1,   243,   244,    -1,    -1,    -1,   260,   245,
     264,   151,    -1,   265,   151,    -1,   247,    -1,    -1,   261,
     292,   205,    71,   246,   149,   235,   150,   259,    -1,   104,
     248,   249,    -1,   305,    -1,   248,     8,   305,    -1,   151,
      -1,   152,   250,   153,    -1,    -1,   251,    -1,   252,    -1,
     251,   252,    -1,   253,   151,    -1,   257,   151,    -1,   256,
     105,   254,    -1,   305,    -1,   254,     8,   305,    -1,    71,
      -1,   256,    -1,   305,   144,    71,    -1,   255,    90,   258,
      71,    -1,   255,    90,   263,    -1,    -1,   263,    -1,   151,
      -1,   152,   169,   153,    -1,   262,    -1,   113,    -1,    -1,
     262,    -1,   263,    -1,   262,   263,    -1,   107,    -1,   108,
      -1,   109,    -1,   112,    -1,   111,    -1,   110,    -1,   264,
       8,    73,    -1,   264,     8,    73,    13,   316,    -1,    73,
      -1,    73,    13,   316,    -1,   265,     8,    71,    13,   316,
      -1,    99,    71,    13,   316,    -1,   266,     8,   322,    -1,
     322,    -1,    -1,   268,    -1,    -1,   268,     8,   269,   322,
      -1,   322,    -1,   270,   330,    -1,   330,    -1,   271,    61,
     345,   155,    -1,    61,   345,   155,    -1,    -1,   271,   273,
     270,    -1,   271,    -1,   270,    -1,    -1,    -1,   275,   272,
      -1,    -1,    63,   306,   277,   314,    -1,    -1,   125,   149,
     279,   351,   150,    13,   322,    -1,   326,    13,   322,    -1,
     326,    13,    31,   326,    -1,    -1,   326,    13,    31,    63,
     306,   280,   314,    -1,    62,   322,    -1,   326,    24,   322,
      -1,   326,    23,   322,    -1,   326,    22,   322,    -1,   326,
      21,   322,    -1,   326,    20,   322,    -1,   326,    19,   322,
      -1,   326,    18,   322,    -1,   326,    17,   322,    -1,   326,
      16,   322,    -1,   326,    15,   322,    -1,   326,    14,   322,
      -1,   325,    60,    -1,    60,   325,    -1,   325,    59,    -1,
      59,   325,    -1,    -1,   322,    27,   281,   322,    -1,    -1,
     322,    28,   282,   322,    -1,    -1,   322,     9,   283,   322,
      -1,    -1,   322,    11,   284,   322,    -1,   322,    10,   322,
      -1,   322,    29,   322,    -1,   322,    31,   322,    -1,   322,
      30,   322,    -1,   322,    44,   322,    -1,   322,    42,   322,
      -1,   322,    43,   322,    -1,   322,    45,   322,    -1,   322,
      46,   322,    -1,   322,    47,   322,    -1,   322,    41,   322,
      -1,   322,    40,   322,    -1,    42,   322,    -1,    43,   322,
      -1,    48,   322,    -1,    50,   322,    -1,   322,    33,   322,
      -1,   322,    32,   322,    -1,   322,    35,   322,    -1,   322,
      34,   322,    -1,   322,    36,   322,    -1,   322,    39,   322,
      -1,   322,    37,   322,    -1,   322,    38,   322,    -1,   322,
      49,   306,    -1,   149,   322,   150,    -1,   276,    -1,    -1,
     149,   276,   150,   285,   274,    -1,    -1,    -1,   322,    25,
     286,   322,    26,   287,   322,    -1,    -1,   322,    25,    26,
     288,   322,    -1,   360,    -1,    58,   322,    -1,    57,   322,
      -1,    56,   322,    -1,    55,   322,    -1,    54,   322,    -1,
      53,   322,    -1,    52,   322,    -1,    64,   312,    -1,    -1,
      51,   289,   322,    -1,   318,    -1,   126,   149,   354,   150,
      -1,    61,   354,   155,    -1,   156,   313,   156,    -1,    12,
     322,    -1,    -1,   292,   205,   149,   290,   235,   150,   293,
     152,   169,   153,    -1,    -1,   112,   292,   205,   149,   291,
     235,   150,   293,   152,   169,   153,    -1,    98,    -1,    -1,
     104,   149,   294,   150,    -1,   294,     8,    73,    -1,   294,
       8,    31,    73,    -1,    73,    -1,    31,    73,    -1,    -1,
     162,   149,   296,   238,   150,    -1,    -1,   145,   148,   162,
     149,   297,   238,   150,    -1,    -1,   148,   162,   149,   298,
     238,   150,    -1,    -1,   304,   144,   349,   149,   299,   238,
     150,    -1,    -1,   304,   144,   336,   149,   300,   238,   150,
      -1,    -1,   338,   144,   349,   149,   301,   238,   150,    -1,
      -1,   338,   144,   336,   149,   302,   238,   150,    -1,    -1,
     336,   149,   303,   238,   150,    -1,   112,    -1,   162,    -1,
     145,   148,   162,    -1,   148,   162,    -1,   162,    -1,   145,
     148,   162,    -1,   148,   162,    -1,   304,    -1,   307,    -1,
      -1,    -1,   342,   123,   308,   346,   309,   310,    -1,   342,
      -1,   310,   311,    -1,    -1,   123,   346,    -1,    -1,   149,
     150,    -1,   149,   322,   150,    -1,    -1,    78,    -1,   356,
      -1,    -1,   149,   238,   150,    -1,    69,    -1,    70,    -1,
      79,    -1,   132,    -1,   133,    -1,   147,    -1,   128,    -1,
     129,    -1,   130,    -1,   131,    -1,   146,    -1,   140,    78,
     141,    -1,   140,   141,    -1,   315,    -1,   162,    -1,   145,
     148,   162,    -1,   148,   162,    -1,    42,   316,    -1,    43,
     316,    -1,   126,   149,   319,   150,    -1,    61,   319,   155,
      -1,   317,    -1,   304,   144,    71,    -1,    72,    -1,   363,
      -1,   162,    -1,   145,   148,   162,    -1,   148,   162,    -1,
     315,    -1,   157,   356,   157,    -1,   140,   356,   141,    -1,
      -1,   321,   320,    -1,    -1,     8,    -1,   321,     8,   316,
     124,   316,    -1,   321,     8,   316,    -1,   316,   124,   316,
      -1,   316,    -1,   323,    -1,   278,    -1,   326,    -1,   326,
      -1,   326,    -1,    -1,    -1,   341,   123,   327,   346,   328,
     335,   329,    -1,   341,    -1,   329,   330,    -1,    -1,    -1,
     123,   346,   331,   335,    -1,   332,    61,   345,   155,    -1,
     333,    61,   345,   155,    -1,    -1,   149,   334,   238,   150,
      -1,   333,    -1,   332,    -1,    -1,   343,    -1,   350,   343,
      -1,   304,   144,   336,    -1,   338,   144,   336,    -1,   343,
      -1,   339,    61,   345,   155,    -1,    -1,   295,   340,    61,
     345,   155,    -1,   342,    -1,   339,    -1,   295,    -1,   343,
      -1,   350,   343,    -1,   337,    -1,   343,    61,   345,   155,
      -1,   343,   152,   322,   153,    -1,   344,    -1,    73,    -1,
     154,   152,   322,   153,    -1,    -1,   322,    -1,   348,    -1,
      -1,   336,   347,    -1,   348,    61,   345,   155,    -1,   348,
     152,   322,   153,    -1,   349,    -1,    71,    -1,   152,   322,
     153,    -1,   154,    -1,   350,   154,    -1,   351,     8,   352,
      -1,   352,    -1,   326,    -1,    -1,   125,   149,   353,   351,
     150,    -1,    -1,    -1,   355,   320,    -1,   355,     8,   322,
     124,   322,    -1,   355,     8,   322,    -1,   322,   124,   322,
      -1,   322,    -1,   355,     8,   322,   124,    31,   324,    -1,
     355,     8,    31,   324,    -1,   322,   124,    31,   324,    -1,
      31,   324,    -1,   356,   357,    -1,   356,    78,    -1,   357,
      -1,    78,   357,    -1,    73,    -1,    -1,    73,    61,   358,
     359,   155,    -1,    73,   123,    71,    -1,   142,   322,   153,
      -1,   142,    72,    61,   322,   155,   153,    -1,   143,   326,
     153,    -1,    71,    -1,    74,    -1,    73,    -1,   115,   149,
     361,   150,    -1,   116,   149,   326,   150,    -1,     7,   322,
      -1,     6,   322,    -1,     5,   149,   322,   150,    -1,     4,
     322,    -1,     3,   322,    -1,   326,    -1,    -1,   361,     8,
     362,   326,    -1,   304,   144,    71,    -1,   338,   144,    71,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   214,   214,   218,   218,   219,   223,   224,   228,   229,
     230,   231,   232,   233,   233,   235,   235,   237,   238,   242,
     243,   247,   248,   249,   250,   254,   255,   259,   259,   260,
     265,   266,   267,   268,   273,   274,   278,   279,   279,   279,
     280,   280,   280,   281,   281,   281,   282,   282,   282,   286,
     288,   290,   283,   292,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   307,   308,
     306,   311,   312,   310,   314,   314,   315,   316,   317,   318,
     319,   320,   316,   322,   323,   328,   329,   333,   334,   339,
     339,   339,   344,   345,   349,   353,   357,   362,   363,   368,
     368,   374,   373,   380,   379,   389,   390,   391,   392,   396,
     397,   401,   404,   406,   409,   411,   415,   416,   420,   421,
     426,   427,   431,   432,   437,   438,   443,   444,   449,   450,
     455,   456,   457,   458,   463,   464,   464,   465,   465,   470,
     471,   476,   477,   482,   484,   484,   488,   490,   490,   494,
     496,   500,   502,   507,   508,   513,   514,   515,   516,   517,
     518,   519,   520,   525,   526,   527,   528,   533,   534,   539,
     540,   541,   542,   543,   544,   548,   549,   554,   555,   556,
     561,   562,   563,   564,   570,   571,   576,   576,   577,   578,
     579,   579,   584,   588,   589,   593,   594,   597,   599,   603,
     604,   608,   609,   613,   617,   618,   622,   623,   627,   631,
     632,   636,   637,   641,   642,   646,   647,   651,   652,   656,
     657,   661,   662,   663,   664,   665,   666,   670,   671,   672,
     673,   677,   678,   682,   683,   688,   689,   693,   693,   694,
     698,   699,   703,   704,   708,   708,   709,   710,   714,   715,
     715,   720,   720,   724,   724,   725,   726,   727,   727,   728,
     729,   730,   731,   732,   733,   734,   735,   736,   737,   738,
     739,   740,   741,   742,   743,   744,   744,   745,   745,   746,
     746,   747,   747,   748,   749,   750,   751,   752,   753,   754,
     755,   756,   757,   758,   759,   760,   761,   762,   763,   764,
     765,   766,   767,   768,   769,   770,   771,   772,   773,   774,
     775,   775,   776,   777,   776,   779,   779,   781,   782,   783,
     784,   785,   786,   787,   788,   789,   790,   790,   791,   792,
     793,   794,   795,   796,   796,   798,   798,   803,   806,   808,
     812,   813,   814,   815,   819,   819,   822,   822,   825,   825,
     828,   828,   831,   831,   834,   834,   837,   837,   840,   840,
     846,   847,   848,   849,   853,   854,   855,   861,   862,   867,
     868,   867,   870,   875,   876,   881,   885,   886,   887,   891,
     892,   893,   898,   899,   904,   905,   906,   907,   908,   909,
     910,   911,   912,   913,   914,   915,   916,   921,   922,   923,
     924,   925,   926,   927,   928,   929,   933,   937,   938,   939,
     940,   941,   942,   943,   944,   949,   950,   953,   955,   959,
     960,   961,   962,   966,   967,   972,   977,   982,   987,   988,
     987,   990,   994,   995,  1000,  1000,  1004,  1005,  1009,  1009,
    1015,  1016,  1017,  1021,  1022,  1026,  1027,  1032,  1036,  1037,
    1037,  1042,  1043,  1044,  1049,  1050,  1051,  1055,  1056,  1057,
    1062,  1063,  1067,  1068,  1073,  1074,  1074,  1078,  1079,  1080,
    1084,  1085,  1089,  1090,  1094,  1095,  1100,  1101,  1101,  1102,
    1107,  1108,  1112,  1113,  1114,  1115,  1116,  1117,  1118,  1119,
    1123,  1124,  1125,  1126,  1132,  1133,  1133,  1134,  1135,  1136,
    1137,  1142,  1143,  1144,  1149,  1150,  1151,  1152,  1153,  1154,
    1155,  1159,  1160,  1160,  1164,  1165
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined",
  "\"require_once (T_REQUIRE_ONCE)\"", "\"require (T_REQUIRE)\"",
  "\"eval (T_EVAL)\"", "\"include_once (T_INCLUDE_ONCE)\"",
  "\"include (T_INCLUDE)\"", "','", "\"or (T_LOGICAL_OR)\"",
  "\"xor (T_LOGICAL_XOR)\"", "\"and (T_LOGICAL_AND)\"",
  "\"print (T_PRINT)\"", "'='", "\">>= (T_SR_EQUAL)\"",
  "\"<<= (T_SL_EQUAL)\"", "\"^= (T_XOR_EQUAL)\"", "\"|= (T_OR_EQUAL)\"",
  "\"&= (T_AND_EQUAL)\"", "\"%= (T_MOD_EQUAL)\"",
  "\".= (T_CONCAT_EQUAL)\"", "\"/= (T_DIV_EQUAL)\"",
  "\"*= (T_MUL_EQUAL)\"", "\"-= (T_MINUS_EQUAL)\"",
  "\"+= (T_PLUS_EQUAL)\"", "'?'", "':'", "\"|| (T_BOOLEAN_OR)\"",
  "\"&& (T_BOOLEAN_AND)\"", "'|'", "'^'", "'&'",
  "\"!== (T_IS_NOT_IDENTICAL)\"", "\"=== (T_IS_IDENTICAL)\"",
  "\"!= (T_IS_NOT_EQUAL)\"", "\"== (T_IS_EQUAL)\"", "'<'", "'>'",
  "\">= (T_IS_GREATER_OR_EQUAL)\"", "\"<= (T_IS_SMALLER_OR_EQUAL)\"",
  "\">> (T_SR)\"", "\"<< (T_SL)\"", "'+'", "'-'", "'.'", "'*'", "'/'",
  "'%'", "'!'", "\"instanceof (T_INSTANCEOF)\"", "'~'", "'@'",
  "\"(unset) (T_UNSET_CAST)\"", "\"(bool) (T_BOOL_CAST)\"",
  "\"(object) (T_OBJECT_CAST)\"", "\"(array) (T_ARRAY_CAST)\"",
  "\"(string) (T_STRING_CAST)\"", "\"(double) (T_DOUBLE_CAST)\"",
  "\"(int) (T_INT_CAST)\"", "\"-- (T_DEC)\"", "\"++ (T_INC)\"", "'['",
  "\"clone (T_CLONE)\"", "\"new (T_NEW)\"", "\"exit (T_EXIT)\"",
  "\"if (T_IF)\"", "\"elseif (T_ELSEIF)\"", "\"else (T_ELSE)\"",
  "\"endif (T_ENDIF)\"", "\"integer number (T_LNUMBER)\"",
  "\"floating-point number (T_DNUMBER)\"", "\"identifier (T_STRING)\"",
  "\"variable name (T_STRING_VARNAME)\"", "\"variable (T_VARIABLE)\"",
  "\"number (T_NUM_STRING)\"", "T_INLINE_HTML", "T_CHARACTER",
  "T_BAD_CHARACTER",
  "\"quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)\"",
  "\"quoted-string (T_CONSTANT_ENCAPSED_STRING)\"", "\"echo (T_ECHO)\"",
  "\"do (T_DO)\"", "\"while (T_WHILE)\"", "\"endwhile (T_ENDWHILE)\"",
  "\"for (T_FOR)\"", "\"endfor (T_ENDFOR)\"", "\"foreach (T_FOREACH)\"",
  "\"endforeach (T_ENDFOREACH)\"", "\"declare (T_DECLARE)\"",
  "\"enddeclare (T_ENDDECLARE)\"", "\"as (T_AS)\"",
  "\"switch (T_SWITCH)\"", "\"endswitch (T_ENDSWITCH)\"",
  "\"case (T_CASE)\"", "\"default (T_DEFAULT)\"", "\"break (T_BREAK)\"",
  "\"continue (T_CONTINUE)\"", "\"goto (T_GOTO)\"",
  "\"function (T_FUNCTION)\"", "\"const (T_CONST)\"",
  "\"return (T_RETURN)\"", "\"try (T_TRY)\"", "\"catch (T_CATCH)\"",
  "\"throw (T_THROW)\"", "\"use (T_USE)\"", "\"insteadof (T_INSTEADOF)\"",
  "\"global (T_GLOBAL)\"", "\"public (T_PUBLIC)\"",
  "\"protected (T_PROTECTED)\"", "\"private (T_PRIVATE)\"",
  "\"final (T_FINAL)\"", "\"abstract (T_ABSTRACT)\"",
  "\"static (T_STATIC)\"", "\"var (T_VAR)\"", "\"unset (T_UNSET)\"",
  "\"isset (T_ISSET)\"", "\"empty (T_EMPTY)\"",
  "\"__halt_compiler (T_HALT_COMPILER)\"", "\"class (T_CLASS)\"",
  "\"trait (T_TRAIT)\"", "\"interface (T_INTERFACE)\"",
  "\"extends (T_EXTENDS)\"", "\"implements (T_IMPLEMENTS)\"",
  "\"-> (T_OBJECT_OPERATOR)\"", "\"=> (T_DOUBLE_ARROW)\"",
  "\"list (T_LIST)\"", "\"array (T_ARRAY)\"", "\"callable (T_CALLABLE)\"",
  "\"__CLASS__ (T_CLASS_C)\"", "\"__TRAIT__ (T_TRAIT_C)\"",
  "\"__METHOD__ (T_METHOD_C)\"", "\"__FUNCTION__ (T_FUNC_C)\"",
  "\"__LINE__ (T_LINE)\"", "\"__FILE__ (T_FILE)\"",
  "\"comment (T_COMMENT)\"", "\"doc comment (T_DOC_COMMENT)\"",
  "\"open tag (T_OPEN_TAG)\"",
  "\"open tag with echo (T_OPEN_TAG_WITH_ECHO)\"",
  "\"close tag (T_CLOSE_TAG)\"", "\"whitespace (T_WHITESPACE)\"",
  "\"heredoc start (T_START_HEREDOC)\"", "\"heredoc end (T_END_HEREDOC)\"",
  "\"${ (T_DOLLAR_OPEN_CURLY_BRACES)\"", "\"{$ (T_CURLY_OPEN)\"",
  "\":: (T_PAAMAYIM_NEKUDOTAYIM)\"", "\"namespace (T_NAMESPACE)\"",
  "\"__NAMESPACE__ (T_NS_C)\"", "\"__DIR__ (T_DIR)\"",
  "\"\\\\ (T_NS_SEPARATOR)\"", "'('", "')'", "';'", "'{'", "'}'", "'$'",
  "']'", "'`'", "'\"'", "$accept", "start", "top_statement_list", "$@1",
  "namespace_name", "top_statement", "$@2", "$@3", "use_declarations",
  "use_declaration", "constant_declaration", "inner_statement_list", "$@4",
  "inner_statement", "statement", "unticked_statement", "$@5", "$@6",
  "$@7", "$@8", "$@9", "$@10", "$@11", "$@12", "$@13", "$@14", "$@15",
  "$@16", "$@17", "$@18", "$@19", "$@20", "$@21", "$@22", "$@23", "$@24",
  "$@25", "$@26", "additional_catches", "non_empty_additional_catches",
  "additional_catch", "@27", "$@28", "unset_variables", "unset_variable",
  "function_declaration_statement", "class_declaration_statement",
  "is_reference", "unticked_function_declaration_statement", "$@29",
  "unticked_class_declaration_statement", "$@30", "$@31",
  "class_entry_type", "extends_from", "interface_entry",
  "interface_extends_list", "implements_list", "interface_list",
  "foreach_optional_arg", "foreach_variable", "for_statement",
  "foreach_statement", "declare_statement", "declare_list",
  "switch_case_list", "case_list", "$@32", "$@33", "case_separator",
  "while_statement", "elseif_list", "$@34", "new_elseif_list", "$@35",
  "else_single", "new_else_single", "parameter_list",
  "non_empty_parameter_list", "optional_class_type",
  "function_call_parameter_list", "non_empty_function_call_parameter_list",
  "global_var_list", "global_var", "static_var_list",
  "class_statement_list", "class_statement", "$@36", "$@37",
  "trait_use_statement", "trait_list", "trait_adaptations",
  "trait_adaptation_list", "non_empty_trait_adaptation_list",
  "trait_adaptation_statement", "trait_precedence", "trait_reference_list",
  "trait_method_reference", "trait_method_reference_fully_qualified",
  "trait_alias", "trait_modifiers", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "echo_expr_list", "for_expr", "non_empty_for_expr", "$@38",
  "chaining_method_or_property", "chaining_dereference",
  "chaining_instance_call", "$@39", "instance_call", "$@40", "new_expr",
  "$@41", "expr_without_variable", "$@42", "$@43", "$@44", "$@45", "$@46",
  "$@47", "@48", "$@49", "$@50", "$@51", "$@52", "@53", "@54", "function",
  "lexical_vars", "lexical_var_list", "function_call", "$@55", "$@56",
  "$@57", "$@58", "$@59", "$@60", "$@61", "$@62", "class_name",
  "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "$@63", "$@64",
  "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable", "$@65", "$@66",
  "variable_properties", "variable_property", "$@67",
  "array_method_dereference", "method", "$@68", "method_or_not",
  "variable_without_objects", "static_member", "variable_class_name",
  "array_function_dereference", "$@69",
  "base_variable_with_function_calls", "base_variable",
  "reference_variable", "compound_variable", "dim_offset",
  "object_property", "$@70", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "$@71", "array_pair_list",
  "non_empty_array_pair_list", "encaps_list", "encaps_var", "$@72",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "$@73", "class_constant", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,    44,   263,
     264,   265,   266,    61,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,    63,    58,   278,   279,   124,
      94,    38,   280,   281,   282,   283,    60,    62,   284,   285,
     286,   287,    43,    45,    46,    42,    47,    37,    33,   288,
     126,    64,   289,   290,   291,   292,   293,   294,   295,   296,
     297,    91,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,    40,
      41,    59,   123,   125,    36,    93,    96,    34
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   158,   159,   161,   160,   160,   162,   162,   163,   163,
     163,   163,   163,   164,   163,   165,   163,   163,   163,   166,
     166,   167,   167,   167,   167,   168,   168,   170,   169,   169,
     171,   171,   171,   171,   172,   172,   173,   174,   175,   173,
     176,   177,   173,   178,   179,   173,   180,   181,   173,   182,
     183,   184,   173,   185,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   186,   187,
     173,   188,   189,   173,   190,   173,   173,   191,   192,   193,
     194,   195,   173,   173,   173,   196,   196,   197,   197,   199,
     200,   198,   201,   201,   202,   203,   204,   205,   205,   207,
     206,   209,   208,   210,   208,   211,   211,   211,   211,   212,
     212,   213,   214,   214,   215,   215,   216,   216,   217,   217,
     218,   218,   219,   219,   220,   220,   221,   221,   222,   222,
     223,   223,   223,   223,   224,   225,   224,   226,   224,   227,
     227,   228,   228,   229,   230,   229,   231,   232,   231,   233,
     233,   234,   234,   235,   235,   236,   236,   236,   236,   236,
     236,   236,   236,   237,   237,   237,   237,   238,   238,   239,
     239,   239,   239,   239,   239,   240,   240,   241,   241,   241,
     242,   242,   242,   242,   243,   243,   245,   244,   244,   244,
     246,   244,   247,   248,   248,   249,   249,   250,   250,   251,
     251,   252,   252,   253,   254,   254,   255,   255,   256,   257,
     257,   258,   258,   259,   259,   260,   260,   261,   261,   262,
     262,   263,   263,   263,   263,   263,   263,   264,   264,   264,
     264,   265,   265,   266,   266,   267,   267,   269,   268,   268,
     270,   270,   271,   271,   273,   272,   272,   272,   274,   275,
     274,   277,   276,   279,   278,   278,   278,   280,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   281,   278,   282,   278,   283,
     278,   284,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     285,   278,   286,   287,   278,   288,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   289,   278,   278,   278,
     278,   278,   278,   290,   278,   291,   278,   292,   293,   293,
     294,   294,   294,   294,   296,   295,   297,   295,   298,   295,
     299,   295,   300,   295,   301,   295,   302,   295,   303,   295,
     304,   304,   304,   304,   305,   305,   305,   306,   306,   308,
     309,   307,   307,   310,   310,   311,   312,   312,   312,   313,
     313,   313,   314,   314,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   317,   318,   318,   318,
     318,   318,   318,   318,   318,   319,   319,   320,   320,   321,
     321,   321,   321,   322,   322,   323,   324,   325,   327,   328,
     326,   326,   329,   329,   331,   330,   332,   332,   334,   333,
     335,   335,   335,   336,   336,   337,   337,   338,   339,   340,
     339,   341,   341,   341,   342,   342,   342,   343,   343,   343,
     344,   344,   345,   345,   346,   347,   346,   348,   348,   348,
     349,   349,   350,   350,   351,   351,   352,   353,   352,   352,
     354,   354,   355,   355,   355,   355,   355,   355,   355,   355,
     356,   356,   356,   356,   357,   358,   357,   357,   357,   357,
     357,   359,   359,   359,   360,   360,   360,   360,   360,   360,
     360,   361,   362,   361,   363,   363
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     3,     0,     1,     3,     1,     1,
       1,     4,     3,     0,     6,     0,     5,     3,     2,     3,
       1,     1,     3,     2,     4,     5,     4,     0,     3,     0,
       1,     1,     1,     4,     1,     2,     3,     0,     0,     9,
       0,     0,    12,     0,     0,     7,     0,     0,     9,     0,
       0,     0,    12,     0,     6,     2,     3,     2,     3,     2,
       3,     3,     3,     3,     3,     1,     2,     5,     0,     0,
      10,     0,     0,    10,     0,     6,     1,     0,     0,     0,
       0,     0,    18,     3,     3,     1,     0,     1,     2,     0,
       0,    10,     1,     3,     1,     1,     1,     0,     1,     0,
      10,     0,     8,     0,     7,     1,     2,     1,     2,     0,
       2,     1,     0,     2,     0,     2,     1,     3,     0,     2,
       1,     2,     1,     4,     1,     4,     1,     4,     3,     5,
       3,     4,     4,     5,     0,     0,     6,     0,     5,     1,
       1,     1,     4,     0,     0,     7,     0,     0,     8,     0,
       2,     0,     3,     1,     0,     2,     3,     5,     4,     4,
       5,     7,     6,     0,     1,     1,     1,     1,     0,     1,
       1,     2,     3,     3,     4,     3,     1,     1,     2,     4,
       3,     5,     1,     3,     2,     0,     0,     4,     2,     1,
       0,     9,     3,     1,     3,     1,     3,     0,     1,     1,
       2,     2,     2,     3,     1,     3,     1,     1,     3,     4,
       3,     0,     1,     1,     3,     1,     1,     0,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     3,     5,     1,
       3,     5,     4,     3,     1,     0,     1,     0,     4,     1,
       2,     1,     4,     3,     0,     3,     1,     1,     0,     0,
       2,     0,     4,     0,     7,     3,     4,     0,     7,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     0,     4,     0,     4,     0,
       4,     0,     4,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       0,     5,     0,     0,     7,     0,     5,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     0,     3,     1,     4,
       3,     3,     2,     0,    10,     0,    11,     1,     0,     4,
       3,     4,     1,     2,     0,     5,     0,     7,     0,     6,
       0,     7,     0,     7,     0,     7,     0,     7,     0,     5,
       1,     1,     3,     2,     1,     3,     2,     1,     1,     0,
       0,     6,     1,     2,     0,     2,     0,     2,     3,     0,
       1,     1,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     1,     1,     3,
       2,     2,     2,     4,     3,     1,     3,     1,     1,     1,
       3,     2,     1,     3,     3,     0,     2,     0,     1,     5,
       3,     3,     1,     1,     1,     1,     1,     1,     0,     0,
       7,     1,     2,     0,     0,     4,     4,     4,     0,     4,
       1,     1,     0,     1,     2,     3,     3,     1,     4,     0,
       5,     1,     1,     1,     1,     2,     1,     4,     4,     1,
       1,     4,     0,     1,     1,     0,     2,     4,     4,     1,
       1,     3,     1,     2,     3,     1,     1,     0,     5,     0,
       0,     2,     5,     3,     3,     1,     6,     4,     4,     2,
       2,     2,     1,     2,     1,     0,     5,     3,     3,     6,
       3,     1,     1,     1,     4,     4,     2,     2,     4,     2,
       2,     1,     0,     4,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   326,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   480,     0,     0,   376,     0,
     384,   385,     6,   407,   460,    65,   386,     0,    46,     0,
       0,     0,    74,     0,     0,     0,     0,   337,     0,     0,
      77,     0,     0,     0,     0,     0,   360,     0,     0,     0,
       0,   105,   107,   111,     0,     0,   390,   391,   392,   393,
     387,   388,     0,     0,   394,   389,     0,     0,    76,    29,
     472,   379,     0,   409,     4,     0,     8,    34,     9,    10,
      95,    96,     0,     0,   309,   424,    97,   453,     0,   412,
     328,     0,   423,     0,   425,     0,   456,     0,   452,   431,
     451,   454,   459,     0,   317,   408,     6,   360,     0,    97,
     510,   509,     0,   507,   506,   332,   295,   296,   297,   298,
       0,   324,   323,   322,   321,   320,   319,   318,   360,     0,
       0,   361,     0,   274,   427,     0,   272,     0,   485,     0,
     417,   259,     0,     0,   361,   367,   251,   368,     0,   372,
     454,     0,     0,   325,     0,    35,     0,   234,     0,    43,
     235,     0,     0,     0,    55,     0,    57,     0,     0,     0,
      59,   424,     0,   425,     0,     0,     0,    21,     0,    20,
     177,     0,     0,   176,   108,   106,   182,     0,    97,     0,
       0,     0,     0,   253,   480,   494,     0,   396,     0,     0,
       0,   492,     0,    15,     0,   411,   309,     0,    27,     0,
     380,     0,   381,     0,     0,     0,   344,     0,    18,   109,
     103,    98,     0,     0,     0,   279,     0,   281,   312,   275,
     277,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    66,   273,   271,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   358,     0,   462,   428,
     462,     0,   473,   455,     0,     0,   327,     0,   363,     0,
       0,   489,   426,     0,   330,   418,   481,     0,   363,     0,
     382,     0,   369,   455,   377,     0,     0,     0,    64,     0,
       0,     0,   236,   239,   424,   425,     0,     0,    56,    58,
      84,     0,    60,    61,    29,    83,    23,     0,     0,    17,
       0,   178,   425,     0,    62,     0,     0,    63,     0,     0,
      92,    94,   511,     0,     0,     0,   479,     0,   495,     0,
     395,   493,   407,     0,     0,   491,   414,   490,   410,     5,
      12,    13,   348,   310,   308,    36,     0,     0,   331,   413,
       7,   168,     0,     0,   101,   112,    99,   333,   462,   514,
       0,   445,   443,     0,     0,     0,   283,     0,   315,     0,
       0,     0,   284,   286,   285,   300,   299,   302,   301,   303,
     305,   306,   304,   294,   293,   288,   289,   287,   290,   291,
     292,   307,     0,   255,   270,   269,   268,   267,   266,   265,
     264,   263,   262,   261,   260,   168,   515,   446,     0,   463,
       0,     0,     0,     0,   508,   362,   470,     0,   484,     0,
     483,   362,   445,   168,   252,   446,     0,   378,    37,   233,
       0,     0,    49,   237,    71,    68,     0,     0,    53,     0,
       0,   415,     0,     0,     0,     0,   398,     0,   397,    26,
     405,    27,     0,    22,    19,     0,   175,   183,   180,   335,
       0,     0,   512,   504,   505,    11,     0,   476,     0,   475,
     329,     0,   497,     0,   498,   500,   346,     3,     5,   168,
     248,     0,    28,    30,    31,    32,   461,     0,     0,   167,
     424,   425,     0,     0,     0,   364,   110,   114,     0,     0,
       0,   163,     0,     0,   352,   350,   444,   280,   282,     0,
       0,   276,   278,     0,   256,     0,   356,   354,   448,   465,
     429,   464,   469,   457,   458,   488,   487,     0,     0,   370,
      40,     0,    47,    44,   235,     0,     0,     0,     0,     0,
       0,     0,   401,   402,   422,     0,   417,   415,     0,     0,
     400,     0,     0,    24,   179,     0,   163,    93,    67,     0,
     477,   479,     0,   501,   503,   502,     0,     0,   168,    16,
       3,     0,   311,     0,     0,   171,   345,     0,    25,     0,
     366,     0,     0,   113,   116,   185,   163,   164,   165,     0,
     153,     0,   166,   450,   471,   168,   168,   316,   313,   257,
     359,   168,   168,   466,   442,   462,     0,     0,   482,   383,
     374,    29,    38,     0,     0,     0,   238,   118,     0,   118,
     120,   128,     0,    29,   126,    75,   134,   134,    54,     0,
     404,   418,   416,     0,   399,   406,     0,   181,     0,   513,
     479,   474,     0,   496,     0,     0,    14,   349,   462,     0,
     247,   246,   250,   241,     0,     0,   424,   425,   365,   115,
     185,     0,   217,     0,   338,   163,     0,   155,     0,     0,
       0,   382,     0,     0,   438,   441,   440,   433,     0,     0,
     486,   371,    27,   143,     0,    29,   141,    45,    50,     0,
       0,   121,     0,     0,    27,   134,     0,   134,     0,   421,
     420,   403,    78,   338,     0,   254,   499,   347,     0,   434,
     240,   462,     0,    33,   174,   217,   117,     0,     0,   221,
     222,   223,   226,   225,   224,   216,   104,   184,   189,   186,
       0,   215,   219,     0,     0,     0,     0,     0,   156,     0,
     353,   351,   314,   258,   357,   355,   168,   462,   462,   430,
     467,   468,     0,   373,   146,   149,     0,    27,   235,   119,
      72,    69,   129,     0,     0,     0,     0,     0,     0,   130,
       0,     0,     0,   478,   243,   442,     0,   245,   102,     0,
       0,   193,     0,    97,   220,     0,   188,    29,     0,    29,
       0,   159,     0,   158,     0,     0,     0,   432,   375,   151,
       0,     0,    39,    48,     0,     0,     0,     0,   127,     0,
     132,     0,   139,   140,   137,   131,   419,    79,    29,   435,
     242,     0,     0,   195,   197,   192,   229,     0,     0,     0,
      27,     0,   342,     0,    27,   160,     0,   157,   439,   436,
     437,     0,     0,     0,     0,   150,   142,    51,    29,   124,
      73,    70,   133,   135,    29,     0,    27,   232,   194,     6,
       0,   198,   199,     0,     0,   207,     0,     0,     0,     0,
     187,   190,     0,   100,   343,     0,   339,   334,     0,   162,
       0,    29,     0,     0,     0,    27,    29,    27,     0,   336,
     196,   200,   201,   211,     0,   202,     0,   230,   227,     0,
     231,     0,   340,   161,     0,    27,    42,   144,    29,   122,
      52,     0,    27,    80,     0,   210,   203,   204,   208,     0,
     163,   341,     0,     0,    27,   125,     0,   209,     0,   228,
       0,   147,   145,     0,    29,   205,     0,    29,   123,    27,
     213,    29,   191,    27,    81,    27,    86,   214,     0,    82,
      85,    87,     0,    88,    89,     0,     0,    90,     0,    29,
      27,    91
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    83,    84,   498,   359,   188,   189,
      85,   218,   366,   502,   869,    87,   551,   703,   631,   774,
     310,   634,   168,   633,   554,   778,   904,   561,   557,   827,
     556,   826,   172,   184,   791,   875,   946,   966,   969,   970,
     971,   975,   978,   339,   340,    88,    89,   232,    90,   520,
      91,   517,   375,    92,   374,    93,   519,   602,   603,   710,
     639,   930,   870,   645,   457,   648,   716,   906,   874,   834,
     707,   775,   943,   819,   957,   822,   863,   609,   610,   611,
     508,   509,   192,   193,   197,   682,   747,   802,   919,   748,
     800,   845,   880,   881,   882,   883,   936,   884,   885,   886,
     934,   962,   749,   750,   751,   752,   847,   753,   166,   311,
     312,   555,   670,   671,   672,   732,   592,   593,    94,   300,
      95,   346,   691,   390,   391,   385,   387,   500,   389,   690,
     529,   130,   521,   576,   119,   756,   853,    97,   371,   588,
     499,   616,   615,   622,   621,   425,    98,   612,   156,   157,
     446,   630,   701,   773,   163,   221,   444,    99,   564,   470,
     100,   565,   296,   566,   182,   102,   291,   103,   104,   431,
     624,   769,   673,   795,   695,   696,   766,   697,   105,   106,
     107,   108,   233,   109,   110,   111,   112,   430,   540,   623,
     541,   542,   113,   488,   489,   660,   149,   150,   210,   211,
     491,   586,   114,   343,   579,   115
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -740
static const yytype_int16 yypact[] =
{
    -740,    65,    67,  -740,  1598,  3960,  3960,   -77,  3960,  3960,
    3960,  3960,  3960,  3960,  3960,  -740,  3960,  3960,  3960,  3960,
    3960,  3960,  3960,   208,   208,  2519,  3960,   272,   -64,   -35,
    -740,  -740,   138,  -740,  -740,  -740,  -740,  3960,  -740,    60,
      78,    86,  -740,    91,  2650,  2781,   215,  -740,   217,  2912,
    -740,  3960,     7,   -41,   -38,   196,    -3,   173,   193,   206,
     224,  -740,  -740,  -740,   233,   254,  -740,  -740,  -740,  -740,
    -740,  -740,   326,   114,  -740,  -740,   335,  3960,  -740,  -740,
     205,   142,   150,   -55,  -740,    11,  -740,  -740,  -740,  -740,
    -740,  -740,   359,   372,  -740,  -740,   394,   405,   311,  -740,
    -740,  4478,  -740,   157,  1309,   341,  -740,   349,   439,   390,
    -740,    50,  -740,    -4,  -740,  -740,  -740,   403,   368,   394,
    5159,  5159,  3960,  5159,  5159,  5259,  -740,  -740,   468,  -740,
    3960,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,   374,
     335,   146,   376,  -740,  -740,   387,  -740,   208,  5018,   375,
     515,  -740,   384,   335,   388,   393,  -740,  -740,   396,   416,
      48,    -4,  3043,  -740,  3960,  -740,    14,  5159,  2388,  -740,
    3960,  3960,   398,  3960,  -740,  4519,  -740,  4560,   391,   528,
    -740,   399,  5159,   864,   397,  4603,   335,   -16,    15,  -740,
    -740,   253,    16,  -740,  -740,  -740,   530,    18,   394,   208,
     208,   208,   404,  -740,  2519,    -5,   286,  -740,  4091,   208,
     345,  -740,   335,  -740,   -69,   -52,   407,  4644,   408,  3960,
     125,   406,   168,   125,    53,   489,  -740,   492,  -740,   444,
    -740,  -740,   -27,   505,    54,  -740,  3960,  -740,   541,  -740,
    -740,  3960,  3960,  3960,  3960,  3960,  3960,  3960,  3960,  3960,
    3960,  3960,  3960,  3960,  3960,  3960,  3960,  3960,  3960,  3960,
     272,  -740,  -740,  -740,  3174,  3960,  3960,  3960,  3960,  3960,
    3960,  3960,  3960,  3960,  3960,  3960,  -740,   161,  3960,  -740,
    3960,  3960,   205,    55,   422,  4685,  -740,   335,   186,   209,
     209,  -740,  -740,  3305,  -740,  3436,  -740,   335,   388,     2,
     424,     2,  -740,    -6,  -740,  4728,  4770,  3960,  -740,   493,
    3960,   423,   569,  5159,   490,  1164,   510,  4811,  -740,  -740,
    -740,   248,  -740,  -740,  -740,  -740,   115,   511,     7,  -740,
    3960,  -740,  -740,   -41,  -740,   248,   513,  -740,   440,     8,
    -740,  -740,  -740,    25,   438,   441,   329,   451,  -740,   519,
    -740,  -740,   542,  1537,   449,  -740,  -740,  -740,   -46,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  1729,  4224,  -740,  -740,
    -740,  3567,   595,    99,  -740,   491,  -740,  -740,  3960,   461,
    3960,   462,    -6,   464,    -4,  3960,  5236,  3960,  -740,  3960,
    3960,  3960,  2569,  2700,  1373,  2829,  2829,  2829,  2829,  1413,
    1413,  1413,  1413,   578,   578,   386,   386,   386,   468,   468,
     468,  -740,   -25,  5259,  5259,  5259,  5259,  5259,  5259,  5259,
    5259,  5259,  5259,  5259,  5259,  3567,   461,   465,   470,  5159,
     474,   209,   475,  4265,  -740,   220,  -740,   208,  5159,   208,
    5059,   388,  -740,  3567,  -740,  -740,   209,  -740,   591,  5159,
     482,  4852,  -740,  -740,  -740,  -740,   619,    32,  -740,   248,
     248,   248,   484,   -31,   488,   335,   -85,   507,  -740,  -740,
    -740,   496,   583,  -740,  -740,  4306,  -740,  -740,   640,  -740,
     208,   504,  -740,  -740,  -740,  -740,   517,  -740,    33,  -740,
    -740,   379,  -740,  3960,  -740,  -740,  -740,   503,  -740,  3567,
      30,   518,  -740,  -740,  -740,  -740,  -740,   208,   509,   652,
      34,   120,   248,   516,   335,   388,  -740,   546,    99,   529,
     520,   265,   525,  4351,  -740,  -740,    -6,  5199,  5259,  3960,
    5118,  5281,  5302,   272,  -740,   521,  -740,  -740,  -740,  -740,
    -740,    29,  -740,  -740,  -740,  -740,  -740,  3698,   532,  -740,
    -740,  2388,  -740,  -740,  3960,  3960,   208,     0,   248,   612,
    1861,    -1,  -740,  -740,   560,   533,   677,   248,   550,   335,
     177,   621,   593,  -740,  -740,   248,   265,  -740,  -740,   208,
    -740,   329,   680,  -740,  -740,  -740,   539,  1039,  3567,  -740,
     543,   547,  -740,   153,   548,  -740,  -740,  3829,  -740,   335,
     388,    99,   549,   692,  -740,  -740,   265,  -740,  -740,   553,
     697,    26,  -740,  -740,  -740,  3567,  3567,  1585,  -740,  -740,
    -740,  3567,  3567,  -740,   557,  3960,  3960,   208,  5159,  -740,
    -740,  -740,  -740,  3960,  1993,   556,  5159,   585,   208,   585,
    -740,  -740,   698,  -740,  -740,  -740,   559,   561,  -740,   248,
    -740,   248,  -740,   564,   200,  -740,   567,  -740,   568,  -740,
     329,  -740,  3960,  -740,   570,   572,  -740,  -740,  3960,   209,
     594,   178,  -740,  -740,   573,   208,    37,   237,   388,   692,
    -740,    99,   395,   576,   616,   204,   654,   715,   580,   581,
    3960,   424,   584,   590,  -740,   671,   674,  -740,   601,  4392,
    -740,   634,    38,  -740,  4894,  -740,  -740,  -740,  -740,     0,
     611,  -740,   614,   248,   673,  -740,   354,  -740,   149,  -740,
     641,  -740,  -740,   616,    41,  5259,  -740,  -740,   617,  -740,
    -740,  3960,   594,  -740,  -740,   566,  -740,   695,    99,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
     403,   487,  -740,    20,   622,   626,   624,    27,   766,   248,
    -740,  -740,  1585,  -740,  -740,  -740,  3567,  3960,  3960,   594,
    -740,  -740,   209,  -740,  -740,   373,   629,   703,  3960,  -740,
    -740,  -740,  -740,   639,   371,   642,  3960,     1,   292,  -740,
     248,    99,   643,  -740,  -740,   557,   637,   594,  -740,   781,
       9,  -740,   724,   394,  -740,   727,  -740,  -740,   273,  -740,
     726,   787,   248,  -740,   653,   649,   650,  -740,  -740,   392,
     657,  2388,  -740,  -740,   656,   658,  2125,  2125,  -740,   661,
    -740,  4435,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,   248,    99,  -740,   155,  -740,   796,    22,   743,   802,
     663,   744,  -740,    43,   667,   809,   248,  -740,  -740,  -740,
    -740,   678,   800,   760,  3960,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,   756,   679,  -740,  -740,   740,
     681,   155,  -740,   684,   741,   731,   689,   699,   248,   768,
    -740,  -740,   248,  -740,  -740,   310,  -740,  -740,   248,  -740,
    3960,  -740,   693,  4935,  2257,   758,  -740,   -32,   696,  -740,
    -740,  -740,  -740,   536,    99,  -740,   776,  -740,   835,   701,
    -740,   778,  -740,  -740,  4976,   786,  -740,  -740,  -740,  -740,
    -740,   706,   214,  -740,   788,   789,   853,  -740,  -740,   248,
     265,  -740,   836,  2388,   779,  -740,   714,  -740,    99,  -740,
     717,  -740,  -740,   719,  -740,  -740,   260,  -740,  -740,   718,
    -740,  -740,  -740,   412,  -740,   720,   770,  -740,   745,  -740,
     770,  -740,    99,  -740,  -740,   803,   739,  -740,   746,  -740,
     749,  -740
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -740,  -740,  -341,  -740,   -23,  -740,  -740,  -740,  -740,   565,
    -740,  -105,  -740,  -740,     4,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
     -78,  -740,  -740,  -740,   419,   552,   554,  -114,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,   295,   266,
     198,  -740,    82,  -740,  -740,  -740,  -378,  -740,  -740,    81,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -569,  -740,   229,
    -391,  -740,  -740,   586,  -740,   235,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,    40,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -739,  -740,  -740,  -740,  -540,
    -740,  -740,   190,  -740,  -740,  -740,  -740,  -740,   849,  -740,
      19,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,    -2,   207,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,    12,  -330,  -250,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,   238,   378,   592,  -740,
    -740,   364,   366,  -740,   733,   742,  -426,   452,   764,  -740,
    -740,  -740,  -650,  -740,  -740,  -740,  -740,   139,  -213,  -740,
     582,  -740,  -740,  -740,   -24,   -12,  -740,  -271,  -440,  -740,
    -740,   132,    39,   278,   358,  -740,   736,  -740,   400,   305,
    -740,  -740,  -740,  -740,  -740,  -740
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -471
static const yytype_int16 yytable[] =
{
     141,   141,    96,   159,   154,   284,   549,   658,    86,   432,
     411,   545,   804,   546,   635,   160,   480,   842,   497,   227,
     730,   381,   307,   328,   333,   646,   336,   832,   805,   187,
     889,   638,   190,   482,   535,   142,   142,   683,   533,   155,
     559,   581,  -169,   516,   376,  -172,   116,   568,    34,   581,
     214,   895,   548,   215,   198,   280,   348,   686,   810,  -361,
    -138,  -138,  -138,   225,   427,     3,   161,    -2,   181,    34,
     196,   116,   122,    34,   327,    34,   381,   427,   116,   225,
     194,   595,   360,   361,   338,   162,   442,   138,   445,  -361,
     625,  -249,  -363,   225,   226,    47,   225,   362,  -362,   687,
     811,   283,   225,   496,   -41,   -41,   -41,   522,   591,   280,
     207,   280,   138,   191,   164,   198,   280,   288,   349,   817,
     139,  -138,   377,   140,   141,   379,   205,    34,  -170,    80,
     298,   355,   225,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   139,   281,   730,   140,   303,
     282,   647,   833,  -249,    80,   186,    80,   590,   481,   142,
     843,   844,   228,   326,   165,   308,   329,   334,   141,   337,
     116,   806,   309,   890,   935,   483,   141,   141,   141,  -427,
    -427,   626,   560,   582,  -169,   116,   141,  -172,   604,   358,
     314,   793,  -447,   896,  -447,   208,   209,   665,   205,  -443,
     281,   700,   281,   142,  -444,   472,   380,   281,    80,   169,
     369,   142,   142,   142,   668,   205,   262,   263,   539,   471,
     220,   142,   382,   205,   688,   689,   879,   170,   223,   729,
     692,   693,   426,   539,    34,   171,   159,   154,   825,   731,
     173,   205,   786,   787,   513,  -173,   355,   514,   160,   734,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   212,   225,   435,   382,   213,   208,   209,   718,
    -170,   604,   155,   384,   441,   116,   669,   382,   382,   116,
     436,    34,    34,   619,   208,   209,   178,   382,   179,   382,
     459,   460,   208,   209,   225,   226,  -427,  -427,   466,   161,
     513,  -244,   789,   514,   851,   187,  -136,  -136,  -136,   461,
     208,   209,   466,   380,   195,    80,   384,    30,    31,   116,
     138,  -363,   199,   141,   116,   225,    34,    36,   384,   384,
     607,   608,   818,   467,   225,   362,   116,   784,   384,   788,
     384,   921,   200,   116,  -362,    34,   852,   467,   225,   513,
     515,   736,   514,   139,   698,   201,   140,   219,   142,   205,
     138,   380,    80,    80,    96,   138,   383,  -136,   225,   496,
     503,   950,   526,   202,   462,   814,    66,    67,    68,    69,
      70,    71,   203,   922,   138,   786,   787,  -173,   463,   141,
     510,   607,   608,   464,    74,    75,   465,   728,   139,   205,
     116,   140,    34,   204,   206,   330,   116,    80,   801,   428,
     513,   960,   961,   514,   141,  -154,   141,   152,   205,   382,
     153,   383,   428,   355,   142,   231,    80,   350,   208,   209,
     229,   257,   258,   259,   382,   260,   466,   466,   466,   820,
     821,   138,   570,   230,   510,   835,   785,   786,   787,   142,
     583,   142,   584,   585,   486,   234,   539,   141,   861,   862,
     796,   837,   510,   829,   786,   787,  -449,   207,   208,   209,
     384,   467,   467,   467,   139,   143,   146,   140,  -148,  -148,
    -148,   222,   224,    80,   141,   384,   356,   208,   209,   466,
     276,   600,   142,   277,   737,   515,   815,   816,   515,   738,
     278,    47,   739,   740,   741,   742,   743,   744,   745,   159,
     154,   351,   878,   279,   887,   357,   212,   260,   510,   142,
     289,   160,   287,   295,   467,   351,   702,   357,   351,   357,
     294,   290,   297,   141,   141,   466,   225,   299,   714,   302,
     301,   321,   320,   335,   466,   155,   654,   316,   746,   324,
     322,   887,   466,   515,   345,   632,   141,   363,   141,   539,
     370,   365,   368,   372,   644,   373,   378,   388,   142,   142,
     467,   377,   161,   443,   452,   450,   678,   453,   515,   467,
     454,   456,   473,   515,   937,  -218,   478,   467,   484,   479,
     492,   142,   485,   142,   739,   740,   741,   742,   743,   744,
     777,   490,   495,   493,   141,   145,   145,   510,   512,   158,
    -470,   524,   518,   525,   536,   141,   676,   550,   955,   537,
     254,   255,   256,   257,   258,   259,   466,   260,   466,   538,
     543,   552,   558,   567,   510,   510,   569,   141,   706,   142,
     510,   510,   974,   739,   740,   741,   742,   743,   744,   572,
     142,   571,   141,   575,   573,   578,   589,   382,   515,   596,
     597,   467,   515,   467,   599,   737,   580,   594,   601,   606,
     738,   620,   142,   739,   740,   741,   742,   743,   744,   745,
     613,   605,   629,   642,   649,   651,   141,   142,   650,   848,
     466,   350,   655,   662,   663,   656,   666,   667,   674,   468,
     681,   680,   850,   684,   854,   685,   694,   708,   384,   709,
     715,   713,   717,   468,   721,   515,   722,   669,   723,   798,
     755,   142,   727,   726,   733,   467,   754,   758,   759,   145,
     760,   761,   767,   876,   764,   768,   466,   101,   120,   121,
     765,   123,   124,   125,   126,   127,   128,   129,   803,   131,
     132,   133,   134,   135,   136,   137,   770,   772,   148,   151,
     382,   780,   783,   905,   781,   790,   799,   466,   515,   907,
     167,   467,   794,   145,   807,   808,   809,   175,   177,   812,
     823,   145,   145,   145,   185,   510,   824,   144,   144,   466,
     828,   145,   840,   830,   841,   838,   925,   846,   849,   855,
     856,   932,   467,   858,   859,   860,   864,   866,   867,   888,
     217,   384,   872,   183,   891,   892,   893,   894,   466,   515,
     897,   515,   898,   944,   467,   865,   901,   900,   902,   908,
    -206,   913,   909,   466,   910,   912,   914,   468,   468,   468,
     915,   918,   158,   916,   926,   931,   933,   938,   939,   959,
     940,   941,   963,   467,  -152,   285,   965,   945,   515,   947,
    -212,   948,   951,   286,   953,   466,   954,   956,   467,   466,
     958,   964,   968,   967,   980,   466,   976,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   977,
     468,   515,   973,   474,   972,   305,   679,   306,   979,   577,
     467,   101,   981,   313,   467,   712,   317,   779,   929,   871,
     467,   292,   873,   469,   757,   735,   466,   515,   504,   476,
     505,   911,   797,  -427,  -427,   515,   216,   477,   145,   763,
     792,   653,   652,   331,   839,   315,   468,   148,   724,   661,
     347,   353,     0,     0,     0,   468,     0,   952,     0,   515,
       0,   467,   367,   468,     0,   332,     0,     0,     0,     0,
       0,     0,     0,   341,   342,   344,     0,     0,     0,   386,
       0,     0,     0,   354,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,     0,   145,     0,     0,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,     0,
       0,   429,     0,   429,   433,   323,     0,     0,     0,   145,
       0,   145,     0,     0,     0,     0,   438,   468,   440,   468,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     449,     0,     0,   451,     0,     0,     0,     0,   235,   236,
     237,   562,   563,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   145,   475,   238,     0,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,     0,   260,   145,
       0,   468,     0,     0,     0,     0,     0,     0,     0,   101,
       0,     0,     0,     0,   598,     0,     0,     0,     0,     0,
     487,   429,     0,   523,     0,   158,     0,     0,   527,     0,
     528,     0,   530,   531,   532,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   511,     0,   468,   145,   145,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     641,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   145,     0,   145,     0,     0,     0,   657,   468,     0,
       0,     0,     0,     0,     0,     0,   534,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   511,
     468,     0,     0,     0,   664,     0,     0,     0,     0,     0,
       0,   292,     0,   292,     0,     0,     0,   511,     0,   145,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   468,
     145,     0,     0,  -427,  -427,     0,   587,     0,     0,     0,
       0,     0,     0,     0,   468,     0,     0,     0,     0,     0,
       0,   719,   145,   720,   341,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   455,     0,     0,   145,     0,     0,
       0,     0,   617,   511,     0,     0,   468,     0,     0,     0,
     468,   292,     0,     0,     0,     0,   468,     0,     0,     0,
     628,     0,     0,     0,   101,     0,     0,   313,   636,     0,
       0,   145,     0,   101,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   782,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   468,     0,     0,
     637,   640,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   659,     0,   487,     0,     0,     0,     0,
       0,   813,   511,     0,     0,     0,     0,     0,   429,   699,
       0,   677,     0,     0,     0,     0,   704,   101,  -427,  -427,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   511,
     511,     0,   836,     0,     0,   511,   511,     0,     0,     0,
       0,   292,     0,     0,     0,   725,     0,     0,     0,     0,
       0,   429,   711,     0,   857,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,     0,   260,   762,   487,     0,     0,     0,     0,     0,
       0,     0,     0,   877,     0,     0,     0,     0,     0,   292,
       0,     0,     0,     0,     0,     0,     0,     0,   899,  -471,
    -471,  -471,  -471,   252,   253,   254,   255,   256,   257,   258,
     259,     0,   260,     0,   429,     0,     0,     0,     0,     0,
       0,     0,     0,   640,     0,     0,     0,     0,     0,     0,
     917,     0,     0,     0,   920,     0,     0,     0,     0,     0,
     923,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     429,   429,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   313,     0,     0,     0,     0,     0,     0,     0,   831,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     511,   949,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   235,   236,   237,     0,
       0,     0,     0,     0,   101,     0,     0,     0,     0,   101,
     101,     0,   238,     0,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,     0,   260,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   903,     0,     0,
       0,     5,     6,     7,     8,     9,     0,     0,     0,     0,
      10,     0,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   924,   260,     0,     0,   101,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,     0,     0,     0,    30,    31,    32,
      33,    34,     0,    35,     0,     0,   101,    36,    37,    38,
      39,     0,    40,     0,    41,     0,    42,     0,     0,    43,
     494,     0,     0,    44,    45,    46,    47,    48,    49,    50,
       0,    51,    52,     0,    53,     0,     0,     0,    54,    55,
      56,     0,    57,    58,    59,    60,    61,    62,    63,     0,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,     5,     6,     7,     8,     9,     0,    72,     0,
       0,    10,     0,    73,    74,    75,    76,    77,     0,    78,
      79,     0,    80,     0,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,     0,     0,    30,    31,
      32,    33,    34,     0,    35,     0,     0,     0,    36,    37,
      38,    39,     0,    40,     0,    41,     0,    42,     0,     0,
      43,     0,     0,     0,    44,    45,    46,    47,     0,    49,
      50,     0,    51,     0,     0,    53,     0,     0,     0,    54,
      55,    56,     0,    57,    58,    59,   501,    61,    62,    63,
       0,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,     0,     5,     6,     7,     8,     9,    72,
       0,     0,     0,    10,   118,    74,    75,    76,    77,     0,
      78,    79,     0,    80,     0,    81,    82,   643,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,     0,     0,
      30,    31,    32,    33,    34,     0,    35,     0,     0,     0,
      36,    37,    38,    39,     0,    40,     0,    41,     0,    42,
       0,     0,    43,     0,     0,     0,    44,    45,    46,    47,
       0,    49,    50,     0,    51,     0,     0,    53,     0,     0,
       0,     0,     0,    56,     0,    57,    58,    59,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,     0,     5,     6,     7,     8,
       9,    72,     0,     0,     0,    10,   118,    74,    75,    76,
      77,     0,    78,    79,     0,    80,     0,    81,    82,   705,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
       0,     0,    30,    31,    32,    33,    34,     0,    35,     0,
       0,     0,    36,    37,    38,    39,     0,    40,     0,    41,
       0,    42,     0,     0,    43,     0,     0,     0,    44,    45,
      46,    47,     0,    49,    50,     0,    51,     0,     0,    53,
       0,     0,     0,     0,     0,    56,     0,    57,    58,    59,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,     0,     5,     6,
       7,     8,     9,    72,     0,     0,     0,    10,   118,    74,
      75,    76,    77,     0,    78,    79,     0,    80,     0,    81,
      82,   868,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,     0,     0,    30,    31,    32,    33,    34,     0,
      35,     0,     0,     0,    36,    37,    38,    39,     0,    40,
       0,    41,     0,    42,     0,     0,    43,     0,     0,     0,
      44,    45,    46,    47,     0,    49,    50,     0,    51,     0,
       0,    53,     0,     0,     0,     0,     0,    56,     0,    57,
      58,    59,     0,     0,     0,     0,     0,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,     0,
       5,     6,     7,     8,     9,    72,     0,     0,     0,    10,
     118,    74,    75,    76,    77,     0,    78,    79,     0,    80,
       0,    81,    82,   928,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,     0,     0,    30,    31,    32,    33,
      34,     0,    35,     0,     0,     0,    36,    37,    38,    39,
       0,    40,     0,    41,     0,    42,     0,     0,    43,     0,
       0,     0,    44,    45,    46,    47,     0,    49,    50,     0,
      51,     0,     0,    53,     0,     0,     0,     0,     0,    56,
       0,    57,    58,    59,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,     5,     6,     7,     8,     9,     0,    72,     0,     0,
      10,     0,   118,    74,    75,    76,    77,     0,    78,    79,
       0,    80,     0,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,     0,     0,     0,    30,    31,    32,
      33,    34,     0,    35,     0,     0,     0,    36,    37,    38,
      39,     0,    40,     0,    41,     0,    42,     0,     0,    43,
       0,     0,     0,    44,    45,    46,    47,     0,    49,    50,
       0,    51,     0,     0,    53,     0,     0,     0,     0,     0,
      56,     0,    57,    58,    59,     0,     0,     0,     0,     0,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,     5,     6,     7,     8,     9,     0,    72,     0,
       0,    10,     0,   118,    74,    75,    76,    77,     0,    78,
      79,     0,    80,     0,    81,    82,     0,     0,     0,     0,
     147,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     0,     0,     0,     0,    30,    31,
     116,    33,    34,     0,     0,     0,     0,     0,    36,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,    47,   260,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,     0,     0,    58,    59,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,     5,     6,     7,     8,     9,     0,    72,
       0,     0,    10,     0,   118,    74,    75,    76,    77,     0,
       0,     0,     0,    80,     0,    81,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,     0,     0,     0,    30,
      31,   116,    33,    34,     0,     0,     0,     0,     0,    36,
       0,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,    47,   260,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   117,     0,     0,    58,    59,     0,     0,     0,
       0,     0,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,     5,     6,     7,     8,     9,     0,
      72,     0,     0,    10,     0,   118,    74,    75,    76,    77,
       0,   174,     0,     0,    80,     0,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,     0,     0,     0,     0,
      30,    31,   116,    33,    34,     0,     0,     0,     0,     0,
      36,  -471,  -471,  -471,  -471,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,     0,   260,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   117,     0,     0,    58,    59,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,     5,     6,     7,     8,     9,
       0,    72,     0,     0,    10,     0,   118,    74,    75,    76,
      77,     0,   176,     0,     0,    80,     0,    81,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     0,     0,     0,
       0,    30,    31,   116,    33,    34,     0,     0,     0,     0,
       0,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   117,     0,     0,    58,    59,     0,
       0,     0,     0,     0,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,     5,     6,     7,     8,
       9,     0,    72,     0,     0,    10,     0,   118,    74,    75,
      76,    77,     0,   180,     0,     0,    80,     0,    81,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,    30,    31,   116,    33,    34,     0,     0,     0,
       0,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,     0,     0,    58,    59,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,     5,     6,     7,
       8,     9,     0,    72,     0,     0,    10,     0,   118,    74,
      75,    76,    77,   304,     0,     0,     0,    80,     0,    81,
      82,     0,     0,     0,     0,   412,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
       0,     0,     0,    30,    31,   116,    33,    34,     0,     0,
       0,     0,     0,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   117,     0,     0,    58,
      59,     0,     0,     0,     0,     0,     0,     0,     0,    64,
      65,     0,    66,    67,    68,    69,    70,    71,     5,     6,
       7,     8,     9,     0,    72,     0,     0,    10,     0,   118,
      74,    75,    76,    77,     0,     0,     0,     0,    80,     0,
      81,    82,     0,     0,     0,     0,   437,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,     0,     0,     0,    30,    31,   116,    33,    34,     0,
       0,     0,     0,     0,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   117,     0,     0,
      58,    59,     0,     0,     0,     0,     0,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,     5,
       6,     7,     8,     9,     0,    72,     0,     0,    10,     0,
     118,    74,    75,    76,    77,     0,     0,     0,     0,    80,
       0,    81,    82,     0,     0,     0,     0,   439,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,     0,     0,     0,    30,    31,   116,    33,    34,
       0,     0,     0,     0,     0,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   117,     0,
       0,    58,    59,     0,     0,     0,     0,     0,     0,     0,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    71,
       5,     6,     7,     8,     9,     0,    72,     0,     0,    10,
       0,   118,    74,    75,    76,    77,     0,     0,     0,     0,
      80,     0,    81,    82,     0,     0,     0,     0,   507,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,     0,     0,     0,     0,    30,    31,   116,    33,
      34,     0,     0,     0,     0,     0,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
       0,     0,    58,    59,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,     5,     6,     7,     8,     9,     0,    72,     0,     0,
      10,     0,   118,    74,    75,    76,    77,     0,     0,     0,
       0,    80,     0,    81,    82,     0,     0,     0,     0,   627,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     0,     0,     0,     0,    30,    31,   116,
      33,    34,     0,     0,     0,     0,     0,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     117,     0,     0,    58,    59,     0,     0,     0,     0,     0,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,     5,     6,     7,     8,     9,     0,    72,     0,
       0,    10,     0,   118,    74,    75,    76,    77,     0,     0,
       0,     0,    80,     0,    81,    82,     0,     0,     0,     0,
     675,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     0,     0,     0,     0,    30,    31,
     116,    33,    34,     0,     0,     0,     0,     0,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,     0,     0,    58,    59,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,     5,     6,     7,     8,     9,     0,    72,
       0,     0,    10,     0,   118,    74,    75,    76,    77,     0,
       0,     0,     0,    80,     0,    81,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,     0,     0,     0,    30,
      31,   116,    33,    34,     0,     0,     0,     0,     0,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   117,     0,     0,    58,    59,     0,     0,     0,
       0,     0,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,     5,     6,     7,     8,     9,     0,
      72,     0,     0,    10,     0,   118,    74,    75,    76,    77,
       0,     0,     0,     0,    80,     0,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,     0,     0,     0,     0,
      30,    31,   116,   352,    34,     0,     0,     0,     0,     0,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   117,     0,     0,    58,    59,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,     0,     0,     0,     0,     0,
       0,    72,     0,   235,   236,   237,   118,    74,    75,    76,
      77,     0,     0,     0,     0,    80,     0,    81,    82,   238,
       0,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,     0,   260,   235,   236,   237,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     238,     0,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,     0,   260,   235,   236,   237,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   238,     0,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,     0,   260,     0,     0,     0,     0,
     235,   236,   237,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   238,   506,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,     0,
     260,   235,   236,   237,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   238,   544,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
       0,   260,     0,     0,   235,   236,   237,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   574,
     238,   832,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,     0,   260,     0,     0,   235,   236,   237,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   238,   614,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,     0,   260,   235,   236,
     237,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   238,   771,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,     0,   260,   235,
     236,   237,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   238,   833,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,     0,   260,
       0,     0,   235,   236,   237,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   238,   261,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,     0,   260,   235,   236,   237,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   238,
     318,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,     0,   260,   235,   236,   237,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     238,   319,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,     0,   260,     0,     0,   235,   236,   237,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   238,   325,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,     0,   260,     0,   235,
     236,   237,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   364,   238,     0,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,     0,   260,
     235,   236,   237,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   434,   238,     0,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,     0,
     260,   235,   236,   237,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   238,   447,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
       0,   260,     0,   235,   236,   237,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   238,
     448,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,     0,   260,   235,   236,   237,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     238,   458,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,     0,   260,   235,   236,   237,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   238,   553,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,     0,   260,     0,   235,   236,   237,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   238,   776,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,     0,   260,   235,   236,
     237,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   238,   927,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,     0,   260,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   942,   235,   236,   237,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   293,   238,   618,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,     0,   260,   235,   236,
     237,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   547,   238,     0,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,     0,   260,   236,
     237,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   238,     0,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   237,   260,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   238,     0,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   238,   260,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,     0,   260,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,     0,
     260,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
       0,   260
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-740))

#define yytable_value_is_error(yytable_value) \
  ((yytable_value) == (-471))

static const yytype_int16 yycheck[] =
{
      23,    24,     4,    27,    27,   119,   446,   576,     4,   280,
     260,   437,   751,   439,   554,    27,     8,     8,   359,     8,
     670,   234,     8,     8,     8,    26,     8,    26,     8,    52,
       8,    31,    73,     8,   425,    23,    24,   606,    63,    27,
       8,     8,     8,   373,    71,     8,    71,    78,    73,     8,
      73,     8,   443,    76,    56,    61,    61,    31,    31,   144,
      92,    93,    94,   148,   277,     0,    27,     0,    49,    73,
      73,    71,   149,    73,    90,    73,   289,   290,    71,   148,
     118,   507,   151,   152,   198,   149,   299,   112,   301,   144,
      61,    61,   144,   148,   149,    98,   148,   149,   144,    73,
      73,   113,   148,   149,    66,    67,    68,   378,   499,    61,
     141,    61,   112,   154,   149,   117,    61,   140,   123,   769,
     145,   153,   149,   148,   147,    71,    73,    73,     8,   154,
     153,    78,   148,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   145,   152,   797,   148,   161,
     154,   152,   151,   123,   154,   148,   154,   498,   150,   147,
     151,   152,   151,   186,    26,   151,   151,   151,   191,   151,
      71,   151,   168,   151,   913,   150,   199,   200,   201,    59,
      60,   152,   150,   150,   150,    71,   209,   150,   518,   212,
     171,   150,   144,   150,   144,   142,   143,   588,    73,   149,
     152,   627,   152,   191,   149,    90,   152,   152,   154,   149,
     157,   199,   200,   201,    61,    73,    59,    60,   431,   324,
      78,   209,   234,    73,   615,   616,    71,   149,    78,   669,
     621,   622,    71,   446,    73,   149,   260,   260,   778,    61,
     149,    73,    93,    94,   145,     8,    78,   148,   260,   675,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   148,   148,   287,   277,   152,   142,   143,   647,
     150,   601,   260,   234,   297,    71,   123,   289,   290,    71,
      71,    73,    73,   533,   142,   143,    71,   299,    71,   301,
      42,    43,   142,   143,   148,   149,    59,    60,   321,   260,
     145,   123,   153,   148,    31,   328,    92,    93,    94,    61,
     142,   143,   335,   152,   118,   154,   277,    69,    70,    71,
     112,   144,   149,   346,    71,   148,    73,    79,   289,   290,
     126,   127,   772,   321,   148,   149,    71,   715,   299,   717,
     301,    31,   149,    71,   144,    73,    73,   335,   148,   145,
     373,   681,   148,   145,   625,   149,   148,   152,   346,    73,
     112,   152,   154,   154,   366,   112,   234,   153,   148,   149,
     366,   940,   384,   149,   126,   766,   128,   129,   130,   131,
     132,   133,   149,    73,   112,    93,    94,   150,   140,   412,
     371,   126,   127,   145,   146,   147,   148,   668,   145,    73,
      71,   148,    73,   149,    78,   152,    71,   154,   738,   277,
     145,   151,   152,   148,   437,   150,   439,   145,    73,   431,
     148,   289,   290,    78,   412,    31,   154,   141,   142,   143,
      71,    45,    46,    47,   446,    49,   459,   460,   461,    66,
      67,   112,   465,    71,   425,   153,    92,    93,    94,   437,
      71,   439,    73,    74,   125,   144,   669,   480,    66,    67,
     731,   791,   443,    92,    93,    94,    61,   141,   142,   143,
     431,   459,   460,   461,   145,    23,    24,   148,    66,    67,
      68,    81,    82,   154,   507,   446,   141,   142,   143,   512,
     149,   514,   480,   144,    99,   518,   767,   768,   521,   104,
      61,    98,   107,   108,   109,   110,   111,   112,   113,   533,
     533,   206,   842,   123,   844,   210,   148,    49,   499,   507,
     144,   533,   148,     8,   512,   220,   631,   222,   223,   224,
     155,   144,   148,   556,   557,   558,   148,   144,   643,   123,
     144,    13,   151,    13,   567,   533,   569,   149,   153,   152,
     151,   881,   575,   576,   150,   551,   579,   150,   581,   772,
      71,   153,   156,    71,   560,   121,    61,    26,   556,   557,
     558,   149,   533,   149,   151,    82,   599,     8,   601,   567,
      90,    71,    71,   606,   914,    98,    73,   575,   150,   149,
      71,   579,   151,   581,   107,   108,   109,   110,   111,   112,
     705,   150,   153,    61,   627,    23,    24,   588,    13,    27,
     149,   149,   121,   149,   149,   638,   597,    26,   948,   149,
      42,    43,    44,    45,    46,    47,   649,    49,   651,   155,
     155,   149,    13,   149,   615,   616,   148,   660,   634,   627,
     621,   622,   972,   107,   108,   109,   110,   111,   112,   153,
     638,   144,   675,    13,    71,   151,   153,   669,   681,   150,
       8,   649,   685,   651,   148,    99,   149,   149,   122,   149,
     104,   150,   660,   107,   108,   109,   110,   111,   112,   113,
     155,   152,   150,    71,   124,     8,   709,   675,   155,   803,
     713,   141,    71,    13,   155,   102,   153,   150,   150,   321,
       8,   152,   807,   150,   809,     8,   149,   151,   669,   124,
     151,    13,   151,   335,   150,   738,   149,   123,   150,   153,
     104,   709,   150,   153,   151,   713,   150,    73,    13,   147,
     150,   150,    61,   838,   150,    61,   759,     4,     5,     6,
     150,     8,     9,    10,    11,    12,    13,    14,   750,    16,
      17,    18,    19,    20,    21,    22,   155,   123,    25,    26,
     772,   150,    89,   868,   150,   124,    71,   790,   791,   874,
      37,   759,   155,   191,   152,   149,   152,    44,    45,    13,
     151,   199,   200,   201,    51,   766,    83,    23,    24,   812,
     151,   209,   155,   151,    13,   152,   901,    73,    71,    73,
      13,   906,   790,   150,   155,   155,   149,   151,   150,    13,
      77,   772,   151,    49,    71,    13,   153,    73,   841,   842,
     153,   844,    13,   928,   812,   821,    26,   149,    68,    73,
      90,    90,   153,   856,   153,   151,   105,   459,   460,   461,
     151,    73,   260,   144,   151,    87,   150,    71,    13,   954,
     149,    73,   957,   841,    68,   122,   961,   151,   881,    71,
      71,     8,    26,   130,    85,   888,   152,   150,   856,   892,
     151,   153,   102,   153,   979,   898,    73,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,   150,
     512,   914,   970,   328,   149,   162,   601,   164,   152,   480,
     888,   168,   153,   170,   892,   639,   173,   709,   904,   827,
     898,   147,   831,   321,   685,   680,   939,   940,   366,   333,
     366,   881,   732,    59,    60,   948,    77,   335,   346,   691,
     723,   567,   566,   191,   795,   171,   558,   204,   660,   581,
     204,   208,    -1,    -1,    -1,   567,    -1,   943,    -1,   972,
      -1,   939,   219,   575,    -1,   191,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   199,   200,   201,    -1,    -1,    -1,   236,
      -1,    -1,    -1,   209,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,    -1,   412,    -1,    -1,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,    -1,
      -1,   278,    -1,   280,   281,   151,    -1,    -1,    -1,   437,
      -1,   439,    -1,    -1,    -1,    -1,   293,   649,   295,   651,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     307,    -1,    -1,   310,    -1,    -1,    -1,    -1,     9,    10,
      11,   459,   460,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   480,   330,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,   507,
      -1,   713,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   366,
      -1,    -1,    -1,    -1,   512,    -1,    -1,    -1,    -1,    -1,
     346,   378,    -1,   380,    -1,   533,    -1,    -1,   385,    -1,
     387,    -1,   389,   390,   391,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   371,    -1,   759,   556,   557,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     558,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   579,    -1,   581,    -1,    -1,    -1,   575,   790,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   412,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,   425,
     812,    -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,    -1,
      -1,   437,    -1,   439,    -1,    -1,    -1,   443,    -1,   627,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   841,
     638,    -1,    -1,    59,    60,    -1,   493,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   856,    -1,    -1,    -1,    -1,    -1,
      -1,   649,   660,   651,   480,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    -1,    -1,   675,    -1,    -1,
      -1,    -1,   529,   499,    -1,    -1,   888,    -1,    -1,    -1,
     892,   507,    -1,    -1,    -1,    -1,   898,    -1,    -1,    -1,
     547,    -1,    -1,    -1,   551,    -1,    -1,   554,   555,    -1,
      -1,   709,    -1,   560,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   713,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   939,    -1,    -1,
     556,   557,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   579,    -1,   581,    -1,    -1,    -1,    -1,
      -1,   759,   588,    -1,    -1,    -1,    -1,    -1,   625,   626,
      -1,   597,    -1,    -1,    -1,    -1,   633,   634,    59,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   615,
     616,    -1,   790,    -1,    -1,   621,   622,    -1,    -1,    -1,
      -1,   627,    -1,    -1,    -1,   662,    -1,    -1,    -1,    -1,
      -1,   668,   638,    -1,   812,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,   690,   660,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   841,    -1,    -1,    -1,    -1,    -1,   675,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   856,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,   731,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   709,    -1,    -1,    -1,    -1,    -1,    -1,
     888,    -1,    -1,    -1,   892,    -1,    -1,    -1,    -1,    -1,
     898,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     767,   768,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   778,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   786,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     766,   939,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,   821,    -1,    -1,    -1,    -1,   826,
     827,    -1,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   864,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,   900,    49,    -1,    -1,   904,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    75,    -1,    -1,   943,    79,    80,    81,
      82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,
     153,    -1,    -1,    95,    96,    97,    98,    99,   100,   101,
      -1,   103,   104,    -1,   106,    -1,    -1,    -1,   110,   111,
     112,    -1,   114,   115,   116,   117,   118,   119,   120,    -1,
      -1,    -1,    -1,   125,   126,    -1,   128,   129,   130,   131,
     132,   133,     3,     4,     5,     6,     7,    -1,   140,    -1,
      -1,    12,    -1,   145,   146,   147,   148,   149,    -1,   151,
     152,    -1,   154,    -1,   156,   157,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,
      91,    -1,    -1,    -1,    95,    96,    97,    98,    -1,   100,
     101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,
     111,   112,    -1,   114,   115,   116,   117,   118,   119,   120,
      -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,   130,
     131,   132,   133,    -1,     3,     4,     5,     6,     7,   140,
      -1,    -1,    -1,    12,   145,   146,   147,   148,   149,    -1,
     151,   152,    -1,   154,    -1,   156,   157,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    84,    -1,    86,    -1,    88,
      -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,
      -1,   100,   101,    -1,   103,    -1,    -1,   106,    -1,    -1,
      -1,    -1,    -1,   112,    -1,   114,   115,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,   126,    -1,   128,
     129,   130,   131,   132,   133,    -1,     3,     4,     5,     6,
       7,   140,    -1,    -1,    -1,    12,   145,   146,   147,   148,
     149,    -1,   151,   152,    -1,   154,    -1,   156,   157,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    75,    -1,
      -1,    -1,    79,    80,    81,    82,    -1,    84,    -1,    86,
      -1,    88,    -1,    -1,    91,    -1,    -1,    -1,    95,    96,
      97,    98,    -1,   100,   101,    -1,   103,    -1,    -1,   106,
      -1,    -1,    -1,    -1,    -1,   112,    -1,   114,   115,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,
      -1,   128,   129,   130,   131,   132,   133,    -1,     3,     4,
       5,     6,     7,   140,    -1,    -1,    -1,    12,   145,   146,
     147,   148,   149,    -1,   151,   152,    -1,   154,    -1,   156,
     157,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,
      -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    -1,   100,   101,    -1,   103,    -1,
      -1,   106,    -1,    -1,    -1,    -1,    -1,   112,    -1,   114,
     115,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     125,   126,    -1,   128,   129,   130,   131,   132,   133,    -1,
       3,     4,     5,     6,     7,   140,    -1,    -1,    -1,    12,
     145,   146,   147,   148,   149,    -1,   151,   152,    -1,   154,
      -1,   156,   157,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,
      -1,    -1,    95,    96,    97,    98,    -1,   100,   101,    -1,
     103,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,   126,    -1,   128,   129,   130,   131,   132,
     133,     3,     4,     5,     6,     7,    -1,   140,    -1,    -1,
      12,    -1,   145,   146,   147,   148,   149,    -1,   151,   152,
      -1,   154,    -1,   156,   157,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,
      -1,    -1,    -1,    95,    96,    97,    98,    -1,   100,   101,
      -1,   103,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,
     112,    -1,   114,   115,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,   126,    -1,   128,   129,   130,   131,
     132,   133,     3,     4,     5,     6,     7,    -1,   140,    -1,
      -1,    12,    -1,   145,   146,   147,   148,   149,    -1,   151,
     152,    -1,   154,    -1,   156,   157,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    98,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    -1,    -1,   115,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,   130,
     131,   132,   133,     3,     4,     5,     6,     7,    -1,   140,
      -1,    -1,    12,    -1,   145,   146,   147,   148,   149,    -1,
      -1,    -1,    -1,   154,    -1,   156,   157,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    98,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,   115,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,
     130,   131,   132,   133,     3,     4,     5,     6,     7,    -1,
     140,    -1,    -1,    12,    -1,   145,   146,   147,   148,   149,
      -1,   151,    -1,    -1,   154,    -1,   156,   157,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      79,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,    -1,    -1,   115,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,   126,    -1,   128,
     129,   130,   131,   132,   133,     3,     4,     5,     6,     7,
      -1,   140,    -1,    -1,    12,    -1,   145,   146,   147,   148,
     149,    -1,   151,    -1,    -1,   154,    -1,   156,   157,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,   115,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,    -1,
     128,   129,   130,   131,   132,   133,     3,     4,     5,     6,
       7,    -1,   140,    -1,    -1,    12,    -1,   145,   146,   147,
     148,   149,    -1,   151,    -1,    -1,   154,    -1,   156,   157,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,
      -1,   128,   129,   130,   131,   132,   133,     3,     4,     5,
       6,     7,    -1,   140,    -1,    -1,    12,    -1,   145,   146,
     147,   148,   149,   150,    -1,    -1,    -1,   154,    -1,   156,
     157,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
     126,    -1,   128,   129,   130,   131,   132,   133,     3,     4,
       5,     6,     7,    -1,   140,    -1,    -1,    12,    -1,   145,
     146,   147,   148,   149,    -1,    -1,    -1,    -1,   154,    -1,
     156,   157,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,
     115,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     125,   126,    -1,   128,   129,   130,   131,   132,   133,     3,
       4,     5,     6,     7,    -1,   140,    -1,    -1,    12,    -1,
     145,   146,   147,   148,   149,    -1,    -1,    -1,    -1,   154,
      -1,   156,   157,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,
      -1,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,   126,    -1,   128,   129,   130,   131,   132,   133,
       3,     4,     5,     6,     7,    -1,   140,    -1,    -1,    12,
      -1,   145,   146,   147,   148,   149,    -1,    -1,    -1,    -1,
     154,    -1,   156,   157,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
      -1,    -1,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,   126,    -1,   128,   129,   130,   131,   132,
     133,     3,     4,     5,     6,     7,    -1,   140,    -1,    -1,
      12,    -1,   145,   146,   147,   148,   149,    -1,    -1,    -1,
      -1,   154,    -1,   156,   157,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,   115,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,   126,    -1,   128,   129,   130,   131,
     132,   133,     3,     4,     5,     6,     7,    -1,   140,    -1,
      -1,    12,    -1,   145,   146,   147,   148,   149,    -1,    -1,
      -1,    -1,   154,    -1,   156,   157,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    -1,    -1,   115,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,   130,
     131,   132,   133,     3,     4,     5,     6,     7,    -1,   140,
      -1,    -1,    12,    -1,   145,   146,   147,   148,   149,    -1,
      -1,    -1,    -1,   154,    -1,   156,   157,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,   115,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,
     130,   131,   132,   133,     3,     4,     5,     6,     7,    -1,
     140,    -1,    -1,    12,    -1,   145,   146,   147,   148,   149,
      -1,    -1,    -1,    -1,   154,    -1,   156,   157,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,    -1,    -1,   115,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,   126,    -1,   128,
     129,   130,   131,   132,   133,    -1,    -1,    -1,    -1,    -1,
      -1,   140,    -1,     9,    10,    11,   145,   146,   147,   148,
     149,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   153,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   153,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   153,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   153,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   151,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   151,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     151,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   151,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   151,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   150,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   150,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   150,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     150,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   150,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   150,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   150,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   150,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   150,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   124,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    11,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    25,    49,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   159,   160,     0,   161,     3,     4,     5,     6,     7,
      12,    42,    43,    48,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      69,    70,    71,    72,    73,    75,    79,    80,    81,    82,
      84,    86,    88,    91,    95,    96,    97,    98,    99,   100,
     101,   103,   104,   106,   110,   111,   112,   114,   115,   116,
     117,   118,   119,   120,   125,   126,   128,   129,   130,   131,
     132,   133,   140,   145,   146,   147,   148,   149,   151,   152,
     154,   156,   157,   162,   163,   168,   172,   173,   203,   204,
     206,   208,   211,   213,   276,   278,   292,   295,   304,   315,
     318,   322,   323,   325,   326,   336,   337,   338,   339,   341,
     342,   343,   344,   350,   360,   363,    71,   112,   145,   292,
     322,   322,   149,   322,   322,   322,   322,   322,   322,   322,
     289,   322,   322,   322,   322,   322,   322,   322,   112,   145,
     148,   162,   304,   325,   326,   338,   325,    31,   322,   354,
     355,   322,   145,   148,   162,   304,   306,   307,   338,   342,
     343,   350,   149,   312,   149,    26,   266,   322,   180,   149,
     149,   149,   190,   149,   151,   322,   151,   322,    71,    71,
     151,   278,   322,   326,   191,   322,   148,   162,   166,   167,
      73,   154,   240,   241,   118,   118,    73,   242,   292,   149,
     149,   149,   149,   149,   149,    73,    78,   141,   142,   143,
     356,   357,   148,   152,   162,   162,   276,   322,   169,   152,
      78,   313,   356,    78,   356,   148,   149,     8,   151,    71,
      71,    31,   205,   340,   144,     9,    10,    11,    25,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      49,   151,    59,    60,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,   149,   144,    61,   123,
      61,   152,   154,   343,   205,   322,   322,   148,   162,   144,
     144,   324,   326,   124,   155,     8,   320,   148,   162,   144,
     277,   144,   123,   343,   150,   322,   322,     8,   151,   172,
     178,   267,   268,   322,   278,   326,   149,   322,   151,   151,
     151,    13,   151,   151,   152,   151,   162,    90,     8,   151,
     152,   323,   326,     8,   151,    13,     8,   151,   205,   201,
     202,   326,   326,   361,   326,   150,   279,   354,    61,   123,
     141,   357,    72,   322,   326,    78,   141,   357,   162,   165,
     151,   152,   149,   150,   150,   153,   170,   322,   156,   157,
      71,   296,    71,   121,   212,   210,    71,   149,    61,    71,
     152,   336,   343,   349,   350,   283,   322,   284,    26,   286,
     281,   282,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   306,    31,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   303,    71,   336,   349,   322,
     345,   327,   345,   322,   150,   162,    71,    31,   322,    31,
     322,   162,   336,   149,   314,   336,   308,   150,   150,   322,
      82,   322,   151,     8,    90,    90,    71,   222,   150,    42,
      43,    61,   126,   140,   145,   148,   162,   304,   315,   316,
     317,   169,    90,    71,   167,   322,   241,   316,    73,   149,
       8,   150,     8,   150,   150,   151,   125,   326,   351,   352,
     150,   358,    71,    61,   153,   153,   149,   160,   164,   298,
     285,   117,   171,   172,   203,   204,   153,    31,   238,   239,
     278,   326,    13,   145,   148,   162,   305,   209,   121,   214,
     207,   290,   345,   322,   149,   149,   343,   322,   322,   288,
     322,   322,   322,    63,   326,   238,   149,   149,   155,   336,
     346,   348,   349,   155,   153,   324,   324,   124,   238,   346,
      26,   174,   149,   150,   182,   269,   188,   186,    13,     8,
     150,   185,   316,   316,   316,   319,   321,   149,    78,   148,
     162,   144,   153,    71,   153,    13,   291,   202,   151,   362,
     149,     8,   150,    71,    73,    74,   359,   322,   297,   153,
     160,   238,   274,   275,   149,   324,   150,     8,   316,   148,
     162,   122,   215,   216,   305,   152,   149,   126,   127,   235,
     236,   237,   305,   155,   153,   300,   299,   322,    26,   306,
     150,   302,   301,   347,   328,    61,   152,    31,   322,   150,
     309,   176,   172,   181,   179,   267,   322,   326,    31,   218,
     326,   316,    71,    26,   172,   221,    26,   152,   223,   124,
     155,     8,   320,   319,   162,    71,   102,   316,   235,   326,
     353,   352,    13,   155,   155,   238,   153,   150,    61,   123,
     270,   271,   272,   330,   150,    31,   278,   326,   162,   216,
     152,     8,   243,   235,   150,     8,    31,    73,   238,   238,
     287,   280,   238,   238,   149,   332,   333,   335,   345,   322,
     324,   310,   169,   175,   322,    26,   172,   228,   151,   124,
     217,   326,   217,    13,   169,   151,   224,   151,   224,   316,
     316,   150,   149,   150,   351,   322,   153,   150,   345,   346,
     330,    61,   273,   151,   324,   243,   305,    99,   104,   107,
     108,   109,   110,   111,   112,   113,   153,   244,   247,   260,
     261,   262,   263,   265,   150,   104,   293,   237,    73,    13,
     150,   150,   322,   314,   150,   150,   334,    61,    61,   329,
     155,   153,   123,   311,   177,   229,   150,   169,   183,   218,
     150,   150,   316,    89,   224,    92,    93,    94,   224,   153,
     124,   192,   293,   150,   155,   331,   345,   270,   153,    71,
     248,   305,   245,   292,   263,     8,   151,   152,   149,   152,
      31,    73,    13,   316,   238,   345,   345,   330,   346,   231,
      66,    67,   233,   151,    83,   267,   189,   187,   151,    92,
     151,   322,    26,   151,   227,   153,   316,   305,   152,   335,
     155,    13,     8,   151,   152,   249,    73,   264,   205,    71,
     169,    31,    73,   294,   169,    73,    13,   316,   150,   155,
     155,    66,    67,   234,   149,   172,   151,   150,    26,   172,
     220,   220,   151,   227,   226,   193,   169,   316,   305,    71,
     250,   251,   252,   253,   255,   256,   257,   305,    13,     8,
     151,    71,    13,   153,    73,     8,   150,   153,    13,   316,
     149,    26,    68,   322,   184,   169,   225,   169,    73,   153,
     153,   252,   151,    90,   105,   151,   144,   316,    73,   246,
     316,    31,    73,   316,   322,   169,   151,   150,    26,   172,
     219,    87,   169,   150,   258,   263,   254,   305,    71,    13,
     149,    73,   150,   230,   169,   151,   194,    71,     8,   316,
     235,    26,   172,    85,   152,   305,   150,   232,   151,   169,
     151,   152,   259,   169,   153,   169,   195,   153,   102,   196,
     197,   198,   149,   198,   305,   199,    73,   150,   200,   152,
     169,   153
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

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
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
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

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

    { zend_do_end_compilation(TSRMLS_C); }
    break;

  case 3:

    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 4:

    { HANDLE_INTERACTIVE(); }
    break;

  case 6:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 7:

    { zend_do_build_namespace_name(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 8:

    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 9:

    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 10:

    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 11:

    { zend_do_halt_compiler_register(TSRMLS_C); YYACCEPT; }
    break;

  case 12:

    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 13:

    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 14:

    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 15:

    { zend_do_begin_namespace(NULL, 1 TSRMLS_CC); }
    break;

  case 16:

    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 17:

    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 18:

    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 21:

    { zend_do_use(&(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 22:

    { zend_do_use(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 23:

    { zend_do_use(&(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 24:

    { zend_do_use(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 25:

    { zend_do_declare_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 26:

    { zend_do_declare_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 27:

    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 28:

    { HANDLE_INTERACTIVE(); }
    break;

  case 33:

    { zend_error(E_COMPILE_ERROR, "__HALT_COMPILER() can only be used from the outermost scope"); }
    break;

  case 34:

    { DO_TICKS(); }
    break;

  case 35:

    { zend_do_label(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 37:

    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 38:

    { zend_do_if_after_statement(&(yyvsp[(4) - (6)]), 1 TSRMLS_CC); }
    break;

  case 39:

    { zend_do_if_end(TSRMLS_C); }
    break;

  case 40:

    { zend_do_if_cond(&(yyvsp[(3) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 41:

    { zend_do_if_after_statement(&(yyvsp[(4) - (7)]), 1 TSRMLS_CC); }
    break;

  case 42:

    { zend_do_if_end(TSRMLS_C); }
    break;

  case 43:

    { (yyvsp[(1) - (2)]).u.op.opline_num = get_next_op_number(CG(active_op_array));  }
    break;

  case 44:

    { zend_do_while_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 45:

    { zend_do_while_end(&(yyvsp[(1) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 46:

    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array));  zend_do_do_while_begin(TSRMLS_C); }
    break;

  case 47:

    { (yyvsp[(5) - (5)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 48:

    { zend_do_do_while_end(&(yyvsp[(1) - (9)]), &(yyvsp[(5) - (9)]), &(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 49:

    { zend_do_free(&(yyvsp[(3) - (4)]) TSRMLS_CC); (yyvsp[(4) - (4)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 50:

    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(6) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 51:

    { zend_do_free(&(yyvsp[(9) - (10)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(4) - (10)]), &(yyvsp[(7) - (10)]) TSRMLS_CC); }
    break;

  case 52:

    { zend_do_for_end(&(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 53:

    { zend_do_switch_cond(&(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 54:

    { zend_do_switch_end(&(yyvsp[(6) - (6)]) TSRMLS_CC); }
    break;

  case 55:

    { zend_do_brk_cont(ZEND_BRK, NULL TSRMLS_CC); }
    break;

  case 56:

    { zend_do_brk_cont(ZEND_BRK, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 57:

    { zend_do_brk_cont(ZEND_CONT, NULL TSRMLS_CC); }
    break;

  case 58:

    { zend_do_brk_cont(ZEND_CONT, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 59:

    { zend_do_return(NULL, 0 TSRMLS_CC); }
    break;

  case 60:

    { zend_do_return(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 61:

    { zend_do_return(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 65:

    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 66:

    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 68:

    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 69:

    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 70:

    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 71:

    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 72:

    { zend_check_writable_variable(&(yyvsp[(6) - (8)])); zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 73:

    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 74:

    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); zend_do_declare_begin(TSRMLS_C); }
    break;

  case 75:

    { zend_do_declare_end(&(yyvsp[(1) - (6)]) TSRMLS_CC); }
    break;

  case 77:

    { zend_do_try(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 78:

    { zend_initialize_try_catch_element(&(yyvsp[(1) - (7)]) TSRMLS_CC); }
    break;

  case 79:

    { zend_do_first_catch(&(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 80:

    { zend_do_begin_catch(&(yyvsp[(1) - (12)]), &(yyvsp[(9) - (12)]), &(yyvsp[(11) - (12)]), &(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 81:

    { zend_do_end_catch(&(yyvsp[(1) - (16)]) TSRMLS_CC); }
    break;

  case 82:

    { zend_do_mark_last_catch(&(yyvsp[(7) - (18)]), &(yyvsp[(18) - (18)]) TSRMLS_CC); }
    break;

  case 83:

    { zend_do_throw(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 84:

    { zend_do_goto(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 85:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 86:

    { (yyval).u.op.opline_num = -1; }
    break;

  case 87:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 88:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 89:

    { (yyval).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 90:

    { zend_do_begin_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(5) - (6)]), NULL TSRMLS_CC); }
    break;

  case 91:

    { zend_do_end_catch(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 94:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_UNSET, 0 TSRMLS_CC); zend_do_unset(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 95:

    { DO_TICKS(); }
    break;

  case 96:

    { DO_TICKS(); }
    break;

  case 97:

    { (yyval).op_type = ZEND_RETURN_VAL; }
    break;

  case 98:

    { (yyval).op_type = ZEND_RETURN_REF; }
    break;

  case 99:

    { zend_do_begin_function_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0, (yyvsp[(2) - (3)]).op_type, NULL TSRMLS_CC); }
    break;

  case 100:

    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 101:

    { zend_do_begin_class_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 102:

    { zend_do_end_class_declaration(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]) TSRMLS_CC); }
    break;

  case 103:

    { zend_do_begin_class_declaration(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 104:

    { zend_do_end_class_declaration(&(yyvsp[(1) - (7)]), &(yyvsp[(2) - (7)]) TSRMLS_CC); }
    break;

  case 105:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = 0; }
    break;

  case 106:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
    break;

  case 107:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_TRAIT; }
    break;

  case 108:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_FINAL_CLASS; }
    break;

  case 109:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 110:

    { zend_do_fetch_class(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 111:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_INTERFACE; }
    break;

  case 116:

    { zend_do_implements_interface(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 117:

    { zend_do_implements_interface(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 118:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 119:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 120:

    { zend_check_writable_variable(&(yyvsp[(1) - (1)])); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 121:

    { zend_check_writable_variable(&(yyvsp[(2) - (2)])); (yyval) = (yyvsp[(2) - (2)]);  (yyval).EA |= ZEND_PARSED_REFERENCE_VARIABLE; }
    break;

  case 128:

    { zend_do_declare_stmt(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 129:

    { zend_do_declare_stmt(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 130:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 131:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 132:

    { (yyval) = (yyvsp[(2) - (4)]); }
    break;

  case 133:

    { (yyval) = (yyvsp[(3) - (5)]); }
    break;

  case 134:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 135:

    { zend_do_extended_info(TSRMLS_C);  zend_do_case_before_statement(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 136:

    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (6)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 137:

    { zend_do_extended_info(TSRMLS_C);  zend_do_default_before_statement(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 138:

    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (5)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 144:

    { zend_do_if_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 145:

    { zend_do_if_after_statement(&(yyvsp[(5) - (7)]), 0 TSRMLS_CC); }
    break;

  case 147:

    { zend_do_if_cond(&(yyvsp[(4) - (6)]), &(yyvsp[(5) - (6)]) TSRMLS_CC); }
    break;

  case 148:

    { zend_do_if_after_statement(&(yyvsp[(5) - (8)]), 0 TSRMLS_CC); }
    break;

  case 155:

    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(2) - (2)]), &(yyval), NULL, &(yyvsp[(1) - (2)]), 0 TSRMLS_CC); }
    break;

  case 156:

    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(3) - (3)]), &(yyval), NULL, &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); }
    break;

  case 157:

    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(1) - (5)]), 1 TSRMLS_CC); }
    break;

  case 158:

    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(2) - (4)]), &(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 159:

    { (yyval)=(yyvsp[(1) - (4)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(4) - (4)]), &(yyval), NULL, &(yyvsp[(3) - (4)]), 0 TSRMLS_CC); }
    break;

  case 160:

    { (yyval)=(yyvsp[(1) - (5)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(5) - (5)]), &(yyval), NULL, &(yyvsp[(3) - (5)]), 1 TSRMLS_CC); }
    break;

  case 161:

    { (yyval)=(yyvsp[(1) - (7)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(5) - (7)]), &(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(3) - (7)]), 1 TSRMLS_CC); }
    break;

  case 162:

    { (yyval)=(yyvsp[(1) - (6)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(4) - (6)]), &(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 0 TSRMLS_CC); }
    break;

  case 163:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 164:

    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_ARRAY; }
    break;

  case 165:

    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_CALLABLE; }
    break;

  case 166:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 167:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 168:

    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 169:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 170:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 171:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(2) - (2)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 172:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 173:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 174:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 175:

    { zend_do_fetch_global_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 176:

    { zend_do_fetch_global_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 177:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 178:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 179:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 180:

    { zend_do_fetch_static_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 181:

    { zend_do_fetch_static_variable(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 182:

    { zend_do_fetch_static_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 183:

    { zend_do_fetch_static_variable(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 186:

    { CG(access_type) = Z_LVAL((yyvsp[(1) - (1)]).u.constant); }
    break;

  case 190:

    { zend_do_begin_function_declaration(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1, (yyvsp[(3) - (4)]).op_type, &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 191:

    { zend_do_abstract_method(&(yyvsp[(4) - (9)]), &(yyvsp[(1) - (9)]), &(yyvsp[(9) - (9)]) TSRMLS_CC); zend_do_end_function_declaration(&(yyvsp[(2) - (9)]) TSRMLS_CC); }
    break;

  case 193:

    { zend_do_implements_trait(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 194:

    { zend_do_implements_trait(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 201:

    { zend_add_trait_precedence(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 202:

    { zend_add_trait_alias(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 203:

    { zend_prepare_trait_precedence(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 204:

    { zend_resolve_class_name(&(yyvsp[(1) - (1)]), ZEND_FETCH_CLASS_GLOBAL, 1 TSRMLS_CC); zend_init_list(&(yyval).u.op.ptr, Z_STRVAL((yyvsp[(1) - (1)]).u.constant) TSRMLS_CC); }
    break;

  case 205:

    { zend_resolve_class_name(&(yyvsp[(3) - (3)]), ZEND_FETCH_CLASS_GLOBAL, 1 TSRMLS_CC); zend_add_to_list(&(yyvsp[(1) - (3)]).u.op.ptr, Z_STRVAL((yyvsp[(3) - (3)]).u.constant) TSRMLS_CC); (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 206:

    { zend_prepare_reference(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 207:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 208:

    { zend_prepare_reference(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 209:

    { zend_prepare_trait_alias(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 210:

    { zend_prepare_trait_alias(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), NULL TSRMLS_CC); }
    break;

  case 211:

    { Z_LVAL((yyval).u.constant) = 0x0; }
    break;

  case 212:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 213:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 214:

    { Z_LVAL((yyval).u.constant) = 0;	}
    break;

  case 215:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 216:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 217:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 218:

    { (yyval) = (yyvsp[(1) - (1)]);  if (!(Z_LVAL((yyval).u.constant) & ZEND_ACC_PPP_MASK)) { Z_LVAL((yyval).u.constant) |= ZEND_ACC_PUBLIC; } }
    break;

  case 219:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 220:

    { Z_LVAL((yyval).u.constant) = zend_do_verify_access_types(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)])); }
    break;

  case 221:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 222:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PROTECTED; }
    break;

  case 223:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PRIVATE; }
    break;

  case 224:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_STATIC; }
    break;

  case 225:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 226:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_FINAL; }
    break;

  case 227:

    { zend_do_declare_property(&(yyvsp[(3) - (3)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 228:

    { zend_do_declare_property(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), CG(access_type) TSRMLS_CC); }
    break;

  case 229:

    { zend_do_declare_property(&(yyvsp[(1) - (1)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 230:

    { zend_do_declare_property(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), CG(access_type) TSRMLS_CC); }
    break;

  case 231:

    { zend_do_declare_class_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 232:

    { zend_do_declare_class_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 233:

    { zend_do_echo(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 234:

    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 235:

    { (yyval).op_type = IS_CONST;  Z_TYPE((yyval).u.constant) = IS_BOOL;  Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 236:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 237:

    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 238:

    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 239:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 240:

    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 241:

    { (yyval).EA = (yyvsp[(1) - (1)]).EA; }
    break;

  case 242:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 243:

    { zend_do_pop_object(&(yyvsp[(1) - (3)]) TSRMLS_CC); fetch_array_dim(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 244:

    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 245:

    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 246:

    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 247:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 248:

    { (yyval) = (yyvsp[(0) - (0)]); }
    break;

  case 249:

    { zend_do_push_object(&(yyvsp[(0) - (0)]) TSRMLS_CC); zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 250:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 251:

    { zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 252:

    { zend_do_end_new_object(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 253:

    { zend_do_list_init(TSRMLS_C); }
    break;

  case 254:

    { zend_do_list_end(&(yyval), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 255:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_assign(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 256:

    { zend_check_writable_variable(&(yyvsp[(1) - (4)])); zend_do_end_variable_parse(&(yyvsp[(4) - (4)]), BP_VAR_W, 1 TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(1) - (4)]), BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 257:

    { zend_error(E_DEPRECATED, "Assigning the return value of new by reference is deprecated");  zend_check_writable_variable(&(yyvsp[(1) - (5)])); zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 258:

    { zend_do_end_new_object(&(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_end_variable_parse(&(yyvsp[(1) - (7)]), BP_VAR_W, 0 TSRMLS_CC); (yyvsp[(3) - (7)]).EA = ZEND_PARSED_NEW; zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (7)]), &(yyvsp[(3) - (7)]) TSRMLS_CC); }
    break;

  case 259:

    { zend_do_clone(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 260:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 261:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 262:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 263:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 264:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 265:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 266:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 267:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 268:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 269:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 270:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 271:

    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_INC TSRMLS_CC); }
    break;

  case 272:

    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_INC TSRMLS_CC); }
    break;

  case 273:

    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_DEC TSRMLS_CC); }
    break;

  case 274:

    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_DEC TSRMLS_CC); }
    break;

  case 275:

    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 276:

    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 277:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 278:

    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 279:

    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 280:

    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 281:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 282:

    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 283:

    { zend_do_binary_op(ZEND_BOOL_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 284:

    { zend_do_binary_op(ZEND_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 285:

    { zend_do_binary_op(ZEND_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 286:

    { zend_do_binary_op(ZEND_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 287:

    { zend_do_binary_op(ZEND_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 288:

    { zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 289:

    { zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 290:

    { zend_do_binary_op(ZEND_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 291:

    { zend_do_binary_op(ZEND_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 292:

    { zend_do_binary_op(ZEND_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 293:

    { zend_do_binary_op(ZEND_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 294:

    { zend_do_binary_op(ZEND_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 295:

    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 296:

    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 297:

    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 298:

    { zend_do_unary_op(ZEND_BW_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 299:

    { zend_do_binary_op(ZEND_IS_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 300:

    { zend_do_binary_op(ZEND_IS_NOT_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 301:

    { zend_do_binary_op(ZEND_IS_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 302:

    { zend_do_binary_op(ZEND_IS_NOT_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 303:

    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 304:

    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 305:

    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 306:

    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 307:

    { zend_do_instanceof(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 308:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 309:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 310:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 311:

    { (yyval) = (yyvsp[(5) - (5)]); }
    break;

  case 312:

    { zend_do_begin_qm_op(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 313:

    { zend_do_qm_true(&(yyvsp[(4) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 314:

    { zend_do_qm_false(&(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(2) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 315:

    { zend_do_jmp_set(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 316:

    { zend_do_jmp_set_else(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]) TSRMLS_CC); }
    break;

  case 317:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 318:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_LONG TSRMLS_CC); }
    break;

  case 319:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_DOUBLE TSRMLS_CC); }
    break;

  case 320:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_STRING TSRMLS_CC); }
    break;

  case 321:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_ARRAY TSRMLS_CC); }
    break;

  case 322:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_OBJECT TSRMLS_CC); }
    break;

  case 323:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_BOOL TSRMLS_CC); }
    break;

  case 324:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_NULL TSRMLS_CC); }
    break;

  case 325:

    { zend_do_exit(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 326:

    { zend_do_begin_silence(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 327:

    { zend_do_end_silence(&(yyvsp[(1) - (3)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 328:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 329:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 330:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 331:

    { zend_do_shell_exec(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 332:

    { zend_do_print(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 333:

    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]).op_type, 0 TSRMLS_CC); }
    break;

  case 334:

    {  zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); (yyval) = (yyvsp[(4) - (10)]); }
    break;

  case 335:

    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]).op_type, 1 TSRMLS_CC); }
    break;

  case 336:

    {  zend_do_end_function_declaration(&(yyvsp[(2) - (11)]) TSRMLS_CC); (yyval) = (yyvsp[(5) - (11)]); }
    break;

  case 337:

    { (yyval).u.op.opline_num = CG(zend_lineno); }
    break;

  case 340:

    { zend_do_fetch_lexical_variable(&(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 341:

    { zend_do_fetch_lexical_variable(&(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 342:

    { zend_do_fetch_lexical_variable(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 343:

    { zend_do_fetch_lexical_variable(&(yyvsp[(2) - (2)]), 1 TSRMLS_CC); }
    break;

  case 344:

    { (yyvsp[(2) - (2)]).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (2)]), 1 TSRMLS_CC); }
    break;

  case 345:

    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, (yyvsp[(2) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 346:

    { (yyvsp[(1) - (4)]).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyvsp[(1) - (4)]).u.constant);  zend_do_build_namespace_name(&(yyvsp[(1) - (4)]), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); (yyvsp[(4) - (4)]).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 347:

    { zend_do_end_function_call(&(yyvsp[(1) - (7)]), &(yyval), &(yyvsp[(6) - (7)]), 0, (yyvsp[(4) - (7)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 348:

    { (yyvsp[(3) - (3)]).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 349:

    { zend_do_end_function_call(&(yyvsp[(2) - (6)]), &(yyval), &(yyvsp[(5) - (6)]), 0, (yyvsp[(3) - (6)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 350:

    { (yyvsp[(4) - (4)]).u.op.opline_num = zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 351:

    { zend_do_end_function_call((yyvsp[(4) - (7)]).u.op.opline_num?NULL:&(yyvsp[(3) - (7)]), &(yyval), &(yyvsp[(6) - (7)]), (yyvsp[(4) - (7)]).u.op.opline_num, (yyvsp[(4) - (7)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 352:

    { zend_do_end_variable_parse(&(yyvsp[(3) - (4)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 353:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 354:

    { zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 355:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 356:

    { zend_do_end_variable_parse(&(yyvsp[(3) - (4)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 357:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 358:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_dynamic_function_call(&(yyvsp[(1) - (2)]), 0 TSRMLS_CC); }
    break;

  case 359:

    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 360:

    { (yyval).op_type = IS_CONST; ZVAL_STRINGL(&(yyval).u.constant, "static", sizeof("static")-1, 1);}
    break;

  case 361:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 362:

    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 363:

    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 364:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 365:

    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 366:

    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 367:

    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 368:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 369:

    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 370:

    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 371:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 372:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 375:

    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 376:

    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 377:

    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 378:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 379:

    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; }
    break;

  case 380:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 381:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 382:

    { Z_LVAL((yyval).u.constant)=0; }
    break;

  case 383:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 384:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 385:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 386:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 387:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 388:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 389:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 390:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 391:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 392:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 393:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 394:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 395:

    { (yyval) = (yyvsp[(2) - (3)]); CG(heredoc) = Z_STRVAL((yyvsp[(1) - (3)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (3)]).u.constant); }
    break;

  case 396:

    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; CG(heredoc) = Z_STRVAL((yyvsp[(1) - (2)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (2)]).u.constant); }
    break;

  case 397:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 398:

    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_CT, 1 TSRMLS_CC); }
    break;

  case 399:

    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 400:

    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 401:

    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 402:

    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 403:

    { (yyval) = (yyvsp[(3) - (4)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 404:

    { (yyval) = (yyvsp[(2) - (3)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 405:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 406:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 407:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 408:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 409:

    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC); }
    break;

  case 410:

    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 411:

    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 412:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 413:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 414:

    { (yyval) = (yyvsp[(2) - (3)]); CG(heredoc) = Z_STRVAL((yyvsp[(1) - (3)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (3)]).u.constant); }
    break;

  case 415:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); }
    break;

  case 416:

    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 419:

    { zend_do_add_static_array_element(&(yyval), &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)])); }
    break;

  case 420:

    { zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(3) - (3)])); }
    break;

  case 421:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])); }
    break;

  case 422:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(1) - (1)])); }
    break;

  case 423:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 424:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 425:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 426:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_W, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 427:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_RW, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 428:

    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 429:

    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 430:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = (yyvsp[(1) - (7)]).EA | ((yyvsp[(7) - (7)]).EA ? (yyvsp[(7) - (7)]).EA : (yyvsp[(6) - (7)]).EA); }
    break;

  case 431:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 432:

    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 433:

    { (yyval).EA = 0; }
    break;

  case 434:

    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 435:

    { (yyval).EA = (yyvsp[(4) - (4)]).EA; }
    break;

  case 436:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 437:

    { (yyvsp[(1) - (4)]).EA = ZEND_PARSED_METHOD_CALL; fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 438:

    { zend_do_pop_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); zend_do_begin_method_call(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 439:

    { zend_do_end_function_call(&(yyvsp[(1) - (4)]), &(yyval), &(yyvsp[(3) - (4)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 440:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_METHOD_CALL; zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 441:

    { (yyval) = (yyvsp[(1) - (1)]); zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 442:

    { (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 443:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 444:

    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 445:

    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 446:

    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 447:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (1)]);; }
    break;

  case 448:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 449:

    { zend_do_begin_variable_parse(TSRMLS_C); (yyvsp[(1) - (1)]).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 450:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 451:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 452:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 453:

    { zend_do_begin_variable_parse(TSRMLS_C); (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 454:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 455:

    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 456:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_STATIC_MEMBER; }
    break;

  case 457:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 458:

    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 459:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 460:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 461:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 462:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 463:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 464:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 465:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 466:

    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (2)]) TSRMLS_CC);}
    break;

  case 467:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 468:

    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 469:

    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (1)]) TSRMLS_CC);}
    break;

  case 470:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 471:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 472:

    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 473:

    { Z_LVAL((yyval).u.constant)++; }
    break;

  case 476:

    { zend_do_add_list_element(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 477:

    { zend_do_new_list_begin(TSRMLS_C); }
    break;

  case 478:

    { zend_do_new_list_end(TSRMLS_C); }
    break;

  case 479:

    { zend_do_add_list_element(NULL TSRMLS_CC); }
    break;

  case 480:

    { zend_do_init_array(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 481:

    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 482:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); }
    break;

  case 483:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(3) - (3)]), NULL, 0 TSRMLS_CC); }
    break;

  case 484:

    { zend_do_init_array(&(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 485:

    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 486:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 1 TSRMLS_CC); }
    break;

  case 487:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(4) - (4)]), NULL, 1 TSRMLS_CC); }
    break;

  case 488:

    { zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 489:

    { zend_do_init_array(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 490:

    { zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC);  zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 491:

    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 492:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 493:

    { zend_do_add_string(&(yyval), NULL, &(yyvsp[(1) - (2)]) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 494:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 495:

    { zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 496:

    { fetch_array_begin(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 497:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); zend_do_fetch_property(&(yyval), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 498:

    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_simple_variable(&(yyval), &(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 499:

    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_array_begin(&(yyval), &(yyvsp[(2) - (6)]), &(yyvsp[(4) - (6)]) TSRMLS_CC); }
    break;

  case 500:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 501:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 502:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 503:

    { fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 504:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 505:

    { zend_do_isset_or_isempty(ZEND_ISEMPTY, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 506:

    { zend_do_include_or_eval(ZEND_INCLUDE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 507:

    { zend_do_include_or_eval(ZEND_INCLUDE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 508:

    { zend_do_include_or_eval(ZEND_EVAL, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 509:

    { zend_do_include_or_eval(ZEND_REQUIRE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 510:

    { zend_do_include_or_eval(ZEND_REQUIRE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 511:

    { zend_do_isset_or_isempty(ZEND_ISSET, &(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 512:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 513:

    { znode tmp; zend_do_isset_or_isempty(ZEND_ISSET, &tmp, &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &tmp, &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 514:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 515:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;



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





/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T zend_yytnamerr(char *yyres, const char *yystr)
{
	if (!yyres) {
		return yystrlen(yystr);
	}
	{
		TSRMLS_FETCH();
		if (CG(parse_error) == 0) {
			char buffer[120];
			const unsigned char *end, *str, *tok1 = NULL, *tok2 = NULL;
			unsigned int len = 0, toklen = 0, yystr_len;
			
			CG(parse_error) = 1;

			if (LANG_SCNG(yy_text)[0] == 0 &&
				LANG_SCNG(yy_leng) == 1 &&
				memcmp(yystr, ZEND_STRL("\"end of file\"")) == 0) {
				yystpcpy(yyres, "end of file");
				return sizeof("end of file")-1;
			}
			
			str = LANG_SCNG(yy_text);
			end = memchr(str, '\n', LANG_SCNG(yy_leng));
			yystr_len = yystrlen(yystr);
			
			if ((tok1 = memchr(yystr, '(', yystr_len)) != NULL
				&& (tok2 = zend_memrchr(yystr, ')', yystr_len)) != NULL) {
				toklen = (tok2 - tok1) + 1;
			} else {
				tok1 = tok2 = NULL;
				toklen = 0;
			}
			
			if (end == NULL) {
				len = LANG_SCNG(yy_leng) > 30 ? 30 : LANG_SCNG(yy_leng);
			} else {
				len = (end - str) > 30 ? 30 : (end - str);
			}
			if (toklen) {
				snprintf(buffer, sizeof(buffer), "'%.*s' %.*s", len, str, toklen, tok1);
			} else {
				snprintf(buffer, sizeof(buffer), "'%.*s'", len, str);
			}
			yystpcpy(yyres, buffer);
			return len + (toklen ? toklen + 1 : 0) + 2;
		}		
	}	
	if (*yystr == '"') {
		YYSIZE_T yyn = 0;
		const char *yyp = yystr;

		for (; *++yyp != '"'; ++yyn) {
			yyres[yyn] = *yyp;
		}
		yyres[yyn] = '\0';
		return yyn;
	}
	yystpcpy(yyres, yystr);
	return strlen(yystr);
}

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 */

