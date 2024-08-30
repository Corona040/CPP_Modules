#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie {
	public:
		Zombie(void);
		Zombie(std::string name);
		Zombie(const Zombie &z);
		Zombie &(operator =)(Zombie const &rhs);
		~Zombie(void);

		void announce(void);
	
	private:
		std::string name;
};

Zombie *zombieHorde(int N, std::string name);

#endif
