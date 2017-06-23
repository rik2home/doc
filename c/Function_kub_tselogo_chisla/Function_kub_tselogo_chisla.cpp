#include <iostream>
using namespace std;

void PrintTitle()
{
	cout << "Cubic integer\n\n";
}

int MenuEnter()
{
	int value;
	cout << "Enter integer number for cubic: ";
	cin >> value;
	return value;
}

int Cubic(int a)
{
	return a * a * a;
}

void main()
{
	int a;

	PrintTitle();
	a = MenuEnter();
	cout << "Kub: " << Cubic(a) << endl;
}