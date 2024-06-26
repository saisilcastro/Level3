#include "Fixed.h"
#include <cmath>

int main(void) {
	Fixed x;
	Fixed y(x);
	Fixed i(150);
	Fixed j(3.1415f);
	x.setRawBits(1.65f);
	y.setRawBits(25.2627f);
	std::cout << x << std::endl;
	std::cout << y << std::endl;
	std::cout << i << std::endl;
	std::cout << j << std::endl;
	return (0);
}