#include "Console.h"

Console::Console(){}
Console::~Console(){}

const Console * Console::GetInstance()
{
	static Console console;
	return &console;
}

void Console::GotoXY(const int X, const int Y) const
{
	COORD coord = { X, Y };
	SetConsoleCursorPosition(hStdOut, coord);
}
