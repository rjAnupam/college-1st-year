// Program to print of an item in a given list


#include <iostream>

using namespace std;

int item_freq(int list[], int len, int item);


int main(void)
{
	const int len = 10;

	int list[len] = {74, 53, 53, 84, 53, 74, 64, 85, 85, 6};

	int item;
	cout <<"Enter any number from [";
	cout <<list[0];
	for (int i = 1; i < len; i++)
	{
		cout <<", " <<list[i];
	}
	cout <<"] :  ";
	cin >>item;

	int freq = item_freq(list, len, item);
	cout <<"Frequency of " <<item <<" in the list: " <<freq <<endl;

	return 0;
}

int item_freq(int list[], int len, int item)
{
	int freq = 0;

	for (int i = 0; i < len; i++)
	{
		if (list[i] == item) freq++;
	}

	return freq;
}
