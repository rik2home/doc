
#include <iostream>
using namespace std;

void main()
{
	const int size = 10;
	int a[size] = { 1,3,5,7,9,1,1,1,1,1 };
	int b[size] = { 2,4,6,2,2,2,2,2,2,2 };

	int temp_a = 0, temp_b = 0;

	for (int i = 0; i < size; i++)
	{
		a[i] = a[i] + b[i];
		b[i] = a[i] - b[i];
		a[i] = a[i] - b[i];
	}
}
