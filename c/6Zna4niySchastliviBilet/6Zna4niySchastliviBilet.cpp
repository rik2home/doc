#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	int a, a1, a2, a3, a4, a5, a6;
	cout << "Введите пожалуйста шестизначный номер троллейбусного билета: ";
	cin >> a;
	a1 = a / 100000;
	a2 = (a % 100000) / 10000;
	a3 = (a % 10000) / 1000;
	a4 = (a % 1000) / 100;
	a5 = (a % 100) / 10;
	a6 = (a % 10);

	int sum1, sum2, chastn;
	sum1 = a1 + a2 + a3;
	sum2 = a4 + a5 + a6;
	chastn = sum1 / sum2;
	cout << "Если вы увидите \"1\", то ваш билет счастливый\n"
		 << "Результат: " << chastn << endl;
}