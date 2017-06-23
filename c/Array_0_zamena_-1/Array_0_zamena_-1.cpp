#include <iostream>
using namespace std;

void main()
{
	const int size = 10;
	int a[size];
	int i, ii;

	for (i = 0; i < size; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	for (i = 0, ii = 0; i < size; i++, ii++)
	{
		while (a[ii] == 0) ii++;
		if (ii < size) a[i] = a[ii];
		else a[i] = -1;
	}

	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "a[" << i << "]: " << a[i] << endl;
	}
}