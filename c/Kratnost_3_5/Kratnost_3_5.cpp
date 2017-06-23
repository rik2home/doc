#include <iostream>
using namespace std;

void main()
{
	int a;

	cout << "Enter first number: ";
	cin >> a;

	if (a % 5 == 0 && a % 3 == 0)
	{
		cout << a << " Kratno 3 & 5\n";
	}
	else cout << a << " NE kratno 3-m i 5-ti\n";
}