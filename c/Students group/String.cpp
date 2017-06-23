#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "String.h"

String operator+(const String &str, const char *s)
{
	String string(str.GetLen() + strlen(s) + 1);

	strcpy(string.GetStr(), str.GetStr());
	strcat(string.GetStr(), s);

	return string;
}

String operator+(const char *s, const String &str)
{
	String string(str.GetLen() + strlen(s) + 1);

	strcpy(string.GetStr(), s);
	strcat(string.GetStr(), str.GetStr());

	return string;
}

String operator+(const String &s1, const String &s2)
{
	String string(s1.GetLen() + s2.GetLen() + 1);

	strcpy(string.GetStr(), s1.GetStr());
	strcat(string.GetStr(), s2.GetStr());

	return string;
}

String::String(const String &s)
{
	len = s.len;
	str = len ? new char[len + 1] : nullptr;
	if (str != nullptr)
		strcpy(str, s.str);
}

String::~String()
{
	if (str != nullptr) delete[]str;
}

void String::SetStr(const char *str)
{
	CopyStr(str);
}

void String::SetLen(size_t newLen)
{
	AllocateMem(newLen);
}

void String::Input()
{
	size_t newLen;

	cout << "Enter the size of the string: \n" << flush;
	cin >> newLen;

	ReallocateMem(newLen);

	if (str != nullptr)
	{
		cin.ignore(1);
		cin.getline(str, newLen);
	}
}

void String::Show() const
{
	if (str != nullptr)
		cout << str << endl;
}

void String::CopyStr(const char *src)
{
	str != nullptr ? ReallocateMem(src) : AllocateMem(src);

	if (str != nullptr)
		strcpy(str, src);
}

void String::CopyStr(const String &s)
{
	CopyStr(s.str);
}

void String::CatStr(const char *src)
{
	if (str != nullptr)
	{
		char *temp = new char[len + 1];
		strcpy(temp, str);

		delete[]str;

		len += strlen(src);
		str = new char[len + 1];
		strcpy(str, temp);
		delete[]temp;

		strcat(str, src);
	}
	else
	{
		AllocateMem(src);
		
		if(str != nullptr)
			strcpy(str, src);
	}
}

void String::CatStr(const String &s)
{
	CatStr(s.str);
}

bool String::FindStr(const char *s)
{
	if (str != nullptr)
	{
		char* temp = new char[len + 1];
		strcpy(temp, str);
		_strlwr(temp);

		if (strstr(temp, s) != nullptr)
		{
			delete[]temp;
			return true;
		}

		delete[]temp;
	}

	return false;
}

bool String::FindStr(const String &s)
{
	return FindStr(s.str);
}

void String::SetStr(const char c)
{
	if (str != nullptr)
		_strset(str, c);
}

void String::CmpStr(const char *s) const
{
	if (str != nullptr)
	{
		if (strcmp(str, s) == 0)
			cout << "Strings are the same.\n";
		else if (strcmp(str, s) < 0)
			cout << "String " << str << " is less then " << s << endl;
		else if (strcmp(str, s) > 0)
			cout << "String " << str << " is bigger then " << s << endl;
	}
}

void String::CmpStr(const String &s) const
{
	CmpStr(s.str);
}

String & String::operator=(const char *s)
{
	CopyStr(s);
	return *this;
}

String & String::operator=(const String &s)
{
	CopyStr(s);
	return *this;
}

String & String::operator+=(const char *s)
{
	CatStr(s);
	return *this;
}

String & String::operator+=(const String &s)
{
	CatStr(s);
	return *this;
}

bool String::operator==(const char* s)
{
	return (str != nullptr) ? strcmp(str, s) == 0 : false;
}

bool String::operator==(const String &s)
{
	return operator==(s.str);
}

bool String::operator<(const char* s)
{
	return (str != nullptr) ? strcmp(str, s) < 0 : false;
}

bool String::operator<(const String &s)
{
	return operator<(s.str);
}

bool String::operator>(const char* s)
{
	return (str != nullptr) ? strcmp(str, s) > 0 : false;
}

bool String::operator>(const String &s)
{
	return operator>(s.str);
}

void String::AllocateMem(const char* src)
{
	AllocateMem(strlen(src));
}

void String::AllocateMem(size_t newLen)
{
	delete[]str;

	len = newLen;
	str = new char[len + 1];
}

void String::ReallocateMem(const char *src)
{
	size_t newLen = strlen(src);
	ReallocateMem(newLen);
}

void String::ReallocateMem(size_t newLen)
{
	if (len != newLen)
	{
		delete[]str;
		str = new char[newLen + 1];
		len = newLen;
	}
}

void String::SaveToFile(FILE *stream) const
{
	if (str != nullptr)
	{
		fwrite(&len, sizeof(len), 1, stream);
		fwrite(str, sizeof(char), len, stream);
	}
}

void String::LoadFromFile(FILE *stream)
{
	size_t newLen = 0;
	fread(&newLen, sizeof(newLen), 1, stream);
	
	str != nullptr ? ReallocateMem(newLen) : AllocateMem(newLen);

	fread(str, sizeof(char), len, stream);
	str[len] = '\0';
}
