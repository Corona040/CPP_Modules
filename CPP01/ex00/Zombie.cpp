#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(std::string name): name(name) {};

Zombie::~Zombie(void) {
	std::cout << this->name << std::endl;
}

void Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
