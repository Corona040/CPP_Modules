#include "PhoneBook.hpp"
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

void	add(PhoneBook &pb) {
	const std::string	fields[5] = {
		"Firstname: ",
		"Lastname: ", 
		"Nickname: ", 
		"Phone Number: ", 
		"Dark Secret: "
	};
	std::string			input;

	for (size_t i = 0; i < 5; i++) {
		std::cout << fields[i];
		std::cin >> input;
		while (input.empty()) {
			std::cout << std::endl;
			std::cin >> input;
		}
		pb.contacts[pb.current_idx % 8].info[i] = input;
	}
	pb.current_idx++;
}

void	search(PhoneBook &pb) {
	// DISPLAY
	std::string	display;

	std::cout << std::setw(10) << "   INDEX  " << "|";
	std::cout << std::setw(10) << "FIRST NAME" << "|";
	std::cout << std::setw(10) << " LAST NAME" << "|";
	std::cout << std::setw(10) << " NICKNAME " << std::endl;
	for (size_t i = 0; i < pb.current_idx && i < 8; i++) {
		std::cout << std::setw(10) << (i + 1) << "|";
		for (int j = 0; j < 3; j ++) {
			if (pb.contacts[i].info[j].length() > 10)
				display = pb.contacts[i].info[j].substr(0, 9) + ".";
			else
				display = pb.contacts[i].info[j];
			std::cout << std::setw(10) << display;
			if (j < 2)
				std::cout << "|";
		}
		std::cout << std::endl;
	}

	// SELECT
	const std::string	fields[5] = {
		"Firstname: ",
		"Lastname: ", 
		"Nickname: ", 
		"Phone Number: ", 
		"Dark Secret: "
	};
	std::string	input;
	int			index;
	std::cout << "Select By Index: ";
	std::cin >> input;
	index = atoi(input.c_str());
	std::cout << "Index: " << index << std::endl;
	if (index <= 0)
		std::cout << "Invalid Index!" << std::endl;
	else if (index > 8)
		std::cout << "Invalid Index!" << std::endl;
	else if (static_cast<size_t>(index) > pb.current_idx)
		std::cout << "Invalid Index!" << std::endl;
	else {
		for (int i = 0; i < 5; i++)
			std::cout << fields[i] << pb.contacts[index - 1].info[i] << std::endl;
	}
}

int	main(void) {
	std::string	command;
	PhoneBook	pb;

	std::cout << "Commands: ADD | SEARCH | EXIT" << std::endl;
	while (1)
	{
		std::cout << "> ";
		std::cin >> command;
		if (!command.compare("ADD"))
			add(pb);
		else if (!command.compare("SEARCH"))
			search(pb);
		else if (!command.compare("EXIT"))
			exit(EXIT_SUCCESS);
		else
			std::cout << "Invalid Command!" << std::endl;
	}
}