#include <iostream>
using namespace std;

void main()
{
	int a = 1, b = 2, c = 3;
	double sum, razn, proizv, chastn;

	sum = a + b;
	cout << "a=" << a << " b=" << b << " c=" << c << endl;
	cout << "a+b=" << sum << endl;

	razn = a - b;
	cout << "a-b=" << razn << endl;

	proizv = a * b;
	cout << "a*b=" << proizv << endl;

	chastn = a / b;
	cout << "a/b=" << chastn << endl;
	
	sum = a + b + c;
	cout << "a+b+c=" << sum << endl;

	razn = a - b - c;
	cout << "a-b-c=" << razn << endl;

	proizv = a * b * c;
	cout << "a*b*c=" << proizv << endl;

	chastn = a / b / c;
	cout << "a/b/c=" << chastn << endl;
}