#include <iostream>
using namespace std;
#include "ukaz.h"
#include "Point.h"
#include "StaticMas.h"

void main()
{
	//_3D A(1, 2, 3);
	//A.Show();
	//_3D *PA = &A;
	//PA->Show();

	//Point A;
	//A.Show();
	//cout << "++++++++++++++++++++++++++\n";

	//Point *PA;
	//PA = new Point;
	//if (!PA) exit(0);
	//PA->Show();
	//cout << "++++++++++++++++++++++++++\n";

	//Point *PB;
	//PB = new Point[10];
	//if (!PB) exit(0);
	//for (int i = 0; i < 10; i++)
	//{
	//	PB[i].Show();
	//}

	//delete PA;
	//delete[]PB;


	//Point A(2, 3);
	//A.Show();
	//cout << "++++++++++++++++++++++++++\n";

	//Point *PA;
	//PA = new Point(4, 5);
	//if (!PA) exit(0);
	//PA->Show();

	//Point *PB;
	//PB = new Point[10];
	//if (!PB) exit(0);
	//for (int i = 0; i < 10; i++)
	//{
	//	PB[i].Show();
	//}

	//delete PA;
	//delete[]PB;


	Point2 AR[2] = { Point2(1,11), Point2(2,22) };
	for (int i = 0; i < 2; i++)
	{
		AR[i].Show();
	}
}
