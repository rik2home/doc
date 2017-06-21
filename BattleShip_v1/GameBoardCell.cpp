#include "GameBoardCell.h"
#include <iostream>

GameBoardCell::GameBoardCell() : GameBoardCell(0, 0, CellState::Empty) //delegate constructor
{
}

GameBoardCell::GameBoardCell(const int x, const int y, const CellState& state) : _x(x), _y(y), _state(state) // initialization list
{
}

void GameBoardCell::SetX(const int x)
{
	_x = x;
}

void GameBoardCell::SetY(const int y)
{
	_y = y;
}

void GameBoardCell::SetState(const CellState& state)
{
	_state = state;
}

const CellState& GameBoardCell::GetState() const
{
	return _state;
}

int GameBoardCell::GetX() const
{
	return _x;
}

int GameBoardCell::GetY() const
{
	return _y;
}

bool GameBoardCell::TryHit(const int x, const int y) const
{
	return x == _x && y == _y && _state != CellState::HitDeck;
}

void GameBoardCell::Print() const
{
	using namespace std;
	if (_state == CellState::Empty)
	{
		cout << ' ';
	}
	else if (_state == CellState::HitDeck)
	{
		cout << 'x';
	}
	else if (_state == CellState::Deck)
	{
		cout << 'd';
	}
	else
	{
		cout << '*';
	}
}
