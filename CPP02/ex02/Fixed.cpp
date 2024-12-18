#include "Fixed.hpp"

/* ************************************************************************** */

Fixed::Fixed(void): value(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int v): value(v << fract_bits) {
	// std::cout << "Integer parameter constructor called" << std::endl;
}

Fixed::Fixed(const float v) {
	// std::cout << "Float parameter constructor called" << std::endl;
	value = (int)(v * (0b1 << fract_bits));
	double	dif = (double)this->toFloat() - v;
	if (dif > 0 && dif > ((double)1/(1 << fract_bits)))
			value -= 0b1;
	if (dif < 0 && dif < ((double)1/(1 << fract_bits)))
			value += 0b1;
}

Fixed::Fixed(const Fixed &f): value(f.getRawBits()) {
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed &(Fixed::operator=)(Fixed rhs) {
	// std::cout << "Copy assignment operator called" << std::endl;
	this->value = rhs.value;
	return (*this);
}

Fixed::~Fixed(void) {
	// std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void	Fixed::setRawBits(int const raw) {
	// std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

/* ************************************************************************** */

std::ostream &(operator<<)(std::ostream &os, const Fixed &rhs) {
	os << rhs.toFloat();
	return (os);
}

int	Fixed::toInt(void) const {
	return (value >> fract_bits);
}

float	Fixed::toFloat(void) const {
	return ((double)value/(double)(1 << fract_bits));
}

/* ************************************************************************** */

bool	(Fixed::operator>)(const Fixed &rhs) const {
	return (this->getRawBits() > rhs.getRawBits());
}

bool	(Fixed::operator<)(const Fixed &rhs) const {
	return (this->getRawBits() < rhs.getRawBits());
}

bool	(Fixed::operator>=)(const Fixed &rhs) const {
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	(Fixed::operator<=)(const Fixed &rhs) const {
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	(Fixed::operator==)(const Fixed &rhs) const {
	return (this->getRawBits() == rhs.getRawBits());
}

bool	(Fixed::operator!=)(const Fixed &rhs) const {
	return (this->getRawBits() != rhs.getRawBits());
}

Fixed	(Fixed::operator+)(const Fixed &rhs) const {
	Fixed result;
	result.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (result);
}

Fixed	(Fixed::operator-)(const Fixed &rhs) const {
	Fixed result;
	result.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (result);
}

Fixed	(Fixed::operator*)(const Fixed &rhs) const {
	Fixed result;
	result.value = (int)(((double)this->value * (double)rhs.value)/(1 << fract_bits));
	return (result);
}

Fixed	(Fixed::operator /)(const Fixed &rhs) const {
	Fixed result;
	result.value = (int)(((double)this->value / (double)rhs.value)*(1 << fract_bits));
	return (result);
}

Fixed	&(Fixed::operator++)(void) {
	this->setRawBits(this->getRawBits() + 0b1);
	return (*this);
}

Fixed	(Fixed::operator++)(int) {
	Fixed old = *this;
	this->operator++();
	return (old);
}

Fixed	&(Fixed::operator--)(void) {
	this->setRawBits(this->getRawBits() - 0b1);
	return (*this);
}

Fixed	(Fixed::operator--)(int) {
	Fixed old = *this;
	this->operator--();
	return (old);
}

Fixed	&Fixed::min(Fixed &lhs, Fixed &rhs) {
	if (lhs.getRawBits() <= rhs.getRawBits())
		return (lhs);
	return (rhs);
}

const Fixed	&Fixed::min(const Fixed &lhs, const Fixed &rhs) {
	if (lhs.getRawBits() <= rhs.getRawBits())
		return (lhs);
	return (rhs);
}

Fixed	&Fixed::max(Fixed &lhs, Fixed &rhs) {
	if (lhs.getRawBits() >= rhs.getRawBits())
		return (lhs);
	return (rhs);
}

const Fixed	&Fixed::max(const Fixed &lhs, const Fixed &rhs) {
	if (lhs.getRawBits() >= rhs.getRawBits())
		return (lhs);
	return (rhs);
}
