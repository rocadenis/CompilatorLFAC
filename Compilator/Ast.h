
#include <iostream>
#include <typeinfo>

class ASTNode {
public:
    int value;
    char operator_;
    ASTNode* left;
    ASTNode* right;

    // Constructor for operators
    ASTNode(char op, ASTNode* left = nullptr, ASTNode* right = nullptr)
        : value(0), operator_(op), left(left), right(right) {}

    // Constructor for values (e.g., literals or identifiers)
    ASTNode(int value, ASTNode* left = nullptr, ASTNode* right = nullptr)
        : value(value), operator_('\0'), left(left), right(right) {}

};

class ASTEvaluator {
public:
    int evaluate(ASTNode* root) {
        if (!root) {
            return 0;
        }

        if (root->value != 0) {
            return root->value;
        } else if (root->operator_ != '\0') {
            int left_value = evaluate(root->left);
            int right_value = evaluate(root->right);

            if (root->operator_ == '+') {
                return left_value + right_value;
            } else if (root->operator_ == '-') {
                return left_value - right_value;
            } else if (root->operator_ == '*') {
                return left_value * right_value;
            } else if (root->operator_ == '/') {
                return left_value / right_value;
            }
        }

        return 0;  // Default case
    }

    const std::type_info& type_of(ASTNode* root) {
        if (!root) {
            return typeid(void);
        }

        if (root->value != 0) {
            return typeid(int);
        } else if (root->operator_ != '\0') {
            return typeid(int);  // Assuming arithmetic operations result in int
        }

        return typeid(void);  // Default case
    }
};