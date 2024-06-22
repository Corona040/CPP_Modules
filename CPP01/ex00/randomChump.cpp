#include "Zombie.hpp"
#include <string>

void randomChump(std::string name) {
	Zombie z = Zombie(name);
	z.announce();
}
