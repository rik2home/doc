#include <iostream>
using namespace std;

void main()
{
	const int w = 7, h = 5;
	for (int x = 1; x <= 7; x++)
		cout << "*";
	cout << endl;
	for (int y = 1; y <= h - 2; y++)
	{
			cout << "*";
			for (int x = 1; x <= w - 2; x++)
				cout << " ";
			cout << "*";
			cout << endl;
	}
	for (int x = 1; x <= 7; x++)
		cout << "*";
	cout << endl;

}