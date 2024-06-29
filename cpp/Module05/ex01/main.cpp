#include "Form.h"

void gotSigned(void);
void lowGrade(void);
void formTop(void);
void formBottom(void);

int main(void) {
	int test = 1;
	switch (test) {
		case 0:
			gotSigned();
		break;
		case 1:
			lowGrade();
		break;
		case 2:
			formTop();
		break;
		case 3:
			
			formBottom();
		break;
	}
	return (0);
}

void gotSigned(void) {
	try {
		Form form("college form", 1, 10);
		Bureaucrat fucker = Bureaucrat("fucker", 1);
		std::cout << form << " " << std::endl;
		std::cout << fucker << std::endl;
		fucker.signForm(form);
	}
	catch (std::exception & e) {
		std::cout << "Form error: " << e.what() <<  "\n";
	}
}

void lowGrade(void) {
	try {
		Form form("college form", 1, 10);
		Bureaucrat fucker = Bureaucrat("fucker", 1);
		fucker.decGrade();
		std::cout << form << " " << std::endl;
		std::cout << fucker << std::endl;
		fucker.signForm(form);
	}
	catch (std::exception & e) {
		std::cout << "Form error: " << e.what() <<  "\n";
	}
}

void formTop(void) {
	try {
		Form form("college form", 2, 10);
		Bureaucrat fucker = Bureaucrat("fucker", 1);
		fucker.incGrade();
		std::cout << form << " " << std::endl;
		std::cout << fucker << std::endl;
		fucker.signForm(form);
	}
	catch (std::exception & e) {
		std::cout << "Form error: " << e.what() <<  "\n";
	}
}

void formBottom(void) {
	try {
		Form form("college form", 1, 10);
		Bureaucrat fucker = Bureaucrat("fucker", 150);
		fucker.decGrade();
		std::cout << form << " " << std::endl;
		std::cout << fucker << std::endl;
		fucker.signForm(form);
	}
	catch (std::exception & e) {
		std::cout << "Form error: " << e.what() <<  "\n";
	}
}