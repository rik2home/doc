#include <iostream>
using namespace std;

class rect
{
private:
	int Width, Height;
	char Symb;
	friend void friend_put(rect *r, char s);
public:
	rect(int wi, int hi, char sy)
	{
		Width = wi;
		Height = hi;
		Symb = sy;
	}
	void Print()
	{
		cout << "\n\n";
		for (int i = 0; i < Height; ++i)
		{
			for (int j = 0; j < Width; ++j)
			{
				cout << Symb;
			}
			cout << "\n\n";
		}
		cout << "\n\n";
	}
};

void friend_put(rect *r, char s)
{
	r->Symb = s;
}

void main()
{
	rect A(5, 3, 'A');
	rect B(3, 5, 'B');
	A.Print();
	B.Print();
	friend_put(&A, 'a');
	friend_put(&B, 'b');
	A.Print();
	B.Print();
}