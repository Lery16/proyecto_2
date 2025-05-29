
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 19 "sintactico.y"
 char *sval; 


/* Line 1676 of yacc.c  */
#line 121 "sintactico.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


