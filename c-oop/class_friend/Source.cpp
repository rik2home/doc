#include <iostream>
using namespace std;

class Banana;

class Apple
{
private:
public:
	void F_apple(Banana obj);
};

class Banana
{
private:
	int x, y;
public:
	Banana()
	{
		x = y = 123;
	}
	friend Apple;
};

void Apple::F_apple(Banana obj)
{
	cout << obj.x << endl;
	cout << obj.y << endl;
}

void main()
{
	Banana ob;
	Apple ap;
	ap.F_apple(ob);
}