#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string n): ClapTrap(n) {
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->hp = 100;
	this->ep = 50;
	this->ad = 20;
}

ScavTrap::ScavTrap(const ScavTrap &ct): ClapTrap(ct) {
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap &(ScavTrap::operator=)(ScavTrap rhs) {
	std::cout << "ScavTrap Copy assignment constructor called" << std::endl;
	this->name = rhs.name;
	this->hp = rhs.hp;
	this->ep = rhs.ep;
	this->ad = rhs.ad;
	return (*this);
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap Default destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if (this->hp > 0 && this->ep > 0) {
		std::cout << "ScavTrap " + this->name + " attacks " + target + " causing " << this->ad << " points of damage!" << std::endl;
		this->ep -= 1;
	}
}

void	ScavTrap::guardGate(void) {
	if (this->hp > 0)
		std::cout << "ScavTrap " + this->name + " is now gatekeeping!" << std::endl;
}
