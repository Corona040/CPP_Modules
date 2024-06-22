#include "HumanA.hpp"
#include <iostream>
#include <string>

HumanA::HumanA(std::string n, Weapon &w): name(n), weapon(w) {}

HumanA::~HumanA(void) {}

void	HumanA::attack(void) {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
