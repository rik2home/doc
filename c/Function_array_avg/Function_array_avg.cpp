#include <iostream>
using namespace std;

void input_array(int a[], int size)
{
	for (int i = 0; i < size; i++)
		cin >> a[i];
}

void print_array(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int get_array_positive_avg(int a[], int size)
{
	int counter = 0, sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] > 0)
		{
			counter++;
			sum += a[i];
		}
	}
	return sum / counter;
}

int get_array_negative_avg(int a[], int size)
{
	int counter = 0, sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] < 0)
		{
			counter++;
			sum += a[i];
		}
	}
	return sum / counter;
}

int get_array_not_zerro_avg(int a[], int size)
{
	int counter = 0, sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] != 0)
		{
			counter++;
			sum += a[i];
		}
	}
	return sum / counter;
}

int get_array_even_avg(int a[], int size)
{
	int counter = 0, sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] != 0 && a[i] % 2 == 0)
		{
			counter++;
			sum += a[i];
		}
	}
	return sum / counter;
}

int get_array_odd_avg(int a[], int size)
{
	int counter = 0, sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] != 0 && a[i] % 2 != 0)
		{
			counter++;
			sum += a[i];
		}
	}
	return sum / counter;
}

int get_array_3_5_7_avg(int a[], int size)
{
	int counter = 0, sum = 0;
	for (int i = 0; i < size; i++)
	{
		if ((a[i] != 0) && (a[i] % 3 == 0 || a[i] % 5 == 0 || a[i] % 7 == 0))
		{
			counter++;
			sum += a[i];
		}
	}
	return sum / counter;
}

int get_array_3_ne_5_avg(int a[], int size)
{
	int counter = 0, sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] != 0 && a[i] % 3 == 0 && a[i] % 5)
		{
			counter++;
			sum += a[i];
		}
	}
	return sum / counter;
}

int get_array_hi_1_low_5_kol(int a[], int size)
{
	int c = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] > 1 && a[i] < 5)
			c++;
	}
	return c;
}

void main()
{
	const int size = 5;
	int a[size];

	input_array(a, size);
	print_array(a, size);
	
	//cout << "get_array_positive_avg " << get_array_positive_avg(a, size) << endl;
	//cout << "get_array_negative_avg " << get_array_negative_avg(a, size) << endl;
	//cout << "get_array_not_zerro_avg " << get_array_not_zerro_avg(a, size) << endl;
	//cout << "get_array_even_avg " << get_array_even_avg(a, size) << endl;
	//cout << "get_array_odd_avg " << get_array_odd_avg(a, size) << endl;
	//cout << "get_array_3_5_7_avg " << get_array_3_5_7_avg(a, size) << endl;
	//cout << "get_array_3_ne_5_avg " << get_array_3_ne_5_avg(a, size) << endl;
	cout << "get_array_hi_1_low_5_kol " << get_array_hi_1_low_5_kol(a, size) << endl;
}