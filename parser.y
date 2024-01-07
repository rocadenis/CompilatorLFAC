%{
#include <stdio.h>
#include <string.h>
#include <vector>
using namespace std;

extern void yyerror(const char *s);
extern int yylex();
extern int yyparse();

// Define your structures and classes here
// Define your symbol table structures here
// Define AST structures and functions here
// Define evaluation and type-checking functions here

// Function declarations
void insertSymbol(const char* name, const char* type, const char* value);
bool symbolExists(const char* name);
// ...other function declarations

// Define your symbol table, AST, and other necessary structures here

%}

%union {
    int int_val;
    float float_val;
    char* str_val;
    bool bool_val;
    // Define other types needed for your language
    // ASTNode* ast_node;
    // ...other types
}

%token <str_val> INTEGER FLOAT CHAR STRING BOOL
%token <str_val> CLASA CONSTANT PUBLIC PRIVAT
%token <str_val> DECLARATION_SECTION CUSTOMTYPES_SECTION MAIN_SECTION
%token <str_val> ASSIGN PARANTEZAPATDESCHISA PARANTEZAPATINCHISA
%token <str_val> PARANTEZAROTDESCHISA PARANTEZAROTINCHISA ACOLDESCHISA ACOLINCHISA
%token <str_val> PUNCTSIVIRGULA VIRGULA PUNCT

// ...other tokens for specific keywords, operators, etc.

%type <str_val> program class_section global_var_section function_section main_function statements declaration expression

%%

program : custom_types global_vars functions main_function
        ;

custom_types : CUSTOMTYPES_SECTION type_declarations {
    // Code for handling user-defined types
}

type_declarations : type_declarations type_declaration {
    // Code for handling type declarations
}

type_declarations : /* Empty */
                  ;

type_declaration : CLASA IDENTIFIER '{' fields '}' {
    // Code for handling class definition and fields
}

fields : fields field {
    // Code for handling class fields
}

fields : /* Empty */
       ;

field : declaration PUNCTSIVIRGULA {
    // Code for handling field declaration
}

global_vars : DECLARATION_SECTION declaration_list {
    // Code for handling global variable declarations
}

declaration_list : declaration_list declaration PUNCTSIVIRGULA {
    // Code for handling multiple declarations
}

declaration_list : /* Empty */
                 ;

declaration : type_specifier IDENTIFIER '=' expression {
    // Code for handling variable/constant declarations with initialization
}

declaration : type_specifier IDENTIFIER {
    // Code for handling variable/constant declarations without initialization
}

function_section : function_section function_declaration {
    // Code for handling global function definitions
}

function_section : /* Empty */
                 ;

function_declaration : type_specifier IDENTIFIER '(' params ')' '{' statements '}' {
    // Code for handling function declarations
}

params : /* Rule for params */
       | /* Empty */
       ;

main_function : MAIN_SECTION '{' statements '}' {
    // Code for handling main function
}

statements : statements statement {
    // Code for handling multiple statements
}

statements : /* Optional */
           ;

statement : /* Define syntax for individual statements */
          | /* Examples: if_statement, for_statement, while_statement, return_statement, etc. */
          ;

// Define other grammar rules for specific statements, expressions, etc.

%%
