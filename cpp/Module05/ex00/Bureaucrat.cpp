#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(void) : name("nameless") {
	std::cout << "Bureaucrat has been created\n";
    srand(time(NULL));
    grade = (rand() % 299) + 1;
}

Bureaucrat::Bureaucrat(std::string _name, short _grade) : name(_name), grade(_grade) {
	std::cout << "Bureaucrat has been created\n";
}

Bureaucrat::Bureaucrat(Bureaucrat const & pointer) : name(pointer.name), grade(pointer.grade) {
	std::cout << "Bureaucrat has been created\n";
}

std::string Bureaucrat::getName(void) const {
	return name;
}

short Bureaucrat::getGrade(void) const {
    return grade;
}

void Bureaucrat::incGrade(void) {
    grade--;
}

void Bureaucrat::decGrade(void) {
    grade++;
}

void Bureaucrat::checkGrade(int max, int min) const {
    if (grade < max)
        throw GradeHandler("Your bloody grade is too high");
    else if (grade > min)
        throw GradeHandler("Your bloody grade is too low");
}

Bureaucrat & Bureaucrat::operator = (Bureaucrat const& pointer) {
	std::cout << "Bureaucrat operator has been called\n";
    if (this!= &pointer) {
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

Bureaucrat::~Bureaucrat(void) {
    std::cout << "Bureaucrat has been destroyed\n";
}
