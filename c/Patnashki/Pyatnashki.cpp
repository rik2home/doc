#include <iostream>
#include <time.h>
#include "ConsoleLib.h"
#include <conio.h>

using namespace std;
void WriteMenu()
{
	const unsigned char LeftTop = 201;
	const unsigned char Horz = 205;
	const unsigned char Vert = 186;
	const unsigned char RightTop = 187;
	const unsigned char LeftBottom = 200;
	const unsigned char RightBottom = 188;

	WriteChar(25, 8, LeftTop);
	WriteChars(26, 8, Horz, 10);
	WriteChar(36, 8, RightTop);

	WriteChar(25, 9, Vert);
	WriteChars(26, 9, ' ', 10);
	WriteChar(36, 9, Vert);

	WriteChar(25, 10, Vert);
	WriteStr(26, 10, "  Restart ");
	WriteChar(36, 10, Vert);

	WriteChar(25, 11, Vert);
	WriteStr(26, 11, "  Menu    ");
	WriteChar(36, 11, Vert);

	WriteChar(25, 12, Vert);
	WriteStr(26, 12, "  Exit    ");
	WriteChar(36, 12, Vert);

	WriteChar(25, 13, Vert);
	WriteChars(26, 13, ' ', 10);
	WriteChar(36, 13, Vert);

	WriteChar(25, 14, LeftBottom);
	WriteChars(26, 14, Horz, 10);
	WriteChar(36, 14, RightBottom);
}

void WriteMenu2()
{
	const unsigned char LeftTop = 201;
	const unsigned char Horz = 205;
	const unsigned char Vert = 186;
	const unsigned char RightTop = 187;
	const unsigned char LeftBottom = 200;
	const unsigned char RightBottom = 188;
	const unsigned char Up = 24;
	const unsigned char Down = 25;
	const unsigned char Left = 27;
	const unsigned char Right = 26;


	WriteChar(25, 8, LeftTop);
	WriteChars(26, 8, Horz, 10);
	WriteChar(36, 8, RightTop);

	WriteChar(25, 9, Vert);
	WriteChars(26, 9, ' ', 10);
	WriteChar(36, 9, Vert);

	WriteChar(25, 10, Vert);
	WriteStr(26, 10, "  Setting: ");
	WriteChar(36, 10, Vert);

	WriteChar(25, 11, Vert);
	WriteChar(26, 11, Up);
	WriteStr(28, 11, "  Up  ");
	WriteChar(36, 11, Vert);

	WriteChar(25, 12, Vert);
	WriteChar(26, 12, Down);
	WriteStr(28, 12, "  Down  ");
	WriteChar(36, 12, Vert);

	WriteChar(25, 13, Vert);
	WriteChar(26, 13, Left);
	WriteStr(28, 13, "  Left      ");
	WriteChar(36, 13, Vert);

	WriteChar(25, 14, Vert);
	WriteChar(26, 14, Right);
	WriteStr(28, 14, "  Rigth   ");
	WriteChar(36, 14, Vert);

	WriteChar(25, 15, Vert);
	WriteStr(26, 15, "Esc Exit   ");
	WriteChar(36, 15, Vert);


	WriteChar(25, 16, Vert);
	WriteChars(26, 16, ' ', 10);
	WriteChar(36, 16, Vert);

	WriteChar(25, 17, LeftBottom);
	WriteChars(26, 17, Horz, 10);
	WriteChar(36, 17, RightBottom);
}


void print_menu(int x, int y)
{
	GotoXY(x, y);
	cout << "MENU:";
	GotoXY(x, y + 2);
	cout << "\"w\" = UP";
	GotoXY(x, y + 3);
	cout << "\"s\" = DOWN";
	GotoXY(x, y + 4);
	cout << "\"a\" = LEFT";
	GotoXY(x, y + 5);
	cout << "\"d\" = RIGHT";
	GotoXY(x, y + 6);
	cout << "\"r\" = RESTART";

	GotoXY(x, y + 8);
	cout << "\"Esc\" = STOP";

}



void print_kv(int y, int x, int size)
{
	const unsigned char DoubleTopLeft = 201;
	const unsigned char DoubleTopRight = 187;
	const unsigned char DoubleBottomLeft = 200;
	const unsigned char DoubleBottomRight = 188;
	const unsigned char DoubleHorz = 205;
	const unsigned char DoubleVert = 186;

	GotoXY(x, y);

	cout << DoubleTopLeft;
	WriteChars(x + 1, 0, DoubleHorz, size - 1);
	cout << DoubleTopRight << endl;

	for (int i = 0; i < size - 5; i++)
	{
		cout << DoubleVert;
		GotoXY(size, i + 1);
		cout << DoubleVert << endl;
	}
	cout << DoubleBottomLeft;
	WriteChars(x + 1, size - 4, DoubleHorz, size - 1);
	cout << DoubleBottomRight << endl;
}

