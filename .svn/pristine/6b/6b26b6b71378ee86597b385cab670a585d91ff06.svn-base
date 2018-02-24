#include "shared_buffer.h"

shared_buffer::shared_buffer(size_t size)
        : _counter(1)
        , _size(size+1)
        , _str(new char[_size])
{/*EMPTY*/}

shared_buffer::shared_buffer(const shared_buffer &src)
        : _counter(1)
        , _size(src._size)
        , _str(new char [src._size]) {
    std::strcpy(_str, src._str);
}

shared_buffer& shared_buffer::operator=(shared_buffer src) {
    if (this == &src) {
        return *this;
    }
    _counter = 1;
    _size = src._size;
    _str = new char[src._size];
    std::strcpy(_str, src._str);
    return *this;
}

shared_buffer::~shared_buffer() {
    buffer_decrement_counter();
    delete _str;
}

char* shared_buffer::get_data() {
    return _str;
}

const char* shared_buffer::get_data() const {
    return _str;
}

size_t shared_buffer::get_size() const {
    return _size - 1;
}

void shared_buffer::buffer_decrement_counter() {
    _counter--;
    //if (_counter <= 0) {
      //  delete[] _str;
    //}
}

void shared_buffer::buffer_increment_counter(){
    _counter++;
}


int shared_buffer::get_counter(){
    return _counter;
}







