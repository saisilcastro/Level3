#include "Fixed.h"
#include <cmath>

Fixed::Fixed(void) {
	fixedPointNumber = 0;
}

Fixed::Fixed(const Fixed & pointer) {
	*this = pointer;
}

Fixed::Fixed(const int value) {
	fixedPointNumber = (value * (1 << fractionalBit));
}

Fixed::Fixed(const float value) {
	fixedPointNumber = roundf(value * (1 << fractionalBit));
}

void Fixed::setRawBits(int const value) {
	fixedPointNumber = (value * (1 << fractionalBit));
}

int Fixed::getRawBits(void) const {
	return fixedPointNumber;
}

int Fixed::toInt(void) const {
	return (fixedPointNumber >> fractionalBit);
}

float Fixed::toFloat(void) const {
	return (float)fixedPointNumber / (1 << fractionalBit);
}

Fixed & Fixed::operator=(const Fixed & pointer) {
	if (this != &pointer)
		fixedPointNumber = pointer.fixedPointNumber;
	return (*this);
}

bool Fixed::operator > (const Fixed & pointer) {
	return fixedPointNumber > pointer.fixedPointNumber;
}

bool Fixed::operator >= (const Fixed & pointer) {
	return fixedPointNumber >= pointer.fixedPointNumber;
}

bool Fixed::operator == (const Fixed & pointer) {
	return fixedPointNumber == pointer.fixedPointNumber;
}

bool Fixed::operator < (const Fixed & pointer) {
	return fixedPointNumber < pointer.fixedPointNumber;
}

bool Fixed::operator <= (const Fixed & pointer) {
	return fixedPointNumber <= pointer.fixedPointNumber;
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
	//fixedPointNumber = roundf((toFloat() + 1) * (1 << fractionalBit)); // this makes sense
	fixedPointNumber++; // this way is to awkward to me but it's what subject asks
	return (*this);
}

Fixed Fixed::operator ++ (int) {
	Fixed value(*this);
	++(*this);
	return value;
}

Fixed & Fixed::operator -- (void) {
	//fixedPointNumber = roundf((toFloat() - 1) * (1 << fractionalBit)); // this makes sense
	fixedPointNumber--; // this way is to awkward to me but it's what subject asks
	return (*this);
}

Fixed Fixed::operator -- (int) {
	Fixed value(*this);
	--(*this);
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
}
