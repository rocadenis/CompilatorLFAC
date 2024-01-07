%{
#include <stdio.h>
#include <string>
#include "parser.tab.h"
extern int yylex();
extern int yylineno;
void yyerror(const char *s);
%}

%union {
    std::string* str;
    int num;
    float num_float;
    bool boolean;
    // Add other types as needed
}

%token <str> INTEGER FLOAT CHAR STRING BOOL VOID
%token CLASA PUBLIC PRIVAT CONST FUNCTIE GLOBAL PRINCIPAL TIP VECTOR EVAL TYPEOF
%token EGAL IF FOR WHILE ACOLADA_DESCHISA ACOLADA_INCHISA PARANTEZA_DESCHISA PARANTEZA_INCHISA SEMICOLON
%token PLUS MINUS INMULTIT IMPARTIT SI_LOGIC SAU_LOGIC NEGARE EGALITATE DIFERIT
%token MAI_MIC MAI_MIC_EGAL MAI_MARE MAI_MARE_EGAL
%token <str> BOOL_TRUE BOOL_FALSE IDENTIFIER NUME_ARBITRAR NUMAR NUMAR_FLOAT QUOTES_STRING CARACTER
 
%%
program:
    user_defined_types
    global_variables
    global_functions
    main_function
    ;

user_defined_types:
    CLASA IDENTIFIER ACOLADA_DESCHISA class_body ACOLADA_INCHISA
    ;
    
global_functions:
    FUNCTIE IDENTIFIER PARANTEZA_DESCHISA function_params PARANTEZA_INCHISA function_body
    ;

class_body:
    variable_declaration
    | function_definition
    | class_body variable_declaration
    | class_body function_definition
    ;

variable_declaration:
    TIP IDENTIFIER EGAL expression SEMICOLON
    ;

global_variables:
    variable_declaration
    | global_variables variable_declaration
    ;

function_definition:
    FUNCTIE IDENTIFIER PARANTEZA_DESCHISA function_params PARANTEZA_INCHISA ACOLADA_DESCHISA function_body ACOLADA_INCHISA
    ;

function_params:
    TIP IDENTIFIER
    | function_params COMMA TIP IDENTIFIER
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

expression:
    IDENTIFIER
    | INTEGER  
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
    | expression PLUS expression
    | expression MINUS expression
    | expression INMULTIT expression
    | expression IMPARTIT expression
    | expression SI_LOGIC expression
    | expression SAU_LOGIC expression
    | NEGARE expression
    | expression EGALITATE expression
    | expression DIFERIT expression
    | expression MAI_MIC expression
    | expression MAI_MIC_EGAL expression
    | expression MAI_MARE expression
    | expression MAI_MARE_EGAL expression
    ;

main_function:
    PRINCIPAL PARANTEZA_DESCHISA PARANTEZA_INCHISA ACOLADA_DESCHISA statement_list ACOLADA_INCHISA
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s at line %d\n", s, yylineno);
}

int main(void) {
    yyparse();
    return 0;
}
