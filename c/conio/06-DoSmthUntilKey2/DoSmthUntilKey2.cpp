#include <iostream>
#include <conio.h>           // _getch, _kbhit
#include <windows.h>         // Sleep
using namespace std;

void main()
{
    // Код клавиши Esc
    const int Esc = 27;

    // Выполнение действия до тех пор, пока не будет
    // нажата клавиша Esc
    cout << "Press Esc to exit...\n";
    int counter = 0;
    int key = 0;
    while (counter < 80 && key != Esc)
    {
        // Пауза в 1/10 секунды
        Sleep(100);

        // Действие
        if (counter > 0) cout << "\b ";
        cout << "." << flush;
        counter++;

        // Проверяем были ли нажаты какие-нибудь клавиши
        while (_kbhit())
        {
            // Получаем очередной код из буфера клавиатуры.
            // Если это код клавиши Esc, то выходим из программы.
            key = _getch();
            if (key == Esc) break;
        }
    }
    cout << endl;
}