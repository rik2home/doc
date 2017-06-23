#ifndef SHIP_H
#define SHIP_H

#include "GameBoardCell.h"

class Ship
{
private:
	GameBoardCell* _cells;
	ShipState _state;
	int _size;
public:
	Ship()
	{
		_cells = NULL;
		_size = 0;
	}

	void Create(GameBoard& gameBoard, int size, int x, int y, bool horizontal);
	~Ship();

	ShipState GetState();

	void Shoot(GameBoard& gameBoard, int x, int y);

	bool TryHit(int x, int y);
};

#endif // !SHIP_H
