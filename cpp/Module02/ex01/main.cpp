#include "Fixed.h"
#include <cmath>

int setFloat(float number) {
	int count = (int)number;
	int	exp = 0;

	while (count) {
		count /= 10;
		exp++;
	}
	if (exp == 0) {
		float	result = pow(number, 1);
		int base = 10;
		while ((int)result <= 0) {
			result = base * pow(number, 1);
			base *= 10;
			exp--;
		}
		std::cout << "**number: " << exp << std::endl;
	}
	return (0);
}

int main(void) {
	setFloat(0.0000000450);
	return (0);
}