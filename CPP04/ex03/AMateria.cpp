#include "AMateria.hpp"

AMateria::AMateria(const std::string &t): type(t) {
	std::cout << "AMateria base Default Constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &m): type(m.type) {
	std::cout << "AMateria base Copy Constructor called" << std::endl;
}

AMateria &(AMateria::operator=)(const AMateria &m) {
	std::cout << "AMateria base Copy Assignment Operator called" << std::endl;
	this->type = m.type;
	return (*this);
}

AMateria::~AMateria(void) {
	std::cout << "AMateria base Default Destructor called" << std::endl;
}

const std::string	&AMateria::getType(void) const {
	std::cout << "AMateria base getType called" << std::endl;
	return (this->type);
}

void	AMateria::use(ICharacter &target) {
	std::cout << "AMateria use: " << target.getName() << std::endl;
}
