#include<iostream>
#include <Windows.h>

using namespace std;

enum CellState { Empty, Deck, Miss, HitDeck };
enum ShipState { Destroyed, ShipHit, Safe };

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
HANDLE hStdIn = GetStdHandle(STD_INPUT_HANDLE);
//extern HANDLE hStdOut;
//extern HANDLE hStdIn;

void GotoXY(int X, int Y);


class GameBoardCell {
private:
	int _x, _y;         // координаты клетки
	CellState _state;   // состояние клетки
public:
	GameBoardCell(int x = 0, int y = 0, CellState state = Empty)
	{
		_x = x;
		_y = y;
		_state = state;
	}

	// функция устанавливает x-кординату клети
	void SetX(int x)
	{
		_x = x;
	}

	// функция устанавливает y-кординату клети
	void SetY(int y)
	{
		_y = y;
	}

	// функция устанавливает состояние клети
	void SetState(CellState state)
	{
		_state = state;
	}

	// функция возвращает состояние текуйщей клетки
	CellState GetState()
	{
		return _state;
	}

	// функция возвращает x текуйщей клетки
	int GetX()
	{
		return _x;
	}

	// функция возвращает y текуйщей клетки
	int GetY()
	{
		return _y;
	}

	// функция - проверка попадания в клетку
	bool TryHit(int x, int y)
	{
		return x == _x && y == _y && _state != HitDeck;
	}

	// функция печати одной клетки, в зависимости от ее состояния
	void Print_1()
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
	void Print_2()
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

class GameBoard;

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

	void Print_1();
	void Print_2();


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

int main(int argc, char* argv)
{
	GameBoard gameBoard, gameBoard2;
	gameBoard.Print_1();
	gameBoard2.Print_2();

	do {
		GotoXY(0, 11);
		cout << "Enter x coord: " << endl;
		int x;
		cin >> x;
		cout << "Enter y coord: " << endl;
		int y;
		cin >> y;
		system("cls");
		gameBoard.Shoot(x, y);
		gameBoard.Print_1();
		gameBoard2.Print_2();

	} while (!gameBoard.AllShipsDestroyed());
	return 0;
}


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

void GameBoard::Generate()
{
	
	for (int i = 0; i < _size; i++)
		for (int j = 0; j < _size; j++)
			_cells[i][j].SetState(Empty);
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

void GameBoard::GenerateRand()
{
	for (int i = 0; i < _size; i++)
		for (int j = 0; j < _size; j++)
			_cells[i][j].SetState(Empty);
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


void GameBoard::Print_1()
{
	for (int i = 0; i < _size; i++)
	{
		cout << "|";
		for (int j = 0; j < _size; j++)
		{
			_cells[i][j].Print_1();
			cout << "|";
		}
		cout << endl;
	}
}

void GameBoard::Print_2()
{
	GotoXY(30, 0);
	for (int i = 0; i < _size; i++)
	{
		cout << "|";
		for (int j = 0; j < _size; j++)
		{
			_cells[i][j].Print_2();

			cout << "|";
		}
		cout << endl;
		GotoXY(30, i+1);
	}
}


void GameBoard::Shoot(int x, int y)
{
	for (int i = 0; i < _shipsCount; i++)
		if (_ships[i].TryHit(x, y))
		{
			_ships[i].Shoot(*this, x, y);
			break;
		}
		else
		{
			_cells[y][x].SetState(Miss);
		}
}

bool GameBoard::AllShipsDestroyed()
{
	for (int i = 0; i < _shipsCount; i++)
		if (_ships[i].GetState() != Destroyed)
			return false;
	return true;   
}

void GotoXY(int X, int Y)
{
	COORD coord = { X, Y };
	SetConsoleCursorPosition(hStdOut, coord);
}
