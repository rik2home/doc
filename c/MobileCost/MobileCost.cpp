#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	double costm, sum, min;

	cout << "Введите пожалуйста стоимость 1 минуты разговора: ";
	cin >> costm;
	cout << "Введите пожалуйста длительность разговора в минутах: ";
	cin >> min;

	sum = costm * min;
	cout << "Стоимость Вашего разговора составляет: " << sum << endl;
}