#include <iostream>
using namespace std;

void main()
{
	const int size = 10;
	int a[size];
	int i, max_index = 0, min_index = 0;
	int sum = 0, min_left, min_right, max_left, max_right;

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

	min_left = 0;
	while (min_left < size && a[min_left] != a[min_index])
	{
		min_left++;
	}
	min_right = size - 1;
	while (min_right >= 0 && a[min_right] != a[min_index])
	{
		min_right--;
	}

	max_left = 0;
	while (max_left < size && a[max_left] != a[max_index])
	{
		max_left++;
	}
	max_right = size - 1;
	while (max_right >= 0 && a[max_right] != a[max_index])
	{
		max_right--;
	}

	if (min_left < max_left)
	{
		for (i = min_left; i < max_right; i++)
		{
			sum += a[i];
		}
		sum -= a[min_left];
	}
	else
	{
		for (i = max_left; i < min_right; i++)
		{
			sum += a[i];
		}
		sum -= a[max_left];
	}
	
	
	cout << "min left " << min_left << endl;
	cout << "min right " << min_right << endl;
	cout << "maxn left " << max_left << endl;
	cout << "max right " << max_right << endl;
	cout << "Sum between min/max = " << sum << endl;
}