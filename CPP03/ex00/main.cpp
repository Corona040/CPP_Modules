#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap ct("johnsons");
	ClapTrap cd("bobsons");

	ct.attack("mermaid");
	ct.takeDamage(5);
	ct.beRepaired(40);
	ct.takeDamage(1000);
	ct.beRepaired(40);
	cd.beRepaired(0);
	cd.beRepaired(0);
	cd.beRepaired(0);
	cd.beRepaired(0);
	cd.beRepaired(0);
	cd.beRepaired(0);
	cd.beRepaired(0);
	cd.beRepaired(0);
	cd.beRepaired(0);
	cd.beRepaired(0);
	cd.beRepaired(0);
	cd.beRepaired(0);
	cd.beRepaired(0);
	cd.beRepaired(0);
	cd.beRepaired(0);
	cd.beRepaired(0);
	cd.beRepaired(0);
	cd.beRepaired(0);
	cd.beRepaired(0);
	cd.attack("mermaid");
	return (0);
}
