#include <iostream>
using namespace std;

void PrintTitle()
{
	cout << "Sum at 1 to n!\n\n";
}

int EnterN()
{
	int n;
	cout << "Enter integer N: ";
	cin >> n;
	return n;
}

int SumToN(int n)
{
	int sum = 0;
	for (int i = 2; i < n; i++)
	{
		sum += i;
	}
	return sum;
}

void main()
{
	int n;
	
	PrintTitle();
	n = EnterN();
	cout << SumToN(n) << endl;
}