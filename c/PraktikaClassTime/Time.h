#ifndef TIME_H
#define TIME_H

#include <iostream> 

using namespace std;

class Time
{
private:
	int hh;
	int mm;
	int ss;

public:
	int Gethh();
	int Getmm();
	int Getss();

	void Sethh(int ahh)
	{
		if (ahh >= 0 && ahh <= 23)
		{
			hh = ahh;
		}
	}

	void Setmm(int amm)
	{
		if (amm >= 0 && amm <= 59)
		{
			mm = amm;
		}
	}

	void Setss(int ass)
	{
		if (ass >= 0 && ass <= 59)
		{
			ss = ass;
		}
	}

	void Print()
	{
		cout << hh << " " << mm << " " << ss << endl;
	}

};
#endif
