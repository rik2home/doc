#include <iostream>
using namespace std;

void PrintTitle()
{
	cout << "Is Enter char are char?\n\n";
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
	return ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'));
}

void main()
{
	char a = 0;

	PrintTitle();
	a = EnterChar();
	cout << is_Char(a) << endl;
}