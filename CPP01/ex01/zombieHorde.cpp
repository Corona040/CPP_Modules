#include "Zombie.hpp"
#include <string>

Zombie *zombieHorde(int N, std::string name) {
	Zombie *z = new Zombie[N];
	for (int i = 0; i < N; i++) {
		z[i] = Zombie(name);
	}
	return (z);
}