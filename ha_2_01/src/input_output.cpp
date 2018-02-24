#include "input_output.h"
#include <sstream>


void read_data(){
    std::string input;
    do{
        std::getline(std::cin, input);

        std::string user_operator;
        std::string parts;
        std::string expression;

        std::stringstream ss(input);
        ss>>user_operator;
        while (ss.peek() != '\n' && ss>>parts){
            expression += parts;
        }

        expression += read_expression();

        if (user_operator == "eval"){
            std::cout<<"eval! "<<expression<<"\n";
            user_operator.clear();
            expression.clear();
        }
        else if(user_operator == "correct_expression"){
            auto tree = parse(expression);
            auto current_visitor = new visitor_print();
            current_visitor->visit(&tree);
            user_operator.clear();
            expression.clear();
        }
        else if(user_operator == "exit" || user_operator == "quit"){
            break;
        }
        else{
            std::cout<<"I don't understand what do you want :(\n";
        }
    } while (true);
}

std::string read_expression(){
    std::string result_expr;
    std::string line;
    while(std::getline(std::cin, line)){
        if (line.empty()){
            break;
        }
        else{
            result_expr += line;
        }
    }

    return result_expr;
}




