#include "Fixed.h"

const int Fixed::fractionalBit = 8;

Fixed::Fixed(void) {
	fixedPointNumber = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed & pointer) {
	std::cout << "Copy constructor called" << std::endl;
	*this = pointer;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;

	fixedPointNumber = ((value << fractionalBit) & 0x7FFFFF00);
	fixedPointNumber |= (value & 0x80000000);
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
}

void Fixed::setRawBits(int const value) {
	std::cout << "setRawBits member function called" << std::endl;
	fixedPointNumber = value;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (fixedPointNumber);
}

int Fixed::toInt(void) const {
	return ((fixedPointNumber & 0x7FFFFF00) >> fractionalBit);
}

float Fixed::toFloat(void) const {
	return (0);
}

Fixed & Fixed::operator=(const Fixed & pointer) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &pointer)
		fixedPointNumber = pointer.getRawBits();
	return (*this);
}

Fixed::~Fixed(void) {
	std::cout << "Fixed destructor" << std::endl;
}
