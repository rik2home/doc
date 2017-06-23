#include <iostream>
#include <stdarg.h>
using namespace std;

int proizved(unsigned count, ...)
{
	int sum = 0;

	va_list list;
	va_start(list, count);

	for (int i = 0; i < count; i++)
		sum += va_arg(list, int);
	va_end(list);

	return sum / count;
}

void main()
{
	cout << "AVG " << proizved(5, 2, 2, 100, 2, 2) << endl;
}