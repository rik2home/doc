#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	short sum, a, a1, a2, a3;

	cout << "������� ���������� ����������� �����: ";
	cin >> a;

	a1 = a / 100;
	a2 = (a % 100) / 10;
	a3 = a % 10;
	sum = a1 + a2 + a3;
	cout << "��������� ����� - " << a << " ������� �� �����: " << a1 << ", " << a2 << ", " << a3 << endl
		 << "����� ������� = " << sum << endl;
}