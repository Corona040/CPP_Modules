#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string n, const int gs, const int ge): name(n), is_signed(false), grade_to_sign(gs), grade_to_exec(ge) {
	if (this->grade_to_sign < 1 || this->grade_to_exec < 1)
		throw AForm::GradeTooHighException();
	if (this->grade_to_sign > 150 || this->grade_to_exec > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const std::string n, const int gs, const int ge, const std::string t): name(n), is_signed(false), grade_to_sign(gs), grade_to_exec(ge), target(t) {
	if (this->grade_to_sign < 1 || this->grade_to_exec < 1)
		throw AForm::GradeTooHighException();
	if (this->grade_to_sign > 150 || this->grade_to_exec > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &f): name(f.name), is_signed(f.is_signed), grade_to_sign(f.grade_to_sign), grade_to_exec(f.grade_to_exec) {}

AForm::~AForm(void) {}

std::string	AForm::getName(void) const {
	return (this->name);
}

bool	AForm::getIsSigned(void) const {
	return (this->is_signed);
}

int	AForm::getGradeToSign(void) const {
	return (this->grade_to_sign);
}

int	AForm::getGradeToExec(void) const {
	return (this->grade_to_exec);
}

void	AForm::beSigned(const Bureaucrat &b) {
	int	grade = b.getGrade();

	if (grade > this->grade_to_sign)
		throw AForm::GradeTooLowException();
	else
		is_signed = true;
}

void	AForm::beExecuted(const Bureaucrat &b) const {
	int	grade = b.getGrade();

	if (!this->is_signed)
		throw AForm::ExecuteUnsignedException();
	else if (grade > this->grade_to_exec)
		throw AForm::GradeTooLowException();
}

std::ostream	&(operator <<)(std::ostream &os, const AForm &f) {
	if (f.getIsSigned())
		os << f.getName() << ", signed form. Necessary grade to sign: " << f.getGradeToSign() << ". Necessary grade to execute: " << f.getGradeToExec();
	else
		os << f.getName() << ", unsigned form. Necessary grade to sign: " << f.getGradeToSign() << ". Necessary grade to execute: " << f.getGradeToExec();
	return (os);
}
