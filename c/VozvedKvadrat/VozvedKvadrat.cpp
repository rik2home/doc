#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	int kvadrat;
	cout << "������� ��������� ����� ����� ����� ��� ���������� ��� � �������: ";
	cin >> kvadrat;

	kvadrat *= kvadrat;
	cout << "������� ���������� ����� = " << kvadrat << endl;
}