#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	double costm, sum, min;

	cout << "������� ���������� ��������� 1 ������ ���������: ";
	cin >> costm;
	cout << "������� ���������� ������������ ��������� � �������: ";
	cin >> min;

	sum = costm * min;
	cout << "��������� ������ ��������� ����������: " << sum << endl;
}