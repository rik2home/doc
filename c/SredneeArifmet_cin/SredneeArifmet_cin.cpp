#include <iostream>
using namespace std;

void main()
{
	setlocale (LC_ALL, "Russian");

	double a1, a2, a3;
	double sred2, sred3;

	cout << "������� ���������� ������ �����: ";
	cin >> a1;

	cout << "������� ���������� ������ �����: ";
	cin >> a2;

	sred2 = (a1 + a2) / 2;
	cout << "������� �������������� �����: " << a1 << " � " << a2 << " = " << sred2 << endl;

	cout << "������� ���������� ������ �����: ";
	cin >> a3;

	sred3 = (a1 + a2 + a3) / 3;
	cout << "������� �������������� �����: " << a1 << ", " << a2 << ", " << a3 << " = " << sred3 << endl;
}