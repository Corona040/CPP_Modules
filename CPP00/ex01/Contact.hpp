#ifndef CONTACT_H
# define CONTACT_H
#include <string>

class Contact {
	public:
		Contact(void);
		Contact(const Contact &c);
		Contact &(operator =)(Contact const &rhs);
		~Contact(void);

		std::string	info[5];
};

#endif
