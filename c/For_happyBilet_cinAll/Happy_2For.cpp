#include <iostream>
using namespace std;

void main()
{
	int a, i, sum = 0, sumL = 0, sumR = 0;

	for (a = 1; a <= 999999; a++)
	{
		for (i = 1; i <= 6; i++)
		{
			if (i <= 3)
			{
				sumR += i % 10;
				a /= 10;
			}
			else 
				sumL += i % 10;
				a /= 10;
		}
		if (sumL == sumR)
			sum++;
	}
	cout << sum << endl;
}