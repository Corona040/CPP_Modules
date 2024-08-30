#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie {
	public:
		Zombie(const std::string name);
		Zombie(const Zombie &z);
		Zombie &(operator =)(Zombie const &rhs);
		~Zombie(void);

		void announce(void);
	
	private:
		std::string name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
