#include <cassert>
#include <iostream>

#include "rational.h"

using namespace std;


/* task 1*/
void task1() {
    // add
    assert(rational(1).add(rational(2)).equals(3));
    assert(rational(1, 2).add(rational(1, 2)).equals(rational(1)));

    assert(rational(1, 2).add(rational(1, 3)).equals(rational(5, 6)));

    assert(rational(1).equals(1));
    assert(rational(2).equals(2));
    assert(rational(1, 2).equals(rational(1, 2)));

    assert(rational(0).add(rational(1)).equals(1));
    assert(rational(0).add(rational(0)).equals(0));
    assert(!rational(0).negate().negative());
    assert(rational(0).negate().equals(rational(0)));
    assert(rational(0).negate().negate().equals(rational(0)));

    assert(rational(1).add(rational(0)).equals(rational(0).add(rational(1))));
    assert(rational(1).add(rational(2)).equals(rational(1).add(rational(2))));

    assert(rational(2, 4). equals(rational(1, 2)));

    assert(rational(1, 3).add(rational(1, 3)).equals(rational(2, 3)));
    assert(rational(1, 3).add(rational(1, 7)).equals(rational(7 + 3, 21)));
    assert(rational(2, 4).add(rational(2, 6)).equals(rational(1, 2).add(rational(1, 3))));

    // multiply
    assert(rational(1).negate().multiply(-1).equals(1));
    assert(rational(2).multiply(rational(2)).equals(4));
    assert(rational(1, 3).multiply(rational(2, 3)).equals(rational(2, 9)));
    assert(rational(1, 3).multiply(rational(1, 3)).equals(rational(1, 9)));
    assert(rational(3, 1).multiply(rational(1, 3)).equals(rational(1)));

    // compare
    assert(!rational(1).less(rational(1)));
    assert(rational(1).less(rational(2)));
    assert(!rational(2).less(rational(1)));

    assert(!rational(1, 2).less(rational(1, 3)));
    assert(rational(1, 3).less(rational(1, 2)));
    assert(rational(1, 3).less(rational(1)));
    assert(rational(1, 3).less(rational(2)));

    assert(rational(1).toInt() == 1);
    assert(rational(1, 3).toInt() == 0);
    assert(rational(3, 3).toInt() == 1);
    assert(rational(4, 3).toInt() == 1);
    assert(rational(6, 3).toInt() == 2);
    assert(rational(7, 3).toInt() == 2);
    assert(rational(-7, 3).toInt() == -2);
}



int main(int argc, char** argv)
{
    task1();
   // task2();
    return 0;
}
