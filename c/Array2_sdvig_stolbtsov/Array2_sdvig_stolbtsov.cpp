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
	int b[size_y];

	for (int i = 0; i < size_y; i++) // remember last stolbets
		b[i] = a[i][size_x - 1];

	for (int j = size_x - 1; j > 0; j--) // sdvig stolbtsa
	{
		for (int i = 0; i < size_y; i++)
		{
			a[i][j] = a[i][j - 1];
		}
	}

	for (int i = 0; i < size_y; i++) // 0 stolbets = last
		a[i][0] = b[i];


	for (int i = 0; i < size_y; i++)
	{
		for (int j = 0; j < size_x; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}