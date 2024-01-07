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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    VOID = 258,                    /* VOID  */
    CLASA = 259,                   /* CLASA  */
    CONSTANT = 260,                /* CONSTANT  */
    PUBLIC = 261,                  /* PUBLIC  */
    PRIVAT = 262,                  /* PRIVAT  */
    DECLARATION_SECTION = 263,     /* DECLARATION_SECTION  */
    CUSTOMTYPES_SECTION = 264,     /* CUSTOMTYPES_SECTION  */
    MAIN_SECTION = 265,            /* MAIN_SECTION  */
    ASSIGN = 266,                  /* ASSIGN  */
    PARANTEZAPATRATADESCHISA = 267, /* PARANTEZAPATRATADESCHISA  */
    PARANTEZAPATRATAINCHISA = 268, /* PARANTEZAPATRATAINCHISA  */
    PARANTEZAROTUNDADESCHISA = 269, /* PARANTEZAROTUNDADESCHISA  */
    PARANTEZAROTUNDAINCHISA = 270, /* PARANTEZAROTUNDAINCHISA  */
    ACOLADADESCHISA = 271,         /* ACOLADADESCHISA  */
    ACOLADAINCHISA = 272,          /* ACOLADAINCHISA  */
    PUNCTSIVIRGULA = 273,          /* PUNCTSIVIRGULA  */
    VIRGULA = 274,                 /* VIRGULA  */
    PUNCT = 275,                   /* PUNCT  */
    IFSTMT = 276,                  /* IFSTMT  */
    ELSESTMT = 277,                /* ELSESTMT  */
    FORSTMT = 278,                 /* FORSTMT  */
    DOSTMT = 279,                  /* DOSTMT  */
    WHILESTMT = 280,               /* WHILESTMT  */
    RETURNSTMT = 281,              /* RETURNSTMT  */
    PRINT = 282,                   /* PRINT  */
    BOOLEAN_AND = 283,             /* BOOLEAN_AND  */
    BOOLEAN_OR = 284,              /* BOOLEAN_OR  */
    BOOLEAN_NOT = 285,             /* BOOLEAN_NOT  */
    BOOLEAN_LT = 286,              /* BOOLEAN_LT  */
    BOOLEAN_LTE = 287,             /* BOOLEAN_LTE  */
    BOOLEAN_GTE = 288,             /* BOOLEAN_GTE  */
    BOOLEAN_EQ = 289,              /* BOOLEAN_EQ  */
    BOOLEAN_NEQ = 290,             /* BOOLEAN_NEQ  */
    ARITMETIC_INCREMENT = 291,     /* ARITMETIC_INCREMENT  */
    ARITMETIC_DECREMENT = 292,     /* ARITMETIC_DECREMENT  */
    ARITMETIC_ADD = 293,           /* ARITMETIC_ADD  */
    ARITMETIC_SUB = 294,           /* ARITMETIC_SUB  */
    ARITMETIC_DIV = 295,           /* ARITMETIC_DIV  */
    BOOLEAN_GT = 296,              /* BOOLEAN_GT  */
    ARITMETIC_MUL = 297,           /* ARITMETIC_MUL  */
    ARITMETIC_POW = 298,           /* ARITMETIC_POW  */
    INTEGER = 299,                 /* INTEGER  */
    FLOAT = 300,                   /* FLOAT  */
    CHAR = 301,                    /* CHAR  */
    STRING = 302,                  /* STRING  */
    BOOL = 303,                    /* BOOL  */
    BOOL_TRUE = 304,               /* BOOL_TRUE  */
    BOOL_FALSE = 305,              /* BOOL_FALSE  */
    IDENTIFIER = 306,              /* IDENTIFIER  */
    NUME_ARBITRAR = 307,           /* NUME_ARBITRAR  */
    NUMAR = 308,                   /* NUMAR  */
    NUMAR_FLOAT = 309,             /* NUMAR_FLOAT  */
    QUOTES_STRING = 310,           /* QUOTES_STRING  */
    CARACTER = 311,                /* CARACTER  */
    MAX = 312,                     /* MAX  */
    MIN = 313,                     /* MIN  */
    LEN = 314,                     /* LEN  */
    GCD = 315,                     /* GCD  */
    RANDOMINT = 316                /* RANDOMINT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "parser.y"

    int num;
    char* value;
    Node* astNode;
    Array arr;

#line 132 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
