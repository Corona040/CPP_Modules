#include <cctype>
#include <cstddef>
#include <iostream>
#include <ostream>
#include <string>

int main(int argc, char **argv)
{
	std::string	str;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int arg_idx = 1; arg_idx < argc; arg_idx++)
		{
			str = argv[arg_idx];
			for (size_t str_idx = 0; str_idx < str.length(); str_idx++)
				std::cout << static_cast<char>(std::toupper(str[str_idx]));
		}
		std::cout << std::endl;
	}
}
