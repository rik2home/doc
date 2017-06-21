#include "GameBoard.h"
#include "Console.h"
#include "Constants.h"
#include <iostream>

using namespace std;

void GameBoard::Generate()
{

	for (int i = 0; i < _size; ++i)
	{
		for (int j = 0; j < _size; ++j)
		{
			_cells[i][j].SetState(CellState::Empty);
		}
	}
	int idx = 0;
	_ships[idx++].Create(*this, shipSize4, 0, 0, true);

	_ships[idx++].Create(*this, shipSize3, 0, 2, false);
	_ships[idx++].Create(*this, shipSize3, 8, 1, false);

	_ships[idx++].Create(*this, shipSize2, 3, 9, true);
	_ships[idx++].Create(*this, shipSize2, 2, 6, true);
	_ships[idx++].Create(*this, shipSize2, 6, 5, true);

	_ships[idx++].Create(*this, shipSize1, 4, 2, true);
	_ships[idx++].Create(*this, shipSize1, 8, 8, true);
	_ships[idx++].Create(*this, shipSize1, 0, 8, true);
	_ships[idx++].Create(*this, shipSize1, 6, 0, true);
}

void GameBoard::GenerateRand()
{
	for (int i = 0; i < _size; ++i)
	{
		for (int j = 0; j < _size; ++j)
		{
			_cells[i][j].SetState(CellState::Empty);
		}
	}
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

GameBoard::GameBoard()
{
	Generate();
}

void GameBoard::SetState(const int x, const int y, const CellState& state)
{
	_cells[y][x].SetState(state);
}

bool GameBoard::IsDeck(int x, int y)
{
	return _cells[y][x].GetState() == CellState::Deck || _cells[y][x].GetState() == CellState::HitDeck;
}


void GameBoard::Print_1()
{
	for (int i = 0; i < _size; ++i)
	{
		cout << "|";
		for (int j = 0; j < _size; ++j)
		{
			_cells[i][j].Print();
			cout << "|";
		}
		cout << endl;
	}
}

void GameBoard::Print_2()
{
	Console::GetInstance()->GotoXY(30, 0);
	for (int i = 0; i < _size; ++i)
	{
		cout << "|";
		for (int j = 0; j < _size; ++j)
		{
			_cells[i][j].Print();

			cout << "|";
		}
		cout << endl;
		Console::GetInstance()->GotoXY(30, i + 1);
	}
}

int GameBoard::GetCount() const
{
	return _size * _size;
}

int GameBoard::GetSize() const
{
	return _size;
}

void GameBoard::Shoot(const int x, const int y)
{
	for (int i = 0; i < _shipsCount; ++i)
	{
		if (_ships[i].TryHit(x, y))
		{
			_ships[i].Shoot(*this, x, y);
			break;
		}
		else
		{
			_cells[y][x].SetState(CellState::Miss);
		}
	}
}

bool GameBoard::AllShipsDestroyed()
{
	bool result = true;
	for (int i = 0; i < _shipsCount; ++i)
	{
		if (_ships[i].GetState() != ShipState::Destroyed)
		{
			result = false;
		}
	}
	return result;
}
