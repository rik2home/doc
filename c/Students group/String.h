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
	// Конструктор по умолчанию
	String()
	{
		len = 0;
		str = nullptr;
	}

	// Конструкторы
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

	// Конструктор копирования
	String(const String &s);

	// Деструктор
	~String();

	// Гетеры
	char* GetStr() { return str; }
	const char* GetStr() const { return str; }
	size_t GetLen() const { return len; }

	// Сетер
	void SetStr(const char *s);
	void SetLen(size_t newLen);

	bool IsEmpty() const { return !len; }

	// Ввод/Вывод
	void Input();
	void Show() const;

	// Методы для работы со строками
	void CopyStr(const char *src);
	void CopyStr(const String &s);
	void CatStr(const char *src);
	void CatStr(const String &s);
	bool FindStr(const char *s);
	bool FindStr(const String &s);
	void SetStr(const char c);
	void CmpStr(const char *s) const;
	void CmpStr(const String &s) const;

	// Перегрузка операций 
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

	// Методы для (пере-)выделения памяти под строку.
	void AllocateMem(const char* src);
	void AllocateMem(size_t newLen);
	void ReallocateMem(const char *src);
	void ReallocateMem(size_t newLen);

	// Чтение/запись строк в файл/из файла.
	void SaveToFile(FILE *stream) const;
	void LoadFromFile(FILE *stream);
};

#endif
