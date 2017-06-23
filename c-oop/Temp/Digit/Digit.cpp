#include <iostream>
using namespace std;

class Digit {
private:
	int dig;
public:
	Digit() {
		dig = 0;
	}
	Digit(int iDig) {
		dig = iDig;
	}
	void Show() {
		cout << dig << endl;
	}
	Digit operator+ (const Digit &N)
	{
		Digit temp;
		temp.dig = dig + N.dig;
		return temp;
	}
	Digit operator- (const Digit &N)
	{
		Digit temp;
		temp.dig = dig - N.dig;
		return temp;
	}
	Digit operator* (const Digit &N)
	{
		Digit temp;
		temp.dig = dig * N.dig;
		return temp;
	}
	Digit operator% (const Digit &N)
	{
		Digit temp;
		temp.dig = dig % N.dig;
		return temp;
	}
};

void main()
{
	Digit A(8), B(3);
	Digit C;
	A.Show();
	B.Show();
	C.Show();
	C = A + B;
	C.Show();
	C = A - B;
	C.Show();
	C = A*B;
	C.Show();
	C = A % B;
	C.Show();
}