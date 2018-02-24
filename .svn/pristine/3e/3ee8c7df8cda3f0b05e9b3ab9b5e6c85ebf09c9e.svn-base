#include <iostream>
#include "fib.h"
using namespace std;
int fib(int n)
{
    if (n > 21)
    {
        cout << "Incorrect n!\n";
    }

    int fib[21] = {1,1};

    for (int i = 2; i < n+1; ++i){
        fib[i] = fib[i-1] + fib[i-2];
    }
    return fib[n];
}