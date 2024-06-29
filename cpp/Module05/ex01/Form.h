#pragma once
#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.h"

class Bureaucrat;
class Form {
	public:
		class FormHandler : public std::exception {
			public:
				explicit FormHandler(const std::string& message);
				virtual const char* what() const throw();
				virtual ~FormHandler() throw();
			private:
				std::string message;
		};
		Form(void);
		Form(std::string const, short, short);
		Form(Form const &);
		std::string getName(void) const;
		short getSignGrade(void) const;
		short getExecGrade(void) const;
		bool isSigned(void) const;
		void beSigned(Bureaucrat &);
		Form & operator = (Form const &);
		~Form(void);
	private:
		std::string const name;
		bool is_sign;
		const short sign_grade;
		const short exec_grade;
};

std::ostream & operator << (std::ostream &, const Form &);

#endif