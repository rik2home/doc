#include <iostream>
using namespace std;

void main()
{
	int a = 1;
	int faktorial = 1;

	while (a <= 5)
	{
		faktorial *= a;
		a++;
	}
	cout << "5! = " << faktorial << endl;
	
}