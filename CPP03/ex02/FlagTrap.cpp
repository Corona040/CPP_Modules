#include "FlagTrap.hpp"

FlagTrap::FlagTrap(const std::string n): ClapTrap(n) {
	std::cout << "FlagTrap Default constructor called" << std::endl;
	hp = 100;
	ep = 100;
	ad = 30;
}

FlagTrap::FlagTrap(const FlagTrap &ct): ClapTrap(ct) {
	std::cout << "FlagTrap Copy constructor called" << std::endl;
}

FlagTrap &(FlagTrap::operator=)(const FlagTrap &rhs) {
	std::cout << "FlagTrap Copy assignment constructor called" << std::endl;
	this->name = rhs.name;
	this->hp = rhs.hp;
	this->ep = rhs.ep;
	this->ad = rhs.ad;
	return (*this);
}

FlagTrap::~FlagTrap(void) {
	std::cout << "FlagTrap Default destructor called" << std::endl;
}

void FlagTrap::attack(const std::string &target) {
	if (this->hp > 0 && this->ep > 0) {
		std::cout << "FlagTrap " + this->name + " attacks " + target + " causing " << this->ad << " points of damage!" << std::endl;
		this->ep -= 1;
	}
}

void	FlagTrap::highFivesGuys(void) {
	if (this->hp > 0) {
		std::cout << "High five, Guys!" << std::endl;
	}
}
