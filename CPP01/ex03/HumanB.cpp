#include "HumanB.hpp"
#include <iostream>
#include <string>

HumanB::HumanB(std::string n): name(n), weapon(NULL) {}

HumanB::~HumanB(void) {}

void	HumanB::setWeapon(Weapon &w) {
	weapon = &w;
}

void	HumanB::attack(void) {
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
