#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog: public Animal {
	public:
		Dog(void);
		Dog(std::string);
		Dog(Dog const &);
		void makeSound(void) const;
		Dog & operator = (Dog const &);
		~Dog(void);
};

#endif