#include <iostream>
using namespace std;
void main()
{
	int ostatok, enter;
	
	cout << "Enter any integer: ";
	cin >> enter;

	cout << "Your integer is on the contrary: ";

	do 
	{
		ostatok = enter % 10;
		enter /= 10;
		cout << ostatok;
	} while (enter != 0);
	
	cout << endl;
}