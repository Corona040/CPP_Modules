#include "Animal.hpp"

Animal::Animal(void): type("") {
	std::cout << "Animal base Default Constructor called" << std::endl;
}

Animal::Animal(const Animal &a): type(a.type) {
	std::cout << "Animal base Copy Constructor called" << std::endl;
}

Animal &(Animal::operator=)(Animal a) {
	std::cout << "Animal Derived Copy Assignment Operator called" << std::endl;
	(void)a;
	return (*this);
}

Animal::~Animal(void) {
	std::cout << "Animal base Default Destructor called" << std::endl;
}

void	Animal::makeSound(void) const {
	std::cout << "Animal base makeSound called" << std::endl;
	std::cout << "..." << std::endl;
}

std::string	Animal::getType(void) const {
	std::cout << "Animal base getType called" << std::endl;
	return (this->type);
}
