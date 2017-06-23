#include <iostream>
using namespace std;

void PrintTitle()
{
	cout << "Is number prostoe?\n\n";
}

int EnterNumber()
{
	int value;
	cout << "Enter number: ";
	cin >> value;
	return value;
}

bool is_NumberProstoe(int a)
{
	bool b;
	for (int i = 1; i <= a; i++)
	{
		int sum = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				sum++;
		}
		return sum == 2;
	}
	return b;
}

void main()
{
	int a;

	PrintTitle();
	a = EnterNumber();
	cout << is_NumberProstoe(a) << endl;
}