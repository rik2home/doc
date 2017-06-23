#include <iostream>
using namespace std;

void main()
{
	double temp;

	cout << "Enter your temp:";
	cin >> temp;

	if (temp >= 36.4 && temp <= 36.9)
	{
		cout << "You are healthy!!!\n";
	}
	else if (temp >= 37 && temp <= 42)
	{
		cout << "You are sick\n";
	}
	else cout << "This temperature is not suitable for the living human body\n";
}