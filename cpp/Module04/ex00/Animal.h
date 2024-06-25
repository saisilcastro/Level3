#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {
	public:
		Animal(void);
		Animal(std::string);
		Animal(const Animal &);
		std::string getType(void) const;
		virtual void makeSound(void) const;
		Animal & operator = (Animal const &);
		virtual ~Animal(void);
	protected:
		std::string type;
};

#endif