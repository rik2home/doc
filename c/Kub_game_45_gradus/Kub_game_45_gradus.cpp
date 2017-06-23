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

int get_xy_print_ball(int size_x, int size_y, int y_play, int x_play, int speed, int mem_x, int mem_y)
{

	if (((x_play == 1) && (mem_y < y_play && mem_x > x_play)) || ((y_play == 1) && (mem_y > y_play && mem_x < x_play))
		|| (y_play == 1 && x_play == 1)) 
	{
		while (true) // 1
		{
			WriteChar(x_play, y_play, 1);
			x_play++;
			mem_x = x_play - 1;
			y_play++;
			mem_y = y_play - 1;
			Sleep(speed);
			cout << "\b ";
			if (_kbhit())
			{
				if (_getch() == 27) return (27);
			}
			if (y_play == size_y - 1 || x_play == size_x - 1) break;
		}
	}

	if ( ((x_play == size_x - 1) && (mem_y > y_play && mem_x < x_play)) || ((y_play == size_y - 1) && (mem_y < y_play && mem_x > x_play))
		|| (y_play == size_y - 1 && x_play == size_x - 1))
	{
			while (true) //2
		{
			WriteChar(x_play, y_play, 1);
			x_play--;
			mem_x = x_play + 1;
			y_play--;
			mem_y = y_play + 1;
			Sleep(speed);
			cout << "\b ";
			if (_kbhit())
			{
				if (_getch() == 27) return (27);
			}
			if (x_play == 1 || y_play == 1) break;
		}
	}

	if (((y_play == 1 && x_play > 1) && (mem_y > y_play && mem_x > x_play)) || ((x_play == size_x - 1) && (mem_y < y_play && mem_x < x_play))
		|| (y_play == 1 && x_play == size_x - 1) ) 
	{
		while (true) // 3
		{
			WriteChar(x_play, y_play, 1);
			x_play--;
			mem_x = x_play + 1;
			y_play++;
			mem_y = y_play - 1;
			Sleep(speed);
			cout << "\b ";
			if (_kbhit())
			{
				if (_getch() == 27) return (27);
			}
			if (x_play == 1 || y_play == size_y - 1) break;
		}
	}

	//if (((y_play == size_y - 1) && (mem_y < y_play && mem_x < x_play)) || ((x_play == 1) && (mem_y > y_play && mem_x > x_play))
	//	|| (y_play == size_y - 1 && x_play == 1))
	//{
	//	while (true) // 4
	//	{
	//		WriteChar(x_play, y_play, 1);
	//		x_play++;
	//		mem_x = x_play - 1;
	//		y_play--;
	//		mem_y = y_play + 1;
	//		Sleep(speed);
	//		cout << "\b ";
	//		if (_kbhit())
	//		{
	//			if (_getch() == 27) return (27);
	//		}
	//		if (x_play == size_x - 1 || y_play == 1) break;
	//	}
	//}
}
void main()
{
	srand((unsigned)time(0));
	ShowCursor(false);

	const int Esc = 27;
	int key = 0;
	int size_x = 10, size_y = 10, speed = 300;
	int y_play = size_y - 1;//(1 + rand() % (size_y - 2));
	int x_play = size_x - 1;
	int mem_x = 0, mem_y = 0;

	while (true)
	{
		print_kub(size_x, size_y);

		key = get_xy_print_ball(size_x, size_y, y_play, x_play, speed, mem_x, mem_y);
		
		
		if (key == 27)
		{
			system("cls");
			break;
		}
	}
}