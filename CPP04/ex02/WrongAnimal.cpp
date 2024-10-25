#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("") {
	std::cout << "WrongAnimal base Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a): type(a.type) {
	std::cout << "WrongAnimal base Copy Constructor called" << std::endl;
}

WrongAnimal &(WrongAnimal::operator=)(WrongAnimal a) {
	std::cout << "WrongAnimal base Copy Assignment Operator called" << std::endl;
	this->type = a.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal base Default Destructor called" << std::endl;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "WrongAnimal base makeSound called" << std::endl;
	std::cout << "..." << std::endl;
}

std::string	WrongAnimal::getType(void) const {
	std::cout << "WrongAnimal base getType called" << std::endl;
	return (this->type);
}
