#include <iostream>
using namespace std;

void PrintTitle()
{
	cout << "Is enter char are number?\n\n";
}

char EnterChar()
{
	char value;
	cout << "Enter char: ";
	cin >> value;
	return value;
}

bool is_Char_Number(char a)
{
	return (a >= '0' && a <= '9');
}

void main()
{
	char a;

	PrintTitle();
	a = EnterChar();
	cout << is_Char_Number(a) << endl;
}