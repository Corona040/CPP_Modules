#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string n, int g): name(n), grade(g) {
	if (g < 1)  
		throw (Bureaucrat::GradeTooHighException());
	if (g > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &b): name(b.name), grade(b.grade) {}

Bureaucrat::~Bureaucrat(void) {}

std::string	Bureaucrat::getName(void) const {
	return (this->name);
}

int	Bureaucrat::getGrade(void) const {
	return (this->grade);
}

void	Bureaucrat::incrementGrade(void) {
	if (this->grade <= 1)  
		throw (Bureaucrat::GradeTooHighException());
	else
		this->grade--;
}

void	Bureaucrat::decrementGrade(void) {
	if (this->grade >= 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->grade++;
}

std::ostream &(operator<<)(std::ostream &os, const Bureaucrat &b) {
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (os);
}
