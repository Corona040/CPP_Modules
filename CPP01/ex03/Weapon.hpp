#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class Weapon {
	public:
		Weapon(void);
		Weapon(const std::string type);
		~Weapon(void);

		std::string	getType(void);
		void		setType(std::string t);

	private:
		std::string type;
};

#endif
