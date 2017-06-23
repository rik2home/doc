#include <iostream>
#include <string.h>

using namespace std;

void main()
{
	char string1[] = "adf!df!???!!df!";
	int i = 0;

	cout << string1 << endl;

	while (string1[i] != '\0')
	{
		if (string1[i] == '!')
			string1[i] = '.';

		if (string1[i] == '?')
			string1[i] = ',';
		i++;
	}

	cout << string1 << endl;
}