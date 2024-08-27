#include "Dog.hpp"

Dog::Dog(void): AAnimal() {
	std::cout << "Dog Derived Default Constructor called" << std::endl;
	AAnimal::type = "Dog";
	this->brain = new Brain;
}

Dog::Dog(const Dog &a): AAnimal(a) {
	std::cout << "Dog Derived Copy Constructor called" << std::endl;
	const int	ideas_size = 100;

	AAnimal::type = a.type;
	for (int i = 0; i < ideas_size; i++)
		this->brain->ideas[i] = a.brain->ideas[i];
}

Dog &(Dog::operator=)(const Dog &a) {
	std::cout << "Dog Derived Copy Assignment Operator called" << std::endl;
	*this = Dog(a);
	return (*this);
}

Dog::~Dog(void) {
	std::cout << "Dog Derived Default Destructor called" << std::endl;
	delete this->brain;
}

void	Dog::makeSound(void) const {
	std::cout << "Dog Derived makeSound called" << std::endl;
	std::cout << "AuAu!" << std::endl;
}
