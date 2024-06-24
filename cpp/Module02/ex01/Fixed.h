#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
	public:
		Fixed(void);
		Fixed(const Fixed &);
		Fixed(const int);
		Fixed(const float);
		void setRawBits(int const);
		int getRawBits(void) const;
		int toInt(void) const;
		float toFloat(void) const;
		Fixed & operator=(const Fixed &);
		~Fixed(void);
	private:
		int	fixedPointNumber;
		static const int	fractionalBit = 8;
};

std::ostream & operator << (std::ostream & out, const Fixed & pointer);

#endif