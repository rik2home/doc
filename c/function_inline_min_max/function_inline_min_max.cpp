#include <iostream>
using namespace std;

inline int get_min(int a, int b)
{
	return a < b ? a : b;
}

inline int get_max(int a, int b)
{
	return a > b ? a : b;
}

int enter_first_number()
{
	int value;
	cout << "Enter first number: ";
	cin >> value;
	return value;
}

int enter_second_number()
{
	int value;
	cout << "Enter second number: ";
	cin >> value;
	return value;
}

void main()
{
	int a, b;
	a = enter_first_number();
	b = enter_second_number();
	cout << "Min is: " << get_min(a, b) << endl;
	cout << "MAx is: " << get_max(a, b) << endl;
}