
#include "hashtable.h"
#include "linked_list.h"

const int DEFAULT_SIZE = 10;

namespace cpp_assignment{
    namespace {
        int calculate_hash(int key, size_t table_size){
            auto size = static_cast<int> (table_size);
            if (key > 0){
                return (key % size);
            }
            else{
                return ((-key) % size);
            }
        }
    }  

    struct hash_table{
        linked_list* _htable;
        size_t _table_size;
        size_t _number_of_elements;

    };

    hash_table* create(){
        auto table = new hash_table;
        table->_table_size = DEFAULT_SIZE;
        table->_number_of_elements = 0;
        table->_htable = new linked_list[table->_table_size];
        return table;
    }

    void destroy(hash_table* table){
        delete [] table->_htable;
        delete table;
    }

    bool insert(hash_table* table, int key, int value){

        int hash_value = calculate_hash(key, table->_table_size);
        auto success = table->_htable[hash_value].insert_to_list(key, value);
        if (success){
            if (size(table) == table->_table_size){
                rehash(table);
            }
            table->_number_of_elements++;

        }
        return success;

    }

    bool erase(hash_table* table, int key){
        int hash_value = calculate_hash(key, table->_table_size);
        auto success = table->_htable[hash_value].erase_from_list(key);
        if (success){
            table->_number_of_elements--;
        }
        return success;
    }
    int* get(hash_table* table, int key){
        int hash_value = calculate_hash(key, table->_table_size);

        auto res = table->_htable[hash_value].get_value_from_list(key);

        return res;

    }

    bool contains(const hash_table* table, int key){
        int hash_value = calculate_hash(key, table->_table_size);
        auto success = table->_htable[hash_value].get_value_from_list(key);
        if (success != nullptr){
            return true;
        } else{
            return false;
        }

    }

    size_t size (const hash_table* table){
        return table->_number_of_elements;
    }

    void clear (hash_table* table){
        for (size_t i = 0; i < table->_table_size; ++i) {
            table->_htable[i].clear_list();
        }
        table->_number_of_elements = 0;
    }

    void rehash(hash_table* table){
        size_t new_size = table->_table_size * 2;
        auto new_table = new linked_list[new_size];

        for (size_t i = 0; i < table->_table_size; ++i){
            hash_node* temp = table->_htable[i]._head;
            while (temp){
                int hash_value = calculate_hash(temp->_key, new_size);
                new_table[hash_value].insert_to_list(temp->_key, temp->_value);
                temp = temp->_next;
            }
        }
        delete [] table->_htable;

        table->_table_size = new_size;
        table->_htable = new_table;
    }

}