#include "Fixed.h"
#include <cmath>

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
	fixedPointNumber = (value * (1 << fractionalBit));
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
	return (float)fixedPointNumber / (1 << fractionalBit);
}

Fixed & Fixed::operator=(const Fixed & pointer) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &pointer)
		fixedPointNumber = pointer.getRawBits();
	return (*this);
}

bool Fixed::operator > (const Fixed & pointer) {
	return fixedPointNumber > pointer.getRawBits();
}

bool Fixed::operator >= (const Fixed & pointer) {
	return fixedPointNumber >= pointer.getRawBits();
}

bool Fixed::operator == (const Fixed & pointer) {
	return fixedPointNumber == pointer.getRawBits();
}

bool Fixed::operator < (const Fixed & pointer) {
	return fixedPointNumber < pointer.getRawBits();
}

bool Fixed::operator <= (const Fixed & pointer) {
	return fixedPointNumber <= pointer.getRawBits();
}

Fixed Fixed::operator + (const Fixed & pointer) {
	return (Fixed(toFloat() + pointer.toFloat()));
}

Fixed Fixed::operator - (const Fixed & pointer) {
	return (Fixed(toFloat() - pointer.toFloat()));
}

Fixed Fixed::operator * (const Fixed & pointer) {
	return (Fixed(toFloat() * pointer.toFloat()));
}

Fixed Fixed::operator / (const Fixed & pointer) {
	return (Fixed(toFloat() / pointer.toFloat()));
}

Fixed & Fixed::operator ++ (void) {
	fixedPointNumber ++;
	return (*this);
}

Fixed Fixed::operator ++ (int) {
	Fixed value(fixedPointNumber * toFloat());
	fixedPointNumber ++;
	return value;
}

Fixed & Fixed::operator -- (void) {
	fixedPointNumber --;
	return (*this);
}

Fixed Fixed::operator -- (int) {
	Fixed value(fixedPointNumber * toFloat());
	fixedPointNumber --;
	return value;
}

Fixed &Fixed::min(Fixed & x, Fixed & y) {
  return x.getRawBits() < y.getRawBits() ? x : y;
}

const Fixed &Fixed::min(const Fixed & x, const Fixed & y) {
  return x.getRawBits() < y.getRawBits() ? x : y;
}

Fixed &Fixed::max(Fixed & x, Fixed & y) {
  return x.getRawBits() > y.getRawBits() ? x : y;
}

const Fixed &Fixed::max(const Fixed & x, const Fixed & y) {
  return x.getRawBits() > y.getRawBits() ? x : y;
}

std::ostream & operator << (std::ostream & out, const Fixed & pointer) {
	return (out << pointer.toFloat());
}

Fixed::~Fixed(void) {
	std::cout << "Fixed destructor" << std::endl;
}
