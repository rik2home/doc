#include <iostream>
#include <conio.h>           // _getch
using namespace std;

void main()
{
    // ��� ������� Esc
    const int Esc = 27;

    cout << "An example of waiting for specified key.\n\n";

    // ������� ����������� � ���������� �����
    cout << "Press Esc to exit..." << flush;
    // ��������� ���� �� ����� ������ ������� Esc
    while (_getch() != Esc);
}
