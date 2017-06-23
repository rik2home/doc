#include <iostream>

using namespace std;

size_t my_strlen(const char *string)
{
	int counter = 0;

	while (string[counter] != '\0')
	{
		counter++;
	}

	return counter;
}


char *my_strcpy(char *strIn, const char *strOut)
{
	int counter = 0;

	while (true)
	{
		strIn[counter] = strOut[counter];
		
		if (strOut[counter] == '\0') break;
		counter++;
	}
	return strIn;
}

char *my_strncpy(char *strIn, const char *strOut, size_t num)
{
	int counter = 0;

	while (counter != num - 1)
	{
		strIn[counter] = strOut[counter];

		if (strOut[counter] == '\0') break;
		counter++;
	}
	return strIn;

}

char *my_strcat(char *strDest, const char *strSource)
{
	int counter1 = 0;
	while (strDest[counter1] != '\0')
	{
		counter1++;
	}

	int counter2 = 0;
	while (strSource[counter2] != '\0')
	{
		strDest[counter1] = strSource[counter2];
		counter1++;
		counter2++;
	}
	return strDest;
}

char *my_strncat(char *strDest, const char *strSource, size_t num)
{
	int counter1 = 0;
	while (strDest[counter1] != '\0')
	{
		counter1++;
	}

	int counter2 = 0;
	while (strSource[counter2] != '\0' && counter2 != num - 1)
	{
		strDest[counter1] = strSource[counter2];
		counter1++;
		counter2++;
	}
	return strDest;
}

char *my_strset(char *string, int c)
{
	int counter = 0;
	while (string[counter] != '\0')
	{
		string[counter] = c;
		counter++;
	}
	return string;
}

char *my_strnset(char *string, int c, size_t num)
{
	int counter = 0;
	while (string[counter] != '\0' && counter <= num)
	{
		string[counter] = c;
		counter++;
	}
	return string;
}

char *my_strchar(const char *string, int c)
{
	int counter = 0;
	int *p;
	while (string[counter] != '\0')
	{
		if (string[counter] == c)
		{
			p = &string[counter];
			return ;
		}
	}
	return p;
}
void main()
{
	char a_string[128] = "";

	cout << "Enter symbol: \n";
	cin.getline(a_string, 128);

	//cout << my_strlen(a_string) << endl;

	//char b_string[] = "Test tekst";
	//cout << my_strcpy(b_string, a_string) << endl;

	//char string[4] = "";
	//cout << my_strncpy(string, a_string, 4) << endl;

	char c_string[128] = "This string => ";
	//cout << my_strcat(c_string, a_string) << endl;

	//cout << my_strncat(c_string, a_string, 7) << endl;

	//cout << my_strset(a_string, 1) << endl;

	cout << my_strnset(a_string, 1, 5) << endl;
}