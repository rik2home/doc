#include <iostream>
#include <conio.h>           // _getch
using namespace std;

void main()
{
    // ��� ������� Esc
    const int Esc = 27;

    // ������� ��� ����� ������� �������
    int code;
    do
    {
        cout << "Press any key or Esc to stop..." << flush;
        code = _getch();
        cout << "\nCode of pressed key: " << code << endl;
    }
    while (code != Esc);
}
