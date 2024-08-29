#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string t): AForm("RobotomyRequest", 72, 45, t) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &s): AForm(s.getName(), s.getGradeToSign(), s.getGradeToExec()) {}

RobotomyRequestForm &(RobotomyRequestForm::operator=)(const RobotomyRequestForm &s) {
	(void)s;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

void RobotomyRequestForm::execute(const Bureaucrat &b) const {
	this->beExecuted(b);
	std::cout << "BZZZZZZZZZZZZZZ..." << std::endl;
	std::cout << this->target << " Successfully Robotomized" << std::endl;
}
