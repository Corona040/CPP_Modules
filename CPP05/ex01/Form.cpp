#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string n, const int gs, const int ge): name(n), is_signed(false), grade_to_sign(gs), grade_to_exec(ge) {
	if (this->grade_to_sign < 1 || this->grade_to_exec < 1)
		throw Form::GradeTooHighException();
	if (this->grade_to_sign > 150 || this->grade_to_exec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &f): name(f.name), is_signed(f.is_signed), grade_to_sign(f.grade_to_sign), grade_to_exec(f.grade_to_exec) {}

Form &(Form::operator=)(const Form &f) {
	(void)f;
	return (*this);
}

Form::~Form(void) {}

std::string	Form::getName(void) const {
	return (this->name);
}

bool	Form::getIsSigned(void) const {
	return (this->is_signed);
}

int	Form::getGradeToSign(void) const {
	return (this->grade_to_sign);
}

int	Form::getGradeToExec(void) const {
	return (this->grade_to_exec);
}

void	Form::beSigned(const Bureaucrat &b) {
	int	grade = b.getGrade();

	if (grade > this->grade_to_sign)
		throw Form::GradeTooLowException();
	else
		is_signed = true;
}

std::ostream	&(operator <<)(std::ostream &os, const Form &f) {
	if (f.getIsSigned())
		os << f.getName() << ", signed form. Necessary grade to sign: " << f.getGradeToSign() << ". Necessary grade to execute: " << f.getGradeToExec();
	else
		os << f.getName() << ", unsigned form. Necessary grade to sign: " << f.getGradeToSign() << ". Necessary grade to execute: " << f.getGradeToExec();
	return (os);
}
