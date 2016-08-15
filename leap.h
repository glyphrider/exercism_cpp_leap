// vim: ts=4

#ifndef __leap_h__
#define __leap_h__

namespace leap
{
	bool is_leap_year(int year);

	class Leap
	{
			int _year;
		public:
			Leap(int year);
			operator bool();
	};
}

#endif
