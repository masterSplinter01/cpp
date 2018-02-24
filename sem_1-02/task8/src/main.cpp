#include <iostream>

extern "C"{
	int sum(int a, int b);
}

int main()
{
	int res = sum(5,2);
	std::cout<<res<<"\n";
	return 0;
}