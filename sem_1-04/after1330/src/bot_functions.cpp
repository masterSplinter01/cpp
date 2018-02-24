#include <cstdlib>
#include <cstring>
#include <iostream>
#include <sstream>
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

void get_palindrome2N1(char* str, char* resPalindrome) 
{
    int str_length = static_cast<int> (strlen(str));
    int leftBorder=0;
    int rightBorder=-1;
    int tempMirror=0; //tempMirror - количество элементов слева и справа от центра палиндрома 
    //0int max=-100;
    

    
    int* ansPal; // ansPal[i] = n, где i - индекс центра палиндрома, n - количество элементов (вправо и влево), которые входят в этот палиндром
    ansPal = new int[str_length];
    

    for (int i=0; i<str_length; ++i)
    {
        tempMirror=( i>rightBorder ? 0 : min(ansPal[leftBorder + rightBorder - i], rightBorder-i) ); //здесь узнаем, не входит ли рассматриваемый iый элемент в палиндром, найденный в прошлой итерации 
/*если не входит, то пока принимаем количество элементов палиндрома за нуль
если входит, то найдем индекс j, симметричный i в палиндроме (leftBoarder, rightBoarder), j= leftBoarder+(rightBoarder-i), и рассмотрим 
 ansPal[j]. Так как элементы симметричны, то можно принять ansPal[i]=ansPal[j], кроме случаев, когда текущий палиндром достигает 
   границы предыдущего или заползает за него, тогда обрезаем длину палиндрома, присвоив ansPal=rightBorder-i + 1  */        
        while (i+tempMirror < str_length && i-tempMirror >= 0 && str[i-tempMirror] == str[i+tempMirror]){ 
            ++tempMirror; // следим, чтобы границы нашего текущего палиндрома не заходили за границы строки и равенство симметричных элементов
        }
        
        ansPal[i]=tempMirror; 
        
        if (i+tempMirror -1 > rightBorder){ //фиксируем границы палиндрома в строке
            leftBorder = i-tempMirror + 1;
            rightBorder = i+tempMirror - 1;
        }
        
        //if (ansPal[i] > max){ 
            strncpy(resPalindrome, str+leftBorder, rightBorder-leftBorder+1);
        //}
        
    }
    resPalindrome[strlen(resPalindrome)] = '\0';
    delete[] ansPal;
    
}

void get_palindrome2N(char* str, char* resPalindrome)
{
    int str_length = static_cast<int> (strlen(str));
    int leftBorder=0;
    int rightBorder=-1;
    int tempMirror=0;
    int max=0;
    
    int* ansPal;
    ansPal = new int[str_length];
    
    
    for (int i=0; i<str_length; ++i){
        tempMirror = (i > rightBorder ? 0 : min(ansPal[leftBorder+rightBorder-i+1], rightBorder-i+1));
        
        while(i+tempMirror < str_length && i-tempMirror - 1 >=0 && str [i+tempMirror] == str[i-tempMirror-1]){
            ++tempMirror;
        }
        
        ansPal[i] = tempMirror;
        
        if(i+tempMirror-1 > rightBorder){
            leftBorder = i-tempMirror;
            rightBorder = i+tempMirror-1;
        }
        
        if (ansPal[i] > max){
            strncpy(resPalindrome, str+leftBorder,rightBorder-leftBorder + 1);
        }
    }

    resPalindrome[strlen(resPalindrome)] = '\0';
    delete[] ansPal;
}



void get_palindrome(char* str)
{   
    char resPalindrome[strlen(str)];
    char pal1[strlen(str)];
    get_palindrome2N1(str, pal1);
    cout<<"pal1: "<<pal1<<'\n';
    char pal2[strlen(str)];
    get_palindrome2N(str, pal2);
    cout<<"pal2: "<<pal2<<'\n';
    if (strlen(pal1) >= strlen(pal2)){
        strncpy(resPalindrome,  pal1, strlen(pal1));
    }
    else {
        strncpy(resPalindrome, pal2, strlen(pal2));
    }
    resPalindrome[strlen(resPalindrome)] = '\0';
    cout<<resPalindrome<<'\n';
}

void get_address(char* data)

{
    long int int_address;
    int length;
    
    stringstream ss(data);
    ss>>int_address>>length;
        
    long int* pIntAddress = reinterpret_cast<long int*>(int_address);
    
    for (int i=0; i<length; ++i)
        cout<<pIntAddress[i]; 
    cout<<'\n';
    
}



