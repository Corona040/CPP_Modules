#include "PhoneBook.hpp"

int	main(void) {
	std::string	command;
	PhoneBook	pb;

	std::cout << "Commands: ADD | SEARCH | EXIT" << std::endl;
	std::cout << "> ";
	while (1) {
		std::getline(std::cin, command);
		if (std::cin.bad())
			exit(EXIT_FAILURE);
		else if (std::cin.eof()) {
			std::cin.clear();
			clearerr(stdin);
			std::cout << "Invalid Command!" << std::endl;
		}
		else if (!command.compare("ADD"))
			pb.add();
		else if (!command.compare("SEARCH"))
			pb.search();
		else if (!command.compare("EXIT"))
			exit(EXIT_SUCCESS);
		else
			std::cout << "Invalid Command!" << std::endl;
		std::cout << "> ";
	}
}

// Motif
// Getting familiar with declaring classes and public/private members
// public members are always visible
// private members are only visible to other class members
// this keywords can be used by 'non-static' member functions to refer to the current object
// scope resolution operator '::' to define class functions outside of class
