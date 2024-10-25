#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal() {
	std::cout << "WrongCat Derived Default Constructor called" << std::endl;
	WrongAnimal::type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &a): WrongAnimal(a) {
	std::cout << "WrongCat Derived Copy Constructor called" << std::endl;
	WrongAnimal::type = a.type;
}

WrongCat &(WrongCat::operator=)(WrongCat a) {
	std::cout << "WrongCat Derived Copy Assignment Operator called" << std::endl;
	this->type = a.type;
	return (*this);
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat Derived Default Destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const {
	std::cout << "WrongCat Derived makeSound called" << std::endl;
	std::cout << "Miau!" << std::endl;
}
