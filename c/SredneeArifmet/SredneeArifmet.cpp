#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Вычислим среднее арифметическое чисел\n";

	double a1 = 5, a2 = 7, a3 = 10;
	double sred2, sred3;

	cout << "Наши числа: " << a1 << ", " << a2 << ", " << a3 << endl;

	sred2 = (a1 + a2) / 2;
	cout << "Среднее арифметичесское первых двух чисел: " << sred2 << endl;

	sred3 = (a1 + a2 + a3) / 3;
	cout << "Среднее арифметичесское всех чисел: " << sred3 << endl;
}