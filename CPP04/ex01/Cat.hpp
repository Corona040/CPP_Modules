#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
	public:
		Cat(void);
		Cat(const Cat &a);
		Cat &(operator=)(const Cat &a);
		~Cat(void);

		void	makeSound(void) const;
	
	private:
		Brain	*brain;
};

#endif
