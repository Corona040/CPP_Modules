#include "Zombie.hpp"

Zombie::Zombie(std::string name): name(name) {};

Zombie::~Zombie(void) {
	std::cout << this->name << " Default Destructor called" << std::endl;
}

void Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
