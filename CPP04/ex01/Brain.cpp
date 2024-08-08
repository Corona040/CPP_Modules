#include "Brain.hpp"
#include <iostream>

Brain::Brain(void) {
	std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(const Brain &b) {
	std::cout << "Brain Copy Constructor called" << std::endl;
	const int	ideas_size = 100;

	for (int i = 0; i  < ideas_size; i++)
		this->ideas[i] = b.ideas[i];
}

Brain &(Brain::operator=)(const Brain &rhs) {
	std::cout << "Brain Copy Assignment Operator called" << std::endl;
	*this = Brain(rhs);
	return (*this);
}

Brain::~Brain(void) {
	std::cout << "Brain Default Destructor called" << std::endl;
}
