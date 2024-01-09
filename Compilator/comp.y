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
    Array arr;
}

%token <value> INTEGER FLOAT CHAR STRING BOOL VOID IDENTIFIER ARITHMETIC_POW
%token CLASA PUBLIC PRIVAT CONST FUNCTIE GLOBAL MAIN TIP VECTOR TYPEOF
%token EGAL IF FOR WHILE ACOLADA_DESCHISA ACOLADA_INCHISA PARANTEZA_DESCHISA PARANTEZA_INCHISA SEMICOLON PARANTEZAPATDESCHISA PARANTEZAPATINCHISA
%token PLUS MINUS INMULTIT IMPARTIT SI_LOGIC SAU_LOGIC NEGARE EGALITATE DIFERIT COMMA PUNCT
%token MAI_MIC MAI_MIC_EGAL MAI_MARE MAI_MARE_EGAL
%token <value> BOOL_TRUE BOOL_FALSE NUME_ARBITRAR NUMAR NUMAR_FLOAT QUOTES_STRING CARACTER PRINT MAX MIN GCD LEN RANDOMINT

%left PLUS MINUS
%left INMULTIT IMPARTIT
%left NEGARE
%left SI_LOGIC SAU_LOGIC
%left EGALITATE DIFERIT
%left MAI_MIC MAI_MIC_EGAL MAI_MARE MAI_MARE_EGAL

%start begin_program

%type <value> class_declaration available_types
%type <value> function_definition
%type <value> type_specifier
%type <value> TIP
%type <value> FUNCTIE
%type <value> typeof
%type <value> allowed_variables available_values
%type <value> predefined_functions
%type <arr> function_call_args_list
%type <num> function_call function_argument_list
%type <ASTNODE> arithmetic_expression
%type <value> boolean_expression
%type <value> pdef_max pdef_min pdef_len pdef_gcd pdef_random
%type <value> function_params
%%
begin_program: program
     ;

program: user_defined_types
   | global_variables
   | global_functions
   | main_function
    ;

modifiers:
    PUBLIC
    | PRIVAT
    | CONST
    | GLOBAL
    | VECTOR
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
    | PRINT TIP { $$ = $2; }
    | TYPEOF TIP { $$ = $2; }
    | NUME_ARBITRAR TIP { $$ = $2; }
    | VOID TIP { $$ = $2; }
    ;

global_variables:
    declaration_list
    ;

function_call: NUME_ARBITRAR PARANTEZA_DESCHISA function_call_args_list PARANTEZA_INCHISA { $$ = FunctionCall($1, $3); } 
        | IDENTIFIER PUNCT NUME_ARBITRAR PARANTEZA_DESCHISA function_call_args_list PARANTEZA_INCHISA { SwitchToContextOfIdentifer($1); $$ = FunctionCall($3, $5); ExitContext(); }
         ;
function_call_args_list: available_values { $$ = InitializeCallStackArray(); PushValueToCallStack(&$$, $1); }
        | function_call_args_list COMMA available_values { PushValueToCallStack(&$$, $3); }
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
function_argument_list: declare_only { $$ = 1; }
         | function_argument_list COMMA declare_only { $$++; }
        ;

declare_only: available_types IDENTIFIER { DeclareVariable($1, $2, "", false); } //declare, noinit
        | available_types IDENTIFIER PARANTEZAPATDESCHISA PARANTEZAPATINCHISA { DeclareArray($1, $2, false); }//array, no init
        ;

pdef_max: MAX PARANTEZA_DESCHISA available_values COMMA available_values PARANTEZA_INCHISA { $$ = predefined_max($3,$5); }
       ;
pdef_min: MIN PARANTEZA_DESCHISA available_values COMMA available_values PARANTEZA_INCHISA { $$ = predefined_min($3,$5); }
       ;
pdef_len: LEN PARANTEZA_DESCHISA available_values PARANTEZA_INCHISA { $$ = predefined_len($3); }
       ;
