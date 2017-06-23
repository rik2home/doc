#include <iostream>
using namespace std;

void main()
{
	const int size = 10;
	int a[size];
	int i, sum = 0;

	for (i = 0; i < size; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	
	for (i = 0; i < size; i++)
	{
			sum += a[i];
			if (a[i] == 0)
				break;
	}

	cout << "Sum a[i] before you enter 0 are: " << sum << endl;
}