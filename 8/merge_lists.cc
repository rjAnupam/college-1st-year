// Program to merge two given lists in one


#include <iostream>

using namespace std;

void merge_lists(int list1[], int list2[], int len1, int len2, int list[]);


int main(void)
{
	const int len1 = 10, len2 = 9;
	int list1[len1] = {64, 46, 41, 95, 2, 6, 55, 73, 75, 35};
	int list2[len2] = {572, 63, 86, 427, 468, 74, 46, 9, 55};

	int merged_list[len1 + len2];
	merge_lists(list1, list2, len1, len2, merged_list);

	cout <<"Merged list:\n";
	for (int i = 0; i < len1+len2; i++)
	{
		cout <<merged_list[i] <<endl;
	}

	return 0;
}

void merge_lists(int list1[], int list2[], int len1, int len2, int
list[])
{
	for (int i = 0; i < len1; i++)
	{
		list[i] = list1[i];
	}

	for (int i = 0; i < len2; i++)
	{
		list[len1 + i] = list2[i];
	}

	return;
}
