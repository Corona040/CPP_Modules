#ifndef HUMANA_H
# define HUMANA_H

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA {
	public:
		HumanA(const std::string name, Weapon &weapon);
		HumanA(const HumanA &h);
		HumanA &(operator =)(const HumanA &h);
		~HumanA(void);

		void		attack(void);

	private:
		std::string name;
		Weapon		&weapon;
};

#endif
