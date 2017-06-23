#include <iostream>
using namespace std;

void PrintTitle()
{
	cout << "Find min of 2 numbers\n\n";
}

double EnterFirstNumber()
{
	double value;
	cout << "Enter first number: ";
	cin >> value;
	return value;
}

double EnterSecondNumber()
{
	double value;
	cout << "Enter second number: ";
	cin >> value;
	return value;
}

double FindMin(double a, double b)
{
	if (a < b)
		return a;
	else return b;
}

void main()
{
	double a, b;

	PrintTitle();
	a = EnterFirstNumber();
	b = EnterSecondNumber();
	cout << "min: " << FindMin(a, b) << endl;
}