#ifndef AMATERIA_H
# define AMATERIA_H

# include <string>
# include <iostream>
# include "ICharacter.hpp"
 
class AMateria
{
	public:
		AMateria(const std::string &type);
		AMateria(const AMateria &m);
		AMateria &(operator=)(const AMateria &m);
		virtual ~AMateria(void);

		std::string const	&getType() const; //Returns the materia type
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);

	protected:
		std::string	type;
};

#endif
