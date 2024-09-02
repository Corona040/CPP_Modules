#include "A.hpp"

std::ostream &(operator<<)(std::ostream &os, const A &a) {
	(void)a;
	os << "A";
	return (os);
}
