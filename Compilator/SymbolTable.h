#ifndef SYMBOLTABLE_H
#define SYMBOLTABLE_H
#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <vector>
#include "y.tab.h"
#include "comp.tab.h"

// Structure to represent information about variables or constants
struct VariableInfo {
    std::string type;
    std::string value; // This can be extended to handle more complex initialization
    std::string scope; // Function or class where the variable is defined
};

// Structure to represent information about functions
struct FunctionInfo {
    std::string return_type;
    std::vector<std::pair<std::string, std::string>> parameters; // (type, name)
    std::string class_name; // Class where the function is defined (empty for global functions)
};

class SymbolTable {
public:
    // Function to add variable information to the symbol table
    void addVariable(const std::string& name, const std::string& type, const std::string& value, const std::string& scope) {
        VariableInfo variableInfo = {type, value, scope};
        variables[name] = variableInfo;
    }

    // Function to add function information to the symbol table
    void addFunction(const std::string& name, const std::string& return_type,
                      const std::vector<std::pair<std::string, std::string>>& parameters, const std::string& class_name) {
        FunctionInfo functionInfo = {return_type, parameters, class_name};
        functions[name] = functionInfo;
    }

    // Function to print the symbol table to a text file
    void printToFile(const std::string& file_name) const {
        std::ofstream outputFile(file_name);
        if (!outputFile.is_open()) {
            std::cerr << "Error: Unable to open the file for writing." << std::endl;
            return;
        }

        // Print variable information
        outputFile << "Variable and Constant Symbol Table:\n";
        outputFile << "{:<15} {:<15} {:<15} {:<15}\n";
        for (const auto& entry : variables) {
            const VariableInfo& info = entry.second;
            outputFile << entry.first << " " << info.type << " " << info.value << " " << info.scope << "\n";
        }

        // Print function information
        outputFile << "\nFunction Symbol Table:\n";
        outputFile << "{:<15} {:<15} {:<30} {:<15}\n";
        for (const auto& entry : functions) {
            const FunctionInfo& info = entry.second;
            std::string paramsStr;
            for (const auto& param : info.parameters) {
                paramsStr += param.first + " " + param.second + ", ";
            }
            paramsStr = paramsStr.substr(0, paramsStr.length() - 2); // Remove the trailing comma and space
            outputFile << entry.first << " " << info.return_type << " " << paramsStr << " " << info.class_name << "\n";
        }

        outputFile.close();
    }

private:
    std::unordered_map<std::string, VariableInfo> variables; // Map to store variable information
    std::unordered_map<std::string, FunctionInfo> functions; // Map to store function information
};

#endif // SYMBOLTABLE_H