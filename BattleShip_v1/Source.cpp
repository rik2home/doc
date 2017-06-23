#include<iostream>
#include <Windows.h>

#include "GameBoardCell.h"
#include "Ship.h"
#include "GameBoard.h"
#include "Console.h"
#include "Constants.h"

using namespace std;

int main(int argc, char* argv)
{
	GameBoard gameBoard, gameBoard2;
	gameBoard.Print_1();
	gameBoard2.Print_2();

	do {
		Console::GetInstance()->GotoXY(0, 10);
		cout << "Enter x coord: " << endl;
		int x;
		cin >> x;
		cout << "Enter y coord: " << endl;
		int y;
		cin >> y;
		system("cls");
		gameBoard.Shoot(x, y);
		gameBoard.Print_1();
		gameBoard2.Print_2();

	} while (!gameBoard.AllShipsDestroyed());
	return 0;
}

