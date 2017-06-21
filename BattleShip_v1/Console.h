#pragma once

#include <Windows.h>

class Console
{
private: 
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	HANDLE hStdIn = GetStdHandle(STD_INPUT_HANDLE);

	Console();
	~Console(); // cant create obj
public:
	static const Console* GetInstance();

	void GotoXY(const int X, const int Y) const;
};