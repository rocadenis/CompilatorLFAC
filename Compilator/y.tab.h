/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INTEGER = 258,                 /* INTEGER  */
    FLOAT = 259,                   /* FLOAT  */
    CHAR = 260,                    /* CHAR  */
    STRING = 261,                  /* STRING  */
    BOOL = 262,                    /* BOOL  */
    VOID = 263,                    /* VOID  */
    CLASA = 264,                   /* CLASA  */
    PUBLIC = 265,                  /* PUBLIC  */
    PRIVAT = 266,                  /* PRIVAT  */
    CONST = 267,                   /* CONST  */
    FUNCTIE = 268,                 /* FUNCTIE  */
    GLOBAL = 269,                  /* GLOBAL  */
    PRINCIPAL = 270,               /* PRINCIPAL  */
    TIP = 271,                     /* TIP  */
    VECTOR = 272,                  /* VECTOR  */
    EVAL = 273,                    /* EVAL  */
    TYPEOF = 274,                  /* TYPEOF  */
    EGAL = 275,                    /* EGAL  */
    IF = 276,                      /* IF  */
    FOR = 277,                     /* FOR  */
    WHILE = 278,                   /* WHILE  */
    ACOLADA_DESCHISA = 279,        /* ACOLADA_DESCHISA  */
    ACOLADA_INCHISA = 280,         /* ACOLADA_INCHISA  */
    PARANTEZA_DESCHISA = 281,      /* PARANTEZA_DESCHISA  */
    PARANTEZA_INCHISA = 282,       /* PARANTEZA_INCHISA  */
    SEMICOLON = 283,               /* SEMICOLON  */
    PLUS = 284,                    /* PLUS  */
    MINUS = 285,                   /* MINUS  */
    INMULTIT = 286,                /* INMULTIT  */
    IMPARTIT = 287,                /* IMPARTIT  */
    SI_LOGIC = 288,                /* SI_LOGIC  */
    SAU_LOGIC = 289,               /* SAU_LOGIC  */
    NEGARE = 290,                  /* NEGARE  */
    EGALITATE = 291,               /* EGALITATE  */
    DIFERIT = 292,                 /* DIFERIT  */
    COMMA = 293,                   /* COMMA  */
    MAI_MIC = 294,                 /* MAI_MIC  */
    MAI_MIC_EGAL = 295,            /* MAI_MIC_EGAL  */
    MAI_MARE = 296,                /* MAI_MARE  */
    MAI_MARE_EGAL = 297,           /* MAI_MARE_EGAL  */
    BOOL_TRUE = 298,               /* BOOL_TRUE  */
    BOOL_FALSE = 299,              /* BOOL_FALSE  */
    IDENTIFIER = 300,              /* IDENTIFIER  */
    NUME_ARBITRAR = 301,           /* NUME_ARBITRAR  */
    NUMAR = 302,                   /* NUMAR  */
    NUMAR_FLOAT = 303,             /* NUMAR_FLOAT  */
    QUOTES_STRING = 304,           /* QUOTES_STRING  */
    CARACTER = 305                 /* CARACTER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INTEGER 258
#define FLOAT 259
#define CHAR 260
#define STRING 261
#define BOOL 262
#define VOID 263
#define CLASA 264
#define PUBLIC 265
#define PRIVAT 266
#define CONST 267
#define FUNCTIE 268
#define GLOBAL 269
#define PRINCIPAL 270
#define TIP 271
#define VECTOR 272
#define EVAL 273
#define TYPEOF 274
#define EGAL 275
#define IF 276
#define FOR 277
#define WHILE 278
#define ACOLADA_DESCHISA 279
#define ACOLADA_INCHISA 280
#define PARANTEZA_DESCHISA 281
#define PARANTEZA_INCHISA 282
#define SEMICOLON 283
#define PLUS 284
#define MINUS 285
#define INMULTIT 286
#define IMPARTIT 287
#define SI_LOGIC 288
#define SAU_LOGIC 289
#define NEGARE 290
#define EGALITATE 291
#define DIFERIT 292
#define COMMA 293
#define MAI_MIC 294
#define MAI_MIC_EGAL 295
#define MAI_MARE 296
#define MAI_MARE_EGAL 297
#define BOOL_TRUE 298
#define BOOL_FALSE 299
#define IDENTIFIER 300
#define NUME_ARBITRAR 301
#define NUMAR 302
#define NUMAR_FLOAT 303
#define QUOTES_STRING 304
#define CARACTER 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE;
{
#line 12 "parser.y"

    std::string* str;
    int num;
    float num_float;
    bool boolean;

#line 174 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
