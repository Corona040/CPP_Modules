#include "Ice.hpp"

Ice::Ice(void): AMateria("ice") {
	std::cout << "Ice Default Constructor called" << std::endl;
}

Ice::Ice(const Ice &i): AMateria("ice") {
	std::cout << "Ice Copy Constructor called" << std::endl;
	(void)i;
}

Ice &(Ice::operator=)(const Ice &i) {
	std::cout << "Ice Copy Assignment Operator called" << std::endl;
	this->type = i.type;
	return (*this);
}

Ice::~Ice(void) {
	std::cout << "Ice Default Destructor called" << std::endl;
}

AMateria *Ice::clone() const {
	return (new Ice());
}

void	Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
