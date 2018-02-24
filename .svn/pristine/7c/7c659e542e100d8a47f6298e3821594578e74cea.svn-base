#include <iostream>
#include <cstring>
#include "concat.h"
using namespace std;



int main()
{
    const char  a[] = "aaa";
    const size_t a_size = sizeof(a);
    const char b[] = "bbb";
    const size_t b_size = sizeof(b);
    size_t concat_size = a_size + b_size;
    char *c =  concat(a, a_size,  b, b_size, concat_size);
    for (size_t i = 0; i < concat_size; ++i)
        cout << c[i];
    cout << '\n';
    free(c);
    return 0;
}
