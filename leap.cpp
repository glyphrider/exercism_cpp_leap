// vim: ts=4

#include "leap.h"

namespace leap
{
	Leap::Leap(const int &year):_year(year) {}
	Leap::operator bool() const
	{
		return (is_divisible_by(400) || ((is_divisible_by(4)) && (!is_divisible_by(100))));
	}
	bool Leap::is_divisible_by(int divisor) const
	{
			return (_year % divisor == 0);
	}

	bool is_leap_year(int year)
	{
		return Leap(year);
	}
}
