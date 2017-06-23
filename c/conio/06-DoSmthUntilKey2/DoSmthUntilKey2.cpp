#include <iostream>
#include <conio.h>           // _getch, _kbhit
#include <windows.h>         // Sleep
using namespace std;

void main()
{
    // ��� ������� Esc
    const int Esc = 27;

    // ���������� �������� �� ��� ���, ���� �� �����
    // ������ ������� Esc
    cout << "Press Esc to exit...\n";
    int counter = 0;
    int key = 0;
    while (counter < 80 && key != Esc)
    {
        // ����� � 1/10 �������
        Sleep(100);

        // ��������
        if (counter > 0) cout << "\b ";
        cout << "." << flush;
        counter++;

        // ��������� ���� �� ������ �����-������ �������
        while (_kbhit())
        {
            // �������� ��������� ��� �� ������ ����������.
            // ���� ��� ��� ������� Esc, �� ������� �� ���������.
            key = _getch();
            if (key == Esc) break;
        }
    }
    cout << endl;
}