#ifndef BRAIN_H
# define BRAIN_H

#include <string>

class Brain {
	public:
		Brain(void);
		Brain(const Brain &b);
		Brain &(operator=)(const Brain &rhs);
		~Brain(void);

		std::string	ideas[100];
};

#endif
