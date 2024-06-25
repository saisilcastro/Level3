#ifndef AANIMAL_H
#define AANIMAL_H

#include "Brain.h"
#include <iostream>

class AAnimal {
	public:
		AAnimal(void);
		AAnimal(std::string);
		AAnimal(const AAnimal &);
		std::string getType(void) const;
		virtual void makeSound(void) const;
		virtual Brain* getBrain(void) const = 0;
		AAnimal & operator = (AAnimal const &);
		virtual ~AAnimal(void);
	protected:
		std::string type;
};

#endif