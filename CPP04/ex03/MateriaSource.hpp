#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource: public IMateriaSource {
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &m);
		MateriaSource &(operator=)(MateriaSource m);
		~MateriaSource(void);

		void		learnMateria(AMateria *);
		AMateria	*createMateria(const std::string &type);

	private:
		AMateria	*templates[4];
};

#endif
