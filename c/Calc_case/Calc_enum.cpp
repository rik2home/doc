#include <iostream>
using namespace std;

enum operatsii { pluss = 1, minuss, delenie, umnozh };

void main()
{
	int choise, a, b;

	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;

	cout << "Enter your choise for calc:\n"
		 << "1. \"+\"\n"
		 << "2. \"-\"\n"
		 << "3. \"/\"\n"
		 << "4. \"*\"\n"
		 << "Your choise: ";
	cin >> choise;

	while (choise != 1 && choise != 2 && choise != 3 && choise != 4)
	{
		cout << "Enter correct choise!!!\n"
			<< "Enter your choise for calc:\n"
			<< "1. \"+\"\n"
			<< "2. \"-\"\n"
			<< "3. \"/\"\n"
			<< "4. \"*\"\n"
			<< "Your choise: ";
		cin >> choise;
	
		switch (choise)
		{
		case pluss:
			cout << a << " + " << b << " = " << a + b << endl;
			break;
		case minuss:
			cout << a << " - " << b << " = " << a - b << endl;
			break;
		case delenie:
			cout << a << " / " << b << " = " << a / b << endl;
			break;
		case umnozh:
			cout << a << " * " << b << " = " << a * b << endl;
			break;
		}
	}
}