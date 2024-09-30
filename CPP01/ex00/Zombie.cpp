#include "Zombie.hpp"

Zombie::Zombie(const std::string n): name(n) {};

Zombie::~Zombie(void) {
	std::cout << this->name << " Default Destructor called" << std::endl;
}

void Zombie::announce(void) const {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
