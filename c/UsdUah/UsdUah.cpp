#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	double usa = 25.5, sum, usd, uah;
	int vibor;
	cout << "��� �� ������ �������� �������� ���� USD/UAH �������� ������������ ������:\n"
		 << "1. USD\n"
		 << "2. UAH\n"
		 << "��� �����: ";
	cin >> vibor;
	
	if (vibor == 1)
	{
		cout << "������� ���������� ����� � �������: ";
		cin >> uah;
		sum = uah / usa;
		cout << "��������� �����: " << uah << "���. �� ����� " << usa << " = " << sum << "$\n";
	}
	else if (vibor == 2)
	{
		cout << "������� ���������� ����� � ��������: ";
		cin >> usd;
		sum = usa * usd;
		cout << "��������� �����: " << usd << "$ �� ����� " << usa << " = " << sum << "���.\n";
	}
	else cout << "�� ����� ������������ �������, ���������� � ��������� ��� ������� �� ������������\n";
}