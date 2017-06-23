#include <iostream>

using namespace std;
#include "Student.h"


void Student::SetFirstName()
{
	cout << "Enter First name: ";
	cin >> FirstName;
}

void Student::SetSecondName()
{
	cout << "Enter Second name: ";
	cin >> SecondName;
}

void Student::SetSurname()
{
	cout << "Enter Surname: ";
	cin >> Surname;
}

void Student::SetAge()
{
	cout << "Enter age: ";
	cin >> Age;
}

void Student::GetFirstName()
{
	cout << "First name is: " << FirstName << endl;
}

void Student::GetSecondName()
{
	cout << "Second name is: " << SecondName << endl;
}
void Student::GetSurname()
{
	cout << "Surname is: " << Surname << endl;
}

void Student::GetAge()
{
	cout << "Age is: " << Age << endl;
}

void Student::ShowAll()
{
	cout << "\nFirst name is " << FirstName;
	cout << "\nSecond name is " << SecondName;
	cout << "\nSurname is is " << Surname;
	cout << "\nAge are " << Age << endl;
}
