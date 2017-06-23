#include <iostream>
using namespace std;

void main()
{
	const int size_y = 3, size_x = 5;
	int a[size_y][size_x] =
	{
		{ 1,2,3,4,5 },
		{ 1,0,-33,4,-5 },
		{ 1,222,33,-4,5 }
	};

	for (int j = 0; j < size_x; j++)
	{
		for (int i = 0; i < size_y; i++)
		{
			for (int i2 = size_y - 1; i2 > i; i2--)
			{
				if (a[i2 - 1][j] > a[i2][j])
				{
					int temp = a[i2 - 1 ][j];
					a[i2 - 1][j] = a[i2][j];
					a[i2][j] = temp;
				}
			}
		}
	}

	for (int i = 0; i < size_y; i++)
	{
		for (int j = 0; j < size_x; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}