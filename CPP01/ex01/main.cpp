#include "Zombie.hpp"

int	main(void) {
	Zombie *z = zombieHorde(10, "uncle");
	for (int i = 0; i < 10; i++) {
		z[i].announce();
	}
	delete []z;
	return (0);
}

// Motif
// Learning to use 'new' keyword to allocate arrays
