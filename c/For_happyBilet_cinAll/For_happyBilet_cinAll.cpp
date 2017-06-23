#include <iostream>
using namespace std;

void main()
{
	int a, a1, a2, a3, a4, a5, a6;
	int sum = 0, sum1, sum2;

	for (int a = 0; a <= 999999; a++)
	{
		a1 = a / 100000;
		a2 = (a % 100000) / 10000;
		a3 = (a % 10000) / 1000;
		a4 = (a % 1000) / 100;
		a5 = (a % 100) / 10;
		a6 = (a % 10);

		sum1 = a1 + a2 + a3;
		sum2 = a4 + a5 + a6;
		
		if (sum1 == sum2)
		{

			cout << a6 << a5 << a4 << a3 << a2 << a1 << endl;
			sum++;
		}

	}
	cout << sum << endl;
}