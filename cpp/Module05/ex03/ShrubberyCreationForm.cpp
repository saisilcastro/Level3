#include "ShrubberyCreationForm.h"

#define DRAW "\
       _-_               _-_               _-_\n\
    /~~   ~~\\         /~~   ~~\\         /~~   ~~\\\n\
 /~~         ~~\\   /~~         ~~\\   /~~         ~~\\\n\
{               } {               } {               }\n\
 \\  _-     -_  /   \\  _-     -_  /   \\  _-     -_  /\n\
   ~  \\ //  ~        ~  \\ //  ~        ~  \\ //  ~\n\
_- -   | | _- _   _- -   | | _- _   _- -   | | _- _\n\
  _ -  | |   -_     _ -  | |   -_     _ -  | |   -_\n\
      // \\              // \\              // \\\
"

ShrubberyCreationForm::ShrubberyCreationForm(void) :
AForm("Shrubbery Request Form", 145, 137), target("fucker") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const value) :
AForm("Shrubbery Request Form", 145, 137), target(value){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & pointer) :
AForm("Shrubbery Request Form", 145, 137), target("fucker") {
	*this = pointer;
}

ShrubberyCreationForm::ShrubberyHandler::ShrubberyHandler(const std::string & value) : message(value) {}

const char * ShrubberyCreationForm::ShrubberyHandler::what() const throw() {
    return message.c_str();
}

ShrubberyCreationForm::ShrubberyHandler::~ShrubberyHandler(void) throw() {}

void writeTrees(std::string const & file) throw(std::ios_base::failure) {
	std::ofstream writer(file.c_str(), std::ios::out | std::ios::trunc);
	if (!writer.is_open() || writer.fail()) {
		throw std::ios_base::failure("Couldn't open the fucking file");
	}
	writer << DRAW;
	if (writer.fail()) {
		throw std::ios_base::failure("Error drawing trees");
	}
	writer.close();
	if (writer.fail()) {
		throw std::ios_base::failure("Couldn't close the fucking file");
	}
}

void ShrubberyCreationForm::execute(Bureaucrat const & fucker) const {
	if (!isSigned())
		throw ShrubberyHandler("Must be signed to be robotomized");
	else {
		if (fucker.getGrade() > getExecGrade())
			throw ShrubberyHandler("Your grade is too low to be robotomized");
		writeTrees(target + "_shrubbery");
	}
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (ShrubberyCreationForm const & pointer) {
	if (this != &pointer) {
		AForm::operator = (pointer);
		const_cast<std::string &>(target) = pointer.target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}