#ifndef SHRUBBERY_CREATION_FORM_H
#define SHRUBBERY_CREATION_FORM_H

#include "AForm.h"
#include <fstream>

class ShrubberyCreationForm : public AForm {
	public:
		class ShrubberyHandler : public std::exception {
			public:
				explicit ShrubberyHandler(const std::string &);
				virtual const char* what() const throw();
				virtual ~ShrubberyHandler() throw();
			private:
				std::string message;
		};
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string const);
		ShrubberyCreationForm(ShrubberyCreationForm const &);
		void execute(Bureaucrat const &) const;
		ShrubberyCreationForm & operator = (ShrubberyCreationForm const &);
		~ShrubberyCreationForm(void);
	private:
		const std::string target;
};

#endif