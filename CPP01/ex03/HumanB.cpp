#include "HumanB.hpp"

HumanB::HumanB(const std::string n): name(n), weapon(NULL) {}

HumanB::HumanB(const HumanB &h): name(h.name), weapon(h.weapon) {}

HumanB &(HumanB::operator=)(const HumanB &h) {
	this->name = h.name;
	this->weapon = h.weapon;
	return (*this);
}

HumanB::~HumanB(void) {}

void	HumanB::setWeapon(Weapon &w) {
	weapon = &w;
}

void	HumanB::attack(void) {
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
