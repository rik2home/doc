#include <iostream>
#include <conio.h>
using namespace std;

const int menuItems = 10;

void DrawMenu()
{
	char *menu[menuItems] =
	{
		"1. Add new record.",
		"2. Deleting an entry at the specified index.",
		"3. Delete all records.",
		"4. Change the record at the specified index.",
		"5. Screen displays the entry at the specified index.",
		"6. Displays all records.",
		"7. To save the current entries in the file.",
		"8. Downloading records from a file.",
		"9. Search for information in the records.",
		"Esc - Exit."
	};  

	cout << "************************************************\n";
	for (int i = 0; i < menuItems; i++)
		cout << menu[i] << endl;
	cout << "************************************************\n\n";
}

int Menu()
{
	const int Esc = 27;

	DrawMenu();
	cout << "Your choice [ ]\b\b";

	char choice = 0;
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