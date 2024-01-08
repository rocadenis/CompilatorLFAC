#include <iostream>
#include "Ast.h"
#include "comp.tab.h"
#include "SymbolTable.h"
#include "y.tab.h"

using namespace std;

extern "C" {
#include "y.tab.h"
}

int main()
{
    yyparse(); //parsatorul
    return 0;
}