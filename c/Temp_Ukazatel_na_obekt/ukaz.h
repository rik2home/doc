#ifndef __UKAZ_H__
#define __UKAZ_H__

#include <iostream>
using namespace std;

class _3D
{
private:
	double x, y, z;
public:
	_3D();
	_3D(double initX, double initY, double initZ);
	void Show()
	{
		cout << "x=" << x << " " << "y=" << y << " " << "z=" << z << endl;
	}
};
#endif // __UKAZ_H__