#include <iostream>

using namespace std;

#define MACROS_AVG(a, b) (((a) + (b)) / 2)

int enter_first_number()
{
	int value;
	cout << "Enter number: ";
	cin >> value;
	return value;
}

int enter_second_number()
{
	int value;
	cout << "Enter number: ";
	cin >> value;
	return value;
}

void main()
{
	int a, b;
	
	a = enter_first_number();
	b = enter_second_number();
	
	int avg = MACROS_AVG(a, b);

	cout << "AVG: " << avg << endl;
}