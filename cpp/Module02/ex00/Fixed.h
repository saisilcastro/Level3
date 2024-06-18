#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
	public:
		Fixed(void);
		Fixed(const Fixed & pointer);
		void setRawBits(int const raw);
		int getRawBits(void) const;
		Fixed & operator=(const Fixed &pointer);
		~Fixed(void);
	private:
		int	fixedPointNumber;
		static int	fractionalBit;
};

#endif