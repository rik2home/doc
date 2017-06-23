#include <iostream>
using namespace std;
#include "Point.h"

////Point::Point()
//{
//	x = y = 0;
//	cout << "No arguments\n";
//}

Point::Point(double iX, double iY)
{
	x = iX;
	y = iY;
}

void Point::Show()
{
	cout << "x=" << x << " " << "y=" << y << endl;
}
