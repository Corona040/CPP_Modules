#include "Cure.hpp"

Cure::Cure(void): AMateria("ice") {
	std::cout << "Cure Default Constructor called" << std::endl;
}

Cure::Cure(const Cure &i): AMateria("ice") {
	std::cout << "Cure Copy Constructor called" << std::endl;
}

Cure &(Cure::operator=)(const Cure &i) {
	std::cout << "Cure Copy Assignment Operator called" << std::endl;
	this->type = i.type;
	return (*this);
}

Cure::~Cure(void) {
	std::cout << "Cure Default Destructor called" << std::endl;
}

AMateria *Cure::clone() const {
	return (new Cure());
}

void	Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
