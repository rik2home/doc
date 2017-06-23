#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void main()
{
	srand((unsigned)time(0));
	const int size = 10;
	int a[size], b = 0;

	for (int i = 0; i < size; i++)
	{
		a[i] = rand()% 20 + 1;
		b += a[i];
	}

	cout << b / size << endl;
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}