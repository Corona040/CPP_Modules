#include "Zombie.hpp"

int	main(void)
{
	Zombie *z;

	randomChump("chump");
	z = newZombie("newton");
	z->announce();
	delete z;
	return (0);
}
