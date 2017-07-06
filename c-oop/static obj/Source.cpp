#include <iostream>
#include <string.h>

using namespace std;

class object_
{
private:
	char *str;
public:
	static int num_obj;
	object_(char *s)
	{
		str = new char[strlen(s) + 1];
		strcpy(str, s);
		cout << "Create: " << str << endl;
		num_obj++;
	}
	~object_()
	{
		cout << "Destroy " << str << endl;
		delete str;
		num_obj--;
	}
};

int object_::num_obj = 0;

object_ ob1("First global obj.");
object_ ob2("Secong global obj.");

void f(char *str)
{
	object_ s(str);
	cout << "Count of objects - " << object_::num_obj << endl;
	cout << "Worked function f()" << endl;
}

void main()
{
	cout << "Count of obj: " << object_::num_obj << endl;
	object_ O("Obj. in main().");
	cout << "Count of obj: " << object_::num_obj << endl;

	f("Local obj.");
	f("Another local obj.");

	cout << "Before finish main() cont of obj: " << object_::num_obj << endl;
}