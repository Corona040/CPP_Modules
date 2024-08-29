#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void) {
	try {
		Bureaucrat b("HighRank", 1);
		Bureaucrat bb("LowRank", 150);
		Form f("Petition", 10, 100);

		b.signForm(f);
		bb.signForm(f);

		std::cout << b << std::endl;

		f.beSigned(bb);
		b.incrementGrade();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
