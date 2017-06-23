#include <iostream>
using namespace std;

void PrintTitle()
{
	cout << "Sum at A to B!\n\n";
}

int EnterA()
{
	int value;
	cout << "Enter first integer: ";
	cin >> value;
	return value;
}

int EnterB()
{
	int value;
	cout << "Enter second integer: ";
	cin >> value;
	return value;
}

int SumAtoB(int a, int b)
{
	int sum = 0;
	for (int i = a + 1; i < b; i++)
	{
		sum += i;
	}
	return sum;
}

void main()
{
	int a, b;

	PrintTitle();
	a = EnterA();
	b = EnterB();
	cout << SumAtoB(a, b) << endl;
}