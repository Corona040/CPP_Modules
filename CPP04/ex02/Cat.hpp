#ifndef CAT_H
# define CAT_H

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal {
	public:
		Cat(void);
		Cat(const Cat &a);
		Cat &(operator=)(Cat a);
		~Cat(void);

		void	makeSound(void) const;
	
	private:
		Brain	*brain;
};

#endif
