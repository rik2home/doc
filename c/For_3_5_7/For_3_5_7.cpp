#include <iostream>
using namespace std;

void main()
{
	for (int i = 1; i <= 20; i++)
	{
		if (i % 3 && i % 5 && i % 7)
			cout << i << endl;
	}
}