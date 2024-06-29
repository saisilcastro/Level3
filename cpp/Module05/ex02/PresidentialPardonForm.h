#ifndef PRESIDENTIAL_PARDOM_FORM_H
#define PRESIDENTIAL_PARDOM_FORM_H

#include "AForm.h"

class PresidentialPardomForm : public AForm {
	public:
		class PresindentialHandler : public std::exception {
			public:
				explicit PresindentialHandler(const std::string &);
				virtual const char* what() const throw();
				virtual ~PresindentialHandler() throw();
			private:
				std::string message;
		};
		PresidentialPardomForm(void);
		PresidentialPardomForm(std::string const);
		PresidentialPardomForm(PresidentialPardomForm const &);
		void execute(Bureaucrat const &) const;
		PresidentialPardomForm & operator = (PresidentialPardomForm const &);
		~PresidentialPardomForm(void);
	private:
		const std::string target;
};

#endif