void print_little_kv(int start_y, int start_x, int size_lit, int a_board[4][4])
{
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (a_board[y][x] != 0)
			{
				GotoXY(start_x, start_y);

				const unsigned char DoubleTopLeft = 201;
				const unsigned char DoubleTopRight = 187;
				const unsigned char DoubleBottomLeft = 200;
				const unsigned char DoubleBottomRight = 188;
				const unsigned char DoubleHorz = 205;
				const unsigned char DoubleVert = 186;

				cout << DoubleTopLeft;
				cout << DoubleHorz << DoubleHorz;
				cout << DoubleTopRight << endl;

				GotoXY(start_x, start_y + 1);
				cout << DoubleVert;
				GotoXY(start_x + 3, start_y + 1);
				cout << DoubleVert;

				GotoXY(start_x, start_y + 2);
				cout << DoubleBottomLeft;
				cout << DoubleHorz << DoubleHorz;
				cout << DoubleBottomRight;
			}

			if (a_board[y][x] == 0)
			{
				GotoXY(start_x, start_y);
				cout << "    ";

				GotoXY(start_x, start_y + 1);
				cout << " ";
				GotoXY(start_x + 3, start_y + 1);
				cout << " ";

				GotoXY(start_x, start_y + 2);
				cout << "    ";


			}

			start_x += 4;

		}
		start_x = 1;
		start_y += 3;

	}
}

void print_char(int a_board[4][4])
{

	GotoXY(2, 2);
	if (a_board[0][0] == 0) {
		cout << "  ";
	}
	else cout << a_board[0][0];
	GotoXY(2, 5);
	if (a_board[1][0] == 0) {
		cout << "  ";
	}
	else cout << a_board[1][0];
	GotoXY(2, 8);
	if (a_board[2][0] == 0) {
		cout << "  ";
	}
	else cout << a_board[2][0];
	GotoXY(2, 11);
	if (a_board[3][0] == 0) {
		cout << "  ";
	}
	else cout << a_board[3][0];

	
	GotoXY(6, 2);
	if (a_board[0][1] == 0) {
		cout << "  ";
	}
	else cout << a_board[0][1];
	GotoXY(6, 5);
	if (a_board[1][1] == 0) {
		cout << "  ";
	}
	else cout << a_board[1][1];
	GotoXY(6, 8);
	if (a_board[2][1] == 0) {
		cout << "  ";
	}
	else cout << a_board[2][1];
	GotoXY(6, 11);
	if (a_board[3][1] == 0) {
		cout << "  ";
	}
	else cout << a_board[3][1];


	GotoXY(10, 2);
	if (a_board[0][2] == 0) {
		cout << "  ";
	}
	else cout << a_board[0][2];
	GotoXY(10, 5);
	if (a_board[1][2] == 0) {
		cout << "  ";
	}
	else cout << a_board[1][2];
	GotoXY(10, 8);
	if (a_board[2][2] == 0) {
		cout << "  ";
	}
	else cout << a_board[2][2];
	GotoXY(10, 11);
	if (a_board[3][2] == 0) {
		cout << "  ";
	}
	else cout << a_board[3][2];

	GotoXY(14, 2);
	if (a_board[0][3] == 0) {
		cout << "  ";
	}
	else cout << a_board[0][3];
	GotoXY(14, 5);
	if (a_board[1][3] == 0) {
		cout << "  ";
	}
	else cout << a_board[1][3];
	GotoXY(14, 8);
	if (a_board[2][3] == 0) {
		cout << "  ";
	}
	else cout << a_board[2][3];
	GotoXY(14, 11);
	if (a_board[3][3] == 0) {
		cout << "  ";
	}
	else cout << a_board[3][3];

}

void print_cls_char(int a_board[4][4])
{

	GotoXY(2, 2);
	cout << "  ";
	GotoXY(2, 5);
	cout << "  ";
	GotoXY(2, 8);
	cout << "  ";
	GotoXY(2, 11);
	cout << "  ";

	GotoXY(6, 2);
	cout << "  ";
	GotoXY(6, 5);
	cout << "  ";
	GotoXY(6, 8);
	cout << "  ";
	GotoXY(6, 11);
	cout << "  ";

	GotoXY(10, 2);
	cout << "  ";
	GotoXY(10, 5);
	cout << "  ";
	GotoXY(10, 8);
	cout << "  ";
	GotoXY(10, 11);
	cout << "  ";

	GotoXY(14, 2);
	cout << "  ";
	GotoXY(14, 5);
	cout << "  ";
	GotoXY(14, 8);
	cout << "  ";
	GotoXY(14, 11);
	cout << "  ";
}

void FindSpace(int &gps_y, int &gps_x, int a_board[4][4])
{
	for (int y = 0; y < 4; y++)
		for (int x = 0; x < 4; x++)
			if (a_board[y][x] == 0)
			{
				gps_y = y;
				gps_x = x;
			}
}

