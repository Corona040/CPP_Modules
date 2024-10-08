#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
	public:
		ScavTrap(const std::string n);
		ScavTrap(const ScavTrap &ct);
		ScavTrap &(operator=)(ScavTrap rhs);
		~ScavTrap(void);

		void	attack(const std::string &target);

		void	guardGate(void);
};

#endif
