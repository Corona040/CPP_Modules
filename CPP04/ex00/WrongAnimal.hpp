#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <string>
# include <iostream>

class WrongAnimal {
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &a);
		WrongAnimal &(operator=)(WrongAnimal a);
		~WrongAnimal(void);

		void		makeSound(void) const;
		std::string	getType(void) const;

	protected:
		std::string type;
};

#endif
