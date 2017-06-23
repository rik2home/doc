#include <iostream>
using namespace std;

void main()
{
	int bull, calf, cow, goat, chicken, cat, dog, kitten;
	int animal;

	cout << "Select an animal:\n"
		 << "1. Bull\n"
		 << "2. Calf\n"
		 << "3. Cow\n"
		 << "4. Goat\n"
		 << "5. Chicken\n"
		 << "6. Cat\n"
		 << "7. Dog\n"
		 << "8. Kitten\n"
		 << "Your choise: ";
	cin >> animal;

	switch (animal)
	{
	case 1:
	case 2:
	case 3:
		cout << "Moooo\n";
		break;
	case 4:
		cout << "Be_eeeeee\n";
		break;
	case 5:
		cout << "Ko-kokoko\n";
		break;
	case 6:
	case 8:
		cout << "Myaooo\n";
		break;
	case 7:
		cout << "Gav-Gav\n";
		break;
	default:
		cout << "Enter correct number!\n";
	}
}