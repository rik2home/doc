#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	const double zero_C = 32, one_F = 1.8;
	double c, f;
	int vibor;

	do
	{
		cout << "Выберите систему измерения температур:\n"
			<< "1. Фаренгейт\n"
			<< "2. Цельсий\n"
			<< "Ваш выбор: ";
		cin >> vibor;

		if (vibor == 1)
		{
			cout << "Введите пожалуйста температуру в градусах Фаренгейта: ";
			cin >> f;
			c = (f - zero_C) / one_F;
			cout << f << " F =" << c << " C\n";
		}
		else if (vibor == 2)
		{
			cout << "Введите пожалуйста температура в градусах Цельсия: ";
			cin >> c;
			f = (one_F * c) + zero_C;
			cout << c << " С = " << f << " F\n";
		}
	} while (vibor == 1 || vibor == 2);
}