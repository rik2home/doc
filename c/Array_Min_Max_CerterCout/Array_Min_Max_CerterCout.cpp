#include <iostream>
using namespace std;
void main()
{
	const int size = 10;
	int a[size];
	int i;
	int min_index = 0, max_index = 0;

	for (i = 0; i < size; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}

	for (i = 0; i < size; i++)
	{
		if (a[i] < a[min_index])
			min_index = i;
		if (a[i] > a[max_index])
			max_index = i;
	}
	cout << endl;

	for (i = 0; i < size; i++)
	{
		if (a[i] != a[max_index] && a[i] != a[min_index])
			cout << "a[" << i << "]: " << a[i] << endl;
	}

}