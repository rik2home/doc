#include <stdio.h>

#ifndef __TIME_H__
#define __TIME_H__

typedef unsigned int uint;

class Time
{
private:
	uint hours;
	uint minutes;
	uint seconds;
public:
	Time(uint h = 0, uint m = 0, uint s = 0);
	
	// Гетеры
	uint GetHours() const { return hours; }
	uint GetMinutes() const { return minutes; }
	uint GetSeconds() const { return seconds; }

	// Сетеры
	Time & Set(const Time &t) { return Set(t.hours, t.minutes, t.seconds); }
	Time & Set(uint h = 0, uint m = 0, uint s = 0);

	int ConvertToSec() const { return hours * 3600 + minutes * 60 + seconds; }

	void Show() const
	{
		printf("%02u:%02u:%02u\n\n", hours, minutes, seconds);
	}
	
	Time Add(const Time &a);
	Time Subt(const Time &a);

	// Перегрузка операций
	Time & operator=(const Time &t) { return Set(t); }
	Time & operator+=(const Time &t) { return *this = Add(t); }
	Time & operator-=(const Time &t) { return *this = Subt(t); }
	/*Time operator+(const Time &t) { return Add(t); }
	Time operator-(const Time &t) { return Subt(t); }*/
	bool operator==(const Time &t) const { return ConvertToSec() == t.ConvertToSec(); }
	bool operator<(const Time &t) const { return ConvertToSec() < t.ConvertToSec(); }
	bool operator>(const Time &t) const { return ConvertToSec() > t.ConvertToSec(); }
};

#endif