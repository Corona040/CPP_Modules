#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>
void print(T a) {
	std::cout << a;
}

int	main(void) {
	int			a[5] = {1,2,3,4,5};
	std::string	b[3] = {"hello", " ", "world"};

	iter(a, 5, print<int>);
	std::cout << "\n";
	iter(b, 3, print<std::string>);
}

// Motif
// function temlate with array
