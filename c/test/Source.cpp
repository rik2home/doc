#include <iostream>
#include <Windows.h>

using namespace std;

class Km
{
private:
	int k;
	int k_max;
	int k_min;
public:
	Km(int k0, int k0_max, int k0_min)
	{
		k = k0;
		k_max = k0_max;
		k_min = k0_min;
	}

	void Initial(int k0)
	{
		k = k0;
	}

	void SetMax(int k0_max)
	{
		k_max = k0_max;
	}

	void SetMin(int k0_min)
	{
		k_min = k0_min;
	}

	void ShowAll()
	{
		cout << "Step KM = " << k << endl;
		cout << "Step k_max = " << k_max << endl;
		cout << "Step k_min = " << k_min << endl;
	}

	void ShowK()
	{
		cout << k;
	}
};

void main()
{
	Km step(0,0,0);

	cout << "Input max timer: ";
	int max;
	cin >> max;
	step.SetMax(max);
	
	cout << "Input min timer: ";
	int min;
	cin >> min;
	step.SetMin(min);

	for (int i = min; i < max; i++)
	{

		step.Initial(i);
		step.ShowK();
		Sleep(1000);
		cout << "\b\b\b";
	}
}