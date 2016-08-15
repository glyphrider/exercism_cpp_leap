// vim: ts=4

#include "leap.h"

namespace leap
{
	Leap::Leap(int year):_year(year) {}
	Leap::operator bool()
	{
		return (is_divisible_by_400() || ((is_divisible_by_4()) && (!is_divisible_by_100())));
	}
	bool Leap::is_divisible_by(int divisor)
	{
			return (_year % divisor == 0);
	}

	bool Leap::is_divisible_by_4()
	{
		return is_divisible_by(4);
	}
	bool Leap::is_divisible_by_100()
	{
		return is_divisible_by(100);
	}
	bool Leap::is_divisible_by_400()
	{
		return is_divisible_by(400);
	}

	bool is_leap_year(int year)
	{
		return Leap(year);
	}
}
