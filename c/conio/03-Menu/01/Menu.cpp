#include <iostream>
#include <conio.h>           // _getch
using namespace std;

// ������� �� ����� ���� � ���������� ����� ������������
int Menu()
{
    // ��� ������� Esc
    const int Esc = 27;

    // ������� ����.
    // ���������� ����� � ������� ������������ ������� '\b'.
    // ����� ������ ���������� ����� ������ cout.
    cout << "1. First item\n"
            "2. Second item\n"
            "3. Third item\n"
            "Your choice (or Esc to exit): [ ]\b\b" << flush;

    // ������� ������� ���������� ������
    char key;
    do
    {
        key = _getch();
        if (key == 0 || key == 0xE0)
        {
            // ���� ������ ����������� �������,
            // �� ������ ������� �� ������ �� ���
            _getch();
            // ���� ����� ���������� ������ ���� ��� 0xE0,
            // �� ���������� key � 0. ���� ������ ���� �����
            // ���������� ������ ��� ���, ��� ������ ����� ������.
            key = 0;
        }
    }
    while ((key < '1' || key > '3') && key != Esc);

    // �������� ������� �������
    if (key == Esc)
        cout << "Esc]\n";
    else
        cout << key << endl;

    // ���������� �� ������, � ��������� ����� ����.
    // ���� ���� ������ ������� Esc, �� ���������� 0.
    return (key == Esc) ? 0 : key - '0';
}

void main()
{
    int choice;
    do
    {
        // �������� ���� � �������� ����� ������������
        choice = Menu();
        cout << "\nYou choice is " << choice << ".\n\n";
    }
    while (choice != 0);
}
