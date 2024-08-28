#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class Character: public ICharacter {
	public:
		Character(const std::string name);
		Character(const Character &c);
		Character &(operator=)(const Character &c);
		~Character(void);

		const std::string	&getName(void) const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, Character &target);
	
	private:
		const std::string	name;
		AMateria			*inventory[4] = {0,0,0,0};
};

#endif
