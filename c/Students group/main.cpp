#include <iostream>
using namespace std;

#include <conio.h>
#include "Group.h"
#include "Student.h"
#include "String.h"
#include "Menu.h"

void main()
{
	const int Esc = 27;
	const int Enter = 13;

	auto *group = new Group;

	int key = 0;

	do
	{
		key = Menu();

		switch (key)
		{
		case 1:
			group->AddStudent();
			break;
		case 2:
			group->RemoveStudent();
			break;
		case 3:
			group->RemoveAllStudents();
			break;
		case 4:
			group->ChangeStudent();
			break;
		case 5:
			group->ShowStudent();
			break;
		case 6:
			group->ShowAllStudents();
			break;
		case 7:
			group->SaveToFile();
			break;
		case 8:
			group->LoadFromFile();
			break;
		case 9:
			group->SearchStudent();
			break;
		}
		
		cout << "Press Enter to continue";
		while (_getch() != Enter);

		system("cls");
	} 
	while (key != Esc);

	delete group;
}