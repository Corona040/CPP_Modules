#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria {
	public:
		Ice(void);
		Ice(const Ice &i);
		Ice &(operator=)(const Ice &i);
		~Ice(void);

		AMateria	*clone() const;
		void		use(ICharacter &target);
};

#endif