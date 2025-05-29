
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
#line 1 "sintactico.y"
 
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <locale.h>
    #define MAX 256

    extern int yylex(void);
    extern FILE *yyin;
    extern char *yytext; 
    extern int num_lineas;
    extern int num_columna;
    extern void abrir_registro();
    extern void cerrar_registro();

    void yyerror(const char *s);


/* Line 189 of yacc.c  */
#line 92 "sintactico.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
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
     PAGINAWEB_T = 258,
     SECCIONCABECERA_T = 259,
     FINCABECERA_T = 260,
     SECCIONCUERPO_T = 261,
     FINCUERPO_T = 262,
     SECCIONPIEDEPAGINA_T = 263,
     FINPIEDEPAGINA_T = 264,
     ETIQUETANEGRITA_T = 265,
     ETIQUETAFINNEGRITA_T = 266,
     ETIQUETACURSIVA_T = 267,
     ETIQUETAFINCURSIVA_T = 268,
     ETIQUETASUBRAYADO_T = 269,
     ETIQUETAFINSUBRAYADO_T = 270,
     ETIQUETATACHADO_T = 271,
     ETIQUETAFINTACHADO_T = 272,
     ETIQUETASUBINDICE_T = 273,
     ETIQUETAFINSUBINDICE_T = 274,
     ETIQUETASUPERINDICE_T = 275,
     ETIQUETAFINSUPERINDICE_T = 276,
     ETIQUETATAMANO_T = 277,
     ETIQUETAFINTAMANO_T = 278,
     ETIQUETASANGRADO_T = 279,
     ETIQUETAFINSANGRADO_T = 280,
     ETIQUETAPARRAFOIZQ_T = 281,
     ETIQUETAPARRAFODER_T = 282,
     ETIQUETAPARRAFOCEN_T = 283,
     ETIQUETAPARRAFO_T = 284,
     ETIQUETAFINPARRAFO_T = 285,
     ETIQUETALISTA_T = 286,
     ETIQUETAFINLISTA_T = 287,
     ETIQUETAELEMENTOLISTA_T = 288,
     ETIQUETAFINELEMENTOLISTA_T = 289,
     ETIQUETAENLACE_T = 290,
     ETIQUETAFINENLACE_T = 291,
     ETIQUETACON_T = 292,
     ETIQUETAFINCON_T = 293,
     ETIQUETAMOSTRAR_T = 294,
     ETIQUETAFINMOSTRAR_T = 295,
     ETIQUETATITULO_T = 296,
     ETIQUETAFINTITULO_T = 297,
     ETIQUETASALTO_T = 298,
     ETIQUETALINEA_T = 299,
     TEXTO_T = 300,
     SIMBOLO_COPYRIGHT_T = 301,
     SIMBOLO_FLECHA_T = 302,
     SIMBOLO_EURO_T = 303,
     SIMBOLO_REGISTRO_T = 304,
     SIMBOLO_MASMENOS_T = 305,
     SIMBOLO_MARCA_T = 306,
     SIMBOLO_DIVISION_T = 307,
     SIMBOLO_FLECHA_DOBLE_T = 308,
     TOKEN_A_TILDE_T = 309,
     TOKEN_E_TILDE_T = 310,
     TOKEN_I_TILDE_T = 311,
     TOKEN_O_TILDE_T = 312,
     TOKEN_U_TILDE_T = 313,
     TOKEN_A_MAYUS_TILDE_T = 314,
     TOKEN_E_MAYUS_TILDE_T = 315,
     TOKEN_I_MAYUS_TILDE_T = 316,
     TOKEN_O_MAYUS_TILDE_T = 317,
     TOKEN_U_MAYUS_TILDE_T = 318,
     TOKEN_N_MINUSCULA_T = 319,
     TOKEN_N_MAYUSCULA_T = 320
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 19 "sintactico.y"
 char *sval; 


