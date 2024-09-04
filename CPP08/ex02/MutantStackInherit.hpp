#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <class T, class Container = std::deque<T> >
class MutantStack: public std::stack<T, Container> {
	public:
		typedef typename Container::iterator	iterator;

		T			&(operator[])(const unsigned int idx);
		iterator	begin(void);
		iterator	end(void);
};

template <class T, class Container>
T			&(MutantStack<T, Container>::operator[])(const unsigned int idx) { return (this->c[idx]); }

template <class T, class Container>
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::begin(void) { return (this->c.begin()); }

template <class T, class Container>
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::end(void) { return (this->c.end()); }

#endif
