#include <iostream>
using namespace std;

void main()
{
	int plus, minus, delenie, umnozh;
	int choise, a, b;

	do
	{
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

		switch (choise)
		{
		case 1:
			cout << a << " + " << b << " = " << a + b << endl;
			break;
		case 2:
			cout << a << " - " << b << " = " << a - b << endl;
			break;
		case 3:
			cout << a << " / " << b << " = " << a / b << endl;
			break;
		case 4:
			cout << a << " * " << b << " = " << a * b << endl;
			break;
		}
	} while (choise == 1 || choise == 2 || choise == 3 || choise == 4);
}