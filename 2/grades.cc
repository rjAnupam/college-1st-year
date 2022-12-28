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

	if (percent > 90) cout <<"A";
	else if (percent > 80) cout <<"B";
	else if (percent > 70) cout <<"C";
	else if (percent > 60) cout <<"D";
	else if (percent > 50) cout <<"E";
	else cout <<"F";

	cout <<endl;
	return 0;
}
