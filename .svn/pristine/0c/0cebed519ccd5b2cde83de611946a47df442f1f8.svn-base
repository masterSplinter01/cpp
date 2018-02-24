
#pragma once

#include <cstdio>

namespace cpp_assignment {

    struct hash_node{
        int _key;
        int _value;
        hash_node *_next;

        hash_node(int key, int value);
    };

    struct linked_list {
        hash_node *_head;
        size_t _size;

        linked_list();
        ~linked_list();

        bool insert_to_list(int key, int value);

        bool erase_from_list(int key);

        int* get_value_from_list(int key);

        void clear_list();
    };
}



