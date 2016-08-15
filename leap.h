// vim: ts=4

#ifndef __leap_h__
#define __leap_h__

namespace leap
{
	bool is_leap_year(int year);

	class Leap
	{
			const int _year;

		public:
			Leap(const int &year);
			operator bool() const;
		protected:
			bool is_divisible_by(int) const;
	};
}

#endif
