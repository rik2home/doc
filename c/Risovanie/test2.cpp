#include <iostream>
using namespace std;

void main()
{
	int a;

	cout << "Enter the lenght of leg: ";
	cin >> a;

	// Треугольник |/
	for (int y = 1; y < a; y++)
	{
		for (int x = 1; x < a; x++)
			if (y == 1 || x == 1 || y == a -  x)
				cout << "*";
			else
				cout << " ";
		cout << endl;
	}
	cout << endl;

	// Треугольник \|
	for (int y = 1; y <= a; y++)
	{
		for (int x = 1; x <= a; x++)
			if (y == 1 || x == a || y == x)
				cout << "*";
			else
				cout << " ";
		cout << endl;
	}
	cout << endl;

	// Треугольник |\.
	for (int y = 1; y <= a; y++)
	{
		for (int x = 1; x <= a; x++)
			if (x == 1 || y == a || y == x)
				cout << "*";
			else
				cout << " ";
		cout << endl;
	}
	cout << endl;

	// Треугольник /|
	for (int y = 1; y <= a; y++)
	{
		for (int x = 1; x <= a; x++)
			if (x == a || y == a || y == a + 1 - x)
				cout << "*";
			else
				cout << " ";
		cout << endl;
	}
	cout << endl;

	// Треугольник \/
	cout << "Enter the width: ";
	cin >> a;

	for (int y = 1; y <= a / 2; y++)
	{
		for (int x = 1; x < a; x++)
			if (y == 1 || y == x || y == a - x)
				cout << "*";
			else
				cout << " ";
		cout << endl;
	}
	cout << endl;

	// Треугольник /\.
	for (int y = 0; y <= a / 2; y++)
	{
		for (int x = 0 ; x <= a; x++)
			if (y == a / 2 || y == a / 2 - x || y == x - a / 2)
				cout << "*";
			else
				cout << " ";
		cout << endl;
	}
	cout << endl;

	// ромб
	cout << "Enter the long diagonal: ";
	cin >> a;

	for (int y = 0; y <= a; y++)
	{
		for (int x = 0; x <= a; x++)
			if (y == a / 2 - x || y == x - a / 2 || y == a / 2 + x || y == a * 1.5 - x)
				cout << "*";
			else
				cout << " ";
		cout << endl;
	}
	cout << endl;

	// песочные часы
	cout << "Enter the vidth: ";
	cin >> a;

	for (int y = 0; y <= a; y++)
	{
		for (int x = 1; x < a; x++)
			if (y == 1 || y == x || y == a - x || y == a)
				cout << "*";
			else
				cout << " ";
		cout << endl;
	}
	cout << endl;
	

	// Домик
	for (int y = 0; y <= a * 2; y++)
	{
		for (int x = 0; x <= a * 2; x++)
			if (y == a || y == a - x || y == x - a || (x == 0 && y > a) || (x == 2 * a && y > a) ||
				y == 2 * a || ((y == 1.2 * a || y == 1.4 * a || y == 1.6 * a) && (x > 0.4 * a && x < 1.6 * a)) ||
				((x == 0.4 * a || x == a || x == 1.6 * a) && (y > 1.2 * a && y < 1.6 * a)))
				cout << "*";
			else
				cout << " ";
		cout << endl;
	}
	cout << endl;

	// Ель
	for (int y = 0; y <= a * 3; y++)
	{
		for (int x = 0; x <= a * 2; x++)
			if (y == a - x || y == x - a ||							// вершина
				((y == a) && (x < 0.8 * a || x > 1.2 * a)) ||		// 1 линия низа елки
				((y == 1.8 * a) && (x < 0.8 * a || x > 1.2 * a)) ||	// 2 линия низа елки
				((y == 2.6 * a) && (x < 0.8 * a || x > 1.2 * a)) ||	// 3 линия низа елки
				((y == a * 3) && (x > 0.8 * a && x < 1.2 * a)) ||	// 4 линия низа
				((y == 1.8 * a - x) && (x < 0.8 * a)) ||			// 2 ряд наклон с лева
				((y == 2.6 * a - x) && (x < 0.8 * a)) ||			// 3 ряд наклон с лева
				((y == -0.2 * a + x) && (x > 1.2 * a)) ||			// 2 ряд наклон с права
				((y == 0.6 * a + x) && (x > 1.2 * a)) ||			// 3 ряд наклон с права
				((x == 0.8 * a || x == 1.2 * a) && (y >= 2.6 * a)))	// боковые стойки ножки
				cout << "*";
			else
				cout << " ";
		cout << endl;
	}
	cout << endl;

	// Ель спит
	for (int y = 0; y <= a * 2; y++)
	{
		for (int x = 0; x <= a * 4; x++)
			if (y == -3 * a + x || y == 5 * a - x ||										// вершина
				((x == a || x == 2 * a || x == 3 * a) && (y <= 0.8 * a || y >= 1.2 * a)) ||	// 1,2,3 линия низа
				((x == 0) && (y >= 0.8 * a && y <= 1.2 * a)) ||								// 4 линия низа
				((y == 0.8 * a || y == 1.2 * a) && (x <= a)) ||								// боковые стойки ножки
				((y == -a + x || y == -2 * a + x) && (y <= 0.8 * a)) ||						// "\ \"
				((y == 3 * a - x || y == 4 * a - x) && (y >= 1.2 * a)))						// "/ /"
				cout << "*";
			else
				cout << " ";
		cout << endl;
	}
	cout << endl;

}