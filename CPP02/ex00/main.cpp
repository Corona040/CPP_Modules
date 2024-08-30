#include "Fixed.hpp"

int	main(void) {
	Fixed	a;
	Fixed	b(a);
	Fixed	c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return (0);
}

// Motif
// Learning about Orthodox Cannonical Form (OCF)
//   Rule of 3
//     Constructor
//     Copy Constructor
//     Copy Assignment Operator (Copy and Swap Idiom)
//
//     + Destructor
