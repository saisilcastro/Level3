#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain {
	public:
		Brain(void);
		Brain(Brain const &);
		void setIdea(std::string, int);
		std::string getIdea(int);
		Brain & operator = (Brain const &);
		~Brain(void);
	protected:
		std::string ideas[100];
};

#endif