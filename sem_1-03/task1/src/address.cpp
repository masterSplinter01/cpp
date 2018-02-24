#include <iostream>
#include "address.h"
using namespace std;
void func2(int n)
{
    int b = n*n;
    cout << "b: " << &b << '\n';
}

void func1()
{
    int a = 3;
    cout << "a: " << &a << '\n';
    func2(a);
}