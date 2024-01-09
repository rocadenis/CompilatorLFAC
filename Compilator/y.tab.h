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
    IDENTIFIER = 264,              /* IDENTIFIER  */
    ARITHMETIC_POW = 265,          /* ARITHMETIC_POW  */
    CLASA = 266,                   /* CLASA  */
    PUBLIC = 267,                  /* PUBLIC  */
    PRIVAT = 268,                  /* PRIVAT  */
    CONST = 269,                   /* CONST  */
    FUNCTIE = 270,                 /* FUNCTIE  */
    GLOBAL = 271,                  /* GLOBAL  */
    MAIN = 272,                    /* MAIN  */
    TIP = 273,                     /* TIP  */
    VECTOR = 274,                  /* VECTOR  */
    TYPEOF = 275,                  /* TYPEOF  */
    EGAL = 276,                    /* EGAL  */
    IF = 277,                      /* IF  */
    FOR = 278,                     /* FOR  */
    WHILE = 279,                   /* WHILE  */
    ACOLADA_DESCHISA = 280,        /* ACOLADA_DESCHISA  */
    ACOLADA_INCHISA = 281,         /* ACOLADA_INCHISA  */
    PARANTEZA_DESCHISA = 282,      /* PARANTEZA_DESCHISA  */
    PARANTEZA_INCHISA = 283,       /* PARANTEZA_INCHISA  */
    SEMICOLON = 284,               /* SEMICOLON  */
    PARANTEZAPATDESCHISA = 285,    /* PARANTEZAPATDESCHISA  */
    PARANTEZAPATINCHISA = 286,     /* PARANTEZAPATINCHISA  */
    PLUS = 287,                    /* PLUS  */
    MINUS = 288,                   /* MINUS  */
    INMULTIT = 289,                /* INMULTIT  */
    IMPARTIT = 290,                /* IMPARTIT  */
    SI_LOGIC = 291,                /* SI_LOGIC  */
    SAU_LOGIC = 292,               /* SAU_LOGIC  */
    NEGARE = 293,                  /* NEGARE  */
    EGALITATE = 294,               /* EGALITATE  */
    DIFERIT = 295,                 /* DIFERIT  */
    COMMA = 296,                   /* COMMA  */
    PUNCT = 297,                   /* PUNCT  */
    MAI_MIC = 298,                 /* MAI_MIC  */
    MAI_MIC_EGAL = 299,            /* MAI_MIC_EGAL  */
    MAI_MARE = 300,                /* MAI_MARE  */
    MAI_MARE_EGAL = 301,           /* MAI_MARE_EGAL  */
    BOOL_TRUE = 302,               /* BOOL_TRUE  */
    BOOL_FALSE = 303,              /* BOOL_FALSE  */
    NUME_ARBITRAR = 304,           /* NUME_ARBITRAR  */
    NUMAR = 305,                   /* NUMAR  */
    NUMAR_FLOAT = 306,             /* NUMAR_FLOAT  */
    QUOTES_STRING = 307,           /* QUOTES_STRING  */
    CARACTER = 308,                /* CARACTER  */
    PRINT = 309,                   /* PRINT  */
    MAX = 310,                     /* MAX  */
    MIN = 311,                     /* MIN  */
    GCD = 312,                     /* GCD  */
    LEN = 313,                     /* LEN  */
    RANDOMINT = 314                /* RANDOMINT  */
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
#define IDENTIFIER 264
#define ARITHMETIC_POW 265
#define CLASA 266
#define PUBLIC 267
#define PRIVAT 268
#define CONST 269
#define FUNCTIE 270
#define GLOBAL 271
#define MAIN 272
#define TIP 273
#define VECTOR 274
#define TYPEOF 275
#define EGAL 276
#define IF 277
#define FOR 278
#define WHILE 279
#define ACOLADA_DESCHISA 280
#define ACOLADA_INCHISA 281
#define PARANTEZA_DESCHISA 282
#define PARANTEZA_INCHISA 283
#define SEMICOLON 284
#define PARANTEZAPATDESCHISA 285
#define PARANTEZAPATINCHISA 286
#define PLUS 287
#define MINUS 288
#define INMULTIT 289
#define IMPARTIT 290
#define SI_LOGIC 291
#define SAU_LOGIC 292
#define NEGARE 293
#define EGALITATE 294
#define DIFERIT 295
#define COMMA 296
#define PUNCT 297
#define MAI_MIC 298
#define MAI_MIC_EGAL 299
#define MAI_MARE 300
#define MAI_MARE_EGAL 301
#define BOOL_TRUE 302
#define BOOL_FALSE 303
#define NUME_ARBITRAR 304
#define NUMAR 305
#define NUMAR_FLOAT 306
#define QUOTES_STRING 307
#define CARACTER 308
#define PRINT 309
#define MAX 310
#define MIN 311
#define GCD 312
#define LEN 313
#define RANDOMINT 314

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 23 "comp.y"

    std::string* str;
    int num;
    float num_float;
    bool boolean;
    char character;
    char* string;
    char* identifier;
    Node* ASTNODE;
    bool bool_value; 
    char* value;  
    Array arr;

#line 199 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
