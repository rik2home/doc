#include <iostream>
using namespace std;

void main()
{
	const int size = 10;
	int a[size];
	int i, n, rep = 0;

	for (i = 0; i < size; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "Please enter number: ";
	cin >> n;

	for (i = 0; i < size; i++)
	{
		if (a[i] == n)
			rep++;
	}

	cout << "Your number repeat " << rep << endl;
}