/* Line 214 of yacc.c  */
#line 197 "sintactico.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 209 "sintactico.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   412

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNRULES -- Number of states.  */
#define YYNSTATES  129

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   320

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     9,    11,    12,    13,    16,    18,    22,
      25,    26,    30,    32,    33,    35,    37,    40,    42,    44,
      46,    48,    50,    52,    54,    57,    59,    61,    63,    65,
      67,    69,    71,    73,    75,    77,    79,    81,    83,    85,
      87,    89,    91,    93,    95,    97,    99,   101,   103,   105,
     107,   109,   111,   113,   115,   117,   119,   121,   123,   125,
     127,   129,   131,   133,   135,   137,   139,   141,   143,   145,
     149,   151,   153,   155,   157,   159,   163,   166,   170,   173,
     175,   177,   179,   182,   186,   189,   192,   194,   196,   200,
     203,   208,   211,   213,   217,   220,   222,   224,   225,   229,
     232,   234,   237,   239,   241,   243,   245,   247
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      67,     0,    -1,    68,    70,    72,   105,    69,    -1,     3,
      -1,    -1,    -1,     4,    71,    -1,     4,    -1,    41,    79,
      42,    -1,    41,    42,    -1,    -1,    73,    75,    74,    -1,
       6,    -1,    -1,    76,    -1,    77,    -1,    76,    77,    -1,
      90,    -1,    91,    -1,    99,    -1,   103,    -1,   104,    -1,
      79,    -1,    80,    -1,    79,    80,    -1,    81,    -1,    84,
      -1,    82,    -1,    83,    -1,    46,    -1,    47,    -1,    48,
      -1,    49,    -1,    50,    -1,    51,    -1,    52,    -1,    53,
      -1,    54,    -1,    55,    -1,    56,    -1,    57,    -1,    58,
      -1,    59,    -1,    60,    -1,    61,    -1,    62,    -1,    63,
      -1,    64,    -1,    65,    -1,    45,    -1,   103,    -1,   104,
      -1,    87,    -1,    10,    -1,    12,    -1,    14,    -1,    16,
      -1,    18,    -1,    20,    -1,    22,    -1,    24,    -1,    11,
      -1,    13,    -1,    15,    -1,    17,    -1,    19,    -1,    21,
      -1,    23,    -1,    25,    -1,    85,    78,    86,    -1,    29,
      -1,    26,    -1,    27,    -1,    28,    -1,    30,    -1,    88,
      78,    89,    -1,    88,    89,    -1,    92,    94,    93,    -1,
      92,    93,    -1,    31,    -1,    32,    -1,    95,    -1,    94,
      95,    -1,    97,    96,    98,    -1,    97,    98,    -1,    78,
      91,    -1,    33,    -1,    34,    -1,   100,   102,   101,    -1,
     100,   101,    -1,    35,    37,    81,    38,    -1,    35,    37,
      -1,    36,    -1,    39,    78,    40,    -1,    39,    40,    -1,
      43,    -1,    44,    -1,    -1,   108,   106,   109,    -1,   108,
     109,    -1,   107,    -1,   106,   107,    -1,    90,    -1,    91,
      -1,    99,    -1,    78,    -1,     8,    -1,     9,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    59,    59,    65,    66,    68,    70,    71,    75,    76,
      79,    81,    84,    85,    87,    90,    91,    95,    96,    97,
      98,    99,   103,   113,   117,   136,   137,   138,   142,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   169,
     170,   171,   175,   179,   180,   181,   182,   183,   184,   185,
     186,   190,   191,   192,   193,   194,   195,   196,   197,   201,
     206,   207,   208,   209,   213,   217,   218,   222,   223,   228,
     233,   238,   239,   243,   244,   248,   251,   256,   261,   262,
     266,   268,   273,   278,   279,   283,   291,   298,   300,   301,
     305,   306,   310,   311,   312,   313,   316,   317
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PAGINAWEB_T", "SECCIONCABECERA_T",
  "FINCABECERA_T", "SECCIONCUERPO_T", "FINCUERPO_T",
  "SECCIONPIEDEPAGINA_T", "FINPIEDEPAGINA_T", "ETIQUETANEGRITA_T",
  "ETIQUETAFINNEGRITA_T", "ETIQUETACURSIVA_T", "ETIQUETAFINCURSIVA_T",
  "ETIQUETASUBRAYADO_T", "ETIQUETAFINSUBRAYADO_T", "ETIQUETATACHADO_T",
  "ETIQUETAFINTACHADO_T", "ETIQUETASUBINDICE_T", "ETIQUETAFINSUBINDICE_T",
  "ETIQUETASUPERINDICE_T", "ETIQUETAFINSUPERINDICE_T", "ETIQUETATAMANO_T",
  "ETIQUETAFINTAMANO_T", "ETIQUETASANGRADO_T", "ETIQUETAFINSANGRADO_T",
  "ETIQUETAPARRAFOIZQ_T", "ETIQUETAPARRAFODER_T", "ETIQUETAPARRAFOCEN_T",
  "ETIQUETAPARRAFO_T", "ETIQUETAFINPARRAFO_T", "ETIQUETALISTA_T",
  "ETIQUETAFINLISTA_T", "ETIQUETAELEMENTOLISTA_T",
  "ETIQUETAFINELEMENTOLISTA_T", "ETIQUETAENLACE_T", "ETIQUETAFINENLACE_T",
  "ETIQUETACON_T", "ETIQUETAFINCON_T", "ETIQUETAMOSTRAR_T",
  "ETIQUETAFINMOSTRAR_T", "ETIQUETATITULO_T", "ETIQUETAFINTITULO_T",
  "ETIQUETASALTO_T", "ETIQUETALINEA_T", "TEXTO_T", "SIMBOLO_COPYRIGHT_T",
  "SIMBOLO_FLECHA_T", "SIMBOLO_EURO_T", "SIMBOLO_REGISTRO_T",
  "SIMBOLO_MASMENOS_T", "SIMBOLO_MARCA_T", "SIMBOLO_DIVISION_T",
  "SIMBOLO_FLECHA_DOBLE_T", "TOKEN_A_TILDE_T", "TOKEN_E_TILDE_T",
  "TOKEN_I_TILDE_T", "TOKEN_O_TILDE_T", "TOKEN_U_TILDE_T",
  "TOKEN_A_MAYUS_TILDE_T", "TOKEN_E_MAYUS_TILDE_T",
  "TOKEN_I_MAYUS_TILDE_T", "TOKEN_O_MAYUS_TILDE_T",
  "TOKEN_U_MAYUS_TILDE_T", "TOKEN_N_MINUSCULA_T", "TOKEN_N_MAYUSCULA_T",
  "$accept", "programa", "inicio", "fin", "cabecera", "titulo_tag",
  "cuerpo", "inicio_cuerpo", "fin_cuerpo", "contenido_cuerpo",
  "contenido_cuerpoI", "lista_contenido_cuerpo", "texto_contenido",
  "lista_texto", "elemento_texto", "texto_simple", "texto_otros",
  "captura_texto", "texto_formato", "etiqueta_inicio_formato",
  "etiqueta_fin_formato", "formato", "etiqueta_inicio_parrafo",
  "etiqueta_fin_parrafo", "parrafo_tag", "lista_tag",
  "etiqueta_lista_inicio", "etiqueta_lista_fin", "lista",
  "elementos_lista", "contenido_de_la_lista", "elemento_lista_inicio",
  "elemento_lista_fin", "enlace_tag", "enlace_inicio", "enlace_fin",
  "mostrar_tag", "salto_tag", "linea_tag", "pie", "contenido_ppagina",
  "contenido_ppagina_item", "in_ppagina", "fin_ppagina", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    68,    69,    70,    70,    70,    71,    71,
      72,    72,    73,    74,    75,    76,    76,    77,    77,    77,
      77,    77,    78,    79,    79,    80,    80,    80,    81,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    83,
      83,    83,    84,    85,    85,    85,    85,    85,    85,    85,
      85,    86,    86,    86,    86,    86,    86,    86,    86,    87,
      88,    88,    88,    88,    89,    90,    90,    91,    91,    92,
      93,    94,    94,    95,    95,    96,    97,    98,    99,    99,
     100,   100,   101,   102,   102,   103,   104,   105,   105,   105,
     106,   106,   107,   107,   107,   107,   108,   109
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     1,     0,     0,     2,     1,     3,     2,
       0,     3,     1,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     3,     2,     3,     2,     1,
       1,     1,     2,     3,     2,     2,     1,     1,     3,     2,
       4,     2,     1,     3,     2,     1,     1,     0,     3,     2,
       1,     2,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     0,     5,     1,     7,    10,     0,     6,    12,
      97,     0,    53,    54,    55,    56,    57,    58,    59,    60,
       9,    95,    96,    49,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     0,    23,    25,    27,    28,    26,
       0,    52,    50,    51,   106,     4,     0,    71,    72,    73,
      70,    79,     0,    13,    14,    15,     0,    17,    18,     0,
      19,     0,    20,    21,     8,    24,     0,    22,     2,   107,
     105,   102,   103,   104,     0,   100,    99,    91,    11,    16,
      74,     0,    76,    80,    86,    78,     0,    81,     0,    92,
       0,    89,     0,    61,    62,    63,    64,    65,    66,    67,
      68,    69,   101,    98,     0,    75,    77,    82,    87,     0,
       0,    84,    94,     0,    88,    90,    85,    83,    93
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    78,     6,     8,    10,    11,    88,    63,
      64,    65,    80,    77,    45,    46,    47,    48,    49,    50,
     111,    51,    66,    92,    67,    68,    69,    95,    96,    97,
     120,    98,   121,    70,    71,   101,   102,    52,    53,    55,
      84,    85,    56,    86
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -57
static const yytype_int16 yypact[] =
{
       2,   -57,     7,     9,   -57,   -32,    19,    48,   -57,   -57,
       3,   368,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   104,   -57,   -57,   -57,   -57,   -57,
     328,   -57,   -57,   -57,   -57,   -57,    -8,   -57,   -57,   -57,
     -57,   -57,   -22,   -57,   368,   -57,   160,   -57,   -57,   100,
     -57,    -7,   -57,   -57,   -57,   -57,    63,   328,   -57,   -57,
     -57,   -57,   -57,   -57,    -8,   -57,   -57,    86,   -57,   -57,
     -57,     0,   -57,   -57,   -57,   -57,   100,   -57,   216,   -57,
     272,   -57,    -2,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,    31,   -57,   -57,   -57,   -57,    40,
      39,   -57,   -57,    41,   -57,   -57,   -57,   -57,   -57
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,    15,   -33,    76,   -18,    28,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,    -6,   -53,   -56,   -57,    -9,   -57,    21,
     -57,   -57,    -1,     5,   -57,    23,   -57,    11,    13,   -57,
     -57,    37,   -57,    43
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      82,    79,    12,    81,    13,     1,    14,     4,    15,     7,
      16,    54,    17,     5,    18,    87,    19,    76,    57,    58,
      59,    60,    72,    61,    73,     9,    75,    62,    82,    99,
      90,    81,   100,    91,    99,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    12,    75,
      13,    83,    14,   126,    15,   119,    16,   123,    17,   125,
      18,    61,    19,   118,   103,    72,   104,    73,   105,    89,
     106,   128,   107,    44,   108,   115,   109,   116,   110,    83,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    12,   114,    13,   117,    14,   127,
      15,   112,    16,     0,    17,   124,    18,   113,    19,    21,
      22,    23,    93,    94,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      12,     0,    13,     0,    14,     0,    15,     0,    16,     0,
      17,     0,    18,     0,    19,     0,     0,     0,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    12,     0,    13,     0,
      14,     0,    15,     0,    16,     0,    17,     0,    18,     0,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    12,     0,    13,     0,    14,     0,    15,     0,
      16,     0,    17,     0,    18,     0,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,     0,     0,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    12,     0,
      13,     0,    14,     0,    15,     0,    16,     0,    17,     0,
      18,     0,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    57,    58,    59,    60,     0,    61,
       0,     0,     0,    62,     0,     0,     0,     0,     0,     0,
       0,    21,    22
};

