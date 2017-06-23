#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

const int SIZE = 6;
int pole[SIZE][SIZE];
int c = 1;
bool Set(int x, int y)
{
	if (x < 0 || y < 0 || x >= SIZE || y >= SIZE || pole[y][x] != 0)
		return false;
	pole[y][x] = ++c;
	if (c == SIZE + SIZE)
		return true;
	if (Set(x + 2, y + 1) || Set(x - 2, y + 1) || Set(x + 1, y + 2) || Set(x - 1, y + 2) ||
		Set(x + 1, y - 2) || Set(x - 1, y - 2) || Set(x + 2, y - 1) || Set(x - 2, y - 1))
		return true;
	pole[y][x] = 0;
	--c;
	return false;
}

void main()
{
	Set(0, 0);

	for (int i = 0; i < SIZE; ++i)
		for (int j = 0; j < SIZE; ++j)
			 if (j == SIZE - 1)

				cout << pole[i][j] << '\n';
			else cout << pole[i][j] << ' ';
}
