#pragma once
#include "Enums.h"

class GameBoardCell {
private:
	int _x, _y;
	CellState _state;
public:
	GameBoardCell();
	GameBoardCell(const int x, const int y, const CellState& state);

	void SetX(const int x);

	void SetY(const int y);

	void SetState(const CellState& state);

	const CellState& GetState() const;

	int GetX() const;

	int GetY() const;

	bool TryHit(const int x, const int y) const;

	void Print() const;

};
