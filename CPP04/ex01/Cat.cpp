#include "Cat.hpp"

Cat::Cat(void): Animal() {
	std::cout << "Cat Derived Default Constructor called" << std::endl;
	Animal::type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &a): Animal(a) {
	std::cout << "Cat Derived Copy Constructor called" << std::endl;
	const int	ideas_size = 100;

	Animal::type = a.type;
	this->brain = new Brain();
	for (int i = 0; i < ideas_size; i++)
		this->brain->ideas[i] = a.brain->ideas[i];
}

Cat &(Cat::operator=)(Cat a) {
	std::cout << "Cat Derived Copy Assignment Operator called" << std::endl;
	std::swap(this->type, a.type);
	std::swap(this->brain, a.brain);
	return (*this);
}

Cat::~Cat(void) {
	std::cout << "Cat Derived Default Destructor called" << std::endl;
	delete this->brain;
}

void	Cat::makeSound(void) const {
	std::cout << "Cat Derived makeSound called" << std::endl;
	std::cout << "Miau!" << std::endl;
}
