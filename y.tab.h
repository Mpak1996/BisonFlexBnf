/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 40 "bison.y" /* yacc.c:1909  */

	char* str;		

#line 108 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
