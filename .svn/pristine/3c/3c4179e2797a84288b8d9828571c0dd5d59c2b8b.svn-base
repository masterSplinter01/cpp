//
// Created by dan on 03.12.17.
//

#pragma once

class ast_node;
class bin_node;
class num_node;


class visitor{
public:
    virtual void visit(ast_node* n) = 0;
    virtual void visit(bin_node* n) = 0;
    virtual void visit(num_node* n) = 0;
};

class visitor_print: public visitor {
public:
    void visitor_print::visit(bin_node *n) override ;

} ;

/*class visitor_eval:
        public visitor{
public:
    void visit(ast_node* n) override;
};*/

