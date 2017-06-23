#include <iostream>
#include <conio.h>
using namespace std;

const char ESC = 27;
const double TOT = 0.5;

class tollBooth
{
private:
	unsigned int cars;
	double cash;
public:
	tollBooth() : cars(0), cash(0.0) { }
	void payingCar()
	{
		cars++;
		cash += TOT;
	}
	void nopayCar()
	{
		cars++;
	}
	void display() const
	{
		cout << "\nCars = " << cars
			<< ", cash = " << cash
			<< endl;
	}
};

int main()
{
	tollBooth toll1;
	char ch;

	cout << "\nPress 0 for each non-pauing car,"
		<< "\n      1 for each paying car,"
		<< "\n      Esc to exit the program.\n";
	do
	{
		ch = _getch();
		if (ch == '0')
			toll1.nopayCar();
		if (ch == '1')
			toll1.payingCar();
	} while (ch != ESC);
	toll1.display();
	_getch();
	return 0;
}