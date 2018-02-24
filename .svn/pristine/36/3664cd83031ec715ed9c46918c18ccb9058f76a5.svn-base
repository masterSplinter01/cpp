#pragma once

#include <cstdio>
#include <vector>
#include <deque>
namespace containers
{
    template<class Value>
    class Deque
    {
    public:

        typedef Value value_type;
        typedef value_type& reference;
        typedef value_type const& const_reference;
        typedef size_t size_type;

        Deque() = default;
        Deque(const Deque& d) = default;

        reference operator[](size_type idx){
            if (idx < _front.size()){
                return _front[idx];
            }

            return _back[_back.size() - idx - 1];
        }

        const_reference operator[](size_type idx) const{
            return (*const_cast<Deque*>(this))[idx];
        }

        size_type size() const{
            return _front.size() + _back.size();
        }

        reference front(){
            if (_front.empty()){
                return _back.front();
            }

            return _front.back();
        }

        const_reference front() const{
            return (*const_cast<Deque*>(this)).front();
        }

        reference back(){
            if (_back.empty()){
                return _front.front();
            }

            return _back.back();
        }

        const_reference back() const{
            return (*const_cast<Deque*>(this)).back();
        }

        void pop_front(){
            if (_front.empty()){
                while (!_back.empty()){
                    _front.push_back(_back.back());
                    _back.pop_back();
                }
            }

            _front.pop_back();
        }

        void pop_back(){
            if (_back.empty()){
                while (!_front.empty()){
                    _back.push_back(_front.back());
                    _front.pop_back();
                }
            }

            _back.pop_back();
        }

        void push_front(const_reference val){
            _front.push_back(val);
        }

        void push_back(const_reference val){
            _back.push_back(val);
        }

        void resize(size_type new_size, const_reference default_val = value_type()){
            while (new_size > size()){
                push_back(default_val);
            }

            while (new_size < size()){
                pop_back();
            }
        }

        size_type capacity() const{
            return _front.capacity() + _back.capacity();
        }

        void reserve(size_type capacity){
            _front.reserve(capacity);
            _back.reserve(capacity);
        }

    private:
        std::vector<value_type> _front, _back;

    };
}