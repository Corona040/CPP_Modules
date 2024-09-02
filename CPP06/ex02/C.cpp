#include "C.hpp"

std::ostream &(operator<<)(std::ostream &os, const C &c) {
	(void)c;
	os << "C";
	return (os);
}
