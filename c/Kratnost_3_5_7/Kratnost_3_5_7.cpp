#include <iostream>
using namespace std;

void main()
{
	int a;

	cout << "Enter namber: ";
	cin >> a;

	if (a % 7 == 0 && a % 5 == 0 && a % 3 == 0)
	{
		cout << a << " Kratno: 3, 5, 7\n";
	}
	else cout << a << " NE Kratno: 3, 5, 7\n";
}