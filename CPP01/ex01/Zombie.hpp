#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie {
	public:
		Zombie(void);
		Zombie(const std::string name);
		~Zombie(void);

		void	announce(void) const;
		void	setName(const std::string name);
	
	private:
		std::string	name;
};

Zombie *zombieHorde(int N, std::string name);

#endif
