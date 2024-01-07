#include <iostream>
#include "parser.tab.h"

int main(int argc, char** argv) {
  yyin = fopen(argv[1], "r");
  yyparse();

  FILE* variableTable = fopen("tabels/symbol_table.txt", "w");
  DumpObjectsToFile(variableTable);

  FILE* functionTable = fopen("tabels/symbol_table_functions.txt", "w");
  DumpFunctionsToFile(functionTable);

  return 0;
}