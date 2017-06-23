#include <iostream>

using namespace std;

#define MACROS_KUB(a) ((a) * (a) * (a))

int enter_number()
{
	int value;
	cout << "Enter number: ";
	cin >> value;
	return value;
}

void main()
{
	int a;
	a = enter_number();
	a = MACROS_KUB(a);

	cout << "Kub: " << a << endl;
}