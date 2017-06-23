#include <iostream>
#include <stdarg.h>
using namespace std;

int proizved(unsigned count, ...)
{
	int proizv = 1;

	va_list list;
	va_start(list, count);

	for (int i = 0; i < count; i++)
		proizv *= va_arg(list, int);
	va_end(list);

	return proizv;
}

void main()
{
	cout << "Proizved " << proizved(5, 2, 2, 2, 2, 2) << endl;
}