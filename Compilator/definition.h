#pragma once
#define _GNU_SOURCE
#include "strdate.h"
#include "adaptare.h"
#include "ast.h"
#include "y.tab.h"
#include "context.h"
#include "crearefctii.h"
#include "definition.h"
#include "functii.h"
#include "strdate_f"
#include "tabele.h"
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <ctime>
#define TYPE_INTEGER 1
#define TYPE_FLOAT 2
#define TYPE_CHAR 3
#define TYPE_STRING 4
#define TYPE_BOOL 5
#define TYPE_VOID 6
// #define __DEBUG__ false
// void yyerror(const char * s){
//      exit(1);
// }
//global variables
char currentContext[50], oldContext[50];
bool constantContext = false;
Object storedData[1000];
CustomObj customObjects[150];
Function functionSignatures[150];

char identifiers[1150][100], customTypes[150][100];
char* vectorList[150];

uint16_t identifiersID = 0, storedDataID = 0, vectorListID = 0, customObjectsID = 0, customTypesID = 0, functionSignaturesID = 0;
        
bool AssignValueIgnoreContext = false;
char types[10][10] = {"NumI", "NumF", "Chr", "Str", "Bool", "Void"};
//bsion definitions
int yylex();
void yyerror(const char *s);

//utility function
int max(int _a, int _b);
Value GetValueFromChar(char* key, char* value, int type);
int GetTypeFromString(char* strType);
char* RemoveQuotesFromString(char* s);
char* GetTypeFromInt(int type);
char* DecideValueType(char* value);
char* DefaultValueForType(char* type);

// context functions
void SwitchContext(char* name);
void ExitContext();
void ClassContext(char* name);
void EnterConstant();
void LeaveConstant();
bool IsInScope(char* scope);


//Data structures (global helper functions)
void PushIdentifier(char* id);
void PushObjectToContext(Object newObj);
int IsIdentifierDeclared(char* name);
void SwitchToContextOfIdentifer(char* id);

//Helpers for arrays
void InitializeArray();
void PushElementInArray(char* value);

//Data structures (implementations)
void DeclareVariable(char* type, char* key, char* value, bool _init);
void AssignValue(char* key, char* value, int pos);

//Data structures (implementations)
void DeclareArray(char* type, char* key, bool _init);

bool isTypeDeclared(char* type);
void DeclareClass(char* type, char* id);
void DeclareType(char* type);

//For working with variables
char* GetValueFromIdentifier(char* key, int pos);

//Function stuff
int GetFunction(char* signature);
void AddFunction(Function func);
char* GetValueFromFunctionCall(int functionPos);
Array InitializeCallStackArray();
void PushValueToCallStack(Array* arr, char* value);

//Actual functions for functions
void DeclareFunction(char* type, char* name, int arguments);
int FunctionCall(char* name, Array values);


//Symbol table
void FormatMessage(char* msg, Object obj);
void DumpObjectsToFile(FILE* file);
void DumpFunctionsToFile(FILE* file);

//Syntax Tree + Print Function
void PrintFunction(char* str1, char* str2);
Node* NewNode(char* data);
Node* BuildAst(Node* root, Node* left, Node* right);
int EvalASTRecursive(Node* root);
char* EvalAST(Node* root);

//Predef functions
char* CastIntToAscii(int __a);
bool GetIntFromAscii(char* _a, char* _b, int* __a, int* __b);
char* predefined_max(char* __a, char* __b);
char* predefined_min(char* __a, char* __b);
char* predefined_len(char* __a);
char* predefined_gcd(char* __a, char* __b);
char* predefined_random();