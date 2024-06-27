#include "Bureaucrat.h"

int main(void) {
	try {
		Bureaucrat jerk("fucker", 1);
		jerk.decGrade();
		std::cout << jerk << std::endl;
		jerk.incGrade();
		std::cout << jerk << std::endl;
		jerk.incGrade();
		std::cout << jerk << std::endl;
		jerk.checkGrade(1, 150);
	}
	catch (const std::exception& e) {
        std::cout << "Bureaucrat " << e.what() <<  "\n";
    }
	return (0);
}
