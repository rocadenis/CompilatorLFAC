%{
#include <stdio.h>
#include <string>
#include <iostream>
#include "y.tab.h" 
#include "SymbolTable.h"
int yylex();
int yylineno;
void yyerror(const char *s);
%}

%union {
    std::string* str;
    int num;
    float num_float;
    bool boolean;
}

%token INTEGER FLOAT CHAR STRING BOOL VOID
%token CLASA PUBLIC PRIVAT CONST FUNCTIE GLOBAL PRINCIPAL TIP VECTOR EVAL TYPEOF
%token EGAL IF FOR WHILE ACOLADA_DESCHISA ACOLADA_INCHISA PARANTEZA_DESCHISA PARANTEZA_INCHISA SEMICOLON
%token PLUS MINUS INMULTIT IMPARTIT SI_LOGIC SAU_LOGIC NEGARE EGALITATE DIFERIT COMMA
%token MAI_MIC MAI_MIC_EGAL MAI_MARE MAI_MARE_EGAL
%token BOOL_TRUE BOOL_FALSE IDENTIFIER NUME_ARBITRAR NUMAR NUMAR_FLOAT QUOTES_STRING CARACTER

%left PLUS MINUS
%left INMULTIT IMPARTIT
%left NEGARE
%left SI_LOGIC SAU_LOGIC
%left EGALITATE DIFERIT
%left MAI_MIC MAI_MIC_EGAL MAI_MARE MAI_MARE_EGAL

%%

program:
    user_defined_types
    global_variables
    global_functions
    main_function
    ;

modifiers:
    PUBLIC
    | PRIVAT
    | CONST
    | GLOBAL
    | VECTOR
    | EVAL
    | TYPEOF
    | NUME_ARBITRAR
    ;

user_defined_types:
    class_declaration
    | modifiers class_declaration
    ;


class_declaration:
    CLASA IDENTIFIER ACOLADA_DESCHISA class_body ACOLADA_INCHISA
    ;

global_functions:
    FUNCTIE IDENTIFIER PARANTEZA_DESCHISA function_params PARANTEZA_INCHISA ACOLADA_DESCHISA function_body ACOLADA_INCHISA
    ;

class_body:
    declaration_list
    | function_definition
    | class_body declaration_list
    | class_body function_definition
    ;

declaration_list:
    declaration
    | declaration_list declaration
    ;

declaration:
    type_specifier IDENTIFIER EGAL expression SEMICOLON
    ;

type_specifier:
    TIP
    | PUBLIC TIP
    | PRIVAT TIP
    | CONST TIP
    | GLOBAL TIP
    | VECTOR TIP
    | EVAL TIP
    | TYPEOF TIP
    | NUME_ARBITRAR TIP
    ;

global_variables:
    declaration_list
    ;

function_definition:
    FUNCTIE IDENTIFIER PARANTEZA_DESCHISA function_params PARANTEZA_INCHISA ACOLADA_DESCHISA function_body ACOLADA_INCHISA
    ;

function_params:
    type_specifier IDENTIFIER
    | function_params COMMA type_specifier IDENTIFIER
    ;

function_body:
    statement_list
    ;

statement_list:
    statement
    | statement_list statement
    ;

statement:
    assignment_statement
    | control_statement
    ;

assignment_statement:
    IDENTIFIER EGAL expression SEMICOLON
    ;

control_statement:
    IF PARANTEZA_DESCHISA expression PARANTEZA_INCHISA statement
    | FOR PARANTEZA_DESCHISA assignment_statement SEMICOLON expression SEMICOLON assignment_statement PARANTEZA_INCHISA statement
    | WHILE PARANTEZA_DESCHISA expression PARANTEZA_INCHISA statement
    ;

expression_constant:
  INTEGER
  | FLOAT
  | CHAR
  | STRING
  | BOOL_TRUE
  | BOOL_FALSE

expression:
  IDENTIFIER
  | constant
  | expression PLUS expression
  | expression MINUS expression
  | expression INMULTIT expression
  | expression IMPARTIT expression
  | expression SI_LOGIC expression
  | expression SAU_LOGIC expression
  | NEGARE expression
  | expression EGALITATE expression_constant
  | expression DIFERIT expression_constant
  | expression MAI_MIC expression_constant
  | expression MAI_MIC_EGAL expression_constant
  | expression MAI_MARE expression_constant
  | expression MAI_MARE_EGAL expression_constant

constant:
    INTEGER  
    | FLOAT
    | CHAR
    | STRING
    | BOOL
    | VOID
    | NUMAR
    | NUMAR_FLOAT
    | QUOTES_STRING
    | CARACTER
    | BOOL_TRUE
    | BOOL_FALSE
    ;

main_function:
    PRINCIPAL PARANTEZA_DESCHISA PARANTEZA_INCHISA ACOLADA_DESCHISA statement_list ACOLADA_INCHISA
    ;
%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s at line %d\n", s, yylineno);
    YYACCEPT; // Don't shift when there are conflict errors
}

int main(void) {
    yyparse();
    FILE* variableTable = fopen("input.txt", "w");
  printToFile(variableTable);
  FILE* functionTable = fopen("input.txt", "w");
  printToFile(functionTable);
    return 0;
}


