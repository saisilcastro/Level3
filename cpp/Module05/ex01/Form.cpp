#include "Form.h"

Form::Form(std::string const _name, short _sign_grade, short _exec_grade)
	: name(_name), is_sign(false), sign_grade(_sign_grade), exec_grade(_exec_grade) {
	std::cout << "Form has been created\n";
}

Form::Form(void) : name("formless"), is_sign(false), sign_grade(150), exec_grade(150) {
	std::cout << "Form has been created\n";
}

Form::Form(Form const & pointer) : name("formless"), is_sign(false), sign_grade(150), exec_grade(150){
	std::cout << "Form has been created\n";
	*this = pointer;
}

std::string Form::getName(void) const {
	return name;
}

bool Form::isSign(void) const {
	return is_sign;
}

short Form::getSignGrade(void) const {
	return sign_grade;
}

short Form::getExecGrade(void) const {
	return exec_grade;
}

void Form::signForm(Bureaucrat & bureaucrat) {
	if (is_sign)
		std::cout << bureaucrat.getName() << " signed " << name << std::endl;
	else
	{
		if (bureaucrat.getGrade() < sign_grade)
			std::cout << bureaucrat.getName() << " couldn't sign " << name << " because grade is to high\n";
		else if (bureaucrat.getGrade() > sign_grade)
			std::cout << bureaucrat.getName() << " couldn't sign " << name << " because grade is to low\n";
	}
}

Form::FormHandler::FormHandler(const std::string& _message) : message(_message) {}

const char* Form::FormHandler::what() const throw() {
    return message.c_str();
}

Form::FormHandler::~FormHandler() throw() {}

void Form::beSigned(Bureaucrat & bureaucrat) {
	is_sign = false;
	if (bureaucrat.getGrade() < sign_grade)
		throw FormHandler("Your bloody grade is too high to sign the form");
	else if (bureaucrat.getGrade() > sign_grade)
		throw FormHandler("Your bloody grade is too low to sign the form");
	else
		is_sign = true;
}

std::ostream & operator << (std::ostream & out, Form const & pointer) {
	return out << pointer.getName()
			   << " with Sign Grade " << pointer.getSignGrade()
			   << " Exec Grade " << pointer.getExecGrade()
			   << " and activation " << pointer.isSign();
}

Form & Form::operator = (Form const & pointer) {
	std::cout << "Form operator has been created\n";
	if (this == &pointer) {
		//name = pointer.name;
		is_sign = pointer.is_sign;
		//sign_grade = pointer.sign_grade;
		//exec_grade = pointer.exec_grade;
	}
	return *this;
}

Form::~Form(void) {
	std::cout << "Form has been destroyed\n";
}