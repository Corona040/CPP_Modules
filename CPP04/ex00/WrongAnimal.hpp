#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <string>

class WrongAnimal {
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &a);
		WrongAnimal &(operator=)(const WrongAnimal &a);
		~WrongAnimal(void);

		void		makeSound(void) const;
		std::string	getType(void) const;

	protected:
		std::string type;
};

#endif
