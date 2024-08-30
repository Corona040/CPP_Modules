#include "Zombie.hpp"

Zombie::Zombie(const std::string n): name(n) {};

Zombie::Zombie(const Zombie &z): name(z.name) {};

Zombie &(Zombie::operator=)(const Zombie &z) {
	this->name = z.name;
	return (*this);
}

Zombie::~Zombie(void) {
	std::cout << this->name << " Default Destructor called" << std::endl;
}

void Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
