#ifndef HUMANB_H
# define HUMANB_H

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string n);
		HumanB(const HumanB &h);
		HumanB &(operator =)(const HumanB &h);
		~HumanB(void);

		std::string name;
		Weapon		*weapon;

		void		attack(void);
		void		setWeapon(Weapon &w);
};

#endif
