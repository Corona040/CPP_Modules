#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void) {
	try {
		Bureaucrat b("HighRank", 1);
		Bureaucrat bb("LowRank", 150);
		AForm *f = new ShrubberyCreationForm("home");

		b.executeForm(*f);
		b.signForm(*f);
		b.executeForm(*f);
		bb.executeForm(*f);
		std::cout << *f << std::endl;

		bb.signForm(*f);

		std::cout << b << std::endl;

		f->beSigned(bb);
		b.incrementGrade();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
