#include <iostream>
#include <conio.h>
using namespace std;

const int menuItems = 9;

void DrawMenu()
{
	char *menu[] =
	{
		"1. Add new student.",
		"2. Delete certain student.",
		"3. Delete all students.",
		"4. Change specified student.",
		"5. Show specified student.",
		"6. Show all students.",
		"7. Save group to file.",
		"8. Load group from file.",
		"9. Search students.",
		"Esc - Exit."
	};

	cout << "************************************************\n";
	for (int i = 0; i <= menuItems; i++)
		cout << menu[i] << endl;
	cout << "************************************************\n\n";
}

int Menu()
{
	const int Esc = 27;

	DrawMenu();
	cout << "Your choice [ ]\b\b";

	unsigned char choice = 0;
	do
	{
		choice = _getch();
		if (choice == 0 || choice == 0xE0)_getch();
	}
	while ((choice < '1' || choice > '0' + menuItems) && choice != Esc);

	if (choice == Esc)
		cout << "Esc]\n\n";
	else
		cout << choice << "]\n\n";

	return (choice == Esc) ? Esc : choice - '0';
}