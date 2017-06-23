#include <iostream>
using namespace std;

void main()
{
	int a, b, sum = 0;

	cout << "Hello! Please enter the two integers\n"
		 << "Enter first: ";
	cin >> a;
	cout << "Enter second: ";
	cin >> b;
	cout << "Sum " << a << " : " << b << " = ";

	do 
	{
		if (a > b)
		{
			int tmp = a;
			a = b;
			b = tmp;
		}
		else if ( <= a)
		{
			sum += b;
			b++;
		}
	} while (i < b);
	cout << sum + a << endl;
}