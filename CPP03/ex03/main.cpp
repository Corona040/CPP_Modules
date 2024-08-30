#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"
#include "DiamondTrap.hpp"

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

	FlagTrap ft("fagTrap");
	ft.highFivesGuys();

	DiamondTrap dt("didi");
	dt.whoAmI();
	dt.attack("melao");
	dt.takeDamage(10000);
	dt.attack("melao");
	dt.whoAmI();
	return (0);
}

// Motif
// learning about the diamond inheritance problem
