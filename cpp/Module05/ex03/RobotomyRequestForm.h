#ifndef ROBOTOMY_REQUEST_FORM_H
#define ROBOTOMY_REQUEST_FORM_H

#include "AForm.h"

class RobotomyRequestForm : public AForm {
	public:
		class RobotomyHandler : public std::exception {
			public:
				explicit RobotomyHandler(const std::string &);
				virtual const char* what() const throw();
				virtual ~RobotomyHandler() throw();
			private:
				std::string message;
		};
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string const);
		RobotomyRequestForm(RobotomyRequestForm const &);
		void execute(Bureaucrat const &) const;
		RobotomyRequestForm & operator = (RobotomyRequestForm const &);
		~RobotomyRequestForm(void);
	private:
		const std::string target;
};

#endif