#include "Ship.h"
#include "GameBoard.h"

Ship::Ship() : _cells(nullptr), _size(0) // initialization list
{
}

Ship::~Ship()
{
	delete []_cells;
}


void Ship::Create(GameBoard& gameBoard, const int size, const int x, const int y, const bool horizontal)
{
	_size = size;
	_cells = new GameBoardCell[size];
	for (int i = 0; i < size; ++i)
	{
		if (horizontal) 
		{
			_cells[i].SetX(x + i);
			_cells[i].SetY(y);
			gameBoard.SetState(x + i, y, CellState::Deck);
		}
		else 
		{
			_cells[i].SetX(x);
			_cells[i].SetY(y + i);
			gameBoard.SetState(x, y + i, CellState::Deck);
		}
	}
}


void Ship::Shoot(GameBoard& gameBoard, const int x, const int y)
{
	for (int i = 0; i < _size; ++i)
		if (_cells[i].TryHit(x, y))
		{
			_cells[i].SetState(CellState::HitDeck);
			gameBoard.SetState(x, y, CellState::HitDeck);
			break;
		}
	if (GetState() == ShipState::Destroyed)
	{
		for (int i = 0; i < _size; ++i)
		{
			int localX = _cells[i].GetX();
			int localY = _cells[i].GetY();
			if (localX - 1 >= 0 && localY - 1 >= 0 && !gameBoard.IsDeck(localX - 1, localY - 1))
			{
				gameBoard.SetState(localX - 1, localY - 1, CellState::Miss);
			}
			if (localX - 1 >= 0 && !gameBoard.IsDeck(localX - 1, localY))
			{
				gameBoard.SetState(localX - 1, localY, CellState::Miss);
			}
			if (localX - 1 >= 0 && localY + 1 < gameBoard.GetSize() && !gameBoard.IsDeck(localX - 1, localY + 1))
			{
				gameBoard.SetState(localX - 1, localY + 1, CellState::Miss);
			}

			if (localY - 1 >= 0 && !gameBoard.IsDeck(localX, localY - 1))
			{
				gameBoard.SetState(localX, localY - 1, CellState::Miss);
			}
			if (localY + 1 < gameBoard.GetSize() && !gameBoard.IsDeck(localX, localY + 1))
			{
				gameBoard.SetState(localX, localY + 1, CellState::Miss);
			}

			if (localX + 1 < gameBoard.GetSize() && localY - 1 >= 0 && !gameBoard.IsDeck(localX + 1, localY - 1))
			{
				gameBoard.SetState(localX + 1, localY - 1, CellState::Miss);
			}
			if (localX + 1 < gameBoard.GetSize() && !gameBoard.IsDeck(localX + 1, localY))
			{
				gameBoard.SetState(localX + 1, localY, CellState::Miss);
			}
			if (localX + 1 < gameBoard.GetSize() && localY + 1 < gameBoard.GetSize() && !gameBoard.IsDeck(localX + 1, localY + 1))
			{
				gameBoard.SetState(localX + 1, _cells[i].GetY() + 1, CellState::Miss);
			}
		}
	}
}

bool Ship::TryHit(const int x, const int y)
{
	bool result = false;
	for (int i = 0; i < _size; ++i)
	{
		if (_cells[i].TryHit(x, y))
		{
			result = true;
		}
	}
	return result;
}

ShipState Ship::GetState()
{
	int hitCount = 0;
	for (int i = 0; i < _size; ++i)
	{
		if (_cells[i].GetState() == CellState::HitDeck)
		{
			++hitCount;
		}
	}

	if (hitCount == 0)
	{
		_state = ShipState::Safe;
	}
	else if (hitCount < _size)
	{
		_state = ShipState::ShipHit;
	}
	else
	{
		_state = ShipState::Destroyed;
	}

	return _state;
}

