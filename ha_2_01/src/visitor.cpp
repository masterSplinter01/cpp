//
// Created by dan on 03.12.17.
//

#include "visitor.h"
#include "ast.h"



void visitor_print::visit(bin_node *n) {
    n->accept(this);
    bool brackets = priority(n->get_operator()) < priority(n->get_parent_operator());
    if (brackets){
        std::cout << "(";
    }
    n->get_left()->accept(this);
    std::cout << " " << n->get_operator() << " ";
    n->get_right()->accept(this);
    if (brackets) {
        std::cout << ")";
    }
}

void visitor_print::visit(num_node *n) {
    std::cout<<n->get_value();
}