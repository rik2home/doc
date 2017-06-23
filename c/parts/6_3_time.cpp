#include <iostream>
#include <conio.h>

using namespace std;

class time
{
private:
	int hour;
	int min;
	int sec;
public:
	time() : hour(0), min(0), sec(0) { }
	time(int hh, int mm, int ss) : hour(hh), min(mm), sec(ss) { }
	void showtime() const
	{
		cout << hour << ":" << min << ":" << sec;
	}
	void addtime(time t1, time t2)
	{
		sec = t1.sec + t2.sec;
		if (sec >= 60) { sec -= 60; min++; }

		min = t1.min + t2.min;
		if (min >= 60) { hour++; min -= 60; }

		hour = t1.hour + t2.hour;
	}
};
int main()
{
	const time time1(12, 55, 30);
	const time time2(1, 5, 32);
	time time3;

	time3.addtime(time1, time2);
	cout << "\ntime3 = ";
	time3.showtime();


	_getch();
	return 0;
}