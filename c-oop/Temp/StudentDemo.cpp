#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
	Student s;
	int ID;
	string name;
	double GPA;
	char gender;

	cout << "Enter ID ";
	cin >> ID;
	cout << "Enter name ";
	cin >> name;
	cout << "Enter GPA ";
	cin >> GPA;
	cout << "Enter gender ";
	cin >> gender;
	s.SetStudent(ID, name, GPA, gender);
	s.print();
	return 0;
}