#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

#include "Student.h"
#include "String.h"

Student::Student(const Student &s)
{
	Set(s);
}

void Student::Set(const Student &s)
{
	Set(s.name.GetStr(), s.surname.GetStr(), s.gender, s.age, s.prog, s.phoneNum.GetStr());
}

void Student::Set(const char* name, const char* surname, bool gender, unsigned age, unsigned prog, const char* phone)
{
	this->name = name;
	this->surname = surname;
	this->age = age;
	this->gender = gender;
	this->prog = prog;
	this->phoneNum = phone;
}

void Student::Copy(const Student &s)
{
	Set(s);
}

Student & Student::operator=(const Student &s)
{
	Set(s);
	return *this;
}

void Student::Show()
{
	cout << "Name: " << name.GetStr();
	cout << "\nSurname: " << surname.GetStr();
	cout << "\nAge: " << age;
	cout << "\nGender: ";
	gender ? cout << "male" : cout << "female";
	cout << "\nC++ mark: " << prog;
	cout << "\nPhone number: " << phoneNum.GetStr() << endl << endl;
}

void Student::InputName()
{
	auto *s = new char[50];

	cout << "Name: " << flush;
	cin.getline(s, 50);

	SetName(s);

	delete[]s;
}

void Student::InputSurname()
{
	auto *s = new char[50];

	cout << "Surname: " << flush;
	cin.getline(s, 50);

	SetSurname(s);

	delete[]s;
}

void Student::InputGender()
{
	cout << "Gender (0 - female; 1 - male): " << flush;
	cin >> gender;
}

void Student::InputAge()
{
	cout << "Age: " << flush;
	cin >> age;
}

void Student::InputProg()
{
	cout << "C++ mark: " << flush;
	cin >> prog;
}

void Student::InputPhone()
{
	auto *s = new char[20];

	cout << "Phone number: " << flush;
	cin.ignore(1);
	cin.getline(s, 20);

	SetPhone(s);

	delete[]s;
}

void Student::InputAll()
{
	InputName();
	InputSurname();
	InputGender();
	InputAge();
	InputProg();
	InputPhone();
	cout << endl;
}

bool Student::Find(const char *s)
{
	char tmpGender[7] = "\0";
	gender ? sprintf(tmpGender, "%s", "male") : sprintf(tmpGender, "%s", "female");
	
	char tmpAge[4] = "\0";
	sprintf(tmpAge, "%u", age);
	
	char tmpProg[3] = "\0";
	sprintf(tmpProg, "%u", prog);

	return (name.FindStr(s) || surname.FindStr(s) || phoneNum.FindStr(s) ||
			strstr(tmpGender, s) != NULL || strstr(tmpAge, s) != NULL || strstr(tmpProg, s) != NULL);
}

void Student::SaveToFile(FILE *stream) const
{
	name.SaveToFile(stream);
	surname.SaveToFile(stream);
	phoneNum.SaveToFile(stream);

	fwrite(&age, sizeof(age), 1, stream);
	fwrite(&gender, sizeof(gender), 1, stream);
	fwrite(&prog, sizeof(prog), 1, stream);
}

void Student::LoadFromFile(FILE *stream)
{
	name.LoadFromFile(stream);
	surname.LoadFromFile(stream);
	phoneNum.LoadFromFile(stream);

	fread(&age, sizeof(age), 1, stream);
	fread(&gender, sizeof(gender), 1, stream);
	fread(&prog, sizeof(prog), 1, stream);
}

