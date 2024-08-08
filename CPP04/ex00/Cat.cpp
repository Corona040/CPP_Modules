#include "Cat.hpp"
#include <iostream>

Cat::Cat(void): Animal() {
	std::cout << "Cat Derived Default Constructor called" << std::endl;
	Animal::type = "Cat";
}

Cat::Cat(const Cat &a): Animal(a) {
	std::cout << "Cat Derived Copy Constructor called" << std::endl;
	Animal::type = a.type;
}

Cat &(Cat::operator=)(const Cat &a) {
	std::cout << "Cat Derived Copy Assignment Operator called" << std::endl;
	this->type = a.type;
	return (*this);
}

Cat::~Cat(void) {
	std::cout << "Cat Derived Default Destructor called" << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << "Cat Derived makeSound called" << std::endl;
	std::cout << "Miau!" << std::endl;
}
