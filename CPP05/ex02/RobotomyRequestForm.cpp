#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string t): AForm("robotomy request", 72, 45, t) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &s): AForm(s.getName(), s.getGradeToSign(), s.getGradeToExec()) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

void RobotomyRequestForm::execute(const Bureaucrat &b) const {
	this->beExecuted(b);
	srand(time((time_t *)0));
	std::cout << "BZZZZZZZZZZZZZZ..." << std::endl;
	if (rand() > (RAND_MAX / 2))
		std::cout << this->target << " Successfully Robotomized" << std::endl;
	else
		std::cout << this->target << "Robotomy Failed" << std::endl;
}
