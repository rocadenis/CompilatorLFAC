#pragma once
#include "definition.h"


/**
 * @brief Global helper functions for Data structures
 * 
 */

void PushIdentifier(char* id)
{
    strcpy(identifiers[identifiersID], id);
    ++identifiersID;
}

void PushObjectToContext(Object newObj)
{
    PushIdentifier(newObj.name);
    storedData[storedDataID] = newObj;
    ++storedDataID;
}

int IsIdentifierDeclared(char* name)
{
    for(int ID = 0;ID<identifiersID;++ID)
    {
        if(!strcmp(name, identifiers[ID]))
            return ID;
    }

    return -1;
}

/**
 * @brief Data structures: Variables.
*/

void DeclareVariable(char* type, char* key, char* value, bool _init)
{
    char error[200];
    printf("%s",key);
    if(IsIdentifierDeclared(key) != -1)
    {
        sprintf(error, "You can't redeclare `%s`. Try to be more creative.", key);
        yyerror(error);
    }
    Object newVariable;

    //setting the context
    size_t _strLen = strlen(key);
    newVariable.name = static_cast<char*>(malloc(_strLen * sizeof(char)));
    strcpy(newVariable.name, key);

    //setting the name
    _strLen = strlen(currentContext);
    newVariable.context = static_cast<char*>(malloc(_strLen * sizeof(char)));
    strcpy(newVariable.context, currentContext);

    //setting some atributes
    newVariable.constant = constantContext;
    newVariable.initialized = _init;
    newVariable.isArray = false;

    //setting the type
    newVariable.type = GetTypeFromString(type);

    //checking for missmatches
    if(newVariable.constant && !newVariable.initialized)
    {
        sprintf(error, "You can't declare `%s` as constant object without initializing it.", newVariable.name);
        yyerror(error);
    }

    if(newVariable.initialized)
    {
        //setting the raw variable
        _strLen = strlen(value);
        newVariable.charValue = static_cast<char**>(malloc(1 * sizeof(char*)));
        newVariable.charValue[0] = static_cast<char*>(malloc(_strLen * sizeof(char)));
        strcpy(newVariable.charValue[0], value);

        //getting the real value (easier for calculus)
        newVariable.value = static_cast<Value*>(malloc(1 * sizeof(Value*)));
        newVariable.value[0] = GetValueFromChar(key, value, newVariable.type);
    }

    #ifdef __DEBUG__
    printf("[VARIABLE] TYPE: %d, ID: %s, CONTEXT: %s, INTIALIZED: %d \n",
        newVariable.type,
        newVariable.name, 
        newVariable.context,
        newVariable.initialized
        );
    #endif
    PushObjectToContext(newVariable);


}

void SwitchToContextOfIdentifer(char* id)
{
    char error[200];
    size_t classLocation = -1;
    
    for(int ID = 0;ID < customObjectsID; ++ID)
    {
        if(!strcmp(customObjects[ID].id, id))
        {
            classLocation = ID;
            break;
        }
    }


    if(classLocation == -1)
    {
        sprintf(error, "You can't assign a value to an undeclared object `%s`. Declare it first.", id);
        yyerror(error);
    }

    if(strcmp(currentContext, "main"))
    {
        sprintf(error, "Variable '%s' is only visible in main context. (Current context: '%s')", id, currentContext);
        yyerror(error);
    }

    char* changingContext = static_cast<char*>(malloc(strlen(customObjects[classLocation].typeName+2)*sizeof(char)));
    strcpy(changingContext, customObjects[classLocation].typeName);
    strcat(changingContext, ".");
    SwitchContext(changingContext);
}


void AssignValue(char* key, char* value, int pos)
{
    char error[200];
    int variableLocation = IsIdentifierDeclared(key);
    
    if(variableLocation == -1)
    {
        sprintf(error, "You can't assign a value to an undeclared object `%s`. Declare it first.", key);
        yyerror(error);
    }

    //Check if the variable is visible in your scope.
    if(!IsInScope(storedData[variableLocation].context) && !AssignValueIgnoreContext)
    {
        sprintf(error, "Variabile '%s' was declared in '%s' context. We are in: %s",key,storedData[variableLocation].context, currentContext);
        yyerror(error);
    }

    if(storedData[variableLocation].constant)
    {
        sprintf(error, "You can't reassign a value to a constant object `%s'.", key);
        yyerror(error);
    }
    
    //if not initialized we should allocate some memory
    if(!storedData[variableLocation].initialized)
    {
        if(storedData[variableLocation].isArray)
        {
            storedData[variableLocation].charValue = static_cast<char**>(malloc(storedData[variableLocation].maxCapacity * sizeof(char*)));
            storedData[variableLocation].value = static_cast<Value*>(malloc(storedData[variableLocation].maxCapacity * sizeof(Value*)));
        }else{
            storedData[variableLocation].charValue = static_cast<char**>(malloc(1 * sizeof(char*)));
            storedData[variableLocation].value = static_cast<Value*>(malloc(1 * sizeof(Value*)));
        }
    }

    if(storedData[variableLocation].isArray)
    {
        storedData[variableLocation].maxPosition = max(storedData[variableLocation].maxPosition, pos+1);
    }

    size_t _strLen;
    _strLen = strlen(value);
    storedData[variableLocation].charValue[pos] = static_cast<char*>(malloc(_strLen * sizeof(char)));
    strcpy(storedData[variableLocation].charValue[pos], value);

    storedData[variableLocation].value[pos] = GetValueFromChar(key, value,storedData[variableLocation].type);
    storedData[variableLocation].initialized = true;

    #ifdef __DEBUG__
    printf("[AssignValue] TYPE: %d, ID: %s, CONTEXT: %s, VARIABLE: %s \n",
        storedData[variableLocation].type,
        storedData[variableLocation].name, 
        storedData[variableLocation].context,
        storedData[variableLocation].charValue[0]
        );
    #endif
}

