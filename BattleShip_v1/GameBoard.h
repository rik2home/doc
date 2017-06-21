#pragma once
#include "GameBoardCell.h"
#include "Ship.h"

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
	void GenerateRand();

public:
	GameBoard();

	void SetState(const int x, const int y, const CellState& state);

	bool IsDeck(const int x, const int y);

	void Print_1();
	void Print_2();


	int GetCount() const;

	int GetSize() const;
	

	void Shoot(const int x, const int y);

	bool AllShipsDestroyed();
};
