#include <iostream>
using namespace std;
void main()
{
	const int size = 10;
	int a[size];
	int i;
	for (i = 0; i < size; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	cout << endl;
	for (i = 0; i < size; i++)
	{
		if (a[i] < 0)
			cout << "a[" << i << "]: " << a[i] << endl;
	}
}