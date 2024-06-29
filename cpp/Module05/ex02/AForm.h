#pragma once
#ifndef AFORM_H
#define AFORM_H

#include "Bureaucrat.h"

class Bureaucrat;
class AForm {
	public:
		class AFormHandler : public std::exception {
			public: // generic handler to throw exceptions
				explicit AFormHandler(const std::string& message);
				virtual const char* what() const throw();
				virtual ~AFormHandler() throw();
			private:
				std::string message;
		};
		AForm(void);
		AForm(std::string const, short, short);
		AForm(AForm const &);
		AForm & operator = (AForm const &);
		std::string getName(void) const;
		short getSignGrade(void) const;
		short getExecGrade(void) const;
		bool isSigned(void) const;
		void beSigned(Bureaucrat &);
		virtual void execute(Bureaucrat const &) const;
		virtual ~AForm(void);
	private:
		std::string const name;
		bool is_sign;
		const short sign_grade;
		const short exec_grade;
};

std::ostream & operator << (std::ostream &, const AForm &);

#endif