void rand_mas(int a_board[4][4])
{
	int *p = &a_board[0][0];
	for (int i = 0; i < 15; i++)
	{
		int temp = p[i];
		int val = rand() % 15;
		p[i] = p[val];
		p[val] = temp;
	}

	int Chaos = 0; //Количество беспорядков на поле
	int CurrNum; //Костяшка, для которой мы рассматриваем беспорядки
	for (int i = 0; i < 14; i++) //Считаем для костяшек на первых 14 позициях (для 15-й это бессмысленно)
	{
		CurrNum = p[i];
		for (int j = i + 1; j < 15; j++)
			if (CurrNum > p[j])
				Chaos++;
	}
	if (Chaos % 2 == 1) //Если общее число беспорядков нечетное,
	{ //меняем местами костяшки на 14-й и 15-й позициях
		int temp = p[13];
		p[13] = p[14];
		p[14] = temp;
	}
}

bool compare_2_mas(int a_board[4][4])
{
	int *p = &a_board[0][0];
	for (int i = 0; i < 15; i++)
	{
		if (p[i] != i + 1)
		{
			return false;
		} //При первом же нахождении несоответствия выходим и возвращаем false
	}
	return true;//Если не найдено ни одного несоответствия - поле собрано верно
}

int Go(int a_board[4][4], int &sum_step)
{

	const int Esc = 27, Up = 72, Down = 80, Right = 77, Left = 75;
	int code;
	int gps_x_space, gps_y_space; //ссылка из функции "найти пробел" вернет координаты "пустоты/звезды" в массиве
	FindSpace(gps_y_space, gps_x_space, a_board);
	int new_place_gps_x = gps_x_space;
	int new_place_gps_y = gps_y_space;

	code = _getch();

	switch (code)
	{
	case Up:
	{
		new_place_gps_y = gps_y_space - 1;
		break;
	}
	case Down:
	{
		new_place_gps_y = gps_y_space + 1;
		break;
	}
	case Right:
	{
		new_place_gps_x = gps_x_space + 1;
		break;
	}
	case Left:
	{
		new_place_gps_x = gps_x_space - 1;
		break;
	}
	}
	if (new_place_gps_x >= 0 && new_place_gps_x < 4 && new_place_gps_y >= 0 && new_place_gps_y < 4)
	{
		a_board[gps_y_space][gps_x_space] = a_board[new_place_gps_y][new_place_gps_x];		
		a_board[new_place_gps_y][new_place_gps_x] = 0;
		sum_step++;
	}

	return code;
}

void Print_Menu(int a_board[4][4], int &sum_step, int &code)
{
	const int Esc = 27;

	const int Enter = 13;
	int key;

	ShowCursor(false);
	SetColor(White, Cyan);

	WriteMenu();

	const int itemCount = 3;
	int curItem = 1;

	do
	{
		ChangeTextAttr(26, 9 + curItem, White, Black, 10);

		key = _getch();

		if (key == Enter)
		{
			switch (curItem)
			{
			case 1:
				code = 'r';
				key = Esc;
				break;
			case 2:
				SetColor(White, Black);
				system("cls");
				WriteMenu2();
				break;
			case 3:
				code = Esc;
				key = Esc;
				break;
			}
		}

		if (key == 0 || key == 0xE0)
		{
			key = _getch();

			ChangeTextAttr(26, 9 + curItem, White, Cyan, 10);

			switch (key)
			{
			case 71:		// Home
				curItem = 1;
				break;
			case 72:		// Up
				if (curItem == 1)
					curItem = itemCount;
				else
					curItem--;
				break;
			case 79:		// End
				curItem = itemCount;
				break;
			case 80:		// Down
				if (curItem == itemCount)
					curItem = 1;
				else
					curItem++;
				break;
			}
		}
	} while (key != Esc);

	SetColor(LightGray, Black);
	system("cls");
}


using namespace std;


void main()
{
	srand((unsigned)time(0));

	int a_board[4][4]
	{
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 },
		{ 13, 15, 14, 0 }
	};

	const int Esc = 27;
	const int Enter = 13;
	int code, n;

	int size_big = 17;
	int size_lit = 4;
	int sum_step = 0;

	ShowCursor(false);
//	print_menu(20, 1);

	rand_mas(a_board);

	GotoXY(1, 15);
	cout << "Steps:";

	do
	{
		print_kv(0, 0, size_big);
		GotoXY(8, 16);
		print_char(a_board);
		print_little_kv(1, 1, size_lit, a_board);
		code = Go(a_board, sum_step);
		
		if (code != 'r' && code != Esc)
		{
			GotoXY(1, 15);
			cout << "Steps: " << sum_step;
		}

		if (code == Enter)
		{
			Print_Menu(a_board, sum_step, code);


		}

		if (code == 'r')
		{
			print_cls_char(a_board);
			rand_mas(a_board);
			GotoXY(8, 15);
			cout << "     ";
			GotoXY(1, 15);
			sum_step = 0;
			cout << "Steps: " << sum_step;
		}

		if (compare_2_mas(a_board))
		{
			GotoXY(20, 1);
			cout << "\"YOU WIN!\", HI SOCER = " << sum_step;
			GotoXY(0, 0);
			print_char(a_board);
			print_little_kv(1, 1, size_lit, a_board);
			Print_Menu(a_board, sum_step, code);

			break;
		}

	} while (code != Esc);

	GotoXY(0, 20);
}