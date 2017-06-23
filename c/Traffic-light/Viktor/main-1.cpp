#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <time.h>
using namespace std;

HANDLE hStdOut = GetStdHandle( STD_OUTPUT_HANDLE );
HANDLE hStdIn = GetStdHandle( STD_INPUT_HANDLE );
HANDLE hConsoleHandle = GetStdHandle( STD_OUTPUT_HANDLE );

enum class Choise : short
{
	NONE = 1,
	START,
	PAUSE,
	EXIT
};

enum class Color : short 
{
	RED = 1,
	YELLOW,
	GREEN
};

void ShowCursor( bool visible )
{
	CONSOLE_CURSOR_INFO cci = { sizeof( cci ), visible };
	SetConsoleCursorInfo( hStdOut, &cci );
}

void GotoXY( short X, short Y )
{
	COORD coord = { X, Y };
	SetConsoleCursorPosition( hStdOut, coord );
}

void Form( int size )
{
	const unsigned char brik = 176;

	system( "color 0F" );

	for (int x = 0; x < 2; x++)
	{
		for (int i = 0; i < size + 2; i++)
		{
			for (int j = 0; j <= size + 2; j++)
			{
				if (i == 0 || j == 0 || j == size + 2)
					cout << brik;
				else
					cout << " ";
			}
			cout << endl;
		}
	}

	for (int i = 0; i <= size + 2; i++)
	{
		for (int j = 0; j <= size + 2; j++)
		{
			if (i == 0 || i == size + 2 || j == 0 || j == size + 2)
				cout << brik;
			else
				cout << " ";
		}
		cout << endl;
	}

	GotoXY( 1, 30 );
}

void Print_Cls( int size )
{
	const unsigned char l_brik = 219;

	int y = 1;

	SetConsoleTextAttribute( hConsoleHandle, (WORD)((0 << 4) | 0) );

	GotoXY( 1, y );

	for (int i = 0; i <= size; i++)
	{
		for (int j = 0; j <= size; j++)
		{
			cout << l_brik;
		}
		y++;
		GotoXY( 1, y );
	}

	y = 7;
	GotoXY( 1, y );

	for (int i = 0; i <= size; i++)
	{
		for (int j = 0; j <= size; j++)
		{
			cout << l_brik;
		}
		y++;
		GotoXY( 1, y );
	}

	y = 13;
	GotoXY( 1, y );

	for (int i = 0; i <= size; i++)
	{
		for (int j = 0; j <= size; j++)
		{
			cout << l_brik;
		}
		y++;
		GotoXY( 1, y );
	}

	GotoXY( 1, 1 );  

}

void Print_Cls_Yellow( int size )
{
	const unsigned char l_brik = 219;

	int y = 7;

	SetConsoleTextAttribute( hConsoleHandle, (WORD)((0 << 4) | 0) );

	GotoXY( 1, 7 );

	for (int i = 0; i <= size; i++)
	{
		for (int j = 0; j <= size; j++)
		{
			cout << l_brik;
		}
		y++;
		GotoXY( 1, y );
	}
}

void Print_Red( int size )
{
	const unsigned char l_brik = 219;

	int x = 1;
	int y = 1;

	SetConsoleTextAttribute( hConsoleHandle, (WORD)((12 << 4) | 12) );        
	GotoXY( x, y );

	for (int i = 0; i <= size; i++)
	{
		for (int j = 0; j <= size; j++)
		{
			cout << l_brik;
		}
		y++;
		GotoXY( x, y );
	}
	SetConsoleTextAttribute( hConsoleHandle, (WORD)((0 << 4) | 15) ); GotoXY( x, y );
}

void Print_Yellow( int size )
{
	const unsigned char l_brik = 219;
	const unsigned long yellowBlinkingTime = 500ul;

	int x = 1;
	int y = 7;

	SetConsoleTextAttribute( hConsoleHandle, (WORD)((14 << 4) | 14) );
	GotoXY( x, y );

	for (int i = 0; i <= size; i++)
	{
		for (int j = 0; j <= size; j++)
		{
			cout << l_brik;
		}
		y++;
		GotoXY( x, y );
	}
	SetConsoleTextAttribute( hConsoleHandle, (WORD)((0 << 4) | 15) ); GotoXY( x, y );

	Sleep( yellowBlinkingTime );
	Print_Cls( size );
	Sleep( yellowBlinkingTime );
}

