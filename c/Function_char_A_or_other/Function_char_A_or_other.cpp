#include <iostream>
using namespace std;

void PrintTitle()
{
	cout << "Enter char, find hi register\n\n";
}

char EnterChar()
{
	char value;
	cout << "Enter char: ";
	cin >> value;
	return value;
}

bool is_Char(char a)
{
	return (a >= 'A' && a <= 'Z');
}

void main()
{
	char a = 0;

	PrintTitle();
	a = EnterChar();
	cout << is_Char(a) << endl;
}