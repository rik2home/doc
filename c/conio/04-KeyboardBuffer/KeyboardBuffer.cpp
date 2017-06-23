#include <iostream>
#include <conio.h>           // _getch, _kbhit
#include <windows.h>         // Sleep
using namespace std;

void main()
{
    // Пауза 5 секунд
    cout << "Press any keys you want while pause...\n\n"
            "Pause: 5" << flush;
    Sleep(1000);
    cout << "\b4" << flush;
    Sleep(1000);
    cout << "\b3" << flush;
    Sleep(1000);
    cout << "\b2" << flush;
    Sleep(1000);
    cout << "\b1" << flush;
    Sleep(1000);
    cout << "\bBoom!\a\n\n" << flush;

    // Проверяем пустой ли буфер клавиатуры?
    if (_kbhit())
        cout << "Buffer is not empty!\n";
    else
        cout << "Buffer is empty!\n";

    // Очистка буфера клавиатуры
    cout << "\nCleaning the buffer...\n\n" << flush;
    while (_kbhit())
        _getch();

    // Снова проверяем пустой ли буфер клавиатуры?
    if (_kbhit())
        cout << "Buffer is not empty!\n";
    else
        cout << "Buffer is empty!\n";
}
