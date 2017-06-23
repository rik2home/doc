#ifndef __STRING_H__
#define __STRING_H__

#include <iostream>
#include <stdlib.h>
using namespace std;

class String
{
private:
	char *str;
	size_t len;
public:
	String()
	{
		str = nullptr;
		len = 0;
	}

	String(size_t len)
	{
		this->len = len;
		str = new char[len + 1];
		str[len] = '\0';
	}
};
#endif // !__String_H__