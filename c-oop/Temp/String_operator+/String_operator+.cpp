#include <iostream>
#include <string.h>

using namespace std;

class string_
{
private:
	char *S;
	int len;
public:
	string_();
	string_(char *s);
	string_(const string_ &s);
	~string_()
	{
		delete[]S;
	}
	void Sort(string_ s[], int n);
	const char *GetStr()const
	{
		return S;
	}
	void SetStr()
	{
		if (S != NULL)
			delete[]S;
	}
};