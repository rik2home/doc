#include <iostream>
#include <time.h>

enum EMove { Up = 'w', Down = 's', Left = 'a', Right = 'd' };

// ќбъ€влени€ функции
void InitializeBoard(char[4][4]);
void PrintBoard(char[4][4]);
void LocateSpace(int&, int&, char[4][4]);
void Randomize(char[4][4]);
void Move(char[4][4], const EMove);

int main()
{
	char caaBoard[4][4];
	char kcaaInitial[4][4];
	InitializeBoard(caaBoard);
	Randomize(caaBoard);

	using namespace std;
	do
	{
		PrintBoard(caaBoard);
		cout << "w = UP, s = DOWN, a = LEFT, d = RIGHT" << endl;
		char cNextMove;
		cin >> cNextMove;
		EMove eNextMove = (EMove)cNextMove;
		Move(caaBoard, eNextMove);
		cout << endl;
	} while (true);
	return EXIT_SUCCESS;
}

void InitializeBoard(char caaBoard[4][4])
{
	const char kcaaInitial[4][4] =
	{
		{ '1', '2', '3', '4' },
		{ '5', '6', '7', '8' },
		{ '9', 'A', 'B', 'C' },
		{ 'D', 'E', 'F', ' ' }
	char

	for (int iRow = 0; iRow < 4; iRow++)
		for (int iCol = 0; iCol < 4; iCol++)
			caaBoard[iRow][iCol] = kcaaInitial[iRow][iCol];
}

void PrintBoard(char caaBoard[4][4])
{
	using namespace std;
	for (int iRow = 0; iRow < 4; iRow++)
	{
		for (int iCol = 0; iCol < 4; iCol++)
			cout << ' ' << caaBoard[iRow][iCol];
		cout << endl;
	}
}

void LocateSpace(int& irRow, int& irCol, char caaBoard[4][4])
{
	for (int iRow = 0; iRow < 4; iRow++)
		for (int iCol = 0; iCol < 4; iCol++)
			if (caaBoard[iRow][iCol] == ' ')
			{
				irRow = iRow;
				irCol = iCol;
			}
}

void Randomize(char caaBoard[4][4])
{
	using namespace std;
	srand((unsigned int)time(0));
	for (int iIndex = 0; iIndex < 1000000; iIndex++)
	{
		const int kiNextMove = (rand() % 4);
		switch (kiNextMove)
		{
		case 0:
		{
			Move(caaBoard, Up);
			break;
		}
		case 1:
		{
			Move(caaBoard, Down);
			break;
		}
		case 2:
		{
			Move(caaBoard, Left);
			break;
		}
		case 3:
		{
			Move(caaBoard, Right);
			break;
		}
		}
	}
}

void Move(char caaBoard[4][4], const EMove keMove)
{
	int iRowSpace;
	int iColSpace;
	LocateSpace(iRowSpace, iColSpace, caaBoard);
	int iRowMove(iRowSpace);
	int iColMove(iColSpace);
	switch (keMove)
	{
	case Up:
	{
		iRowMove = iRowSpace + 1;
		break;
	}
	case Down:
	{
		iRowMove = iRowSpace - 1;
		break;
	}
	case Left:
	{
		iColMove = iColSpace + 1;
		break;
	}
	case Right:
	{
		iColMove = iColSpace - 1;
		break;
	}
	}
	// провер€ем не вышла ли за предели игрогого пол€

	if (iRowMove >= 0 && iRowMove < 4 && iColMove >= 0 && iColMove < 4)
	{
		caaBoard[iRowSpace][iColSpace] = caaBoard[iRowMove][iColMove];
		caaBoard[iRowMove][iColMove] = ' ';
	}
}
