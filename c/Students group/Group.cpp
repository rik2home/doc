#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

#include <conio.h>
#include "String.h"
#include "Group.h"

Group::Group(const Group &g)
{
	Copy(g);
}

Group::~Group()
{
	if (student != nullptr) 
		delete[]student;
}

void Group::Copy(const Group &g)
{
	if (g.name.GetStr() != nullptr)
		name = g.name;

	count = g.count;

	delete[]student;
	student = count ? new Student[count] : nullptr;

	if (student != nullptr)
	{
		for (size_t i = 0; i < count; i++)
			student[i].Set(g.student[i]);
	}
}

Group & Group::operator=(const Group &g)
{
	Copy(g);
	return *this;
}

unsigned Group::ChooseStudent() const
{
	char n = 0;

	do
	{
		cout << "Enter the number of student (from 1 to " << count << ")\n\n";
		n = _getch();
	}
	while (n < '1' || n > '0' + count);

	return n - '0';
}

unsigned Group::ChooseStudAttr()
{
	char choice;

	cout << "Choose student attribute to change:\n"
			"1. Name\n"
			"2. Surname\n"
			"3. Gender\n"
			"4. Age\n"
			"5. Programming mark\n"
			"6. Phone number\n"
			"7. All information\n\n";
	do
	{
		choice = _getch();
	} while (choice < '1' || choice > '7');

	return choice - '0';
}

void Group::AddMem()
{
	if (count == 0)
	{
		count = 1;
		student = new Student[count];
	}
	else
	{
		auto *temp = new Student[count + 1];
		
		for (size_t i = 0; i < count; i++)
			temp[i].Set(student[i]);
		
		delete[]student;
		student = temp;

		count++;
	}
}

void Group::RemMem()
{
	/*if (count == 0)
		return;*/

	if (count == 1)
	{
		count = 0;
		delete[]student;
		student = nullptr;

		/*cout << "Last student has been deleted!\n\n;";*/
	}
	else
	{
		unsigned studNum = ChooseStudent() - 1;

		auto *temp = new Student[count - 1];
		for (unsigned i = 0; i < studNum; i++)
			temp[i].Set(student[i]);
		for (size_t i = studNum + 1; i < count; i++)
			temp[i - 1].Set(student[i]);

		delete[]student;
		student = temp;
		
		count--;

		/*cout << "Student N " << studNum + 1 << " has been successfully deleted!\n\n";*/
	}
}

void Group::AddStudent()
{
	AddMem();

	cout << "************Adding new student***************\n\n";
	
	cout << "Student N " << count << endl;
	student[count - 1].InputAll();

	cout << "*********************************************\n\n";
}

void Group::RemoveStudent()
{
	if (count == 0)
	{
		cout << "Group is empty!!!\n";
		return;
	}

	cout << "************Deleting a student***************\n\n";

	RemMem();

	student == nullptr ? cout << "Last student has been deleted!\n\n;" : cout << "Student has been successfully deleted!\n\n";

	cout << "*********************************************\n\n";
}

void Group::RemoveAllStudents()
{
	if (count == 0)
	{
		cout << "Group is empty!!!\n";
		return;
	}

	cout << "************Deleting all students************\n\n";

	count = 0;
	delete[]student;
	student = nullptr;

	cout << "Group of students has been deleted!\n\n";

	cout << "*********************************************\n\n";
}

void Group::ChangeStudent()
{
	if (count == 0)
	{
		cout << "Group is empty!!!\n";
		return;
	}

	cout << "***************Change a student**************\n\n";

	int studNum = ChooseStudent() - 1;

	cout << "Student N " << studNum + 1 << endl;
	student[studNum].Show();

	int attr = ChooseStudAttr();

	// Массив указателей на методы не изучили еще, поэтому обычный switch.
	switch (attr)
	{
	case 1:
		student[studNum].InputName();
		break;
	case 2:
		student[studNum].InputSurname();
		break;
	case 3:
		student[studNum].InputGender();
		break;
	case 4:
		student[studNum].InputAge();
		break;
	case 5:
		student[studNum].InputProg();
		break;
	case 6:
		student[studNum].InputPhone();
		break;
	case 7:
		student[studNum].InputAll();
		break;
	}

	cout << "\n\nInfo about student has successfully been changed!\n\n";

	cout << "\n\n*********************************************\n\n";
}

void Group::ShowStudent() const
{
	if (count == 0)
	{
		cout << "Group is empty!!!\n";
		return;
	}

	cout << "*****************Show a student**************\n\n";

	unsigned studNum = ChooseStudent() - 1;

	cout << "Student N " << studNum + 1 << endl;
	student[studNum].Show();

	cout << "*********************************************\n\n";
}

void Group::ShowAllStudents() const
{
	if (count == 0)
	{
		cout << "Group is empty!!!\n";
		return;
	}

	cout << "**************Show all students**************\n\n";

	for (size_t i = 0; i < count; i++)
	{
		cout << "Student N " << i + 1 << endl;
		student[i].Show();
	}

	cout << "*********************************************\n\n";
}

void Group::SaveToFile() const
{
	if (count == 0)
	{
		cout << "Group is empty!!!\n";
		return;
	}

	FILE *stream;

	if ((stream = fopen("Students group.dat", "wb")) == NULL)
	{
		cout << "Cannot open file for writing!\n\n";
		return;
	}

	// Название группы
	name.SaveToFile(stream);

	// Количество студентов в группе
	fwrite(&count, sizeof(count), 1, stream);

	// Студенты
	for (size_t i = 0; i < count; i++)
		student[i].SaveToFile(stream);

	fclose(stream);

	cout << "Saved successfully!\n\n";
}

void Group::LoadFromFile()
{
	FILE *stream;

	if ((stream = fopen("Students group.dat", "rb")) == NULL)
	{
		cout << "Cannot open file for reading!\n\n";
		return;
	}

	// Название группы
	name.LoadFromFile(stream);

	// Кол-во студентов в группе
	size_t newCount;
	fread(&newCount, sizeof(newCount), 1, stream);

	if (count != newCount)
	{
		delete[]student;
		student = new Student[newCount];
		count = newCount;
	}

	// Студенты
	for (size_t i = 0; i < count; i++)
		student[i].LoadFromFile(stream);

	fclose(stream);

	cout << "Loaded successfully!\n\n";
}

char* InputSearchCriteria()
{
	char *s = new char[50];

	cout << "Input search criteria: " << flush;
	cin.getline(s, 50);
	cout << endl;

	return s;
}

void Group::SearchStudent() const
{
	cout << "****************Search students**************\n\n";

	// Просим пользователя ввести критерий поиска и опускаем его книжнему регистру для удобства поиска.
	char search[50] = "\0";
	
	char *temp = new char[50];
	temp = ::InputSearchCriteria();
	strcpy(search, temp);
	delete[]temp;

	_strlwr(search);

	unsigned found = 0;

	for (size_t i = 0; i < count; i++)
	{
		if (student[i].Find(search))
		{
			cout << "Student N " << i + 1 << endl;
			student[i].Show();
			found++;
		}
	}

	cout << "\n" << found << " students have been found!\n\n";

	cout << "*********************************************\n\n";
}