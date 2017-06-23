#include <iostream>
using namespace std;

void main()
{
	const int size_m = 3, size_k = 6, size_n = 5;
	int a[size_m][size_k] =
	{
		{ 1,1,1,1 },
		{ 1,1,1,1 },
		{ 1,3,4,1 }
	};
	int b[size_k][size_n] =
	{
		{ 1,1,1,3,1 },
		{ 1,1,1,1,1 },
		{ 1,1,1,1,1 },
		{ 1,1,1,1,1 },
		{ 1,1,1,1,1 },
		{ 1,1,1,1,1 }
	};
	int c[size_m][size_n] = {};
	for (int i = 0; i < size_m; i++)
	{
		for (int j = 0; j < size_n; j++)
		{
			int sum = 0;
			for (int j2 = 0; j2 < size_n; j2++)
			{
				sum += a[i][j2];
			}

			c[i][j] = sum * b[i][j];
		}
	}

	for (int i = 0; i < size_m; i++)
	{
		for (int j = 0; j < size_n; j++)
		{
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}