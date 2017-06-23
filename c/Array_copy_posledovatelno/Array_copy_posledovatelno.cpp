
#include <iostream>
using namespace std;

void main()
{
	const int size = 10;
	int a[size] = {1,-2,3,-4,0,0,7,0,10,-1}, b[size] = {0};
	int p = 0;

	for (int i = 0, j = 0; i < size; i++, j++)
	{
		while (a[j] == 0 || a[j] < 0)
			j++;
		if (j < size)
		{
			b[i] = a[j];
			p++;
		}
	}
	
	for (int i = 0; i < size; i++)
	{
		if (a[i] < 0)
		{
			b[p] = a[i];
			p++;
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << b[i] << " ";
	}

}
