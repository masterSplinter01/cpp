#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

void add_num(char* str_number, int* cur_number)
{
    int number=atoi(str_number);
	
    *cur_number+=number;
}

void subtr_num(char *str_number, int* cur_number)
{
    int number=0;
    number=atoi(str_number);

    *cur_number-=number;

}

void add_double(char* str_number, int* cur_number)
{
    double number=0;
    number=atof(str_number);
    *cur_number+=static_cast<int>(number);
}

void get_google_link(char* request, char* search_string)
{
    char prefix[]="https://www.google.ru/search?q=";

    strcpy(search_string, prefix);

    for(size_t i=0; i<strlen(request); i++){
        if(request[i]==' ')
                strcat(search_string, "%20");
        else
            strncat(search_string,request+i,1);
    }

}


	


