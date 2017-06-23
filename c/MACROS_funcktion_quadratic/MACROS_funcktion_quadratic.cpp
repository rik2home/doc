#include <iostream>
#include <cmath>
using namespace std;

double enter_a()
{
	int value;
	cout << "Enter a: ";
	cin >> value;
	return value;
}

double enter_b()
{
	int value;
	cout << "Enter b: ";
	cin >> value;
	return value;
}

double enter_c()
{
	int value;
	cout << "Enter c: ";
	cin >> value;
	return value;
}

double discreminant(double a, double b, double c)
{
	return b * b - 4 * a * c;
}

double x1(double d, double b, double a)
{
	if (d < 0)
	{
		cout << "Discreminant menshe 0, net resheniya\n";
		return 0;
	}
	return (-b + sqrt(d)) / (2.0 * a);
}

double x2(double d, double b, double a)
{
	if (d < 0)
	{
		cout << "Discreminant menshe 0, net resheniya\n";
		return 0;
	}
	return (-b - sqrt(d)) / (2.0 * a);
}

void main()
{
	double a, b, c, d;
	a = enter_a();
	b = enter_b();
	c = enter_c();
	d = discreminant(a, b, c);

	if (x1 != 0 && x2 != 0)
		cout << "x1 = " << x1(d, b, a) << " x2 = " << x2(d, b, a) << endl;
}