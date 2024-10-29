#ifndef DROPS_HPP
# define DROPS_HPP

#include "AMateria.hpp"

class Drops {
	public:
		Drops(void);
		Drops(const Drops &f);
		Drops &(operator=)(Drops f);
		~Drops(void);

		void	add_drop(AMateria *m);

	private:

		int			n_drops;
		AMateria	**drops;
};

#endif