void Print_Green( int size )
{
	const unsigned char l_brik = 219;

	int x = 1;
	int y = 13;

	GotoXY( x, y );
	SetConsoleTextAttribute( hConsoleHandle, (WORD)((2 << 4) | 2) );
	GotoXY( x, y );

	for (int i = 0; i <= size; i++)
	{
		for (int j = 0; j <= size; j++)
		{
			cout << l_brik;
		}
		y++;
		GotoXY( x, y );
	}
	SetConsoleTextAttribute( hConsoleHandle, (WORD)((0 << 4) | 15) ); GotoXY( x, y );
}

Choise GetChoise()
{
	const int start = ( int )'s', pause = ( int )'p', exit = ( int )'e'; //explicit converersion better, but the best is to use static_cast< int >
	int key = 0; // always initialize variables at the declaration
	Choise result = Choise::NONE;

	while (_kbhit())
	{
		key = _getch();

		switch (key)
		{
		case start:
			result = Choise::START;
			break;
		case pause:
			result = Choise::PAUSE;
			break;
		case exit:
			result = Choise::EXIT;
			break;
		}
	}
	return result;
}

void StartMainLoop()
{
	const int size = 4; // if variable unmutable, you must declare it const;
	//size = 4;

	Choise game = Choise::NONE;
	bool isStop = false;

	const time_t redSeconds = 2;
	const time_t yellowSeconds = 4;
	const time_t greenSeconds = 3;

	time_t prevTime = time( nullptr );
	time_t currentTime = prevTime;
	time_t stoppedTime = prevTime;

	Color currentColor = Color::RED;

	bool isPaused = false;

	while (game != Choise::EXIT)
	{
		currentTime = time( nullptr );
		const time_t difference = currentTime - prevTime;

		game = GetChoise();
		if (game == Choise::START)
		{
			isPaused = false;
			prevTime += currentTime - stoppedTime;
		}
		if (game == Choise::PAUSE || isPaused)
		{
			stoppedTime = currentTime;
			isPaused = true;
		}
		else if (!isPaused)
		{
			if (difference < redSeconds)
			{
				if (currentColor == Color::GREEN)
				{
					Print_Cls( size );
					currentColor = Color::RED;
				}
				Print_Red( size );
			}
			else if (difference < yellowSeconds + redSeconds)
			{
				if (currentColor == Color::RED)
				{
					Print_Cls( size );
					currentColor = Color::YELLOW;
				}

				Print_Yellow( size );
				
			}
			else if (difference < greenSeconds + yellowSeconds + redSeconds)
			{
				if (currentColor == Color::YELLOW)
				{
					Print_Cls( size );
					currentColor = Color::GREEN;
				}
				Print_Green( size );
			}
			else
			{
				prevTime = currentTime;
			}
		}
	}
}

void main()
{
	const int size = 4;

	ShowCursor( false );

	Form( size );
	
	StartMainLoop();

	/*
	do
	{
		Print_Cls( size );
		Print_Red( size );
		game = GetChoise();

		if(game == Choise::PAUSE)
		{
			game = GetChoise();
			while(game != Choise::START && game != Choise::EXIT)
				game = GetChoise();
		}
		if (game == Choise::EXIT) break;

		Sleep( 2000 );

		Print_Cls( size );
		Print_Yellow( size );
		game = GetChoise();
		
		if (game == Choise::PAUSE)
		{
			game = GetChoise();
			while (game != Choise::START && game != Choise::EXIT)
				game = GetChoise();
		}
		if (game == Choise::EXIT) break;

		Print_Cls( size );
		Print_Green( size );
		game = GetChoise();
		
		if (game == Choise::PAUSE)
		{
			game = GetChoise();
			while (game != Choise::START && game != Choise::EXIT)
				game = GetChoise();
		}
		if (game == Choise::EXIT) break;

		Sleep( 3000 );
	} while (game != Choise::EXIT);

	*/
	system( "cls" );
}