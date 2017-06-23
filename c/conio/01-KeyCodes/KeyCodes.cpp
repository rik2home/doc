#include <iostream>
#include <conio.h>           // _getch
using namespace std;

void main()
{
    // Код клавиши Esc
    const int Esc = 27;

    // Выводим код любой нажатой клавиши
    int code;
    do
    {
        cout << "Press any key or Esc to stop..." << flush;
        code = _getch();
        cout << "\nCode of pressed key: " << code << endl;
    }
    while (code != Esc);
}
