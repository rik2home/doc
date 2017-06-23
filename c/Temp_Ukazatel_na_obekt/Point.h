#ifndef __Point_H__
#define __Point_H__

#include <iostream>
using namespace std;

class Point
{
private:
	double x, y;
public:
	Point(double iX = 1, double iY = 2);
	void Show();
};
#endif // !__Point_H__
