#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(void){}

Zombie::Zombie(std::string name): name(name) {}

Zombie::Zombie(Zombie const &z): name(z.name) {}

Zombie &(Zombie::operator =)(Zombie const &rhs) {
	name = rhs.name;
	return (*this);
}

Zombie::~Zombie(void) {
	std::cout << this->name << std::endl;
}

void Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
