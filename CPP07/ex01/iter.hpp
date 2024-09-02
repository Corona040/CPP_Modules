#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>

template <typename T, typename U>
void	iter(T a[], size_t len, U (*f)(T)) {
	for (size_t i = 0; i < len; i++)
		f(a[i]);
}

#endif
