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
		cout << "��� �� �� ������ ���������:\n"
			<< "1. ��������� �� ����\n"
			<< "2. ���� �� ����������\n"
			<< "��� �����: ";
		cin >> vibor;

		if (vibor == 1)
		{
			cout << "������� ���������� ����������� ����: ";
			cin >> mil;
			km = mil * miles;
			cout << "�� ����� - " << mil << " miles" << " = " << km << " km\n";
		}
		else if (vibor == 2)
		{
			cout << "������� ���������� ����������: ";
			cin >> km;
			mil = km / miles;
			cout << "�� ����� - " << km << " km" << " = " << mil << " miles\n";
		}
	} while (vibor == 1 || vibor == 2);
}