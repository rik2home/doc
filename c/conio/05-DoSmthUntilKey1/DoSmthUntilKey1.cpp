#include <iostream>
#include <conio.h>           // _getch, _kbhit
using namespace std;

void main()
{
    // Печатаем текст до тех пор, пока не
    // будет нажата какая-нибудь клавиша
    while (!_kbhit())
        cout << "Hit Me!\n";

    // Убираем из буфера эту клавишу,
    // т.е. 1 код, если это обычная клавиша,
    // и 2 кода, если это расширенная клавиша
#ifdef __BORLANDC__
    while (!_getch());
#else
    int key = _getch();
    if (key == 0 || key == 0xE0)
        _getch();
#endif
}
