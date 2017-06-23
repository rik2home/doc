#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	double usa = 25.5, sum, usd, uah;
	int vibor;
	cout << "Что бы узнать кроскурс валютной пары USD/UAH выберите интересующую валюту:\n"
		 << "1. USD\n"
		 << "2. UAH\n"
		 << "Ваш выбор: ";
	cin >> vibor;
	
	if (vibor == 1)
	{
		cout << "Введите пожалуйста сумму в гривнах: ";
		cin >> uah;
		sum = uah / usa;
		cout << "Введенная сумма: " << uah << "грн. по курсу " << usa << " = " << sum << "$\n";
	}
	else if (vibor == 2)
	{
		cout << "Введите пожалуйста сумму в долларах: ";
		cin >> usd;
		sum = usa * usd;
		cout << "Введенная сумма: " << usd << "$ по курсу " << usa << " = " << sum << "грн.\n";
	}
	else cout << "Вы ввели неправельный вариант, попробуйте в следующий раз выбрать из предложенных\n";
}