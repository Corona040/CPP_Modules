#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal {
	public:
		Dog(void);
		Dog(const Dog &a);
		Dog &(operator=)(Dog a);
		~Dog(void);

		void	makeSound(void) const;
	
		Brain	*brain;
	private:
};

#endif
