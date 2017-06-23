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

	int max = 0, min = 0;
	int max_index_y = 0, max_index_x = 0, min_index_y = 0, min_index_x = 0;

	for (int i = 0; i < size_y; i++)
	{
		for (int j = 0; j < size_x; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
				max_index_y = i;
				max_index_x = j;
			}

			if (a[i][j] < min)
			{
				min = a[i][j];
				min_index_y = i;
				min_index_x = j;
			}
		}
	}

	for (int i = 0, j = min_index_x; i < size_y; i++)
	{
		for (int i = 0, j = max_index_x; i < size_y; i++)
		{
			int temp = a[i][min_index_x];
			a[i][min_index_x] = a[i][max_index_x];
			a[i][max_index_x] = temp;
		}
	}

	//for (int i = 0; i < size_y; i++)
	//{
	//	for (int j = 0; j < size_x; j++)
	//	{
	//		cout << a[i][j] << " ";
	//	}
	//	cout << endl;
	//}
}