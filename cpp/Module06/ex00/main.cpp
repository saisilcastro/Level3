#include "ScalarConverter.h"

int main(int c, char **v) {
	if (c != 2)
	{
		std::cout << "You must pass the argment you fucker\n";
		return (-1);
	}
	ScalarConverter::convert(std::string(v[1]));
	return (0);
}