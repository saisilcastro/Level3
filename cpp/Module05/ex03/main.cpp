#include "Intern.h"

int main(int argc, char **argv) {
	if (argc == 1) {
		srand(time(NULL));
		Intern intern;
		AForm * form = intern.makeForm("Presidential Pardom", "sucker");
		Bureaucrat fucker("fucker", rand() % 50);
		fucker.signForm(*form);
		fucker.executeForm(*form);
		delete form;
	}
	else if (argc == 2)
	{
		srand(time(NULL));
		Intern intern;
		AForm * form = intern.makeForm(argv[1], "sucker");
		Bureaucrat fucker("fucker", rand() % 50);
		fucker.signForm(*form);
		fucker.executeForm(*form);
		delete form;
	}
	else if (argc == 3)
	{
		srand(time(NULL));
		Intern intern;
		AForm * form = intern.makeForm(argv[1], argv[2]);
		Bureaucrat fucker(argv[2], rand() % 50);
		fucker.signForm(*form);
		fucker.executeForm(*form);
		delete form;
	}
	return (0);
}
