#ifndef SCALAR_CONVERTER_H
#define SCALAR_CONVERTER_H

#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>
#include <cmath>

class ScalarConverter{
	private:
		ScalarConverter(void);
		ScalarConverter(ScalarConverter const &);
		ScalarConverter & operator = (ScalarConverter const &);
		~ScalarConverter(void);
	public:
		static void convert(std::string const &);
};

#endif