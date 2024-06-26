#include "Form.h"

Form::Form(void) {
	std::cout << "Form has been created\n";
	name = "formless";
	is_sign = false;
	sign_grade = 0;
	exec_grade = 0;
}

Form::Form(std::string const _name, short const _sign_grade, short const _exec_grade) {
	std::cout << "Form has been created\n";
	name = _name;
	is_sign = false;
	sign_grade = _sign_grade;
	exec_grade = _exec_grade;
}

Form::Form(Form const & pointer) {
	std::cout << "Form has been created\n";
	*this = pointer;
}

std::string Form::getName(void) const {
	return name;
}

bool Form::isSign(void) const {
	return is_sign;
}

short Form::getGrade(void) const {
	return sign_grade;
}

short Form::getExec(void) const {
	return exec_grade;
}

std::ostream & operator << (std::ostream & out, Form const & pointer) {
	return out << getName() << " with Sign Grade " << getGrade() << " Exec Grade " << getExec() << " and activation " << isSign();
}

Form Form::operator = (Form const & pointer) {
	std::cout << "Form operator has been created\n";
	if (this == &pointer) {
		name = pointer.name;
		is_sign = pointer.is_sign;
		sign_grade = pointer.sign_grade;
		exec_grade = pointer.exec_grade;
	}
	return *this;
}

Form::~Form(void) {
	std::cout << "Form has been destroyed\n";
}