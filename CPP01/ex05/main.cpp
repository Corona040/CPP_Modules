#include "Harl.hpp"

int	main(void) {
	Harl harl = Harl();

	harl.complain("debug");
	harl.complain("info");
	harl.complain("warning");
	harl.complain("error");
	harl.complain("maniac");
}

// Motif
// learning about pointer to member functions
