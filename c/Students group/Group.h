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
	// ����������� �� ���������
	Group() : name(50)
	{
		count = 0;
		student = nullptr;
	}

	// �����������
	Group(size_t count)
	{
		this->count = count;
		student = new Student[this->count];
	}

	// ����������� �����������
	Group(const Group &g);

	// ����������
	~Group();

	// ������
	String GetGroupName() const { return name; }
	size_t GetCount() const { return count; }
	Student & GetStudent(unsigned index) { return student[index]; }
		 
	// ������
	void SetGroupName(const char* name) { this->name = name; }
	void SetCount(size_t count) { this->count = count; }

	// �����������
	void Copy(const Group &g);
	Group & operator=(const Group &g);

	// ����� �������� �� �������
	unsigned ChooseStudent() const;

	// ����� �������������� �������� �� �������
	static unsigned ChooseStudAttr();

	// ��������� ������ ��� ���������
	void AddMem();
	void RemMem();

	// ��������/������� ��������
	void AddStudent();
	void RemoveStudent();
	void RemoveAllStudents();

	// �������� ���� � ��������
	void ChangeStudent();

	// �������� ���� � ��������/���������
	void ShowStudent() const;
	void ShowAllStudents() const;

	// ������/������ ������ ��������� �/�� ����(-�)
	void SaveToFile() const;
	void LoadFromFile();

	// ����� ���������
	void SearchStudent() const;
};

#endif

