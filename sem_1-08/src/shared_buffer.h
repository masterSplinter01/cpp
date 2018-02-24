#ifndef SEM_08_SHARED_BUFFER_H
#define SEM_08_SHARED_BUFFER_H

#include <cstring>

struct shared_buffer {
    explicit shared_buffer(size_t size);
    shared_buffer(const shared_buffer &src);
    shared_buffer& operator=(shared_buffer src);
    ~shared_buffer();
    char* get_data();
    const char* get_data() const;
    size_t get_size() const;
    void buffer_decrement_counter();
    void buffer_increment_counter();
    int get_counter();

private:
    int _counter;
    size_t _size;
    char * _str;
};


#endif //SEM_08_SHARED_BUFFER_H
