#include "concat.h"

using namespace std;

char *concat(const char a[], const size_t a_size, const char b[], const size_t b_size, size_t &concat_size ){
    char *concat_str = (char*) malloc (concat_size * sizeof(char));
    memcpy (concat_str, a, a_size*sizeof(char));
    memcpy (concat_str + a_size , b, b_size*sizeof(char) );
    return concat_str; 
}