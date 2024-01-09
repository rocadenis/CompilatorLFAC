#include "definition.h"

void FormatMessage(char* msg, Object obj)
{
    sprintf(msg, "[%s] Identifier: %s, Type:", obj.context, obj.name);
    if(obj.constant)
    {
        sprintf(msg, "%s constant", msg);
    }
    if(obj.isArray)
    {
        sprintf(msg, "%s Array", msg);
    }

    sprintf(msg, "%s %s,", msg, types[obj.type-1]);
    if(obj.initialized)
    {
        if(obj.isArray)
        {
            sprintf(msg, "%s Values: (", msg);
            for(int ID = 0;ID < obj.maxPosition; ++ID)
            {
                sprintf(msg,"%s%s", msg, obj.charValue[ID]);
                if(ID != obj.maxPosition-1)
                    sprintf(msg, "%s, ", msg);
            }
            sprintf(msg, "%s)", msg);

        }else{
            sprintf(msg, "%s Value: %s", msg, obj.charValue[0]);
        }
    }else{
        sprintf(msg, "%s Value: (uninitialized)", msg);
    }

    sprintf(msg, "%s\n", msg);
}

void DumpObjectsToFile(FILE* file)
{
    char msg[200];
    for(int ID = 0;ID < storedDataID; ++ID)
    {
        FormatMessage(msg, storedData[ID]);
        fprintf(file,"%s",msg);
    }
}

void DumpFunctionsToFile(FILE* file)
{
    char msg[200];
    for(int ID=0;ID<functionSignaturesID;++ID)
    {
        sprintf(msg, "[%s] Signature: '%s', Return type: %s, with parameters:", functionSignatures[ID].context, functionSignatures[ID].functionSignature, functionSignatures[ID].returnType);
        for(int param = 0;param<functionSignatures[ID].paramCount;++param)
        {
            int id = functionSignatures[ID].parametersID[param];
            if(param+1 == functionSignatures[ID].paramCount)
            {
                sprintf(msg, "%s %s", msg, storedData[id].name);
            }else{
                sprintf(msg, "%s %s,", msg, storedData[id].name);
            }
        }
        sprintf(msg, "%s\n",msg);
        fprintf(file,"%s",msg);
    }
}