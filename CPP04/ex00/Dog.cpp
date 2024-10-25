#include "Dog.hpp"

Dog::Dog(void): Animal() {
	std::cout << "Dog Derived Default Constructor called" << std::endl;
	Animal::type = "Dog";
}

Dog::Dog(const Dog &a): Animal(a) {
	std::cout << "Dog Derived Copy Constructor called" << std::endl;
	Animal::type = a.type;
}

Dog &(Dog::operator=)(Dog a) {
	std::cout << "Dog Derived Copy Assignment Operator called" << std::endl;
	this->type = a.type;
	return (*this);
}

Dog::~Dog(void) {
	std::cout << "Dog Derived Default Destructor called" << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << "Dog Derived makeSound called" << std::endl;
	std::cout << "AuAu!" << std::endl;
}
