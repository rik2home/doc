#include <iostream>
using namespace std;

void main()
{
	setlocale (LC_ALL, "Russian");

	int a1, a2, a3;
	
	cout << "¬ведите пожалуйста первое число: ";
	cin >> a1;
	cout << "¬ведите пожалуста второе число: ";
	cin >> a2;

	double sum, razn, proizv, chastn;

	sum = a1 + a2;
	cout << a1 << "\t+\t" << a2 << "\t=\t" << sum << endl;

	razn = a1 - a2;
	cout << a1 << "\t-\t" << a2 << "\t=\t" << razn << endl;

	proizv = a1 * a2;
	cout << a1 << "\t*\t" << a2 << "\t=\t" << proizv << endl;

	chastn = a1 / a2;
	cout << a1 << "\t/\t" << a2 << "\t=\t" << chastn << endl;

	cout << "¬ведите пожалуйста третье число: ";
	cin >> a3;

	sum = a1 + a2 + a3;
	razn = a1 - a2 - a3;
	proizv = a1 * a2 * a3;
	chastn = a1 / a2 / a3;

	cout << a1 << "\t+\t" << a2 << "\t+\t" << a3 << "\t=\t" << sum << endl;
	cout << a1 << "\t-\t" << a2 << "\t-\t" << a3 << "\t=\t" << razn << endl;
	cout << a1 << "\t*\t" << a2 << "\t*\t" << a3 << "\t=\t" << proizv << endl;
	cout << a1 << "\t/\t" << a2 << "\t/\t" << a3 << "\t=\t" << chastn << endl;
}