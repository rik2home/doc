#include <iostream>
#include <Windows.h>
using namespace std;
class Timer
{
private:
	int value;
public:
	Timer() { value = 0; }
	void SetMax(int max) 
	{
		if (value < max)
		value = max; 
	}
	void SetMin(int min) 
	{ 
		if (value >= min)
		value = min;
	}
	void StartTimer()
	{
		for (int i = value; i < 100; i++)
		{
			cout << value;
			Sleep(1000);
			cout << "\r";
			value++;
		}
	}
};

void main()
{
	Timer t;
	t.SetMax(95);
	t.StartTimer();
}