// Program to print fibonacci series upto n terms


#include <iostream>

using namespace std;


int main(void)
{
	int n;
	cout <<"Enter number of terms for Fibonacci Series: ";
	cin >>n;

	if (n < 0)
	{
		cout <<"Please enter a positive number.\n";
		return 1;
	}

	cout <<"Fibonacci Series: ";

	int a = 0, b = 1, c = a + b;
	cout <<a <<", " <<b;

	for (int i = 2; i < n; i++)
	{
		cout <<", " <<c;
		a = b;
		b = c;
		c = a + b;
	}

	cout <<endl;
	return 0;
}
