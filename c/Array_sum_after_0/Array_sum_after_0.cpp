#include <iostream>
using namespace std;

void main()
{
	const int size = 10;
	int a[size];
	int i, i0, sum = 0;

	for (i = 0; i < size; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}

	for (i = 0; i < size; i++)
	{
		if (a[i] == 0)
			i0 = i;
	}

	for (i = i0; i < size; i++)
		sum += a[i];

	cout << "Sum a[i] after you enter 0 are: " << sum  << endl;
}