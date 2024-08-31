#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void) {}

Intern::Intern(const Intern &i) {
	(void)i;
}

Intern &(Intern::operator=)(Intern i) {
	(void)i;
	return (*this);
}

Intern::~Intern(void) {}

AForm	*Intern::makeForm(const std::string name, const std::string target) {
	const std::string	names[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon",
	};

	for (int i = 0; i < 3; i++) {
		if (names[i] == name) {
			switch (i) {
				case 0: return (new ShrubberyCreationForm(target));
				case 1: return (new RobotomyRequestForm(target));
				case 2: return (new PresidentialPardonForm(target));
			}
		}
	}
	return (NULL);
};
