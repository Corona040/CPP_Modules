#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <ostream>

class Fixed {
	public:
		Fixed(void);
		Fixed(const int v);
		Fixed(const float v);
		Fixed(const Fixed &f);
		Fixed &(operator=)(const Fixed &rhs);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		int		toInt(void) const;
		float	toFloat(void) const;

		bool	(operator>)(const Fixed &rhs) const;
		bool	(operator<)(const Fixed &rhs) const;
		bool	(operator>=)(const Fixed &rhs) const;
		bool	(operator<=)(const Fixed &rhs) const;
		bool	(operator==)(const Fixed &rhs) const;
		bool	(operator!=)(const Fixed &rhs) const;
		Fixed	(operator+)(const Fixed &rhs) const;
		Fixed	(operator-)(const Fixed &rhs) const;
		Fixed	(operator*)(const Fixed &rhs) const;
		Fixed	(operator/)(const Fixed &rhs) const;
		Fixed	&(operator++)(void);
		Fixed	(operator++)(int);
		Fixed	&(operator--)(void);
		Fixed	(operator--)(int);

		static Fixed		&min(Fixed &lhs, Fixed &rhs);
		static const Fixed	&min(const Fixed &lhs, const Fixed &rhs);
		static Fixed		&max(Fixed &lhs, Fixed &rhs);
		static const Fixed	&max(const Fixed &lhs, const Fixed &rhs);

	private:
		int					value;
		static const int	fract_bits = 8;
};
std::ostream &(operator<<)(std::ostream &os, const Fixed &rhs);

#endif
