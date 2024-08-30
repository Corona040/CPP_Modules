#include <iostream>
#include <string>

int	main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string *pstr = &str;
	std::string &rstr = str;

	std::cout << &str << std::endl;
	std::cout << pstr << std::endl;
	std::cout << &rstr << std::endl;

	std::cout << str << std::endl;
	std::cout << *pstr << std::endl;
	std::cout << rstr << std::endl;
}

// Motif
// Learning about and using C++ references
