#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	const double oneInch = 2.54;
	double inch, s;

	cout << "¬ведите пожалуйста длинну в сантиментах: ";
	cin >> s;
	inch = s / oneInch;
	cout << s << " см = " << inch << " дюйм(ов)\n";

	cout << "¬ведите пожалуйста длинну в дюймах: ";
	cin >> inch;
	s = oneInch * inch;
	cout << inch << " дюйм(ов) = " << s << " см\n";
}