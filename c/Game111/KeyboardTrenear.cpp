#include <iostream>
#include <time.h>
#include <conio.h>
#include <Windows.h>
#include "ConsoleLib.h"

using namespace std;

int sum_mistake = 0;

int get_char_down2(int step, int sum_step, int sum_win, int speed)
{
	const int Esc = 27;
	int code;

	int x = rand() % 60 + 2;
	int key = 0;
	int counter = 0;
	
	char az = char('a' + rand() % ('z' - 'a'));

	ShowCursor(false);
	for (int i = 0; i < sum_step; i++)
	{ 

		GotoXY(x, step);							
		if (key == Esc) break;																
		cout << az << flush;
		Sleep(1000 - speed);
		cout << "\b ";
		while (_kbhit())
		{
			key = _getch();
			if (key != az) ++sum_mistake;

			GotoXY(2, sum_step + 3);
			cout << "\tMISTAKES: " << sum_mistake << endl;
		}
		
		if (key == Esc) break;
		if (sum_mistake == 3) break;
		
		++step;

		if (key == az) ++counter;
		if (key == az) break;
	}	
	return counter;
}

void main()
{
	srand((unsigned)time(0));

	int step = 0, sum_step = 15, sum_games = 30;
	int win = 0, sum_win = 0, speed = 0, life = 3;
	const int Esc = 27;
	int code;

	for (int i = 0; i < sum_games; i++)
	{
		GotoXY(2, sum_step + 1);
		cout << "\tOnly 3 life or 3 mistake!!!\n";
		cout << "\tLIFE: " << life << endl;
		cout << "\tMISTAKES: " << sum_mistake << endl;
		cout << "\tSCORE: " << sum_win << endl;
		cout << "\tSpeed: " << speed / 100;

		win = get_char_down2(step, sum_step, sum_win, speed);

		sum_win += win;
		speed = (i + 1) * 100;
		if (speed > 800) speed = 800;

		if (win == 0) life--;

		if (life == 0 || sum_mistake == 3)
		{
			GotoXY(2, sum_step + 2);
			cout << "\tLIFE: " << life << endl;
			break;
		}

		
	}
	GotoXY(2, sum_step + 7);
	cout << "\t\tGAME OVER!!!"<< endl << endl;
}