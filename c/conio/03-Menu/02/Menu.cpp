#include <iostream>
#include <conio.h>           // _getch
using namespace std;

// ������� �� ����� ���� � ���������� ����� ������������
int Menu(const char *menuItems, int countItems)
{
    // ��� ������� Esc
    const int Esc = 27;

    // ������� ����.
    // ����� ������ ���������� ����� ������ cout.
    cout << menuItems << "Your choice (or Esc to exit): [ ]\b\b" << flush;

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
    while ((key < '1' || key > '0' + countItems) && key != Esc);

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
    // ����� ����.
    // ���������� ����� � ������� ������������ ������� '\b'.
    char menuItems[] =
        "1. First item\n"
        "2. Second item\n"
        "3. Third item\n";

    int choice;

    do
    {
        // �������� ���� � �������� ����� ������������
        choice = Menu(menuItems, 3);
        cout << "\nYou choice is " << choice << ".\n\n";
    }
    while (choice != 0);
}
