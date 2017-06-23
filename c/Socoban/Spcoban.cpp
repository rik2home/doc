#include <iostream>
#include <time.h>
#include "ConsoleLib.h"
#include <conio.h>

using namespace std;


void Initialize_Leve_l(char a_board[8][8], int size_y, int size_x)
{
	const char a_Initial[8][8] =
	{
		{ 219, 219, 219, 219, ' ', ' ', ' ', ' ' },
		{ 219, '&', '+', 219, ' ', ' ', ' ', ' ' },
		{ 219, '#', ' ', 219, ' ', ' ', ' ', ' ' },
		{ 219, ' ', ' ', 219, ' ', ' ', ' ', ' ' },
		{ 219, ' ', '#', 219, ' ', ' ', ' ', ' ' },
		{ 219, '+', ' ', 219, ' ', ' ', ' ', ' ' },
		{ 219, ' ', ' ', 219, ' ', ' ', ' ', ' ' },
		{ 219, 219, 219, 219, ' ', ' ', ' ', ' ' }
	};

	for (int y = 0; y < size_y; y++)
		for (int x = 0; x < size_x; x++)
			a_board[y][x] = a_Initial[y][x];
}

void Initialize_Leve_2(char a_board[8][8], int size_y, int size_x)
{
	const char a_Initial[8][8] =
	{
		{ 219, 219, 219, 219, 219, ' ', ' ', ' ' },
		{ 219, ' ', ' ', '+', 219, ' ', ' ', ' ' },
		{ 219, ' ', '#', ' ', 219, ' ', ' ', ' ' },
		{ 219, 219, '&', 219, 219, ' ', ' ', ' ' },
		{ 219, 219, '#', 219, 219, ' ', ' ', ' ' },
		{ 219, ' ', ' ', ' ', 219, ' ', ' ', ' ' },
		{ 219, '+', ' ', ' ', 219, ' ', ' ', ' ' },
		{ 219, 219, 219, 219, 219, ' ', ' ', ' ' }
	};

	for (int y = 0; y < size_y; y++)
		for (int x = 0; x < size_x; x++)
			a_board[y][x] = a_Initial[y][x];
}

