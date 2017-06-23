#include <iostream>
using namespace std;

void main()
{
	const int size_y = 3, size_x = 5;
	int a[size_y][size_x] =
	{
		{ 1,1,1,3,1 },
		{ 1,1,1,1,1 },
		{ 1,2,1,1,-1 }
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

	int sum = 0;
	
	for (int i = 0; i < size_y; i++)
	{
		for (int j = 0; j < size_x; j++)
		{	
			if (min_index_y <= max_index_y && min_index_x <= max_index_x)
			{
				if (i == min_index_y && j > min_index_x)
					sum += a[i][j];
				if (i > min_index_y && i < max_index_y)
					sum += a[i][j];
				if (i == max_index_y && j < max_index_x)
					sum += a[i][j];
			}
			else
			{
				if (i == max_index_y && j > max_index_x)
					sum += a[i][j];
				if (i > max_index_y && i < min_index_y)
					sum += a[i][j];
				if (i == min_index_y && j < min_index_x)
					sum += a[i][j];
			}
		}
	}


	cout << "max: " << max << endl;
	cout << "mix: " << min << endl;
	cout << sum << endl;

	//for (int i = 0; i < size_y; i++)
	//{
	//	for (int j = 0; j < size_x; j++)
	//	{
	//		cout << a[i][j] << " ";
	//	}
	//	cout << endl;
	//}


}