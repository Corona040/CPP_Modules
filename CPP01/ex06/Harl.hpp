#ifndef HARL_H
# define HARL_H

# include <string>
# include <iostream>

class Harl {
	public:
		Harl(void);
		Harl(const Harl &h);
		Harl &(operator =)(const Harl &rhs);
		~Harl(void);

		void	complain(std::string level);

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif
