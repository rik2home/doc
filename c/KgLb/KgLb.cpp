#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	const double gram_in_onelb = 405.9;
	double kg, lb;
	int vibor;

	do
	{
		cout << "�� ������� ������������ �����, ���������� ��� ���!\n"
			<< "�������� ����������� �������� �������� ����:\n"
			<< "1. ����� � ����������\n"
			<< "2. ���������� � �����\n"
			<< "��� �����: ";
		cin >> vibor;

		if (vibor == 1)
		{
			cout << "������� ���������� ��� � ������: ";
			cin >> lb;
			kg = lb * (gram_in_onelb / 1000);
			cout << lb << " Lb = " << kg << " Kg\n";
		}
		else if (vibor == 2)
		{
			cout << "������� ���������� ��� � �����������: ";
			cin >> kg;
			lb = kg / (gram_in_onelb / 1000);
			cout << kg << " Kg= " << lb << " Lb\n";
		}
	} while (vibor == 1 || vibor == 2);
}