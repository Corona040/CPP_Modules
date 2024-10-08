#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>
# include <iostream>

class Animal {
	public:
		Animal(void);
		Animal(const Animal &a);
		virtual	~Animal(void);

		virtual void	makeSound(void) const;
		std::string		getType(void) const;

	protected:
		std::string type;

	private:
		virtual Animal &(operator=)(Animal a);
};

#endif
