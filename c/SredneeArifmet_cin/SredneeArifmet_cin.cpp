#include <iostream>
using namespace std;

void main()
{
	setlocale (LC_ALL, "Russian");

	double a1, a2, a3;
	double sred2, sred3;

	cout << "‚ведите пожалуйста первое число: ";
	cin >> a1;

	cout << "‚ведите пожалуйста второе число: ";
	cin >> a2;

	sred2 = (a1 + a2) / 2;
	cout << "‘реднее арифметическое чисел: " << a1 << " и " << a2 << " = " << sred2 << endl;

	cout << "‚ведите пожалуйста третье число: ";
	cin >> a3;

	sred3 = (a1 + a2 + a3) / 3;
	cout << "‘реднее арифметическое чисел: " << a1 << ", " << a2 << ", " << a3 << " = " << sred3 << endl;
}