#include "ClapTrap.hpp"


ClapTrap::ClapTrap(const std::string n): name(n), hp(10), ep(10), ad(0) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ct): name(ct.name), hp(ct.hp), ep(ct.hp), ad(ct.ad) {
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &(ClapTrap::operator=)(const ClapTrap &rhs) {
	std::cout << "Copy assignment constructor called" << std::endl;
	this->name = rhs.name;
	this->hp = rhs.hp;
	this->ep = rhs.ep;
	this->ad = rhs.ad;
	return (*this);
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Default destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target) {
	if (this->hp > 0 && this->ep > 0) {
		std::cout << "ClapTrap " + this->name + " attacks " + target + " causing " << this->ad << " points of damage!" << std::endl;
		this->ep -= 1;
	}

}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " + this->name + " takes " << amount << " points of damage!" << std::endl;
	unsigned int	old_hp = this->hp;
	int	new_hp = old_hp;

	new_hp -= amount;
	new_hp = (new_hp > 0) * new_hp;
	this->hp = new_hp;
	if (old_hp > 0 && new_hp == 0)
		std::cout << "ClapTrap " + this->name + " has died!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->hp > 0 && this->ep > 0) {
		std::cout << "ClapTrap " + this->name + " repairs " << amount << " hit points!" << std::endl;
		this->ep -= 1;
		this->hp += amount;
	}
}
