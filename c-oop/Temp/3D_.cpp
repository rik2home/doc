#include <iostream>
using namespace std;

class Point
{
private:
	double x, y;
public:
	Point()
	{
		x = y = 0;
		cout << "No arguments\n";
	}
	void Show()
	{
		cout << x << " " << y << endl;
	}
};

void main()
{
	Point A;
	A.Show();
	Point *PA;
	PA = new Point;
	if (!PA) exit(0);
	PA->Show();
	cout << "**************" << endl;
	Point *PB;
	PB = new Point[10];
	if (!PB) exit(0);
	for (int i = 0; i < 10; i++)
	{
		PB[i].Show();
	}

	delete []PB;
	delete PA;
}