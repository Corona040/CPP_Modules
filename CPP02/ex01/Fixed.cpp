#include "Fixed.hpp"

Fixed::Fixed(void): value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int v): value(v << fract_bits) {
	std::cout << "Integer parameter constructor called" << std::endl;
}


Fixed::Fixed(const float v) {
	std::cout << "Float parameter constructor called" << std::endl;
	value = (int)(v * (0b1 << fract_bits));
	double	dif = (double)this->toFloat() - v;
	if (dif > 0 && dif > ((double)1/(1 << fract_bits)))
			value -= 0b1;
	if (dif < 0 && dif < ((double)1/(1 << fract_bits)))
			value += 0b1;
}


Fixed::Fixed(const Fixed &f): value(f.getRawBits()) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &(Fixed::operator =)(Fixed rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = rhs.value;
	return (*this);
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

std::ostream &(operator <<)(std::ostream &os, const Fixed &rhs) {
	os << rhs.toFloat();
	return (os);
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

int	Fixed::toInt(void) const {
	return (value >> fract_bits);
}

float	Fixed::toFloat(void) const {
	return ((double)value/(double)(1 << fract_bits));
}
