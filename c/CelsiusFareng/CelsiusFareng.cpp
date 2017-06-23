#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	const double zero_C = 32, one_F = 1.8;
	double c, f;
	int vibor;

	do
	{
		cout << "�������� ������� ��������� ����������:\n"
			<< "1. ���������\n"
			<< "2. �������\n"
			<< "��� �����: ";
		cin >> vibor;

		if (vibor == 1)
		{
			cout << "������� ���������� ����������� � �������� ����������: ";
			cin >> f;
			c = (f - zero_C) / one_F;
			cout << f << " F =" << c << " C\n";
		}
		else if (vibor == 2)
		{
			cout << "������� ���������� ����������� � �������� �������: ";
			cin >> c;
			f = (one_F * c) + zero_C;
			cout << c << " � = " << f << " F\n";
		}
	} while (vibor == 1 || vibor == 2);
}