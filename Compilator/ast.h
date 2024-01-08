#pragma once
#include <iostream>
#include <string>
#include <vector>

class ASTNode {
public:
    std::string value;
    std::vector<ASTNode*> children;

    ASTNode(const std::string& val) : value(val) {}

    ~ASTNode() {
        for (auto child : children) {
            delete child;
        }
    }

    void addChild(ASTNode* child) {
        children.push_back(child);
    }

    void print(int depth = 0) const {
        for (int i = 0; i < depth; ++i) {
            std::cout << "  ";
        }
        std::cout << value << std::endl;

        for (auto child : children) {
            if (child != nullptr) {
                child->print(depth + 1);
            }
        }
    }
};

class AST {
public:
    ASTNode* root;

    AST(ASTNode* r) : root(r) {}

    ~AST() {
        delete root;
    }

    void printTree() const {
        if (root != nullptr) {
            root->print();
        }
    }
};
