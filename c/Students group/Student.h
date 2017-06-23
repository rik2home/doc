#define _CRT_SECURE_NO_WARNINGS

#include "String.h"

#ifndef __STUDENT_H__
#define __STUDENT_H__

class Student
{
private:
	String name;
	String surname;
	bool gender;
	unsigned age;
	unsigned prog;
	String phoneNum;
public:
	// Конструктор по умолчанию
	// Единственная причина наличия конструктора по умолчанию - нужен для дальнейшего создания массива студентов.
	Student() : name(50), surname(50), phoneNum(20)
	{
		age = prog = 0;
		gender = false;
	}

	// Конструктор (обязательными явл. первые 4 параметра: имя, фамилия, пол, возраст).
	Student(const char *name, const char *surname, bool gender, unsigned age, unsigned prog = 0, const char *phone = '\0')
	{
		Set(name, surname, gender, age, prog, phone);
	}

	// Конcтруктор копирования
	Student(const Student &s);

	// Деструктор для вложенных объектов освободит выделенные ресурсы.

	// Гетеры
	const char* GetName() const { return name.GetStr(); }
	const char* GetSurname() const { return surname.GetStr(); }
	unsigned GetAge() const { return age; }
	bool GetGender() const { return gender; }
	unsigned GetProg() const { return prog; }
	const char* GetPhoneNum() const { return phoneNum.GetStr(); }

	// Сетеры
	void SetName(const char* name) { this->name = name; }
	void SetSurname(const char* surname) { this->surname = surname; }
	void SetPhone(const char* phoneNum) { this->phoneNum = phoneNum; }
	void SetGender(bool gender) { this->gender = gender; }
	void SetAge(unsigned age) { this->age = age; }
	void SetProg(unsigned prog) { this->prog = prog; }
	void Set(const Student &s);
	void Set(const char* name, const char* surname, bool gender, unsigned age, unsigned prog, const char* phone);

	// Копирование
	void Copy(const Student &s);
	Student & operator=(const Student &s);

	bool IsGood()const { return prog >= 10; }

	// Ввод/вывод информации о студенте.
	void Show();
	void InputName();
	void InputSurname();
	void InputGender();
	void InputAge();
	void InputProg();
	void InputPhone();
	void InputAll();

	// Поиск студента
	bool Find(const char *s);

	// Запись/чтение информации о студенте в/из файл(-а).
	void SaveToFile(FILE *stream) const;
	void LoadFromFile(FILE *stream);
};

#endif

