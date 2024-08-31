#include "Cure.hpp"

Cure::Cure(void): AMateria("cure") {
	std::cout << "Cure Default Constructor called" << std::endl;
}

Cure::Cure(const Cure &c): AMateria("cure") {
	std::cout << "Cure Copy Constructor called" << std::endl;
	(void)c;
}

Cure &(Cure::operator=)(Cure c) {
	std::cout << "Cure Copy Assignment Operator called" << std::endl;
	std::swap(this->type, c.type);
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
