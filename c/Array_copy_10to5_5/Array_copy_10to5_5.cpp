
#include <iostream>
using namespace std;

void main()
{
	const int size = 10;
	int a[size] = { 1,-2,3,-4,0,0,7,0,10,-1 };
	int b[size / 2] = { 0 }, c[size / 2] = { 0 };
	int p = 0;

	for (int i = 0; i < size / 2; i++)
	{
		b[i] = a[i];
		p++;
	}

	for (int i = 0; i < size / 2; i++)
	{
		c[i] = a[p];
		p++;
	}

	//for (int i = 0; i < size / 2; i++)
	//{
	//	cout << b[i] << " ";
	//}
	//cout << endl;
	//for (int i = 0; i < size / 2; i++)
	//{
	//	cout << c[i] << " ";
	//}

}
