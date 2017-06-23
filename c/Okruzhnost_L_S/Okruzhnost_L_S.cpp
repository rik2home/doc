#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	const double pi = 3.14;
	double l, s, r;

	cout << "Введите пожалуйста радиус окружности: ";
	cin >> r;

	l = (2 * pi) * r;
	s = pi * (r * r);
	cout << "Длинна окружности: " << l << endl
		 << "Площадь окружности: " << s << endl;
}