#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <cstdlib>
# include <ctime>

class RobotomyRequestForm: public AForm {
	public:
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &s);
		~RobotomyRequestForm(void);

		void execute(const Bureaucrat &b) const;

	private:
		RobotomyRequestForm &(operator=)(RobotomyRequestForm s);
};

# endif
