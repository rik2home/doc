#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	const double gram_in_onelb = 405.9;
	double kg, lb;
	int vibor;

	do
	{
		cout << "Вы сделали неправельный выбор, попробуйте еще раз!\n"
			<< "Выберите направление перевода величены веса:\n"
			<< "1. Фунты в киллограмы\n"
			<< "2. Киллограмы в фунты\n"
			<< "Ваш выбор: ";
		cin >> vibor;

		if (vibor == 1)
		{
			cout << "Введите пожалуйста вес в фунтах: ";
			cin >> lb;
			kg = lb * (gram_in_onelb / 1000);
			cout << lb << " Lb = " << kg << " Kg\n";
		}
		else if (vibor == 2)
		{
			cout << "Введите пожалуйста вес в килограммах: ";
			cin >> kg;
			lb = kg / (gram_in_onelb / 1000);
			cout << kg << " Kg= " << lb << " Lb\n";
		}
	} while (vibor == 1 || vibor == 2);
}