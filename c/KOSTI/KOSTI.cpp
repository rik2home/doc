#include <iostream>
#include "ConsoleLib.h"
#include <time.h>
#include <conio.h>

using namespace std;

void print_kv(int x, int y, int size)
{
	const unsigned char DoubleTopLeft = 201;
	const unsigned char DoubleTopRight = 187;
	const unsigned char DoubleBottomLeft = 200;
	const unsigned char DoubleBottomRight = 188;
	const unsigned char DoubleHorz = 205;
	const unsigned char DoubleVert = 186;

	GotoXY(x, y);
	cout << DoubleTopLeft;
	for (int i = 0; i < size - 1; i++)
		cout << DoubleHorz;
	cout << DoubleTopRight << endl;
	for (int i = 0; i < size / 2; i++)
	{
		GotoXY(x, y + 1);
		cout << DoubleVert;
		GotoXY(x + size, y + 1);
		cout << DoubleVert;
		y++;
	}
	GotoXY(x, y);
	cout << DoubleBottomLeft;
	for (int i = 0; i < size - 1; i++)
		cout << DoubleHorz;
	cout << DoubleBottomRight << endl;

}

int random_dot(int x, int y, int size)
{
	const unsigned char Dot = 249;
	int a = 0;
	a = rand() % 6 + 1;
	switch (a)
	{
	case 1:
		GotoXY(x + size / 2, y + size / 4);
		cout << Dot;
		break;
	case 2:
		GotoXY(x + size * 0.8, y + size / 4);
		cout << Dot;
		GotoXY(x + size / 4, y + size / 4);
		cout << Dot;
		break;
	case 3:
		GotoXY(x + size * 0.8, y + size / 4);
		cout << Dot;
		GotoXY(x + size / 2, y + size / 4);
		cout << Dot;
		GotoXY(x + size / 4, y + size / 4);
		cout << Dot;
		break;
	case 4:
		GotoXY(x + size * 0.8, y + size / 2.5);
		cout << Dot;
		GotoXY(x + size / 4, y + size / 2.5);
		cout << Dot;

		GotoXY(x + size * 0.8, y + size / 6.5);
		cout << Dot;
		GotoXY(x + size / 4, y + size / 6.5);
		cout << Dot;
		break;
	case 5:
		GotoXY(x + size * 0.8, y + size / 2.5);
		cout << Dot;
		GotoXY(x + size / 4, y + size / 2.5);
		cout << Dot;

		GotoXY(x + size / 2, y + size / 4);
		cout << Dot;


		GotoXY(x + size * 0.8, y + size / 6.5);
		cout << Dot;
		GotoXY(x + size / 4, y + size / 6.5);
		cout << Dot;
		break;
	case 6:
		GotoXY(x + size * 0.8, y + size / 6.5);
		cout << Dot;
		GotoXY(x + size / 2, y + size / 6.5);
		cout << Dot;
		GotoXY(x + size / 4, y + size / 6.5);
		cout << Dot;

		GotoXY(x + size * 0.8, y + size / 2.5);
		cout << Dot;
		GotoXY(x + size / 2, y + size / 2.5);
		cout << Dot;
		GotoXY(x + size / 4, y + size / 2.5);
		cout << Dot;
		break;
	}
	return a;
}



void main()
{
	srand((unsigned)time(0));

	const int Esc = 27;
	const int Space = 32;
	int code;
	int counter1 = 0, counter2 = 0;

	int size = 10, sum1 = 0, sum2 = 0;
	int total_first = 0, total_second = 0;

	int x1 = size / 2, y1 = size / 3;
	int x2 = size * 2, y2 = size / 3;
	int x3 = size / 2, y3 = size;
	int x4 = size * 2, y4 = size;

	do
	{
		//Игроки имена
		GotoXY(size * 1.5, size / 5);
		cout << "First Player";

		GotoXY(size * 1.5, size * 0.9);
		cout << "Second Player";

		//Результаты
		GotoXY(size / 2, size * 1.7);
		cout << "First win: " << total_first;
		GotoXY(size * 2, size * 1.7);
		cout << "Second win: " << total_second;

		//Запускаем приветствие и игру для 1 игрока
		GotoXY(size / 2, size / 8);
		cout << "Press SPACE to play FIRST player or Est to stop..." << flush;
		code = _getch();
		if (code == Esc)
		{
			system("cls");
			break;
		}

		if (code == 32)
		{
			print_kv(x1, y1, size);
			sum1 = random_dot(x1, y1, size);

			print_kv(x2, y2, size);
			sum1 += random_dot(x2, y2, size);
			counter1++;
		}

		GotoXY(size / 2, size / 8);
		cout << "Press SPACE to play SECON player or Est to stop..." << flush;
		code = _getch();
		if (code == Esc)
		{
			system("cls");
			break;
		}


		if (code == 32)
		{
			print_kv(x3, y3, size);
			sum2 = random_dot(x3, y3, size);

			print_kv(x4, y4, size);
			sum2 += random_dot(x4, y4, size);
		}


		if (sum1 > sum2)
		{
			GotoXY(size / 2, size * 1.8);
			cout << "FIRST WIN!!!" << flush;

			GotoXY(size / 2, size * 1.7);
			cout << "First win: " << ++total_first;
		}
		else if (sum1 < sum2)
		{
			GotoXY(size * 2, size * 1.8);
			cout << "SECOND WIN!!!" << flush;

			GotoXY(size * 2, size * 1.7);
			cout << "Second win: " << ++total_second;
		}
		
		GotoXY(size / 2, size / 8);
		cout << "Press ANY key to play again or Est to stop......." << flush;
		code = _getch();
		system("cls");

	} while (code != Esc);
}