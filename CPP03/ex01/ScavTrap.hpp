#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap(const std::string n);
		ScavTrap(const ScavTrap &ct);
		ScavTrap &(operator=)(const ScavTrap &rhs);
		~ScavTrap(void);

		void	attack(const std::string &target);

		void	guardGate(void);
};

#endif
