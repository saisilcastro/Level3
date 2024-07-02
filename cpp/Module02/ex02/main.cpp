#include "Fixed.h"
#include <cmath>

void	inc_and_dec(void);
void	logic_condition(void);
void	math_operation(void);
void	min_and_max(void);
void	my_test(void);
void	subject(void);

int main(void) {
	subject();
	//my_test();
	return (0);
}

void	subject(void) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
}

void my_test(void) {
	inc_and_dec();
	logic_condition();
	math_operation();
	min_and_max();
}

void	min_and_max(void) {
	Fixed first(25);
	Fixed second(50);
	
	std::cout << Fixed::min(first, second) << " is min between " << first << " and " << second << std::endl;
	std::cout << Fixed::max(first, second) << " is max between " << first << " and " << second << std::endl;
}

void	math_operation(void) {
	Fixed value(Fixed(10) + Fixed(20));
	std::cout << "sum between 10 and 20 " << value << std::endl;
	value = Fixed(Fixed(30) - Fixed(10));
	std::cout << "sub between 30 and 10 " << value << std::endl;
	value = Fixed(Fixed(30) * Fixed(2.75f));
	std::cout << "mul between 30 and 2.5 " << value << std::endl;
	value = Fixed(Fixed(82.5f) / Fixed(30));
	std::cout << "div between 82.5 and 30 " << value << std::endl;
}

void	inc_and_dec(void) {
	Fixed	value(15.8f);

	std::cout << "pre increase " << ++value << std::endl;
	std::cout << "pre decrease " << --value << std::endl;
	std::cout << "post increase " << value++ << std::endl;
	std::cout << "value after increase " << value << std::endl;
	std::cout << "post decrease " << value-- << std::endl;
	std::cout << "value after decrease " << value << std::endl;
}

void	logic_condition(void) {
	Fixed	first(50);
	Fixed	second(25);
	if (first < second)
		std::cout << "first[" << first.toFloat() << "] lesser than second[" << second.toFloat() << "]\n";
	else if (first <= second)
		std::cout << "first[" << first.toFloat() << "] lesser or equals second[" << second.toFloat() << "]\n";
	else if (first == second)
		std::cout << "first[" << first.toFloat() << "] equals second[" << second.toFloat() << "\n";
	else if (first >= second)
		std::cout << "first[" << first.toFloat() << "] bigger or equals second[" << second.toFloat() << "]\n";
	else if (first > second)
		std::cout << "first[" << first.toFloat() << "] bigger then second[" << second.toFloat() << "]\n";
}