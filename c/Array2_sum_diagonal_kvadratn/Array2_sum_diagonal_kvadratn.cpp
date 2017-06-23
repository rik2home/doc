#include <iostream>
using namespace std;

void main()
{
	const int size_y = 5, size_x = 5;
	int a[size_y][size_x] =
	{
		{ 1,2,3,4,6 },
		{ 1,0,33,4,-5 },
		{ 1,0,33,4,-5 },
		{ 1,0,33,4,-5 },
		{ 1,2,3,-4,5 }
	};
	int sumL = 0, sumR = 0;

	for (int i = 0; i < size_y; i++)
	{
		for (int j = 0; j < size_x; j++)
		{
			if (i == j || j == size_y - i - 1)
				sumL += a[i][j];
		}
	}

	cout << sumL << endl;
}