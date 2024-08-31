#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include <string>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
	public:
		Intern(void);
		Intern(const Intern &i);
		Intern &(operator=)(Intern i);
		~Intern(void);

		AForm	*makeForm(const std::string name, const std::string target);
};

#endif
