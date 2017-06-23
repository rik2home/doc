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

int get_array_difference_min_max(int a[], int size)
{
	int min_index = 0, max_index = 0;
	int razn = 0;

	for (int i = 0; i < size; i++)
	{
		if (a[i] < a[min_index])
			min_index = i;
		if (a[i] > a[max_index])
			max_index = i;
	}

	return a[max_index] - a[min_index];
}

void main()
{
	int const size = 5;
	int a[size];

	input_array(a, size);
	print_array(a, size);

	cout << "Razn: " << get_array_difference_min_max(a, size) << endl;
}