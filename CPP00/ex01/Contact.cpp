#include "Contact.hpp"

Contact::Contact(void) {}
Contact::Contact(const Contact &c) {}
Contact &(Contact::operator=)(const Contact &p) {
	return (*this);
}
Contact::~Contact(void) {}
