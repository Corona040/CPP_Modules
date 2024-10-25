#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>
# include <utility>

template <typename T>
class Array {
	public:
		Array(void);
		Array(const unsigned int n);
		Array(const Array &a);
		Array &(operator=)(Array<T> a);
		~Array(void);

		T &(operator[])(const unsigned int idx) const;

		unsigned int	length(void) const;

		class OutOfBounds: public std::exception {
			public:
				virtual const char	*what(void) const throw() {
					return ("Index Out of Bounds");
				}
		};

	private:
		T				*array;
		unsigned int	size;
};

template <typename T>
Array<T>::Array(void): array(new T[0]), size(0) {}

template <typename T>
Array<T>::Array(const unsigned int n): array(new T[n]), size(n) {
	for (unsigned int i = 0; i < n; i++)
		this->array[i] = 0;
}

template <typename T>
Array<T>::Array(const Array &a) {
	this->array = new T[a.size];
	for (unsigned int i = 0; i < a.size; i++) this->array[i] = a[i];
	this->size = a.size;
}

template <typename T>
Array<T> &(Array<T>::operator=)(Array a) {
	this->array = a.array;
	this->size = a.size;
	return (*this);
}

template <typename T>
Array<T>::~Array(void) {
	delete[] this->array;
}

template <typename T>
T &(Array<T>::operator[])(const unsigned int idx) const {
	if (idx >= size) {
		throw Array<T>::OutOfBounds();	
	}
	return (this->array[idx]);
}

template <typename T>
unsigned int	Array<T>::length(void) const {
	return (this->size);
}

template <typename T>
std::ostream	&(operator<<)(std::ostream &os, const Array<T> &a) {
	for (unsigned int i = 0; i < a.length(); i++)
		os << a[i];
	return (os);
}

#endif
