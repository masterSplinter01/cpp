#include <stdio.h>
#include <fstream>
using namespace std;

int fibonacci(int N)
{
	int prevprev = 1;
	int prev = 1;
	int currentnum = 0;
	
	for (int i = 2; i < N; ++i){
		currentnum = prevprev+prev;
		prevprev = prev;
		prev = currentnum;
	}
	return currentnum;
}

int main()
{
	ifstream in("input.txt");
	ofstream out("ouput.txt");
	int n;
	
	in >> n;
	
	int result = fibonacci(n);
	
	out << result;
	return 0;
}
