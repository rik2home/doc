#pragma once
#include "Enums.h"
#include "GameBoardCell.h"

class GameBoard;

class Ship
{
private:
	GameBoardCell* _cells;
	ShipState _state;
	int _size;
public:
	Ship();
	~Ship();

	void Create(GameBoard& gameBoard, const int size, const int x, const int y, const bool horizontal);

	ShipState GetState();

	void Shoot(GameBoard& gameBoard, const int x, const int y);

	bool TryHit(const int x, const int y);
};
