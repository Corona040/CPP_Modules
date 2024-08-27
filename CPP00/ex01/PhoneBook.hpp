#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <cstdio>
# include <cstdlib>
# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook(void);
		PhoneBook(const PhoneBook &p);
		PhoneBook &(operator=)(PhoneBook const &rhs);
		~PhoneBook(void);

		void	add(void);
		void	search(void);

	private:
		void	display(void);
		void	select(void);

		std::string &replace_ws(std::string &str);
		bool		all_ws(std::string &str);

		Contact	contacts[8];
		size_t	current_idx;
};

#endif
