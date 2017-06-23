#include <iostream>
using namespace std;

#include "StaticMas.h"

Point2::Point2(double iX, double iY)
{
	x = iX;
	y = iY;
	cout << "With arguments\n";
}

void Point2::Show()
{
	cout << x << " " << y << endl;
}
