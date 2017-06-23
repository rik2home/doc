#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include "String.h"
using namespace std;

void Save(const String &s)
{
	FILE *stream;

	if ((stream = fopen("String.dat", "wb")) == NULL)
	{
		cout << "Cannot open for writing.\n";
		return;
	}

	s.SaveToFile(stream);

	fclose(stream);
}

void Load(String &s)
{
	FILE *stream;

	if ((stream = fopen("String.dat", "rb")) == NULL)
	{
		cout << "Cannot open for reading.\n";
		return;
	}

	s.LoadFromFile(stream);

	fclose(stream);
}