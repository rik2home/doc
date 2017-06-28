#include <iostream>
using namespace std;

class Flag
{
private:
	bool flag;
	friend Flag &operator !(Flag &f);
public:
	Flag(bool iF)
	{
		flag = iF;
	}
	void display()
	{
		if (flag)
		{
			cout << "\nTrue\n";
		}
		else
		{
			cout << "\nFalse\n";
		}
	}
};

Flag &operator !(Flag &f)
{
	f.flag = !f.flag;
	return f;
}

void main()
{
	Flag A(true);
	A.display();
	A = !A;
	A.display();
}