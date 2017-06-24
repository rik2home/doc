#include <iostream>
using namespace std;

class Pair
{
private:
	int N;
	double NN;
public:
	Pair(int n, double nn)
	{
		N = n;
		NN = nn;
	}
	void Print()
	{
		cout << "N: " << N << " NN: " << NN << endl;
	}
	Pair &operator -- ()
	{
		N /= 10;
		NN /= 10;
		return *this;
	}
	Pair &operator -- (int k)
	{
		Pair temp(0, 0.0);
		temp.N = N + k;
		temp.NN = NN + k;
		N /= 10;
		NN /= 10;
		return temp;
	}
};

void main()
{
	Pair Z(10, 20.2);
	cout << "Z\n";
	Z.Print();
	Pair Pref = --Z;
	cout << "Pref\n";

}