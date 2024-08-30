#include "Weapon.hpp"

Weapon::Weapon(void): type("") {}

Weapon::Weapon(const std::string t): type(t) {}

Weapon::Weapon(const Weapon &w) {
	this->type = w.type;
}

Weapon &(Weapon::operator =)(const Weapon &w) {
	this->type = w.type;
	return (*this);
}

Weapon::~Weapon(void) {}

std::string Weapon::getType(void) {
	return (type);
}

void	Weapon::setType(std::string t) {
	type = t;
}
