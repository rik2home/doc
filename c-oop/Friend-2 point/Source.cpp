#include <iostream>
using namespace std;

class line_;

class point_
{
private:
	float x, y;
public:
	point_(float xn = 0, float yn = 0)
	{
		x = xn;
		y = yn;
	}
	friend float uclon(point_, line_);
};

class line_
{
private:
	float A, B, C;
public:
	line_(float a, float b, float c)
	{
		A = a;
		B = b;
		C = c;
	}
	friend float uclon(point_, line_);
};

float uclon(point_ p, line_ l)
{
	return l.A * p.x + l.B * p.y + l.C;
}
void main()
{
	point_ P(16.0, 12.3);
	line_ L(10.2, -34.5, 24.0);
	cout << "\nResult" << uclon(P, L) << endl;

}