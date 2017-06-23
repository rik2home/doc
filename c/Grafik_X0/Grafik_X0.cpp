#include <iostream>
using namespace std;

void main()
{
	const char Horizontal = 196;
	const char Hrest = 197;
	int h, v;

	for (h = 0; h < 2; h++)
	{
		for (v = 1; v <= 5; v++)
		{
			if (v % 2)
			{
				cout << Horizontal;
			}
			else cout << Hrest;
		}
		cout << endl;
	}
	cout << endl;
}