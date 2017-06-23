#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include "Ship.h"

enum CellState { Empty, Deck, Miss, HitDeck };
enum ShipState { Destroyed, ShipHit, Safe };

class GameBoard {
private:
	static const int _size = 10;
	static const int _4DeckShipCount = 1;
	static const int _3DeckShipCount = 2;
	static const int _2DeckShipCount = 3;
	static const int _1DeckShipCount = 4;
	static const int _shipsCount = _4DeckShipCount + _3DeckShipCount + _2DeckShipCount + _1DeckShipCount;
	GameBoardCell _cells[_size][_size];
	Ship _ships[_shipsCount];

	void Generate();
public:
	GameBoard()
	{
		Generate();
	}
	~GameBoard() { }

	void SetState(int x, int y, CellState state)
	{
		_cells[y][x].SetState(state);
	}
	bool IsDeck(int x, int y)
	{
		return _cells[y][x].GetState() == Deck || _cells[y][x].GetState() == HitDeck;
	}
	void Print();
	int GetCount()
	{
		return _size * _size;
	}
	int GetSize()
	{
		return _size;
	}
	void Shoot(int x, int y);
	bool AllShipsDestroyed();
};

#endif // !GAMEBOARD_H
