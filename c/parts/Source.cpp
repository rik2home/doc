#include <iostream>
#include <conio.h>
using namespace std;

class Int
{
private:
	int i;
public:
	Int() { i = 0; }
	Int(int ii) { i = ii; }
	void add_int(Int i2, Int i3)
	{
		i = i2.i + i3.i;
	}
	void display()
	{
		cout << "i = " << i << endl;
	}
};
int main()
{
	Int i2(20), i3(30);
	Int i1;
	i1.add_int(i2, i3);
	i1.display();
	cout << endl;

	_getch();
	return 0;
}