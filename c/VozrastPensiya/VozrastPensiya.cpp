#include <iostream>
using namespace std;

void main()
{
	int age;
	int vibor;

	cout << "Coise your sex\n"
		 << "1. Male\n"
		 << "2. Female\n"
		 << "Enter: ";
	cin >> vibor;

	cout << "Etner your age: ";
	cin >> age;

	if (vibor == 1 && (age >= 18 && age <= 65))
	{
		cout << "You do not have a pension age\n";
	}
	else if (age < 18)
	{
		cout << "No corect age for work\n";
	}
	else if (vibor == 2 && age >= 18 && age <= 55)
	{
		cout << "You do not have a pension age\n";
	}
	else if (age < 18)
	{
		cout << "No corect age for work\n";
	}
	else cout << "You have a pension age\n";
}