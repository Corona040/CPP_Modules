#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {
	public:
		Fixed(void);
		Fixed(const Fixed &f);
		Fixed &(operator =)(Fixed rhs);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(const int raw);


	private:
		int					value;
		static const int	fract_bits = 8;
};

#endif
