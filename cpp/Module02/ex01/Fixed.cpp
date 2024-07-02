#include "Fixed.h"
#include <cmath>

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	fixedPointNumber = 0;
}

Fixed::Fixed(const Fixed & pointer) {
	std::cout << "Copy constructor called" << std::endl;
	*this = pointer;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	fixedPointNumber = (value * (1 << fractionalBit));
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	fixedPointNumber = roundf(value * (1 << fractionalBit));
}

void Fixed::setRawBits(int const value) {
	std::cout << "setRawBits member function called" << std::endl;
	fixedPointNumber = (value * (1 << fractionalBit));
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return fixedPointNumber;
}

int Fixed::toInt(void) const {
	return (fixedPointNumber >> fractionalBit);
}

float Fixed::toFloat(void) const {
	return (float)fixedPointNumber / (float)(1 << fractionalBit);
}

Fixed & Fixed::operator=(const Fixed & pointer) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &pointer)
		fixedPointNumber = pointer.getRawBits();
	return (*this);
}

std::ostream & operator << (std::ostream & out, const Fixed & pointer) {
	return (out << pointer.toFloat());
}

Fixed::~Fixed(void) {
	std::cout << "Fixed destructor" << std::endl;
}
