#include "Dog.hpp"

Dog::Dog(void): AAnimal() {
	std::cout << "Dog Derived Default Constructor called" << std::endl;
	AAnimal::type = "Dog";
	this->brain = new Brain;
}

Dog::Dog(const Dog &a): AAnimal(a) {
	std::cout << "Dog Derived Copy Constructor called" << std::endl;

	this->type = a.type;
	this->brain = new Brain(*a.brain);
}

Dog &(Dog::operator=)(Dog a) {
	std::cout << "Dog Derived Copy Assignment Operator called" << std::endl;

	this->type = a.type;
	*this->brain = *a.brain;
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
