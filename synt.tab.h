
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

/* Line 1676 of yacc.c  */
#line 23 "synt.y"

int  entier;
char* str;
float Rl;
double dbl;



/* Line 1676 of yacc.c  */
#line 105 "synt.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


