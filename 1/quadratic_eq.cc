//Program to find roots of a quadratic equation

#include <iostream>
#include <cmath>

using namespace std;


int main(void)
{
	double a, b, c, r1, r2;

	cout <<"Enter the coefficients of the quadratic equation (a, b, c):\n";
	cin >>a >>b >>c;

	if (a == 0)
	{
		cout <<"This is not a quadratic equation.\n";
		return 1;
	}

	double d = b*b - 4*a*c;

	if (d == 0)
	{
		r1 = -b / (2*a);
		cout <<"The roots are real and identical:\n" <<r1 <<endl;
	}
	else if (d > 0)
	{
		r1 = (-b + sqrt(d)) / (2*a);
		r2 = (-b - sqrt(d)) / (2*a);
		cout <<"The roots are real and distinct:\n" <<r1 <<endl <<r2 <<endl;
	}
	else
	{
		double real = -b / (2*a);
		double imag = sqrt(-d) / (2*a);
		cout <<"The equation has two complex roots:\n" <<real <<" + i" <<imag <<endl <<real <<" - i" <<imag <<endl;
	}

	return 0;
}
