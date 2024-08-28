#include "Character.hpp"

Character::Character(const std::string name): name(name) {
	std::cout << "Character Default Constructor called" << std::endl;
}

Character::Character(const Character &c) {
	for (int i = 0; i < 4; i++) {
		if (c.inventory[i]) {
			const std::string type = c.inventory[i]->getType();
			if (this->inventory[i]) {
				delete this->inventory[i];
				this->inventory[i] = 0;
			}
			if (type == "ice")
				this->inventory[i] = new Ice();
			else if (type == "cure")
				this->inventory[i] = new Cure();
		}
	}
}

Character &(Character::operator=)(const Character &c) {
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = c.inventory[i];
	}
	return (*this);
}

Character::~Character(void) {
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i])
			delete this->inventory[i];
	}
}

const std::string	&Character::getName(void) const {
	return (this->name);
}

void	Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i] == 0) {
			this->inventory[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx) {
	this->inventory[idx] = 0;
}

void	Character::use(int idx, Character& target) {
	if (this->inventory[idx]) {
		this->inventory[idx]->use(target);
		delete this->inventory[idx];
		this->inventory[idx] = 0;
	}
}
