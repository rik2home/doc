#include <iostream>
using namespace std;

void main()
{
	int a, b, c;

	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	cout << "Enter third number: ";
	cin >> c;

	if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (c * c + b * b == a * a))
	{
		cout << "The entered number can be one of the triangle sides\n";
	}
	else
	{
		cout << "The entered numbers can not be parties to a triangle. Try again\n";
	}
}