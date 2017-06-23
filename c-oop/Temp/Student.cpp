#include "Student.h"
#include <iostream>
using namespace std;
Student::Student()
{
	ID = 0;
	name = "";
	GPA = 0;
	gender = ' ';
}
Student::Student(int ID, string name, double GPA, char gender)
{
	this->ID = ID;
	this->name = name;
	this->GPA = GPA;
	this->gender = gender;
}

void Student::SetStudent(int ID, string name, double GPA, char gender)
{
	this->ID = ID;
	this->name = name;
	this->GPA = GPA;
	this->gender = gender;
}

int Student::getID()
{
	return ID;
}

string Student::getName()
{
	return name;
}

double Student::getGPA()
{
	return GPA;
}

char Student::getGender()
{
	return gender;
}

void Student::print()
{
	cout << "ID : " << ID << endl;
	cout << "Name : " << name << endl;
	cout << "GPA : " << GPA << endl;
	cout << "Gender : " << gender << endl;
}



