#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string t): AForm("presidential pardon", 25, 5, t) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &s): AForm(s.getName(), s.getGradeToSign(), s.getGradeToExec()) {}

PresidentialPardonForm &(PresidentialPardonForm::operator=)(const PresidentialPardonForm &s) {
	(void)s;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

void PresidentialPardonForm::execute(const Bureaucrat &b) const {
	this->beExecuted(b);
	std::cout << "Zaphod Beeblebrox has pardoned " << this->target << std::endl;
}
