#include <iostream>
using namespace std;

void PrintTitle()
{
	cout << "Find AVG of 3 numbers\n\n";
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

double EnterThirdNumber()
{
	double value;
	cout << "Enter third number: ";
	cin >> value;
	return value;
}

double FindAvg(double a, double b, double c)
{
	return (a + b + c) / 3;
}

void main()
{
	double a, b, c;

	a = EnterFirstNumber();
	b = EnterSecondNumber();
	c = EnterThirdNumber();
	FindAvg(a, b, c);
	//cout << "avg: " << FindAvg(a, b, c) << endl;
}