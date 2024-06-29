#include "AForm.h"

AForm::AForm(std::string const _name, short _sign_grade, short _exec_grade)
	: name(_name), is_sign(false), sign_grade(_sign_grade), exec_grade(_exec_grade) {}

AForm::AForm(void) : name("Formless"), is_sign(false), sign_grade(150), exec_grade(150) {}

AForm::AForm(AForm const & pointer) : name("Formless"), is_sign(false), sign_grade(150), exec_grade(150){
	*this = pointer;
}

std::string AForm::getName(void) const {
	return name;
}

short AForm::getSignGrade(void) const {
	return sign_grade;
}

short AForm::getExecGrade(void) const {
	return exec_grade;
}

bool AForm::isSigned(void) const {
	return is_sign;
}

AForm::AFormHandler::AFormHandler(const std::string& _message) : message(_message) {}

const char* AForm::AFormHandler::what() const throw() {
    return message.c_str();
}

AForm::AFormHandler::~AFormHandler() throw() {}

void AForm::beSigned(Bureaucrat & bureaucrat) {
	is_sign = false;
	if (bureaucrat.getGrade() > sign_grade)
		throw AFormHandler("Your bloody grade is too low to sign the Form");
	else
		is_sign = true;
}

std::ostream & operator << (std::ostream & out, AForm const & pointer) {
	return out << pointer.getName()
			   << " with Sign Grade " << pointer.getSignGrade()
			   << " Exec Grade " << pointer.getExecGrade()
			   << " and activation " << pointer.isSigned();
}

AForm & AForm::operator = (AForm const & pointer) {
	std::cout << "AForm operator has been created\n";
	if (this != &pointer) {
		const_cast<std::string&>(name) = pointer.name;
		is_sign = pointer.is_sign;
		const_cast<short&>(sign_grade) = pointer.sign_grade;
		const_cast<short&>(exec_grade) = pointer.exec_grade;
	}
	return *this;
}

void AForm::execute(Bureaucrat const & bureaucrat) const {
	if (!is_sign)
		throw AFormHandler("Can't execute without sign");
	else {
		if (bureaucrat.getGrade() > exec_grade)
			throw AFormHandler("Your grade is too low to execute your fucker");
		std::cout << "Executing " << name << " as " << bureaucrat.getName() << std::endl;
	}
}

AForm::~AForm(void) {}