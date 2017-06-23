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
	~string_() {
		delete[] S;
	}
	void Sort(string_ s[], int n);
	const char *GetStr() const { return S; }
	void SetStr();
	void SetStr2(char *str);
};

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

string_::string_(const string_ &s)
{
	len = s.len;
	S = new char[len + 1];
	strcpy(S, s.S);
}

void string_::SetStr()
{
	if (S != NULL)
		delete[]S;
	char a[256];
	cin.getline(a, 256);
	len = strlen(a) + 1;
	S = new char[len];
	strcpy(S, a);
}

void string_::SetStr2(char *str)
{
	if (S != NULL)
		delete[]S;
	len = strlen(str) + 1;
	S = new char[len];
	strcpy(S, str);
}

void string_::Sort(string_ s[], int n)
{
	string temp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (strcmp(s[j].S, s[j - 1].S) < 0)
			{
				temp.SetStr2(s[j].S);
			}
		}
	}
}

