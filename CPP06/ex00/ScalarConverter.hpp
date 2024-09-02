#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>
# include <iostream>
# include <cctype>
# include <cstdlib>
# include <iomanip>
# include <cmath>

class ScalarConverter {
	public:
		static void	convert(const std::string str);
	
	private:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter &s);
		ScalarConverter &(operator=)(ScalarConverter s);
		~ScalarConverter(void);
};

#endif
