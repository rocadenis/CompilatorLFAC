#pragma once
#include <iostream>
#include <unordered_map>

struct SymbolEntry {
    std::string name;
    std::string type;
    // Add other necessary fields like value, function parameters, etc.
};

class SymbolTable {
private:
    std::unordered_map<std::string, SymbolEntry> symbolTable;

public:
    void insertSymbol(const std::string& name, const std::string& type) {
        SymbolEntry entry;
        entry.name = name;
        entry.type = type;
        symbolTable[name] = entry;
    }

    bool symbolExists(const std::string& name) {
        return symbolTable.find(name) != symbolTable.end();
    }

    // Additional functions for symbol table manipulation and lookup if needed
};
