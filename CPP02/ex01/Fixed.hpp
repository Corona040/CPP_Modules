#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {
	public:
		Fixed(void);
		Fixed(const int v);
		Fixed(const float v);
		Fixed(const Fixed &f);
		Fixed &(operator =)(const Fixed &rhs);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		int		toInt(void) const;
		float	toFloat(void) const;

	private:
		int					value;
		static const int	fract_bits = 8;
};
std::ostream &(operator <<)(std::ostream &os, const Fixed &rhs);

#endif
