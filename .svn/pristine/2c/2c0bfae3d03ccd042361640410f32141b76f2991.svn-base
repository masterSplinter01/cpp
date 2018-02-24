//
// Created by dan on 24.11.17.
//

#include "my_ostream.h"

void my_ostream_con::print(int &num){
    std::cout<<num;
}
void my_ostream_con::print(double &num){
    std::cout<<num;
}
void my_ostream_con::print(std::string &str){
    std::cout<<str;
}

my_ostream_file::my_ostream_file(std::string filename): _file(filename, std::fstream::out){ }

my_ostream_file::~my_ostream_file()
{
    _file.close();
}


void my_ostream_file::print(int &num){
    _file<<num;
}
void my_ostream_file::print(double &num){
    _file<<num;
}

void my_ostream_file::print(std::string &str){
    _file<<str;
}

my_ostream& operator<<( my_ostream& out,  int num ){
    out.print(num);
    return out;
}

my_ostream& operator<<( my_ostream& out,  double num ){
    out.print(num);
    return out;
}

my_ostream& operator<<( my_ostream& out,  std::string str ){
    out.print(str);
    return out;
}