typeof: TYPEOF PARANTEZA_DESCHISA allowed_variables {TypeOf($3);} PARANTEZA_INCHISA 
        ;
pdef_gcd: GCD PARANTEZA_DESCHISA available_values COMMA available_values PARANTEZA_INCHISA {$$ = predefined_gcd($3, $5); }
        ;
pdef_random: RANDOMINT PARANTEZA_DESCHISA PARANTEZA_INCHISA {$$ = predefined_random(); }
        ;


predefined_functions: pdef_max { $$ = $1; }
        | pdef_min { $$ = $1; }
        | pdef_len { $$ = $1; }
        | pdef_gcd { $$ = $1; }
        | pdef_random { $$ = $1; }
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
allowed_variables: NUMAR { $$ = $1; }
        | NUMAR_FLOAT { $$ = $1; }
        | QUOTES_STRING { $$ = $1; }
        | CARACTER { $$ = $1; }
        | BOOL_TRUE { $$ = $1; }
        | BOOL_FALSE { $$ = $1; }
        | IDENTIFIER  { $$ = GetValueFromIdentifier($1,0); }
        | IDENTIFIER PARANTEZA_DESCHISA NUMAR PARANTEZA_INCHISA { $$ = GetValueFromIdentifier($1,atoi($3)); }
        | IDENTIFIER PUNCT {SwitchToContextOfIdentifer($1);} IDENTIFIER { $$ = GetValueFromIdentifier($4,0); ExitContext();}
        | predefined_functions { $$ = $1; }
        | function_call { $$ = GetValueFromFunctionCall($1); } //ValidateFunctionCall
        ;

available_types: INTEGER { $$ = $1; }
        | FLOAT { $$ = $1; }
        | CHAR { $$ = $1; }
        | STRING { $$ = $1; }
        | BOOL { $$ = $1; }
        ;

available_values: allowed_variables { $$ = $1; } 
        | PARANTEZAPATDESCHISA arithmetic_expression PARANTEZAPATINCHISA { $$ = EvalAST($2); } //evaluate expression
        | PARANTEZAPATDESCHISA PARANTEZAPATDESCHISA boolean_expression PARANTEZAPATINCHISA PARANTEZAPATINCHISA { $$ = $3; } //evaluate boolean
        ;

arithmetic_expression: allowed_variables { $$ = BuildAst(NewNode($1), NULL, NULL); }
        | arithmetic_expression PLUS arithmetic_expression { $$ = BuildAst(NewNode("+"), $1, $3); }
        | arithmetic_expression MINUS arithmetic_expression { $$ = BuildAst(NewNode("-"), $1, $3); }
        | arithmetic_expression IMPARTIT arithmetic_expression { $$ = BuildAst(NewNode("/"), $1, $3); }
        | arithmetic_expression ARITHMETIC_POW arithmetic_expression { $$ = BuildAst(NewNode("**"), $1, $3); }
        | arithmetic_expression INMULTIT arithmetic_expression { $$ = BuildAst(NewNode("*"), $1, $3); }
        | PARANTEZA_DESCHISA arithmetic_expression PARANTEZA_INCHISA { $$ = BuildAst(NewNode(EvalAST($2)), NULL, NULL); }
         ;

boolean_expression: boolean_expression SI_LOGIC boolean_expression {$$ = "0"; }
        | boolean_expression SAU_LOGIC boolean_expression {$$ = "0"; }
        | boolean_expression MAI_MIC boolean_expression {$$ = "0"; }
        | boolean_expression MAI_MIC_EGAL boolean_expression {$$ = "0"; }
        | boolean_expression MAI_MARE boolean_expression {$$ = "0"; }
        | boolean_expression MAI_MARE_EGAL boolean_expression {$$ = "0"; }
        | boolean_expression EGALITATE boolean_expression {$$ = "0"; }
        | boolean_expression DIFERIT boolean_expression {$$ = "0"; }
        | DIFERIT boolean_expression {$$ = "0"; }
        | arithmetic_expression { $$ = EvalAST($1); }
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