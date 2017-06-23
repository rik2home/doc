#include <iostream>
using namespace std;

void PrintTitle()
{
	cout << "Happy or not happy 6 digit number!\n\n";
}

int EnterNumber()
{
	int value;
	cout << "Enter the six-digit number: ";
	cin >> value;
	return value;
}

bool is_Number_Happy(int a)
{
	return (a / 100000 + (a % 100000) / 10000 + (a % 10000) / 1000 == 
			(a % 1000) / 100 + (a % 100) / 10 + a % 10);
}

void main()
{
	int a;

	PrintTitle();
	a = EnterNumber();
	cout << is_Number_Happy(a) << endl;
}