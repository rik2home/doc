#include <istream>
#include <string.h>

using namespace std;
class Student
{
private:
	char name[50];
	char surname[50];
	int age;
public:
	Student(char name[], char surname[], int age)
	{
		strcpy(this->name, name);
		strcpy(this->surname, surname);
		this->age = age;
	}
	void Show()
	{
		cout << "\nName - " << name;
		cout << "\nSurname - " << this->surname;
		cout << "\nAge - " << this->age;
	}
};

void main()
{
	Student A("Ivan", "Sidirof", 24);
	A.Show();
}