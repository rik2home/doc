#include <iostream>
using namespace std;

void print_rectangle(int a = 10, int b = 10)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (j >= i || j <= i)
				cout << "*";
		}
		cout << endl;
	}
	cout << endl;
}

void main()
{
	print_rectangle();
}