#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	cout << "�������� ������� �������������� �����\n";

	double a1 = 5, a2 = 7, a3 = 10;
	double sred2, sred3;

	cout << "���� �����: " << a1 << ", " << a2 << ", " << a3 << endl;

	sred2 = (a1 + a2) / 2;
	cout << "������� ��������������� ������ ���� �����: " << sred2 << endl;

	sred3 = (a1 + a2 + a3) / 3;
	cout << "������� ��������������� ���� �����: " << sred3 << endl;
}