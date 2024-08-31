#include "Dog.hpp"

Dog::Dog(void): Animal() {
	std::cout << "Dog Derived Default Constructor called" << std::endl;
	Animal::type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &a): Animal(a) {
	std::cout << "Dog Derived Copy Constructor called" << std::endl;
	const int	ideas_size = 100;

	Animal::type = a.type;
	this->brain = new Brain();
	for (int i = 0; i < ideas_size; i++)
		this->brain->ideas[i] = a.brain->ideas[i];
}

Dog &(Dog::operator=)(Dog a) {
	std::cout << "Dog Derived Copy Assignment Operator called" << std::endl;
	std::swap(this->type, a.type);
	std::swap(this->brain, a.brain);
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
