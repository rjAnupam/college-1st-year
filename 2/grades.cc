// Program to to calculate grades for five subjects


#include <iostream>

using namespace std;


int main(void)
{
	float marks1, marks2, marks3, marks4, marks5;
	cout <<"Enter the marks of five subjects:\n";
	cin >>marks1 >>marks2 >>marks3 >>marks4 >>marks5;

	float total_marks = marks1 + marks2 + marks3 + marks4 + marks5;
	float percent = total_marks / 5.0;

	cout <<"Total Marks: " <<total_marks <<endl;
	cout <<"Percentage: " <<percent <<"%\n";
	cout <<"Grade: ";

	if (percent > 89) cout <<"A";
	else if (percent > 79) cout <<"B";
	else if (percent > 69) cout <<"C";
	else if (percent > 59) cout <<"D";
	else if (percent > 49) cout <<"E";
	else cout <<"F";

	cout <<endl;
	return 0;
}
