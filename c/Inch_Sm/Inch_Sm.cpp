#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	const double oneInch = 2.54;
	double inch, s;

	cout << "������� ���������� ������ � �����������: ";
	cin >> s;
	inch = s / oneInch;
	cout << s << " �� = " << inch << " ����(��)\n";

	cout << "������� ���������� ������ � ������: ";
	cin >> inch;
	s = oneInch * inch;
	cout << inch << " ����(��) = " << s << " ��\n";
}