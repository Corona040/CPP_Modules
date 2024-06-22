#ifndef HUMANA_H
# define HUMANA_H

#include <string>
#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string n, Weapon &w);
		HumanA(const HumanA &h);
		HumanA &(operator =)(const HumanA &h);
		~HumanA(void);

		std::string name;
		Weapon		&weapon;

		void		attack(void);
};

#endif
