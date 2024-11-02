#include "Drops.hpp"

Drops::Drops(void): n_drops(0), drops(NULL) {
	std::cout << "Drops Default Constructor called" << std::endl;
}

Drops::Drops(const Drops &f) {
	std::cout << "Drops Copy Constructor called" << std::endl;
	(void)f;
}

Drops &(Drops::operator=)(Drops f) {
	std::cout << "Drops Copy Assignment operator called" << std::endl;
	(void)f;
	return (*this);
}

Drops::~Drops(void) {
	std::cout << "Drops Default Destructor called" << std::endl;
	if (this->drops) {
		for (int i = 0; i < this->n_drops; i++)
			delete this->drops[i];
		delete[] this->drops;
	}
}

void	Drops::add_drop(AMateria *m) {
	int			i = 0;
	AMateria	**new_drops;
	
	new_drops = new AMateria *[n_drops + 1];
	while (i < this->n_drops) {
		new_drops[i] = this->drops[i];
		i++;
	}
	new_drops[n_drops] = m;
	this->n_drops += 1;
	if (this->drops)
		delete[] this->drops;
	this->drops = new_drops;
}
