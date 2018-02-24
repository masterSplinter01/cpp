#pragma once

#include <cstdio>

namespace cpp_assignment
{
    struct hash_table;

    hash_table* create();
    void destroy(hash_table* table);

    /* returns true in case of success, otherwise false */
    bool insert(hash_table* table, int key, int value);

    /* returns true in case of success, otherwise false */
    bool erase(hash_table* table, int key);

    /* return null if element is missing */
    int* get(hash_table* table, int key);


    bool contains(const hash_table* table, int key);
    size_t size (const hash_table* table);
    void clear (hash_table* table);
    void rehash(hash_table* table);
    //int calculate_hash(int key, size_t table_size);

}
