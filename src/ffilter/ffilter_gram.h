/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
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

#ifndef YY_FF2_FFILTER_FFILTER_GRAM_H_INCLUDED
# define YY_FF2_FFILTER_FFILTER_GRAM_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int ff2_debug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     AND = 258,
     OR = 259,
     NOT = 260,
     ANY = 261,
     EXIST = 262,
     EQ = 263,
     LT = 264,
     GT = 265,
     ISSET = 266,
     IN = 267,
     IDENT = 268,
     STRING = 269,
     QUOTED = 270,
     DIR = 271,
     DIR_2 = 272,
     PAIR_AND = 273,
     PAIR_OR = 274,
     BAD_TOKEN = 275
   };
#endif
/* Tokens.  */
#define AND 258
#define OR 259
#define NOT 260
#define ANY 261
#define EXIST 262
#define EQ 263
#define LT 264
#define GT 265
#define ISSET 266
#define IN 267
#define IDENT 268
#define STRING 269
#define QUOTED 270
#define DIR 271
#define DIR_2 272
#define PAIR_AND 273
#define PAIR_OR 274
#define BAD_TOKEN 275



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 47 "ffilter/ffilter_gram.y"

	uint64_t	t_uint;
	double		t_double;
	char 		string[FF_MAX_STRING];
	void		*node;


/* Line 2058 of yacc.c  */
#line 105 "ffilter/ffilter_gram.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int ff2_parse (void *YYPARSE_PARAM);
#else
int ff2_parse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int ff2_parse (yyscan_t scanner, ff_t *filter);
#else
int ff2_parse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_FF2_FFILTER_FFILTER_GRAM_H_INCLUDED  */
