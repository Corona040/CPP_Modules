#ifndef FLAGTRAP_H
# define FLAGTRAP_H

# include "ClapTrap.hpp"

class FlagTrap: public ClapTrap {
	public:
		FlagTrap(const std::string n);
		FlagTrap(const FlagTrap &ct);
		FlagTrap &(operator=)(FlagTrap rhs);
		~FlagTrap(void);

		void	attack(const std::string &target);

		void	highFivesGuys(void);
};

#endif
