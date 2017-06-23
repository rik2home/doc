#include <iostream>
using namespace std;

void main()
{
	double a;

	cout << "Enter number: ";
	cin >> a;

	if ((a >= 0 && a <= 20) || (a >= 40 && a <= 50))
	{
		cout << a << " V diapazone [0, 20) and [40, 50]\n";
	}
	else cout << a << " NE v diapazone [0, 20) and [40, 50]\n";
}