
#include <iostream>
using namespace std;

void main()
{
	const int size = 10;
	int a[size] = { 0 };
	int b[size / 2] = { 1,-2,0,-4,5 }, c[size / 2] = { 6,7,8,0,10 };
	int p = 0, m = 0;

	for (int i = 0; i < size / 2; i++)
	{
		if (b[i] > 0)
		{
			a[p] = b[i];
			p++;
		}
		else if (b[i] < 0)
		{
			a[size - 1 - m] = b[i];
			m++;
		}
		
		if (c[i] > 0)
		{
			a[p] = c[i];
			p++;
		}
		else if (c[i] < 0)
		{
			a[size - 1 - m] = b[i];
			m++;
		}
	}

	//for (int i = 0; i < size; i++)
	//{
	//	cout << a[i] << " ";
	//}
	//cout << endl;
}
