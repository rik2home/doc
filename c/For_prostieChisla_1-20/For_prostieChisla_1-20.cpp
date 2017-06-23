#include <iostream>
using namespace std;

void main()
{
	int a, i;
	for (a = 1; a <= 20; a++)
	{
		int sum = 0;
		for (i = 1; i <= a; i++)
		{
			if (a % i == 0)
				sum++;
		}
		if (sum == 2)
			cout << a << endl;
	}

}