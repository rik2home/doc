#include "PersoneConst.h"
#include <iostream>

using namespace std;

Persone::Persone(char * p, char * n, int a)
{
	name = new char[strlen(n) + 1];
	if (!name) {
		cout << "Error!";
		exit(0);
	}
	picture_data = new char[strlen(n) + 1];
	if (!picture_data) {
		cout << "Errror";
		exit(0);
	}
	strcpy(picture_data, p);
	strcpy(name, n);
	age = a;
}

void main()
{
	Persone A("C\\image", "Ivan", 33);
	cout << "Name: " << A.Name() << endl;
	cout << "Pic: " << A.Picture() << endl;
	cout << "Age: " << A.Age() << endl;
	A.SetPicture("c:::::");
	A.SetName("Lol");
	A.SetAge(90);
	cout << "Name: " << A.Name() << endl;
	cout << "Pic: " << A.Picture() << endl;
	cout << "Age: " << A.Age() << endl;

}
