#include <iostream>
using namespace std;

void PrintTitle()
{
	cout << "Find Factorial!\n\n";
}

int EnterA()
{
	int value;
	cout << "Enter integer number: ";
	cin >> value;
	return value;
}

int Factorial(int a)
{
	int f = 1;
	for (int i = 1; i <= a; i++)
	{
		f *= i;
	}
	return f;
}

void main()
{
	int f;

	PrintTitle();
	f = EnterA();
	cout << Factorial(f) << endl;
}