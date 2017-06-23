#include <iostream>
using namespace std;

void main()
{
	const int size = 10;
	int a[size];
	int i;
	int sumPlus = 0, kolPlus = 0, sumOtr = 0, kolOtr = 0, kolNull = 0, sumChetn = 0;
	int kolChetn = 0, sumNeChetn = 0, kolNeChetn = 0, sumKrant357 = 0, kolKratn357 = 0;
	int sumKratn3Ne5 = 0, kolKratn3Ne5 = 0, sumBig1Lit5 = 0, kolBig1Lit5 = 0;

	for (i = 0; i < size; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}

	for (i = 0; i < size; i++)
	{
		if (a[i] > 0)
		{
			sumPlus += a[i];
			kolPlus++;
		}
		
		if (a[i] < 0)
		{
			sumOtr += a[i];
			kolOtr++;
		}

		if (a[i] == 0)
			kolNull++;
		
		if (a[i] % 2 == 0 && a[i] != 0)
		{
			sumChetn += a[i];
			kolChetn++;
		}
		
		if (a[i] % 2)
		{
			sumNeChetn += a[i];
			kolNeChetn++;
		}

		if ((a[i] != 0) && (a[i] % 3 == 0 || a[i] % 5 == 0 || a[i] % 7 == 0))
		{
			sumKrant357 += a[i];
			kolKratn357++;
		}

		if ((a[i] != 0) && ((a[i] % 3 == 0) && (a[i] % 5)))
		{
			sumKratn3Ne5 += a[i];
			kolKratn3Ne5++;
		}

		if (a[i] > 1 && a[i] < 5)
		{
			sumBig1Lit5 += a[i];
			kolBig1Lit5++;
		}
	}

	cout << "sumPlus: " << sumPlus << "\tkolPlus: " << kolPlus << endl;
	cout << "sumOtr: " << sumOtr << "\tkolOtr: " << kolOtr << endl;
	cout << "kolNuul: " << kolNull << endl;
	cout << "sumChetn: " << sumChetn << "\tkolChetn: " << kolChetn << endl;
	cout << "sumNeChetn: " << sumNeChetn << "\tkolNeChetn: " << kolNeChetn << endl;
	cout << "sumKr3_5_7: " << sumKrant357 << "\tkolKr_3_5_7: " << kolKratn357 << endl;
	cout << "sumKr3Ne5: " << sumKratn3Ne5 << "\tkolKr3Ne5: " << kolKratn3Ne5 << endl;
	cout << "sumBig1Lit5: " << sumBig1Lit5 << "\tkolBig1lit5: " << kolBig1Lit5 << endl;
}
