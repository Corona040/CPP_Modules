#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string t): AForm("shrubbery creation", 145, 137, t) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s): AForm(s.getName(), s.getGradeToSign(), s.getGradeToExec()) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

void ShrubberyCreationForm::execute(const Bureaucrat &b) const {
	std::ofstream	outfile;
		

	this->beExecuted(b);
	outfile.open((target + "_shrubbery").c_str());
	outfile << "  .:::::::::::::.   \n";
	outfile << " .:::::::::::::::.  \n";
	outfile << " :::::\\/::\\:::|:::  \n";
	outfile << "  '::\\/:|::|/:/-:'  \n";
	outfile << "   '::\\:/''|:/::'   \n";
	outfile << "     `'Y    Y'`     \n";
	outfile << "     <=T  @ T       \n";
	outfile << "       |    |       \n";
	outfile << "       )    |       \n";
	outfile << "      / /  | \\      \n";
	outfile.close();
}
