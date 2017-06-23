#include <iostream>
#include <conio.h>
#include <time.h>
#include "ConsoleLib.h"

using namespace std;

void print_kub(int x, int y)
{
	const unsigned char DoubleTopLeft = 201;
	const unsigned char DoubleTopRight = 187;
	const unsigned char DoubleBottomLeft = 200;
	const unsigned char DoubleBottomRight = 188;
	const unsigned char DoubleHorz = 205;
	const unsigned char DoubleVert = 186;

	GotoXY(0, 0);

	cout << DoubleTopLeft;
	WriteChars(1, 0, DoubleHorz, x - 1);
	cout << DoubleTopRight << endl;

	for (int i = 0; i < y - 1; i++)
	{
		cout << DoubleVert;
		GotoXY(x, i + 1);
		cout << DoubleVert << endl;
	}

	cout << DoubleBottomLeft;
	WriteChars(1, y, DoubleHorz, x - 1);
	cout << DoubleBottomRight << endl;
}

int get_y_print_ball(int x, int y, int y_start, int speed)
{
	int x_play = 1;

	while (true)
	{
		WriteChar(x_play, y_start, 1);
		x_play++;
		y_start++;
		Sleep(speed);
		cout << "\b ";
		if (y_start == y - 1) break;
		if (_kbhit())
		{
			if (_getch() == 27) return (27);
		}
	}

	while (true)
	{
		WriteChar(x_play, y_start, 1);
		if (x_play == x - 1 && y_start == y - 1) break;
		x_play++;
		y_start--;
		Sleep(speed);
		cout << "\b ";
		if (x_play == x - 1) break;
		if (_kbhit())
		{
			if (_getch() == 27) return (27);
		}

	}

	while (true)
	{
		WriteChar(x_play, y_start, 1);
		if (x_play == 1 && y_start == 1) break;
		--x_play;
		--y_start;
		Sleep(speed);
		cout << "\b ";
		if (y_start == 1) break;
		if (_kbhit())
		{
			if (_getch() == 27) return (27);
		}
	}

	while (true)
	{
		WriteChar(x_play, y_start, 1);
		if (x_play == 1 && y_start == 1) break;
		--x_play;
		++y_start;
		Sleep(speed);
		cout << "\b ";
		if (x_play == 1) break;
		if (_kbhit())
		{
			if (_getch() == 27) return (27);
		}
	}
}

void main()
{
	srand((unsigned)time(0));
	ShowCursor(false);

	const int Esc = 27;
	int key = 0;
	int size_x = 20, size_y = 20, speed = 300;
	int y_start = (1 + rand() % (size_y - 2));

	while (true)
	{
		print_kub(size_x, size_y);
		key = get_y_print_ball(size_x, size_y, y_start, speed);
		if (key == 27)
		{
			system("cls");
			break;
		}
	}
}