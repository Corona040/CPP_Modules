#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

namespace easyfind {

	class NotFound: public std::exception {
		public:
			virtual const char *what(void) const throw() {
				return ("Not Found");
			}
	};

	template <typename T>
	typename T::iterator	easyfind(T container, int i) {
		if (std::find(container.begin(), container.end(), i) != container.end())
			return (std::find(container.begin(), container.end(), i));
		else
			throw easyfind::NotFound();
	}
}

#endif
