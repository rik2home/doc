#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	short y1, y2;

	cout << "������� ���������� ��� ������ ��������: ";
	cin >> y1;
	cout << "������� ���������� ������� ���: ";
	cin >> y2;

	short age;
	
	age = y2 - y1;
	cout << "��� �������: " << age << endl;
}