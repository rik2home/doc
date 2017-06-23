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

int get_array_sum_even_index(int a[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (i == 0 || i % 2 == 0)
			sum += a[i];
	}
	return sum;
}

int get_array_kol_even_index(int a[], int size)
{
	int kol = 0;
	for (int i = 0; i < size; i++)
	{
		if (i == 0 || i % 2 == 0)
			kol++;
	}
	return kol;
}

int get_aaray_avg_even_index(int a[], int size)
{
	int sum = 0, kol = 0;
	for (int i = 0; i < size; i++)
	{
		if (i == 0 || i % 2 == 0)
		{
			sum += a[i];
			kol++;
		}
	}
	return sum / kol;
}

int get_array_sum_odd_index(int a[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (i % 2 != 0 || i == 1)
			sum += a[i];
	}
	return sum;
}

int get_array_kol_odd_index(int a[], int size)
{
	int kol = 0;
	for (int i = 0; i < size; i++)
	{
		if (i % 2 != 0 || i == 1)
			kol++;
	}
	return kol;
}

int get_array_avg_odd_index(int a[], int size)
{
	int sum = 0, kol = 0;
	for (int i = 0; i < size; i++)
	{
		if (i % 2 != 0 || i == 1)
		{
			sum += a[i];
			kol++;
		}
	}
	return sum / kol;
}

int get_array_sum_2_3_index(int a[], int size)
{
	int sum = 0;
	for (int i = 2; i < size; i++)
	{
		if (i % 2 == 0 || i % 3 == 0)
			sum += a[i];
	}
	return sum;
}

int get_array_kol_2_3_index(int a[], int size)
{
	int kol = 0;
	for (int i = 2; i < size; i++)
	{
		if (i % 2 == 0 || i % 3 == 0)
			kol++;
	}
	return kol;
}

int get_array_avg_2_3_index(int a[], int size)
{
	int sum = 0, kol = 0;
	for (int i = 2; i < size; i++)
	{
		if (i % 2 == 0 || i % 3 == 0)
		{
			sum += a[i];
			kol++;
		}
	}
	return sum / kol;
}

int get_array_sum_2_ne3_index(int a[], int size)
{
	int sum = 0;
	for (int i = 2; i < size; i++)
	{
		if (i % 2 == 0 || i % 3 != 0)
			sum += a[i];
	}
	return sum;
}

int get_array_kol_2_ne3_index(int a[], int size)
{
	int kol = 0;
	for (int i = 2; i < size; i++)
	{
		if (i % 2 == 0 || i % 3 != 0)
			kol++;
	}
	return kol;
}

int get_array_avg_2_ne3_index(int a[], int size)
{
	int sum = 0, kol = 0;
	for (int i = 2; i < size; i++)
	{
		if (i % 2 == 0 || i % 3 != 0)
		{
			sum += a[i];
			kol++;
		}
	}
	return sum / kol;
}

void main()
{
	const int size = 10;
	int a[size] = {};
	
	input_array(a, size);
	print_array(a, size);

	cout << "sum, kol, avg even: " << get_array_sum_even_index(a, size) << " " 
		<< get_array_kol_even_index(a, size) << " " << get_aaray_avg_even_index(a, size) << endl;
	cout << "sum, kol, avg odd: " << get_array_sum_odd_index(a, size) << " "
		<< get_array_kol_odd_index(a, size) << " " << get_array_avg_odd_index(a, size) << endl;

}