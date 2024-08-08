#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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

	ScavTrap st("boludo");
	ScavTrap sd("dialio");
	st.attack("mermaid");
	st.guardGate();
	sd = st;
	sd.beRepaired(808);
	return (0);
}
