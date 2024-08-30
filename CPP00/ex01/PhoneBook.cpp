#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void): current_idx(0) {}
PhoneBook::PhoneBook(const PhoneBook &p): current_idx(p.current_idx) {}
PhoneBook &(PhoneBook::operator=)(const PhoneBook &p) {
	return (*this);
}
PhoneBook::~PhoneBook(void){}

std::string &PhoneBook::replace_ws(std::string &str) {
	for (size_t i = 0; i < str.length(); i++) {
		if (std::isspace(str[i]))
			str[i] = ' ';
	}
	return (str);
}

bool	PhoneBook::all_ws(std::string &str) {
	bool	all_ws = true;

	for (size_t i = 0; i < str.length(); i++) {
		all_ws = all_ws && std::isspace(str[i]);
		if (!all_ws)
			break;
	}
	return (all_ws);
}

void	PhoneBook::add(void) {
	const std::string	ws = "\a\b\t\n\v\f\r ";
	const std::string	fields[5] = {
		"Firstname: ",
		"Lastname: ", 
		"Nickname: ", 
		"Phone Number: ", 
		"Dark Secret: "
	};
	std::string			input;
	bool				loop = true;

	for (size_t i = 0; i < 5; i++) {
		while (loop) {
			std::cout << fields[i];
			std::getline(std::cin, input);
			if (std::cin.bad())
				exit(EXIT_FAILURE);
			else if (std::cin.eof()) {
				std::cin.clear();
				clearerr(stdin);
			}
			else if (input.empty() || all_ws(input))
				std::cout << "Invalid field value!" << std::endl;
			else
				loop = false;
			if (loop)
				std::cout << std::endl;
		}
		loop = true;
		input.erase(0, input.find_first_not_of(ws));
		input.erase(input.find_last_not_of(ws) + 1);
		input = replace_ws(input);
		this->contacts[this->current_idx % 8].info[i] = input;
	}
	this->current_idx++;
}

void	PhoneBook::display(void) const {
	std::string	display;

	std::cout << std::setw(10) << "   INDEX  " << "|";
	std::cout << std::setw(10) << "FIRST NAME" << "|";
	std::cout << std::setw(10) << " LAST NAME" << "|";
	std::cout << std::setw(10) << " NICKNAME " << std::endl;
	for (size_t i = 0; i < this->current_idx && i < 8; i++) {
		std::cout << std::setw(10) << (i + 1) << "|";
		for (int j = 0; j < 3; j ++) {
			if (this->contacts[i].info[j].length() > 10)
				display = this->contacts[i].info[j].substr(0, 9) + ".";
			else
				display = this->contacts[i].info[j];
			std::cout << std::setw(10) << display;
			if (j < 2)
				std::cout << "|";
		}
		std::cout << std::endl;
	}
}

void	PhoneBook::select(void) const {
	const std::string	fields[5] = {
		"Firstname:    ",
		"Lastname:     ", 
		"Nickname:     ", 
		"Phone Number: ", 
		"Dark Secret:  "
	};
	std::string	input;
	int			index;
	bool		loop = true;

	std::cout << "Select By Index: ";
	while (loop) {
		std::getline(std::cin, input);
		if (std::cin.bad())
			exit(EXIT_FAILURE);
		else if (std::cin.eof()) {
			std::cin.clear();
			clearerr(stdin);
		}
		else {
			index = atoi(input.c_str());
			std::cout << "Index: " << index << std::endl;
			if (index <= 0)
				std::cout << "Invalid Index!" << std::endl;
			else if (index > 8)
				std::cout << "Invalid Index!" << std::endl;
			else if (static_cast<size_t>(index) > this->current_idx)
				std::cout << "Invalid Index!" << std::endl;
			else {
				for (int i = 0; i < 5; i++)
					std::cout << fields[i] << this->contacts[index - 1].info[i] << std::endl;
			}
			loop = false;
		}
	}
}

void	PhoneBook::search(void) const {
	PhoneBook::display();
	PhoneBook::select();
}
