#include <iostream>

using namespace std;
#include "Student.h"

void main()
{
	Student A;

	A.SetFirstName();
	A.SetSecondName();
	A.SetSurname();
	A.SetAge();

	//A.GetFirstName();
	//A.GetSecondName();
	//A.GetSurname();
	//A.GetAge();
	A.ShowAll();
}