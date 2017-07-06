#include <iostream>
using namespace std;

class Singleton
{
private:
	static Singleton *s;
	int k;
	Singleton(int i)
	{
		k = i;
	}
public:
	static Singleton *getReference()
	{
		return s;
	}

	int getValue()
	{
		return k;
	}

	void SetValue(int i)
	{
		k = i;
	}
};

Singleton *Singleton::s = new Singleton(3);

void main()
{
	Singleton *p = Singleton::getReference();

	cout << p->getValue() << endl;
	p->SetValue(p->getValue() + 5);
	cout << p->getValue() << endl;
}