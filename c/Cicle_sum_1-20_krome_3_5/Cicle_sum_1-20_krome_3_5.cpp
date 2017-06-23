#include <iostream>
using namespace std;

void main()
{
	int a = 1;
	int sum = 0;
	while (a <= 20)
	{
		if (a % 3 || a % 5 == 0)
		{
			sum += a;
		}
		a++;
	}
	cout << "Summa 1-20, krome kratnih 3, no ne kratnih 5 = " << sum << endl;
}