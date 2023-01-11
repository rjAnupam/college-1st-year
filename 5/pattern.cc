/* Program to print pattern
     1
     2 3
     4 5 6
     7 8 9 10
*/


#include <iostream>

using namespace std;


int main(void)
{
	int n;
	cout <<"Height: ";
	cin >>n;

	int c = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
    	{
			cout <<c <<" ";
			c++;
		}
		cout <<endl;
	}
}
