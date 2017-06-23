#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	const double miles = 1.609;
	double km, mil;
	int vibor;

	do
	{
		cout << "Что бы Вы хотели вычеслить:\n"
			<< "1. Километры из миль\n"
			<< "2. Мили из километров\n"
			<< "Ваш выбор: ";
		cin >> vibor;

		if (vibor == 1)
		{
			cout << "Введите пожалуйста колличество миль: ";
			cin >> mil;
			km = mil * miles;
			cout << "Вы ввели - " << mil << " miles" << " = " << km << " km\n";
		}
		else if (vibor == 2)
		{
			cout << "Введите пожалуйста киллометры: ";
			cin >> km;
			mil = km / miles;
			cout << "Вы ввели - " << km << " km" << " = " << mil << " miles\n";
		}
	} while (vibor == 1 || vibor == 2);
}