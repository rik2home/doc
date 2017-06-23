#include <iostream>

using namespace std;

int main()
{
	int age[4];
	for (int j = 0; j < 4; j++)
	{
		cout << "Enter age: ";
		cin >> age[j];
	}
	for (int j = 0; j < 4; j++)
		cout << "You enter: " << age[j] << endl;
	return 0;
}