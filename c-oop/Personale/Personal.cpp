#include "Personal.h"
#include <iostream>
using namespace std;
Personal::Personal(char * p, char * n, int a)
{
	name = new char[strlen(n) + 1];
	if (!name)
	{
		cout << "Error";
		exit(0);
	}
	picture_data = new char[strlen(p) + 1];
	if (!picture_data)
	{
		cout << "Error";
		exit(0);
	}
	strcpy(name, n);
	strcpy(picture_data, p);
	age = a;
}

void Personal::SetName(const char * n)
{
	strcpy(name, n);
}

void Personal::SetAge(int a)
{
	age = a;
}

void Personal::SetPicture(const char * p)
{
	strcpy(picture_data, p);
}

void main()
{
	Personal A("C:\\Image\\", "Ivan", 23);
	cout << "Name: " << A.Name() << endl;
	cout << "Age: " << A.Age() << endl;
	cout << "PAtch for picture: " << A.Picture() << endl;
	A.SetPicture("C:\\Test\\");
	A.SetName("Leonid");
	A.SetAge(104);
	cout << "NAme: " << A.Name() << endl;
	cout << "Age:" << A.Age() << endl;
	cout << "Patch for picture: " << A.Picture() << endl;
}