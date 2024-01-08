%{
#include <stdio.h>
#include <iostream>
#include "comp.tab.h"
#include <string>
%}

%%
"NumI"      { yylval.num = atoi(yytext); return INTEGER; }
"NumF"      { yylval.num_float = atof(yytext); return FLOAT; }
"Chr"       { yylval.character = yytext[0]; return CHAR; }
"Str"       { yylval.string = strdup(yytext); return STRING; }
"Bool"      { yylval.bool_value = (strcmp(yytext, "true") == 0); return BOOL; }
"True"      { yylval.identifier = strdup(yytext); return BOOL_TRUE; }
"False"     { yylval.identifier = strdup(yytext); return BOOL_FALSE; }


"clasa"     { return CLASA; }
"public"    { return PUBLIC; }
"privat"    { return PRIVAT; }
"const"     { return CONST; }
"functie"   { return FUNCTIE; }
"global"    { return GLOBAL; }
"principal" { return PRINCIPAL; }
"tip"       { return TIP; }
"vector"    { return VECTOR; }
"Eval"      { return EVAL; }
"TypeOf"    { return TYPEOF; }
"="         { return EGAL; }
"if"        { return IF; }
"for"       { return FOR; }
"while"     { return WHILE; }
"{"         { return ACOLADA_DESCHISA; }
"}"         { return ACOLADA_INCHISA; }
"("         { return PARANTEZA_DESCHISA; }
")"         { return PARANTEZA_INCHISA; }
"+"         { return PLUS; }
"-"         { return MINUS; }
"*"         { return INMULTIT; }
"/"         { return IMPARTIT; }
"&&"        { return SI_LOGIC; }
"||"        { return SAU_LOGIC; }
"!"         { return NEGARE; }
"=="        { return EGALITATE; }
"!="        { return DIFERIT; }
"<"         { return MAI_MIC; }
"<="        { return MAI_MIC_EGAL; }
">"         { return MAI_MARE; }
">="        { return MAI_MARE_EGAL; }
","         { return COMMA; }
";"         { return SEMICOLON; }

~[_a-zA-Z][_a-zA-Z0-9]* { yylval.value = strdup(yytext); return IDENTIFIER; }
[_a-zA-Z][_a-zA-Z0-9]*  { yylval.value = strdup(yytext); return NUME_ARBITRAR; }
[0-9]+      { yylval.value = strdup(yytext); return NUMAR; }
[0-9]+.[0-9]+ { yylval.value = strdup(yytext); return NUMAR_FLOAT; }
\"[a-zA-Z0-9 :]+\" { yylval.value = strdup(yytext); return QUOTES_STRING; }
\'[a-zA-Z]\' { yylval.value = strdup(yytext); return CARACTER; }

[ \t] ;
\n          { ++yylineno; }
\/\/        { ++yylineno; }
.           { return yytext[0]; }
%%

extern void yyerror(char *s);
extern int yyparse(void);

int yywrap() {
    // Aici poți introduce orice cod necesar
    // Dacă nu ai nevoie de cod suplimentar, lasă funcția goală.
    return 1; // De obicei se returnează 1 pentru a indica sfârșitul analizei
}