/**
 * @brief Data structures: Arrays.
*/
//some helpers for arrays
void InitializeArray()
{
    for(int ID = 0; ID < vectorListID; ++ID)
    {
        free(vectorList[ID]);
    }
    vectorListID = 0;
}

void PushElementInArray(char* value)
{
    size_t _strLen = strlen(value);
    vectorList[vectorListID] = static_cast<char*>(malloc(_strLen * sizeof(char)));
    strcpy(vectorList[vectorListID], value);
    vectorList[vectorListID][_strLen]=0;
    ++vectorListID;
}


//actual functions
void DeclareArray(char* type, char* key, bool _init)
{
    char error[200];

    if(IsIdentifierDeclared(key) != -1)
    {
        sprintf(error, "You can't redeclare `%s`. Try to be more creative.", key);
        yyerror(error);
    }

    Object newVariable;
    size_t _strLen;

    _strLen = strlen(key);
    newVariable.name = static_cast<char*>(malloc(_strLen * sizeof(char)));
    strcpy(newVariable.name, key);

    _strLen = strlen(currentContext);
    newVariable.context = static_cast<char*>(malloc(_strLen * sizeof(char)));
    strcpy(newVariable.context, currentContext);

    //some settings
    newVariable.constant = constantContext;
    newVariable.initialized = _init;
    newVariable.isArray = true;

    //initializing some array stuff
    newVariable.maxCapacity = 150;
    newVariable.maxPosition = vectorListID;

    if(newVariable.maxPosition > newVariable.maxCapacity)
    {
        sprintf(error, "Object `%s` of type array must have no more then 150 elements.", newVariable.name);
        yyerror(error);
    }

    //setting the type
    newVariable.type = GetTypeFromString(type);

    //checking for missmatches
    if(newVariable.constant && !newVariable.initialized)
    {
        sprintf(error, "You can't declare `%s` as constant object without initializing it.", newVariable.name);
        yyerror(error);
    }
    
    if(newVariable.initialized)
    {
        newVariable.charValue = static_cast<char**>(malloc(newVariable.maxCapacity * sizeof(char*)));
        newVariable.value = static_cast<Value*>(malloc(newVariable.maxCapacity * sizeof(Value)));

        for(int ID = 0; ID < vectorListID; ++ID)
        {
            _strLen = strlen(vectorList[ID]);
            newVariable.charValue[ID] = static_cast<char*>(malloc(_strLen * sizeof(char)));
            strcpy(newVariable.charValue[ID], vectorList[ID]);
            char* customKey = static_cast<char*>(malloc((strlen(key)+10)*sizeof(char)));
            sprintf(customKey, "%s[%d]", key, ID);
            newVariable.value[0] = GetValueFromChar(customKey, vectorList[ID], newVariable.type);
        }
    }

    PushObjectToContext(newVariable);
}


/**
 * @brief Data structures: Custom objects.
*/

bool isTypeDeclared(char* type)
{
    for(int ID = 0;ID < customTypesID; ++ID)
    {
        if(!strcmp(customTypes[ID], type))
            return true;
    }
    return false;
}

void DeclareType(char* type)
{
    strcpy(customTypes[customTypesID], type);
    ++customTypesID;
}

void DeclareClass(char* type, char* id)
{
    char error[200];
    if(!isTypeDeclared(type))
    {
        sprintf(error, "You can't declare `%s` object with an unknown type `%s`. Try to declare the object first.", id, type);
        yyerror(error);
    }

    if(IsIdentifierDeclared(id) != -1)
    {
        sprintf(error, "You can't redeclare `%s`. Try to be more creative.", id);
        yyerror(error);
    }
 
    CustomObj cls;
    size_t _strLen = strlen(type);

    cls.typeName = static_cast<char*>(malloc(_strLen * sizeof(char)));
    strcpy(cls.typeName, type);

    _strLen = strlen(id);
    cls.id = static_cast<char*>(malloc(_strLen * sizeof(char)));
    strcpy(cls.id, id);

    PushIdentifier(id);

    customObjects[customObjectsID] = cls;
    ++customObjectsID;

}

//operations with variables
char* GetValueFromIdentifier(char* key, int pos)
{
    char error[200];
    int variableLocation = IsIdentifierDeclared(key);
    
    if(variableLocation == -1)
    {
        sprintf(error, "You can't assign a value to an undeclared object `%s`. Declare it first.", key);
        yyerror(error);
    }

    if(!IsInScope(storedData[variableLocation].context))
    {
        sprintf(error, "Variabile '%s' was declared in '%s' context. We are in: %s",key,storedData[variableLocation].context, currentContext);
        yyerror(error);
    }

    bool arrayCheck = storedData[variableLocation].isArray && pos > storedData[variableLocation].maxPosition;
    bool notArray = !storedData[variableLocation].isArray && pos != 0;
    if(arrayCheck || notArray)
    {
        sprintf(error, "You are trying to access an illegal value. Max declared position is: %d.", storedData[variableLocation].maxPosition);
        yyerror(error);
    }

    
    return storedData[variableLocation].charValue[pos];
}