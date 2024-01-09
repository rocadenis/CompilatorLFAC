#pragma once
#include <stdbool.h>
#include <string.h>

class Value {
public:
    bool binary;
    float real;
    int number;
    char character;
};

class Object {
public:
    char* name;      // the name of the object (ex: $s)
    char* context;   // the context (ex: global)
    int type;        // the type (ex: 1- Int)

    char** charValue; // the raw value (ex: "10")
    Value* value;     // the actual value (ex: 10)

    // some flags
    bool constant;
    bool initialized;

    // some flags for array
    bool isArray;
    int maxPosition;
    int maxCapacity;
};

class CustomObj {
public:
    char* typeName;
    char* id;
};

class Function {
public:
    char* name;
    char* context;

    int* types;
    int* parametersID;

    int paramCount;

    char* returnType;
    char* functionSignature;
};

class Array {
public:
    char* values[150];
    int currentID;
};

class Node {
public:
    int data;
    int type;
    Node* left;
    Node* right;
};