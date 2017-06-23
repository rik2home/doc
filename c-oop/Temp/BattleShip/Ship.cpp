#include "Ship.h"


void Ship::Create(GameBoard& gameBoard, int size, int x, int y, bool horizontal)
{
	_size = size;
	_cells = new GameBoardCell[size];
	for (int i = 0; i < size; i++)
	{
		if (horizontal) {
			_cells[i].SetX(x + i);
			_cells[i].SetY(y);
			gameBoard.SetState(x + i, y, Deck);
		}
		else {
			_cells[i].SetX(x);
			_cells[i].SetY(y + i);
			gameBoard.SetState(x, y + i, Deck);
		}
	}
}

Ship::~Ship()
{
	if (_size)
		delete _cells;
}

ShipState Ship::GetState()
{
	int hitCount = 0;
	for (int i = 0; i < _size; i++)
		if (_cells[i].GetState() == HitDeck)
			hitCount++;

	if (hitCount == 0)
		_state = Safe;
	else if (hitCount < _size)
		_state = ShipHit;
	else
		_state = Destroyed;

	return _state;
}


void Ship::Shoot(GameBoard& gameBoard, int x, int y)
{
	for (int i = 0; i < _size; i++)
		if (_cells[i].TryHit(x, y))
		{
			_cells[i].SetState(HitDeck);
			gameBoard.SetState(x, y, HitDeck);
			break;
		}
	if (GetState() == Destroyed)
	{
		for (int i = 0; i < _size; i++)
		{
			int localX = _cells[i].GetX();
			int localY = _cells[i].GetY();
			if (localX - 1 >= 0 && localY - 1 >= 0 && !gameBoard.IsDeck(localX - 1, localY - 1))
				gameBoard.SetState(localX - 1, localY - 1, Miss);
			if (localX - 1 >= 0 && !gameBoard.IsDeck(localX - 1, localY))
				gameBoard.SetState(localX - 1, localY, Miss);
			if (localX - 1 >= 0 && localY + 1 < gameBoard.GetSize() && !gameBoard.IsDeck(localX - 1, localY + 1))
				gameBoard.SetState(localX - 1, localY + 1, Miss);

			if (localY - 1 >= 0 && !gameBoard.IsDeck(localX, localY - 1))
				gameBoard.SetState(localX, localY - 1, Miss);
			if (localY + 1 < gameBoard.GetSize() && !gameBoard.IsDeck(localX, localY + 1))
				gameBoard.SetState(localX, localY + 1, Miss);

			if (localX + 1 < gameBoard.GetSize() && localY - 1 >= 0 && !gameBoard.IsDeck(localX + 1, localY - 1))
				gameBoard.SetState(localX + 1, localY - 1, Miss);
			if (localX + 1 < gameBoard.GetSize() && !gameBoard.IsDeck(localX + 1, localY))
				gameBoard.SetState(localX + 1, localY, Miss);
			if (localX + 1 < gameBoard.GetSize() && localY + 1 < gameBoard.GetSize() && !gameBoard.IsDeck(localX + 1, localY + 1))
				gameBoard.SetState(localX + 1, _cells[i].GetY() + 1, Miss);
		}
	}
}

bool Ship::TryHit(int x, int y)
{
	for (int i = 0; i < _size; i++)
		if (_cells[i].TryHit(x, y))
			return true;
	return false;
}
