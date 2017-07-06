#include <iostream>

using namespace std;

class prim
{
private:
	int numb;
	static int stat_;
public:
	prim(int i)
	{
		numb = i;
	}
	static void func(int i, prim *p = 0)
	{
		if (p)
		{
			p->numb = i;
		}
		else
		{
			stat_ = i;
		}
	}
	static void show()
	{
		cout << "stat_= " << stat_ << endl;
	}

	void show2()
	{
		cout << "numb = " << numb << endl;
	}
};

int prim::stat_ = 8;

void main()
{
	prim::show();
	prim::func(10);
	prim obj(23);
	obj.show2();
	prim::func(20, &obj);
	obj.show2();

	obj.func(27, &obj);
	obj.show2();
}