#include <iostream>
using namespace std;

void main()
{
	int a = 1;

	while (a <= 20)
	{
		if (a % 3 || a % 5 == 0)
		{
			cout << a << endl;
		}
		a++;
	}
}