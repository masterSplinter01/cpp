#include "lazy_string.h"
#include <cstring>

lazy_string::lazy_string( const char *src )
        : buf_(new shared_buffer(strlen(src))) {
    std::strcpy(buf_->get_data(), src);
}

lazy_string::lazy_string(const lazy_string &src)
        :buf_(src.buf_) {
    buf_->buffer_increment_counter();
}


lazy_string::~lazy_string() {
    string_decrement_counter();
    delete buf_;
}

lazy_string& lazy_string::operator=(const lazy_string &src) {
    if (this == &src) {
        string_decrement_counter();
        buf_ = src.buf_;
        buf_->buffer_increment_counter();
    }
    return *this;
}

bool lazy_string::empty() const {
    if (get_size() == 0) {
        return true;
    } else {
        return false;
    }
}

size_t lazy_string::get_size() const {
    return buf_->get_size();
}

char lazy_string::get_at(size_t ix) const {
    if (ix >= buf_->get_size()){
        return '\0';
    } else {
        const char* temp_str = buf_->get_data();
        return temp_str[ix];
    }
}

void print(std::ostream& os, const lazy_string& str) {
    os << str.buf_->get_data();
}

lazy_string concat(const lazy_string& str1, const lazy_string &str2) {
    char* temp_concat_str = new char [str1.buf_->get_size() + str2.buf_->get_size()];
    std::strcpy(temp_concat_str, str1.buf_->get_data());
    std::strcat(temp_concat_str, str2.buf_->get_data());
    lazy_string result(temp_concat_str);
    delete[] temp_concat_str;

    return result;
}

void lazy_string::string_decrement_counter() {
    buf_->buffer_decrement_counter();
    if (buf_ &&  (buf_->get_counter() <= 0)){
        delete buf_;
        buf_ = nullptr;
    }
}

std::ostream& operator<<(std::ostream& os, const lazy_string& ls) {
    os << ls.buf_->get_data();
    return os;
}

lazy_string lazy_string::operator+(lazy_string &str2) {
    return concat(*this, str2);
}

void lazy_string::set_at(size_t ix, char value) {
    if (ix < buf_->get_size()) {
        if (buf_->get_counter() > 1){
            shared_buffer* temp_buffer = new shared_buffer(*buf_);
            string_decrement_counter();
            buf_ = temp_buffer;
            delete temp_buffer;
        }

        char* str = buf_->get_data();
        str[ix] = value;


    }
}

bool lazy_string::operator<(lazy_string str2) {
    auto res = std::strcmp(this->buf_->get_data(), str2.buf_->get_data());
    return (res < 0);
}

char lazy_string::operator[](size_t ix) const{
    return this->get_at(ix);
}



