#include "ScalarConverter.hpp"
#include <iomanip>

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::ScalarConverter(const ScalarConverter &s) {
	(void)s;
}

ScalarConverter &(ScalarConverter::operator=)(ScalarConverter s) {
	(void)s;
	return (*this);
}

ScalarConverter::~ScalarConverter(void) {}

//SNAN
//SNANF
//INFINITY
//-INFINITY
void	ScalarConverter::convert(const std::string str) {
	struct {
		char	c;
		int		i;
		float	f;
		double	d;
		bool	nan;
		bool	inf;
	}	scalar;

	scalar.c = 0;
	scalar.nan = false;
	scalar.inf = false;
	if (str.length() == 1 && str[0] >= 32 && str[0] <= 126 && (str[0] < '0' || str[0] > '9')) {
		scalar.c = str[0];
		scalar.i = static_cast<int>(scalar.c);
		scalar.f = static_cast<float>(scalar.c);
		scalar.d = static_cast<double>(scalar.c);
	} else if (str == "nanf") {
		scalar.nan = true;
		scalar.f = SNANF;
		scalar.d = static_cast<double>(scalar.f);
	} else if (str == "inff") {
		scalar.inf = true;
		scalar.f = INFINITY;
		scalar.d = static_cast<double>(scalar.f);
	} else if (str == "-inff") {
		scalar.inf = true;
		scalar.f = -INFINITY;
		scalar.d = static_cast<double>(scalar.f);
	} else if (str == "nan") {
		scalar.nan = true;
		scalar.d = SNAN;
		scalar.f = static_cast<float>(scalar.d);
	} else if (str == "inf") {
		scalar.inf = true;
		scalar.d = INFINITY;
		scalar.f = static_cast<float>(scalar.d);
	} else if (str == "-inf") {
		scalar.inf = true;
		scalar.d = -INFINITY;
		scalar.f = static_cast<float>(scalar.d);
	} else if (!str.empty() && (std::isdigit(str[0]) || str[0] == '-' || str[0] == '+')) {
		bool	is_integer = true;
		bool	is_decimal = true;
		int		sep_count = 0;

		for (size_t i = (str[0] == '-' || str[0] == '+'); i < str.length(); i++) {
			if (!std::isdigit(str[i]))
				is_integer = false;
			if (!std::isdigit(str[i]) && !(str[i] == '.')) {
				if (i == str.length() - 1 && str[i] == 'f') {
					if (str[i - 1] == '.')
						is_decimal = false;
				} else
					is_decimal = false;
			}
			if (str[i] == '.')
				sep_count++;
			if (i == str.length() - 1 && str[i] == '.')
				is_decimal = false;
		}
		if (sep_count > 1)
			is_decimal = false;

		if (is_integer) {
			scalar.i = atoi(str.c_str());
			if (scalar.i >= 32 && scalar.i <= 126)
				scalar.c = static_cast<char>(scalar.i);
			scalar.f = static_cast<float>(scalar.i);
			scalar.d = static_cast<double>(scalar.i);
		} else if (is_decimal && str[str.length() - 1] == 'f') {
			scalar.f = atof(str.c_str());
			if (scalar.f >= 32 && scalar.f <= 126)
				scalar.c = static_cast<char>(scalar.f);
			scalar.i = static_cast<int>(scalar.f);
			scalar.d = static_cast<double>(scalar.f);
		} else if (is_decimal) {
			scalar.d = atof(str.c_str());
			if (scalar.d >= 32 && scalar.d <= 126)
				scalar.c = static_cast<char>(scalar.d);
			scalar.i = static_cast<int>(scalar.d);
			scalar.f = static_cast<float>(scalar.d);
		} else {
			std::cout << "char: Impossible\nint: Impossible\nfloat: Impossible\ndouble: Impossible" << std::endl;;
			return ;
		}
	} else {
		std::cout << "char: Impossible\nint: Impossible\nfloat: Impossible\ndouble: Impossible" << std::endl;;
		return ;
	}

	if (scalar.nan || scalar.inf) {
		std::cout << "char: Impossible\n";
		std::cout << "int: Impossible\n";
	}
	else {
		if (scalar.c == 0)
			std::cout << "char: Non displayable\n";
		else
			std::cout << "char: " << scalar.c << "\n";
		std::cout << "int: " << scalar.i << "\n";
	}
	std::cout << "float: " << std::fixed << std::setprecision(1) << scalar.f << "f\n";
	std::cout << "double: " << std::fixed << std::setprecision(1) << scalar.d << "\n";
}
