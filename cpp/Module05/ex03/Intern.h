#ifndef INTERN_H
#define INTERN_H

#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"

class Intern {
	public:
		Intern(void);
		Intern(Intern const &);
		AForm * makeForm(std::string const & name, std::string const & target) const;
		~Intern(void);
	private:
		std::string *form;
};

#endif