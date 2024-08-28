#ifndef AANIMAL_H
# define AANIMAL_H

# include <string>
# include <iostream>

class AAnimal {
	public:
		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;

	protected:
		AAnimal(void);
		AAnimal(const AAnimal &a);
		AAnimal &(operator=)(const AAnimal &a);
		virtual	~AAnimal(void);

		std::string type;
};

#endif

// Creating pure virtual function (virtual .. = 0)
// Making destructor pure virtual
// Making constructors protected
