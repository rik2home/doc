#include <iostream>
#include <stdarg.h>
using namespace std;

int min(unsigned count, ...)
{
	int min;

	va_list list;
	va_start(list, count);

	min = va_arg(list, int);

	for (int i = 0; i < count; i++)
	{
		int curent_value = va_arg(list, int);

		if (curent_value < min)
			min = curent_value;
	}

	va_end(list);

	return min;
}

int max(unsigned count, ...)
{
	int max = 0;

	va_list list;
	va_start(list, count);

	max = va_arg(list, int);

	for (int i = 0; i < count - 1; i++)
	{
		int curent_value = va_arg(list, int);
		
		if (curent_value > max)
			max = curent_value;
	}
	va_end(list);

	return max;
}


void main()
{
	cout << "min " << min(5, 2, 1, 100, 15, 5) << endl;
	cout << "max " << max(5, 2, 1, 100, 15, 5) << endl;

}