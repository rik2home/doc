#include <iostream>
using namespace std;

#include "_3D.h"

_3D::_3D()
{
	x = y = z = 0;
	cout << "NO\n";
}

_3D::_3D(double initX, double initY, double initZ)
{
	x = initX;
	y = initY;
	z = initZ;
	cout << "\nWith arguments\n";
}
