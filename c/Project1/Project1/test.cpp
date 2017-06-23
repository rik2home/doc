#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int age[4];
	for (int j = 0; j < 4; j++)
	{
		cout << "Enter age: ";
		cin >> age[j];
	}
	for (int j = 0; j < 4; j++)
		cout << "You enter: " << age[j] << endl;
	_getch();
	return 0;
}