#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string inputStr;

	getline(cin, inputStr);
	
	size_t lengthStr = inputStr.length();
	
	for (size_t i = 0; i < lengthStr/2; ++i){
		swap(inputStr[i], inputStr[lengthStr - i - 1]);
	}
	
	cout << inputStr;
	
	return 0;
}
