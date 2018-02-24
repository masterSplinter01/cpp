//
// Created by dan on 30.11.17.
//

#include "ast.h"

bin_node::bin_node(char oper, ast_node* operand1, ast_node* operand2, ast_node* parent): _operator(oper), _left(operand1), _right(operand2), _parent(parent)
{/*EMPTY*/}

num_node::num_node(int val): _value(val)
{/*EMPTY*/}

ast_node* parse(std::string input_string){
    std::stack <char> operators;
    std::stack <ast_node> expr;
    for (size_t i = 0; i < input_string.size(); ++i){
        char c = input_string[i];
        if (isdigit(c)){
            int num = 0;
            while (i + 1 < input_string.size() && isdigit(c)) {
                num = num * 10 + c - '0';
                ++i;
                c = input_string[i];
            }
            expr.push(num_node(num));
            if (i + 1 < input_string.size()) {
                --i;
            }
        } else {
            while (operators.top() != '(' && priority(operators.top()) >= priority(c)){
                auto right = expr.top();
                expr.pop();
                auto left = expr.top();
                expr.pop();

                expr.push(bin_node(operators.top(), &left, &right, &expr.top()));
                operators.pop();
            }
            if (c == ')'){
                operators.pop();
            } else{
                operators.push(c);
            }
        }
    }
    return &expr.top();
}



int priority(char c){
    switch(c){
        case '(':
            return 4;
        case '*':
        case '/':
            return 3;

        case '-':
        case '+':
            return 2;

        case ')':
            return  0;
    }
}

ast_node* bin_node::get_left() {
    return this->_left;
}

ast_node* bin_node::get_right() {
    return  this->_right;
}

char bin_node::get_operator() {
    return this->_operator;
}

char bin_node::get_parent_operator() {
    return _parent->get_operator();
}

int num_node::get_value() {
    return this->_value;
}