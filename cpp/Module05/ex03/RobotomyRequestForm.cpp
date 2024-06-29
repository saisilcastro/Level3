#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm(void) :
AForm("Robotomy Request Form", 72, 45), target("fucker") {}

RobotomyRequestForm::RobotomyRequestForm(std::string const value) :
AForm("Robotomy Request Form", 72, 45), target(value){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & pointer) :
AForm("Robotomy Request Form", 72, 45), target("fucker") {
	*this = pointer;
}

RobotomyRequestForm::RobotomyHandler::RobotomyHandler(const std::string & value) : message(value) {}

const char * RobotomyRequestForm::RobotomyHandler::what() const throw() {
    return message.c_str();
}

RobotomyRequestForm::RobotomyHandler::~RobotomyHandler(void) throw() {}

void RobotomyRequestForm::execute(Bureaucrat const & fucker) const {
	if (!isSigned())
		throw RobotomyHandler("Must be signed to be robotomized");
	else {
		if (fucker.getGrade() > getExecGrade())
			throw RobotomyHandler("Your grade is too low to be robotomized");
		srand(time(NULL));
		if (rand() % 2)
			std::cout << fucker.getName() <<  " has been robotomized" << std::endl;
		else
			std::cout << fucker.getName() << " couldn't be robotomized" << std::endl;
	}
}

RobotomyRequestForm & RobotomyRequestForm::operator = (RobotomyRequestForm const & pointer) {
	if (this != &pointer) {
		AForm::operator = (pointer);
		const_cast<std::string &>(target) = pointer.target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}