#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student
{
private:
	int ID;
	string name;
	double GPA;
	char gender;
public:
	Student();
	Student(int ID, string name, double GPA, char gender);
	void SetStudent(int ID, string name, double GPA, char gender);
	int getID();
	string getName();
	double getGPA();
	char getGender();
	void print();
};
#endif