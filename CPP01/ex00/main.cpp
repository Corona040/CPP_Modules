#include "Zombie.hpp"

int	main(void)
{
	Zombie *z;

	randomChump("chump");
	z = newZombie("newton");
	z->announce();
	randomChump("chud");
	delete z;
	return (0);
}

// Motif
// Using 'new' keyword
// Deciding whether it's better to use dynamic or static allocation
//
// newZombie uses heap allocation so it can be returned
// randomChump can be static allocated and destroyed
//
// announce function should be declared const
//
// newZombie and randomChump could be methods
