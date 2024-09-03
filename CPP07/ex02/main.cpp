#include <iostream>
#include "Array.hpp"

int	main(void) {
	Array<int> a(1);
	Array<int> b(3);

	try {
		b[0] = 1;
		b[1] = 2;
		b[2] = 3;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		a = b;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		a[2] = 4;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

// Motif
// class templates
// template single definition rule
