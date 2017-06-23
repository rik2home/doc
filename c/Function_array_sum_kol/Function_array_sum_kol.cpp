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

int get_array_positive_kol(int a[], int size)
{
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] > 0)
			counter++;
	}
	return counter;
}
int get_array_positive_sum(int a[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] > 0)
			sum += a[i];
	}
	return sum;
}

int get_array_negative_kol(int a[], int size)
{
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] < 0)
			counter++;
	}
	return counter;
}
int get_array_negative_sum(int a[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] < 0)
			sum += a[i];
	}
	return sum;
}

int get_array_zerro_kol(int a[], int size)
{
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] == 0)
			counter++;
	}
	return counter;
}

int get_array_even_kol(int a[], int size)
{
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] != 0 && a[i] % 2 == 0)
			counter++;
	}
	return counter;
}
int get_array_even_sum(int a[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] != 0 && a[i] % 2 == 0)
			sum += a[i];
	}
	return sum;
}

int get_array_odd_kol(int a[], int size)
{
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] != 0 && a[i] % 2 != 0)
			counter++;
	}
	return counter;
}
int get_array_odd_sum(int a[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] != 0 && a[i] % 2 != 0)
			sum += a[i];
	}
	return sum;
}

int get_array_3_5_7_kol(int a[], int size)
{
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		if ((a[i] != 0) && (a[i] % 3 == 0 || a[i] % 5 == 0 || a[i] % 7 == 0))
			counter++;
	}
	return counter;
}
int get_array_3_5_7_sum(int a[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if ((a[i] != 0) && (a[i] % 3 == 0 || a[i] % 5 == 0 || a[i] % 7 == 0))
			sum += a[i];
	}
	return sum;
}

int get_array_3_ne_5_kol(int a[], int size)
{
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] != 0 && a[i] % 3 == 0 && a[i] % 5)
			counter++;
	}
	return counter;
}
int get_array_3_ne_5_sum(int a[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] != 0 && a[i] % 3 == 0 && a[i] % 5)
			sum += a[i];
	}
	return sum;
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
int get_array_hi_1_low_5_sum(int a[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] > 1 && a[i] < 5)
			sum += a[i];
	}
	return sum;
}

void main()
{
	const int size = 5;
	int a[size];

	input_array(a, size);
	print_array(a, size);
	cout << get_array_positive_kol(a, size) << " " << get_array_negative_kol(a, size) << " "
		<< get_array_zerro_kol(a, size) << " " << get_array_even_kol(a, size) << " "
		<< get_array_odd_kol(a, size) << " " << get_array_3_5_7_kol(a, size) << " "
		<< get_array_3_ne_5_kol(a, size) << " " << get_array_hi_1_low_5_kol << endl;

	cout << get_array_positive_sum(a, size) << " " << get_array_negative_sum(a, size) << " "
		<< get_array_even_sum(a, size) << " "
		<< get_array_odd_sum(a, size) << " " << get_array_3_5_7_sum(a, size) << " "
		<< get_array_3_ne_5_sum(a, size) << " " << get_array_hi_1_low_5_sum << endl;

}