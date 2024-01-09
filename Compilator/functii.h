#pragma once
#include "definitions.h"

void AddFunction(Function func)
{
    functionSignatures[functionSignaturesID] = func;
    ++functionSignaturesID;
}

int GetFunction(char* signature)
{
    for(int ID=0; ID<functionSignaturesID; ++ID)
    {
        if(!strcmp(signature, functionSignatures[ID].functionSignature))
            return ID;
    }
    return -1;
}

char* GetValueFromFunctionCall(int functionPos)
{
    return DefaultValueForType(functionSignatures[functionPos].returnType);
}

void DeclareFunction(char* type, char* name, int arguments)
{
    // build signature & construct new Object
    char signature[400];
    Function func;

    func.name = new char[strlen(name) + 1];
    strcpy(func.name, name);

    func.context = new char[strlen(oldContext) + 1];
    strcpy(func.context, oldContext);

    func.returnType = new char[strlen(type) + 1];
    strcpy(func.returnType, type);

    sprintf(signature, "%s(", name);
    
    func.types = new int[identifiersID - arguments];
    func.parametersID = new int[arguments];
    func.paramCount = arguments;
    uint8_t counter = 0;
    for(int ID = identifiersID - arguments; ID < identifiersID; ++ID)
    {
        func.types[ID] = storedData[ID].type;
        func.parametersID[counter++] = ID;
        sprintf(signature, "%s%s", signature, GetTypeFromInt(storedData[ID].type));
        if(ID == identifiersID - 1)
        {
            sprintf(signature, "%s%s", signature, ")");
        }
        else
        {
            sprintf(signature, "%s%s", signature, ",");
        }
    }

    func.functionSignature = new char[strlen(signature) + 1];
    strcpy(func.functionSignature, signature);
    // check if the signature is already defined
    char error[200];
    if(GetFunction(func.functionSignature) != -1)
    {
        sprintf(error, "A function with the same signature has been already declared. (Signature: '%s')", func.functionSignature);
        yyerror(error);
    }

    // check the current context

    AddFunction(func);
}

Array InitializeCallStackArray()
{
    Array data;
    data.currentID = 0;
    return data;
}

void PushValueToCallStack(Array* arr, char* value)
{
    arr->values[arr->currentID] = new char[strlen(value) + 1];
    strcpy(arr->values[arr->currentID], value);
    ++arr->currentID;
}

int FunctionCall(char* name, Array values)
{
    // build function signature
    char signature[400], error[200];

    sprintf(signature, "%s(", name);

    for(int ID = 0; ID < values.currentID; ++ID)
    {
        if(ID + 1 != values.currentID)
        {
            sprintf(signature, "%s%s,", signature, DecideValueType(values.values[ID]));
        }
        else
        {
            sprintf(signature, "%s%s)", signature, DecideValueType(values.values[ID]));
        }
    }

    int functionPos = GetFunction(signature);

    if(functionPos == -1)
    {
        sprintf(error, "No function with signature '%s' has been found.", signature);
        yyerror(error);
    }

    // checking the context
    if(!IsInScope(functionSignatures[functionPos].context))
    {
        sprintf(error, "Function '%s' is only available in %s context. (Current: %s)", signature, functionSignatures[functionPos].context, currentContext);
        yyerror(error);
    }

    AssignValueIgnoreContext = true;
    // assign the values to the variables
    for(int ID = 0; ID < functionSignatures[functionPos].paramCount; ++ID)
    {
        #ifdef __DEBUG__
        printf("[ %s ]Assigning to %s=%s\n", functionSignatures[functionPos].name, storedData[functionSignatures[functionPos].parametersID[ID]].name, values.values[ID]);
        #endif
        AssignValue(storedData[functionSignatures[functionPos].parametersID[ID]].name, values.values[ID], 0);
    }
    AssignValueIgnoreContext = false;

    return functionPos;
}
