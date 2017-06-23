#ifndef STRING_H
#define STRING_H
#include <iostream>
//using namespace std;
class String
{
private:
	char *s;
	size_t lenght;
public:
	~String();
	String();
	String(const int size);
	String(const String &user);
	char *Input();
	void Print();
};
#endif // !STRING_H
