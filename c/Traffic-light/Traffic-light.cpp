#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
HANDLE hStdIn = GetStdHandle(STD_INPUT_HANDLE);
HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

void ShowCursor(bool visible)
{
	CONSOLE_CURSOR_INFO cci = { sizeof(cci), visible };
	SetConsoleCursorInfo(hStdOut, &cci);
}

void GotoXY(int X, int Y)
{
	COORD coord = { X, Y };
	SetConsoleCursorPosition(hStdOut, coord);
}

void Form(int size)
{
	const unsigned char brik = 176;

	system("color 0F");

	for (int x = 0; x < 2; x++)
	{
		for (int i = 0; i < size + 2; i++)
		{
			for (int j = 0; j <= size + 2; j++)
			{
				if (i == 0 || j == 0 || j == size + 2)
					cout << brik;
				else
					cout << " ";
			}
			cout << endl;
		}
	}

	for (int i = 0; i <= size + 2; i++)
	{
		for (int j = 0; j <= size + 2; j++)
		{
			if (i == 0 || i == size + 2 || j == 0 || j == size + 2)
				cout << brik;
			else
				cout << " ";
		}
		cout << endl;
	}

	GotoXY(1, 30);
}

void Print_Cls(int size)
{
	const unsigned char l_brik = 219;

	int y = 1;

	SetConsoleTextAttribute(hConsoleHandle, (WORD)((0 << 4) | 0));

	GotoXY(1, y);

	for (int i = 0; i <= size; i++)
	{
		for (int j = 0; j <= size; j++)
		{
			cout << l_brik;
		}
		y++;
		GotoXY(1, y);
	}

	y = 7;
	GotoXY(1, y);

	for (int i = 0; i <= size; i++)
	{
		for (int j = 0; j <= size; j++)
		{
			cout << l_brik;
		}
		y++;
		GotoXY(1, y);
	}

	y = 13;
	GotoXY(1, y);

	for (int i = 0; i <= size; i++)
	{
		for (int j = 0; j <= size; j++)
		{
			cout << l_brik;
		}
		y++;
		GotoXY(1, y);
	}

	GotoXY(1, 1);  // это уберает баг с красным кдадратом

}

void Print_Cls_Yellow(int size)
{
	const unsigned char l_brik = 219;

	int y = 7;

	SetConsoleTextAttribute(hConsoleHandle, (WORD)((0 << 4) | 0));

	GotoXY(1, 7);

	for (int i = 0; i <= size; i++)
	{
		for (int j = 0; j <= size; j++)
		{
			cout << l_brik;
		}
		y++;
		GotoXY(1, y);
	}
}

void Print_Red(int size)
{
	const unsigned char l_brik = 219;

	int x = 1;
	int y = 1;

	SetConsoleTextAttribute(hConsoleHandle, (WORD)((12 << 4) | 12));	GotoXY(x, y);

	for (int i = 0; i <= size; i++)
	{
		for (int j = 0; j <= size; j++)
		{
			cout << l_brik;
		}
		y++;
		GotoXY(x, y);
	}
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((0 << 4) | 15));	GotoXY(x, y);
}

void Print_Yellow(int size)
{
	const unsigned char l_brik = 219;

	int x = 1;
	int y = 7;
	int a = 0;
	
	do
	{
		GotoXY(x, 7);
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((14 << 4) | 14));
		GotoXY(x, 7);

		for (int i = 0; i <= size; i++)
		{
			for (int j = 0; j <= size; j++)
			{
				cout << l_brik;
			}
			y++;
			GotoXY(x, y);
		}
		Sleep(500);
		Print_Cls_Yellow(size);
		Sleep(500);
		y = 7;
		a++;
	} while (a <= 4);

	SetConsoleTextAttribute(hConsoleHandle, (WORD)((0 << 4) | 15));	GotoXY(x, y);
}

void Print_Green(int size)
{
	const unsigned char l_brik = 219;

	int x = 1;
	int y = 13;

	GotoXY(x, y);
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((2 << 4) | 2));
	GotoXY(x, y);

	for (int i = 0; i <= size; i++)
	{
		for (int j = 0; j <= size; j++)
		{
			cout << l_brik;
		}
		y++;
		GotoXY(x, y);
	}
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((0 << 4) | 15));	GotoXY(x, y);
}

bool Choise()
{
	const int start = 's', pause = 'p', exit = 'e';
	int key;

		while (_kbhit())
		{
			key = _getch();
			
				switch (key)
				{
				case start:
					return true;
					break;

				case pause:
					
					break;
				case exit:
					return false;
					break;
				}
		}
	return true;
}


void main()
{
	int size;

	size = 4;
	bool game = true;
	
	ShowCursor(false);

	Form(size);

	do
	{

		Print_Cls(size);
		Print_Red(size);
		game = Choise();
		if (!game) break;

		Sleep(2000);

		Print_Cls(size);
		Print_Yellow(size);
		game = Choise();
		if (!game) break;

		Print_Cls(size);
		Print_Green(size);
		game = Choise();
		if (!game) break;

		Sleep(3000);
	} while (game);

	system("cls");
}