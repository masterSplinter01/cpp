#include <iostream>
#include <cstring>
#include <cstdlib>
#include "bot_functions.h"


using namespace std;

const int MAX=1024;

int main()
{
    char expression[MAX];

    char operand; // символ оператора
    char parameter[MAX]; //строка параметра оператора
	string strOperand;
	string strParameter;

    int cur_number=0; //переменная, содержащая результат "калькулятора"
    char search_string[2*MAX]; //строка ссылки-поиск-в-гугл
	
	    cout<<"enter \n a to add,\n s to subtract,\n f to add a float num,\n r to see the result,\n g to google: \n";

    do{
        cin.getline(expression, MAX);
		
        operand=expression[0]; // копируем первый символ вводимой строки, т.е. оператор
        strcpy(parameter, expression+2); //затем параметр

        switch(operand)
        {
            case 'a': add_num(parameter, &cur_number); 
                        parameter[0] = '\0';
                        break;
            case 's': subtr_num(parameter, &cur_number); 
                        parameter[0] = '\0';
                        break;
            case 'f': add_double(parameter, &cur_number); 
                        parameter[0] = '\0';
                        break;
            case 'r': cout<<cur_number<<endl; break;
            case 'g': get_google_link(parameter, search_string); 
					  cout<<search_string<<endl; 
                        search_string[0]='\0';
                        parameter[0] = '\0';
                      break;
            default : cout<<"wtf\n"; break; 
        }

    } while(operand!='q');

    return 0;
}

