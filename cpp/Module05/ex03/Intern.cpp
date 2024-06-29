#include "Intern.h"

Intern::Intern(void) {
	form = new std::string[3];
	form[0] = "Presidential Pardom";
	form[1] = "Robotomy Request";
	form[2] = "Shrubbery Creation";
}

AForm * Intern::makeForm(std::string const & name, std::string const & target) const {
	for (int i = 0; i < 3; i++) {
		if (form[i] == name)
		{
			switch (i) {
				case 0:
					return (new PresidentialPardomForm(target));
				case 1:
					return (new RobotomyRequestForm(target));
				case 2:
					return (new ShrubberyCreationForm(target));
			}
		}
	}
	std::cout << "there's no such form\n";
	return NULL;
}

Intern::~Intern(void) {
	delete []form;
}