#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
	public:
		WrongCat(void);
		WrongCat(const WrongCat &a);
		WrongCat &(operator=)(WrongCat a);
		~WrongCat(void);

		void	makeSound(void) const;
};

#endif
