#include <iostream>
#include <conio.h>           // _getch, _kbhit
using namespace std;

void main()
{
    // �������� ����� �� ��� ���, ���� ��
    // ����� ������ �����-������ �������
    while (!_kbhit())
        cout << "Hit Me!\n";

    // ������� �� ������ ��� �������,
    // �.�. 1 ���, ���� ��� ������� �������,
    // � 2 ����, ���� ��� ����������� �������
#ifdef __BORLANDC__
    while (!_getch());
#else
    int key = _getch();
    if (key == 0 || key == 0xE0)
        _getch();
#endif
}
