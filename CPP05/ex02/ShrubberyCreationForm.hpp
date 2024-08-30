#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm: public AForm {
	public:
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &s);
		ShrubberyCreationForm &(operator=)(const ShrubberyCreationForm &s);
		~ShrubberyCreationForm(void);

		void execute(const Bureaucrat &b) const;
};

# endif
