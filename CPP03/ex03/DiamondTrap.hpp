#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "ScavTrap.hpp"
# include "FlagTrap.hpp"

class DiamondTrap: public ScavTrap, public FlagTrap {
	public:
		DiamondTrap(std::string n);
		DiamondTrap(const DiamondTrap &dt);
		DiamondTrap &(operator=)(DiamondTrap rhs);
		~DiamondTrap(void);

		void	whoAmI(void);

		void	attack(const std::string &target);
		
	private:
		std::string	name;
};

#endif
