// Program to print fibonacii series upto n terms

#include <iostream>

using namespace std;


int main(void)
{
	int n;
	cout <<"Enter number of terms for Fibonacci Series: ";
	cin >>n;

	cout <<"Fibonacci Series: ";
	
	int a = 0, b = 1, c = a + b;
	cout <<a <<", " <<b;

	for (int i = 0; i < n - 2; i++)
	{
		cout <<", " <<c;
		a = b;
		b = c;
		c = a + b;
	}

	cout <<endl;

	return 0;
}
