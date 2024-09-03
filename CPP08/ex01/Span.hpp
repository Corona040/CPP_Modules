#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <stdexcept>
# include <algorithm>

class Span {
	public:
		Span(unsigned int N);
		Span(const Span &s);
		Span &(operator=)(Span s);
		~Span(void);

		void	addNumber(int n);
		int		shortestSpan(void);
		int		longestSpan(void);
	
	private:
		unsigned int		max_size;
		std::vector<int>	numbers;
};

#endif
