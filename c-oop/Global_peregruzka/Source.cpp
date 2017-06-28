#include <iostream>
using namespace std;

class Point
{
private:
	int X, Y;
public:
	Point(int iX, int iY)
	{
		X = iX;
		Y = iY;
	}
	void Show()
	{
		cout << "X = " << X << " Y = " << Y << endl;
	}
	Point &operator+(int d)
	{
		Point P(0, 0);
		P.X = X + d;
		P.Y = Y + d;
		return P;
	}
	int GetX() const
	{
		return X;
	}
	int GetY() const
	{
		return Y;
	}
	void SetX(int iX)
	{
		X = iX;
	}
	void SetY(int iY)
	{
		Y = iY;
	}
};

Point &operator+(int d, Point &Z)
{
	Point P(0, 0);
	P.SetX(d + Z.GetX());
	P.SetY(d + Z.GetY());
	return P;
}

void main()
{
	Point A(3, 2);
	A.Show();
	Point B = A + 5;
	B.Show();
	Point C = 2 + A;
	C.Show();
}