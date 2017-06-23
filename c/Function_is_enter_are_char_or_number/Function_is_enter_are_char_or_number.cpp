#include <iostream>
using namespace std;

void PrintTitle()
{
	cout << "Is enter char are char or number?\n\n";
}

char EnterChar()
{
	char value;
	cout << "Enter char: ";
	cin >> value;
	return value;
}

bool is_EnterCharOrNumber(char a)
{
	return ((a >= '0' && a <= '9') || (a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'));
}

void main()
{
	char a;

	PrintTitle();
	a = EnterChar();
	cout << is_EnterCharOrNumber(a) << endl;
}