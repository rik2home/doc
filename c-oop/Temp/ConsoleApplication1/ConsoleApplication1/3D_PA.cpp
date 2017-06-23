#include <iostream>
using namespace std;

class _3D
{
private:
	double x, y, z;
public:
	_3D();
	_3D(double initX, double initY, double initZ);
	void Show() { cout << x << " " << y << " " << z << endl; }
};

_3D::_3D(double initX, double initY, double initZ)
{
	x = initX;
	y = initY;
	z = initZ;
	cout << "\nWith argumenst!!\n";
}

_3D::_3D()
{
	x = y = z = 0;
	cout << "\nNo Atgiments!!!\n";
}

void main()
{
	_3D A;
	_3D B(1, 2, 3);
	_3D *PA = &A;
	PA->Show();
}