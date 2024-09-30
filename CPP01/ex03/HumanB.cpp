#include "HumanB.hpp"

HumanB::HumanB(const std::string n): name(n), weapon(NULL) {}

HumanB::~HumanB(void) {}

void	HumanB::setWeapon(Weapon *w) {
	this->weapon = w;
}

void	HumanB::attack(void) {
	if (weapon)
		std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}
