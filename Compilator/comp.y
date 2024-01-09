%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "definiton.h"
#include "adaptare.h"
#include "ast.h"
#include "comp.tab.h"
#include "context.h"
#include "crearefctii.h"
#include "functii.h"
#include "strdate.h"
#include "strdate_f.h"
#include "tabele.h"
extern FILE* yyin;
int yylex();
extern int yylineno;
extern char* yytext;
void yyerror(const char *s);
%}

%union {
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
}

%token <value> INTEGER FLOAT CHAR STRING BOOL VOID IDENTIFIER 
%token CLASA PUBLIC PRIVAT CONST FUNCTIE GLOBAL MAIN TIP VECTOR EVAL TYPEOF
%token EGAL IF FOR WHILE ACOLADA_DESCHISA ACOLADA_INCHISA PARANTEZA_DESCHISA PARANTEZA_INCHISA SEMICOLON
%token PLUS MINUS INMULTIT IMPARTIT SI_LOGIC SAU_LOGIC NEGARE EGALITATE DIFERIT COMMA
%token MAI_MIC MAI_MIC_EGAL MAI_MARE MAI_MARE_EGAL
%token <value> BOOL_TRUE BOOL_FALSE NUME_ARBITRAR NUMAR NUMAR_FLOAT QUOTES_STRING CARACTER

%left PLUS MINUS
%left INMULTIT IMPARTIT
%left NEGARE
%left SI_LOGIC SAU_LOGIC
%left EGALITATE DIFERIT
%left MAI_MIC MAI_MIC_EGAL MAI_MARE MAI_MARE_EGAL

%type <value> class_declaration
%type <value> function_definition
%type <value> type_specifier
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
    CLASA IDENTIFIER {DeclareType($2); ClassContext($2);} ACOLADA_DESCHISA class_body ACOLADA_INCHISA SEMICOLON {ExitContext();}
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
    TIP { $$ = $1; }
    | PUBLIC TIP { $$ = $2; }
    | PRIVAT TIP { $$ = $2; }
    | CONST TIP { $$ = $2; }
    | GLOBAL TIP { $$ = $2; }
    | VECTOR TIP { $$ = $2; }
    | EVAL TIP { $$ = $2; }
    | TYPEOF TIP { $$ = $2; }
    | NUME_ARBITRAR TIP { $$ = $2; }
    | VOID TIP { $$ = $2; }
    ;

global_variables:
    declaration_list
    ;

function_definition:
    FUNCTIE IDENTIFIER {FunctionContext($2);} PARANTEZA_DESCHISA function_params PARANTEZA_INCHISA {DeclareFunction($1, $2, $5);} ACOLADA_DESCHISA function_body ACOLADA_INCHISA { ExitContext(); }
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
    | NUMAR
    | NUMAR_FLOAT
    | QUOTES_STRING
    | CARACTER
    | VOID
    ;

expression:
    IDENTIFIER
    | constant
    {
         
    }
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
    ;

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
    MAIN PARANTEZA_DESCHISA PARANTEZA_INCHISA ACOLADA_DESCHISA statement_list ACOLADA_INCHISA
    ;
%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s at line %d\n", s, yylineno);
    exit(1); // Don't shift when there are conflict errors
}



int main(int argc, char** argv) {
  yyin = fopen(argv[1], "r");
  yyparse();

  FILE* variableTable = fopen("tabels/symbol_table.txt", "w");
  DumpObjectsToFile(variableTable);

  FILE* functionTable = fopen("tabels/symbol_table_functions.txt", "w");
  DumpFunctionsToFile(functionTable);

  return 0;
}