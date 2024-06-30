#include "ScalarConverter.h"
#include <cstdlib>
#include <sstream>

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::ScalarConverter(ScalarConverter const & pointer) {
	*this = pointer;
}
std::string extractChar(std::string value) {
	if (value.size() == 1)
	{
		if (isprint(value[0]))
			return (&value[0]);
	}
	else {
		if (value[value.size() - 1] == 'f')
		{
			std::stringstream ss;
			ss << atof(value.c_str());
			const char ascii = atoi(ss.str().c_str());
			std::string to_char(1, ascii);
			return to_char;
		}
	}
	return ("Non displayable");
}

int extractInt(std::string value) {
	return (atoi(value.c_str()));
}

float extractFloat(std::string value) {
	return ((float)atof(value.c_str()));
}

double extractDouble(std::string value) {
	return (atol(value.c_str()));
}

void ScalarConverter::convert(std::string const & value) {
	std::string symbol = extractChar(value);
	int m_int = extractInt(value);
	float m_float = extractFloat(value);
	double m_double = extractDouble(value);

	std::cout << "char: " << symbol << std::endl;
	std::cout << "int: " << m_int << std::endl;
	std::cout << "float: " << m_float << ".0f" << std::endl;
	std::cout << "double: " << m_double << std::endl;
}

ScalarConverter & ScalarConverter::operator = (ScalarConverter const & pointer) {
	(void)pointer;
	return *this;
}

ScalarConverter::~ScalarConverter(void) {}