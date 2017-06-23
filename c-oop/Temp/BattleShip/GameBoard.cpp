#include "GameBoard.h"
#include "GameBoardCell.h"
#include <iostream>

void GameBoard::Generate()
{
	for (int i = 0; i < _size; i++)
		for (int j = 0; j < _size; j++)
			_cells[i][j].SetState(Empty);
	int idx = 0;
	_ships[idx++].Create(*this, 4, 0, 0, true);

	_ships[idx++].Create(*this, 3, 0, 2, false);
	_ships[idx++].Create(*this, 3, 8, 1, false);

	_ships[idx++].Create(*this, 2, 3, 9, true);
	_ships[idx++].Create(*this, 2, 2, 6, true);
	_ships[idx++].Create(*this, 2, 6, 5, true);

	_ships[idx++].Create(*this, 1, 4, 2, true);
	_ships[idx++].Create(*this, 1, 8, 8, true);
	_ships[idx++].Create(*this, 1, 0, 8, true);
	_ships[idx++].Create(*this, 1, 6, 0, true);
}

void GameBoard::Print()
{
	for (int i = 0; i < _size; i++)
	{
		cout << "|";
		for (int j = 0; j < _size; j++)
		{
			_cells[i][j].Print();
			cout << "|";
		}
		cout << endl;
	}
}

void GameBoard::Shoot(int x, int y)
{
	for (int i = 0; i < _shipsCount; i++)
		if (_ships[i].TryHit(x, y))
		{
			_ships[i].Shoot(*this, x, y);
			break;
		}
		else
		{
			_cells[y][x].SetState(Miss);
		}
}

bool GameBoard::AllShipsDestroyed()
{
	for (int i = 0; i < _shipsCount; i++)
		if (_ships[i].GetState() != Destroyed)
			return false;
	return true;
}
