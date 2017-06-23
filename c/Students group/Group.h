#define _CRT_SECURE_NO_WARNINGS

#include "Student.h"
#include "String.h"

#ifndef __GROUP_H__
#define __GROUP_H__

class Group
{
private:
	String name;
	Student *student;
	size_t count;
public:
	// Конструктор по умолчанию
	Group() : name(50)
	{
		count = 0;
		student = nullptr;
	}

	// Конструктор
	Group(size_t count)
	{
		this->count = count;
		student = new Student[this->count];
	}

	// Конструктор копирования
	Group(const Group &g);

	// Деструктор
	~Group();

	// Гетеры
	String GetGroupName() const { return name; }
	size_t GetCount() const { return count; }
	Student & GetStudent(unsigned index) { return student[index]; }
		 
	// Сетеры
	void SetGroupName(const char* name) { this->name = name; }
	void SetCount(size_t count) { this->count = count; }

	// Копирование
	void Copy(const Group &g);
	Group & operator=(const Group &g);

	// Выбор студента по индексу
	unsigned ChooseStudent() const;

	// Выбор характеристики студента по индексу
	static unsigned ChooseStudAttr();

	// Выделение памяти под студентов
	void AddMem();
	void RemMem();

	// Добавить/удалить студента
	void AddStudent();
	void RemoveStudent();
	void RemoveAllStudents();

	// Изменить инфо о студенте
	void ChangeStudent();

	// Показать инфо о студенте/студентах
	void ShowStudent() const;
	void ShowAllStudents() const;

	// Запись/чтение группы студентов в/из файл(-а)
	void SaveToFile() const;
	void LoadFromFile();

	// Поиск студентов
	void SearchStudent() const;
};

#endif

