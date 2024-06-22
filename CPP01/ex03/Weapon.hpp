#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class Weapon {
	public:
		Weapon(void);
		Weapon(std::string t);
		Weapon(const Weapon &w);
		Weapon &(operator =)(const Weapon &w);
		~Weapon(void);

		std::string getType(void);
		void		setType(std::string t);

	private:
		std::string type;
};

#endif
