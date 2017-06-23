#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	short a, a1, a2, a3;

	cout << "Введите пожалуйста трехзначное число: ";
	cin >> a;

	a1 = a / 100;
	a2 = (a % 100) / 10;
	a3 = a % 10;
	cout << "Ваше число наоборот - " << a3 << a2 << a1 << endl;
}