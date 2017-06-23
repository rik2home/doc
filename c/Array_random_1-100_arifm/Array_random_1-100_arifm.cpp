#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void main()
{
	srand((unsigned)time(0));
	const int size = 10;
	int a[size], b[size];
	int a_plus = 0, b_plus = 0;

	for (int i = 0; i < size; i++)
	{
		a[i] = rand() % 100 + 1;
		b[i] = rand() % 100 + 1;
		a_plus += a[i];
		b_plus += b[i];
	}

	cout << a_plus / size << endl;
	cout << b_plus / size << endl;

	int max_index = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] > a[max_index])
			max_index = i;
	}
	cout << "max: " << a[max_index] << endl;
}