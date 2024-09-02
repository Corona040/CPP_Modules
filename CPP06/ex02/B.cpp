#include "B.hpp"

std::ostream &(operator<<)(std::ostream &os, const B &b) {
	(void)b;
	os << "B";
	return (os);
}
