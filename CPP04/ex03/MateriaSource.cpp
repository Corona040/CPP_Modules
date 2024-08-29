#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	std::cout << "MateriaSource Default Constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->templates[i] = 0;
	}
}

MateriaSource::MateriaSource(const MateriaSource &m) {
	std::cout << "MateriaSource Copy Constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->templates[i] = m.templates[i];
	}
}

MateriaSource &(MateriaSource::operator=)(const MateriaSource &m) {
	std::cout << "MateriaSource Copy Assignment operator called" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->templates[i] = m.templates[i];
	}
	return (*this);
}

MateriaSource::~MateriaSource(void) {
	std::cout << "MateriaSource Default Destructor called" << std::endl;
}

void	MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (this->templates[i] == 0) {
			this->templates[i] = m;
			break;
		}
	}
}

AMateria	*MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < 4; i++) {
		if (this->templates[i]->getType() == type) {
			try {
				return (this->templates[i]->clone());
			} catch (int) {}
		}
	}
	return (0);
}
