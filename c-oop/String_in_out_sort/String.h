#ifndef STRING_H
#define STRING_H
#include <iostream>
#include <string.h>

class string_
{
private:
	char *S;
	int len;
public:
	string_();
	string_(char *s);
	string_(const string_ &s);
	~string_();
	void Sort(string_ s[], int n);
	const char *GetStr() const;
	void SetStr();
	void SetStr2(cahr *str);
};
#endif // !STRING_H
