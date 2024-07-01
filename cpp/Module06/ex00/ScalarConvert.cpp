#include "ScalarConverter.h"

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::ScalarConverter(ScalarConverter const & pointer) {
	*this = pointer;
}
std::string extractChar(std::string value) {
	if (value.size() == 1 && isalpha(value[0]))
			return (std::string("''").insert(1, 1, value[0]));
	else {
		if (value == "nan")
			return "impossible";
		char vChar = atoi(value.c_str());
		if (isprint(vChar))
			return (std::string("''").insert(1, 1, vChar));
	}
	return "Non displayable";
}

std::string extractInt(std::string value) {
	if (value == "nan")
		return "impossible";
	std::istringstream iss(value);
	iss.exceptions(std::ios::failbit);
	try {
		int num = 0;
		iss >> num;
		std::stringstream ss;
		ss << atoi(value.c_str());
		return ss.str();
	}
	catch (std::exception & e) {
		return "nan";
	}
	return value;
}

std::string extractFloat(std::string value) {
	if (value == "nan")
		return "nanf";
	if (value == "-inf" || value == "+inf")
		return (value + "f");
	float num = 0;
	std::istringstream iss(value);
	iss.exceptions(std::ios::failbit);
	try {
		iss >> num;
		if (std::isinf(num)) {
			if (num < 0)
				return "-inff";
			return "+inff";
		}
		std::stringstream ss;
		if (num - (int)num == 0)
			ss << (int)num << ".0f";
		else
			ss << num << "f";
		return ss.str();
	} catch (std::exception & e) {
		return ("nanf");
	}
	return "";
}

std::string extractDouble(std::string value) {
	if (value == "nan" || value == "-inf" || value == "+inf")
		return value;
	std::istringstream iss(value);
	iss.exceptions(std::ios::failbit);
	try {
		float num = 0;
		iss >> num;
		if (std::isinf(num)) {
			if (num < 0)
				return "-inff";
			return "+inff";
		}
		std::stringstream ss;
		ss << num;
		return ss.str();
	} catch (std::exception & e) {
		return ("nan");
	}
	return "";
}

void ScalarConverter::convert(std::string const & value) {
	std::string symbol = extractChar(value);
	std::string m_int = extractInt(value);
	std::string m_float = extractFloat(value);
	std::string m_double = extractDouble(value);

	std::cout << "char: " << symbol << std::endl;
	std::cout << "int: " << m_int << std::endl;
	std::cout << "float: " << m_float << std::endl;
	std::cout << "double: " << m_double << std::endl;
}

ScalarConverter & ScalarConverter::operator = (ScalarConverter const & pointer) {
	(void)pointer;
	return *this;
}

ScalarConverter::~ScalarConverter(void) {}