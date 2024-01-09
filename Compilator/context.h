#pragma once
#include "definitions.h"
void SwitchContext(char* name)
{
    char copyContext[50]; 
    strcpy(copyContext, currentContext);
    strcpy(oldContext, copyContext);
    strcpy(currentContext, name);
    #ifdef __DEBUG__
    printf("[ CONTEXT ] We are currently in '%s'. The old context was: '%s'\n",currentContext, oldContext);
    #endif
}

void ExitContext()
{
    char copyContext[50]; 
    strcpy(copyContext, currentContext);
    strcpy(currentContext, oldContext);
    strcpy(oldContext, copyContext);
    #ifdef __DEBUG__
    printf("[ CONTEXT ] We are currently in '%s'. The old context was: '%s'\n",currentContext, oldContext);
    #endif

}

void ClassContext(char* name) {
    // Calculate the size of the new string, including the period.
    size_t newSize = strlen(name) + 2; // 1 for the period, 1 for the null terminator

    // Allocate memory for the new string
    char* newName = (char*)malloc(newSize);

    if (newName != NULL) {
        // Copy the existing string to the new buffer
        strcpy(newName, name);

        // Concatenate the period
        strcat(newName, ".");

        // Switch context using the new string
        SwitchContext(newName);

        // Free the dynamically allocated memory
        free(newName);
    } else {
        // Handle memory allocation failure
        fprintf(stderr, "Memory allocation failed\n");
        // You may choose to exit the program or handle the error appropriately
    }
}

void FunctionContext(char* name)
{
    char funcName[150];
    if(currentContext[strlen(currentContext)-1] == '.')
    {
        strcpy(funcName, currentContext);
        strcat(funcName, name);
    }else{
        strcpy(funcName, name);
    }
    SwitchContext(funcName);
}

bool IsInScope(char* scope)
{
    size_t _len = strlen(currentContext);
    
    //checking if variabile is global
    if(!strcmp(scope, "global"))
        return true;

    //checking if the scope matches
    if(!strcmp(currentContext, scope))
        return true;

    //doing further checking for object variables
    for(int idx=0;idx<_len;++idx)
    {
        //if we find . we are inside a class
        if(currentContext[idx]=='.')
        {
            char* classContext = new char[(idx + 2)];
            strncpy(classContext, currentContext, idx+1);
            classContext[idx+2] = 0;
            if(!strcmp(classContext, scope))
                return true;
            break;
        }
    }

    return false;
}

void EnterConstant()
{
    constantContext = true;
}

void LeaveConstant()
{
    constantContext = false;
}