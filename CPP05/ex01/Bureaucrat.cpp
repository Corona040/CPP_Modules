#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string n, int g): name(n), grade(g) {
	if (g < 1)  
		throw (Bureaucrat::GradeTooHighException());
	if (g > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &b): name(b.name), grade(b.grade) {}

Bureaucrat &(Bureaucrat::operator=)(const Bureaucrat &b) {
	(void)b;
	return (*this);
}

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

void		Bureaucrat::signForm(Form &f) {
	try {
		f.beSigned(*this);
		std::cout << this->getName() << " signed " << f.getName() << std::endl;
	} catch (std::exception &e) {
		std::cout << this->getName() << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream &(operator<<)(std::ostream &os, const Bureaucrat &b) {
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (os);
}