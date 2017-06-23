#include <iostream>
using namespace std;

void main()
{
	const int size = 10;
	int a[size];
	int i, left, right, sum = 0;

	for (i = 0; i < size; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}

	left = 0;
	while (left < size && a[left] != 0)
	{
		left++;
	}
	right = size - 1;
	while (right >= 0 && a[right] != 0)
	{
		right--;
	}

	for (i = left; i <= right; i++)
	{
		sum += a[i];
	}
	cout << "Sum a[i] between first and last 0 are: " << sum  << endl;
}