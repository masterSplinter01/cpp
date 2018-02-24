#ifndef SEM_08_LAZY_STRING_H
#define SEM_08_LAZY_STRING_H

#include <iostream>
#include "shared_buffer.h"

struct lazy_string
{
public:
    lazy_string( const char *src );
    lazy_string( const lazy_string& src );
    lazy_string&  operator= ( const lazy_string& src );
    ~lazy_string();

    bool empty() const;
    size_t get_size() const;
    char get_at( size_t ix ) const;
    void set_at(size_t ix, char value);

    lazy_string operator + (lazy_string& str2);
    bool operator < (lazy_string str2);
    char operator[](size_t ix) const;

private:
    friend void print( std::ostream& os, const lazy_string&  str );
    friend lazy_string concat( const lazy_string& str1, const lazy_string& str2 );
    friend std::ostream& operator << (std::ostream& os, const lazy_string& ls);
    shared_buffer * buf_;

    void string_decrement_counter();
};


#endif //SEM_08_LAZY_STRING_H
