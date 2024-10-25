#include "Character.hpp"

Character::Character(const std::string n): name(n) {
	std::cout << "Character Default Constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = 0;
	}
}

Character::Character(const Character &c) {
	std::cout << "Character Copy Constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i]) {
			delete this->inventory[i];
			this->inventory[i] = 0;
		}
		if (c.inventory[i])
				this->inventory[i] = c.inventory[i]->clone();
	}
}

Character &(Character::operator=)(Character c) {
	std::cout << "Character Copy Assignment operator called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i]) {
			delete this->inventory[i];
			this->inventory[i] = 0;
		}
		if (c.inventory[i])
			this ->inventory[i] = c.inventory[i]->clone();
	}
	return (*this);
}

Character::~Character(void) {
	std::cout << "Character Default Destructor called" << std::endl;
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

void	Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && this->inventory[idx]) {
		this->inventory[idx]->use(target);
		delete this->inventory[idx];
		this->inventory[idx] = 0;
	}
}
