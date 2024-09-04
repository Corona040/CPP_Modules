#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <cstddef>
# include <stack>

template <class T, class Container = std::deque<T> >
class MutantStack {
	public:
		// OCF
		MutantStack(void);
		MutantStack(const MutantStack &ms);
		MutantStack &(operator=)(MutantStack ms);
		~MutantStack(void);

		// Stack methods
		bool	empty(void) const;
		size_t	size(void) const;
		T		&top(void) const;
		void	push(const T &val);
		void	pop(void);

		// Iterators
		typedef typename Container::iterator	iterator;
		iterator	begin(void);
		iterator	end(void);

		// Stack operators
		bool	(operator==)(const MutantStack &rhs);
		bool	(operator!=)(const MutantStack &rhs);
		bool	(operator<)(const MutantStack &rhs);
		bool	(operator<=)(const MutantStack &rhs);
		bool	(operator>)(const MutantStack &rhs);
		bool	(operator>=)(const MutantStack &rhs);

	private:
		std::stack<T, Container>	stack;
};

template <class T, class Container>
MutantStack<T, Container>::MutantStack(void) {}

template <class T, class Container>
MutantStack<T, Container>::MutantStack(const MutantStack &ms): stack(ms.stack) {}

template <class T, class Container>
MutantStack<T, Container> &(MutantStack<T, Container>::operator=)(MutantStack a) {
	this->stack = a.stack;
	return (*this);
}

template <class T, class Container>
MutantStack<T, Container>::~MutantStack(void) {}

template <class T, class Container>
bool	MutantStack<T, Container>::empty(void) const { return (this->stack.empty()); }

template <class T, class Container>
size_t	MutantStack<T, Container>::size(void) const { return (this->stack.size()); }

template <class T, class Container>
T	&MutantStack<T, Container>::top(void) const { return (this->stack.top()); }

template <class T, class Container>
void	MutantStack<T, Container>::push(const T &val) { this->stack.push(val); }

template <class T, class Container>
void	MutantStack<T, Container>::pop(void) { this->stack.pop(); }

template <class T, class Container>
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::begin(void) { this->stack[0]; }

template <class T, class Container>
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::end(void) { this->stack[this->stack.size() - 1]; }

template <class T, class Container>
bool	(MutantStack<T, Container>::operator==)(const MutantStack &rhs) { return (this->stack == rhs.stack); }

template <class T, class Container>
bool	(MutantStack<T, Container>::operator!=)(const MutantStack &rhs) { return (this->stack != rhs.stack); }

template <class T, class Container>
bool	(MutantStack<T, Container>::operator<)(const MutantStack &rhs) { return (this->stack < rhs.stack); }

template <class T, class Container>
bool	(MutantStack<T, Container>::operator<=)(const MutantStack &rhs) { return (this->stack <= rhs.stack); }

template <class T, class Container>
bool	(MutantStack<T, Container>::operator>)(const MutantStack &rhs) { return (this->stack > rhs.stack); }

template <class T, class Container>
bool	(MutantStack<T, Container>::operator>=)(const MutantStack &rhs) { return (this->stack >= rhs.stack); }

#endif
