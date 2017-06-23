#include <iostream>
using namespace std;

void PrintTitle()
{
	cout << "Find max of 2 numbers\n\n";
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

double FindMax(double a, double b)
{
	if (a > b)
		return a;
	else return b;
}

void main()
{
	double a, b;

	PrintTitle();
	a = EnterFirstNumber();
	b = EnterSecondNumber();
	cout << "max: " << FindMax(a, b) << endl;
}