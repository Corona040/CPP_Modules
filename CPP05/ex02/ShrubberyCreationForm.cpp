#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string t): AForm("ShrubberyCreation", 145, 137, t) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s): AForm(s.getName(), s.getGradeToSign(), s.getGradeToExec()) {}

ShrubberyCreationForm &(ShrubberyCreationForm::operator=)(const ShrubberyCreationForm &s) {
	(void)s;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

void ShrubberyCreationForm::execute(const Bureaucrat &b) const {
	this->beExecuted(b);
	std::cout << this->target << ": 🌳" << std::endl;
}
