#include "Span.hpp"

Span::Span(unsigned int N): max_size(N) {}

Span::Span(const Span &s): max_size(s.max_size), numbers(s.numbers) {}

Span &(Span::operator=)(Span s) {
	std::swap(this->max_size, s.max_size);
	std::swap(this->numbers, s.numbers);
	return (*this);
}

Span::~Span(void) {}

void	Span::addNumber(int n) {
	std::vector<int>::iterator	it;

	if (this->numbers.size() >= this->max_size)
		throw std::out_of_range("Container is full");
	it = std::lower_bound(this->numbers.begin(), this->numbers.end(), n);
	this->numbers.insert(it, n);
}

int	Span::shortestSpan(void) {
	int	min_span;
	int	span;

	if (this->numbers.size() < 2)
		throw std::logic_error("Not enough numbers to calculate span");
	min_span = this->numbers[1] - this->numbers[0];
	for (size_t i = 1; i < this->numbers.size() - 1; i++) {
		span = this->numbers[i + 1] - this->numbers[i];
		if (span == 0) return (0);
		if (span < min_span)
			min_span = span;
	}
	return (min_span);
}

int	Span::longestSpan(void) {
	if (this->numbers.size() < 2)
		throw std::logic_error("Not enough numbers to calculate span");
	return (this->numbers[this->numbers.size() - 1] - this->numbers[0]);
}
