#include "Weapon.hpp"

Weapon::Weapon(void): type("") {}

Weapon::Weapon(const std::string t): type(t) {}

Weapon::~Weapon(void) {}

std::string Weapon::getType(void) {
	return (type);
}

void	Weapon::setType(std::string t) {
	type = t;
}
