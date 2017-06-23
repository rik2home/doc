#include <iostream>
using namespace std;

enum animals
{
	bull = 1,
	calf,
	cow,
	goat,
	chicken,
	cat,
	dog,
	kitten
};

void main()
{	
	int zoo;
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
	cin >> zoo;

	switch (zoo)
	{
	case bull:
	case calf:
	case cow:
		cout << "Moooo\n";
		break;
	case goat:
		cout << "Be_eeeeee\n";
		break;
	case chicken:
		cout << "Ko-kokoko\n";
		break;
	case cat:
	case dog:
		cout << "Myaooo\n";
		break;
	case kitten:
		cout << "Gav-Gav\n";
		break;
	default:
		cout << "Enter correct choise!\n";
	}
}