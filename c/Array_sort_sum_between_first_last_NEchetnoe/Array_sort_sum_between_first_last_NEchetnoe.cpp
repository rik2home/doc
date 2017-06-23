#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void main()
{
	srand((unsigned)time(0));
	const int size = 10;
	int a[size];
	int first_c = 0, second_c = 0;

	for (int i = 0; i < size; i++)
	{
		a[i] = rand() % 10 + 1;
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (a[j - 1] > a[j])
			{
				int temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
			}
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	int sum = 0, kol = 0, index_a = 0, index_b = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] % 2)
		{
			index_b = i;
		}
	}

	for (int i = 0; i < size; i++)
	{
		if (a[i] % 2)
		{
			index_a = i;
			break;
		}
	}

	cout << "temp_a: " << a[index_a] << endl;
	cout << "temp_b: " << a[index_b] << endl;

	for (int i = index_a + 1; i < index_b; i++)
	{
		sum += a[i];
		kol++;
	}
	cout << "sum = " << sum / kol << endl;
}

