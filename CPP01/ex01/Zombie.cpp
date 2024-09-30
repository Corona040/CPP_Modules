#include "Zombie.hpp"

Zombie::Zombie(void): name("") {}

Zombie::Zombie(std::string name): name(name) {}

Zombie::~Zombie(void) {
	std::cout << this->name << " Default Destructor called"<< std::endl;
}

void Zombie::announce(void) const {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string name) {
	this->name = name;
}
