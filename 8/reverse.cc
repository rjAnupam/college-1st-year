// Program to print a given list in reverse order


#include <iostream>

using namespace std;


int main(void)
{
	const int len = 8;
	int list[len] = {65, 636, 6, 93, 573, 36, 58, 47};

	cout <<"List in reverse order: \n";
	for (int i = len - 1; i >= 0; i--)
	{
		cout <<list[i] <<endl;
	}

	return 0;
}
