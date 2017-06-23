#include <iostream>
#include <conio.h>           // _getch
using namespace std;

// Выводит на экран меню и возвращает выбор пользователя
int Menu()
{
    // Код клавиши Esc
    const int Esc = 27;

    // Выводим меню.
    // Используем прием с печатью управляющего символа '\b'.
    // После вывода сбрасываем буфер потока cout.
    cout << "1. First item\n"
            "2. Second item\n"
            "3. Third item\n"
            "Your choice (or Esc to exit): [ ]\b\b" << flush;

    // Ожидаем нажатия допустимых клавиш
    char key;
    do
    {
        key = _getch();
        if (key == 0 || key == 0xE0)
        {
            // Если нажата расширенная клавиша,
            // то просто убираем из буфера ее код
            _getch();
            // Если среди допустимых клавиш есть код 0xE0,
            // то сбрасывеам key в 0. Если такого кода среди
            // допустимых клавиш там нет, эту строку можно убрать.
            key = 0;
        }
    }
    while ((key < '1' || key > '3') && key != Esc);

    // Печатаем нажатую клавишу
    if (key == Esc)
        cout << "Esc]\n";
    else
        cout << key << endl;

    // Возвращаем не символ, а выбранный номер меню.
    // Если была нажата клавиша Esc, то возвращаем 0.
    return (key == Esc) ? 0 : key - '0';
}

void main()
{
    int choice;
    do
    {
        // Печатаем меню и получаем выбор пользователя
        choice = Menu();
        cout << "\nYou choice is " << choice << ".\n\n";
    }
    while (choice != 0);
}
