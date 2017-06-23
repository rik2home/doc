#include <iostream>
using namespace std;

#include "Time.h"

Time operator+(const Time &t)
{ 
	return Add(t); 
}

Time operator-(const Time &t)
{ return Subt(t); }

Time::Time(uint h, uint m, uint s)
{
	Set(h, m, s);
}

Time & Time::Set(uint h, uint m, uint s)
{
	hours = h;
	minutes = m;
	seconds = s;

	while (seconds > 59)
	{
		seconds -= 60;
		minutes++;
	}

	while (minutes > 59)
	{
		minutes -= 60;
		hours++;
	}

	while (hours > 23)
	{
		hours -= 24;
	}

	return *this;
	/*hours = s / 3600;
	minutes = (s - hours * 3600) / 60;
	seconds = s - hours * 3600 - minutes * 60;

	hours += h;
	minutes += m;

	if (minutes > 59)
	{
		hours += minutes / 60;
		minutes -= minutes / 60 * 60;
	}*/
}

Time Time::Add(const Time &a)
{
	Time b;

	b.hours = hours + a.hours;
	b.minutes = minutes + a.minutes;
	b.seconds = seconds + a.seconds;

	b.Set(b.hours, b.minutes, b.seconds);

	return b;
}

Time Time::Subt(const Time &a)
{
	Time b;

	uint s1 = ConvertToSec();
	uint s2 = a.ConvertToSec();
	uint s3 = (s1 >= s2) ? s1 - s2 : s2 - s1;

	b.Set(0, 0, s3);

	return b;
}
