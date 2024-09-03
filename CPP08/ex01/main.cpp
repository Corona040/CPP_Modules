#include <iostream>
#include "Span.hpp"

int main()
{
	Span sp = Span(7);
	Span span = Span(0);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	span = sp;
	span.addNumber(6);
	span.addNumber(6);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << span.shortestSpan() << std::endl;
	std::cout << span.longestSpan() << std::endl;

	return 0;
}
