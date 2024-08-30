#include "HumanA.hpp"

HumanA::HumanA(const std::string n, Weapon &w): name(n), weapon(w) {}

HumanA::HumanA(const HumanA &h): name(h.name), weapon(h.weapon) {}

HumanA &(HumanA::operator=)(const HumanA &h) {
	this->name = h.name;
	this->weapon = h.weapon;
	return (*this);
}

HumanA::~HumanA(void) {}

void	HumanA::attack(void) {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
