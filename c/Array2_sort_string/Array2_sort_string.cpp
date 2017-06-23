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

	for (int i = 0; i < size_y; i++)
	{
		for (int j = 0; j < size_x; j++)
		{
			for (int j2 = size_x - 1; j2 > j; j2--)
			{
				if (a[i][j2 - 1] > a[i][j2])
				{
					int temp = a[i][j2 - 1];
					a[i][j2 - 1] = a[i][j2];
					a[i][j2] = temp;
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