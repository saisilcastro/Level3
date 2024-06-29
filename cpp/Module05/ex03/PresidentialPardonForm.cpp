#include "PresidentialPardonForm.h"

PresidentialPardomForm::PresidentialPardomForm(void) : 
AForm("Presidental Pardom Form", 25, 5), target("fucker") {}

PresidentialPardomForm::PresidentialPardomForm(std::string const value) :
AForm("Presidential Pardom Form", 25, 5), target(value) {}

PresidentialPardomForm::PresidentialPardomForm(PresidentialPardomForm const & pointer) :
AForm("Presidential Pardom Form", 25, 5), target("sucker") {
	*this = pointer;
}

PresidentialPardomForm::PresindentialHandler::PresindentialHandler(const std::string & value) : message(value) {}

const char * PresidentialPardomForm::PresindentialHandler::what() const throw() {
    return message.c_str();
}

PresidentialPardomForm::PresindentialHandler::~PresindentialHandler(void) throw() {}

void PresidentialPardomForm::execute(Bureaucrat const & fucker) const{
	if (!isSigned())
		throw PresindentialHandler("Must be signed to be pardoned by president");
	else {
		if (fucker.getGrade() > getExecGrade())
			throw PresindentialHandler("Your grade is too low to be bardoned by president");
		std::cout << fucker.getName() <<  " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
}

PresidentialPardomForm & PresidentialPardomForm::operator = (PresidentialPardomForm const & pointer) {
	if (this != &pointer) {
		AForm::operator = (pointer);
		const_cast<std::string &>(target) = pointer.target;
	}
	return (*this);
}

PresidentialPardomForm::~PresidentialPardomForm(void){}