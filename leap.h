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
		protected:
			bool is_divisible_by(int);
			bool is_divisible_by_4();
			bool is_divisible_by_100();
			bool is_divisible_by_400();
	};
}

#endif
