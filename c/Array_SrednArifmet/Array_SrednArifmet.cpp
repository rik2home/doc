#include <iostream>
using namespace std;

void main()
{
	const int size = 10;
	int a[size];
	int i;
	int sumPlus = 0, kolPlus = 0, sumOtr = 0, kolOtr = 0, kolNull = 0, sumChetn = 0;
	int kolChetn = 0, sumNeChetn = 0, kolNeChetn = 0, sumKrant357 = 0, kolKratn357 = 0;
	int sumKratn3Ne5 = 0, kolKratn3Ne5 = 0, sumBig1Lit5 = 0, kolBig1Lit5 = 0, sum = 0;

	for (i = 0; i < size; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}

	for (i = 0; i < size; i++)
	{
		sum += a[i];

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

	cout << "srednArifmet: " << sum / size << endl;
	cout << "SrednArifmPlus: " << sumPlus / kolPlus << endl;
	cout << "SrednArifmOtr: " << sumOtr / kolOtr << endl;
	cout << "SrednArifmChetn: " << sumChetn / kolChetn << endl;
	cout << "SrednArifmNeChetn: " << sumNeChetn / kolNeChetn << endl;
	cout << "SrednArifmKr3_5_7: " << sumKrant357 / kolKratn357 << endl;
	cout << "SrednArifmKr3Ne5: " << sumKratn3Ne5 / kolKratn3Ne5 << endl;
	cout << "SrednArifmBig1Lit5: " << sumBig1Lit5 / kolBig1Lit5 << endl;
}
