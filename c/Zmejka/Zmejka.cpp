#include <iostream>
#include "ConsoleLib.h"
#include <time.h>
#include <conio.h>

using namespace std;


void print_pole(int start_y, int start_x, int size)
{
	const unsigned char DoubleTopLeft = 201;
	const unsigned char DoubleTopRight = 187;
	const unsigned char DoubleBottomLeft = 200;
	const unsigned char DoubleBottomRight = 188;
	const unsigned char DoubleHorz = 205;
	const unsigned char DoubleVert = 186;

	GotoXY(start_x, start_y);

	cout << DoubleTopLeft;
	WriteChars(start_x + 1, 0, DoubleHorz, size - 1);
	cout << DoubleTopRight << endl;

	for (int i = 0; i < size - 1; i++)
	{
		cout << DoubleVert;
		GotoXY(size, i + 1);
		cout << DoubleVert << endl;
	}
	cout << DoubleBottomLeft;
	WriteChars(start_x + 1, size, DoubleHorz, size - 1);
	cout << DoubleBottomRight << endl;
}

void rand_x_y_gps(int size, int &gps_y_eat, int &gps_x_eat)
{
	gps_y_eat = rand() % ((size - 1) + 1);
	gps_x_eat = rand() % ((size - 1) + 1);
}

void print_eat(int gps_y_eat, int gps_x_eat)
{
	char eat = '#';
	GotoXY(gps_x_eat, gps_y_eat);
	cout << eat;

}

int get_char_go(int speed, int size, int &gps_y, int &gps_x, int &code)
{
	const int Esc = 27, Up = 119, Down = 115, Right = 100, Left = 97;
	char head = '@';
	for (int i = 0; i < 20; i++)
	{
		GotoXY(gps_x, gps_y);
		cout << head;
		Sleep(500 - speed);
		cout << "\b ";

		if (code == Up) gps_y--;
		if (code == Down) gps_y++;
		if (code == Right) gps_x++;
		if (code == Left) gps_x--;

		while (_kbhit())
		{
			code = _getch();
		}
		if (gps_y == 1 || gps_y == size || gps_x == 1 || gps_x == size) code = Esc;

		if (code == Esc) break;
	}
	return code;
}

void main()
{
	const int Esc = 27, Up = 119, Down = 115, Right = 100, Left = 97;
	int size = 30;
	int gps_y = size / 2;
	int gps_x = size / 2;
	int	eat_counter = 10;
	int gps_y_eat = 10;
	int gps_x_eat = 10;
	int code = 100;

	srand((unsigned)time(0));

	ShowCursor(false);

	print_pole(0, 0, size);
	print_eat(gps_y_eat, gps_x_eat);

	do
	{
		
		if (eat_counter == 0)
		{
			rand_x_y_gps(size, gps_y_eat, gps_x_eat);
			print_eat(gps_y_eat, gps_x_eat);
		}

		code = get_char_go(0, size, gps_y, gps_x, code);
		eat_counter--;

	} while (code != Esc);

	GotoXY(0, 31);

}