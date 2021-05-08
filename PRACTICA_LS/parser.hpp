/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
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
    TIDENTIFIER = 258,
    TINTEGER = 259,
    TDOUBLE = 260,
    TMUL = 261,
    TDIV = 262,
    TPLUS = 263,
    TMINUS = 264,
    TCGLE = 265,
    TCLT = 266,
    TCLE = 267,
    TCGT = 268,
    TCGE = 269,
    TEQUAL = 270,
    TNEQUAL = 271,
    TSEMIC = 272,
    TASSIG = 273,
    TLBRACE = 274,
    TRBRACE = 275,
    TLPAREN = 276,
    TRPAREN = 277,
    TCOMMA = 278,
    RPROGRAM = 279,
    RPROCEDURE = 280,
    RFLOAT = 281,
    RINTEGER = 282,
    RWHILE = 283,
    RUNTIL = 284,
    RIF = 285,
    RELSE = 286,
    RFOREVER = 287,
    RDO = 288,
    RSKIP = 289,
    REXIT = 290,
    RAND = 291,
    ROR = 292,
    RNOT = 293,
    RREAD = 294,
    RPRINTLN = 295
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 25 "parser.y"

    std::string *str;
    lista_de_identstruct *lident;
    resto_lista_idstruct *rlident;
    tipostruct *tp;
    clase_parstruct *cp;
    lista_de_sentenciasstruct *lsent;
    sentenciastruct *sent;
    mstruct *m;
    variablestruct *var;
    expresionstruct *expr; 

#line 111 "parser.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */
