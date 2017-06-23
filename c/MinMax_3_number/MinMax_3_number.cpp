#include <iostream>
using namespace std;

void main()
{
	double a1, a2, a3;

	cout << "Enter first number: ";
	cin >> a1;
	cout << "Enter second number: ";
	cin >> a2;
	cout << "Enter third number: ";
	cin >> a3;

	double min = a1, max = a1;

	if (a2 < min)
	{
		min = a2;
	}
	if (a3 < min)
	{
		min = a3;
	}
	if (a2 > max)
	{
		max = a2;
	}
	if (a3 > max)
	{
		max = a3;
	}
	
	cout << "Min = " << min << endl;
	cout << "Max = " << max << endl;
}