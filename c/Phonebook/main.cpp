/* Второе 
2. Телефонная книга. Изначально количество записей в ней равно нулю. Каждая запись должна содержать поля:
    1. Имя.
    2. Фамилия.
    3. Год рождения.
    4. Пол.
    5. Телефон.
    6. Адрес.
    7. Можете реализовать и другие поля по своему усмотрению.
Реализовать функции для:
    1. Добавления новой записи.
    2. Удаления записи с указанным индексом.
    3. Удаления всех записей.
    4. Изменения записи с указанным индексом. Например, необходимо изменить имя или телефон.
    5. Вывода на экран полей записи с указанным индексом.
    6. Вывода на экран всех записей.
    7. Сохранения текущих записей в файл.
    8. Загрузки записей из файла.
    9. Поиска информации в записях.
	10. Выхода из телефонной книги.
Управление программой осуществляется с помощью меню.*/
#include <iostream>
#include <conio.h>
#include "Menu.h"
#include "List.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	
	const int Esc = 27;
	const int Enter = 13;

	List *list = nullptr;
	int size = 0;
	int key = 0;

	do
	{
		key = Menu();

		switch (key)
		{
		case 1:
			AddSubsc(list, size);
			break;
		case 2:
			DeleteCertainSubsc(list, size);
			break;
		case 3:
			DeleteAllSubsc(list, size);
			break;
		case 4:
			ChangeCertainSubsc(list, size);
			break;
		case 5:
			ShowCertainSubsc(list, size);
			break;
		case 6:
			ShowAllSubsc(list, size);
			break;
		case 7:
			SaveToFile(list, size);
			break;
		case 8:
			LoadFromFile(list, size);
			break;
		case 9:
			SearchSubsc(list, size);
			break;
		}
		
		cout << "Press Enter to continue";
		while (_getch() != Enter);

		system("cls");
	} while (key != Esc);

	Exit(list);
}