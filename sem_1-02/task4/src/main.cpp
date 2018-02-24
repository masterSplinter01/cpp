#include <iostream>
#include "a.h"
#include "add.h"

int main()
{
	extern int global_a;
	std::cout<<global_a<<'\n';
	return 0;

}