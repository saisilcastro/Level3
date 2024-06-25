#ifndef CAT_H
#define CAT_H

#include "AAnimal.h"

class Cat: public AAnimal {
	public:
		Cat(void);
		Cat(std::string);
		Cat(Cat const &);
		void makeSound(void) const;
		Brain *getBrain(void) const;
		Cat & operator = (Cat const &);
		~Cat(void);
	private:
		Brain *brain;
};

#endif