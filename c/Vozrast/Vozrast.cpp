#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	short y1, y2;

	cout << "Введите пожалуйста год Вашего рождения: ";
	cin >> y1;
	cout << "Введите пожалуйста текущий год: ";
	cin >> y2;

	short age;
	
	age = y2 - y1;
	cout << "Ваш возраст: " << age << endl;
}