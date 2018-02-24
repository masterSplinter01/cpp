#include <iostream>
#include "lazy_string.h"


int main() {
    lazy_string str_src("foobar");
    lazy_string str_src2("456");
    str_src.set_at(1, 'p');
    lazy_string conc_str = str_src + str_src2;
    lazy_string str_src3 = conc_str;
    std::cout<<conc_str<<"\n"<<str_src3<<"\n"<<str_src3.empty()<<"\n"<<str_src.get_at(1)<<"\n";
    std::cout<<"overloading[] "<<str_src[1]<<"\n";


    return 0;
}