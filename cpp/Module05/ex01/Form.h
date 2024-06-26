#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.h"

class Form {
	class GradeHandler : public std::exception {
	public:
		explicit GradeHandler(const std::string& message);
		virtual const char* what() const throw();
		virtual ~GradeHandler() throw();
	private:
    	std::string message;
	};
	public:
		Form(void);
		Form(std::string const, short const, short const);
		Form(Form const &);
		std::string getName() const;
		short getSign() const;
		short getExec() const;
		bool isSign() const;
		Form & operator = (Form const &);
		~Form(void);
	private:
		std::string const name;
		bool is_sign;
		short const sign_grade;
		short const exec_grade;
};

std::ostream & operator << (std::ostream &, const Form &);

#endif