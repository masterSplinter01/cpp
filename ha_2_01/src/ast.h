//
// Created by dan on 30.11.17.
//
#pragma once

#include <iostream>
#include <stack>
#include <list>
#include "visitor.h"


class ast_node{
public:
    virtual void accept(visitor* n) = 0;
    virtual char get_operator() = 0;
};

class bin_node:
    public ast_node{
    ast_node* _left;
    ast_node* _right;
    char _operator;
    ast_node* _parent;

public:
    bin_node(char oper, ast_node* operand1, ast_node* operand2, ast_node* parent);

    template<class T>
    inline T accept(visitor* n){
        return n->visit(this);
    }

    char get_operator() override;

    ast_node* get_left();

    ast_node* get_right();

    char get_parent_operator();
};

class num_node:
    public ast_node{
    int _value;
public:
    explicit num_node(int val);

    template <class T>
    inline T accept(visitor* n){
        return n->visit(this);
    }

    int get_value();
};




ast_node* parse(std::string input_string);
int priority(char c);


