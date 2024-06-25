#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>

class Bureaucrat {
	public:
		Bureaucrat(void);
		Bureaucrat(std::string, short);
		Bureaucrat(Bureaucrat const &);
		Bureaucrat & operator = (Bureaucrat const &);
		~Bureaucrat(void);
	private:
		std::string const name;
		short grade;
};

#endif