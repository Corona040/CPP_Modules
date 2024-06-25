#include "Harl.hpp"
#include <iostream>
#include <string>

typedef void (f)(void);

Harl::Harl(void){};

Harl::~Harl(void){};

void	Harl::debug(void) {
	std::cout << "debug" << std::endl;
}

void	Harl::info(void) {
	std::cout << "info" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "warning" << std::endl;
}

void	Harl::error(void) {
	std::cout << "error" << std::endl;
}

void	Harl::complain(std::string level) {
	std::string	levels[] = {"debug", "info", "warning", "error"};
	f		Harl::*funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	(void)funcs;
	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			(this->*funcs[i])();
			break;
		}
	}
}
