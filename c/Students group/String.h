#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

#include <stdlib.h>

#ifndef __STRING_H__
#define __STRING_H__

class String
{
private:
	char *str;
	size_t len;
public:
	// ����������� �� ���������
	String()
	{
		len = 0;
		str = nullptr;
	}

	// ������������
	String(size_t len)
	{
		this->len = len;
		str = new char[len + 1];
		str[len] = '\0';
	}

	String(char *str)
	{
		len = strlen(str);
		this->str = new char[len + 1];
		strcpy_s(this->str, len + 1, str);
	}

	// ����������� �����������
	String(const String &s);

	// ����������
	~String();

	// ������
	char* GetStr() { return str; }
	const char* GetStr() const { return str; }
	size_t GetLen() const { return len; }

	// �����
	void SetStr(const char *s);
	void SetLen(size_t newLen);

	bool IsEmpty() const { return !len; }

	// ����/�����
	void Input();
	void Show() const;

	// ������ ��� ������ �� ��������
	void CopyStr(const char *src);
	void CopyStr(const String &s);
	void CatStr(const char *src);
	void CatStr(const String &s);
	bool FindStr(const char *s);
	bool FindStr(const String &s);
	void SetStr(const char c);
	void CmpStr(const char *s) const;
	void CmpStr(const String &s) const;

	// ���������� �������� 
	String & operator=(const char *s);
	String & operator=(const String &s);
	String & operator+=(const char *s);
	String & operator+=(const String &s);
	bool operator==(const char* s);
	bool operator==(const String &s);
	bool operator<(const char* s);
	bool operator<(const String &s);
	bool operator>(const char* s);
	bool operator>(const String &s);

	// ������ ��� (����-)��������� ������ ��� ������.
	void AllocateMem(const char* src);
	void AllocateMem(size_t newLen);
	void ReallocateMem(const char *src);
	void ReallocateMem(size_t newLen);

	// ������/������ ����� � ����/�� �����.
	void SaveToFile(FILE *stream) const;
	void LoadFromFile(FILE *stream);
};

#endif
