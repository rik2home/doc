#include <iostream>
#include <conio.h>           // _getch
using namespace std;

// Выводит на экран меню и возвращает выбор пользователя
int Menu(const char *menuItems, int countItems)
{
    // Код клавиши Esc
    const int Esc = 27;

    // Выводим меню.
    // После вывода сбрасываем буфер потока cout.
    cout << menuItems << "Your choice (or Esc to exit): [ ]\b\b" << flush;

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
    while ((key < '1' || key > '0' + countItems) && key != Esc);

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
    // Текст меню.
    // Используем прием с печатью управляющего символа '\b'.
    char menuItems[] =
        "1. First item\n"
        "2. Second item\n"
        "3. Third item\n";

    int choice;

    do
    {
        // Печатаем меню и получаем выбор пользователя
        choice = Menu(menuItems, 3);
        cout << "\nYou choice is " << choice << ".\n\n";
    }
    while (choice != 0);
}
