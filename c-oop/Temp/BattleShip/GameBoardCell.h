#ifndef GAMEBOARDCELL_H
#define GAMEBOARDCELL_H

#include <iostream>
#include "GameBoard.h"

class GameBoardCell {
private:
	int _x, _y;
	CellState _state;
public:
	GameBoardCell(int x = 0, int y = 0, CellState state = Empty)
	{
		_x = x;
		_y = y;
		_state = state;
	}
	void SetX(int x)
	{
		_x = x;
	}
	void SetY(int y)
	{
		_y = y;
	}
	void SetState(CellState state)
	{
		_state = state;
	}
	CellState GetState()
	{
		return _state;
	}
	int GetX()
	{
		return _x;
	}
	int GetY()
	{
		return _y;
	}
	bool TryHit(int x, int y)
	{
		return x == _x && y == _y && _state != HitDeck;
	}
	void Print()
	{
		if (_state == Empty)
			cout << ' ';
		else if (_state == HitDeck)
			cout << 'x';
		else if (_state == Deck)
			cout << 'd';
		else
			cout << '*';
	}
};


#endif // !GAMEBOARDCELL_H
