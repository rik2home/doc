#include <iostream>
#include "_3D.h"

using namespace std;

_3D::_3D(double iX, double iY, double iZ)
{
	x = iX;
	y = iY;
	z = iZ;
}

_3D::_3D()
{
	x = y = z = 0;
}

void _3D::Show()
{
	cout << "x = " << x << " y = " << y << " z = " << z << endl;
}

void main()
{
	_3D A(1, 2, 3);
	A.Show();
}
