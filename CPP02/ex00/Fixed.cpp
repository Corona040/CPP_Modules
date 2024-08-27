#include "Fixed.hpp"

Fixed::Fixed(void): value(0) {
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(Fixed &f): value(f.getRawBits()) {
	std::cout << "Copy constructor called" << std::endl;
};

Fixed &(Fixed::operator =)(Fixed &rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	value = rhs.getRawBits();
	return (*this);
};

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
};

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}
