// vim: ts=4

#include "leap.h"

namespace leap
{
	Leap::Leap(int year):_year(year) {}
	Leap::operator bool()
	{
		return ((_year % 4 == 0) && ((_year % 100 != 0) || (_year % 400 == 0)));
	}

	bool is_leap_year(int year)
	{
		return Leap(year);
	}
}
