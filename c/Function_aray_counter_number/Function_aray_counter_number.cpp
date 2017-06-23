#include <iostream>
using namespace std;

void input_array(int a[], int size)
{
	for (int i = 0; i < size; i++)
		cin >> a[i];
}

void print_array(const int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int input_n()
{
	int n;
	cout << "Enter number: ";
	cin >> n;
	return n;
}

int find_array_n(int a[], int size, int n)
{
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		if (n == a[i])
			counter++;
	}
	return counter;
}

void main()
{
	const int size = 5;
	int a[size];
	int n;

	input_array (a, size);
	print_array(a, size);
	n = input_n();
	cout << find_array_n(a, size, n) << endl;
	
}