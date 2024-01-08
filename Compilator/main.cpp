#include "SymbolTable.h"
#include "y.tab.h"
#include <string>
#include <iostream>



int main() {
  // Create an instance of the SymbolTable class
  SymbolTable symbolTable;

  // Add variable information
  symbolTable.addVariable("variable1", "int", "10", "global");
  symbolTable.addVariable("variable2", "float", "3.14", "function1");

  // Add function information
  std::vector<std::pair<std::string, std::string>> params = {{"int", "param1"}, {"float", "param2"}};
  symbolTable.addFunction("function1", "void", params, "class1");

  // Parse the input code
  if (yyparse() != 0) {
    std::cerr << "Parse error" << std::endl;
    return 1;
  }

  // Print the symbol table to a text file
  symbolTable.printToFile("output.txt");

  return 0;
}
