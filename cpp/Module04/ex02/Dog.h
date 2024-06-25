#ifndef DOG_H
#define DOG_H

#include "AAnimal.h"

class Dog: public AAnimal {
	public:
		Dog(void);
		Dog(std::string);
		Dog(Dog const &);
		void makeSound(void) const;
		Brain *getBrain(void) const;
		Dog & operator = (Dog const &);
		~Dog(void);
	private:
		Brain *brain;
};

#endif