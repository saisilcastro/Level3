#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"

void presidentalPardomExecute(void);
void robotomyExecute(void);
void shrubberyExecute(void);

int main(void) {
	int	execution = 1;
	switch (execution) {
		case 0:
			presidentalPardomExecute();
		break;
		case 1:
			robotomyExecute();
		break;
		case 2:
			shrubberyExecute();
		break;
	}
	return (0);
}

void shrubberyExecute(void) {
	try {
		ShrubberyCreationForm shrubbery;
		Bureaucrat fucker("Fucker", 80);
		fucker.signForm(shrubbery);
		fucker.executeForm(shrubbery);
	}
	catch (std::exception & e) {
		std::cout << "Shrubbery error: " << e.what() << std::endl;
	}
}

void robotomyExecute(void) {
	try {
		RobotomyRequestForm robotize;
		Bureaucrat fucker("Fucker", 45);
		fucker.signForm(robotize);
		fucker.executeForm(robotize);
	}
	catch (std::exception & e) {
		std::cout << "Robotization error: " << e.what() << std::endl;
	}
}

void presidentalPardomExecute(void) {
	try {
		PresidentialPardomForm pardom;
		Bureaucrat fucker("Fucker", 5);
		fucker.signForm(pardom);
		fucker.executeForm(pardom);
	}
	catch (std::exception & e) {
		std::cout << "Presidential error: " << e.what() << std::endl;
	}
}