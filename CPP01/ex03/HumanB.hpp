#ifndef HUMANB_H
# define HUMANB_H

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB {
	public:
		HumanB(const std::string name);
		~HumanB(void);

		void		attack(void);
		void		setWeapon(Weapon &w);
	
	private:
		std::string name;
		Weapon		*weapon;
};

#endif
