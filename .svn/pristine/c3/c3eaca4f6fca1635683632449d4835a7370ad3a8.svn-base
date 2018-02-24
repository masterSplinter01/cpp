#include <iostream>
#include "address.h"

using namespace std;

int main()
{
	
	cout << "stack: \n";

	func1();

	const int n = 7;
	int* arr_dynamic = new int[n];

	cout << "\nheap: \n";
	for (size_t i = 0; i < n; ++i)
	{
		cout << arr_dynamic + i << '\n';
	}
	cout << endl;
	delete [] arr_dynamic;
	return 0;
}



