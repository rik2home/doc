#include "String.h"

String::~String()
{
	free(s);
}

String::String()
{
	s = (char *)malloc(81);
	lenght = 81;
	s[80] = '\0';
}
