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
		~PhoneBook(void);

		void	add(void);
		void	search(void) const;

	private:
		void	display(void) const;
		void	select(void) const;

		std::string &replace_ws(std::string &str);
		bool		all_ws(std::string &str);

		Contact	contacts[8];
		size_t	current_idx;
};

#endif
