#include "String.h"

string_::string_()
{
	S = NULL;
	len = 0;
}

string_::string_(char * s)
{
	len = strlen(s);
	S = new char[len + 1];
	strcpy(S, s);
}
