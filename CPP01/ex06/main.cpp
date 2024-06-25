#include "Harl.hpp"
#include <iostream>
#include <string>

int	main(int argc, char **argv) {
	Harl harl = Harl();
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (argc != 2)
		return (0);
	std::string	level = argv[1];
	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			switch (i) {
				case 0:
					std::cout << "[ " << levels[0] << " ]" << std::endl;
					harl.complain("debug");
					std::cout << std::endl;
					/* fallthrough */
				case 1:
					std::cout << "[ " << levels[1] << " ]" << std::endl;
					harl.complain("info");
					std::cout << std::endl;
					/* fallthrough */
				case 2:
					std::cout << "[ " << levels[2] << " ]" << std::endl;
					harl.complain("warning");
					std::cout << std::endl;
					/* fallthrough */
				case 3:
					std::cout << "[ " << levels[3] << " ]" << std::endl;
					harl.complain("error");
					std::cout << std::endl;
					break;
			}
			break;
		}
		if (i == 3)
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
