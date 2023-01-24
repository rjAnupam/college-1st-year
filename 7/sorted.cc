// Program to take input of n numbers and sort them in ascending order


#include <iostream>

using namespace std;

#define n 10


void bubble_sort(int arr[]);

int main(void)
{
	int numbers[n];

	cout <<"Enter numbers to be sorted:\n";
	for (int i = 0; i < n; i++)
	{
		cin >>numbers[i];
	}

	bubble_sort(numbers);

	cout <<"\nOutput:\n";
	for (int i = 0; i < n; i++)
	{
		cout <<numbers[i] <<endl;
	}

	return 0;
}

void bubble_sort(int arr[])
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-1-i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
