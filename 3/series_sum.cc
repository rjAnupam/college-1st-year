// Program to find S = 1+2+3+4+..... n terms

#include <iostream>

using namespace std;


int main(void)
{
	int n;
	cout <<"Enter number of terms for (1+2+3+4+.....): ";
	cin >>n;

	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}

	cout <<"Sum: " <<sum <<endl;

	return 0;
}