static const yytype_int8 yycheck[] =
{
      56,     9,    10,    56,    12,     3,    14,     0,    16,    41,
      18,     8,    20,     4,    22,    37,    24,    50,    26,    27,
      28,    29,    11,    31,    11,     6,    44,    35,    84,    36,
      30,    84,    39,    66,    36,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    10,    77,
      12,    56,    14,   119,    16,    98,    18,   100,    20,    38,
      22,    31,    24,    34,    11,    64,    13,    64,    15,    64,
      17,    40,    19,     7,    21,    91,    23,    96,    25,    84,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    10,    87,    12,    96,    14,   120,
      16,    84,    18,    -1,    20,   102,    22,    84,    24,    43,
      44,    45,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      10,    -1,    12,    -1,    14,    -1,    16,    -1,    18,    -1,
      20,    -1,    22,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    10,    -1,    12,    -1,
      14,    -1,    16,    -1,    18,    -1,    20,    -1,    22,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    10,    -1,    12,    -1,    14,    -1,    16,    -1,
      18,    -1,    20,    -1,    22,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    10,    -1,
      12,    -1,    14,    -1,    16,    -1,    18,    -1,    20,    -1,
      22,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    26,    27,    28,    29,    -1,    31,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    67,    68,     0,     4,    70,    41,    71,     6,
      72,    73,    10,    12,    14,    16,    18,    20,    22,    24,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    79,    80,    81,    82,    83,    84,
      85,    87,   103,   104,     8,   105,   108,    26,    27,    28,
      29,    31,    35,    75,    76,    77,    88,    90,    91,    92,
      99,   100,   103,   104,    42,    80,    78,    79,    69,     9,
      78,    90,    91,    99,   106,   107,   109,    37,    74,    77,
      30,    78,    89,    32,    33,    93,    94,    95,    97,    36,
      39,   101,   102,    11,    13,    15,    17,    19,    21,    23,
      25,    86,   107,   109,    81,    89,    93,    95,    34,    78,
      96,    98,    40,    78,   101,    38,    91,    98,    40
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
#line 60 "sintactico.y"
    {
        YYACCEPT; //El parser termina inmediatamente y retorna un código de éxito (0) y No analiza más reglas.
    ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 65 "sintactico.y"
    { printf("<html>\n");;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 66 "sintactico.y"
    { printf("</html>"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 70 "sintactico.y"
    { printf("<head>\n <title> %s </title> </head>\n", (yyvsp[(2) - (2)].sval)); free((yyvsp[(2) - (2)].sval)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 71 "sintactico.y"
    { printf("<head>\n </head>\n"); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 75 "sintactico.y"
    { (yyval.sval) = (yyvsp[(2) - (3)].sval); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 76 "sintactico.y"
    { (yyval.sval) = strdup(""); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 84 "sintactico.y"
    { printf("<body>\n"); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 85 "sintactico.y"
    { printf("</body>\n"); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 104 "sintactico.y"
    {
        if ((yyvsp[(1) - (1)].sval)) (yyval.sval) = strdup((yyvsp[(1) - (1)].sval));
        else (yyval.sval) = strdup("");
        printf((yyval.sval));
        free((yyvsp[(1) - (1)].sval));
    ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 114 "sintactico.y"
    {
        (yyval.sval) = strdup((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval));
    ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 118 "sintactico.y"
    {
        size_t len1 = (yyvsp[(1) - (2)].sval) ? strlen((yyvsp[(1) - (2)].sval)) : 0;
        size_t len2 = (yyvsp[(2) - (2)].sval) ? strlen((yyvsp[(2) - (2)].sval)) : 0;
        (yyval.sval) = (char *)malloc(len1 + len2 + 2);
        if (!(yyval.sval)) {
            yyerror("Error de memoria");
            (yyval.sval) = strdup("");
        } else {
            strcpy((yyval.sval), (yyvsp[(1) - (2)].sval) ? (yyvsp[(1) - (2)].sval) : "");
            if (len1 > 0) strcat((yyval.sval), " ");
            strcat((yyval.sval), (yyvsp[(2) - (2)].sval) ? (yyvsp[(2) - (2)].sval) : "");
        }
        free((yyvsp[(1) - (2)].sval));
        free((yyvsp[(2) - (2)].sval));
    ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 136 "sintactico.y"
    { (yyval.sval) = strdup((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 137 "sintactico.y"
    { (yyval.sval) = strdup((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 138 "sintactico.y"
    { (yyval.sval) = strdup((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 142 "sintactico.y"
    { (yyval.sval) = strdup((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 146 "sintactico.y"
    { (yyval.sval) = strdup((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 147 "sintactico.y"
    { (yyval.sval) = strdup((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 148 "sintactico.y"
    { (yyval.sval) = strdup((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 149 "sintactico.y"
    { (yyval.sval) = strdup((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 150 "sintactico.y"
    { (yyval.sval) = strdup((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 151 "sintactico.y"
    { (yyval.sval) = strdup((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 152 "sintactico.y"
    { (yyval.sval) = strdup((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 153 "sintactico.y"
    { (yyval.sval) = strdup((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 154 "sintactico.y"
    { (yyval.sval) = strdup((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 155 "sintactico.y"
    { (yyval.sval) = strdup((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 156 "sintactico.y"
    { (yyval.sval) = strdup((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 157 "sintactico.y"
    { (yyval.sval) = strdup((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 158 "sintactico.y"
    { (yyval.sval) = strdup((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 159 "sintactico.y"
    { (yyval.sval) = strdup((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 160 "sintactico.y"
    { (yyval.sval) = strdup((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 161 "sintactico.y"
    { (yyval.sval) = strdup((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 162 "sintactico.y"
    { (yyval.sval) = strdup((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 163 "sintactico.y"
    { (yyval.sval) = strdup((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 164 "sintactico.y"
    { (yyval.sval) = strdup((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 165 "sintactico.y"
    { (yyval.sval) = strdup((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 169 "sintactico.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 170 "sintactico.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 171 "sintactico.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 179 "sintactico.y"
    { printf("<b>"); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 180 "sintactico.y"
    { printf("<i>"); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 181 "sintactico.y"
    { printf("<u>"); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 182 "sintactico.y"
    { printf("<s>"); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 183 "sintactico.y"
    { printf("<sub>"); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 184 "sintactico.y"
    { printf("<sup>"); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 185 "sintactico.y"
    { printf("<font size=\"3\">"); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 186 "sintactico.y"
    { printf("<blockquote>"); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 190 "sintactico.y"
    { printf("</b>"); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 191 "sintactico.y"
    { printf("</i>"); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 192 "sintactico.y"
    { printf("</u>"); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 193 "sintactico.y"
    { printf("</s>"); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 194 "sintactico.y"
    { printf("</sub>"); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 195 "sintactico.y"
    { printf("</sup>"); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 196 "sintactico.y"
    { printf("</font>"); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 197 "sintactico.y"
    { printf("</blockquote>"); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 202 "sintactico.y"
    { (yyval.sval) = strdup(""); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 206 "sintactico.y"
    { printf("<p>\n"); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 207 "sintactico.y"
    { printf("<p align=\"left\">\n"); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 208 "sintactico.y"
    { printf("<p align=\"right\">\n"); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 209 "sintactico.y"
    { printf("<p align=\"center\">\n"); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 213 "sintactico.y"
    { printf("</p>\n"); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 224 "sintactico.y"
    { printf("<ul>\n</ul>\n"); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 229 "sintactico.y"
    { printf("<ul>\n"); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 234 "sintactico.y"
    { printf("</ul>\n"); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 245 "sintactico.y"
    { printf("<li></li>\n"); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 252 "sintactico.y"
    { printf("<li>"); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 257 "sintactico.y"
    { printf("</li>\n"); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 267 "sintactico.y"
    { printf("<a href=\"%s\">\n", (yyvsp[(3) - (4)].sval)); free((yyvsp[(3) - (4)].sval)); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 269 "sintactico.y"
    { (yyval.sval) = strdup(""); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 274 "sintactico.y"
    { printf("\n</a>\n");;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 284 "sintactico.y"
    {
        printf("<br>\n");
        (yyval.sval) = strdup("<br>\n");
    ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 292 "sintactico.y"
    {
        printf("<hr>\n");
        (yyval.sval) = strdup("<hr>\n");
    ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 316 "sintactico.y"
    { printf("\n<footer>\n"); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 317 "sintactico.y"
    { printf("\n</footer>\n"); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2168 "sintactico.tab.c"
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
#line 319 "sintactico.y"


void yyerror(const char *s) 
{ fprintf(stderr,"\nERROR SINTACTICO: %s\nEN LA LINEA %d, COLUMNA %d.\nTOKEN A CORREGIR: '%s'\n", s, num_lineas, num_columna, yytext); }

int main(int argc, char *argv[]) 
{
    abrir_registro();
    yyin = fopen(argv[1], "r");
    if (!yyin) {
        perror("No se pudo abrir el archivo de entrada");
        return 1;
    }
    yyparse();
    cerrar_registro();
    return 0;
}
