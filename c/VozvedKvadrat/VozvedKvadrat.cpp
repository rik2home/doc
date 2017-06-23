#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	int kvadrat;
	cout << "¬ведите пожалуйта любое целое число дл€ возведени€ его в квадрат: ";
	cin >> kvadrat;

	kvadrat *= kvadrat;
	cout << " вадрат введенного числа = " << kvadrat << endl;
}