void Initialize_Leve_3(char a_board[8][8], int size_y, int size_x)
{
	const char a_Initial[8][8] =
	{
		{ 219, 219, 219, 219, 219, 219, 219, ' ' },
		{ 219, '+', ' ', 219, ' ', '+', 219, ' ' },
		{ 219, ' ', '#', '&', '#', ' ', 219, ' ' },
		{ 219, ' ', ' ', 219, ' ', ' ', 219, ' ' },
		{ 219, 219, 219, 219, 219, 219, 219, ' ' },
		{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
		{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
		{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' }
	};

	for (int y = 0; y < size_y; y++)
		for (int x = 0; x < size_x; x++)
			a_board[y][x] = a_Initial[y][x];
}

void Initialize_Leve_4(char a_board[8][8], int size_y, int size_x)
{
	const char a_Initial[8][8] =
	{
		{ 219, 219, 219, 219, 219, 219, ' ', ' ' },
		{ 219, '+', ' ', ' ', ' ', 219, ' ', ' ' },
		{ 219, '#', '#', ' ', ' ', 219, ' ', ' ' },
		{ 219, '&', '+', 219, 219, 219, ' ', ' ' },
		{ 219, 219, 219, 219, ' ', ' ', ' ', ' ' },
		{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
		{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
		{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' }
	};

	for (int y = 0; y < size_y; y++)
		for (int x = 0; x < size_x; x++)
			a_board[y][x] = a_Initial[y][x];
}


void print_char(char a_board[8][8])
{
	const unsigned char Kub = 219;
	const unsigned char vKub = 176;

	GotoXY(2, 2);
	if (a_board[0][0] == '+')
	{
		std::cout << vKub;
	}
	else cout << a_board[0][0];
	GotoXY(2, 5);
	if (a_board[1][0] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[1][0];
	GotoXY(2, 8);
	if (a_board[2][0] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[2][0];
	GotoXY(2, 11);
	if (a_board[3][0] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[3][0];
	GotoXY(2, 14);
	if (a_board[4][0] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[4][0];
	GotoXY(2, 17);
	if (a_board[5][0] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[5][0];
	GotoXY(2, 20);
	if (a_board[6][0] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[6][0];
	GotoXY(2, 23);
	if (a_board[7][0] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[7][0];


	GotoXY(5, 2);
	if (a_board[0][1] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[0][1];
	GotoXY(5, 5);
	if (a_board[1][1] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[1][1];
	GotoXY(5, 8);
	if (a_board[2][1] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[2][1];
	GotoXY(5, 11);
	if (a_board[3][1] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[3][1];
	GotoXY(5, 14);
	if (a_board[4][1] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[4][1];
	GotoXY(5, 17);
	if (a_board[5][1] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[5][1];
	GotoXY(5, 20);
	if (a_board[6][1] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[6][1];
	GotoXY(5, 23);
	if (a_board[7][1] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[7][1];


	GotoXY(8, 2);
	if (a_board[0][2] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[0][2];
	GotoXY(8, 5);
	if (a_board[1][2] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[1][2];
	GotoXY(8, 8);
	if (a_board[2][2] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[2][2];
	GotoXY(8, 11);
	if (a_board[3][2] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[3][2];
	GotoXY(8, 14);
	if (a_board[4][2] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[4][2];
	GotoXY(8, 17);
	if (a_board[5][2] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[5][2];
	GotoXY(8, 20);
	if (a_board[6][2] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[6][2];
	GotoXY(8, 23);
	if (a_board[7][2] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[7][2];

	GotoXY(11, 2);
	if (a_board[0][3] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[0][3];
	GotoXY(11, 5);
	if (a_board[1][3] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[1][3];
	GotoXY(11, 8);
	if (a_board[2][3] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[2][3];
	GotoXY(11, 11);
	if (a_board[3][3] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[3][3];
	GotoXY(11, 14);
	if (a_board[4][3] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[4][3];
	GotoXY(11, 17);
	if (a_board[5][3] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[5][3];
	GotoXY(11, 20);
	if (a_board[6][3] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[6][3];
	GotoXY(11, 23);
	if (a_board[7][3] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[7][3];

	GotoXY(14, 2);
	if (a_board[0][4] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[0][4];
	GotoXY(14, 5);
	if (a_board[1][4] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[1][4];
	GotoXY(14, 8);
	if (a_board[2][4] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[2][4];
	GotoXY(14, 11);
	if (a_board[3][4] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[3][4];
	GotoXY(14, 14);
	if (a_board[4][4] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[4][4];
	GotoXY(14, 17);
	if (a_board[5][4] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[5][4];
	GotoXY(14, 20);
	if (a_board[6][4] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[6][4];
	GotoXY(14, 23);
	if (a_board[7][4] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[7][4];

	GotoXY(17, 2);
	if (a_board[0][5] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[0][5];
	GotoXY(17, 5);
	if (a_board[1][5] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[1][5];
	GotoXY(17, 8);
	if (a_board[2][5] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[2][5];
	GotoXY(17, 11);
	if (a_board[3][5] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[3][5];
	GotoXY(17, 14);
	if (a_board[4][5] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[4][5];
	GotoXY(17, 17);
	if (a_board[5][5] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[5][5];
	GotoXY(17, 20);
	if (a_board[6][5] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[6][5];
	GotoXY(17, 23);
	if (a_board[7][5] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[7][5];

	GotoXY(20, 2);
	if (a_board[0][6] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[0][6];
	GotoXY(20, 5);
	if (a_board[1][6] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[1][6];
	GotoXY(20, 8);
	if (a_board[2][6] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[2][6];
	GotoXY(20, 11);
	if (a_board[3][6] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[3][6];
	GotoXY(20, 14);
	if (a_board[4][6] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[4][6];
	GotoXY(20, 17);
	if (a_board[5][6] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[5][6];
	GotoXY(20, 20);
	if (a_board[6][6] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[6][6];
	GotoXY(20, 23);
	if (a_board[7][6] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[7][6];

	GotoXY(23, 2);
	if (a_board[0][7] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[0][7];
	GotoXY(23, 5);
	if (a_board[1][7] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[1][7];
	GotoXY(23, 8);
	if (a_board[2][7] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[2][7];
	GotoXY(23, 11);
	if (a_board[3][7] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[3][7];
	GotoXY(23, 14);
	if (a_board[4][7] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[4][7];
	GotoXY(23, 17);
	if (a_board[5][7] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[5][7];
	GotoXY(23, 20);
	if (a_board[6][7] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[6][7];
	GotoXY(23, 23);
	if (a_board[7][7] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[7][7];

}

void print_char_pole(char a_board[8][8])
{
	const unsigned char Kub = 219;
	const unsigned char vKub = 176;



	GotoXY(5, 5);
	if (a_board[1][1] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[1][1];
	GotoXY(5, 8);
	if (a_board[2][1] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[2][1];
	GotoXY(5, 11);
	if (a_board[3][1] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[3][1];
	GotoXY(5, 14);
	if (a_board[4][1] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[4][1];
	GotoXY(5, 17);
	if (a_board[5][1] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[5][1];
	GotoXY(5, 20);
	if (a_board[6][1] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[6][1];
	GotoXY(5, 23);
	if (a_board[7][1] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[7][1];


	GotoXY(8, 5);
	if (a_board[1][2] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[1][2];
	GotoXY(8, 8);
	if (a_board[2][2] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[2][2];
	GotoXY(8, 11);
	if (a_board[3][2] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[3][2];
	GotoXY(8, 14);
	if (a_board[4][2] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[4][2];
	GotoXY(8, 17);
	if (a_board[5][2] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[5][2];
	GotoXY(8, 20);
	if (a_board[6][2] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[6][2];
	GotoXY(8, 23);
	if (a_board[7][2] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[7][2];

	GotoXY(11, 5);
	if (a_board[1][3] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[1][3];
	GotoXY(11, 8);
	if (a_board[2][3] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[2][3];
	GotoXY(11, 11);
	if (a_board[3][3] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[3][3];
	GotoXY(11, 14);
	if (a_board[4][3] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[4][3];
	GotoXY(11, 17);
	if (a_board[5][3] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[5][3];
	GotoXY(11, 20);
	if (a_board[6][3] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[6][3];
	GotoXY(11, 23);
	if (a_board[7][3] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[7][3];

	GotoXY(14, 5);
	if (a_board[1][4] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[1][4];
	GotoXY(14, 8);
	if (a_board[2][4] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[2][4];
	GotoXY(14, 11);
	if (a_board[3][4] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[3][4];
	GotoXY(14, 14);
	if (a_board[4][4] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[4][4];
	GotoXY(14, 17);
	if (a_board[5][4] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[5][4];
	GotoXY(14, 20);
	if (a_board[6][4] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[6][4];
	GotoXY(14, 23);
	if (a_board[7][4] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[7][4];


	GotoXY(17, 5);
	if (a_board[1][5] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[1][5];
	GotoXY(17, 8);
	if (a_board[2][5] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[2][5];
	GotoXY(17, 11);
	if (a_board[3][5] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[3][5];
	GotoXY(17, 14);
	if (a_board[4][5] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[4][5];
	GotoXY(17, 17);
	if (a_board[5][5] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[5][5];
	GotoXY(17, 20);
	if (a_board[6][5] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[6][5];
	GotoXY(17, 23);
	if (a_board[7][5] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[7][5];

	GotoXY(20, 5);
	if (a_board[1][6] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[1][6];
	GotoXY(20, 8);
	if (a_board[2][6] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[2][6];
	GotoXY(20, 11);
	if (a_board[3][6] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[3][6];
	GotoXY(20, 14);
	if (a_board[4][6] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[4][6];
	GotoXY(20, 17);
	if (a_board[5][6] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[5][6];
	GotoXY(20, 20);
	if (a_board[6][6] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[6][6];
	GotoXY(20, 23);
	if (a_board[7][6] == '+')
	{
		cout << vKub;
	}
	else cout << a_board[7][6];


}


void Find_38(int &gps_y, int &gps_x, char a_board[8][8])
{
	for (int y = 0; y < 8; y++)
	{
		for (int x = 0; x < 8; x++)
		if (a_board[y][x] == 38)
		{
			gps_y = y;
			gps_x = x;
		}
	}
}

void Find_35(int &gps_y_1, int &gps_x_1, int &gps_y_2, int &gps_x_2, char a_board[8][8])
{
	int first = 0;

	for (int y = 0; y < 8; y++)
	{
		for (int x = 0; x < 8; x++)
			if (a_board[y][x] == 35 && first == 0)
			{
				gps_y_1 = y;
				gps_x_1 = x;
				first++;
			}
			else if (a_board[y][x] == 35 && first == 1)
			{
				gps_y_2 = y;
				gps_x_2 = x;
			}
	}
}

void Find_43(int &gps_y_1, int &gps_x_1, int &gps_y_2, int &gps_x_2, char a_board[8][8])
{
	int first = 0;

	for (int y = 0; y < 8; y++)
	{
		for (int x = 0; x < 8; x++)
			if (a_board[y][x] == 43 && first == 0)
			{
				gps_y_1 = y;
				gps_x_1 = x;
				first++;
			}
			else if (a_board[y][x] == 43 && first == 1)
			{
				gps_y_2 = y;
				gps_x_2 = x;
			}
	}
}

void print_little_kv(int start_y, int start_x, int size_lit, char a_board[8][8])
{
	const unsigned char DoubleTopLeft = 218;
	const unsigned char DoubleTopRight = 191;
	const unsigned char DoubleBottomLeft = 192;
	const unsigned char DoubleBottomRight = 217;
	const unsigned char DoubleHorz = 196;
	const unsigned char DoubleVert = 179;

	const char Kub = -37;


	for (int y = 0; y < 8; y++)
	{
		for (int x = 0; x < 8; x++)
		{

			if (a_board[y][x] == Kub)
			{
				GotoXY(start_x, start_y);

				cout << Kub << Kub << Kub << endl;

				GotoXY(start_x, start_y + 1);
				cout << Kub;
				GotoXY(start_x + 2, start_y + 1);
				cout << Kub;

				GotoXY(start_x, start_y + 2);
				cout << Kub << Kub << Kub << endl;
			}


			if (a_board[y][x] == '#')
			{
				GotoXY(start_x, start_y);

				cout << DoubleTopLeft;
				cout << DoubleHorz;
				cout << DoubleTopRight << endl;

				GotoXY(start_x, start_y + 1);
				cout << DoubleVert;
				GotoXY(start_x + 2, start_y + 1);
				cout << DoubleVert;

				GotoXY(start_x, start_y + 2);
				cout << DoubleBottomLeft;
				cout << DoubleHorz;
				cout << DoubleBottomRight;
			}

			if (a_board[y][x] == ' ' || a_board[y][x] == '+' || a_board[y][x] == '&')
			{
				GotoXY(start_x, start_y);
				cout << "   ";

				GotoXY(start_x, start_y + 1);
				cout << " ";
				GotoXY(start_x + 2, start_y + 1);
				cout << " ";

				GotoXY(start_x, start_y + 2);
				cout << "   ";
			}


			start_x += 3;

		}
		start_x = 1;
		start_y += 3;

	}
}

int Go(char a_board[8][8], int &sum_step, int gps_y_43_1, int gps_x_43_1, int gps_y_43_2, int gps_x_43_2, int &level, int &code)
{
	const char Kub =  -37;

	const int Esc = 27, Up = 119, Down = 115, Right = 100, Left = 97;
	int gps_x_38, gps_y_38;
	int gps_x_35_1, gps_y_35_1;
	int gps_x_35_2, gps_y_35_2;

	Find_38(gps_y_38, gps_x_38, a_board);
	Find_35(gps_y_35_1, gps_x_35_1, gps_y_35_2, gps_x_35_2, a_board);

	int new_place_gps_x_38 = gps_x_38;
	int new_place_gps_y_38 = gps_y_38;

	int new_place_kub_x_35_1 = gps_x_35_1;
	int new_place_kub_y_35_1 = gps_y_35_1;

	int new_place_kub_x_35_2 = gps_x_35_2;
	int new_place_kub_y_35_2 = gps_y_35_2;

	code = _getch();
	switch (code)
	{
	case Up:
	{
		new_place_gps_y_38 = gps_y_38 - 1;

		if ((new_place_gps_y_38 == gps_y_35_1) && (new_place_gps_x_38 == gps_x_35_1))
			new_place_kub_y_35_1 = gps_y_35_1 - 1;

		if ((new_place_gps_y_38 == gps_y_35_2) && (new_place_gps_x_38 == gps_x_35_2))
			new_place_kub_y_35_2 = gps_y_35_2 - 1;

		break;
	}
	case Down:
	{
		new_place_gps_y_38 = gps_y_38 + 1;

		if ((new_place_gps_y_38 == gps_y_35_1) && (new_place_gps_x_38 == gps_x_35_1))
			new_place_kub_y_35_1 = gps_y_35_1 + 1;

		if ((new_place_gps_y_38 == gps_y_35_2) && (new_place_gps_x_38 == gps_x_35_2))
			new_place_kub_y_35_2 = gps_y_35_2 + 1;
		break;
	}
	case Right:
	{
		new_place_gps_x_38 = gps_x_38 + 1;

		if ((new_place_gps_y_38 == gps_y_35_1) && (new_place_gps_x_38 == gps_x_35_1))
			new_place_kub_x_35_1 = gps_x_35_1 + 1;

		if ((new_place_gps_y_38 == gps_y_35_2) && (new_place_gps_x_38 == gps_x_35_2))
			new_place_kub_x_35_2 = gps_x_35_2 + 1;
		break;
	}
	case Left:
	{
		new_place_gps_x_38 = gps_x_38 - 1;

		if ((new_place_gps_y_38 == gps_y_35_1) && (new_place_gps_x_38 == gps_x_35_1))
			new_place_kub_x_35_1 = gps_x_35_1 - 1;

		if ((new_place_gps_y_38 == gps_y_35_2) && (new_place_gps_x_38 == gps_x_35_2))
			new_place_kub_x_35_2 = gps_x_35_2 - 1;
		break;
	}
	}
	

	if (a_board[new_place_gps_y_38][new_place_gps_x_38] != Kub && // двигаем только по пустому месту
		a_board[new_place_gps_y_38][new_place_gps_x_38] != '#')
	{
		a_board[gps_y_38][gps_x_38] = ' ';
		a_board[new_place_gps_y_38][new_place_gps_x_38] = 38;

		sum_step++;
	}



	if (a_board[new_place_gps_y_38][new_place_gps_x_38] == '#' && 
		a_board[new_place_kub_y_35_1][new_place_kub_x_35_1] != Kub &&
		a_board[new_place_kub_y_35_2][new_place_kub_x_35_2] != Kub
		&& !((new_place_kub_y_35_1 == new_place_kub_y_35_2) && (new_place_kub_x_35_1 == new_place_kub_x_35_2)))
	{
		a_board[new_place_kub_y_35_1][new_place_kub_x_35_1] = 35;
		a_board[new_place_kub_y_35_2][new_place_kub_x_35_2] = 35;

		a_board[gps_y_38][gps_x_38] = ' ';
		a_board[new_place_gps_y_38][new_place_gps_x_38] = 38;

		sum_step++;
	}


	if (a_board[gps_y_43_1][gps_x_43_1] == '#' && a_board[gps_y_43_2][gps_x_43_2] == '#')
	{
		level++;
	}

	//if (a_board[gps_y_43_1][gps_x_43_1] == ' ')
	//{
	//	a_board[gps_y_43_1][gps_x_43_1] = 176;
	//}

	if (a_board[gps_y_43_2][gps_x_43_2] == ' ')
	{
		a_board[gps_y_43_2][gps_x_43_2] = 176;
	}

	print_char_pole(a_board);


	GotoXY(0, 36);
	cout << "level = " << level << endl;

	return code;
}



void main()
{
	srand((unsigned)time(0));
	int const size_y = 8;
	int const size_x = 8;
	char a_board[size_y][size_x]
	{
		{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
		{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
		{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
		{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
		{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
		{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
		{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
		{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' }
	};

	const int Esc = 27;
	int code;
	int level = 0;

	int size_big = 34;
	int size_lit = 4;
	int sum_step = 00;

	ShowCursor(false);
	Initialize_Leve_l(a_board, size_y, size_x);
	print_char(a_board);

	int gps_x_43_1, gps_y_43_1;
	int gps_x_43_2, gps_y_43_2;

	//Find_43(gps_y_43_1, gps_x_43_1, gps_y_43_2, gps_x_43_2, a_board);

	print_little_kv(1, 1, size_lit, a_board);

	do
	{

		Find_43(gps_y_43_1, gps_x_43_1, gps_y_43_2, gps_x_43_2, a_board);
		code = Go(a_board, sum_step, gps_y_43_1, gps_x_43_1, gps_y_43_2, gps_x_43_2, level, code);
		print_little_kv(1, 1, size_lit, a_board);

		if (code == 'r')
		{
			system("cls");
			Initialize_Leve_l(a_board, size_y, size_x);
			print_little_kv(1, 1, size_lit, a_board);
			print_char(a_board);
			level = 0;

		}

		if (level == 1)
		{
			Initialize_Leve_2(a_board, size_y, size_x);
			print_little_kv(1, 1, size_lit, a_board);
			print_char(a_board);
			level++;
		}

		if (level == 3)
		{
			Initialize_Leve_3(a_board, size_y, size_x);
			print_little_kv(1, 1, size_lit, a_board);
			print_char(a_board);
			level++;
		}

		if (level == 5)
		{
			Initialize_Leve_4(a_board, size_y, size_x);
			print_little_kv(1, 1, size_lit, a_board);
			print_char(a_board);
			level++;
		}

	} while (code != Esc);

	GotoXY(0, 36);


}