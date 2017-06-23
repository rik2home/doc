#include <iostream>
using namespace std;

void main()
{
	double a, b;

	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;

	if (a > b)
	{
		cout << a << " Max\n";
	}
	else if (a < b)
	{
		cout << b << " Max\n";
	}
	else cout << a << " = " << b << endl;
}