#include <iostream>
using namespace std;
#include "ukaz.h"

_3D::_3D(double initX, double initY, double initZ)
{
	x = initX;
	y = initY;
	z = initZ;
	cout << "With arguments\n";
}

_3D::_3D()
{
	x = y = z = 0;
	cout << "No arguments\n";
}


