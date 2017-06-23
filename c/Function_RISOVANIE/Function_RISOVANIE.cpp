#include <iostream>
using namespace std;

int EnterNumber()
{
	int value;
	cout << "Enter digit for print: ";
	cin >> value;
	return value;
}

void Kvadrat(int a)
{
	for (int i = 0; i <= a; i++)
	{
		for (int j = 0; j <= a; j++)
		{
			if (i == 0 || i == a || j == 0 || j == a)
				cout << "*";
			else
				cout << " ";
		}		
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i <= a; i++)
	{
		for (int j = 0; j <= a; j++)
		{
			if (i == 0 || i == a || j == 0 || j == a)
				cout << "*";
			else
				cout << "#";
		}
		cout << endl;
	}
	cout << endl;
}

void NeKvadrat(int a, int b)
{
	for (int i = 0; i <= a; i++)
	{
		for (int j = 0; j <= b; j++)
		{
			if (i == 0 || i == a || j == 0 || j == b)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i <= a; i++)
	{
		for (int j = 0; j <= b; j++)
		{
			if (i == 0 || i == a || j == 0 || j == b)
				cout << "*";
			else
				cout << "#";
		}
		cout << endl;
	}
	cout << endl;
}

//void Flag(int a)
//{
//	for (int i = 0; i <= a / 6; i++)
//	{
//		for (int j = 0; j <= a; j++)
//		{
//			if (i == 0 || i == a / 6 || j == 0 || j == a)
//				cout << "*";
//			else
//				cout << " ";
//		}
//		cout << endl;
//	}
//	for (int i = 0; i <= a / 6; i++)
//	{
//		for (int j = 0; j <= a; j++)
//		{
//			if (i == a / 6 || j == 0 || j == a)
//				cout << "*";
//			else
//				cout << "#";
//		}
//		cout << endl;
//	}
//
//}

void RavnobedrennijTreyg(int a)
{
	for (int i = 0; i <= a; i++)
	{
		for (int j = 0; j <= a * 2; j++)
		{
			if (i == a || j == a - i || j == i + a)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
	cout << endl;
	int counter = 1;

	for (int i = 0; i <= a; i++)
	{
		
		for (int j = 0; j <= a * 2; j++)
		{
			if (j > a - i && j < i + a && i < a)
				cout << "$";
			else 
				if (i == a || j == a - i || j == i + a)
				cout << "*";
			else
				cout << " ";

		}
		cout << endl;
	}
	cout << endl;

}

void Elka(int a)
{
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

}

void main()
{
	int a, b;
	a = EnterNumber();
	Kvadrat(a);
	b = EnterNumber();
	NeKvadrat(a, b);
	//Flag(a);
	RavnobedrennijTreyg(a);
	Elka(a);
}