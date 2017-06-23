#include <iostream>
#include <conio.h>           // _getch
using namespace std;

void main()
{
    // Код клавиши Esc
    const int Esc = 27;

    cout << "An example of waiting for specified key.\n\n";

    // Выводим приглашение и сбрасываем буфер
    cout << "Press Esc to exit..." << flush;
    // Повторяем пока не будет нажата клавиша Esc
    while (_getch() != Esc);
}
