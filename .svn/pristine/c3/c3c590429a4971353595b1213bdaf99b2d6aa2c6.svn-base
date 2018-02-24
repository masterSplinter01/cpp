#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

struct Node {
    char* data;
    struct Node* next;  
};

Node* createList(const char* text){
    struct Node* node, head = NULL;
    size_t length = strlen(text);
    char* inputStr;
    size_t i = 0;
    while(length--){
        if (text[i] == '\n') {
            node->data = inputStr;
            node->next = head;
            head = node->next;
        }
        else {
            strcat(inputStr, text[i]);
        }
        i++;
    }
    return node;
        
}
 bool isLast (const Node *node){
    if (node->next == NULL)
        return true;
    else
        return false;
}

Node* getNext(Node* node){
    return node->next;
}
char* getLine(Node *node){
    return node->data;
}


int main(int argc, char **argv)
{
    std::ifstream is("input.txt");
    int nch = 0;     
    int size = 256;
    char *text = (char*) alloc(size);
    char c;
    while (is.get(c)){          
        if(nch >= size-1){
            size += 256;
            realloc(text, size);
        }
        text[nch++] = c;
    
    }
    is.close();       
    
    return 0;
}
