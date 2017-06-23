#include <iostream>
using namespace std;

void main()
{
	const int size = 10;
	int a[size];
	int i;
	int sumChetnIndex = 0, kolChetnInd = 0, sumNeChetnInd = 0, kolNeChetnInd = 0;
	int sumKrant23 = 0, kolKratn23 = 0, sumKratn2Ne3 = 0, kolKratn2Ne3 = 0;

	for (i = 0; i < size; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}

	for (i = 0; i < 2; i++)
	{
		if (i == 0)
		{
			sumChetnIndex += a[i];
			kolChetnInd++;
		}
		else
		{
			sumNeChetnInd += a[i];
			kolNeChetnInd++;
		}
	}

	for (i = 2; i < size; i++)
	{
		if (i % 2 == 0)
		{
			sumChetnIndex += a[i];
			kolChetnInd++;
		}
		else
		{
			sumNeChetnInd += a[i];
			kolNeChetnInd++;
		}

		if (i % 2 == 0 || i % 3 == 0)
		{
			sumKrant23 += a[i];
			kolKratn23++;
		}

		if ((i != 0) && ((i % 2 == 0) && (i % 3)))
		{
			sumKratn2Ne3 += a[i];
			kolKratn2Ne3++;
		}
	}

	cout << "sum4etnInd: " << sumChetnIndex << "\tKol4etnInd: " << kolChetnInd << endl;
	cout << "SrednArifmChetnInd: " << sumChetnIndex / kolChetnInd << endl;
	cout << "sumNe4etnInd: " << sumNeChetnInd << "\tKolne4etnInd: " << kolNeChetnInd << endl;
	cout << "SrednArifmNeChetnInd: " << sumNeChetnInd / kolNeChetnInd << endl;
	cout << "SumSrednArifmKr_2_3: " << sumKrant23 << "\tKolSrednArifmKr_2_3: " << kolKratn23 << endl;
	cout << "SrednArifmKr_2_3: " << sumKrant23 / kolKratn23 << endl;
	cout << "sumSrednArifmKr2Ne3" << sumKratn2Ne3 << "\tKolSrednArifmKr2Ne3" << kolKratn2Ne3 << endl;
	cout << "SrednArifmKr2Ne3: " << sumKratn2Ne3 / kolKratn2Ne3 << endl;
}
