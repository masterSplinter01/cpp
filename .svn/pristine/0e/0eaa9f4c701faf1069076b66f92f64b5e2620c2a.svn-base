#include "linked_list.h"

using namespace cpp_assignment;

hash_node::hash_node(int key, int value){
    this->_key = key;
    this->_value = value;
    this->_next = nullptr;
}

linked_list::linked_list(){
    this->_head = nullptr;
    this->_size = 0;
}

linked_list::~linked_list(){
    while (_head) {
        hash_node *temp_node = _head->_next;
        delete _head;
        _head = temp_node;
    }
}

bool linked_list::insert_to_list(int key, int value){
    if (_size == 0){
            _head = new hash_node(key, value);
            _size += 1;
            return true;
    }

    hash_node *temp_node= _head;
    while (temp_node->_next){
        if (temp_node->_key == key){
            return false;
        }
        temp_node= temp_node->_next;
    }

    if (temp_node->_key == key){
        return false;
    }

    temp_node->_next = new hash_node(key, value);
    _size++;
    return true;
}

bool linked_list::erase_from_list(int key){
    if (_size == 0){
        return false;
    }

    hash_node* current_node = _head;
    hash_node* prev_node = _head;

    while (current_node && current_node->_key != key){
        prev_node = current_node;
        current_node = current_node->_next;
    }

    if (!current_node){
        return false;
    }

    if (current_node == _head){
        _head = current_node->_next;
    }

    prev_node->_next = current_node->_next;
    delete current_node;
    _size--;

    return true;
}
int* linked_list::get_value_from_list(int key) {
    hash_node* temp_node= _head;
    while (temp_node){
        if (temp_node->_key == key){
            return &temp_node->_value;
        }
        temp_node= temp_node->_next;
    }

    return nullptr;
}

void linked_list::clear_list(){
    _size = 0;
    while (_head){
        hash_node *temp_node= _head->_next;
        delete _head;
        _head = temp_node;
    }
    _head = nullptr;
}
