#include <iostream>
using namespace std;

void main()
{
	double a;

	cout << "Enter number: ";
	cin >> a;

	if (a >= 0 && a <= 20)
	{
		cout << a << " Vhodit v diapazon [0, 20)\n";
	}
	else cout << a << " NE vhodit v diapazon [0, 20)\n";
}