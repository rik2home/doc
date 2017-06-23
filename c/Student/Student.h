#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <iostream>
using namespace std;

class Student
{
private:
	char FirstName[50];
	char SecondName[50];
	char Surname[50];
	int Age;
public:
	void SetFirstName();
	void SetSecondName();
	void SetSurname();
	void SetAge();

	void GetFirstName();
	void GetSecondName();
	void GetSurname();
	void GetAge();
	void ShowAll();
};
#endif // !__STUDENT_H__
