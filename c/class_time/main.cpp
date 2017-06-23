#include <iostream>
#include "Time.h"
using namespace std;

void main()
{
	Time t1(12, 45, 24), t2(12, 45, 24);

	if (t1 == t2)
		cout << "==\n\n";
	else if (t1 < t2)
		cout << "<\n\n";
	else if (t1 > t2)
		cout << ">\n\n";
}
