/* ������ 
2. ���������� �����. ���������� ���������� ������� � ��� ����� ����. ������ ������ ������ ��������� ����:
    1. ���.
    2. �������.
    3. ��� ��������.
    4. ���.
    5. �������.
    6. �����.
    7. ������ ����������� � ������ ���� �� ������ ����������.
����������� ������� ���:
    1. ���������� ����� ������.
    2. �������� ������ � ��������� ��������.
    3. �������� ���� �������.
    4. ��������� ������ � ��������� ��������. ��������, ���������� �������� ��� ��� �������.
    5. ������ �� ����� ����� ������ � ��������� ��������.
    6. ������ �� ����� ���� �������.
    7. ���������� ������� ������� � ����.
    8. �������� ������� �� �����.
    9. ������ ���������� � �������.
	10. ������ �� ���������� �����.
���������� ���������� �������������� � ������� ����.*/
#include <iostream>
#include <conio.h>
#include "Menu.h"
#include "List.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	
	const int Esc = 27;
	const int Enter = 13;

	List *list = nullptr;
	int size = 0;
	int key = 0;

	do
	{
		key = Menu();

		switch (key)
		{
		case 1:
			AddSubsc(list, size);
			break;
		case 2:
			DeleteCertainSubsc(list, size);
			break;
		case 3:
			DeleteAllSubsc(list, size);
			break;
		case 4:
			ChangeCertainSubsc(list, size);
			break;
		case 5:
			ShowCertainSubsc(list, size);
			break;
		case 6:
			ShowAllSubsc(list, size);
			break;
		case 7:
			SaveToFile(list, size);
			break;
		case 8:
			LoadFromFile(list, size);
			break;
		case 9:
			SearchSubsc(list, size);
			break;
		}
		
		cout << "Press Enter to continue";
		while (_getch() != Enter);

		system("cls");
	} while (key != Esc);

	Exit(list);
}