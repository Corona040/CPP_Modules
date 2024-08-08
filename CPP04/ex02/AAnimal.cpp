#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal(void): type("") {
	std::cout << "AAnimal base Default Constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &a): type(a.type) {
	std::cout << "AAnimal base Copy Constructor called" << std::endl;
}

AAnimal &(AAnimal::operator=)(const AAnimal &a) {
	std::cout << "AAnimal base Copy Assignment Operator called" << std::endl;
	this->type = a.type;
	return (*this);
}

AAnimal::~AAnimal(void) {
	std::cout << "AAnimal base Default Destructor called" << std::endl;
}

std::string	AAnimal::getType(void) const {
	std::cout << "AAnimal base getType called" << std::endl;
	return (this->type);
}
