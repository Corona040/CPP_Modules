#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm: public AForm {
	public:
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &s);
		PresidentialPardonForm &(operator=)(const PresidentialPardonForm &s);
		~PresidentialPardonForm(void);

		void execute(const Bureaucrat &b) const;
};

# endif
