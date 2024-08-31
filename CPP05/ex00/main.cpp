#include "Bureaucrat.hpp"

int	main(void) {
	try {
		Bureaucrat b("bob", 1);
		std::cout << b << std::endl;
		b.incrementGrade();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

// Motif
// learning about exception, try/catch
