#include "Form.h"

int main(void) {
	try {
		Form form("college form", 5, 10);
		Bureaucrat fucker = Bureaucrat("fucker", 4);
		form.beSigned(fucker);
		form.signForm(fucker);
	}
	catch (std::exception & e) {
		std::cout << "Form " << e.what() <<  "\n";
	}
	return (0);
}
