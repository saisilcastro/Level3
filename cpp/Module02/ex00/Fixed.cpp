#include "Fixed.h"

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	fixedPointNumber = 0;
}

Fixed::Fixed(const Fixed & pointer){
	std::cout << "Copy constructor called" << std::endl;
	*this = pointer;
}

void Fixed::setRawBits(int const value) {
	std::cout << "setRawBits member function called" << std::endl;
	fixedPointNumber = value;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (fixedPointNumber);
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
