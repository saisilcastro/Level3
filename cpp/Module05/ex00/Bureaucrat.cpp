#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(void) : name("nameless") {
    srand(time(NULL));
    grade = (rand() % 299) + 1;
}

Bureaucrat::Bureaucrat(std::string _name, short _grade) : name(_name), grade(_grade) {}

Bureaucrat::Bureaucrat(Bureaucrat const & pointer) : name(pointer.name), grade(pointer.grade) {}

std::string Bureaucrat::getName(void) const {
	return name;
}

short Bureaucrat::getGrade(void) const {
    return grade;
}

void Bureaucrat::incGrade(void) {
    if (grade <= 1)
        throw GradeHandler("you reach the top of the grade. Can't increase anymore");
    grade--;
}

void Bureaucrat::decGrade(void) {
    if (grade >= 150)
        throw GradeHandler("you reach the bottom of the grade. Can't decrease anymore");
    grade++;
}

void Bureaucrat::checkGrade(int max, int min) const {
    if (grade < max)
        throw GradeHandler("Your bloody grade is too high");
    else if (grade > min)
        throw GradeHandler("Your bloody grade is too low");
}



Bureaucrat & Bureaucrat::operator = (Bureaucrat const& pointer) {
    if (this != &pointer) {
        name = pointer.name;
        grade = pointer.grade;
    }
    return *this;
}

std::ostream & operator << (std::ostream & out, const Bureaucrat & pointer) {
    return out << pointer.getName() << " has grade " << pointer.getGrade();
}

Bureaucrat::GradeHandler::GradeHandler(const std::string & _message) : message(_message) {}

const char* Bureaucrat::GradeHandler::what() const throw() {
    return message.c_str();
}

Bureaucrat::GradeHandler::~GradeHandler() throw() {}

Bureaucrat::~Bureaucrat(void) {}
