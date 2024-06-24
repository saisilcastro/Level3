#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal(void);
		WrongAnimal(std::string);
		WrongAnimal(const WrongAnimal &);
		std::string getType(void) const;
		virtual void makeSound(void) const;
		WrongAnimal & operator = (const WrongAnimal &);
		virtual ~WrongAnimal(void);
	protected:
		std::string type;
};

#endif