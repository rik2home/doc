#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void input_array(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		a[i] = rand() % 6 + 1;
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

double avg_array(int a[], int size)
{
	int sum = 0, kol = 0;
	for (int i = 0; i < size; i++)
	{
		kol++;
		sum += a[i];
	}
	return sum / kol;
}

void main()
{
	int const size = 60;
	int a[size];

	srand((unsigned)time(0));

	input_array(a, size);
	print_array(a, size);

	cout << "Avg mas[i] = " << avg_array(a, size) << endl;

}