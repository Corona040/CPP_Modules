#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>

class ClapTrap {
	public:
		ClapTrap(const std::string n);
		ClapTrap(const ClapTrap &ct);
		ClapTrap &(operator=)(const ClapTrap &rhs);
		~ClapTrap(void);

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
		std::string		name;
		unsigned int	hp;
		unsigned int	ep;
		unsigned int	ad;
};

#endif