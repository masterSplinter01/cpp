// Smoke tests
#include "deque.h"
#include <cassert>

#define __TASK1__
#define __TASK2__
//#define __TASK3__

using containers::Deque;

void testTask1()
{
#ifdef __TASK1__
    Deque< Deque<int> > int_deque_deque;
    assert(int_deque_deque.size() == 0);
    int_deque_deque.push_back(Deque<int>());
    Deque< Deque<int> >::reference front_deque = int_deque_deque.front();
    front_deque.push_front(1);
    front_deque.push_front(2);
    assert(front_deque.back() == 1);
    const Deque< Deque<int> >::value_type front_copy(int_deque_deque[0]);
    front_deque.pop_back();
    assert(front_copy.size() == 2);
    assert(front_copy.front() == 2);
    front_deque = int_deque_deque.back();
    assert(front_deque.size() == Deque< Deque<int> >::value_type::size_type(1));
#endif // __TASK1__
}

void testTask2()
{
#ifdef __TASK2__
    Deque<double> double_deque;
    double_deque.push_back(0.2);
    assert(double_deque.capacity() >= 1);
    double_deque.reserve(123);
    assert(double_deque.capacity() >= 123);
    double_deque.resize(2, 7.0);
    assert(double_deque.back() == 7.0);
    assert(double_deque.front() == 0.2);
    double_deque.resize(0);
    assert(double_deque.size() == 0);
#endif // __TASK2__
}

void testTask3()
{
#ifdef __TASK3__
    Deque<int> deque1;
    deque1.push_back(2);
    deque1.push_back(5);
    deque1.push_back(1);
    Deque<int> deque2(deque1);
    assert(deque1 == deque2);
    deque2.pop_back();
    assert(deque1 != deque2);
    assert(deque1 >= deque2);
    assert(deque1 > deque2);
    deque2.pop_front();
    assert(deque1 <= deque2);
    assert(deque1 < deque2);
#endif // __TASK3__
}

void runSmokeTests()
{
    testTask1();
    testTask2();
    testTask3();
}

int main(int, char*[])
{
    runSmokeTests();
}