#include <iostream>
using namespace std;

void main()
{
	int f = 1;

	for (int i = 1; i <= 5; i++)
	{
		f *= i;
	}
	cout << f << endl;
}