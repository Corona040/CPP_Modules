#include "HumanA.hpp"

HumanA::HumanA(const std::string n, Weapon &w): name(n), weapon(w) {}

HumanA::~HumanA(void) {}

void	HumanA::attack(void) {
	std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}
