#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include <cstddef>
#include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook(void);
		PhoneBook(const PhoneBook &p);
		PhoneBook &(operator=)(PhoneBook const &rhs);
		~PhoneBook(void);

	Contact	contacts[8];
	size_t	current_idx;
};

#endif
