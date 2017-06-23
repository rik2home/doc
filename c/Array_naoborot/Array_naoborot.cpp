
#include <iostream>
using namespace std;

void main()
{
	const int size = 10;
	int a[size] = { 1,2,3,4,5,6,7,8,9,10 };
	int b;

	for (int i = 0; i < size / 2; i++)
	{
		b = a[i];
		a[i] = a[size - 1 - i];
		a[size - 1 - i] = b;
	}

	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "a[" << i << "]: " << a[i] << endl;
	}
}
