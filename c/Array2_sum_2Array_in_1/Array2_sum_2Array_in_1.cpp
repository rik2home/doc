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
	int b[size_y][size_x] =
	{
		{ 10,2,3,4,5 },
		{ 10,0,-33,4,-5 },
		{ 1,222,33,-4,5 }
	};
	int c[size_y][size_x] = {};

	for (int i = 0; i < size_y; i++)
	{
		for (int j = 0; j < size_x; j++)
		{
			c[i][j] += a[i][j];
			c[i][j] += b[i][j];
		}
	}

	for (int i = 0; i < size_y; i++)
	{
		for (int j = 0; j < size_x; j++)
		{
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}