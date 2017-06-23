#include <iostream>
using namespace std;

void input_array(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> a[i];
	}
}

void print_array(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int get_array_kol_prostie(int a[], int size)
{
	int prost = 0;
	for (int i = 0; i < size; i++)
	{
		int kol = 0;

		for (int j = 1; j <= a[i]; j++)
		{
			if (a[i] % j == 0)
				kol++;
		}
		if (kol == 2)
			prost++;
	}
	return prost;
}

void main()
{
	int const size = 5;
	int a[size];
	input_array(a, size);
	print_array(a, size);

	cout << "Kol prostih: " << get_array_kol_prostie(a, size) << endl;
}