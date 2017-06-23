#include <iostream>

using namespace std;

class ClassName
{
private:
public:
	ClassName() { cout << "ClassNema\n"; }
	ClassName(const ClassName &obj) { cout << "Copy ClassName\n"; }
	~ClassName() { cout << "~ClassName\n"; }
};

void f(ClassName obj1) { cout << "Function f\n"; }
ClassName r()
{
	ClassName obj2;
	cout << "Function r\n";
	return obj2;
}

void main()
{
	ClassName c1;
	ClassName c2 = c1;
	ClassName a;
	f(a);
	r();
}

