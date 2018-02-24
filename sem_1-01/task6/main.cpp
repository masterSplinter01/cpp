#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int main()
{
	string inputString;
	getline(cin, inputString);
	bool isPalindrome = true;
	
	size_t lengthInputStr = inputString.length();
	
	for (size_t i = 0; i < lengthInputStr/2; ++i){
		if (inputString[i] != inputString[lengthInputStr - i - 1]){
			isPalindrome = false;
			break;
		}
	}
	
	if (isPalindrome){
		cout << "The string is palindrome! \n";
	}
	else
			cout << "The string is not palindrome \n";
	
	return 0;
}
