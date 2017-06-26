#include <iostream>
using namespace std;

class MyPoint
{
private:
	int X;
	int Y;
public:
	MyPoint()
	{
		X = 0;
		Y = 0;
	}
	void operator () (int x, int y)
	{
		X = x;
		Y = y;
	}
	void SHow()
	{
		cout << X << " " << Y << endl;
	}
};

void main()
{
	MyPoint P;
	P.SHow();
	P(2, 3);
	P.SHow();
}