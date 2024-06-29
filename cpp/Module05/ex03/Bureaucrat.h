#pragma once
#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include "AForm.h"

class AForm;
class Bureaucrat {
public:
    class GradeHandler : public std::exception {
	public:
		explicit GradeHandler(const std::string& message);
		virtual const char* what() const throw();
		virtual ~GradeHandler() throw();
	private:
    	std::string message;
	};
    Bureaucrat(void);
    Bureaucrat(std::string, short);
    Bureaucrat(Bureaucrat const &);
    void incGrade(void);
    void decGrade(void);
	std::string getName(void) const;
    short getGrade(void) const;
    void checkGrade(int min, int max) const;
    void signForm(AForm &);
    void executeForm(AForm const &) const;
    Bureaucrat & operator = (Bureaucrat const &);
    ~Bureaucrat(void);
private:
    std::string name; // Removed const if name is mutable
    short grade;
};

std::ostream & operator << (std::ostream &, const Bureaucrat &);

#endif
