#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string n): ClapTrap(n), ScavTrap(n), FlagTrap(n) {
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	this->name = n;
	ClapTrap::name = n + "_clap_name";
	this->hp = FlagTrap::hp;
	this->ep = ScavTrap::ep;
	this->ad = FlagTrap::ad;
}

DiamondTrap::DiamondTrap(const DiamondTrap &dt): ClapTrap(dt), ScavTrap(dt), FlagTrap(dt) {
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
}

DiamondTrap &(DiamondTrap::operator=)(DiamondTrap rhs) {
	std::cout << "DiamondTrap Copy assignment constructor called" << std::endl;
	this->name = rhs.name;
	this->hp = rhs.hp;
	this->ep = rhs.ep;
	this->ad = rhs.ad;
	return (*this);
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap Default destructor called" << std::endl;
}

void	DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) {
	if (this->hp > 0)
		std::cout << this->name << std::endl << ClapTrap::name << std::endl;
}
