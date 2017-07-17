#include <iostream>
#include <Windows.h>
#include <conio.h>//эта библиотека помимо _getch() подтягивает функцию _kbhit()
using namespace std;

void main()
{
	int width = 50, height = 24;//параметры, отвечающие за ширину и высоту поля
	int xPos = width / 2, yPos = height / 2;//координаты движимого объекта
	int dx = 1, dy = 1;//параметры вектора - приращения по осям координат (по умолчанию вправо вниз)
	int sleep_time = 100;//время в миллисекундах, отвечающее за частоту движения объекта
	char symbol = 1;//символ объекта
	COORD start = { 0, 0 };//создание объекта координат для хранения позиции старта
	COORD Health = { 57,1 };
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);//создание "хендла" консоли
	CONSOLE_CURSOR_INFO cci = { sizeof(cci), false };//создаем объект, содержащий настройки для хендла с указанием 	nе отображать курсор
	SetConsoleCursorInfo(h, &cci);//связываем хендл с объектом настройки
	bool flag = true;//переменная, управляющая ходом главного цикла
	do//начало главного цикла
	{
		SetConsoleCursorPosition(h, Health);//отправляем курсор в начало координат консоли
		cout << "Health:";
		SetConsoleCursorPosition(h, start);//отправляем курсор в начало координат консоли

		for (int y = 0; y < height; y++)//начинаем цикл, который будет отвечать за отображение строк
		{
			for (int x = 0; x < width; x++)//вкладываем в цикл выше цикл, отвечающий за печать символов в 				пределах строки
			{
				char s;//объявляем символ, который будем выводить - осталось выяснить, что это будет за 			символ
				if (x == 0 && y == 0)//в верхнем левом углу поля - символ соответствующего угла
					s = 218;
				else if (x == 0 && y == height - 1)//нижний левый угол
					s = 192;
				else if (y == 0 && x == width - 1)//верхний правый угол
					s = 191;
				else if (y == height - 1 && x == width - 1)//нижний правый угол
					s = 217;
				else if (y == 0 || y == height - 1)//верхняя и нижняя граница поля
					s = 196;
				else if (x == 0 || x == width - 1)//левая и правая граница поля
					s = 179;
				else if (x == xPos&&y == yPos)//позиция, в которой должен находиться объект
					s = symbol;
				else s = ' ';//во всех остальных случаях должен быть просто пробел (означает пустую 	область поля)
				putchar(s);//выводим символ


			}
			cout << endl;//после пропечатывания всех символов строки - переходим на следующую строку
		}
		Sleep(sleep_time);//выдерживаем паузу
		xPos += dx;//приращаем горизонтальную позицию объекта
		yPos += dy;//приращаем вертикальную



		if (yPos == 0 || yPos == height - 1) dy = -dy, yPos += dy;
		else if (xPos == 0 || xPos == width - 1)//если была достигнута рамка поля
		{
			dx = -dx;//меняем вектор движения на противоположный
			xPos += dx;
		}
		SetConsoleCursorPosition(h, start);//отправляем курсор в начало координат консоли

		if (_kbhit())
		{
			{char pl = 219;
			//int xPozPl, yPozPl = 18;
			COORD pl_1 = { 18, 18 };
			COORD pl_2 = { 19, 18 };
			COORD pl_3 = { 20, 18 };
			COORD pl_4 = { 21, 18 };
			SetConsoleCursorPosition(h, pl_1);//устанавливаем позицию курсора по заданным координатам
			putchar(pl);
			SetConsoleCursorPosition(h, pl_2);
			putchar(pl);
			SetConsoleCursorPosition(h, pl_3);
			putchar(pl);
			SetConsoleCursorPosition(h, pl_4);
			putchar(pl);
			int pl_dx, pl_dy = 0;//создаем переменные для хранения приращения по осям координат

			int k = _getch();//считываем код нажатой клавиши
			if (k == 0 || k == 224)//если была нажата управляющая клавиша
				k = _getch();//то считываем второй код из буфера
			switch (k)//отправляем результат для управления оператором выбора
			{
			case 75://если влево
				pl_dy = 0;
				pl_dx = -1;
				break;
			case 77://если вправо
				pl_dy = 0;
				pl_dx = 1;
				break;
			default:
				pl_dx = pl_dy = 0;//если была нажата любая иная клавиша, то приращения равны нулю
			}
			SetConsoleCursorPosition(h, pl_1);//устанавливаем позицию курсор по старым координатам
			putchar(' ');//выводим пробел, чтоб "затереть" наш символ в предыдущей позиции
			SetConsoleCursorPosition(h, pl_4);
			putchar(' ');
			SetConsoleCursorPosition(h, pl_2);//устанавливаем позицию курсор по старым координатам
			putchar(' ');//выводим пробел, чтоб "затереть" наш символ в предыдущей позиции
			SetConsoleCursorPosition(h, pl_3);
			putchar(' ');
			if (pl_1.X < 2)//проверяем на выход за левую границу консоли
			{
				pl_1.X = 2;
				pl_2.X = 3;
				pl_3.X = 4;
				pl_4.X = 5;
			}
			if (pl_4.X > 47)
			{
				pl_1.X = 44;
				pl_2.X = 45;
				pl_3.X = 46;
				pl_4.X = 47;
			}
			else {
				pl_1.X += pl_dx;//приращаем абсциссу
				pl_2.X += pl_dx;
				pl_3.X += pl_dx;
				pl_4.X += pl_dx;
				pl_1.Y += 0;//приращаем ординату
				pl_2.Y += 0;
				pl_3.Y += 0;
				pl_4.Y += 0;
			}
			SetConsoleCursorPosition(h, pl_1);//устанавливаем курсор по новым координатам
			putchar(pl);
			SetConsoleCursorPosition(h, pl_4);
			putchar(pl);
			SetConsoleCursorPosition(h, pl_3);
			putchar(pl);
			SetConsoleCursorPosition(h, pl_2);
			putchar(pl);
			}
		}


	} while (flag);//выходим из цикла, если была нажата клавиша ESC
	system("cls");//очищаем экран
	cout << "Program is ended\n";//выводим сообщение о конце игры
}

