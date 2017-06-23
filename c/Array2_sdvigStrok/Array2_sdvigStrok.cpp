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
	int b[size_x];

	for (int j = 0; j < size_x; j++) // remember last string
		b[j] = a[size_y - 1][j];

	for (int i = size_y - 1; i > 0; i--) // sdvig strok
	{
		for (int j = 0; j < size_x; j++)
		{
			a[i][j] = a[i - 1][j];
		}
	}

	for (int j = 0; j < size_x; j++) // 0 stroka = last
		a[0][j] = b[j];


	//for (int i = 0; i < size_y; i++)
	//{
	//	for (int j = 0; j < size_x; j++)
	//	{
	//		cout << a[i][j] << " ";
	//	}
	//	cout << endl;
	//}
}