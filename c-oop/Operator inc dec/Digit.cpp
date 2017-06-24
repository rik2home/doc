#include <iostream>
using namespace std;
class Digit
{
private:
	int N;
public:
	Digit(int n)
	{
		N = n;
	}
	void Display()
	{
		cout << "N: " << N << endl;
	}
	Digit& operator -- ()
	{
		N /= 10;
		return *this;
	}
};

void main()
{
	Digit Z(100);
	cout << "Z: ";
	Z.Display();
	Digit Pref = --Z;
	cout << "Pref: ";
	Pref.Display();
	cout << "--Z: ";
	Z.Display();
	Digit Postf = Z--;
	cout << "Postf: ";
	Postf.Display();
	cout << "Z--:";
	Z.Display();
}	