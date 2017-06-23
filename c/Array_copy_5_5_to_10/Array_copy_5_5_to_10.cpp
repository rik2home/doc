
#include <iostream>
using namespace std;

void main()
{
	const int size = 10;
	int a[size] = { 0 };
	int b[size / 2] = { 1,2,3,4,5 }, c[size / 2] = { 6,7,8,9,10 };
	int p = 0;

	for (int i = 0; i < size / 2; i++)
	{
		a[i] = b[i];
		p++;
	}

	for (int i = 0; i < size / 2; i++)
	{
		a[p] = c[i];
		p++;
	}

	//for (int i = 0; i < size; i++)
	//{
	//	cout << a[i] << " ";
	//}
	//cout << endl;
}
