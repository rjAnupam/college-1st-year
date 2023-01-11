// Program to find factorial, check if a number is prime and to print fibonacci series upto n terms


#include <iostream>

using namespace std;


int menu(void);
void factorial(void);
void prime_number(void);
void fibonacii_series(void);

int main(void)
{
	while (true)
	{
		switch (menu())
		{
			case 0:
				return 0;
			case 1:
				factorial();
				break;
			case 2:
				prime_number();
				break;
			case 3:
				fibonacii_series();
				break;
			default:
				cout <<"Invalid!\n";
		}

		cout <<"Press enter to continue.";
		cin.ignore();
		cin.ignore();
	}
}

int menu(void)
{
	system("clear");

	cout <<"\n########################################\n";
	cout <<"#                 MENU                 #\n";
	cout <<"#--------------------------------------#\n";
	cout <<"#    Factorial of a number - Press 1   #\n";
	cout <<"#    Verify a Prime number - Press 2   #\n";
	cout <<"# Generate Fibonacii Series - Press 3  #\n";
	cout <<"#             Exit - Press 0           #\n";
	cout <<"########################################\n\n";

	int c;
	cin >>c;
	if (c != {0, 1, 2, 3})
	{
		cout <<"Invalid! Try again.\n Press Enter\n";
		cin.ignore();
		cin.ignore();
		c = menu();
	}

	return c;
}

void factorial(void)
{
	int n;
	cout <<"Enter a number: ";
	cin >>n;

	int factorial = 1;
	for (int i = 2; i <= n; i++)
	{
		factorial *= i;
	}

	cout <<"Factorial of " <<n <<": " <<factorial <<endl;

	return;
}

void prime_number(void)
{
	int n;
	cout <<"Enter a number: ";
	cin >>n;

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			cout <<n <<" is not a Prime Number.\n";
			return;
		}
	}

	cout <<n <<" is a Prime number.\n";

	return;
}

void fibonacii_series(void)
{
	int n;
    cout <<"Enter number of terms: ";
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

    return;
}
